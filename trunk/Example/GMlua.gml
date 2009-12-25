#define luaDestroy
return external_call( global.f_lua_destroy, argument0 );
#define luaLoadFile
return external_call( global.f_lua_load, argument0, argument1 );
#define luaEvent
list = ds_list_create();

for( i=2; i <= 15; i+=1 )
{
    if( is_real(argument[i]) )
    {
        if( argument[i] == 0 )
            break;
    }

    ds_list_add( list, argument[i] );
}

return external_call( global.f_lua_event, argument0, argument1, list );
//return 1;
#define luaCall
list = ds_list_create();

for( i=2; i <= 15; i+=1 )
{
    if( is_real(argument[i]) )
    {
        if( argument[i] == 0 )
            break;
    }

    ds_list_add( list, argument[i] );
}

external_call( global.f_lua_call, argument0, argument1, list );

return ds_list_find_value( list, 0 );
#define luaRegister
if( !argument2 )
{
    argument2 = -1;
}

return external_call( global.f_lua_register, argument0, argument1, argument2 );
#define luaNew
global.f_lua_dll = "gmLua.dll";

/*
 * Register an GM script in LUA
 * string lua_function, string gamemaker_script
 * return false on fail
 * NOTE: Allmost all GameMaker functions arleady are in LUA, so don't worry
 */
 
if( !variable_global_exists( "f_lua_register" ) )
{
    global.f_lua_register = external_define( global.f_lua_dll, "registerScript", dll_cdecl, ty_real, 3, ty_real, ty_string, ty_real );
}
/*
 * Send event to LUA script
 * string event_name
 * return false on cancelEvent() in LUA code
 */
if( !variable_global_exists( "f_lua_event" ) )
{ 
    global.f_lua_event = external_define( global.f_lua_dll, "callEvent", dll_cdecl, ty_real, 3, ty_real, ty_string, ty_real );
}

if( !variable_global_exists( "f_lua_call" ) )
{ 
    global.f_lua_call = external_define( global.f_lua_dll, "callFunction", dll_cdecl, ty_real, 3, ty_real, ty_string, ty_real );
}
/*
 * Load LUA script
 * string filename
 * return false on fail
 */

if( !variable_global_exists( "f_lua_load" ) )
{
    global.f_lua_load = external_define( global.f_lua_dll, "execute", dll_cdecl, ty_real, 2, ty_real, ty_string );
}

// Init an LUA SYSTEM
if( !variable_global_exists( "f_lua_destroy" ) )
{
    global.f_lua_destroy = external_define( global.f_lua_dll, "destroy", dll_cdecl, ty_real, 1, ty_real );
}


// Init an LUA SYSTEM
if( !variable_global_exists( "f_lua_new" ) )
{
    global.f_lua_new = external_define( global.f_lua_dll, "newFile", dll_cdecl, ty_real, 0);
}

return external_call( global.f_lua_new );
#define luaSetErrorScript
return external_call( global.f_lua_seterrorscript, argument0, argument1 );
