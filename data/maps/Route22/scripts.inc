Route22_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route22_OnFrame
    .byte 0

Route22_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 85, RocketHideoutViridian_Escena_9
	.2byte 0

Route22Documento_100::
msgbox Route22Documento_Text_100, MSGBOX_SIGN   
end

Route22Documento_Text_100:
.string "POKÉMON LEAGUE ENTRANCE$"

Ruta22_No_Puedes_Pasar::
compare VAR_UNUSED_0x40F7, 89
goto_if_gt RocketHideout_5F_Puedes_Pasar
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_1
waitmovement 0x0
msgbox Ruta22_No_Puedes_Pasar_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_2
waitmovement 0x0
release
end

Ruta22_No_Puedes_Pasar_Texto_1:
	.string "-Here is most of KANTO POLICE, it is\n"
	.string "not a good idea to enter.-$"

Route22_Combate_Azul_Izq::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route22_Combate_Azul_Move_1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route22_Combate_Azul_Move_1.1
waitmovement 0x0
special RemoveCameraObject
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
playmoncry SPECIES_PIDGEOT, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
addobject 1
waitfieldeffect FLDEFF_NPCFLY_OUT
applymovement 1, Route22_Combate_Azul_Move_2
waitmovement 0x0
goto Route22_Combate_Azul

Route22_Combate_Azul_Der::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route22_Combate_Azul_Move_1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route22_Combate_Azul_Move_1.1
waitmovement 0x0
special RemoveCameraObject
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
playmoncry SPECIES_PIDGEOT, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
addobject 1
waitfieldeffect FLDEFF_NPCFLY_OUT
applymovement 1, Route22_Combate_Azul_Move_4
waitmovement 0x0
goto Route22_Combate_Azul

Route22_Combate_Azul::
msgbox Route22_Combate_Azul_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, Route22_Combate_Azul_Move_4
waitmovement 0x0
msgbox Route22_Combate_Azul_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Route22_Combate_Azul_Texto_3 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, Route22_Combate_Azul_Move_3
waitmovement 0x0
msgbox Route22_Combate_Azul_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, Route22_Combate_Azul_Move_4
waitmovement 0x0
msgbox Route22_Combate_Azul_Texto_5 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
msgbox Route22_Combate_Azul_Texto_6 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_RIVAL
delay 10
applymovement 1, Route22_Combate_Azul_Move_4.1
waitmovement 0x0
delay 10
msgbox Route22_Combate_Azul_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
trainerbattle_no_intro TRAINER_AZUL_3, Route22_Combate_Azul_Texto_7
msgbox Route22_Combate_Azul_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox Route22_Combate_Azul_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox Route22_Combate_Azul_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route22_Combate_Azul_Move_6.1
waitmovement 0x0
msgbox Route22_Combate_Azul_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route22_Combate_Azul_Move_6
waitmovement 0x0
msgbox Route22_Combate_Azul_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route22_Combate_Azul_Move_6.2
waitmovement 0x0
delay 10
msgbox Route22_Combate_Azul_Texto_10.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route22_Combate_Azul_Move_7
waitmovement 0x0
msgbox Route22_Combate_Azul_Texto_11 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_PIDGEOT, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
removeobject 1
waitfieldeffect FLDEFF_NPCFLY_OUT
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route22_Combate_Azul_Move_1.2
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40F7, 90
release
end

Route22_Combate_Azul_Move_6.2:
delay_8
face_down
delay_16
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

Route22_Combate_Azul_Move_6.1:
face_left
step_end

Route22_Combate_Azul_Move_4.1:
walk_in_place_down
step_end

Route22_Combate_Azul_Move_1.2:
walk_down
walk_down
step_end

Route22_Combate_Azul_Move_1.1:
walk_up
walk_up
step_end

Route22_Combate_Azul_Texto_1:
.string "BLUE: So you're ready, too.$"

Route22_Combate_Azul_Texto_2:
	.string "I just came back from training in\n"
	.string "VICTORY ROAD, but I don't dare yet\l"
	.string "to enter into the ELITE 4…$"

Route22_Combate_Azul_Texto_3:
.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

Route22_Combate_Azul_Texto_4:
	.string "The truth is…{PAUSE 40} RED defeated me again, I\n"
	.string "can't enter the LEAGUE knowing he's\l"
	.string "still above me, so I must ensure that\l"
	.string "my team has a last extra training.$"

Route22_Combate_Azul_Texto_5:
	.string "Do not worry, RED has always been a late\n"
	.string "person, he'll arrive anyway after me to\l"
	.string "challenge the ELITE FOUR, it always\l"
	.string "happens, besides, I've been to the\l"
	.string "POKÉMON CENTER there; I can fly back\l"
	.string "in just a bit.$"

Route22_Combate_Azul_Texto_6:
	.string "I'm just in search of extra training.\p"
	.string "VICTORY ROAD TRAINERS are not\n"
	.string "enough, I need something else{PAUSE 15}…{PAUSE 15}$"

