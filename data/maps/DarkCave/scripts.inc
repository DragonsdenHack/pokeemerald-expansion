DarkCave_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, DarkCave_OnResume
	.byte 0

DarkCave_OnResume:
	call DarkCave_SetupEscapeWarp
	end

DarkCave_SetupEscapeWarp::
	setescapewarp MAP_ROUTE31, 41, 7
	return

DarkCave2::
end



DarkCave3::
end



DarkCave4::
end



DarkCave6::
end



DarkCave7::
end

