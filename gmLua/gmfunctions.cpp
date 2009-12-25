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

#include "gmfunctions.h"

namespace GMTOLUA
{
  std::map<std::string, lua_CFunction> functions;

  void _map()
  {
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_sprite", GMTOLUA::draw_sprite ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_sprite_tiled", GMTOLUA::draw_sprite_tiled ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_background", GMTOLUA::draw_background ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_background_tiled", GMTOLUA::draw_background_tiled ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_clear", GMTOLUA::draw_clear ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_clear_alpha", GMTOLUA::draw_clear_alpha ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_point", GMTOLUA::draw_point ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_line", GMTOLUA::draw_line ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_circle", GMTOLUA::draw_circle ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_set_circle_precision", GMTOLUA::draw_set_circle_precision ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_path", GMTOLUA::draw_path ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_set_color", GMTOLUA::draw_set_color ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_set_alpha", GMTOLUA::draw_set_alpha ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_get_color", GMTOLUA::draw_get_color ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_get_alpha", GMTOLUA::draw_get_alpha ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "make_color_rgb", GMTOLUA::make_color_rgb ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "make_color_hsv", GMTOLUA::make_color_hsv ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "color_get_red", GMTOLUA::color_get_red ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "color_get_green", GMTOLUA::color_get_green ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "color_get_blue", GMTOLUA::color_get_blue ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "color_get_hue", GMTOLUA::color_get_hue ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "color_get_saturation", GMTOLUA::color_get_saturation ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "color_get_value", GMTOLUA::color_get_value ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "merge_color", GMTOLUA::merge_color ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_getpixel", GMTOLUA::draw_getpixel ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "screen_save", GMTOLUA::screen_save ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_set_font", GMTOLUA::draw_set_font ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_set_halign", GMTOLUA::draw_set_halign ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_set_valign", GMTOLUA::draw_set_valign ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_text", GMTOLUA::draw_text ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "string_width", GMTOLUA::string_width ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "string_height", GMTOLUA::string_height ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "string_width_ext", GMTOLUA::string_width_ext ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "string_height_ext", GMTOLUA::string_height_ext ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_point_color", GMTOLUA::draw_point_color ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_primitive_begin", GMTOLUA::draw_primitive_begin ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_vertex", GMTOLUA::draw_vertex ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_vertex_color", GMTOLUA::draw_vertex_color ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_primitive_end", GMTOLUA::draw_primitive_end ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "sprite_get_texture", GMTOLUA::sprite_get_texture ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "background_get_texture", GMTOLUA::background_get_texture ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "texture_preload", GMTOLUA::texture_preload ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "texture_set_priority", GMTOLUA::texture_set_priority ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "texture_get_width", GMTOLUA::texture_get_width ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "texture_get_height", GMTOLUA::texture_get_height ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_primitive_begin_texture", GMTOLUA::draw_primitive_begin_texture ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_primitive_end", GMTOLUA::draw_primitive_end ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "texture_set_interpolation", GMTOLUA::texture_set_interpolation ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "texture_set_blending", GMTOLUA::texture_set_blending ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "texture_set_repeat", GMTOLUA::texture_set_repeat ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_set_blend_mode", GMTOLUA::draw_set_blend_mode ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_set_blend_mode_ext", GMTOLUA::draw_set_blend_mode_ext ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "surface_create", GMTOLUA::surface_create ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "surface_free", GMTOLUA::surface_free ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "surface_exists", GMTOLUA::surface_exists ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "surface_get_width", GMTOLUA::surface_get_width ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "surface_get_height", GMTOLUA::surface_get_height ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "surface_get_texture", GMTOLUA::surface_get_texture ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "surface_set_target", GMTOLUA::surface_set_target ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "surface_reset_target", GMTOLUA::surface_reset_target ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "surface_getpixel", GMTOLUA::surface_getpixel ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "surface_save", GMTOLUA::surface_save ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_surface", GMTOLUA::draw_surface ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "draw_surface_tiled", GMTOLUA::draw_surface_tiled ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "surface_copy", GMTOLUA::surface_copy ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_delete", GMTOLUA::tile_delete ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_exists", GMTOLUA::tile_exists ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_get_x", GMTOLUA::tile_get_x ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_get_y", GMTOLUA::tile_get_y ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_get_left", GMTOLUA::tile_get_left ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_get_top", GMTOLUA::tile_get_top ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_get_width", GMTOLUA::tile_get_width ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_get_height", GMTOLUA::tile_get_height ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_get_depth", GMTOLUA::tile_get_depth ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_get_visible", GMTOLUA::tile_get_visible ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_get_xscale", GMTOLUA::tile_get_xscale ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_get_yscale", GMTOLUA::tile_get_yscale ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_get_background", GMTOLUA::tile_get_background ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_get_blend", GMTOLUA::tile_get_blend ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_get_alpha", GMTOLUA::tile_get_alpha ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_set_position", GMTOLUA::tile_set_position ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_set_background", GMTOLUA::tile_set_background ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_set_visible", GMTOLUA::tile_set_visible ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_set_depth", GMTOLUA::tile_set_depth ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_set_scale", GMTOLUA::tile_set_scale ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_set_blend", GMTOLUA::tile_set_blend ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_set_alpha", GMTOLUA::tile_set_alpha ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_layer_hide", GMTOLUA::tile_layer_hide ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_layer_show", GMTOLUA::tile_layer_show ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_layer_delete", GMTOLUA::tile_layer_delete ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_layer_shift", GMTOLUA::tile_layer_shift ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_layer_find", GMTOLUA::tile_layer_find ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_layer_delete_at", GMTOLUA::tile_layer_delete_at ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "tile_layer_depth", GMTOLUA::tile_layer_depth ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "display_get_width", GMTOLUA::display_get_width ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "display_get_height", GMTOLUA::display_get_height ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "display_get_colordepth", GMTOLUA::display_get_colordepth ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "display_get_frequency", GMTOLUA::display_get_frequency ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "display_set_size", GMTOLUA::display_set_size ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "display_set_colordepth", GMTOLUA::display_set_colordepth ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "display_set_frequency", GMTOLUA::display_set_frequency ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "display_set_all", GMTOLUA::display_set_all ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "display_test_all", GMTOLUA::display_test_all ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "display_reset", GMTOLUA::display_reset ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "display_mouse_get_x", GMTOLUA::display_mouse_get_x ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "display_mouse_get_y", GMTOLUA::display_mouse_get_y ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "display_mouse_set", GMTOLUA::display_mouse_set ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_set_visible", GMTOLUA::window_set_visible ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_get_visible", GMTOLUA::window_get_visible ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_set_fullscreen", GMTOLUA::window_set_fullscreen ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_get_fullscreen", GMTOLUA::window_get_fullscreen ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_set_showborder", GMTOLUA::window_set_showborder ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_get_showborder", GMTOLUA::window_get_showborder ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_set_showicons", GMTOLUA::window_set_showicons ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_get_showicons", GMTOLUA::window_get_showicons ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_set_stayontop", GMTOLUA::window_set_stayontop ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_get_stayontop", GMTOLUA::window_get_stayontop ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_set_sizeable", GMTOLUA::window_set_sizeable ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_get_sizeable", GMTOLUA::window_get_sizeable ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_set_caption", GMTOLUA::window_set_caption ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_get_caption", GMTOLUA::window_get_caption ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_set_cursor", GMTOLUA::window_set_cursor ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_get_cursor", GMTOLUA::window_get_cursor ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_set_color", GMTOLUA::window_set_color ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_get_color", GMTOLUA::window_get_color ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_set_region_scale", GMTOLUA::window_set_region_scale ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_get_region_scale", GMTOLUA::window_get_region_scale ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_set_position", GMTOLUA::window_set_position ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_set_size", GMTOLUA::window_set_size ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_set_rectangle", GMTOLUA::window_set_rectangle ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_center", GMTOLUA::window_center ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_default", GMTOLUA::window_default ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_get_x", GMTOLUA::window_get_x ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_get_y", GMTOLUA::window_get_y ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_get_width", GMTOLUA::window_get_width ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_get_height", GMTOLUA::window_get_height ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_mouse_get_x", GMTOLUA::window_mouse_get_x ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_mouse_get_y", GMTOLUA::window_mouse_get_y ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_mouse_set", GMTOLUA::window_mouse_set ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_set_region_size", GMTOLUA::window_set_region_size ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_get_region_width", GMTOLUA::window_get_region_width ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_get_region_height", GMTOLUA::window_get_region_height ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_view_mouse_get_x", GMTOLUA::window_view_mouse_get_x ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_view_mouse_get_y", GMTOLUA::window_view_mouse_get_y ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_view_mouse_set", GMTOLUA::window_view_mouse_set ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_views_mouse_get_x", GMTOLUA::window_views_mouse_get_x ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_views_mouse_get_y", GMTOLUA::window_views_mouse_get_y ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "window_views_mouse_set", GMTOLUA::window_views_mouse_set ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "screen_redraw", GMTOLUA::screen_redraw ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "screen_refresh", GMTOLUA::screen_refresh ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "set_automatic_draw", GMTOLUA::set_automatic_draw ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "set_synchronization", GMTOLUA::set_synchronization ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "screen_wait_vsync", GMTOLUA::screen_wait_vsync ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "place_free", GMTOLUA::place_free ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "place_empty", GMTOLUA::place_empty ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "place_meeting", GMTOLUA::place_meeting ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "place_snapped", GMTOLUA::place_snapped ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "move_random", GMTOLUA::move_random ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "move_snap", GMTOLUA::move_snap ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "move_wrap", GMTOLUA::move_wrap ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "move_towards_point", GMTOLUA::move_towards_point ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "move_bounce_solid", GMTOLUA::move_bounce_solid ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "move_bounce_all", GMTOLUA::move_bounce_all ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "move_contact_solid", GMTOLUA::move_contact_solid ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "move_contact_all", GMTOLUA::move_contact_all ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "move_outside_solid", GMTOLUA::move_outside_solid ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "move_outside_all", GMTOLUA::move_outside_all ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "distance_to_point", GMTOLUA::distance_to_point ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "distance_to_object", GMTOLUA::distance_to_object ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "position_empty", GMTOLUA::position_empty ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "position_meeting", GMTOLUA::position_meeting ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "path_end", GMTOLUA::path_end ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "mp_grid_destroy", GMTOLUA::mp_grid_destroy ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "mp_grid_clear_all", GMTOLUA::mp_grid_clear_all ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "mp_grid_clear_cell", GMTOLUA::mp_grid_clear_cell ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "mp_grid_add_cell", GMTOLUA::mp_grid_add_cell ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "mp_grid_add_instances", GMTOLUA::mp_grid_add_instances ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "mp_grid_draw", GMTOLUA::mp_grid_draw ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "instance_find", GMTOLUA::instance_find ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "instance_exists", GMTOLUA::instance_exists ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "instance_number", GMTOLUA::instance_number ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "instance_position", GMTOLUA::instance_position ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "instance_nearest", GMTOLUA::instance_nearest ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "instance_furthest", GMTOLUA::instance_furthest ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "instance_place", GMTOLUA::instance_place ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "instance_create", GMTOLUA::instance_create ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "instance_copy", GMTOLUA::instance_copy ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "instance_destroy", GMTOLUA::instance_destroy ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "instance_change", GMTOLUA::instance_change ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "position_destroy", GMTOLUA::position_destroy ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "position_change", GMTOLUA::position_change ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "instance_deactivate_all", GMTOLUA::instance_deactivate_all ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "instance_deactivate_object", GMTOLUA::instance_deactivate_object ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "instance_activate_all", GMTOLUA::instance_activate_all ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "instance_activate_object", GMTOLUA::instance_activate_object ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "room_goto", GMTOLUA::room_goto ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "room_goto_previous", GMTOLUA::room_goto_previous ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "room_goto_next", GMTOLUA::room_goto_next ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "room_restart", GMTOLUA::room_restart ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "room_previous", GMTOLUA::room_previous ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "room_next", GMTOLUA::room_next ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "game_end", GMTOLUA::game_end ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "game_restart", GMTOLUA::game_restart ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "game_save", GMTOLUA::game_save ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "game_load", GMTOLUA::game_load ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "transition_define", GMTOLUA::transition_define ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "transition_exists", GMTOLUA::transition_exists ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "event_perform", GMTOLUA::event_perform ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "event_perform_object", GMTOLUA::event_perform_object ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "event_user", GMTOLUA::event_user ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "event_inherited", GMTOLUA::event_inherited ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "show_debug_message", GMTOLUA::show_debug_message ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "variable_global_exists", GMTOLUA::variable_global_exists ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "variable_local_exists", GMTOLUA::variable_local_exists ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "variable_global_get", GMTOLUA::variable_global_get ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "variable_global_array_get", GMTOLUA::variable_global_array_get ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "variable_local_get", GMTOLUA::variable_local_get ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "variable_local_array_get", GMTOLUA::variable_local_array_get ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "variable_global_set", GMTOLUA::variable_global_set ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "variable_local_set", GMTOLUA::variable_local_set ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "set_program_priority", GMTOLUA::set_program_priority ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "keyboard_set_map", GMTOLUA::keyboard_set_map ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "keyboard_get_map", GMTOLUA::keyboard_get_map ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "keyboard_unset_map", GMTOLUA::keyboard_unset_map ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "keyboard_check", GMTOLUA::keyboard_check ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "keyboard_check_pressed", GMTOLUA::keyboard_check_pressed ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "keyboard_check_released", GMTOLUA::keyboard_check_released ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "keyboard_check_direct", GMTOLUA::keyboard_check_direct ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "keyboard_get_numlock", GMTOLUA::keyboard_get_numlock ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "keyboard_set_numlock", GMTOLUA::keyboard_set_numlock ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "keyboard_key_press", GMTOLUA::keyboard_key_press ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "keyboard_key_release", GMTOLUA::keyboard_key_release ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "keyboard_clear", GMTOLUA::keyboard_clear ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "keyboard_wait", GMTOLUA::keyboard_wait ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "mouse_check_button", GMTOLUA::mouse_check_button ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "mouse_check_button_pressed", GMTOLUA::mouse_check_button_pressed ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "mouse_check_button_released", GMTOLUA::mouse_check_button_released ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "mouse_clear", GMTOLUA::mouse_clear ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "io_clear", GMTOLUA::io_clear ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "io_handle", GMTOLUA::io_handle ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "mouse_wait", GMTOLUA::mouse_wait ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "joystick_exists", GMTOLUA::joystick_exists ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "joystick_name", GMTOLUA::joystick_name ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "joystick_axes", GMTOLUA::joystick_axes ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "joystick_buttons", GMTOLUA::joystick_buttons ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "joystick_has_pov", GMTOLUA::joystick_has_pov ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "joystick_direction", GMTOLUA::joystick_direction ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "joystick_check_button", GMTOLUA::joystick_check_button ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "joystick_xpos", GMTOLUA::joystick_xpos ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "joystick_ypos", GMTOLUA::joystick_ypos ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "joystick_zpos", GMTOLUA::joystick_zpos ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "joystick_rpos", GMTOLUA::joystick_rpos ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "joystick_upos", GMTOLUA::joystick_upos ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "joystick_vpos", GMTOLUA::joystick_vpos ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "joystick_pov", GMTOLUA::joystick_pov ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "effect_clear", GMTOLUA::effect_clear ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_type_create", GMTOLUA::part_type_create ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_type_destroy", GMTOLUA::part_type_destroy ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_type_exists", GMTOLUA::part_type_exists ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_type_clear", GMTOLUA::part_type_clear ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_type_shape", GMTOLUA::part_type_shape ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_type_scale", GMTOLUA::part_type_scale ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_type_color1", GMTOLUA::part_type_color1 ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_type_color2", GMTOLUA::part_type_color2 ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_type_color3", GMTOLUA::part_type_color3 ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_type_color_mix", GMTOLUA::part_type_color_mix ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_type_alpha1", GMTOLUA::part_type_alpha1 ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_type_alpha2", GMTOLUA::part_type_alpha2 ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_type_blend", GMTOLUA::part_type_blend ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_type_life", GMTOLUA::part_type_life ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_type_step", GMTOLUA::part_type_step ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_type_death", GMTOLUA::part_type_death ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_type_gravity", GMTOLUA::part_type_gravity ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_system_create", GMTOLUA::part_system_create ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_system_destroy", GMTOLUA::part_system_destroy ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_system_exists", GMTOLUA::part_system_exists ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_system_clear", GMTOLUA::part_system_clear ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_system_draw_order", GMTOLUA::part_system_draw_order ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_system_depth", GMTOLUA::part_system_depth ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_system_position", GMTOLUA::part_system_position ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_system_automatic_update", GMTOLUA::part_system_automatic_update ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_system_automatic_draw", GMTOLUA::part_system_automatic_draw ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_system_update", GMTOLUA::part_system_update ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_system_drawit", GMTOLUA::part_system_drawit ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_particles_clear", GMTOLUA::part_particles_clear ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_particles_count", GMTOLUA::part_particles_count ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_emitter_create", GMTOLUA::part_emitter_create ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_emitter_destroy", GMTOLUA::part_emitter_destroy ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_emitter_destroy_all", GMTOLUA::part_emitter_destroy_all ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_emitter_exists", GMTOLUA::part_emitter_exists ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_emitter_clear", GMTOLUA::part_emitter_clear ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_emitter_burst", GMTOLUA::part_emitter_burst ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_emitter_stream", GMTOLUA::part_emitter_stream ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_attractor_create", GMTOLUA::part_attractor_create ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_attractor_destroy", GMTOLUA::part_attractor_destroy ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_attractor_destroy_all", GMTOLUA::part_attractor_destroy_all ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_attractor_exists", GMTOLUA::part_attractor_exists ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_attractor_clear", GMTOLUA::part_attractor_clear ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_attractor_position", GMTOLUA::part_attractor_position ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_destroyer_create", GMTOLUA::part_destroyer_create ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_destroyer_destroy", GMTOLUA::part_destroyer_destroy ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_destroyer_destroy_all", GMTOLUA::part_destroyer_destroy_all ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_destroyer_exists", GMTOLUA::part_destroyer_exists ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_destroyer_clear", GMTOLUA::part_destroyer_clear ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_deflector_destroy", GMTOLUA::part_deflector_destroy ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_deflector_destroy_all", GMTOLUA::part_deflector_destroy_all ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_deflector_exists", GMTOLUA::part_deflector_exists ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_deflector_clear", GMTOLUA::part_deflector_clear ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_deflector_kind", GMTOLUA::part_deflector_kind ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_deflector_friction", GMTOLUA::part_deflector_friction ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_changer_create", GMTOLUA::part_changer_create ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_changer_destroy", GMTOLUA::part_changer_destroy ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_changer_destroy_all", GMTOLUA::part_changer_destroy_all ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_changer_exists", GMTOLUA::part_changer_exists ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_changer_clear", GMTOLUA::part_changer_clear ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "part_changer_kind", GMTOLUA::part_changer_kind ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "show_message", GMTOLUA::show_message ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "show_question", GMTOLUA::show_question ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "get_integer", GMTOLUA::get_integer ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "get_string", GMTOLUA::get_string ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "message_background", GMTOLUA::message_background ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "message_alpha", GMTOLUA::message_alpha ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "message_button", GMTOLUA::message_button ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "message_input_color", GMTOLUA::message_input_color ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "message_mouse_color", GMTOLUA::message_mouse_color ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "message_caption", GMTOLUA::message_caption ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "message_position", GMTOLUA::message_position ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "message_size", GMTOLUA::message_size ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "show_menu", GMTOLUA::show_menu ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "show_menu_pos", GMTOLUA::show_menu_pos ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "get_color", GMTOLUA::get_color ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "get_open_filename", GMTOLUA::get_open_filename ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "get_save_filename", GMTOLUA::get_save_filename ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "get_directory", GMTOLUA::get_directory ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "get_directory_alt", GMTOLUA::get_directory_alt ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "splash_show_video", GMTOLUA::splash_show_video ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "splash_show_text", GMTOLUA::splash_show_text ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "splash_show_image", GMTOLUA::splash_show_image ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "splash_set_main", GMTOLUA::splash_set_main ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "splash_set_scale", GMTOLUA::splash_set_scale ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "splash_set_cursor", GMTOLUA::splash_set_cursor ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "splash_set_color", GMTOLUA::splash_set_color ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "splash_set_caption", GMTOLUA::splash_set_caption ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "splash_set_fullscreen", GMTOLUA::splash_set_fullscreen ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "splash_set_border", GMTOLUA::splash_set_border ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "splash_set_size", GMTOLUA::splash_set_size ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "splash_set_adapt", GMTOLUA::splash_set_adapt ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "splash_set_top", GMTOLUA::splash_set_top ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "splash_set_interrupt", GMTOLUA::splash_set_interrupt ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "splash_set_stop_key", GMTOLUA::splash_set_stop_key ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "splash_set_stop_mouse", GMTOLUA::splash_set_stop_mouse ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "show_info", GMTOLUA::show_info ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "load_info", GMTOLUA::load_info ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "show_error", GMTOLUA::show_error ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "highscore_show", GMTOLUA::highscore_show ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "highscore_set_background", GMTOLUA::highscore_set_background ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "highscore_set_border", GMTOLUA::highscore_set_border ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "highscore_set_font", GMTOLUA::highscore_set_font ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "highscore_set_colors", GMTOLUA::highscore_set_colors ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "highscore_clear", GMTOLUA::highscore_clear ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "highscore_add", GMTOLUA::highscore_add ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "highscore_add_current", GMTOLUA::highscore_add_current ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "highscore_value", GMTOLUA::highscore_value ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "highscore_name", GMTOLUA::highscore_name ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "sound_play", GMTOLUA::sound_play ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "sound_loop", GMTOLUA::sound_loop ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "sound_stop", GMTOLUA::sound_stop ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "sound_stop_all", GMTOLUA::sound_stop_all ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "sound_isplaying", GMTOLUA::sound_isplaying ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "sound_volume", GMTOLUA::sound_volume ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "sound_global_volume", GMTOLUA::sound_global_volume ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "sound_fade", GMTOLUA::sound_fade ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "sound_pan", GMTOLUA::sound_pan ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "sound_background_tempo", GMTOLUA::sound_background_tempo ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "sound_set_search_directory", GMTOLUA::sound_set_search_directory ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "sound_effect_set", GMTOLUA::sound_effect_set ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "sound_effect_gargle", GMTOLUA::sound_effect_gargle ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "sound_3d_set_sound_distance", GMTOLUA::sound_3d_set_sound_distance ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "cd_init", GMTOLUA::cd_init ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "cd_present", GMTOLUA::cd_present ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "cd_number", GMTOLUA::cd_number ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "cd_playing", GMTOLUA::cd_playing ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "cd_paused", GMTOLUA::cd_paused ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "cd_track", GMTOLUA::cd_track ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "cd_length", GMTOLUA::cd_length ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "cd_track_length", GMTOLUA::cd_track_length ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "cd_position", GMTOLUA::cd_position ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "cd_track_position", GMTOLUA::cd_track_position ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "cd_play", GMTOLUA::cd_play ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "cd_stop", GMTOLUA::cd_stop ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "cd_pause", GMTOLUA::cd_pause ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "cd_resume", GMTOLUA::cd_resume ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "cd_set_position", GMTOLUA::cd_set_position ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "cd_set_track_position", GMTOLUA::cd_set_track_position ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "cd_open_door", GMTOLUA::cd_open_door ) );
    GMTOLUA::functions.insert( std::pair<std::string, lua_CFunction>( "cd_close_door", GMTOLUA::cd_close_door ) );
  }

/* GM WRAPPERS BEGIN */

int draw_sprite( lua_State *L ) //   void draw_sprite( const int sprite, const int subimg, const double x, const double y )
{

	gm::draw_sprite( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3), lua_tonumber( L, 4)  );
	return 0;
}

