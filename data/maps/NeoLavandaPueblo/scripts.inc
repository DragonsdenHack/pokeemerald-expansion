NeoLavandaPueblo_MapScripts::
	.byte 0

NeoLavandaPueblo_1::
lock     
faceplayer     
msgbox NeoLavandaPueblo_Text_1, MSGBOX_DEFAULT
release     
end

NeoLavandaPueblo_Text_1:
	.string "Quite a building, huh? Still, the SILPH\n"
	.string "HEADQUARTERS and the old POKÉMON\l"
	.string "TOWER are taller.$"




NeoLavandaPueblo_2::
lock     
faceplayer     
msgbox NeoLavandaPueblo_Text_2, MSGBOX_DEFAULT
release     
end

NeoLavandaPueblo_Text_2:
	.string "JOHTO is ahead of us; their radio\n"
	.string "programs are excellent. Can KANTO\l"
	.string "match that level?$"




NeoLavandaPueblo_3::
lock     
faceplayer     
msgbox NeoLavandaPueblo_Text_3, MSGBOX_DEFAULT
release     
end

NeoLavandaPueblo_Text_3:
	.string "The radio programs that will be\n"
	.string "broadcasted here have us all intrigued.\l"
	.string "How will they fare on the upper floors?$"




NeoLavandaPueblo_4::
lock     
faceplayer     
msgbox NeoLavandaPueblo_Text_4, MSGBOX_DEFAULT
release     
end

NeoLavandaPueblo_Text_4:
	.string "People come from all over to pay their\n"
	.string "respects to the departed souls of\l"
	.string "POKÉMON.$"


NeoLavandaPueblo_Combate_Eusine::
lock
playse SE_SLIDING_DOOR
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaPueblo_Combate_Eusine_Move_1
waitmovement 0x0
clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
addobject 5
delay 20
playse SE_PIN
applymovement 5, NeoLavandaPueblo_Combate_Eusine_Move_2
waitmovement 0x0
msgbox NeoLavandaPueblo_Combate_Eusine_Texto_1 MSGBOX_AUTOCLOSE
applymovement 5, NeoLavandaPueblo_Combate_Eusine_Move_3
waitmovement 0x0
msgbox NeoLavandaPueblo_Combate_Eusine_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox NeoLavandaPueblo_Combate_Eusine_Texto_3 MSGBOX_AUTOCLOSE
applymovement 5, NeoLavandaPueblo_Combate_Eusine_Move_4
waitmovement 0x0
msgbox NeoLavandaPueblo_Combate_Eusine_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_76, NeoLavandaPueblo_Combate_Eusine_Texto_5
msgbox NeoLavandaPueblo_Combate_Eusine_Texto_6 MSGBOX_AUTOCLOSE
applymovement 5, NeoLavandaPueblo_Combate_Eusine_Move_6
waitmovement 0x0
msgbox NeoLavandaPueblo_Combate_Eusine_Texto_7 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaPueblo_Combate_Eusine_Move_1
waitmovement 0x0
delay 20
msgbox NeoLavandaPueblo_Combate_Eusine_Texto_8 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 5, NeoLavandaPueblo_Combate_Eusine_Move_2
waitmovement 0x0
msgbox NeoLavandaPueblo_Combate_Eusine_Texto_9 MSGBOX_AUTOCLOSE
applymovement 5, NeoLavandaPueblo_Combate_Eusine_Move_4
waitmovement 0x0
msgbox NeoLavandaPueblo_Combate_Eusine_Texto_10 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaPueblo_Combate_Eusine_Move_6
applymovement 5, NeoLavandaPueblo_Combate_Eusine_Move_6
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, NeoLavandaPueblo_Combate_Eusine_Move_7
waitmovement 0x0
special RemoveCameraObject
msgbox NeoLavandaPueblo_Combate_Eusine_Texto_11 MSGBOX_AUTOCLOSE
delay 20
msgbox NeoLavandaPueblo_Combate_Eusine_Texto_12 MSGBOX_AUTOCLOSE
delay 20
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, NeoLavandaPueblo_Combate_Eusine_Move_8
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaPueblo_Combate_Eusine_Move_9
applymovement 5, NeoLavandaPueblo_Combate_Eusine_Move_4
waitmovement 0x0
msgbox NeoLavandaPueblo_Combate_Eusine_Texto_13 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
fadescreen 1
delay 20
removeobject 5
playse SE_M_FLY
fadescreen 0
setvar VAR_UNUSED_0x40F7, 206
release
end

NeoLavandaPueblo_Combate_Eusine_Move_9:
face_right
step_end

