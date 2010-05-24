/************************************************************************** 
  LICENSE:

    gmLua is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    GMAPI is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with GMAPI; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
    02110-1301 USA
***************************************************************************/

#include "gmlua.h"

#define GMLUA_DOUBLE_API extern "C" __declspec(dllexport) double
#define GMLUA_STRING_API extern "C" __declspec(dllexport) char*

gm::CGMAPI*	gmapi;

GMLUA_DOUBLE_API gmluaInit()
{
	unsigned long result = 0;

	gmapi = gm::CGMAPI::Create(&result);

	// Check the result
	if (result != gm::GMAPI_INITIALIZATION_SUCCESS)
	{
		MessageBox(0, "Unable to initialize GMAPI.", 0, MB_SYSTEMMODAL | MB_ICONERROR);
		return false;
	}

	return true;
}

GMLUA_DOUBLE_API gmluaFree()
{
	gmapi->Destroy();

	return true;
}

GMLUA_DOUBLE_API setErrorScript(double sid)
{
	errorScript = (int)sid;
	return true;
}

GMLUA_DOUBLE_API newState()
{
	luaFile* f = new luaFile();

	f->lua = lua_open();

	if (!f->lua)
	{
		delete f;
		return 0;
	}

	luaL_openlibs(f->lua);

	return (double)(size_t)f;
}

GMLUA_DOUBLE_API destroyState(double i)
{
	luaFile* f = (luaFile*)(size_t)i;

	if (f == NULL)
		return false;

	lua_close(f->lua);

	delete f;

	return true;
}

GMLUA_DOUBLE_API loadFile(double i, char* filename)
{
	luaFile* f = (luaFile*)(size_t)i;

	int s = luaL_loadfile(f->lua, filename);
    
	if (s == 0)
	{
		s = lua_pcall(f->lua, 0, LUA_MULTRET, 0);

		if (s != 0)
		{
			_gmError(f->lua);

			return false;
		}

		return true;
	} else {
		return false;
	}
}

GMLUA_DOUBLE_API registerScript(double i, char* name, double callback)
{
	luaFile* f = (luaFile*)(size_t)i;

	f->addScript(name, (int)callback);

	return true;
}

GMLUA_DOUBLE_API callFunction(double i, char *name, double list)
{
	luaFile* f = (luaFile*)(size_t)i;

	f->call(name, (int)list);

	return true;
}

GMLUA_DOUBLE_API callEvent(double i, char *name, double list)
{
	luaFile* f = (luaFile*)(size_t)i;

	f->call(name, (int)list);

	gm::CGMVariable val = gm::ds_list_find_value((int)list, 0);

	if (val.real() == 1)
		return false;
	else
		return true;
}

GMLUA_DOUBLE_API addInternal(double i)
{
	luaFile* f = (luaFile*)(size_t)i;

	lua_pushcclosure(f->lua, _getGMFunction, 0);
	lua_setglobal(f->lua, "getGMFunction");

	lua_pushcclosure(f->lua, _getGMFunction, 0);
	lua_setglobal(f->lua, "callFunction");

	return true;
}

gm::GMVALUE args[21];
gm::GMVALUE res;

int _getGMFunction(lua_State* L)
{
	int argCount = lua_gettop(L);

	if (argCount != 1)
	{
		lua_pushstring(L, "getGMFunction takes only one parameter.");
		lua_error(L);
		return 0;
	}

	if (!lua_isstring(L, 1))
	{
		lua_pushstring(L, "getGMFunction: first parameter must be a string");
		lua_error(L);
		return 0;
	}

	lua_pushnumber(L, (double)(size_t)gmapi->GetGMFunctionAddress(lua_tostring(L, 1)));

	return 1;
}

int _callFunction(lua_State* L)
{
	int argCount = lua_gettop(L);

	if (argCount < 1)
	{
		lua_pushstring(L, "callFunction requires at least one parameter.");
		lua_error(L);
		return 0;
	}

	if (!lua_isnumber(L, 1))
	{
		lua_pushstring(L, "callFunction: provided function isn't a number.");
		lua_error(L);
		return 0;
	}

	if (lua_tonumber(L, 1) == 0)
	{
		lua_pushstring(L, "callFunction: provided function is NULL.");
		lua_error(L);
		return 0;
	}

	gm::GMFUCTION func = (gm::GMFUCTION)(size_t)lua_tonumber(L, 1);

	for (int i = 2; i < argCount; i++)
	{
		if (lua_isstring(L, i))
			args[i - 2].Set(lua_tostring(L, i));
		else if (lua_isnumber(L, i))
			args[i - 2].Set(lua_tonumber(L, i));
		else
		{
			lua_pushstring(L, "callFunction: parameter(s) must be a string or number (not integer)");
			lua_error(L);
			return 0;
		}
	}

	/* CALL FUNCTION */

	if (res.type == gm::GMValueType::VT_REAL)
	{
		lua_pushnumber(L, args[0].real);
	} else if (res.type == gm::GMValueType::VT_STRING) {
		lua_pushstring(L, args[0].string);
	} else {
		lua_pushstring(L, "callFunction: return value isn't a real ot string, something is wrong.");
		lua_error(L);
		return 0;
	}

	return 1;
}

