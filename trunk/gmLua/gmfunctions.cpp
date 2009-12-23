#include "gmfunctions.h"

namespace GMTOLUA
{
  std::map<std::string, lua_CFunction> functions;

  int show_message( lua_State *lua )
  {
    gm::show_message( lua_tostring( lua, 1 ) );
    return 0;
  }

  int draw_text( lua_State *lua )
  {
    gm::draw_text( lua_tonumber( lua, 1 ), lua_tonumber( lua, 2 ), lua_tostring( lua, 3 ) );
    return 0;
  }

  void _map()
  {
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "show_message", GMTOLUA::show_message ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_text", GMTOLUA::draw_text ) );
  }
};

