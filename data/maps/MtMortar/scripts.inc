MtMortar_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, MtMortar_OnResume
	.byte 0

MtMortar_OnResume:
	call MtMortar_SetupEscapeWarp
	end

MtMortar_SetupEscapeWarp::
	setescapewarp MAP_ROUTE42, 13, 10
	return

MtMortar1::
end



MtMortar2::
end
