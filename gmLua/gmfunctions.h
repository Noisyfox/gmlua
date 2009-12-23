#pragma once

#include <windows.h>
#include <string>
#include <sstream>
#include <map>
#define GMAPI_NO_D3D
#include "Gmapi.h"
extern "C"
{
	#include "lua.h"
	#include "lualib.h"
	#include "lauxlib.h"
}

namespace GMTOLUA
{
  extern std::map<std::string, lua_CFunction> functions;

  int show_message( lua_State *lua );
  int draw_text( lua_State *lua );

  void _map();
};