NeoLavandaPueblo_Combate_Eusine_Move_8:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

NeoLavandaPueblo_Combate_Eusine_Move_7:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

NeoLavandaPueblo_Combate_Eusine_Move_6:
face_up
step_end

NeoLavandaPueblo_Combate_Eusine_Move_4:
walk_in_place_left
step_end

NeoLavandaPueblo_Combate_Eusine_Move_3:
walk_slow_left
step_end

NeoLavandaPueblo_Combate_Eusine_Move_2:
face_left
emote_exclamation_mark
step_end

NeoLavandaPueblo_Combate_Eusine_Move_1:
walk_in_place_right
step_end

NeoLavandaPueblo_Combate_Eusine_Texto_1:
	.string "EUSINE: Oh, {PLAYER}{PAUSE 25}…{PAUSE 25} What a\n"
	.string "pleasure to see you here.$"

NeoLavandaPueblo_Combate_Eusine_Texto_2:
	.string "Your organization is fascinating,\n"
	.string "really… you already had clones of the\l"
	.string "very SACRED BEASTS, working with that\l"
	.string "foundation, along with my expertise,\l"
	.string "has greatly accelerated progress.$"

NeoLavandaPueblo_Combate_Eusine_Texto_3:
	.string "I'm glad I found you; we're crossing\n"
	.string "boundaries that seemed impossible.$"

NeoLavandaPueblo_Combate_Eusine_Texto_4:
	.string "I know you're not up to speed on these\n"
	.string "advancements. Your forte is handling\l"
	.string "the pure action, but… I'll get you up to\l"
	.string "date!$"

NeoLavandaPueblo_Combate_Eusine_Texto_5:
	.string "Not in vain… You defeated\n"
	.string "the GRAND MASTER.$"

NeoLavandaPueblo_Combate_Eusine_Texto_6:
	.string "EUSINE: That's right, we've already\n"
	.string "managed to extract the maximum\l"
	.string "potential from one of the 3 SACRED\l"
	.string "BEASTS, and what's even more\l"
	.string "surprising: simulate the phenomenon of\l"
	.string "DEEP BOND artificially. Isn't it great?$"

NeoLavandaPueblo_Combate_Eusine_Texto_7:
	.string "Nevertheless, I haven't been able to\n"
	.string "defeat you. It's clear that there's\l"
	.string "something sacred, spiritual… a halo\l"
	.string "surrounding you and your team, creating\l"
	.string "an extremely difficult bond to break.\l"
	.string "That sort of essence protects you, but\l"
	.string "I wonder if it's only because of the\l"
	.string "legend that fuels you, or if you would\l"
	.string "truly fall once our greatest creations\l"
	.string "are complete…$"

NeoLavandaPueblo_Combate_Eusine_Texto_8:
.string "…$"

NeoLavandaPueblo_Combate_Eusine_Texto_9:
	.string "Oh, so… Do you think that I have\n"
	.string "forsaken my roots? Is there no longer\l"
	.string "any trace of those ancient POKÉMON I\l"
	.string "used in my initial battles?$"

NeoLavandaPueblo_Combate_Eusine_Texto_10:
.string "Look at your surroundings, {PLAYER}.$"

NeoLavandaPueblo_Combate_Eusine_Texto_11:
	.string "What was here just a few months ago?\n"
	.string "That's right, the POKÉMON TOWER.$"

NeoLavandaPueblo_Combate_Eusine_Texto_12:
	.string "That place no longer exists, and won't\n"
	.string "ever exist. Everything changes, now\l"
	.string "there is the RADIO TOWER.$"

NeoLavandaPueblo_Combate_Eusine_Texto_13:
	.string "Who wouldn't want a super SACRED BEAST\n"
	.string "with 690 BASE STATS, which makes the\l"
	.string "original LUGIA and HO-OH look like\l"
	.string "amateurs?$"


NeoLavandaPueblo_Primer_Cartel::
msgbox NeoLavandaPueblo_Primer_Cartel_Texto_1 MSGBOX_SIGN
release
end

NeoLavandaPueblo_Primer_Cartel_Texto_1:
.string "LAVENDER TOWN SOUL HOUSE$"


NeoLavandaPueblo_Segundo_Cartel::
msgbox NeoLavandaPueblo_Segundo_Cartel_Texto_1 MSGBOX_SIGN
release
end

NeoLavandaPueblo_Segundo_Cartel_Texto_1:
.string "LAVENDER RADIO TOWER$"