Route22_Combate_Azul_Texto_6.1:
	.string "Come on! We are on the same side!\p"
	.string "I want to see how much you are\n"
	.string "prepared to afront this challenge!$"

Route22_Combate_Azul_Texto_7:
.string "It can't be, you too!$"

Route22_Combate_Azul_Texto_8:
	.string "This can't be, my POKÉMON need a higher\n"
	.string "level, I won't stop until they exceed 60!\p"
	.string "With that, no one could catch me.$"

Route22_Combate_Azul_Texto_9:
	.string "By the way, don't you know where your\n"
	.string "ROCKET friend is? {PAUSE 25}…{PAUSE 25} ANDRA. Isn't it?$"

Route22_Combate_Azul_Texto_9.1:
	.string "She defeated ARCHER{PAUSE 15}…{PAUSE 15} must also have a\n"
	.string "good team, and she plains to challenge\l"
	.string "the ELITE 4, too.\p"
	.string "Maybe she's at INDIGO PLATEAU yet, can\n"
	.string "help me to level up a few levels more.$"

Route22_Combate_Azul_Texto_10:
	.string "Bah, Imma head out, {PLAYER}.\p"
	.string "time is precious at this moment.$"

Route22_Combate_Azul_Texto_10.1:
	.string "I wish you the best of lucks.\p"
	.string "Truly, if I wanted someone to become\n"
	.string "the CHAMPION and make RED bite the\l"
	.string "dust besides me, it would be you.$"

Route22_Combate_Azul_Texto_11:
	.string "And a last thing: don't even try to\n"
	.string "collect the hidden RARE CANDIES.\p"
	.string "Those are mine!$"


Route22_Combate_Azul_Move_1:
walk_in_place_up
emote_exclamation_mark
step_end

Route22_Combate_Azul_Move_2:
walk_left
walk_in_place_down
step_end

Route22_Combate_Azul_Move_3:
face_left
step_end

Route22_Combate_Azul_Move_4:
walk_in_place_down
step_end

Route22_Combate_Azul_Move_5:
face_up
step_end

Route22_Combate_Azul_Move_6:
walk_up
step_end

Route22_Combate_Azul_Move_7:
face_down
step_end

RocketHideoutViridian_Escena_9::
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RocketHideoutViridian_Escena_9_Move_1
waitmovement 0x0
special RemoveCameraObject
msgbox RocketHideoutViridian_Escena_9_Texto_1 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 2, RocketHideoutViridian_Escena_9_Move_2
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_2 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideoutViridian_Escena_9_Move_3
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_3 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideoutViridian_Escena_9_Move_2
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_4 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideoutViridian_Escena_9_Move_4
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_4.1 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 2, RocketHideoutViridian_Escena_9_Move_5
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_5 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Escena_9_Texto_6 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideoutViridian_Escena_9_Move_6
waitmovement 0x0
delay 20
msgbox RocketHideoutViridian_Escena_9_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideoutViridian_Escena_9_Texto_8 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Escena_9_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideoutViridian_Escena_9_Move_2
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_10 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideoutViridian_Escena_9_Move_7
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_11 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Escena_9_Texto_12 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Escena_9_Texto_13 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Escena_9_Texto_14 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideoutViridian_Escena_9_Move_5
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_15 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Escena_9_Texto_16 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideoutViridian_Escena_9_Move_2
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_17 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, RocketHideoutViridian_Escena_9_Move_8
delay 30
applymovement 2, RocketHideoutViridian_Escena_9_Move_5
waitmovement 0x0
removeobject 3
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
addobject 4
msgbox RocketHideoutViridian_Escena_9_Texto_18 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Escena_9_Texto_19 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Escena_9_Texto_20 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 2, RocketHideoutViridian_Escena_9_Move_5
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_21 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideoutViridian_Escena_9_Move_9
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RocketHideoutViridian_Escena_9_Move_10
delay 55
playse SE_PIN
waitmovement 0x0
special RemoveCameraObject
delay 20
msgbox RocketHideoutViridian_Escena_9_Texto_22 MSGBOX_AUTOCLOSE
delay 20
setvar VAR_UNUSED_0x40F7, 86
setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
warpsilent MAP_ROCKET_HIDEOUT_VIRIDIAN, 25, 7
release
end

RocketHideoutViridian_Escena_9_Move_1:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
step_end

RocketHideoutViridian_Escena_9_Move_2:
walk_in_place_left
step_end

RocketHideoutViridian_Escena_9_Move_3:
walk_slow_right
step_end

RocketHideoutViridian_Escena_9_Move_4:
face_left
step_end

RocketHideoutViridian_Escena_9_Move_5:
walk_left
step_end

RocketHideoutViridian_Escena_9_Move_6:
face_right
step_end

