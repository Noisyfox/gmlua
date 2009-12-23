#include "gmlua.h"

#define GMLUA_DOUBLE_API extern "C" __declspec( dllexport ) double
#define GMLUA_STRING_API extern "C" __declspec( dllexport ) char*

GMLUA_DOUBLE_API setErrorScript( double i, double sid );
GMLUA_DOUBLE_API newFile();
GMLUA_DOUBLE_API registerScript( double i, char *name, double callback );
GMLUA_DOUBLE_API callFunction( double i, char *name, double list );
GMLUA_DOUBLE_API callEvent( double i, char *name, double list );
GMLUA_DOUBLE_API execute( double i, char *filename );
GMLUA_DOUBLE_API destroy( double i );

gm::CGMAPI* gmapi;
unsigned long result;

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
	{
		case DLL_PROCESS_ATTACH:
			// Initialization
			result = 0;
			gmapi = gm::CGMAPI::Create(&result);

			// Check the result
			if (result != gm::GMAPI_INITIALIZATION_SUCCESS)
			{
				MessageBox( 0, "Unable to initialize GMAPI.", 0, MB_SYSTEMMODAL | MB_ICONERROR );
				return FALSE;
			}

      GMTOLUA::_map();

			break;

		case DLL_PROCESS_DETACH:
			// Release from memory & deinitialize GMAPI
			gmapi->Destroy();
			break;
    }
    return TRUE;
}

GMLUA_DOUBLE_API setErrorScript( double i, double sid )
{
  luaFile *f = luaFile::find( (int) i );
  f->errorScript = (int)sid;
  return true;
}

GMLUA_DOUBLE_API newFile()
{
  luaFile *f = new luaFile();
  f->lua = lua_open();

	if( !f->lua )
	{
		return false;
	}

  luaL_openlibs(f->lua);
	//lua_register( L, "draw_sprite", luaf::draw_sprite );
  double size = luaFile::luaFiles.size() + 1;
  luaFile::luaFiles.insert( std::pair<int, luaFile*>( (int)size, f ) );

	return size;
}

GMLUA_DOUBLE_API registerScript( double i, char *name, double callback )
{
  luaFile *f = luaFile::find( i );

  //if( strcmp( "show_message", name ) == 0 ) __asm int 3;

  if( callback == -1 )
  {
    f->registerGMTOLUA( name );
    return true;
  }

  f->addScript( name, callback );
	return true;
}

GMLUA_DOUBLE_API callFunction( double i, char *name, double list )
{
  luaFile *f = luaFile::find( i );
  f->call( name, (int)list );
  return true;
}

GMLUA_DOUBLE_API callEvent( double i, char *name, double list )
{
  luaFile *f = luaFile::find( i );
  f->call( name, (int)list );

  gm::CGMVariable val = gm::ds_list_find_value( (int)list, 0 );

  if( val.real() == 1 )
  {
    return 0;
  }
  else
  {
    return 1;
  }
}

GMLUA_DOUBLE_API execute( double i, char *filename )
{
  luaFile *f = luaFile::find( (int)i );

	int s = luaL_loadfile( f->lua, filename );
    
	if ( s == 0 )
	{
    s = lua_pcall( f->lua, 0, LUA_MULTRET, 0 );
  }

  _gmError( f->lua, s );

  if( s != 0 )
  {
    return false;
  }

	return true;
}

GMLUA_DOUBLE_API destroy( double i )
{
  luaFile *f = luaFile::find( (int)i );
	lua_close( f->lua );

  delete f;

	return 1;
}