NeoLavandaPueblo_Policia::
compare VAR_ROUTE105_STATE, 6
goto_if_eq NeoLavandaPueblo_Policia_2
compare VAR_ROUTE105_STATE, 13
goto_if_lt NeoLavandaPueblo_Policia_3
release
end

NeoLavandaPueblo_Policia_3:
applymovement 6, NeoLavandaPueblo_Policia_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaPueblo_Policia_Move_2
waitmovement 0x0
msgbox NeoLavandaPueblo_Policía_Texto_1.1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaPueblo_Policia_Move_2.5
waitmovement 0x0
release
end

NeoLavandaPueblo_Policia_Move_2.5:
walk_slow_left
step_end

NeoLavandaPueblo_Policia_2::
applymovement 6, NeoLavandaPueblo_Policia_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaPueblo_Policia_Move_2
waitmovement 0x0
msgbox NeoLavandaPueblo_Policía_Texto_1 MSGBOX_AUTOCLOSE
msgbox NeoLavandaPueblo_Policía_Texto_2 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 7
playse SE_PIN
applymovement 6, NeoLavandaPueblo_Policia_Move_3
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaPueblo_Policia_Move_3
waitmovement 0x0
delay 10
applymovement 7, NeoLavandaPueblo_Policia_Move_4
waitmovement 0x0
delay 15
applymovement 6, NeoLavandaPueblo_Policia_Move_5
waitmovement 0x0
msgbox NeoLavandaPueblo_Policía_Texto_3 MSGBOX_AUTOCLOSE
applymovement 7, NeoLavandaPueblo_Policia_Move_6
waitmovement 0x0
msgbox NeoLavandaPueblo_Policía_Texto_4 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 6, NeoLavandaPueblo_Policia_Move_3
waitmovement 0x0
msgbox NeoLavandaPueblo_Policía_Texto_5 MSGBOX_AUTOCLOSE
applymovement 7, NeoLavandaPueblo_Policia_Move_6
waitmovement 0x0
msgbox NeoLavandaPueblo_Policía_Texto_6 MSGBOX_AUTOCLOSE
applymovement 6, NeoLavandaPueblo_Policia_Move_5
waitmovement 0x0
msgbox NeoLavandaPueblo_Policía_Texto_7 MSGBOX_AUTOCLOSE
applymovement 6, NeoLavandaPueblo_Policia_Move_5
waitmovement 0x0
msgbox NeoLavandaPueblo_Policía_Texto_8 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaPueblo_Policia_Move_7
waitmovement 0x0
delay 10
applymovement 6, NeoLavandaPueblo_Policia_Move_8
waitmovement 0x0
delay 10
msgbox NeoLavandaPueblo_Policía_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaPueblo_Policia_Move_9
waitmovement 0x0
delay 10
msgbox NeoLavandaPueblo_Policía_Texto_12 MSGBOX_AUTOCLOSE
delay 10
msgbox NeoLavandaPueblo_Policía_Texto_11 MSGBOX_AUTOCLOSE
applymovement 6, NeoLavandaPueblo_Policia_Move_1
waitmovement 0x0
delay 10
msgbox NeoLavandaPueblo_Policía_Texto_13 MSGBOX_AUTOCLOSE
applymovement 6, NeoLavandaPueblo_Policia_Move_1
waitmovement 0x0
msgbox NeoLavandaPueblo_Policía_Texto_14 MSGBOX_AUTOCLOSE
applymovement 7, NeoLavandaPueblo_Policia_Move_6
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaPueblo_Policia_Move_11
waitmovement 0x0
msgbox NeoLavandaPueblo_Policía_Texto_15 MSGBOX_AUTOCLOSE
applymovement 7, NeoLavandaPueblo_Policia_Move_12
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaPueblo_Policia_Move_13
waitmovement 0x0
applymovement 7, NeoLavandaPueblo_Policia_Move_14
waitmovement 0x0
msgbox NeoLavandaPueblo_Policía_Texto_16 MSGBOX_AUTOCLOSE
applymovement 7, NeoLavandaPueblo_Policia_Move_15
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
clearflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2
removeobject 7
setvar VAR_ROUTE105_STATE, 7
release
end

NeoLavandaPueblo_Policía_Texto_1.1:
	.string "How's going the assault on the\n"
	.string "UNDERGROUND PATH, sir? You can count\l"
	.string "on us for anything you need.$"

NeoLavandaPueblo_Policia_Move_15:
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
step_end

NeoLavandaPueblo_Policia_Move_14:
face_right
delay_8
delay_8
face_left
step_end

NeoLavandaPueblo_Policia_Move_13:
walk_left
walk_left
walk_left
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
step_end

