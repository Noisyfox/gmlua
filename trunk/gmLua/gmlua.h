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

#pragma once
#include "gmfunctions.h"

int _gmCall( lua_State *L );
int _gmError( lua_State *L, int status );

class luaFile {
public:
  luaFile();
  lua_State* lua;
  int errorScript;
  int getScript( std::string name );
  void addScript( std::string name, int callback );
  void call( char *name, int list );
  void registerGMTOLUA( std::string name );
  static luaFile *find( lua_State*s );
  static luaFile *find( int s );
  static std::map<int, luaFile*> luaFiles;
  std::map<std::string, int> scripts;
};