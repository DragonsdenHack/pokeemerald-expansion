Route49_MazeP4_MapScripts::
	.byte 0


Route49_MazeP4_3::
lock     
faceplayer     
msgbox Route49_MazeP4_Text3, MSGBOX_DEFAULT
release     
end

Route49_MazeP4_Text3:
	.string "It's not about exerting maximum effort,\n"
	.string "but rather optimal effort that allows\l"
	.string "us to keep improving day by day.$"




Route49_MazeP4_4::
lock     
faceplayer     
msgbox Route49_MazeP4_Text4, MSGBOX_DEFAULT
release     
end

Route49_MazeP4_Text4:
	.string "People have such a need to mention\n"
	.string "flaws because it hurts so much to be\l"
	.string "surpassed in virtues.$"



Route49MazeP4Documento_100::
lock
compare VAR_VERDANTURF_TOWN_STATE, 9
goto_if_lt RocketHideout7FDocumento_Esperando  
showmonpic SPECIES_SACRED_DRAGON, 10, 3  
playmoncry SPECIES_XERNEAS, CRY_MODE_ENCOUNTER 
msgbox Route49MazeP4Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

Route49MazeP4Documento_Text_100:
.string "SACRED DRAGON:\p"
	.string "HP: 163\n"
	.string "ATTACK: 2\l"
	.string "DEFENSE: 97\l"
	.string "SPECIAL ATTACK: 157\l"
	.string "SPECIAL DEFENSE: 193\l"
	.string "SPEED: 109\l"
	.string "TOTAL: 721\p"
	.string "TYPE: DRAGON/PSYCHIC\n"
	.string "ABILITY: ELECTRIC SURGE\l"
	.string "The legend states that it evolved from\l"
	.string "a DUNSPARCE, which was scorned and\l"
	.string "judged by the rest of the POKEMON. As a\l"
	.string "result of this and its unwavering will,\l"
	.string "it managed to transcend beyond its\l"
	.string "limited form. The process and\l"
	.string "phenomenon by which it achieved this\l"
	.string "are a complete mystery.$"

Route49_MazeP4_Combate_Maestro::
lock
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, Route49_MazeP4_Combate_Maestro_Move_1
applymovement OBJ_EVENT_ID_CAMERA, Route49_MazeP4_Combate_Maestro_Move_2
waitmovement 0x0
special RemoveCameraObject
delay 20
playmoncry SPECIES_CROBAT, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
playse SE_FAINT
delay 20
msgbox Route49_MazeP4_Combate_Maestro_Texto_1.1 MSGBOX_AUTOCLOSE
delay 20
msgbox Route49_MazeP4_Combate_Maestro_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_3
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_2 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_4
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_4 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_5 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route49_MazeP4_Combate_Maestro_Move_5
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, Route49_MazeP4_Combate_Maestro_Move_6
waitmovement 0x0
playse SE_PIN
applymovement 5, Route49_MazeP4_Combate_Maestro_Move_7
waitmovement 0x0
applymovement 5, Route49_MazeP4_Combate_Maestro_Move_8
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_6 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route49_MazeP4_Combate_Maestro_Move_9
waitmovement 0x0
delay 30
msgbox Route49_MazeP4_Combate_Maestro_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_10
waitmovement 0x0
delay 15
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_11
waitmovement 0x0
delay 15
msgbox Route49_MazeP4_Combate_Maestro_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_17, Route49_MazeP4_Combate_Maestro_Texto_9
playse SE_PIN
applymovement 6, Route49_MazeP4_Combate_Maestro_Move_13
waitmovement 0x0
delay 15
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_12
waitmovement 0x0
delay 10
applymovement 6, Route49_MazeP4_Combate_Maestro_Move_10
applymovement 5, Route49_MazeP4_Combate_Maestro_Move_10
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_10 MSGBOX_AUTOCLOSE
delay 10
msgbox Route49_MazeP4_Combate_Maestro_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_14
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_15
waitmovement 0x0
applymovement 6, Route49_MazeP4_Combate_Maestro_Move_4
applymovement 5, Route49_MazeP4_Combate_Maestro_Move_4
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_13 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_4
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_15 MSGBOX_AUTOCLOSE
delay 20
msgbox Route49_MazeP4_Combate_Maestro_Texto_15.1 MSGBOX_AUTOCLOSE
delay 20
applymovement 5, Route49_MazeP4_Combate_Maestro_Move_11
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_16 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_17 MSGBOX_AUTOCLOSE
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_1
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_4
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_19 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_14
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_21 MSGBOX_AUTOCLOSE
applymovement 5, Route49_MazeP4_Combate_Maestro_Move_11
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_22_1 MSGBOX_AUTOCLOSE
delay 20
msgbox Route49_MazeP4_Combate_Maestro_Texto_22 MSGBOX_AUTOCLOSE
delay 20
msgbox Route49_MazeP4_Combate_Maestro_Texto_23 MSGBOX_AUTOCLOSE
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_16
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_24 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, Route49_MazeP4_Combate_Maestro_Move_13
applymovement 6, Route49_MazeP4_Combate_Maestro_Move_13
applymovement OBJ_EVENT_ID_PLAYER, Route49_MazeP4_Combate_Maestro_Move_13
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_25 MSGBOX_AUTOCLOSE
applymovement 6, Route49_MazeP4_Combate_Maestro_Move_17
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_26 MSGBOX_AUTOCLOSE
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_14
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_27 MSGBOX_AUTOCLOSE
delay 15
msgbox Route49_MazeP4_Combate_Maestro_Texto_28 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_18
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_29 MSGBOX_AUTOCLOSE
applymovement 6, Route49_MazeP4_Combate_Maestro_Move_19
applymovement OBJ_EVENT_ID_PLAYER, Route49_MazeP4_Combate_Maestro_Move_14
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_30 MSGBOX_AUTOCLOSE
applymovement 6, Route49_MazeP4_Combate_Maestro_Move_20
waitmovement 0x0
applymovement 5, Route49_MazeP4_Combate_Maestro_Move_21
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_31 MSGBOX_AUTOCLOSE
applymovement 5, Route49_MazeP4_Combate_Maestro_Move_22
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_32 MSGBOX_AUTOCLOSE
applymovement 5, Route49_MazeP4_Combate_Maestro_Move_20
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
removeobject 6
removeobject 5
setvar VAR_VERDANTURF_TOWN_STATE, 17
release
end

