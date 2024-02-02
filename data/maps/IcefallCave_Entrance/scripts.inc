IcefallCave_Entrance_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, IcefallCave_OnResume
	.byte 0

IcefallCave_OnResume:
	call IcefallCave_SetupEscapeWarp
	end

IcefallCave_SetupEscapeWarp::
	setescapewarp MAP_FOUR_ISLAND, 38, 13
	return
