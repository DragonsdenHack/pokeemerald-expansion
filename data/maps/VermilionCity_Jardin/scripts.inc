VermilionCity_Jardin_MapScripts::
	.byte 0

VermilionCity_Jardin_EventScript_Criador::
	trainerbattle_single TRAINER_TRAINER_709, VermilionCity_Jardin_Text_CriadorIntro, VermilionCity_Jardin_Text_CriadorDefeated
	msgbox VermilionCity_Jardin_Text_CriadorPostBattle, MSGBOX_AUTOCLOSE
	end

VermilionCity_Jardin_EventScript_Criadora::
	trainerbattle_single TRAINER_TRAINER_710, VermilionCity_Jardin_Text_CriadoraIntro, VermilionCity_Jardin_Text_CriadoraDefeated
	msgbox VermilionCity_Jardin_Text_CriadoraPostBattle, MSGBOX_AUTOCLOSE
	end

VermilionCity_Jardin_Cazabichos_Pelea::
lock
msgbox VermilionCity_Jardin_Cazabichos_Pelea_Texto_1 MSGBOX_DEFAULT
release
end

VermilionCity_Jardin_Cazabichos_Pelea_Texto_1:
	.string "Look at this mess! I'll be delusional if\n"
	.string "I forgive you for this…$"

VermilionCity_Jardin_Warp::
lock
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Warp_Move_1
waitmovement 0x0
warp MAP_VERMILION_CITY_SECUNDARIA, 9, 2
delay 150
release
end

VermilionCity_Jardin_Warp_Move_1:
face_down
step_end

VermilionCity_Jardin_Final_Move_2:
walk_in_place_up
step_end

VermilionCity_Jardin_Final_Move_1:
emote_exclamation_mark
step_end

VermilionCity_Jardin_Final_Move_3:
walk_in_place_down
step_end

VermilionCity_Jardin_Final_Move_3.1:
walk_in_place_fast_down
step_end

VermilionCity_Jardin_Final_Move_4:
delay_16
face_right
delay_16
face_down
delay_16
walk_in_place_fast_down
step_end

VermilionCity_Jardin_Final_Move_5:
delay_8
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

VermilionCity_Jardin_Final_Move_6:
face_left
lock_facing_direction
walk_right
unlock_facing_direction
delay_16
delay_8
face_down
step_end

VermilionCity_Jardin_Final_Move_7:
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_up
walk_up
walk_up
walk_up
step_end