int draw_sprite_tiled( lua_State *L ) //   void draw_sprite_tiled( const int sprite, const int subimg, const double x, const double y )
{

	gm::draw_sprite_tiled( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3), lua_tonumber( L, 4)  );
	return 0;
}

int draw_background( lua_State *L ) //   void draw_background( const int back, const double x, const double y )
{

	gm::draw_background( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int draw_background_tiled( lua_State *L ) //   void draw_background_tiled( const int back, const double x, const double y )
{

	gm::draw_background_tiled( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int draw_clear( lua_State *L ) //   void draw_clear( const int col )
{

	gm::draw_clear( lua_tonumber( L, 1)  );
	return 0;
}

int draw_clear_alpha( lua_State *L ) //   void draw_clear_alpha( const int col, const double alpha )
{

	gm::draw_clear_alpha( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int draw_point( lua_State *L ) //   void draw_point( const double x, const double y )
{

	gm::draw_point( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int draw_line( lua_State *L ) //   void draw_line( const double x1, const double y1, const double x2, const double y2 )
{

	gm::draw_line( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3), lua_tonumber( L, 4)  );
	return 0;
}

int draw_circle( lua_State *L ) //   void draw_circle( const double x, const double y, const double r, const bool outline )
{

	gm::draw_circle( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3), lua_tonumber( L, 4)  );
	return 0;
}

int draw_set_circle_precision( lua_State *L ) //   void draw_set_circle_precision( const int precision )
{

	gm::draw_set_circle_precision( lua_tonumber( L, 1)  );
	return 0;
}

int draw_path( lua_State *L ) //   void draw_path( const int path, const double x, const double y, const bool absolute )
{

	gm::draw_path( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3), lua_tonumber( L, 4)  );
	return 0;
}

int draw_set_color( lua_State *L ) //   void draw_set_color( const int col )
{

	gm::draw_set_color( lua_tonumber( L, 1)  );
	return 0;
}

int draw_set_alpha( lua_State *L ) //   void draw_set_alpha( const double alpha )
{

	gm::draw_set_alpha( lua_tonumber( L, 1)  );
	return 0;
}

int draw_get_color( lua_State *L ) //   int draw_get_color()
{

	lua_pushnumber(L, gm::draw_get_color(  ) );
	return 1;
}

int draw_get_alpha( lua_State *L ) //   double draw_get_alpha()
{

	lua_pushnumber(L, gm::draw_get_alpha(  ) );
	return 1;
}

int make_color_rgb( lua_State *L ) //   int make_color_rgb( const int red, const int green, const int blue )
{

	lua_pushnumber(L, gm::make_color_rgb( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  ) );
	return 1;
}

int make_color_hsv( lua_State *L ) //   int make_color_hsv( const int hue, const int saturation, const int value )
{

	lua_pushnumber(L, gm::make_color_hsv( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  ) );
	return 1;
}

int color_get_red( lua_State *L ) //   int color_get_red( const int col )
{

	lua_pushnumber(L, gm::color_get_red( lua_tonumber( L, 1)  ) );
	return 1;
}

int color_get_green( lua_State *L ) //   int color_get_green( const int col )
{

	lua_pushnumber(L, gm::color_get_green( lua_tonumber( L, 1)  ) );
	return 1;
}

int color_get_blue( lua_State *L ) //   int color_get_blue( const int col )
{

	lua_pushnumber(L, gm::color_get_blue( lua_tonumber( L, 1)  ) );
	return 1;
}

int color_get_hue( lua_State *L ) //   int color_get_hue( const int col )
{

	lua_pushnumber(L, gm::color_get_hue( lua_tonumber( L, 1)  ) );
	return 1;
}

int color_get_saturation( lua_State *L ) //   int color_get_saturation( const int col )
{

	lua_pushnumber(L, gm::color_get_saturation( lua_tonumber( L, 1)  ) );
	return 1;
}

int color_get_value( lua_State *L ) //   int color_get_value( const int col )
{

	lua_pushnumber(L, gm::color_get_value( lua_tonumber( L, 1)  ) );
	return 1;
}

int merge_color( lua_State *L ) //   int merge_color( const int col1, const int col2, const double amount )
{

	lua_pushnumber(L, gm::merge_color( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  ) );
	return 1;
}

int draw_getpixel( lua_State *L ) //   int draw_getpixel( const double x, const double y )
{

	lua_pushnumber(L, gm::draw_getpixel( lua_tonumber( L, 1), lua_tonumber( L, 2)  ) );
	return 1;
}

int screen_save( lua_State *L ) //   void screen_save( const CGMVariable& fname )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	gm::screen_save( vara  );
	return 0;
}

int draw_set_font( lua_State *L ) //   void draw_set_font( const int font )
{

	gm::draw_set_font( lua_tonumber( L, 1)  );
	return 0;
}

int draw_set_halign( lua_State *L ) //   void draw_set_halign( const int halign )
{

	gm::draw_set_halign( lua_tonumber( L, 1)  );
	return 0;
}

int draw_set_valign( lua_State *L ) //   void draw_set_valign( const int valign )
{

	gm::draw_set_valign( lua_tonumber( L, 1)  );
	return 0;
}

int draw_text( lua_State *L ) //   void draw_text( const double x, const double y, const CGMVariable& string )
{
	gm::CGMVariable varc;
	if( lua_type( L, 3) == LUA_TSTRING )
	{
		varc = lua_tostring( L, 3 );
	}
	else
	{
		varc = lua_tonumber( L, 3 ); 
	}

	gm::draw_text( lua_tonumber( L, 1), lua_tonumber( L, 2), varc  );
	return 0;
}

int string_width( lua_State *L ) //   double string_width( const CGMVariable& string )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	lua_pushnumber(L, gm::string_width( vara  ) );
	return 1;
}

int string_height( lua_State *L ) //   double string_height( const CGMVariable& string )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	lua_pushnumber(L, gm::string_height( vara  ) );
	return 1;
}

int string_width_ext( lua_State *L ) //   double string_width_ext( const CGMVariable& string, const double sep, const double w )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	lua_pushnumber(L, gm::string_width_ext( vara, lua_tonumber( L, 2), lua_tonumber( L, 3)  ) );
	return 1;
}

int string_height_ext( lua_State *L ) //   double string_height_ext( const CGMVariable& string, const double sep, const double w )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	lua_pushnumber(L, gm::string_height_ext( vara, lua_tonumber( L, 2), lua_tonumber( L, 3)  ) );
	return 1;
}

