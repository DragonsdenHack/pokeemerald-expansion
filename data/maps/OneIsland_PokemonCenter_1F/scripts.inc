OneIsland_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, OneIsland_PokemonCenter_1F_OnTransition
	.byte 0

OneIsland_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_ONE_ISLAND
	end

OneIsland_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

OneIslandPokemonCenter_1::
end



OneIslandPokemonCenter_2::
lock     
faceplayer     
msgbox OneIsland_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

OneIsland_PokemonCenter_Text_2:
.string "On this island, there's an enormous\n"
    .string "volcano.\p"
    .string "It hasn't erupted lately, so why\n"
    .string "not enjoy a hike?$"



OneIslandPokemonCenter_3::
lock     
faceplayer     
msgbox OneIsland_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

OneIsland_PokemonCenter_Text_3:
.string "I wish I could trade POKÉMON with\n"
    .string "my boyfriend who lives far away…$"



OneIslandPokemonCenter_4::
lock     
faceplayer     
msgbox OneIsland_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

OneIsland_PokemonCenter_Text_4:
	.string "Eh, you are not from here? Where did you\n"
	.string "come from? CHRONO ISLAND?... That's not\l"
	.string "far from here.$"



OneIslandPokemonCenter_5::
lock     
faceplayer     
msgbox OneIsland_PokemonCenter_Text_5, MSGBOX_DEFAULT
release     
end

OneIsland_PokemonCenter_Text_5:
	.string "This is not a place for people like you,\n"
	.string "BILL informed me about you, TEAM\l"
	.string "ROCKET, and the troublemakers you've\l"
	.string "been in the region. I suggest you don't\l"
	.string "linger on this island for too long if you\l"
	.string "want to avoid any problems.$"



OneIslandPokemonCenter_6::
lock     
faceplayer     
msgbox OneIsland_PokemonCenter_Text_6, MSGBOX_DEFAULT
release     
end

OneIsland_PokemonCenter_Text_6:
	.string "My master CELIO paid millions POKÉS in\n"
	.string "the black market to have both RUBY and\l"
	.string "SAPPHIRE which he needed for his grand\l"
	.string "project. We installed our machine due to\l"
	.string "the supposed existence of these ores\l"
	.string "in SEVII ISLANDS, however we never\l"
	.string "found it, and we had no other choice but\l"
	.string "to ask BILL for a loan…$"



OneIslandPokemonCenter_7::
lock         
msgbox OneIsland_PokemonCenter_Text_7, MSGBOX_DEFAULT
release     
end

OneIsland_PokemonCenter_Text_7:
.string "Will the legend be true…?$"



OneIslandPokemonCenter_8::
lock         
msgbox OneIsland_PokemonCenter_Text_8, MSGBOX_DEFAULT
release     
end

OneIsland_PokemonCenter_Text_8:
	.string "I can't wait to see what that place\n"
	.string "hides…$"



OneIslandPokemonCenter_9::
lock         
applymovement 9, OneIslandPokemonCenter_9_Move_1
waitmovement 0x0
msgbox OneIsland_PokemonCenter_Text_9, MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CYNDAQUIL
fadescreen 1
delay 20
removeobject 7
removeobject 8
removeobject 9
fadescreen 0
setvar VAR_ROUTE111_STATE, 4
release     
end

OneIslandPokemonCenter_9_Move_1:
walk_in_place_right
step_end

OneIsland_PokemonCenter_Text_9:
	.string "????: Everything is prepared. The rest\n"
	.string "of scientists and DEVON security will\l"
	.string "join us too. Remember, we are not just\l"
	.string "going to search for the big treasure.\l"
	.string "Legends talk about a big variety of\l"
	.string "peerless POKÉMON in that underwater\l"
	.string "grotto. We are so lucky that it was so\l"
	.string "hidden between the south rocks at\l"
	.string "TREASURY BEACH…$"


CuevaTesoro_Activador_Entrada::
compare VAR_ROUTE111_STATE, 3
goto_if_gt CuevaTesoro_Activador_Entrada_Pasa
release
end

CuevaTesoro_Activador_Entrada_Pasa::
delay 15
msgbox CuevaTesoro_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CuevaTesoro_Activador_Entrada_Pasa_Move_1
waitmovement 0x0
msgbox CuevaTesoro_Activador_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
warp MAP_CUEVA_TESORO1, 39, 20
release
end

CuevaTesoro_Activador_Entrada_Texto_1:
.string "... ...$"

CuevaTesoro_Activador_Entrada_Pasa_Text_YesNo:
	.string "It seems that there is a small opening\n"
	.string "in the rocks, extending several meters.\l"
	.string "Do you want to cross it?$"

CuevaTesoro_Activador_Entrada_Pasa_Move_1:
emote_exclamation_mark
step_end

CuevaTesoro_Activador_Entrada_Pasa_No::
release
end
