PokemonTower_6F_MapScripts::
	.byte 0

PokemonTower6F_1::
end



PokemonTower6F_2::
end



PokemonTower6F_3::
end



PokemonTower6F_4::
end



PokemonTower6F_5::
end



PokemonTower6F_EventScript_Channeler::
	trainerbattle_single TRAINER_SHARON, PokemonTower6F_Text_ChannelerIntro, PokemonTower6F_Text_ChannelerDefeated
	msgbox PokemonTower6F_Text_ChannelerPostBattle, MSGBOX_AUTOCLOSE
	end



PokemonTower6F_EventScript_Channeler2::
	trainerbattle_single TRAINER_BRENDA, PokemonTower6F_Text_Channeler2Intro, PokemonTower6F_Text_Channeler2Defeated
	msgbox PokemonTower6F_Text_Channeler2PostBattle, MSGBOX_AUTOCLOSE
	end



PokemonTower6F_EventScript_Channeler3::
	trainerbattle_single TRAINER_NIKKI, PokemonTower6F_Text_Channeler3Intro, PokemonTower6F_Text_Channeler3Defeated
	msgbox PokemonTower6F_Text_Channeler3PostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_6F_Combate_Fuji::
lock
applymovement 9, PokemonTower_6F_Combate_Fuji_Move_1
waitmovement 0x0
msgbox PokemonTower_6F_Combate_Fuji_Texto_1 MSGBOX_AUTOCLOSE
applymovement 6, PokemonTower_6F_Combate_Fuji_Move_2
waitmovement 0x0
msgbox PokemonTower_6F_Combate_Fuji_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playmoncry SPECIES_CUBONE, CRY_MODE_ENCOUNTER
delay 20
msgbox PokemonTower_6F_Combate_Fuji_Texto_3 MSGBOX_AUTOCLOSE
msgbox PokemonTower_6F_Combate_Fuji_Texto_4 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fuji_Move_3
playse SE_PIN
applymovement 8, PokemonTower_6F_Combate_Fuji_Move_4
applymovement 9, PokemonTower_6F_Combate_Fuji_Move_4
applymovement 10, PokemonTower_6F_Combate_Fuji_Move_4
waitmovement 0x0
delay 20
msgbox PokemonTower_6F_Combate_Fuji_Texto_5 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 8, PokemonTower_6F_Combate_Fuji_Move_4
applymovement 9, PokemonTower_6F_Combate_Fuji_Move_4
applymovement 10, PokemonTower_6F_Combate_Fuji_Move_4
waitmovement 0x0
applymovement 8, PokemonTower_6F_Combate_Fuji_Move_2
applymovement 9, PokemonTower_6F_Combate_Fuji_Move_2
applymovement 10, PokemonTower_6F_Combate_Fuji_Move_2
waitmovement 0x0
msgbox PokemonTower_6F_Combate_Fuji_Texto_6 MSGBOX_AUTOCLOSE
applymovement 8, PokemonTower_6F_Combate_Fuji_Move_1
applymovement 9, PokemonTower_6F_Combate_Fuji_Move_5
applymovement 10, PokemonTower_6F_Combate_Fuji_Move_1
waitmovement 0x0
applymovement 6, PokemonTower_6F_Combate_Fuji_Move_2
waitmovement 0x0
msgbox PokemonTower_6F_Combate_Fuji_Texto_7 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fuji_Move_6
waitmovement 0x0
msgbox PokemonTower_6F_Combate_Fuji_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_FUJI_1, PokemonTower_6F_Combate_Fuji_Texto_9
delay 15
playse SE_PIN
applymovement 6, PokemonTower_6F_Combate_Fuji_Move_4
waitmovement 0x0
applymovement 6, PokemonTower_6F_Combate_Fuji_Move_7
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fuji_Move_3
waitmovement 0x0
delay 20
playmoncry SPECIES_CUBONE, CRY_MODE_ENCOUNTER
delay 20
setflag FLAG_HIDE_ROUTE_119_SCOTT
removeobject 7
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fuji_Move_8
waitmovement 0x0
delay 40
playfanfare MUS_OBTAIN_ITEM
msgbox PokemonTower_6F_Combate_Fuji_Texto_10 MSGBOX_DEFAULT
waitfanfare
delay 10
msgbox PokemonTower_6F_Combate_Fuji_Texto_10.1 MSGBOX_DEFAULT
delay 40
playse SE_PIN
applymovement 8, PokemonTower_6F_Combate_Fuji_Move_4
applymovement 9, PokemonTower_6F_Combate_Fuji_Move_4
applymovement 10, PokemonTower_6F_Combate_Fuji_Move_4
waitmovement 0x0
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
addobject 11
applymovement 11, PokemonTower_6F_Combate_Fuji_Move_9
msgbox PokemonTower_6F_Combate_Fuji_Texto_11 MSGBOX_AUTOCLOSE
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fuji_Move_10
waitmovement 0x0
applymovement 11, PokemonTower_6F_Combate_Fuji_Move_11
waitmovement 0x0
msgbox PokemonTower_6F_Combate_Fuji_Texto_12 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
fadescreen 1
delay 20
removeobject 6
removeobject 11
removeobject 8
removeobject 9
removeobject 10
fadescreen 0
setvar VAR_UNUSED_0x40F7, 48
release
end