Route49_MazeP4_Combate_Maestro_Move_22:
walk_in_place_right
step_end

Route49_MazeP4_Combate_Maestro_Move_21:
walk_down
walk_down
face_right
step_end

Route49_MazeP4_Combate_Maestro_Move_20:
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_up
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
step_end

Route49_MazeP4_Combate_Maestro_Move_19:
walk_down
face_right
step_end

Route49_MazeP4_Combate_Maestro_Move_18:
walk_slow_left
face_down
step_end

Route49_MazeP4_Combate_Maestro_Move_17:
walk_down
walk_right
step_end

Route49_MazeP4_Combate_Maestro_Move_16:
walk_slow_right
step_end

Route49_MazeP4_Combate_Maestro_Move_15:
walk_left
walk_down
step_end

Route49_MazeP4_Combate_Maestro_Move_14:
face_left
step_end

Route49_MazeP4_Combate_Maestro_Move_13:
emote_exclamation_mark
step_end

Route49_MazeP4_Combate_Maestro_Move_12:
walk_slow_right
walk_slow_up
step_end

Route49_MazeP4_Combate_Maestro_Move_11:
walk_in_place_down
step_end

Route49_MazeP4_Combate_Maestro_Move_10:
face_right
step_end

Route49_MazeP4_Combate_Maestro_Move_9:
walk_slow_up
walk_slow_up
step_end

Route49_MazeP4_Combate_Maestro_Move_8:
walk_left
walk_up
walk_up
walk_in_place_down
step_end

Route49_MazeP4_Combate_Maestro_Move_7:
emote_exclamation_mark
face_up
step_end

Route49_MazeP4_Combate_Maestro_Move_6:
walk_slow_left
walk_slow_up
step_end

Route49_MazeP4_Combate_Maestro_Move_5:
walk_slow_right
walk_slow_down
walk_slow_down
walk_slow_down
step_end

Route49_MazeP4_Combate_Maestro_Move_4:
face_down
step_end

Route49_MazeP4_Combate_Maestro_Move_3:
face_up
step_end

Route49_MazeP4_Combate_Maestro_Move_2:
walk_slow_left
walk_slow_up
walk_slow_up
walk_slow_up
step_end

Route49_MazeP4_Combate_Maestro_Move_1:
walk_in_place_up
step_end

Route49_MazeP4_Combate_Maestro_Texto_1.1:
.string "ANDRA: … …$"

Route49_MazeP4_Combate_Maestro_Texto_1:
.string "G.MAESTRO: Tienes talento, voluntad y\n"
	.string "espíritu, joven. Pero te falta\l"
	.string "templanza, sin ella, jamás lograrás\l"
	.string "sacar todo tu potencial.$"

