BlackthornCity_Dragonsden_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, BlackthornCity_Dragonsden_OnResume
	.byte 0

BlackthornCity_Dragonsden_OnResume:
	call BlackthornCity_Dragonsden_SetupEscapeWarp
	end

BlackthornCity_Dragonsden_SetupEscapeWarp::
	setescapewarp MAP_BLACKTHORN_CITY, 20, 2
	return