PokemonTower_6F_Combate_Fuji_Texto_1:
	.string "GRUNTS: So strong old man, not even the\n"
	.string "three of us together have been able to\l"
	.string "bring you down!$"

PokemonTower_6F_Combate_Fuji_Texto_2:
	.string "FUJI: Reckless, you have taken away\n"
	.string "this CUBONE of its maternal figure, all\l"
	.string "for money, the damage is already\l"
	.string "irreversible, get away before it's too\l"
	.string "late.$"

PokemonTower_6F_Combate_Fuji_Texto_3:
	.string "GRUNTS: Come on, that MAROWAK got in\n"
	.string "our way! He forced us to end his life,\l"
	.string "that's all!$"

PokemonTower_6F_Combate_Fuji_Texto_4:
	.string "FUJI: I see, the result is all that\n"
	.string "matters, right?, well, then I'll tell you\l"
	.string "what we're going to do, my HAUNTER will\l"
	.string "cast its NIGHTMARE upon you while\l"
	.string "you're losing all the stolen skulls,\l"
	.string "maybe the only way to make you reflect\l"
	.string "is by taking away everything you value.$"

PokemonTower_6F_Combate_Fuji_Texto_5:
	.string "W-Wait old man, there is no need of...$"

PokemonTower_6F_Combate_Fuji_Texto_6:
.string "GRUNTS: HIGH RANK {PLAYER}!!\n"
	.string "How opportunate!$"

PokemonTower_6F_Combate_Fuji_Texto_7:
	.string "FUJI: A young one like you should not\n"
	.string "waste his life serving these purposes.\l"
	.string "{PLAYER}?, come on reconsider it…,$"

PokemonTower_6F_Combate_Fuji_Texto_8:
	.string "FUJI: Okay, I have no more option that\n"
	.string "disarm you as I did with your mates… for\l"
	.string "this place's peace.$"

PokemonTower_6F_Combate_Fuji_Texto_9:
	.string "I disappointed you CUBONE, forgive me…$"

PokemonTower_6F_Combate_Fuji_Texto_10:
	.string "({PLAYER} gave FUJI the CUBONE).$"

PokemonTower_6F_Combate_Fuji_Texto_10.1:
.string "FUJI: Oh… Then… You…?$"

PokemonTower_6F_Combate_Fuji_Texto_11:
	.string "PROTON: You knew this was going to\n"
	.string "happen FUJI, you can't escape forever\l"
	.string "of your past.$"

PokemonTower_6F_Combate_Fuji_Texto_12:
	.string "PROTON: Good job {PLAYER},\n"
	.string "everything is going well, FUJI and I are\l"
	.string "heading to the last floor, where we can\l"
	.string "talk in peace, I trust you to prevent\l"
	.string "even the slightest speck of dust from\l"
	.string "getting into the meeting.$"

