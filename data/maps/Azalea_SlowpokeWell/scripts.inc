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
.string "Que no te engañen, las\n"
.string "COLASLOWPOKE no tienen apenas\l"
.string "valor, y los SLOWPOKE las\l"
.string "regeneran al poco de perderlas. La\l"
.string "única forma de hacer creer a\l"
.string "alguien que tienen valor es que\l"
.string "todos a su alrededor se pongan\l"
.string "de acuerdo en engañarle.$"



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
