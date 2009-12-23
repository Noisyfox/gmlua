#include "gmlua.h"

std::map<int, luaFile*> luaFile::luaFiles;

luaFile::luaFile()
{
  errorScript = -1;
}

int luaFile::getScript( std::string name )
{
  std::map<std::string, int>::iterator it = scripts.find( name );

  if( it == scripts.end() )
  {
    return NULL;
  }

  return it->second;
}

void luaFile::addScript( std::string name, int callback )
{
	lua_pushstring(lua, name.c_str() );
	lua_pushcclosure(lua, _gmCall, 1);
	lua_setglobal(lua, name.c_str() );

  scripts.insert( std::pair<std::string, int>( name, callback ) );
}

luaFile *luaFile::find( lua_State*s )
{
  std::map<int, luaFile*>::iterator i = luaFile::luaFiles.begin();

  for( ; i != luaFile::luaFiles.end(); ++i )
  {
    if( i->second->lua == s )
    {
      return i->second;
    }
  }

  return NULL;
}

luaFile *luaFile::find( int s )
{
  std::map<int, luaFile*>::iterator it = luaFile::luaFiles.find( s );
  return it->second;
}

void luaFile::call( char *name, int list )
{
	lua_getglobal( lua, name );
	int argc = gm::ds_list_size( list );

	if( argc > 0 )
	{
		for( int n=0; n < argc; n++ )
		{
			gm::CGMVariable val = gm::ds_list_find_value( list, n );

			if( val.IsString() )
			{
				lua_pushstring( lua, val.c_str() );
			}
			else
			{
				lua_pushnumber( lua, val.real() );
			}
		}
  }

	lua_call( lua, argc, 1 );

  gm::ds_list_clear( list );

  if( lua_type( lua, -1 ) == LUA_TSTRING )
  {
    gm::ds_list_add( list, lua_tostring(lua, -1) );
  }
  else
  {
    gm::ds_list_add( list, lua_tonumber(lua, -1) );
  }
  
  lua_pop(lua, 1);
}

void luaFile::registerGMTOLUA( std::string name )
{
  std::map<std::string, lua_CFunction>::iterator it = GMTOLUA::functions.find( name );

  if( it == GMTOLUA::functions.end() )
  {
    return;
  }

  lua_register( lua, name.c_str(), it->second );
}

int _gmCall( lua_State *L )
{
	lua_pushvalue( L, lua_upvalueindex(1) );
	int argc = lua_gettop( L ) - 1;
  luaFile *file = luaFile::find( L );
  int callback = file->getScript( lua_tostring( L, argc + 1 ) );

  //std::stringstream ss;
  //ss << callback;

  //MessageBox(0, ss.str().c_str(), 0, 0 );

	if( callback == NULL )
	{
		MessageBox(0, "Error! Script not found, but it's defined in Lua", 0, 0 );
		return 0;
	}

	gm::CGMVariable *arg = new gm::CGMVariable[ argc ];

	for( int i = 0; i <= argc-1; i++ )
	{
		if( lua_type( L, i+1 ) == LUA_TSTRING )
		{
			arg[i] = lua_tostring( L, i+1 );
		}
		else if( lua_type( L, i+1 ) == LUA_TNUMBER )
		{
			arg[i] = lua_tonumber( L, i+1 );
		}
	}

	gm::CGMVariable result = gm::script_execute( callback, arg, argc );

	if( result.IsString() )
	{
		lua_pushstring( L, result.c_str() );
	}
	else
	{
		if( result.real() == 0 )
		{
			return 0;
		}

		lua_pushnumber( L, result.real() );
	}

	return 1;
}

int _gmError( lua_State *L, int status )
{
	if( status != 0 )
	{
    luaFile *file = luaFile::find( L );

    if( file->errorScript == -1 )
		{
			gm::show_message( lua_tostring(L, -1) );
		}
		else
		{
			gm::CGMVariable *arg = new gm::CGMVariable( lua_tostring(L, -1) );
			gm::script_execute( file->errorScript, arg, 1 );
		}
		
		lua_pop(L, 1);
	}

	return 1;
}
