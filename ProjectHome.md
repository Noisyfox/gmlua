**Game Maker's** language doesn't have features that let you use scripting languages, gmLua allows to use **Lua** scripts in your GM game.

# Features: #
  * Call GM functions and scripts from Lua scripts (thanks to GMAPI)
  * Call Lua functions from GM
  * Simple events system

# Download #
  * [gmLua v0.4](http://gmlua.googlecode.com/files/gmlua_0.4.zip)

# How to compile #
You can compile gmLua yourself. It depends on two libraries: **GMAPI** and **Lua5**.

GMAPI is written by a Polish programmer, Snake, you can download it [here](http://gmc.yoyogames.com/index.php?showtopic=429267). It allows you to interact with GM from C++.

You can download the Lua binaries [here](http://gmlua.googlecode.com/files/lua5_1_4_Win32_dll8_lib.zip).

gmLua is developed and compiled with Microsoft Visual C++ 2008, the source includes a project file.

# Example Usage #
### In GML: ###
```
luaStart();

lua = luaNew();

if(!lua)
{
    show_error("Failed to create Lua state.", true);
}

luaRegister(lua, "showMessage", showMessage);
luaLoadFile(lua, get_string("Type your Lua script path (default: game.lua)", "game.lua"));
luaEvent(lua, "onCreate", 1, id);
```
### In Lua: ###
```
function onCreate(id) -- onCreate, called from GML.
	showMessage("ID: " .. tostring(id))
end
```

# Todo #
  * Redo registering GM functions

# Changelog #
### v0.4 ###
  * finished new system for calling GM functions

### v0.3 ###
  * redid most of the DLL
  * removed calling of GM function temporarily, new method being thought of

### v0.2 ###
  * renamed GM scripts
  * support for registering default GM functions
  * added luaCall function which make able to call Lua function
  * rewritten code
  * some bug fixed
  * usage of new GMAPI