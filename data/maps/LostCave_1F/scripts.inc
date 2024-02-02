LostCave_1F_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, LostCave_1F_OnResume
	.byte 0

LostCave_1F_OnResume:
	call LostCave_1F_SetupEscapeWarp
	end

LostCave_1F_SetupEscapeWarp::
	setescapewarp MAP_RESORT_GORGEOUS, 64, 14
	return
