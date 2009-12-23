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