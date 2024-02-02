WhirlIslands2_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, WhirlIslands2_OnResume
	.byte 0

WhirlIslands2_OnResume:
	call WhirlIslands2_SetupEscapeWarp
	end

WhirlIslands2_SetupEscapeWarp::
	setescapewarp MAP_ROUTE41, 45, 46
	return

WhirlIslands2_1::
end



WhirlIslands2_2::
end



WhirlIslands2_3::
end
