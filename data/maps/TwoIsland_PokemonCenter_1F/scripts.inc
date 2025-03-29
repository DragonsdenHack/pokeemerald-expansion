TwoIsland_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_PokemonCenter_1F_OnTransition
	.byte 0

TwoIsland_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_FIVE_ISLAND
	end

TwoIsland_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

TwoIslandPokemonCenter_1::
end



TwoIslandPokemonCenter_2::
lock     
faceplayer     
msgbox TwoIsland_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

TwoIsland_PokemonCenter_Text_2:
	.string "Do you want to catch all the POKÉMON\n"
	.string "you come across? Incredible!… Hey, let\l"
	.string "me know if you catch any strong ones!$"



TwoIslandPokemonCenter_3::
lock     
faceplayer  
msgbox TwoIsland_PokemonCenter_Text_3, MSGBOX_DEFAULT
compare VAR_ROUTE119_STATE, 2
goto_if_eq TwoIslandPokemonCenter_3_Despues
release     
end

TwoIsland_PokemonCenter_Text_3:
    .string "I'm on my way to prepare a meal\n"
    .string "for a certain high-society person.$"

TwoIslandPokemonCenter_Move_1:
emote_exclamation_mark
step_end

TwoIslandPokemonCenter_Move_2:
delay_8
face_right
delay_16
delay_8
walk_in_place_right
delay_16
face_player
step_end

TwoIslandPokemonCenter_Move_3:
face_right
step_end

TwoIslandPokemonCenter_Move_4:
face_player
step_end

TwoIslandPokemonCenter_Move_5:
walk_in_place_left
step_end

TwoIslandPokemonCenter_3_Despues::
lock     
delay 10
msgbox TwoIslandPokemonCenter_3_Despues_Texto_1, MSGBOX_AUTOCLOSE
delay 10
msgbox TwoIslandPokemonCenter_3_Despues_Texto_2, MSGBOX_AUTOCLOSE
delay 10
msgbox TwoIslandPokemonCenter_3_Despues_Texto_3, MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 3, TwoIslandPokemonCenter_Move_1
waitmovement 0x0
waitse
msgbox TwoIslandPokemonCenter_3_Despues_Texto_4, MSGBOX_AUTOCLOSE
delay 10
msgbox TwoIslandPokemonCenter_3_Despues_Texto_5, MSGBOX_AUTOCLOSE
msgbox TwoIslandPokemonCenter_3_Despues_Texto_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 3, TwoIslandPokemonCenter_Move_2
waitmovement 0x0
delay 10
msgbox TwoIslandPokemonCenter_3_Despues_Texto_7, MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, TwoIslandPokemonCenter_Move_1
waitmovement 0x0
waitse
msgbox TwoIslandPokemonCenter_3_Despues_Texto_8, MSGBOX_AUTOCLOSE
delay 10
applymovement 3, TwoIslandPokemonCenter_Move_3
waitmovement 0x0
delay 10
msgbox TwoIslandPokemonCenter_3_Despues_Texto_9, MSGBOX_AUTOCLOSE
delay 30
applymovement 3, TwoIslandPokemonCenter_Move_4
waitmovement 0x0
delay 10
msgbox TwoIslandPokemonCenter_3_Despues_Texto_10, MSGBOX_AUTOCLOSE
playse 597
delay 15
msgbox TwoIslandPokemonCenter_3_Despues_Texto_11, MSGBOX_DEFAULT
trainerbattle_no_intro TRAINER_TRAINER_732, TwoIslandPokemonCenter_3_Despues_Texto_12
playse SE_BREAKABLE_DOOR
applymovement 3, TwoIslandPokemonCenter_Move_5
waitmovement 0x0
waitse
msgbox TwoIslandPokemonCenter_3_Despues_Texto_13, MSGBOX_AUTOCLOSE
delay 10
applymovement 3, TwoIslandPokemonCenter_Move_4
waitmovement 0x0
delay 10
msgbox TwoIslandPokemonCenter_3_Despues_Texto_14, MSGBOX_AUTOCLOSE
playse SE_BALL_TRADE
waitse
delay 10
playse SE_PIN
applymovement 3, TwoIslandPokemonCenter_Move_1
waitmovement 0x0
waitse
delay 5
playfanfare MUS_OBTAIN_BADGE
msgbox TwoIslandPokemonCenter_3_Despues_Texto_15 MSGBOX_DEFAULT
waitfanfare
msgbox TwoIslandPokemonCenter_3_Despues_Texto_16, MSGBOX_AUTOCLOSE
delay 15
msgbox TwoIslandPokemonCenter_3_Despues_Texto_17, MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_142
setvar VAR_ROUTE119_STATE, 3
fadescreen 1
delay 10
removeobject 3
fadescreen 0
release     
end

TwoIslandPokemonCenter_3_Despues_Texto_1:
	.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10}$"

TwoIslandPokemonCenter_3_Despues_Texto_2:
	.string "What do you want, kid?$"

TwoIslandPokemonCenter_3_Despues_Texto_3:
	.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10}$"

TwoIslandPokemonCenter_3_Despues_Texto_4:
	.string "You want to buy LEMONADE?$"

TwoIslandPokemonCenter_3_Despues_Texto_5:
	.string "Who do you think I am?\p"
	.string "A CELADON's vending machine?$"

TwoIslandPokemonCenter_3_Despues_Texto_6:
	.string "This product can't be found in the whole\n"
	.string "archipelago. Every single bottle will\l"
	.string "cost you ¥10,000.$"

TwoIslandPokemonCenter_3_Despues_Texto_7:
	.string "Second thought, even if you could\n"
	.string "afford it, which I doubt, I won't be\l"
	.string "making a deal with you.$"

TwoIslandPokemonCenter_3_Despues_Texto_8:
	.string "I got a reputation to maintain, you\n"
	.string "know?$"

TwoIslandPokemonCenter_3_Despues_Texto_9:
	.string "LORELEI, CELIO, the CONSUL… I cook for\n"
	.string "celebrities all over the SEVII islands.\p"
	.string "Why bothering getting involved with\n"
	.string "scum like you?$"

TwoIslandPokemonCenter_3_Despues_Texto_10:
	.string "So you won't give up like this, huh…\p"
	.string "Very well.$"

TwoIslandPokemonCenter_3_Despues_Texto_11:
	.string "I'll show you the differences between\n"
	.string "a high-society elite TEAM and one\l"
	.string "that came from a street trash!$"

TwoIslandPokemonCenter_3_Despues_Texto_12:
	.string "No… wait! My TOTODILE is special!$"

TwoIslandPokemonCenter_3_Despues_Texto_13:
	.string "This can't be!!$"

TwoIslandPokemonCenter_3_Despues_Texto_14:
	.string "Grrrr… You're not a normal ROCK…$"

TwoIslandPokemonCenter_3_Despues_Texto_15:
	.string "{PLAYER} got a lemonade's box from\n"
	.string "the chef!!$"

TwoIslandPokemonCenter_3_Despues_Texto_16:
	.string "You! How you dare?!$"

TwoIslandPokemonCenter_3_Despues_Texto_17:
	.string "You'll see when I get back to KANTO!\p"
	.string "I'll tell the authorities about the\n"
	.string "little scheme you got here!$"