VermilionCity_Jardin_Final::
lock
faceplayer
delay 10
playse SE_PIN
applymovement 3, VermilionCity_Jardin_Final_Move_1
waitmovement 0x0
delay 10
msgbox VermilionCity_Jardin_Final_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_2
waitmovement 0x0
delay 20
msgbox VermilionCity_Jardin_Final_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilionCity_Jardin_Final_Texto_3 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 3, VermilionCity_Jardin_Final_Move_3
waitmovement 0x0
delay 10
msgbox VermilionCity_Jardin_Final_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_2
waitmovement 0x0
delay 40
playse SE_PIN
applymovement 3, VermilionCity_Jardin_Final_Move_1
waitmovement 0x0
delay 10
msgbox VermilionCity_Jardin_Final_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilionCity_Jardin_Final_Texto_6 MSGBOX_AUTOCLOSE
playse 597
delay 10
applymovement 3, VermilionCity_Jardin_Final_Move_3
waitmovement 0x0
delay 10
msgbox VermilionCity_Jardin_Final_Texto_7 MSGBOX_AUTOCLOSE
delay 10
trainerbattle_no_intro TRAINER_TRAINER_708, VermilionCity_Jardin_Final_Texto_8
delay 10
msgbox VermilionCity_Jardin_Final_Texto_9 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_2
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_10 MSGBOX_AUTOCLOSE
delay 15
delay 10
playse SE_PIN
applymovement 3, VermilionCity_Jardin_Final_Move_1
waitmovement 0x0
delay 10
msgbox VermilionCity_Jardin_Final_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_2
waitmovement 0x0
delay 15
msgbox VermilionCity_Jardin_Final_Texto_12 MSGBOX_AUTOCLOSE
delay 35
playse SE_PIN
applymovement 3, VermilionCity_Jardin_Final_Move_1
waitmovement 0x0
delay 10
msgbox VermilionCity_Jardin_Final_Texto_13 MSGBOX_AUTOCLOSE
applymovement 3, VermilionCity_Jardin_Final_Move_3.1
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_14 MSGBOX_AUTOCLOSE
applymovement 3, VermilionCity_Jardin_Final_Move_3.1
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, VermilionCity_Jardin_Final_Move_4
waitmovement 0x0
delay 10
msgbox VermilionCity_Jardin_Final_Texto_16 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_2
waitmovement 0x0
delay 30
playse SE_PIN
applymovement 3, VermilionCity_Jardin_Final_Move_1
waitmovement 0x0
delay 20
applymovement 3, VermilionCity_Jardin_Final_Move_3.1
waitmovement 0x0
delay 10
msgbox VermilionCity_Jardin_Final_Texto_17 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
setflag FLAG_HOENN_84
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_6
applymovement 3, VermilionCity_Jardin_Final_Move_5
waitmovement 0x0
removeobject 3
removeobject 1
removeobject 2
removeobject 5
delay 40
addobject 4
applymovement 4, VermilionCity_Jardin_Final_Move_7
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_18 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_9
applymovement 4, VermilionCity_Jardin_Final_Move_8
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_19 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, VermilionCity_Jardin_Final_Move_10
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_20 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_10
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_21 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilionCity_Jardin_Final_Texto_22 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 4, VermilionCity_Jardin_Final_Move_11
waitmovement 0x0
delay 15
msgbox VermilionCity_Jardin_Final_Texto_23 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_13
applymovement 4, VermilionCity_Jardin_Final_Move_12
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_24 MSGBOX_AUTOCLOSE
applymovement 4, VermilionCity_Jardin_Final_Move_10
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_25 MSGBOX_AUTOCLOSE
applymovement 4, VermilionCity_Jardin_Final_Move_12
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_26 MSGBOX_AUTOCLOSE
applymovement 4, VermilionCity_Jardin_Final_Move_10
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_27 MSGBOX_AUTOCLOSE
applymovement 4, VermilionCity_Jardin_Final_Move_12
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_28 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_15
applymovement 4, VermilionCity_Jardin_Final_Move_14
waitmovement 0x0
removeobject 4
clearflag FLAG_HOENN_74
clearflag FLAG_HOENN_75
clearflag FLAG_HOENN_76
clearflag FLAG_HOENN_77
clearflag FLAG_HOENN_78
clearflag FLAG_HOENN_79
clearflag FLAG_HOENN_90
clearflag FLAG_HOENN_91
clearflag FLAG_HOENN_92
clearflag FLAG_HOENN_93
clearflag FLAG_HOENN_94
clearflag FLAG_HOENN_95
clearflag FLAG_HOENN_96
clearflag FLAG_HOENN_97
clearflag FLAG_HOENN_98
clearflag FLAG_HOENN_99
clearflag FLAG_HOENN_640
clearflag FLAG_HOENN_641
clearflag FLAG_HOENN_642
clearflag FLAG_HOENN_643
clearflag FLAG_HOENN_644
clearflag FLAG_HOENN_645
clearflag FLAG_HOENN_646
clearflag FLAG_HOENN_647
clearflag FLAG_HOENN_648
clearflag FLAG_HOENN_649
setvar VAR_SCOTT_STATE, 4
release
end

VermilionCity_Jardin_Final_Move_15:
delay_16
face_down
step_end

VermilionCity_Jardin_Final_Move_14:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

VermilionCity_Jardin_Final_Move_13:
delay_8
face_left
step_end

VermilionCity_Jardin_Final_Move_12:
walk_in_place_right
step_end

VermilionCity_Jardin_Final_Move_11:
emote_exclamation_mark
delay_16
delay_8
face_right
delay_16
face_up
delay_16
face_up
delay_16
face_right
step_end

VermilionCity_Jardin_Final_Move_10:
delay_8
face_up
delay_16
step_end

VermilionCity_Jardin_Final_Move_9:
delay_16
delay_16
face_left
step_end

VermilionCity_Jardin_Final_Move_8:
walk_up
walk_up
walk_up
face_right
step_end

VermilionCity_Jardin_Final_Texto_1:
	.string "And who are you supposed to be?$"

VermilionCity_Jardin_Final_Texto_2:
	.string "LANCE himself approved the\n"
	.string "exploitation of these grounds, which\n"
	.string "are now under our possession.$"

VermilionCity_Jardin_Final_Texto_3:
	.string "We're providing a great service to\n"
	.string "JOHTO. The LEAGUE COMMITTEE concluded\n"
	.string "that KANTO's citizens are not suitable\l"
	.string "for the products that we're making\l"
	.string "here.$"

