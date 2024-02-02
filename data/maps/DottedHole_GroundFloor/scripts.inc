DottedHole_GroundFloor_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, DottedHole_GroundFloor_OnResume
	.byte 0

DottedHole_GroundFloor_OnResume:
	call DottedHole_GroundFloor_SetupEscapeWarp
	end

DottedHole_GroundFloor_SetupEscapeWarp::
	setescapewarp MAP_RUIN_VALLEY, 24, 25
	return