NeoLavandaPueblo_Policia_Move_12:
walk_left
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
step_end

NeoLavandaPueblo_Policia_Move_11:
face_left
step_end

NeoLavandaPueblo_Policia_Move_10:
walk_in_place_down
step_end

NeoLavandaPueblo_Policia_Move_9:
walk_in_place_up
step_end

NeoLavandaPueblo_Policia_Move_8:
face_down
step_end

NeoLavandaPueblo_Policia_Move_7:
face_up
step_end

NeoLavandaPueblo_Policia_Move_6:
walk_in_place_right
step_end

NeoLavandaPueblo_Policia_Move_5:
walk_in_place_left
step_end

NeoLavandaPueblo_Policia_Move_4:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_right
step_end

NeoLavandaPueblo_Policia_Move_3:
emote_exclamation_mark
delay_8
delay_8
face_left
step_end

NeoLavandaPueblo_Policia_Move_1:
walk_in_place_down
step_end

NeoLavandaPueblo_Policia_Move_2:
delay_8
face_up
step_end

NeoLavandaPueblo_Policía_Texto_1:
	.string "We apologize, sir. The radio tower just\n"
	.string "needs a few final touches before it's\l"
	.string "opened permanently. Why not visit the\l"
	.string "CEM…?$"

NeoLavandaPueblo_Policía_Texto_2:
.string "????: We need reinforcements!$"

NeoLavandaPueblo_Policía_Texto_3:
.string "What's happening?!$"

NeoLavandaPueblo_Policía_Texto_4:
	.string "The evacuation of the UNDERGROUND\n"
	.string "PATH, everything has gone wrong.$"

NeoLavandaPueblo_Policía_Texto_5:
.string "That cannot be!$"

NeoLavandaPueblo_Policía_Texto_6:
	.string "The BIKERS… they've barricaded\n"
	.string "themselves inside, reopening the\l"
	.string "extensive tunnels that served as\l"
	.string "shelters during the war… and there's no\l"
	.string "way to get them out of there!$"

NeoLavandaPueblo_Policía_Texto_7:
	.string "We agreed with the high-ranking\n"
	.string "officials of JOHTO to have everything\l"
	.string "closed before the inauguration of the\l"
	.string "LAVENDER RADIO TOWER. This is\l"
	.string "unacceptable.$"

NeoLavandaPueblo_Policía_Texto_8:
	.string "Call to SILPH HEADQUARTERS! That they\n"
	.string "communicate you with the PRESIDENT, we\l"
	.string "need reinf…!$"

NeoLavandaPueblo_Policía_Texto_9:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

NeoLavandaPueblo_Policía_Texto_11:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

NeoLavandaPueblo_Policía_Texto_12:
.string "Oh… You… Sir…$"

NeoLavandaPueblo_Policía_Texto_13:
	.string "I see, you want to take care of it\n"
	.string "personally, considering the BIKERS\l"
	.string "have been allies of TEAM ROCKET from\l"
	.string "the start.$"

NeoLavandaPueblo_Policía_Texto_14:
	.string "We trust you to resolve this in the best\n"
	.string "possible way.$"

NeoLavandaPueblo_Policía_Texto_15:
.string "Come with me, CHIEF ADMIN. {PLAYER}.$"

NeoLavandaPueblo_Policía_Texto_16:
	.string "You can't miss it, you must have passed\n"
	.string "by there several times in your early\l"
	.string "days as a ROCKET GRUNT, the\l"
	.string "UNDERGROUND PATH is a bit further west,\l"
	.string "I'll meet you there.$"

NeoLavandaPueblo_Segundo_Policia::
lock
faceplayer
msgbox NeoLavandaPueblo_Segundo_Policia_Texto_1 MSGBOX_NPC
release
end

NeoLavandaPueblo_Segundo_Policia_Texto_1:
	.string "Apologize, sir, but the LAVENDER RADIO\n"
	.string "TOWER is still in the early stages of\l"
	.string "construction. We won't be long since\l"
	.string "it's being built at a record pace, but\l"
	.string "you'll have to wait a bit longer to\l"
	.string "enter.$"

NeoLavandaPueblo_Prueba::
lock
msgbox NeoLavandaPueblo_Segundo_Policia_Texto_111 MSGBOX_NPC
giveitem ITEM_MACH_BIKE
setflag FLAG_RECEIVED_BIKE
setvar VAR_UNUSED_0x40F7, 217
changeavatar 2
release
end

NeoLavandaPueblo_Segundo_Policia_Texto_111::
.string "C.$"

