FiveIsland_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_PokemonCenter_1F_OnTransition
	.byte 0

FiveIsland_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_FIVE_ISLAND
	end

FiveIsland_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

FiveIslandPokemonCenter1::
end



FiveIslandPokemonCenter2::
lock     
faceplayer     
msgbox FiveIsland_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

FiveIsland_PokemonCenter_Text_2:
.string "¿Conoces ya los RECREATIVOS?\p"
.string "Lo suyo es ir al menos con\n"
.string "un amigo. Si no, es un rollo.$"



FiveIslandPokemonCenter3::
lock     
faceplayer     
msgbox FiveIsland_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

FiveIsland_PokemonCenter_Text_3:
.string "ISLA SECUNDA tiene muy pocos\n"
.string "habitantes.\p"
.string "En el mismo cabo vive una señora\n"
.string "mayor.\p"
.string "Lleva allí ni se sabe…$"



FiveIslandPokemonCenterDocumento_100::
msgbox FiveIslandPokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

FiveIslandPokemonCenterDocumento_Text_100:
	.string "POKéMON JOURNAL\p"
	.string "Special Feature:\n"
	.string "ELITE FOUR's LORELEI!\p"
	.string "Known for her logical, calculated,\n"
	.string "and cool battling style, LORELEI\l"
	.string "has a surprising secret!$"
