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
	.string "Do not be fooled, SLOWPOKE TAIL have\n"
	.string "hardly any value, and SLOWPOKE\l"
	.string "regenerates them shortly after losing\l"
	.string "them. The only way to make someone\l"
	.string "believe they are valuable is for\l"
	.string "everyone around them to agree to\l"
	.string "deceive them.$"



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
