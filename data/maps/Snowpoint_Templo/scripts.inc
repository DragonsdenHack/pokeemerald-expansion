Snowpoint_Templo_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, Snowpoint_Templo_OnResume
	.byte 0

Snowpoint_Templo_OnResume:
	call Snowpoint_Templo_SetupEscapeWarp
	end

Snowpoint_Templo_SetupEscapeWarp::
	setescapewarp MAP_SNOWPOINT_CITY, 16, 8
	return
