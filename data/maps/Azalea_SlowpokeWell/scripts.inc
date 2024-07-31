Azalea_SlowpokeWell_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, Azalea_SlowpokeWell_OnResume
	.byte 0

Azalea_SlowpokeWell_OnResume:
	call Azalea_SlowpokeWell_SetupEscapeWarp
	end

Azalea_SlowpokeWell_SetupEscapeWarp::
	setescapewarp MAP_AZALEA_TOWN, 42, 8
	return

SlowpokeWell1::
end



SlowpokeWell2::
end



SlowpokeWell3::
lock     
faceplayer     
msgbox SlowpokeWell_Text_3, MSGBOX_DEFAULT
release     
end

SlowpokeWell_Text_3:
	.string "Don't be fooled. SLOWPOKE TAIL's cheap,\n"
	.string "in part to the POKÉMON regenerating it\l"
	.string "pretty quickly. The only way to sucker\l"
	.string "someone into buying high is for\l"
	.string "everyone around to be in on the scam.$"



SlowpokeWell4::
end



SlowpokeWell5::
end



SlowpokeWell6::
end



SlowpokeWell7::
end



SlowpokeWell8::
end



SlowpokeWell9::
end



SlowpokeWell10::
end