VermilionCity_Jardin_Final_Texto_4:
	.string "Got a problem with that?!$"

VermilionCity_Jardin_Final_Texto_5:
	.string "So, privatizing resources is over? Are\n"
	.string "you returning to the people what\n"
	.string "rightfully belongs to them?$"

VermilionCity_Jardin_Final_Texto_6:
	.string "And what are you then?\p"
	.string "Some savior of KANTO?$"

VermilionCity_Jardin_Final_Texto_7:
	.string "If there's any reclamation to be had,\n"
	.string "it's your team into our hands. You all\n"
	.string "can contribute, all right, as fertilizer!$"

VermilionCity_Jardin_Final_Texto_8:
	.string "Ah! This is impossible!$"

VermilionCity_Jardin_Final_Texto_9:
	.string "Where'd you come from?! LANCE'll be the\n"
	.string "first to know of this!$"

VermilionCity_Jardin_Final_Texto_10:
	.string "… …$"

VermilionCity_Jardin_Final_Texto_11:
	.string "TEAM ROCKET?! A HIGH RANK one and… you\n"
	.string "know the ROCKET BOSS personally?!$"

VermilionCity_Jardin_Final_Texto_12:
	.string "… …$"

VermilionCity_Jardin_Final_Texto_13:
	.string "Okay… hold up there, buddy!$"

VermilionCity_Jardin_Final_Texto_14:
	.string "We just got off on the wrong foot!\n"
	.string "There's no need to get your BOSS\n"
	.string "involved. We'll just be on our way!$"

VermilionCity_Jardin_Final_Texto_15:
	.string "I'll just tell LANCE these lands have\n"
	.string "gone all sour here. Sound fair?$"

VermilionCity_Jardin_Final_Texto_16:
	.string "That stupid BUG CATCHER can keep them\n"
	.string "if he wants, okay?$"

VermilionCity_Jardin_Final_Texto_17:
	.string "I'm returning to JOHTO! The hectic life\n"
	.string "of the sea tugs at me way more than\n"
	.string "some embossed tombstone in the\l"
	.string "POKÉMON TOWER!$"

VermilionCity_Jardin_Final_Texto_18:
	.string "I can't believe it! You actually did it!$"

VermilionCity_Jardin_Final_Texto_19:
	.string "I saw that HOUNDOOM. It would've\n"
	.string "roasted my poor BUGs out of their\n"
	.string "exoskeletons. If I'd recovered my\l"
	.string "garden, it'd be thanks to you.$"

VermilionCity_Jardin_Final_Texto_20:
	.string "Hey, look up there… Those berries\n"
	.string "weren't there last time.$"

VermilionCity_Jardin_Final_Texto_21:
	.string "They've planted so much{PAUSE 35}…{PAUSE 35}all of it to\n"
	.string "squeeze every drop of wealth they\n"
	.string "could.$"

VermilionCity_Jardin_Final_Texto_22:
	.string "… …$"

VermilionCity_Jardin_Final_Texto_23:
	.string "That's it! I know exactly how I can\n"
	.string "reward you.$"

VermilionCity_Jardin_Final_Texto_24:
	.string "I'll work the land again. Even with the\n"
	.string "typical berries, I've got enough to\n"
	.string "rebuild my business. Just gotta keep it\l"
	.string "on the down-low.$"

VermilionCity_Jardin_Final_Texto_25:
	.string "But drop by whenever you want.\n"
	.string "Whatever's grown in the northern plots,\n"
	.string "they're yours for the taking.$"

VermilionCity_Jardin_Final_Texto_26:
	.string "Loads of TRAINERs want these: berries\n"
	.string "that cut back on your EVs and mints\n"
	.string "that change the very NATURE of your\l"
	.string "POKÉMON.$"

VermilionCity_Jardin_Final_Texto_27:
	.string "Depending on the season, mints'll grow\n"
	.string "one way or another. You should stop by\n"
	.string "sometime and see what's grown. No\l"
	.string "worries. They'll grow again someday.$"

VermilionCity_Jardin_Final_Texto_28:
	.string "And now, I'm back in business for real!$"

VermilionCity_Jardin_Cazabichos_Despues::
lock
faceplayer
msgbox VermilionCity_Jardin_Cazabichos_Despues_Texto_1 MSGBOX_NPC
release
end

VermilionCity_Jardin_Cazabichos_Despues_Texto_1:
	.string "Hey! How've ya been?\n"
	.string "Finding my mints useful?$"
