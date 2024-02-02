Pass_Route47_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, Pass_Route47_OnResume
	.byte 0

Pass_Route47_OnResume:
	call Pass_Route47_SetupEscapeWarp
	end

Pass_Route47_SetupEscapeWarp::
	setescapewarp MAP_ROUTE47, 69, 25
	return