Route49_MazeP4_Combate_Maestro_Texto_2:
	.string "Your training ethic is remarkable.\n"
	.string "You're aware of your limits and\l"
	.string "consistently strive to surpass them.\l"
	.string "However, without temperance in a real\l"
	.string "battle, you won't reach the level you\l"
	.string "deserve based on your training.$"

Route49_MazeP4_Combate_Maestro_Texto_3:
.string "ANDRA: I was so close…$"

Route49_MazeP4_Combate_Maestro_Texto_4:
	.string "G.MASTER: The battle never posed a\n"
	.string "threat to my team; you thought you had\l"
	.string "control, solely by wielding a power that\l"
	.string "is precisely uncontrollable.$"

Route49_MazeP4_Combate_Maestro_Texto_5:
	.string "ANDRA: I see, next time I'll find that\n"
	.string "balance, so hard to find.$"

Route49_MazeP4_Combate_Maestro_Texto_6:
.string "G.MASTER: Hmm, {PLAYER}, aren't you? \n"
	.string "Come closer, please.$"

Route49_MazeP4_Combate_Maestro_Texto_7:
	.string "Your aura is very similar to that of\n"
	.string "ANDRA, but it's more serene and less\l"
	.string "frantic.$"

Route49_MazeP4_Combate_Maestro_Texto_8:
	.string "Hmm, okay… show me how you relate with\n"
	.string "your team.$"

Route49_MazeP4_Combate_Maestro_Texto_9:
.string "Oh! What a skilled trainer…$"

Route49_MazeP4_Combate_Maestro_Texto_10:
	.string "G.MASTER: Now I understand why the\n"
	.string "SACRED DRAGON appeared twice; both of\l"
	.string "you share a similar bond with one of\l"
	.string "your POKÉMON. The SACRED DRAGON\l"
	.string "interpreted it as a single entity.$"

Route49_MazeP4_Combate_Maestro_Texto_11:
	.string "ANDRA: Does he mean our CROBAT?\n"
	.string "{PLAYER} and I got one on the same\l"
	.string "day, and they've grown a lot since then.$"

Route49_MazeP4_Combate_Maestro_Texto_12:
	.string "G.MASTER: Oh, yes! Certainly, the point\n"
	.string "is that your training styles have\l"
	.string "influenced the final growth of your\l"
	.string "CROBAT.$"

Route49_MazeP4_Combate_Maestro_Texto_13:
	.string "Do you understand? You have shaped\n"
	.string "the reality of your POKÉMON through\l"
	.string "your will and consciousness. Only a few\l"
	.string "trainers could do that.$"

Route49_MazeP4_Combate_Maestro_Texto_14:
	.string "Your case is an example of the infinite\n"
	.string "possibilities that exist for each\l"
	.string "POKÉMON, just as…$"

Route49_MazeP4_Combate_Maestro_Texto_15:
	.string "ANDRA: Your DEEP BONDS of JOHTO,\n"
	.string "FLAREON and VAPOREON?$"

Route49_MazeP4_Combate_Maestro_Texto_15.1:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

Route49_MazeP4_Combate_Maestro_Texto_16:
	.string "That's why EUSINE is so interested in\n"
	.string "the LEGENDARY BEASTS, isn't it?$"

Route49_MazeP4_Combate_Maestro_Texto_17:
	.string "G.MASTER: We don't use that term here,\n"
	.string "young one.$"

Route49_MazeP4_Combate_Maestro_Texto_18:
	.string "EN, RAI, and SUI were the first POKÉMON\n"
	.string "to experience a bond similar to your\l"
	.string "CROBAT. Over 1000 years ago, the first\l"
	.string "GRAND MASTER of this tower managed to\l"
	.string "establish that bond with 3 POKÉMON at\l"
	.string "once. 3 POKÉMON that were primitive\l"
	.string "forms of FLAREON, JOLTEON, and\l"
	.string "VAPOREON.$"

Route49_MazeP4_Combate_Maestro_Texto_19:
	.string "The distinction with ENTEI, RAIKOU, and\n"
	.string "SUICUNE is that the legendary beasts\l"
	.string "emerged through divine intervention.$"

Route49_MazeP4_Combate_Maestro_Texto_20:
	.string "EUSINE: Despite this, they wield a less\n"
	.string "global power than those resulting from\l"
	.string "human-POKÉMON interaction.$"

Route49_MazeP4_Combate_Maestro_Texto_21:
	.string "G.MASTER: A very powerful interaction\n"
	.string "indeed. Tell me, what kind of forces\l"
	.string "have you faced in your journey through\l"
	.string "JOHTO?$"

Route49_MazeP4_Combate_Maestro_Texto_22_1:
	.string "ANDRA: The most powerful that can exist.$"

