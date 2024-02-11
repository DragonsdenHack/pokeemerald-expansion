TohjoFalls_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, TohjoFalls_OnResume
	.byte 0

TohjoFalls_OnResume:
	call TohjoFalls_SetupEscapeWarp
	end

TohjoFalls_SetupEscapeWarp::
	setescapewarp MAP_ROUTE27, 50, 7
	return

TohjoFalls1::
end
