Snowpoint_Templo_S3_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, Snowpoint_Templo_S3_OnResume
	.byte 0

Snowpoint_Templo_S3_OnResume:
	call Snowpoint_Templo_S3_SetupEscapeWarp
	end

Snowpoint_Templo_S3_SetupEscapeWarp::
	setescapewarp MAP_SNOWPOINT_CITY, 16, 8
	return