PokemonTower_6F_Combate_Fuji_Move_1:
walk_in_place_left
step_end

PokemonTower_6F_Combate_Fuji_Move_2:
walk_in_place_right
step_end

PokemonTower_6F_Combate_Fuji_Move_3:
walk_left
step_end

PokemonTower_6F_Combate_Fuji_Move_4:
emote_exclamation_mark
step_end

PokemonTower_6F_Combate_Fuji_Move_5:
walk_left
walk_up
walk_in_place_down
step_end

PokemonTower_6F_Combate_Fuji_Move_6:
walk_left
walk_left
walk_left
step_end

PokemonTower_6F_Combate_Fuji_Move_7:
walk_up
walk_in_place_down
step_end

PokemonTower_6F_Combate_Fuji_Move_8:
walk_in_place_up
step_end

PokemonTower_6F_Combate_Fuji_Move_9:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
step_end

PokemonTower_6F_Combate_Fuji_Move_10:
walk_right
walk_right
walk_right
walk_up
walk_in_place_down
step_end

PokemonTower_6F_Combate_Fuji_Move_11:
walk_left
walk_in_place_up
step_end

PokemonTower_6F_Cultistas::
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_3
addobject 12
playse SE_PIN
special HealPlayerParty
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Cultistas_Move_1
applymovement 12, PokemonTower_6F_Cultistas_Move_2
waitmovement 0x0
msgbox PokemonTower_6F_Cultistas_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonTower_6F_Cultistas_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonTower_6F_Cultistas_Texto_3 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower_6F_Cultistas_Move_6
waitmovement 0x0
msgbox PokemonTower_6F_Cultistas_Texto_4 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3 
msgbox PokemonTower_6F_Cultistas_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_2, PokemonTower_6F_Cultistas_Texto_6
msgbox PokemonTower_6F_Cultistas_Texto_7 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower_6F_Cultistas_Move_2.1
waitmovement 0x0
msgbox PokemonTower_6F_Cultistas_Texto_8 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower_6F_Cultistas_Move_6
waitmovement 0x0
msgbox PokemonTower_6F_Cultistas_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_6F_Cultistas_Texto_10 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower_6F_Cultistas_Move_6
waitmovement 0x0
msgbox PokemonTower_6F_Cultistas_Texto_11 MSGBOX_AUTOCLOSE
playse SE_USE_ITEM
special HealPlayerParty
delay 20
applymovement 12, PokemonTower_6F_Cultistas_Move_2.2
waitmovement 0x0
msgbox PokemonTower_6F_Cultistas_Texto_12 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
removeobject 12
fadescreen 0
setvar VAR_UNUSED_0x40F7, 49
release
end

PokemonTower_6F_Cultistas_Move_2.2:
face_left
delay_8
delay_8
walk_in_place_left
step_end

PokemonTower_6F_Cultistas_Move_2.1:
face_up
step_end

PokemonTower_6F_Cultistas_Texto_1:
	.string "????: So you are the guy that had been\n"
	.string "causing all the commotion into a sacred\l"
	.string "place like this.$"

PokemonTower_6F_Cultistas_Texto_2:
.string "... ...$"

PokemonTower_6F_Cultistas_Texto_3:
	.string "Hmm… I expected something else to be\n"
	.string "honest. You don't seem to be bound by\l"
	.string "the same chains that control the lives\l"
	.string "of most people.$"

PokemonTower_6F_Cultistas_Texto_4:
	.string "Although the poor around that\n"
	.string "dominates the actual KANTO, your will\l"
	.string "remains unaffected, furthermore, your\l"
	.string "potential has not been wasted.$"

PokemonTower_6F_Cultistas_Texto_5:
	.string "But… there's no excuse for what you\n"
	.string "just did. You'll have to justify it on\l"
	.string "the battlefield.$"

