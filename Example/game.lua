local car = false -- Car instance id
local fuel = 1

function onCreate( id ) -- onCreate event with one argument which is car instance id
	car = id
	show_message( "Welcome in our example script, have fun :)" )
end

function onKey( key )
	if( key == 32 ) then -- space // You have to find keys ID yourself ;>
		--Check that car is in area
		if( getX( car ) > 1104 and getY( car ) > 384 and getX( car ) < 1248 and getY( car ) < 448 ) and fuel <= 49.5 then
			fuel = fuel + 0.25 -- Fill fuel
		end
	end
end

function onDraw()
	--Draw liters value below car
	draw_text( getX( car ) - 20, getY( car ) - 50, tostring( fuel ) .. " l" )
		
	--Draw text
	draw_text( 1104 +1, 384 - 15, "Press SPACE to fill your fuel" )
end

function onMove()
	if( fuel > 0.1 ) then -- Check that fuel is sufficiently
		fuel = fuel - 0.005
	else -- If not return 1 for not allow car to run
		return 1
	end
end

function test( str )
	return str .. " is nice!"
end
