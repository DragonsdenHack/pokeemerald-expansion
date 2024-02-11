MtSilver1_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, MtSilver1_OnResume
	.byte 0

MtSilver1_OnResume:
	call MtSilver1_SetupEscapeWarp
	end

MtSilver1_SetupEscapeWarp::
	setescapewarp MAP_MT_SILVER, 14, 7
	return

MtSilver1_1::
end



MtSilver1_2::
end



MtSilver1_3::
end



MtSilver1_4::
end