PokemonTower_6F_Cultistas_Texto_6:
	.string "I see… nothing is what it seems.$"

PokemonTower_6F_Cultistas_Texto_7:
	.string "So your acts reply to a bigger purpose…\n"
	.string "Is not the first time that I heard that,\l"
	.string "but it's clear that you exist in a layer\l"
	.string "of reality higher than I thought.$"

PokemonTower_6F_Cultistas_Texto_8:
	.string "Lemme give you some advice, kid. Keep\n"
	.string "that essence that defines you, don't\l"
	.string "let anyone corrupt it.$"

PokemonTower_6F_Cultistas_Texto_9:
	.string "You are good, but not as much as you\n"
	.string "think; you could be magnificent if you\l"
	.string "stay in the way that your will says.$"

PokemonTower_6F_Cultistas_Texto_10:
	.string "Just then… you could see KANTO and\n"
	.string "LAVENDER TOWN in all its shine.$"

PokemonTower_6F_Cultistas_Texto_11:
	.string "This world is much bigger than\n"
	.string "dictators that are submitting KANTO, I\l"
	.string "just hope you could survive to see it.\l"
	.string "Let me heal your POKÉMON team.$"

PokemonTower_6F_Cultistas_Texto_12:
	.string "Continue your path.$"

PokemonTower_6F_Cultistas_Move_1:
emote_exclamation_mark
walk_in_place_left
step_end

PokemonTower_6F_Cultistas_Move_2:
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_in_place_right
step_end

PokemonTower_6F_Cultistas_Move_3:
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_in_place_right
step_end

PokemonTower_6F_Cultistas_Move_4:
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_in_place_right
step_end

PokemonTower_6F_Cultistas_Move_5:
walk_in_place_left
step_end

PokemonTower_6F_Cultistas_Move_6:
walk_in_place_right
step_end

PokemonTower_6F_Cultistas_Move_7:
face_left
step_end

PokemonTower_6F_Cultistas_Move_8:
walk_right
step_end

PokemonTower_6F_Combate_Fantasma_Marowak::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fantasma_Marowak_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fantasma_Marowak_Move_2
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
delay 30
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
delay 30
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
delay 30
msgbox PokemonTower_6F_Combate_Fantasma_Marowak_Texto_1 MSGBOX_AUTOCLOSE
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
delay 40
trainerbattle_no_intro TRAINER_GHOST, PokemonTower_6F_Combate_Fantasma_Marowak_Texto_2
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
delay 30
msgbox PokemonTower_6F_Combate_Fantasma_Marowak_Texto_3 MSGBOX_AUTOCLOSE
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
delay 60
playse SE_POKENAV_ON
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fantasma_Marowak_Move_1
waitmovement 0x0
delay 20
msgbox PokemonTower_6F_Combate_Fantasma_Marowak_Texto_4 MSGBOX_AUTOCLOSE
delay 20
playse SE_POKENAV_OFF
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
setvar VAR_UNUSED_0x40F7, 50
release
end

PokemonTower_6F_Combate_Fantasma_Marowak_Texto_1:
	.string "You… have… caused… this…$"

PokemonTower_6F_Combate_Fantasma_Marowak_Texto_2:
.string "... ... ... ...$"

PokemonTower_6F_Combate_Fantasma_Marowak_Texto_3:
	.string "The MAROWAK spirit is out of control\n"
	.string "and is plaguing the TOWER with GHOSTS!$"

PokemonTower_6F_Combate_Fantasma_Marowak_Texto_4:
.string "BLUE: {PLAYER}!\n"
	.string "RED just defeated me!\l"
	.string "Oh, I thought I could beat him this time\l"
	.string "damn it! Notice PROTON and get out of\l"
	.string "there as soon as possible!$"

PokemonTower_6F_Combate_Fantasma_Marowak_Move_1:
emote_exclamation_mark
step_end

PokemonTower_6F_Combate_Fantasma_Marowak_Move_2:
walk_in_place_right
walk_in_place_up
walk_in_place_left
walk_in_place_down
step_end