Route49_MazeP4_Combate_Maestro_Texto_22:
	.string "I even faced the golden HO-OH deep\n"
	.string "within the RUINS OF ALPH.$"

Route49_MazeP4_Combate_Maestro_Texto_23:
.string "{PLAYER}... to something even more powerful.$"

Route49_MazeP4_Combate_Maestro_Texto_24:
	.string "G.MASTER: As I suspected, facing\n"
	.string "something of such magnitude has led to\l"
	.string "the extension of the laws governing our\l"
	.string "world.$"

Route49_MazeP4_Combate_Maestro_Texto_25:
	.string "Maybe it's an anomaly. Perhaps a\n"
	.string "blessing. That being could have done\l"
	.string "something like that, as a sign of\l"
	.string "gratitude for defeating it, even if it\l"
	.string "was bound by our norms. That POKÉMON\l"
	.string "could have bestowed part of its\l"
	.string "boundless capability upon mortals like\l"
	.string "us.$"

Route49_MazeP4_Combate_Maestro_Texto_26:
	.string "EUSINE: So, now the new limit is a\n"
	.string "mystery, isn't it?$"

Route49_MazeP4_Combate_Maestro_Texto_27:
	.string "G.MASTER: Ho, ho, ho! And it must be like\n"
	.string "that, don't you think so, EUSINE?$"

Route49_MazeP4_Combate_Maestro_Texto_28:
.string "EUSINE: I gu-guess.$"

Route49_MazeP4_Combate_Maestro_Texto_29:
	.string "G.MASTER: You two are quite young, still\n"
	.string "unaware of your full potential and\l"
	.string "endless possibilities.$"

Route49_MazeP4_Combate_Maestro_Texto_30:
	.string "EUSINE: I'm leaving. {PLAYER}, I'd like\n"
	.string "you to visit my small house again, north\l"
	.string "of CIANWOOD, I have something to\l"
	.string "propose to you.$"

Route49_MazeP4_Combate_Maestro_Texto_31:
	.string "ANDRA: I'm also leaving, it was a\n"
	.string "pleasure to fight you, master.$"

Route49_MazeP4_Combate_Maestro_Texto_32:
	.string "Once we finish our missions, we should\n"
	.string "immediately see GIOVANNI. All this\l"
	.string "information is exactly what we were\l"
	.string "looking for. Good luck with the rest,\l"
	.string "{PLAYER}.$"


Route49_MazeP4_Dialogo_Anciano::
lock
faceplayer
msgbox Route49_MazeP4_Dialogo_Anciano_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_MazeP4_Dialogo_Anciano_Texto_1:
	.string "Do what you have to do. My time has\n"
	.string "passed, I won't oppose the new changes.\l"
	.string "I hope EUSINE can assist you in your\l"
	.string "purpose; it will be a sign that he is\l"
	.string "genuine.$"

Route49MazeP4_EventScript_Sabio::
	trainerbattle_single TRAINER_TRAINER_193, Route49MazeP4_Text_SabioIntro, Route49MazeP4_Text_SabioDefeated
	msgbox Route49MazeP4_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end

Route49MazeP4Documento_101::
lock
compare VAR_VERDANTURF_TOWN_STATE, 9
goto_if_lt RocketHideout7FDocumento_Esperando
showmonpic SPECIES_DUNSPARCE_OLD, 10, 3  
playmoncry SPECIES_DUNSPARCE, CRY_MODE_ENCOUNTER 
msgbox Route49MazeP4Documento_Text_101, MSGBOX_DEFAULT
hidemonpic
release     
end

Route49MazeP4Documento_Text_101:
.string "DUN:\p"
	.string "HP: 153\n"
	.string "ATTACK: 44\l"
	.string "DEFENSE: 66\l"
	.string "SPECIAL ATTACK: 117\l"
	.string "SPECIAL DEFENSE: 132\l"
	.string "SPEED: 99\l"
	.string "TOTAL: 611\p"
	.string "TYPE: DRAGON/PSYCHIC\n"
	.string "ABILITY: PSYCHIC SURGE\l"
	.string "The evolution of BLESSPARCE,\l"
	.string "achievable solely by the chosen. It\l"
	.string "displays characteristics akin to a\l"
	.string "PSEUDOLEGENDARY, yet its overall\l"
	.string "attributes suggest an even higher\l"
	.string "hierarchy. It was hailed by the\l"
	.string "ancients as the non-legendary with the\l"
	.string "greatest pure potential, disregarding\l"
	.string "phenomena like MEGA EVOLUTION and\l"
	.string "DEEP BOND.$"
