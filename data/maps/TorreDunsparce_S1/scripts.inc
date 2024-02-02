TorreDunsparce_S1_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, TorreDunsparce_S1_OnResume
	.byte 0

TorreDunsparce_S1_OnResume:
	call TorreDunsparce_S1_SetupEscapeWarp
	end

TorreDunsparce_S1_SetupEscapeWarp::
	setescapewarp MAP_ROUTE50_NORTE, 0, 2
	return