RocketHideoutViridian_Escena_9_Move_7:
walk_in_place_right
step_end

RocketHideoutViridian_Escena_9_Move_8:
walk_left
walk_left
walk_left
walk_left
step_end


RocketHideoutViridian_Escena_9_Move_8.1:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
step_end


RocketHideoutViridian_Escena_9_Move_9:
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_down
walk_fast_down
walk_fast_down
step_end

RocketHideoutViridian_Escena_9_Move_10:
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_left
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
step_end

RocketHideoutViridian_Escena_9_Texto_1:
	.string "GIOVANNI: I told you clearly to stay in\n"
	.string "JOHTO, along with your mother. Do you\l"
	.string "know how much of a risk you are if they\l"
	.string "discover who you are?$"

RocketHideoutViridian_Escena_9_Texto_2:
	.string "????: What does it care! How dare you?\n"
	.string "Dissolve the organization you've\l"
	.string "fought for all these years! You're a\l"
	.string "joke in all of the media in KANTO!$"

RocketHideoutViridian_Escena_9_Texto_3:
	.string "GIOVANNI: You are too young yet, and\n"
	.string "you don't deserve to be involved in all\l"
	.string "of this. The reasons for my dissolution\l"
	.string "are beyond your understanding of the\l"
	.string "world, someday, when all of this is over,\l"
	.string "you'll have answers, and you'll\l"
	.string "understand, I swear it.$"

RocketHideoutViridian_Escena_9_Texto_4:
	.string "????: There is nothing to understand,\n"
	.string "you have failed and that's all! You've\l"
	.string "been defeated, and you gave up!$"

RocketHideoutViridian_Escena_9_Texto_4.1:
	.string "Sometimes not everything is as simple\n"
	.string "as winning or losing. The events that\l"
	.string "have unfolded serve a greater purpose,\l"
	.string "impossible to understand at all if seen\l"
	.string "one by one from the outside, like a mere\l"
	.string "spectator, but as a whole…$"

RocketHideoutViridian_Escena_9_Texto_5:
	.string "The best…{PAUSE 40} You told me you wanted to be\n"
	.string "the best TRAINER in the world!$"

RocketHideoutViridian_Escena_9_Texto_6:
.string "And now you want to give up?\p"
.string "And what do you think to do now then?$"

RocketHideoutViridian_Escena_9_Texto_7:
.string "…$"

RocketHideoutViridian_Escena_9_Texto_8:
	.string "GIOVANNI: A man who can't recognize a\n"
	.string "defeat is unable to improve…$"

RocketHideoutViridian_Escena_9_Texto_9:
	.string "I must be alone a while to create an\n"
	.string "organization even stronger.$"

RocketHideoutViridian_Escena_9_Texto_10:
	.string "Pfft! A bunch of lackeys in that\n"
	.string "organization, and when it really\l"
	.string "matters, they get beaten by someone so\l"
	.string "young. How embarrassing!$"

RocketHideoutViridian_Escena_9_Texto_11:
	.string "GIOVANNI: A well-structured\n"
	.string "organization with sufficient resources\l"
	.string "should be able to wield great power.$"

RocketHideoutViridian_Escena_9_Texto_12:
	.string "An organization aims for that.$"

RocketHideoutViridian_Escena_9_Texto_13:
	.string "I haven't been able to take advantage\n"
	.string "of the potential of my subordinates…$"

RocketHideoutViridian_Escena_9_Texto_14:
	.string "I swear someday I will resurrect TEAM\n"
	.string "ROCKET!$"

RocketHideoutViridian_Escena_9_Texto_15:
	.string "????: I don't understand all that\n"
	.string "nonsense talk!$"

RocketHideoutViridian_Escena_9_Texto_16:
	.string "Your delirium makes no sense to me!$"

RocketHideoutViridian_Escena_9_Texto_17:
	.string "…{PAUSE 35} You will understand it someday.$"

RocketHideoutViridian_Escena_9_Texto_18:
	.string "????: I prefer to not understand it!$"

RocketHideoutViridian_Escena_9_Texto_19:
	.string "I won't become like you! Surrounded by\n"
	.string "pathetic lackeys who join your\l"
	.string "organization just to feel important and\l"
	.string "alive, as they are nothing on their own.$"

RocketHideoutViridian_Escena_9_Texto_20:
	.string "I will be a strong man by myself, with no\n"
	.string "one helping me! Only me!$"

RocketHideoutViridian_Escena_9_Texto_21:
.string "ONLY ME!$"

RocketHideoutViridian_Escena_9_Texto_22:
	.string "GIOVANNI: I hope that, SILVER, It's the\n"
	.string "best decision for both of us. Distance\l"
	.string "yourself from this charade, improve\l"
	.string "independently. Meanwhile, I'll shape the\l"
	.string "region you live in as it should be…{PAUSE 45} at\l"
	.string "any cost.$"