int draw_point_color( lua_State *L ) //   void draw_point_color( const double x, const double y, const int col1 )
{

	gm::draw_point_color( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int draw_primitive_begin( lua_State *L ) //   void draw_primitive_begin( const int kind )
{

	gm::draw_primitive_begin( lua_tonumber( L, 1)  );
	return 0;
}

int draw_vertex( lua_State *L ) //   void draw_vertex( const double x, const double y )
{

	gm::draw_vertex( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int draw_vertex_color( lua_State *L ) //   void draw_vertex_color( const double x, const double y, const int col, const double alpha )
{

	gm::draw_vertex_color( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3), lua_tonumber( L, 4)  );
	return 0;
}

int draw_primitive_end( lua_State *L ) //   void draw_primitive_end()
{

	gm::draw_primitive_end(  );
	return 0;
}

int sprite_get_texture( lua_State *L ) //   int sprite_get_texture( const int spr, const int subimg )
{

	lua_pushnumber(L, gm::sprite_get_texture( lua_tonumber( L, 1), lua_tonumber( L, 2)  ) );
	return 1;
}

int background_get_texture( lua_State *L ) //   int background_get_texture( const int back )
{

	lua_pushnumber(L, gm::background_get_texture( lua_tonumber( L, 1)  ) );
	return 1;
}

int texture_preload( lua_State *L ) //   void texture_preload( const int texid )
{

	gm::texture_preload( lua_tonumber( L, 1)  );
	return 0;
}

int texture_set_priority( lua_State *L ) //   void texture_set_priority( const int texid, const int prio )
{

	gm::texture_set_priority( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int texture_get_width( lua_State *L ) //   int texture_get_width( const int texid )
{

	lua_pushnumber(L, gm::texture_get_width( lua_tonumber( L, 1)  ) );
	return 1;
}

int texture_get_height( lua_State *L ) //   double texture_get_height( const int texid )
{

	lua_pushnumber(L, gm::texture_get_height( lua_tonumber( L, 1)  ) );
	return 1;
}

int draw_primitive_begin_texture( lua_State *L ) //   void draw_primitive_begin_texture( const int kind, const int texid )
{

	gm::draw_primitive_begin_texture( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

/*
int draw_primitive_end( lua_State *L ) //   void draw_primitive_end()
{

	gm::draw_primitive_end(  );
	return 0;
}
*/

int texture_set_interpolation( lua_State *L ) //   void texture_set_interpolation( const bool linear )
{

	gm::texture_set_interpolation( lua_tonumber( L, 1)  );
	return 0;
}

int texture_set_blending( lua_State *L ) //   void texture_set_blending( const bool blend )
{

	gm::texture_set_blending( lua_tonumber( L, 1)  );
	return 0;
}

int texture_set_repeat( lua_State *L ) //   void texture_set_repeat( const double repeat )
{

	gm::texture_set_repeat( lua_tonumber( L, 1)  );
	return 0;
}

int draw_set_blend_mode( lua_State *L ) //   void draw_set_blend_mode( const int mode )
{

	gm::draw_set_blend_mode( lua_tonumber( L, 1)  );
	return 0;
}

int draw_set_blend_mode_ext( lua_State *L ) //   void draw_set_blend_mode_ext( const int src, const int dest )
{

	gm::draw_set_blend_mode_ext( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int surface_create( lua_State *L ) //   int surface_create( const int w, const int h )
{

	lua_pushnumber(L, gm::surface_create( lua_tonumber( L, 1), lua_tonumber( L, 2)  ) );
	return 1;
}

int surface_free( lua_State *L ) //   void surface_free( const int id )
{

	gm::surface_free( lua_tonumber( L, 1)  );
	return 0;
}

int surface_exists( lua_State *L ) //   bool surface_exists( const int id )
{

	lua_pushnumber(L, gm::surface_exists( lua_tonumber( L, 1)  ) );
	return 1;
}

int surface_get_width( lua_State *L ) //   int surface_get_width( const int id )
{

	lua_pushnumber(L, gm::surface_get_width( lua_tonumber( L, 1)  ) );
	return 1;
}

int surface_get_height( lua_State *L ) //   int surface_get_height( const int id )
{

	lua_pushnumber(L, gm::surface_get_height( lua_tonumber( L, 1)  ) );
	return 1;
}

int surface_get_texture( lua_State *L ) //   int surface_get_texture( const int id )
{

	lua_pushnumber(L, gm::surface_get_texture( lua_tonumber( L, 1)  ) );
	return 1;
}

int surface_set_target( lua_State *L ) //   void surface_set_target( const int id )
{

	gm::surface_set_target( lua_tonumber( L, 1)  );
	return 0;
}

int surface_reset_target( lua_State *L ) //   void surface_reset_target()
{

	gm::surface_reset_target(  );
	return 0;
}

int surface_getpixel( lua_State *L ) //   int surface_getpixel( const int id, const int x, const int y )
{

	lua_pushnumber(L, gm::surface_getpixel( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  ) );
	return 1;
}

int surface_save( lua_State *L ) //   void surface_save( const int id, const CGMVariable& fname )
{
	gm::CGMVariable varb;
	if( lua_type( L, 2) == LUA_TSTRING )
	{
		varb = lua_tostring( L, 2 );
	}
	else
	{
		varb = lua_tonumber( L, 2 ); 
	}

	gm::surface_save( lua_tonumber( L, 1), varb  );
	return 0;
}

int draw_surface( lua_State *L ) //   void draw_surface( const int id, const double x, const double y )
{

	gm::draw_surface( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int draw_surface_tiled( lua_State *L ) //   void draw_surface_tiled( const int id, const double x, const double y )
{

	gm::draw_surface_tiled( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int surface_copy( lua_State *L ) //   void surface_copy( const int destination, const double x, const double y, const int source )
{

	gm::surface_copy( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3), lua_tonumber( L, 4)  );
	return 0;
}

int tile_delete( lua_State *L ) //   void tile_delete( const int id )
{

	gm::tile_delete( lua_tonumber( L, 1)  );
	return 0;
}

int tile_exists( lua_State *L ) //   bool tile_exists( const int id )
{

	lua_pushnumber(L, gm::tile_exists( lua_tonumber( L, 1)  ) );
	return 1;
}

int tile_get_x( lua_State *L ) //   double tile_get_x( const int id )
{

	lua_pushnumber(L, gm::tile_get_x( lua_tonumber( L, 1)  ) );
	return 1;
}

int tile_get_y( lua_State *L ) //   double tile_get_y( const int id )
{

	lua_pushnumber(L, gm::tile_get_y( lua_tonumber( L, 1)  ) );
	return 1;
}

int tile_get_left( lua_State *L ) //   int tile_get_left( const int id )
{

	lua_pushnumber(L, gm::tile_get_left( lua_tonumber( L, 1)  ) );
	return 1;
}

int tile_get_top( lua_State *L ) //   int tile_get_top( const int id )
{

	lua_pushnumber(L, gm::tile_get_top( lua_tonumber( L, 1)  ) );
	return 1;
}

int tile_get_width( lua_State *L ) //   int tile_get_width( const int id )
{

	lua_pushnumber(L, gm::tile_get_width( lua_tonumber( L, 1)  ) );
	return 1;
}

int tile_get_height( lua_State *L ) //   int tile_get_height( const int id )
{

	lua_pushnumber(L, gm::tile_get_height( lua_tonumber( L, 1)  ) );
	return 1;
}

int tile_get_depth( lua_State *L ) //   int tile_get_depth( const int id )
{

	lua_pushnumber(L, gm::tile_get_depth( lua_tonumber( L, 1)  ) );
	return 1;
}

int tile_get_visible( lua_State *L ) //   bool tile_get_visible( const int id )
{

	lua_pushnumber(L, gm::tile_get_visible( lua_tonumber( L, 1)  ) );
	return 1;
}

int tile_get_xscale( lua_State *L ) //   double tile_get_xscale( const int id )
{

	lua_pushnumber(L, gm::tile_get_xscale( lua_tonumber( L, 1)  ) );
	return 1;
}

int tile_get_yscale( lua_State *L ) //   double tile_get_yscale( const int id )
{

	lua_pushnumber(L, gm::tile_get_yscale( lua_tonumber( L, 1)  ) );
	return 1;
}

int tile_get_background( lua_State *L ) //   int tile_get_background( const int id )
{

	lua_pushnumber(L, gm::tile_get_background( lua_tonumber( L, 1)  ) );
	return 1;
}

int tile_get_blend( lua_State *L ) //   int tile_get_blend( const int id )
{

	lua_pushnumber(L, gm::tile_get_blend( lua_tonumber( L, 1)  ) );
	return 1;
}

int tile_get_alpha( lua_State *L ) //   double tile_get_alpha( const int id )
{

	lua_pushnumber(L, gm::tile_get_alpha( lua_tonumber( L, 1)  ) );
	return 1;
}

int tile_set_position( lua_State *L ) //   void tile_set_position( const int id, const double x, const double y )
{

	gm::tile_set_position( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int tile_set_background( lua_State *L ) //   void tile_set_background( const int id, const int background )
{

	gm::tile_set_background( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int tile_set_visible( lua_State *L ) //   void tile_set_visible( const int id, const bool visible )
{

	gm::tile_set_visible( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int tile_set_depth( lua_State *L ) //   void tile_set_depth( const int id, const int depth )
{

	gm::tile_set_depth( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int tile_set_scale( lua_State *L ) //   void tile_set_scale( const int id, const double xscale, const double yscale )
{

	gm::tile_set_scale( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int tile_set_blend( lua_State *L ) //   void tile_set_blend( const int id, const int color )
{

	gm::tile_set_blend( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int tile_set_alpha( lua_State *L ) //   void tile_set_alpha( const int id, const double alpha )
{

	gm::tile_set_alpha( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int tile_layer_hide( lua_State *L ) //   void tile_layer_hide( const int depth )
{

	gm::tile_layer_hide( lua_tonumber( L, 1)  );
	return 0;
}

int tile_layer_show( lua_State *L ) //   void tile_layer_show( const int depth )
{

	gm::tile_layer_show( lua_tonumber( L, 1)  );
	return 0;
}

int tile_layer_delete( lua_State *L ) //   void tile_layer_delete( const int depth )
{

	gm::tile_layer_delete( lua_tonumber( L, 1)  );
	return 0;
}

int tile_layer_shift( lua_State *L ) //   void tile_layer_shift( const int depth, const double x, const double y )
{

	gm::tile_layer_shift( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int tile_layer_find( lua_State *L ) //   int tile_layer_find( const int depth, const double x, const double y )
{

	lua_pushnumber(L, gm::tile_layer_find( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  ) );
	return 1;
}

int tile_layer_delete_at( lua_State *L ) //   void tile_layer_delete_at( const int depth, const double x, const double y )
{

	gm::tile_layer_delete_at( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int tile_layer_depth( lua_State *L ) //   void tile_layer_depth( const int depth, const int newdepth )
{

	gm::tile_layer_depth( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int display_get_width( lua_State *L ) //   int display_get_width()
{

	lua_pushnumber(L, gm::display_get_width(  ) );
	return 1;
}

int display_get_height( lua_State *L ) //   int display_get_height()
{

	lua_pushnumber(L, gm::display_get_height(  ) );
	return 1;
}

int display_get_colordepth( lua_State *L ) //   int display_get_colordepth()
{

	lua_pushnumber(L, gm::display_get_colordepth(  ) );
	return 1;
}

int display_get_frequency( lua_State *L ) //   int display_get_frequency()
{

	lua_pushnumber(L, gm::display_get_frequency(  ) );
	return 1;
}

int display_set_size( lua_State *L ) //   void display_set_size( const int w, const int h )
{

	gm::display_set_size( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int display_set_colordepth( lua_State *L ) //   void display_set_colordepth( const int coldepth )
{

	gm::display_set_colordepth( lua_tonumber( L, 1)  );
	return 0;
}

int display_set_frequency( lua_State *L ) //   void display_set_frequency( const int frequency )
{

	gm::display_set_frequency( lua_tonumber( L, 1)  );
	return 0;
}

int display_set_all( lua_State *L ) //   void display_set_all( const int w, const int h, const int frequency, const int coldepth )
{

	gm::display_set_all( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3), lua_tonumber( L, 4)  );
	return 0;
}

int display_test_all( lua_State *L ) //   bool display_test_all( const int w, const int h, const int frequency, const int coldepth )
{

	lua_pushnumber(L, gm::display_test_all( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3), lua_tonumber( L, 4)  ) );
	return 1;
}

int display_reset( lua_State *L ) //   void display_reset()
{

	gm::display_reset(  );
	return 0;
}

int display_mouse_get_x( lua_State *L ) //   int display_mouse_get_x()
{

	lua_pushnumber(L, gm::display_mouse_get_x(  ) );
	return 1;
}

int display_mouse_get_y( lua_State *L ) //   int display_mouse_get_y()
{

	lua_pushnumber(L, gm::display_mouse_get_y(  ) );
	return 1;
}

int display_mouse_set( lua_State *L ) //   void display_mouse_set( const int x, const int y )
{

	gm::display_mouse_set( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int window_set_visible( lua_State *L ) //   void window_set_visible( const bool visible )
{

	gm::window_set_visible( lua_tonumber( L, 1)  );
	return 0;
}

int window_get_visible( lua_State *L ) //   bool window_get_visible()
{

	lua_pushnumber(L, gm::window_get_visible(  ) );
	return 1;
}

int window_set_fullscreen( lua_State *L ) //   void window_set_fullscreen( const bool full )
{

	gm::window_set_fullscreen( lua_tonumber( L, 1)  );
	return 0;
}

int window_get_fullscreen( lua_State *L ) //   bool window_get_fullscreen()
{

	lua_pushnumber(L, gm::window_get_fullscreen(  ) );
	return 1;
}

int window_set_showborder( lua_State *L ) //   void window_set_showborder( const bool show )
{

	gm::window_set_showborder( lua_tonumber( L, 1)  );
	return 0;
}

int window_get_showborder( lua_State *L ) //   bool window_get_showborder()
{

	lua_pushnumber(L, gm::window_get_showborder(  ) );
	return 1;
}

int window_set_showicons( lua_State *L ) //   void window_set_showicons( const bool show )
{

	gm::window_set_showicons( lua_tonumber( L, 1)  );
	return 0;
}

int window_get_showicons( lua_State *L ) //   bool window_get_showicons()
{

	lua_pushnumber(L, gm::window_get_showicons(  ) );
	return 1;
}

int window_set_stayontop( lua_State *L ) //   void window_set_stayontop( const bool stay )
{

	gm::window_set_stayontop( lua_tonumber( L, 1)  );
	return 0;
}

int window_get_stayontop( lua_State *L ) //   bool window_get_stayontop()
{

	lua_pushnumber(L, gm::window_get_stayontop(  ) );
	return 1;
}

int window_set_sizeable( lua_State *L ) //   void window_set_sizeable( const bool sizeable )
{

	gm::window_set_sizeable( lua_tonumber( L, 1)  );
	return 0;
}

int window_get_sizeable( lua_State *L ) //   bool window_get_sizeable()
{

	lua_pushnumber(L, gm::window_get_sizeable(  ) );
	return 1;
}

int window_set_caption( lua_State *L ) //   void window_set_caption( const CGMVariable& caption )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	gm::window_set_caption( vara  );
	return 0;
}

int window_get_caption( lua_State *L ) //   CGMVariable window_get_caption()
{

	gm::CGMVariable result = gm::window_get_caption(  );
	if( result.IsString() )
	{
		lua_pushstring(L, result.c_str() );
	}
	else
	{
		lua_pushnumber(L, result.real() );
	}
	return 1;
}

int window_set_cursor( lua_State *L ) //   void window_set_cursor( const int curs )
{

	gm::window_set_cursor( lua_tonumber( L, 1)  );
	return 0;
}

int window_get_cursor( lua_State *L ) //   int window_get_cursor()
{

	lua_pushnumber(L, gm::window_get_cursor(  ) );
	return 1;
}

int window_set_color( lua_State *L ) //   void window_set_color( const int color )
{

	gm::window_set_color( lua_tonumber( L, 1)  );
	return 0;
}

int window_get_color( lua_State *L ) //   int window_get_color()
{

	lua_pushnumber(L, gm::window_get_color(  ) );
	return 1;
}

int window_set_region_scale( lua_State *L ) //   void window_set_region_scale( const double scale, const bool adaptwindow )
{

	gm::window_set_region_scale( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int window_get_region_scale( lua_State *L ) //   double window_get_region_scale()
{

	lua_pushnumber(L, gm::window_get_region_scale(  ) );
	return 1;
}

int window_set_position( lua_State *L ) //   void window_set_position( const int x, const int y )
{

	gm::window_set_position( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int window_set_size( lua_State *L ) //   void window_set_size( const int w, const int h )
{

	gm::window_set_size( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int window_set_rectangle( lua_State *L ) //   void window_set_rectangle( const int x, const int y, const int w, const int h )
{

	gm::window_set_rectangle( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3), lua_tonumber( L, 4)  );
	return 0;
}

int window_center( lua_State *L ) //   void window_center()
{

	gm::window_center(  );
	return 0;
}

int window_default( lua_State *L ) //   void window_default()
{

	gm::window_default(  );
	return 0;
}

int window_get_x( lua_State *L ) //   int window_get_x()
{

	lua_pushnumber(L, gm::window_get_x(  ) );
	return 1;
}

int window_get_y( lua_State *L ) //   int window_get_y()
{

	lua_pushnumber(L, gm::window_get_y(  ) );
	return 1;
}

int window_get_width( lua_State *L ) //   int window_get_width()
{

	lua_pushnumber(L, gm::window_get_width(  ) );
	return 1;
}

int window_get_height( lua_State *L ) //   int window_get_height()
{

	lua_pushnumber(L, gm::window_get_height(  ) );
	return 1;
}

int window_mouse_get_x( lua_State *L ) //   int window_mouse_get_x()
{

	lua_pushnumber(L, gm::window_mouse_get_x(  ) );
	return 1;
}

int window_mouse_get_y( lua_State *L ) //   int window_mouse_get_y()
{

	lua_pushnumber(L, gm::window_mouse_get_y(  ) );
	return 1;
}

int window_mouse_set( lua_State *L ) //   void window_mouse_set( const int x, const int y )
{

	gm::window_mouse_set( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int window_set_region_size( lua_State *L ) //   void window_set_region_size( const int w, const int h, const bool adaptwindow )
{

	gm::window_set_region_size( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int window_get_region_width( lua_State *L ) //   int window_get_region_width()
{

	lua_pushnumber(L, gm::window_get_region_width(  ) );
	return 1;
}

int window_get_region_height( lua_State *L ) //   int window_get_region_height()
{

	lua_pushnumber(L, gm::window_get_region_height(  ) );
	return 1;
}

int window_view_mouse_get_x( lua_State *L ) //   int window_view_mouse_get_x( const int id )
{

	lua_pushnumber(L, gm::window_view_mouse_get_x( lua_tonumber( L, 1)  ) );
	return 1;
}

int window_view_mouse_get_y( lua_State *L ) //   int window_view_mouse_get_y( const int id )
{

	lua_pushnumber(L, gm::window_view_mouse_get_y( lua_tonumber( L, 1)  ) );
	return 1;
}

int window_view_mouse_set( lua_State *L ) //   void window_view_mouse_set( const int id, const int x, const int y )
{

	gm::window_view_mouse_set( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int window_views_mouse_get_x( lua_State *L ) //   int window_views_mouse_get_x()
{

	lua_pushnumber(L, gm::window_views_mouse_get_x(  ) );
	return 1;
}

int window_views_mouse_get_y( lua_State *L ) //   int window_views_mouse_get_y()
{

	lua_pushnumber(L, gm::window_views_mouse_get_y(  ) );
	return 1;
}

int window_views_mouse_set( lua_State *L ) //   void window_views_mouse_set( const int x, const int y )
{

	gm::window_views_mouse_set( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int screen_redraw( lua_State *L ) //   void screen_redraw()
{

	gm::screen_redraw(  );
	return 0;
}

int screen_refresh( lua_State *L ) //   void screen_refresh()
{

	gm::screen_refresh(  );
	return 0;
}

int set_automatic_draw( lua_State *L ) //   void set_automatic_draw( const bool value )
{

	gm::set_automatic_draw( lua_tonumber( L, 1)  );
	return 0;
}

int set_synchronization( lua_State *L ) //   void set_synchronization( const bool value )
{

	gm::set_synchronization( lua_tonumber( L, 1)  );
	return 0;
}

int screen_wait_vsync( lua_State *L ) //   void screen_wait_vsync()
{

	gm::screen_wait_vsync(  );
	return 0;
}

/*int window_handle( lua_State *L ) //   HWND window_handle()
{

	lua_pushstring(L, gm::window_handle(  ) );
	return 1;
}
*/

int place_free( lua_State *L ) //   bool place_free( const double x, const double y )
{

	lua_pushnumber(L, gm::place_free( lua_tonumber( L, 1), lua_tonumber( L, 2)  ) );
	return 1;
}

int place_empty( lua_State *L ) //   bool place_empty( const double x, const double y )
{

	lua_pushnumber(L, gm::place_empty( lua_tonumber( L, 1), lua_tonumber( L, 2)  ) );
	return 1;
}

int place_meeting( lua_State *L ) //   bool place_meeting( const double x, const double y, const int obj )
{

	lua_pushnumber(L, gm::place_meeting( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  ) );
	return 1;
}

int place_snapped( lua_State *L ) //   bool place_snapped( const double hsnap, const double vsnap )
{

	lua_pushnumber(L, gm::place_snapped( lua_tonumber( L, 1), lua_tonumber( L, 2)  ) );
	return 1;
}

int move_random( lua_State *L ) //   void move_random( const double hsnap, const double vsnap )
{

	gm::move_random( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int move_snap( lua_State *L ) //   void move_snap( const double hsnap, const double vsnap )
{

	gm::move_snap( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int move_wrap( lua_State *L ) //   void move_wrap( const double hor, const double vert, const double margin )
{

	gm::move_wrap( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int move_towards_point( lua_State *L ) //   void move_towards_point( const double x, const double y, const double sp )
{

	gm::move_towards_point( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int move_bounce_solid( lua_State *L ) //   void move_bounce_solid( const bool adv )
{

	gm::move_bounce_solid( lua_tonumber( L, 1)  );
	return 0;
}

int move_bounce_all( lua_State *L ) //   void move_bounce_all( const bool adv )
{

	gm::move_bounce_all( lua_tonumber( L, 1)  );
	return 0;
}

int move_contact_solid( lua_State *L ) //   void move_contact_solid( const double dir, const double maxdist )
{

	gm::move_contact_solid( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int move_contact_all( lua_State *L ) //   void move_contact_all( const double dir, const double maxdist )
{

	gm::move_contact_all( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int move_outside_solid( lua_State *L ) //   void move_outside_solid( const double dir, const double maxdist )
{

	gm::move_outside_solid( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int move_outside_all( lua_State *L ) //   void move_outside_all( const double dir, const double maxdist )
{

	gm::move_outside_all( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int distance_to_point( lua_State *L ) //   void distance_to_point( const double x, const double y )
{

	gm::distance_to_point( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int distance_to_object( lua_State *L ) //   void distance_to_object( const int obj )
{

	gm::distance_to_object( lua_tonumber( L, 1)  );
	return 0;
}

int position_empty( lua_State *L ) //   bool position_empty( const double x, const double y )
{

	lua_pushnumber(L, gm::position_empty( lua_tonumber( L, 1), lua_tonumber( L, 2)  ) );
	return 1;
}

int position_meeting( lua_State *L ) //   bool position_meeting( const double x, const double y, const int obj )
{

	lua_pushnumber(L, gm::position_meeting( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  ) );
	return 1;
}

int path_end( lua_State *L ) //   void path_end()
{

	gm::path_end(  );
	return 0;
}

int mp_grid_destroy( lua_State *L ) //   void mp_grid_destroy( const int id )
{

	gm::mp_grid_destroy( lua_tonumber( L, 1)  );
	return 0;
}

int mp_grid_clear_all( lua_State *L ) //   void mp_grid_clear_all( const int id )
{

	gm::mp_grid_clear_all( lua_tonumber( L, 1)  );
	return 0;
}

int mp_grid_clear_cell( lua_State *L ) //   void mp_grid_clear_cell( const int id, const int h, const int v )
{

	gm::mp_grid_clear_cell( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int mp_grid_add_cell( lua_State *L ) //   void mp_grid_add_cell( const int id, const int h, const int v )
{

	gm::mp_grid_add_cell( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int mp_grid_add_instances( lua_State *L ) //   void mp_grid_add_instances( const int id, const int obj, const bool prec )
{

	gm::mp_grid_add_instances( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int mp_grid_draw( lua_State *L ) //   void mp_grid_draw( const int id )
{

	gm::mp_grid_draw( lua_tonumber( L, 1)  );
	return 0;
}

int instance_find( lua_State *L ) //   int instance_find( const int obj, const int n )
{

	lua_pushnumber(L, gm::instance_find( lua_tonumber( L, 1), lua_tonumber( L, 2)  ) );
	return 1;
}

int instance_exists( lua_State *L ) //   void instance_exists( const int obj )
{

	gm::instance_exists( lua_tonumber( L, 1)  );
	return 0;
}

int instance_number( lua_State *L ) //   void instance_number( const int obj )
{

	gm::instance_number( lua_tonumber( L, 1)  );
	return 0;
}

int instance_position( lua_State *L ) //   int instance_position( const double x, const double y, const int obj )
{

	lua_pushnumber(L, gm::instance_position( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  ) );
	return 1;
}

int instance_nearest( lua_State *L ) //   int instance_nearest( const double x, const double y, const int obj )
{

	lua_pushnumber(L, gm::instance_nearest( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  ) );
	return 1;
}

int instance_furthest( lua_State *L ) //   int instance_furthest( const double x, const double y, const int obj )
{

	lua_pushnumber(L, gm::instance_furthest( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  ) );
	return 1;
}

int instance_place( lua_State *L ) //   int instance_place( const double x, const double y, const int obj )
{

	lua_pushnumber(L, gm::instance_place( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  ) );
	return 1;
}

int instance_create( lua_State *L ) //   int instance_create( const double x, const double y, const int obj )
{

	lua_pushnumber(L, gm::instance_create( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  ) );
	return 1;
}

int instance_copy( lua_State *L ) //   int instance_copy( const bool performevent )
{

	lua_pushnumber(L, gm::instance_copy( lua_tonumber( L, 1)  ) );
	return 1;
}

int instance_destroy( lua_State *L ) //   void instance_destroy()
{

	gm::instance_destroy(  );
	return 0;
}

int instance_change( lua_State *L ) //   void instance_change( const int obj, const bool perf )
{

	gm::instance_change( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int position_destroy( lua_State *L ) //   void position_destroy( const double x, const double y )
{

	gm::position_destroy( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int position_change( lua_State *L ) //   void position_change( const double x, const double y, const int obj, const bool perf )
{

	gm::position_change( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3), lua_tonumber( L, 4)  );
	return 0;
}

int instance_deactivate_all( lua_State *L ) //   void instance_deactivate_all( const bool notme )
{

	gm::instance_deactivate_all( lua_tonumber( L, 1)  );
	return 0;
}

int instance_deactivate_object( lua_State *L ) //   void instance_deactivate_object( const int obj )
{

	gm::instance_deactivate_object( lua_tonumber( L, 1)  );
	return 0;
}

int instance_activate_all( lua_State *L ) //   void instance_activate_all()
{

	gm::instance_activate_all(  );
	return 0;
}

int instance_activate_object( lua_State *L ) //   void instance_activate_object( const int obj )
{

	gm::instance_activate_object( lua_tonumber( L, 1)  );
	return 0;
}

int room_goto( lua_State *L ) //   void room_goto( const int numb )
{

	gm::room_goto( lua_tonumber( L, 1)  );
	return 0;
}

int room_goto_previous( lua_State *L ) //   void room_goto_previous()
{

	gm::room_goto_previous(  );
	return 0;
}

int room_goto_next( lua_State *L ) //   void room_goto_next()
{

	gm::room_goto_next(  );
	return 0;
}

int room_restart( lua_State *L ) //   void room_restart()
{

	gm::room_restart(  );
	return 0;
}

int room_previous( lua_State *L ) //   int room_previous( const int numb )
{

	lua_pushnumber(L, gm::room_previous( lua_tonumber( L, 1)  ) );
	return 1;
}

int room_next( lua_State *L ) //   int room_next( const int numb )
{

	lua_pushnumber(L, gm::room_next( lua_tonumber( L, 1)  ) );
	return 1;
}

int game_end( lua_State *L ) //   void game_end()
{

	gm::game_end(  );
	return 0;
}

int game_restart( lua_State *L ) //   void game_restart()
{

	gm::game_restart(  );
	return 0;
}

int game_save( lua_State *L ) //   void game_save( const CGMVariable& string )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	gm::game_save( vara  );
	return 0;
}

int game_load( lua_State *L ) //   void game_load( const CGMVariable& string )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	gm::game_load( vara  );
	return 0;
}

int transition_define( lua_State *L ) //   void transition_define( const int kind, const CGMVariable& name )
{
	gm::CGMVariable varb;
	if( lua_type( L, 2) == LUA_TSTRING )
	{
		varb = lua_tostring( L, 2 );
	}
	else
	{
		varb = lua_tonumber( L, 2 ); 
	}

	gm::transition_define( lua_tonumber( L, 1), varb  );
	return 0;
}

int transition_exists( lua_State *L ) //   bool transition_exists( const int kind )
{

	lua_pushnumber(L, gm::transition_exists( lua_tonumber( L, 1)  ) );
	return 1;
}

int event_perform( lua_State *L ) //   void event_perform( const int type, const int numb )
{

	gm::event_perform( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int event_perform_object( lua_State *L ) //   void event_perform_object( const int obj, const int type, const int numb )
{

	gm::event_perform_object( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int event_user( lua_State *L ) //   void event_user( const int numb )
{

	gm::event_user( lua_tonumber( L, 1)  );
	return 0;
}

int event_inherited( lua_State *L ) //   void event_inherited()
{

	gm::event_inherited(  );
	return 0;
}

int show_debug_message( lua_State *L ) //   void show_debug_message( const CGMVariable& str )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	gm::show_debug_message( vara  );
	return 0;
}

int variable_global_exists( lua_State *L ) //   bool variable_global_exists( const CGMVariable& name )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	lua_pushnumber(L, gm::variable_global_exists( vara  ) );
	return 1;
}

int variable_local_exists( lua_State *L ) //   bool variable_local_exists( const CGMVariable& name )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	lua_pushnumber(L, gm::variable_local_exists( vara  ) );
	return 1;
}

int variable_global_get( lua_State *L ) //   CGMVariable variable_global_get( const CGMVariable& name )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	gm::CGMVariable result = gm::variable_global_get( vara  );
	if( result.IsString() )
	{
		lua_pushstring(L, result.c_str() );
	}
	else
	{
		lua_pushnumber(L, result.real() );
	}
	return 1;
}

int variable_global_array_get( lua_State *L ) //   CGMVariable variable_global_array_get( const CGMVariable& name, const int ind )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	gm::CGMVariable result = gm::variable_global_array_get( vara, lua_tonumber( L, 2)  );
	if( result.IsString() )
	{
		lua_pushstring(L, result.c_str() );
	}
	else
	{
		lua_pushnumber(L, result.real() );
	}
	return 1;
}

int variable_local_get( lua_State *L ) //   CGMVariable variable_local_get( const CGMVariable& name )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	gm::CGMVariable result = gm::variable_local_get( vara  );
	if( result.IsString() )
	{
		lua_pushstring(L, result.c_str() );
	}
	else
	{
		lua_pushnumber(L, result.real() );
	}
	return 1;
}

int variable_local_array_get( lua_State *L ) //   CGMVariable variable_local_array_get( const CGMVariable& name, const int ind )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	gm::CGMVariable result = gm::variable_local_array_get( vara, lua_tonumber( L, 2)  );
	if( result.IsString() )
	{
		lua_pushstring(L, result.c_str() );
	}
	else
	{
		lua_pushnumber(L, result.real() );
	}
	return 1;
}

int variable_global_set( lua_State *L ) //   void variable_global_set( const CGMVariable& name, const CGMVariable& value )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}
	gm::CGMVariable varb;
	if( lua_type( L, 2) == LUA_TSTRING )
	{
		varb = lua_tostring( L, 2 );
	}
	else
	{
		varb = lua_tonumber( L, 2 ); 
	}

	gm::variable_global_set( vara, varb  );
	return 0;
}

int variable_local_set( lua_State *L ) //   void variable_local_set( const CGMVariable& name, const CGMVariable& value )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}
	gm::CGMVariable varb;
	if( lua_type( L, 2) == LUA_TSTRING )
	{
		varb = lua_tostring( L, 2 );
	}
	else
	{
		varb = lua_tonumber( L, 2 ); 
	}

	gm::variable_local_set( vara, varb  );
	return 0;
}

int set_program_priority( lua_State *L ) //   void set_program_priority( const int priority )
{

	gm::set_program_priority( lua_tonumber( L, 1)  );
	return 0;
}

int keyboard_set_map( lua_State *L ) //   void keyboard_set_map( const int key1, const int key2 )
{

	gm::keyboard_set_map( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int keyboard_get_map( lua_State *L ) //   int keyboard_get_map( const int key )
{

	lua_pushnumber(L, gm::keyboard_get_map( lua_tonumber( L, 1)  ) );
	return 1;
}

int keyboard_unset_map( lua_State *L ) //   void keyboard_unset_map()
{

	gm::keyboard_unset_map(  );
	return 0;
}

int keyboard_check( lua_State *L ) //   bool keyboard_check( const int key )
{

	lua_pushnumber(L, gm::keyboard_check( lua_tonumber( L, 1)  ) );
	return 1;
}

int keyboard_check_pressed( lua_State *L ) //   bool keyboard_check_pressed( const int key )
{

	lua_pushnumber(L, gm::keyboard_check_pressed( lua_tonumber( L, 1)  ) );
	return 1;
}

int keyboard_check_released( lua_State *L ) //   bool keyboard_check_released( const int key )
{

	lua_pushnumber(L, gm::keyboard_check_released( lua_tonumber( L, 1)  ) );
	return 1;
}

int keyboard_check_direct( lua_State *L ) //   bool keyboard_check_direct( const int key )
{

	lua_pushnumber(L, gm::keyboard_check_direct( lua_tonumber( L, 1)  ) );
	return 1;
}

int keyboard_get_numlock( lua_State *L ) //   bool keyboard_get_numlock()
{

	lua_pushnumber(L, gm::keyboard_get_numlock(  ) );
	return 1;
}

int keyboard_set_numlock( lua_State *L ) //   void keyboard_set_numlock( const bool on )
{

	gm::keyboard_set_numlock( lua_tonumber( L, 1)  );
	return 0;
}

int keyboard_key_press( lua_State *L ) //   void keyboard_key_press( const int key )
{

	gm::keyboard_key_press( lua_tonumber( L, 1)  );
	return 0;
}

int keyboard_key_release( lua_State *L ) //   void keyboard_key_release( const int key )
{

	gm::keyboard_key_release( lua_tonumber( L, 1)  );
	return 0;
}

int keyboard_clear( lua_State *L ) //   void keyboard_clear( const int key )
{

	gm::keyboard_clear( lua_tonumber( L, 1)  );
	return 0;
}

int io_clear( lua_State *L ) //   void io_clear()
{

	gm::io_clear(  );
	return 0;
}

int keyboard_wait( lua_State *L ) //   void keyboard_wait()
{

	gm::keyboard_wait(  );
	return 0;
}

int mouse_check_button( lua_State *L ) //   bool mouse_check_button( const int numb )
{

	lua_pushnumber(L, gm::mouse_check_button( lua_tonumber( L, 1)  ) );
	return 1;
}

int mouse_check_button_pressed( lua_State *L ) //   bool mouse_check_button_pressed( const int numb )
{

	lua_pushnumber(L, gm::mouse_check_button_pressed( lua_tonumber( L, 1)  ) );
	return 1;
}

int mouse_check_button_released( lua_State *L ) //   bool mouse_check_button_released( const int numb )
{

	lua_pushnumber(L, gm::mouse_check_button_released( lua_tonumber( L, 1)  ) );
	return 1;
}

int mouse_clear( lua_State *L ) //   void mouse_clear( const int button )
{

	gm::mouse_clear( lua_tonumber( L, 1)  );
	return 0;
}

/*
int io_clear( lua_State *L ) //   void io_clear()
{

	gm::io_clear(  );
	return 0;
}
*/

int io_handle( lua_State *L ) //   void io_handle()
{

	gm::io_handle(  );
	return 0;
}

int mouse_wait( lua_State *L ) //   void mouse_wait()
{

	gm::mouse_wait(  );
	return 0;
}

int joystick_exists( lua_State *L ) //   bool joystick_exists( const int id )
{

	lua_pushnumber(L, gm::joystick_exists( lua_tonumber( L, 1)  ) );
	return 1;
}

int joystick_name( lua_State *L ) //   CGMVariable joystick_name( const int id )
{

	gm::CGMVariable result = gm::joystick_name( lua_tonumber( L, 1)  );
	if( result.IsString() )
	{
		lua_pushstring(L, result.c_str() );
	}
	else
	{
		lua_pushnumber(L, result.real() );
	}
	return 1;
}

int joystick_axes( lua_State *L ) //   int joystick_axes( const int id )
{

	lua_pushnumber(L, gm::joystick_axes( lua_tonumber( L, 1)  ) );
	return 1;
}

int joystick_buttons( lua_State *L ) //   int joystick_buttons( const int id )
{

	lua_pushnumber(L, gm::joystick_buttons( lua_tonumber( L, 1)  ) );
	return 1;
}

int joystick_has_pov( lua_State *L ) //   bool joystick_has_pov( const int id )
{

	lua_pushnumber(L, gm::joystick_has_pov( lua_tonumber( L, 1)  ) );
	return 1;
}

int joystick_direction( lua_State *L ) //   int joystick_direction( const int id )
{

	lua_pushnumber(L, gm::joystick_direction( lua_tonumber( L, 1)  ) );
	return 1;
}

int joystick_check_button( lua_State *L ) //   bool joystick_check_button( const int id, const int numb )
{

	lua_pushnumber(L, gm::joystick_check_button( lua_tonumber( L, 1), lua_tonumber( L, 2)  ) );
	return 1;
}

int joystick_xpos( lua_State *L ) //   int joystick_xpos( const int id )
{

	lua_pushnumber(L, gm::joystick_xpos( lua_tonumber( L, 1)  ) );
	return 1;
}

int joystick_ypos( lua_State *L ) //   int joystick_ypos( const int id )
{

	lua_pushnumber(L, gm::joystick_ypos( lua_tonumber( L, 1)  ) );
	return 1;
}

int joystick_zpos( lua_State *L ) //   int joystick_zpos( const int id )
{

	lua_pushnumber(L, gm::joystick_zpos( lua_tonumber( L, 1)  ) );
	return 1;
}

int joystick_rpos( lua_State *L ) //   int joystick_rpos( const int id )
{

	lua_pushnumber(L, gm::joystick_rpos( lua_tonumber( L, 1)  ) );
	return 1;
}

int joystick_upos( lua_State *L ) //   int joystick_upos( const int id )
{

	lua_pushnumber(L, gm::joystick_upos( lua_tonumber( L, 1)  ) );
	return 1;
}

int joystick_vpos( lua_State *L ) //   int joystick_vpos( const int id )
{

	lua_pushnumber(L, gm::joystick_vpos( lua_tonumber( L, 1)  ) );
	return 1;
}

int joystick_pov( lua_State *L ) //   int joystick_pov( const int id )
{

	lua_pushnumber(L, gm::joystick_pov( lua_tonumber( L, 1)  ) );
	return 1;
}

int effect_clear( lua_State *L ) //   void effect_clear()
{

	gm::effect_clear(  );
	return 0;
}

int part_type_create( lua_State *L ) //   int part_type_create()
{

	lua_pushnumber(L, gm::part_type_create(  ) );
	return 1;
}

int part_type_destroy( lua_State *L ) //   void part_type_destroy( const int ind )
{

	gm::part_type_destroy( lua_tonumber( L, 1)  );
	return 0;
}

int part_type_exists( lua_State *L ) //   bool part_type_exists( const int ind )
{

	lua_pushnumber(L, gm::part_type_exists( lua_tonumber( L, 1)  ) );
	return 1;
}

int part_type_clear( lua_State *L ) //   void part_type_clear( const int ind )
{

	gm::part_type_clear( lua_tonumber( L, 1)  );
	return 0;
}

int part_type_shape( lua_State *L ) //   void part_type_shape( const int ind, const int shape )
{

	gm::part_type_shape( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int part_type_scale( lua_State *L ) //   void part_type_scale( const int ind, const double xscale, const double yscale )
{

	gm::part_type_scale( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int part_type_color1( lua_State *L ) //   void part_type_color1( const int ind, const int color1 )
{

	gm::part_type_color1( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int part_type_color2( lua_State *L ) //   void part_type_color2( const int ind, const int color1, const int color2 )
{

	gm::part_type_color2( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int part_type_color3( lua_State *L ) //   void part_type_color3( const int ind, const int color1, const int color2, const int color3 )
{

	gm::part_type_color3( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3), lua_tonumber( L, 4)  );
	return 0;
}

int part_type_color_mix( lua_State *L ) //   void part_type_color_mix( const int ind, const int color1, const int color2 )
{

	gm::part_type_color_mix( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int part_type_alpha1( lua_State *L ) //   void part_type_alpha1( const int ind, const double alpha1 )
{

	gm::part_type_alpha1( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int part_type_alpha2( lua_State *L ) //   void part_type_alpha2( const int ind, const double alpha1, const double alpha2 )
{

	gm::part_type_alpha2( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int part_type_blend( lua_State *L ) //   void part_type_blend( const int ind, const bool additive )
{

	gm::part_type_blend( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int part_type_life( lua_State *L ) //   void part_type_life( const int ind, const double life_min, const double life_max )
{

	gm::part_type_life( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int part_type_step( lua_State *L ) //   void part_type_step( const int ind, const int step_number, const int step_type )
{

	gm::part_type_step( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int part_type_death( lua_State *L ) //   void part_type_death( const int ind, const int death_number, const int death_type )
{

	gm::part_type_death( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int part_type_gravity( lua_State *L ) //   void part_type_gravity( const int ind, const double grav_amount, const double grav_dir )
{

	gm::part_type_gravity( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int part_system_create( lua_State *L ) //   int part_system_create()
{

	lua_pushnumber(L, gm::part_system_create(  ) );
	return 1;
}

int part_system_destroy( lua_State *L ) //   void part_system_destroy( const int ind )
{

	gm::part_system_destroy( lua_tonumber( L, 1)  );
	return 0;
}

int part_system_exists( lua_State *L ) //   bool part_system_exists( const int ind )
{

	lua_pushnumber(L, gm::part_system_exists( lua_tonumber( L, 1)  ) );
	return 1;
}

int part_system_clear( lua_State *L ) //   void part_system_clear( const int ind )
{

	gm::part_system_clear( lua_tonumber( L, 1)  );
	return 0;
}

int part_system_draw_order( lua_State *L ) //   void part_system_draw_order( const int ind, const bool oldtonew )
{

	gm::part_system_draw_order( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int part_system_depth( lua_State *L ) //   void part_system_depth( const int ind, const int depth )
{

	gm::part_system_depth( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int part_system_position( lua_State *L ) //   void part_system_position( const int ind, const double x, const double y )
{

	gm::part_system_position( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int part_system_automatic_update( lua_State *L ) //   void part_system_automatic_update( const int ind, const bool automatic )
{

	gm::part_system_automatic_update( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int part_system_automatic_draw( lua_State *L ) //   void part_system_automatic_draw( const int ind, const bool automatic )
{

	gm::part_system_automatic_draw( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int part_system_update( lua_State *L ) //   void part_system_update( const int ind )
{

	gm::part_system_update( lua_tonumber( L, 1)  );
	return 0;
}

int part_system_drawit( lua_State *L ) //   void part_system_drawit( const int ind )
{

	gm::part_system_drawit( lua_tonumber( L, 1)  );
	return 0;
}

int part_particles_clear( lua_State *L ) //   void part_particles_clear( const int ind )
{

	gm::part_particles_clear( lua_tonumber( L, 1)  );
	return 0;
}

int part_particles_count( lua_State *L ) //   int part_particles_count( const int ind )
{

	lua_pushnumber(L, gm::part_particles_count( lua_tonumber( L, 1)  ) );
	return 1;
}

int part_emitter_create( lua_State *L ) //   int part_emitter_create( const int ps )
{

	lua_pushnumber(L, gm::part_emitter_create( lua_tonumber( L, 1)  ) );
	return 1;
}

int part_emitter_destroy( lua_State *L ) //   void part_emitter_destroy( const int ps, const int ind )
{

	gm::part_emitter_destroy( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int part_emitter_destroy_all( lua_State *L ) //   void part_emitter_destroy_all( const int ps )
{

	gm::part_emitter_destroy_all( lua_tonumber( L, 1)  );
	return 0;
}

int part_emitter_exists( lua_State *L ) //   bool part_emitter_exists( const int ps, const int ind )
{

	lua_pushnumber(L, gm::part_emitter_exists( lua_tonumber( L, 1), lua_tonumber( L, 2)  ) );
	return 1;
}

int part_emitter_clear( lua_State *L ) //   void part_emitter_clear( const int ps, const int ind )
{

	gm::part_emitter_clear( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int part_emitter_burst( lua_State *L ) //   void part_emitter_burst( const int ps, const int ind, const int parttype, const int number )
{

	gm::part_emitter_burst( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3), lua_tonumber( L, 4)  );
	return 0;
}

int part_emitter_stream( lua_State *L ) //   void part_emitter_stream( const int ps, const int ind, const int parttype, const int number )
{

	gm::part_emitter_stream( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3), lua_tonumber( L, 4)  );
	return 0;
}

int part_attractor_create( lua_State *L ) //   int part_attractor_create( const int ps )
{

	lua_pushnumber(L, gm::part_attractor_create( lua_tonumber( L, 1)  ) );
	return 1;
}

int part_attractor_destroy( lua_State *L ) //   void part_attractor_destroy( const int ps, const int ind )
{

	gm::part_attractor_destroy( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int part_attractor_destroy_all( lua_State *L ) //   void part_attractor_destroy_all( const int ps )
{

	gm::part_attractor_destroy_all( lua_tonumber( L, 1)  );
	return 0;
}

int part_attractor_exists( lua_State *L ) //   bool part_attractor_exists( const int ps, const int ind )
{

	lua_pushnumber(L, gm::part_attractor_exists( lua_tonumber( L, 1), lua_tonumber( L, 2)  ) );
	return 1;
}

int part_attractor_clear( lua_State *L ) //   void part_attractor_clear( const int ps, const int ind )
{

	gm::part_attractor_clear( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int part_attractor_position( lua_State *L ) //   void part_attractor_position( const int ps, const int ind, const double x, const double y )
{

	gm::part_attractor_position( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3), lua_tonumber( L, 4)  );
	return 0;
}

int part_destroyer_create( lua_State *L ) //   int part_destroyer_create( const int ps )
{

	lua_pushnumber(L, gm::part_destroyer_create( lua_tonumber( L, 1)  ) );
	return 1;
}

int part_destroyer_destroy( lua_State *L ) //   void part_destroyer_destroy( const int ps, const int ind )
{

	gm::part_destroyer_destroy( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int part_destroyer_destroy_all( lua_State *L ) //   void part_destroyer_destroy_all( const int ps )
{

	gm::part_destroyer_destroy_all( lua_tonumber( L, 1)  );
	return 0;
}

int part_destroyer_exists( lua_State *L ) //   bool part_destroyer_exists( const int ps, const int ind )
{

	lua_pushnumber(L, gm::part_destroyer_exists( lua_tonumber( L, 1), lua_tonumber( L, 2)  ) );
	return 1;
}

int part_destroyer_clear( lua_State *L ) //   void part_destroyer_clear( const int ps, const int ind )
{

	gm::part_destroyer_clear( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int part_deflector_destroy( lua_State *L ) //   void part_deflector_destroy( const int ps, const int ind )
{

	gm::part_deflector_destroy( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int part_deflector_destroy_all( lua_State *L ) //   void part_deflector_destroy_all( const int ps )
{

	gm::part_deflector_destroy_all( lua_tonumber( L, 1)  );
	return 0;
}

int part_deflector_exists( lua_State *L ) //   bool part_deflector_exists( const int ps, const int ind )
{

	lua_pushnumber(L, gm::part_deflector_exists( lua_tonumber( L, 1), lua_tonumber( L, 2)  ) );
	return 1;
}

int part_deflector_clear( lua_State *L ) //   void part_deflector_clear( const int ps, const int ind )
{

	gm::part_deflector_clear( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int part_deflector_kind( lua_State *L ) //   void part_deflector_kind( const int ps, const int ind, const int kind )
{

	gm::part_deflector_kind( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int part_deflector_friction( lua_State *L ) //   void part_deflector_friction( const int ps, const int ind, const double friction )
{

	gm::part_deflector_friction( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int part_changer_create( lua_State *L ) //   int part_changer_create( const int ps )
{

	lua_pushnumber(L, gm::part_changer_create( lua_tonumber( L, 1)  ) );
	return 1;
}

int part_changer_destroy( lua_State *L ) //   void part_changer_destroy( const int ps, const int ind )
{

	gm::part_changer_destroy( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int part_changer_destroy_all( lua_State *L ) //   void part_changer_destroy_all( const int ps )
{

	gm::part_changer_destroy_all( lua_tonumber( L, 1)  );
	return 0;
}

int part_changer_exists( lua_State *L ) //   bool part_changer_exists( const int ps, const int ind )
{

	lua_pushnumber(L, gm::part_changer_exists( lua_tonumber( L, 1), lua_tonumber( L, 2)  ) );
	return 1;
}

int part_changer_clear( lua_State *L ) //   void part_changer_clear( const int ps, const int ind )
{

	gm::part_changer_clear( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int part_changer_kind( lua_State *L ) //   void part_changer_kind( const int ps, const int ind, const int kind )
{

	gm::part_changer_kind( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int show_message( lua_State *L ) //   void show_message( const CGMVariable& str )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	gm::show_message( vara  );
	return 0;
}

int show_question( lua_State *L ) //   bool show_question( const CGMVariable& str )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	lua_pushnumber(L, gm::show_question( vara  ) );
	return 1;
}

int get_integer( lua_State *L ) //   double get_integer( const CGMVariable& str, const double def )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	lua_pushnumber(L, gm::get_integer( vara, lua_tonumber( L, 2)  ) );
	return 1;
}

int get_string( lua_State *L ) //   CGMVariable get_string( const CGMVariable& str, const CGMVariable& def )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}
	gm::CGMVariable varb;
	if( lua_type( L, 2) == LUA_TSTRING )
	{
		varb = lua_tostring( L, 2 );
	}
	else
	{
		varb = lua_tonumber( L, 2 ); 
	}

	gm::CGMVariable result = gm::get_string( vara, varb  );
	if( result.IsString() )
	{
		lua_pushstring(L, result.c_str() );
	}
	else
	{
		lua_pushnumber(L, result.real() );
	}
	return 1;
}

int message_background( lua_State *L ) //   void message_background( const int back )
{

	gm::message_background( lua_tonumber( L, 1)  );
	return 0;
}

int message_alpha( lua_State *L ) //   void message_alpha( const double alpha )
{

	gm::message_alpha( lua_tonumber( L, 1)  );
	return 0;
}

int message_button( lua_State *L ) //   void message_button( const int spr )
{

	gm::message_button( lua_tonumber( L, 1)  );
	return 0;
}

int message_input_color( lua_State *L ) //   void message_input_color( const int col )
{

	gm::message_input_color( lua_tonumber( L, 1)  );
	return 0;
}

int message_mouse_color( lua_State *L ) //   void message_mouse_color( const int col )
{

	gm::message_mouse_color( lua_tonumber( L, 1)  );
	return 0;
}

int message_caption( lua_State *L ) //   void message_caption( const bool show, const CGMVariable& str )
{
	gm::CGMVariable varb;
	if( lua_type( L, 2) == LUA_TSTRING )
	{
		varb = lua_tostring( L, 2 );
	}
	else
	{
		varb = lua_tonumber( L, 2 ); 
	}

	gm::message_caption( lua_tonumber( L, 1), varb  );
	return 0;
}

int message_position( lua_State *L ) //   void message_position( const int x, const int y )
{

	gm::message_position( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int message_size( lua_State *L ) //   void message_size( const int w, const int h )
{

	gm::message_size( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int show_menu( lua_State *L ) //   int show_menu( const CGMVariable& str, const int def )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	lua_pushnumber(L, gm::show_menu( vara, lua_tonumber( L, 2)  ) );
	return 1;
}

int show_menu_pos( lua_State *L ) //   int show_menu_pos( const int x, const int y, const CGMVariable& str, const int def )
{
	gm::CGMVariable varc;
	if( lua_type( L, 3) == LUA_TSTRING )
	{
		varc = lua_tostring( L, 3 );
	}
	else
	{
		varc = lua_tonumber( L, 3 ); 
	}

	lua_pushnumber(L, gm::show_menu_pos( lua_tonumber( L, 1), lua_tonumber( L, 2), varc, lua_tonumber( L, 4)  ) );
	return 1;
}

int get_color( lua_State *L ) //   int get_color( const int defcol )
{

	lua_pushnumber(L, gm::get_color( lua_tonumber( L, 1)  ) );
	return 1;
}

int get_open_filename( lua_State *L ) //   CGMVariable get_open_filename( const CGMVariable& filter, const CGMVariable& fname )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}
	gm::CGMVariable varb;
	if( lua_type( L, 2) == LUA_TSTRING )
	{
		varb = lua_tostring( L, 2 );
	}
	else
	{
		varb = lua_tonumber( L, 2 ); 
	}

	gm::CGMVariable result = gm::get_open_filename( vara, varb  );
	if( result.IsString() )
	{
		lua_pushstring(L, result.c_str() );
	}
	else
	{
		lua_pushnumber(L, result.real() );
	}
	return 1;
}

int get_save_filename( lua_State *L ) //   CGMVariable get_save_filename( const CGMVariable& filter, const CGMVariable& fname )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}
	gm::CGMVariable varb;
	if( lua_type( L, 2) == LUA_TSTRING )
	{
		varb = lua_tostring( L, 2 );
	}
	else
	{
		varb = lua_tonumber( L, 2 ); 
	}

	gm::CGMVariable result = gm::get_save_filename( vara, varb  );
	if( result.IsString() )
	{
		lua_pushstring(L, result.c_str() );
	}
	else
	{
		lua_pushnumber(L, result.real() );
	}
	return 1;
}

int get_directory( lua_State *L ) //   CGMVariable get_directory( const CGMVariable& dname )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	gm::CGMVariable result = gm::get_directory( vara  );
	if( result.IsString() )
	{
		lua_pushstring(L, result.c_str() );
	}
	else
	{
		lua_pushnumber(L, result.real() );
	}
	return 1;
}

int get_directory_alt( lua_State *L ) //   CGMVariable get_directory_alt( const CGMVariable& capt, const CGMVariable& root )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}
	gm::CGMVariable varb;
	if( lua_type( L, 2) == LUA_TSTRING )
	{
		varb = lua_tostring( L, 2 );
	}
	else
	{
		varb = lua_tonumber( L, 2 ); 
	}

	gm::CGMVariable result = gm::get_directory_alt( vara, varb  );
	if( result.IsString() )
	{
		lua_pushstring(L, result.c_str() );
	}
	else
	{
		lua_pushnumber(L, result.real() );
	}
	return 1;
}

int splash_show_video( lua_State *L ) //   void splash_show_video( const CGMVariable& fname, const bool loop )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	gm::splash_show_video( vara, lua_tonumber( L, 2)  );
	return 0;
}

int splash_show_text( lua_State *L ) //   void splash_show_text( const CGMVariable& fname, const int delay )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	gm::splash_show_text( vara, lua_tonumber( L, 2)  );
	return 0;
}

int splash_show_image( lua_State *L ) //   void splash_show_image( const CGMVariable& fname, const int delay )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	gm::splash_show_image( vara, lua_tonumber( L, 2)  );
	return 0;
}

int splash_set_main( lua_State *L ) //   void splash_set_main( const bool main )
{

	gm::splash_set_main( lua_tonumber( L, 1)  );
	return 0;
}

int splash_set_scale( lua_State *L ) //   void splash_set_scale( const double scape )
{

	gm::splash_set_scale( lua_tonumber( L, 1)  );
	return 0;
}

int splash_set_cursor( lua_State *L ) //   void splash_set_cursor( const bool vis )
{

	gm::splash_set_cursor( lua_tonumber( L, 1)  );
	return 0;
}

int splash_set_color( lua_State *L ) //   void splash_set_color( const int col )
{

	gm::splash_set_color( lua_tonumber( L, 1)  );
	return 0;
}

int splash_set_caption( lua_State *L ) //   void splash_set_caption( const CGMVariable& cap )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	gm::splash_set_caption( vara  );
	return 0;
}

int splash_set_fullscreen( lua_State *L ) //   void splash_set_fullscreen( const bool full )
{

	gm::splash_set_fullscreen( lua_tonumber( L, 1)  );
	return 0;
}

int splash_set_border( lua_State *L ) //   void splash_set_border( const bool border )
{

	gm::splash_set_border( lua_tonumber( L, 1)  );
	return 0;
}

int splash_set_size( lua_State *L ) //   void splash_set_size( const int w, const int h )
{

	gm::splash_set_size( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int splash_set_adapt( lua_State *L ) //   void splash_set_adapt( const bool adapt )
{

	gm::splash_set_adapt( lua_tonumber( L, 1)  );
	return 0;
}

int splash_set_top( lua_State *L ) //   void splash_set_top( const bool top )
{

	gm::splash_set_top( lua_tonumber( L, 1)  );
	return 0;
}

int splash_set_interrupt( lua_State *L ) //   void splash_set_interrupt( const bool interrupt )
{

	gm::splash_set_interrupt( lua_tonumber( L, 1)  );
	return 0;
}

int splash_set_stop_key( lua_State *L ) //   void splash_set_stop_key( const bool stop )
{

	gm::splash_set_stop_key( lua_tonumber( L, 1)  );
	return 0;
}

int splash_set_stop_mouse( lua_State *L ) //   void splash_set_stop_mouse( const bool stop )
{

	gm::splash_set_stop_mouse( lua_tonumber( L, 1)  );
	return 0;
}

int show_info( lua_State *L ) //   void show_info()
{

	gm::show_info(  );
	return 0;
}

int load_info( lua_State *L ) //   void load_info( const CGMVariable& fname )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	gm::load_info( vara  );
	return 0;
}

int show_error( lua_State *L ) //   void show_error( const CGMVariable& str, const bool abort )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	gm::show_error( vara, lua_tonumber( L, 2)  );
	return 0;
}

int highscore_show( lua_State *L ) //   void highscore_show( const double numb )
{

	gm::highscore_show( lua_tonumber( L, 1)  );
	return 0;
}

int highscore_set_background( lua_State *L ) //   void highscore_set_background( const int back )
{

	gm::highscore_set_background( lua_tonumber( L, 1)  );
	return 0;
}

int highscore_set_border( lua_State *L ) //   void highscore_set_border( const bool show )
{

	gm::highscore_set_border( lua_tonumber( L, 1)  );
	return 0;
}

int highscore_set_font( lua_State *L ) //   void highscore_set_font( const CGMVariable& name, const int size, const int style )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	gm::highscore_set_font( vara, lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int highscore_set_colors( lua_State *L ) //   void highscore_set_colors( const int back, const int new_, const int other )
{

	gm::highscore_set_colors( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int highscore_clear( lua_State *L ) //   void highscore_clear()
{

	gm::highscore_clear(  );
	return 0;
}

int highscore_add( lua_State *L ) //   void highscore_add( const CGMVariable& str, const double numb )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	gm::highscore_add( vara, lua_tonumber( L, 2)  );
	return 0;
}

int highscore_add_current( lua_State *L ) //   void highscore_add_current()
{

	gm::highscore_add_current(  );
	return 0;
}

int highscore_value( lua_State *L ) //   double highscore_value( const int place )
{

	lua_pushnumber(L, gm::highscore_value( lua_tonumber( L, 1)  ) );
	return 1;
}

int highscore_name( lua_State *L ) //   CGMVariable highscore_name( const int place )
{

	gm::CGMVariable result = gm::highscore_name( lua_tonumber( L, 1)  );
	if( result.IsString() )
	{
		lua_pushstring(L, result.c_str() );
	}
	else
	{
		lua_pushnumber(L, result.real() );
	}
	return 1;
}

int sound_play( lua_State *L ) //   void sound_play( const int index )
{

	gm::sound_play( lua_tonumber( L, 1)  );
	return 0;
}

int sound_loop( lua_State *L ) //   void sound_loop( const int index )
{

	gm::sound_loop( lua_tonumber( L, 1)  );
	return 0;
}

int sound_stop( lua_State *L ) //   void sound_stop( const int index )
{

	gm::sound_stop( lua_tonumber( L, 1)  );
	return 0;
}

int sound_stop_all( lua_State *L ) //   void sound_stop_all()
{

	gm::sound_stop_all(  );
	return 0;
}

int sound_isplaying( lua_State *L ) //   bool sound_isplaying( const int index )
{

	lua_pushnumber(L, gm::sound_isplaying( lua_tonumber( L, 1)  ) );
	return 1;
}

int sound_volume( lua_State *L ) //   void sound_volume( const int index, const double value )
{

	gm::sound_volume( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int sound_global_volume( lua_State *L ) //   void sound_global_volume( const double value )
{

	gm::sound_global_volume( lua_tonumber( L, 1)  );
	return 0;
}

int sound_fade( lua_State *L ) //   void sound_fade( const int index, const double value, const int time )
{

	gm::sound_fade( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int sound_pan( lua_State *L ) //   void sound_pan( const int index, const double value )
{

	gm::sound_pan( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int sound_background_tempo( lua_State *L ) //   void sound_background_tempo( const double factor )
{

	gm::sound_background_tempo( lua_tonumber( L, 1)  );
	return 0;
}

int sound_set_search_directory( lua_State *L ) //   void sound_set_search_directory( const CGMVariable& dir )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	gm::sound_set_search_directory( vara  );
	return 0;
}

int sound_effect_set( lua_State *L ) //   void sound_effect_set( const int snd, const int effect )
{

	gm::sound_effect_set( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int sound_effect_gargle( lua_State *L ) //   void sound_effect_gargle( const int snd, const double rate, const int wave )
{

	gm::sound_effect_gargle( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int sound_3d_set_sound_distance( lua_State *L ) //   void sound_3d_set_sound_distance( const int snd, const double mindist, const double maxdist )
{

	gm::sound_3d_set_sound_distance( lua_tonumber( L, 1), lua_tonumber( L, 2), lua_tonumber( L, 3)  );
	return 0;
}

int cd_init( lua_State *L ) //   void cd_init()
{

	gm::cd_init(  );
	return 0;
}

int cd_present( lua_State *L ) //   bool cd_present()
{

	lua_pushnumber(L, gm::cd_present(  ) );
	return 1;
}

int cd_number( lua_State *L ) //   int cd_number()
{

	lua_pushnumber(L, gm::cd_number(  ) );
	return 1;
}

int cd_playing( lua_State *L ) //   bool cd_playing()
{

	lua_pushnumber(L, gm::cd_playing(  ) );
	return 1;
}

int cd_paused( lua_State *L ) //   bool cd_paused()
{

	lua_pushnumber(L, gm::cd_paused(  ) );
	return 1;
}

int cd_track( lua_State *L ) //   int cd_track()
{

	lua_pushnumber(L, gm::cd_track(  ) );
	return 1;
}

int cd_length( lua_State *L ) //   int cd_length()
{

	lua_pushnumber(L, gm::cd_length(  ) );
	return 1;
}

int cd_track_length( lua_State *L ) //   int cd_track_length( const int n )
{

	lua_pushnumber(L, gm::cd_track_length( lua_tonumber( L, 1)  ) );
	return 1;
}

int cd_position( lua_State *L ) //   int cd_position()
{

	lua_pushnumber(L, gm::cd_position(  ) );
	return 1;
}

int cd_track_position( lua_State *L ) //   int cd_track_position()
{

	lua_pushnumber(L, gm::cd_track_position(  ) );
	return 1;
}

int cd_play( lua_State *L ) //   void cd_play( const int first, const int last )
{

	gm::cd_play( lua_tonumber( L, 1), lua_tonumber( L, 2)  );
	return 0;
}

int cd_stop( lua_State *L ) //   void cd_stop()
{

	gm::cd_stop(  );
	return 0;
}

int cd_pause( lua_State *L ) //   void cd_pause()
{

	gm::cd_pause(  );
	return 0;
}

int cd_resume( lua_State *L ) //   void cd_resume()
{

	gm::cd_resume(  );
	return 0;
}

int cd_set_position( lua_State *L ) //   int cd_set_position( const int pos )
{

	lua_pushnumber(L, gm::cd_set_position( lua_tonumber( L, 1)  ) );
	return 1;
}

int cd_set_track_position( lua_State *L ) //   void cd_set_track_position( const int pos )
{

	gm::cd_set_track_position( lua_tonumber( L, 1)  );
	return 0;
}

int cd_open_door( lua_State *L ) //   void cd_open_door()
{

	gm::cd_open_door(  );
	return 0;
}

int cd_close_door( lua_State *L ) //   void cd_close_door()
{

	gm::cd_close_door(  );
	return 0;
}

int MCI_command( lua_State *L ) //   CGMVariable MCI_command( const CGMVariable& str )
{
	gm::CGMVariable vara;
	if( lua_type( L, 1) == LUA_TSTRING )
	{
		vara = lua_tostring( L, 1 );
	}
	else
	{
		vara = lua_tonumber( L, 1 ); 
	}

	gm::CGMVariable result = gm::MCI_command( vara  );
	if( result.IsString() )
	{
		lua_pushstring(L, result.c_str() );
	}
	else
	{
		lua_pushnumber(L, result.real() );
	}
	return 1;
}
/* GM WRAPPERS END */
};

