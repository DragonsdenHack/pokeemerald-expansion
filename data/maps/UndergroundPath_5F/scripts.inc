UndergroundPath_5F_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, UndergroundPath_5F_OnResume
	.byte 0

UndergroundPath_5F_OnResume:
	call UndergroundPath_5F_SetupEscapeWarp
	end

UndergroundPath_5F_SetupEscapeWarp::
	setescapewarp MAP_ROUTE8, 13, 5
	return

UndergroundPath_5F_Policias::
lock
faceplayer
msgbox UndergroundPath_5F_Policias_Texto_1 MSGBOX_NPC
release
end

UndergroundPath_5F_Policias_Texto_1:
	.string "We can only go through individually, and\n"
	.string "when we exit on the other side, there\l"
	.string "are several BIKERS guarding the\l"
	.string "entrance. Only a great TRAINER like you\l"
	.string "can get through the shelters.$"


UndergroundPath_5F_Activador_Entrada::
compare VAR_ROUTE105_STATE, 6
goto_if_gt UndergroundPath_5F_Activador_Entrada_Pasa
release
end

UndergroundPath_5F_Activador_Entrada_Pasa::
delay 15
msgbox CuevaTesoro_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_5F_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
warp MAP_UNDERGROUND_PATH_7F, 40, 2
release
end

UndergroundPath_5F_Entrada_Pasa_Text_YesNo:
	.string "The entrance to the shelters seems to\n"
	.string "be here. Want to enter?$"

UndergroundPath_5F_Emboscada_Move_1:
walk_in_place_right
step_end

UndergroundPath_5F_Emboscada_Move_2:
walk_down
walk_down
walk_right
step_end

UndergroundPath_5F_Emboscada_Move_2.1:
walk_down
walk_right
step_end

UndergroundPath_5F_Emboscada_Move_2.2:
walk_right
step_end

UndergroundPath_5F_Emboscada_Move_2.3:
walk_up
walk_right
step_end

UndergroundPath_5F_Emboscada_Move_3:
walk_in_place_down
step_end

UndergroundPath_5F_Emboscada_Move_4:
emote_exclamation_mark
step_end

UndergroundPath_5F_Emboscada_Move_4.1:
emote_exclamation_mark
delay_8
face_right
step_end

UndergroundPath_5F_Emboscada_Move_5:
face_left
step_end

UndergroundPath_5F_Emboscada_Move_6:
walk_down
walk_down
face_left
step_end

UndergroundPath_5F_Emboscada_Move_7:
delay_16
face_up
delay_8
step_end

UndergroundPath_5F_Emboscada_Move_7.1:
delay_16
face_down
delay_8
step_end

UndergroundPath_5F_Emboscada_Move_7.2:
face_right
step_end

UndergroundPath_5F_Arriba::
lock
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_5F_Emboscada_Move_1
waitmovement 0x0
delay 10
msgbox UndergroundPath_5F_Emboscada_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_5F_Emboscada_Move_2
waitmovement 0x0
goto UndergroundPath_5F_Emboscada

UndergroundPath_5F_Arriba_2::
lock
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_5F_Emboscada_Move_1
waitmovement 0x0
delay 10
msgbox UndergroundPath_5F_Emboscada_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_5F_Emboscada_Move_2.1
waitmovement 0x0
goto UndergroundPath_5F_Emboscada

UndergroundPath_5F_Centro::
lock
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_5F_Emboscada_Move_1
waitmovement 0x0
delay 10
msgbox UndergroundPath_5F_Emboscada_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_5F_Emboscada_Move_2.2
waitmovement 0x0
goto UndergroundPath_5F_Emboscada

UndergroundPath_5F_Abajo::
lock
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_5F_Emboscada_Move_1
waitmovement 0x0
delay 10
msgbox UndergroundPath_5F_Emboscada_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_5F_Emboscada_Move_2.3
waitmovement 0x0
goto UndergroundPath_5F_Emboscada


UndergroundPath_5F_Emboscada::
lock
delay 10
applymovement 9, UndergroundPath_5F_Emboscada_Move_3
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 9, UndergroundPath_5F_Emboscada_Move_4
waitmovement 0x0
delay 15
applymovement 9, UndergroundPath_5F_Emboscada_Move_5
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_3 MSGBOX_AUTOCLOSE
applymovement 7, UndergroundPath_5F_Emboscada_Move_5
applymovement 8, UndergroundPath_5F_Emboscada_Move_5
applymovement 9, UndergroundPath_5F_Emboscada_Move_6
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_5F_Emboscada_Texto_5 MSGBOX_AUTOCLOSE
applymovement 9, UndergroundPath_5F_Emboscada_Move_7
waitmovement 0x0
applymovement 9, UndergroundPath_5F_Emboscada_Move_18
applymovement 7, UndergroundPath_5F_Emboscada_Move_7.1
applymovement 8, UndergroundPath_5F_Emboscada_Move_7.1
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_6 MSGBOX_AUTOCLOSE
applymovement 9, UndergroundPath_5F_Emboscada_Move_8
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_7 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 7, UndergroundPath_5F_Emboscada_Move_4
waitmovement 0x0
delay 20
applymovement 9, UndergroundPath_5F_Emboscada_Move_7.2
applymovement 7, UndergroundPath_5F_Emboscada_Move_9
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_8 MSGBOX_AUTOCLOSE
applymovement 7, UndergroundPath_5F_Emboscada_Move_10
applymovement 8, UndergroundPath_5F_Emboscada_Move_5
applymovement 9, UndergroundPath_5F_Emboscada_Move_11
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_9 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_5F_Emboscada_Move_13
applymovement 8, UndergroundPath_5F_Emboscada_Move_12
waitmovement 0x0
playse 495
msgbox UndergroundPath_5F_Emboscada_Texto_10 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_702, UndergroundPath_5F_Emboscada_Texto_11
delay 10
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_5F_Emboscada_Move_15
applymovement 7, UndergroundPath_5F_Emboscada_Move_14
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_12 MSGBOX_AUTOCLOSE
playse 597
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_5F_Emboscada_Move_17
applymovement 7, UndergroundPath_5F_Emboscada_Move_16
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_701, UndergroundPath_5F_Emboscada_Texto_14
delay 10
playse SE_BREAKABLE_DOOR
applymovement 7, UndergroundPath_5F_Emboscada_Move_18
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_15 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_5F_Emboscada_Move_20
applymovement 9, UndergroundPath_5F_Emboscada_Move_19
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_16 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_5F_Emboscada_Texto_17 MSGBOX_AUTOCLOSE
playse 497
applymovement 9, UndergroundPath_5F_Emboscada_Move_14
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_18 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_700, UndergroundPath_5F_Emboscada_Texto_19
delay 10
playse SE_PIN
applymovement 7, UndergroundPath_5F_Emboscada_Move_4
applymovement 8, UndergroundPath_5F_Emboscada_Move_4
waitmovement 0x0
waitse
delay 20
msgbox UndergroundPath_5F_Emboscada_Texto_20 MSGBOX_AUTOCLOSE
applymovement 9, UndergroundPath_5F_Emboscada_Move_21
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_21 MSGBOX_AUTOCLOSE
delay 5
msgbox UndergroundPath_5F_Emboscada_Texto_22 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
clearflag FLAG_HOENN_300
addobject 5
addobject 6
addobject 4
special SpawnCameraObject
applymovement 7, UndergroundPath_5F_Emboscada_Move_4.1
applymovement 8, UndergroundPath_5F_Emboscada_Move_4.1
applymovement 9, UndergroundPath_5F_Emboscada_Move_4.1
applymovement OBJ_EVENT_ID_CAMERA, UndergroundPath_5F_Emboscada_Move_22
waitmovement 0x0
special RemoveCameraObject
applymovement 4, UndergroundPath_5F_Emboscada_Move_23
applymovement 5, UndergroundPath_5F_Emboscada_Move_23
applymovement 6, UndergroundPath_5F_Emboscada_Move_23
waitmovement 0x0
playse SE_LEDGE
applymovement 9, UndergroundPath_5F_Emboscada_Move_24
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_23 MSGBOX_AUTOCLOSE
applymovement 7, UndergroundPath_5F_Emboscada_Move_25.1
applymovement 8, UndergroundPath_5F_Emboscada_Move_25.1
applymovement 9, UndergroundPath_5F_Emboscada_Move_25.1
applymovement 5, UndergroundPath_5F_Emboscada_Move_25
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_24 MSGBOX_AUTOCLOSE
playse SE_LEDGE
applymovement 7, UndergroundPath_5F_Emboscada_Move_26
applymovement 8, UndergroundPath_5F_Emboscada_Move_27
applymovement 9, UndergroundPath_5F_Emboscada_Move_28
waitmovement 0x0
delay 15
msgbox UndergroundPath_5F_Emboscada_Texto_25 MSGBOX_AUTOCLOSE
delay 15
special SpawnCameraObject
applymovement 4, UndergroundPath_5F_Emboscada_Move_23
applymovement 5, UndergroundPath_5F_Emboscada_Move_23
applymovement 6, UndergroundPath_5F_Emboscada_Move_23
applymovement OBJ_EVENT_ID_CAMERA, UndergroundPath_5F_Emboscada_Move_23
waitmovement 0x0
special RemoveCameraObject
delay 15
msgbox UndergroundPath_5F_Emboscada_Texto_26 MSGBOX_AUTOCLOSE
applymovement 5, UndergroundPath_5F_Emboscada_Move_29
waitmovement 0x0
delay 15
msgbox UndergroundPath_5F_Emboscada_Texto_27 MSGBOX_AUTOCLOSE
applymovement 5, UndergroundPath_5F_Emboscada_Move_30
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_28 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_5F_Emboscada_Texto_29 MSGBOX_AUTOCLOSE
applymovement 5, UndergroundPath_5F_Emboscada_Move_31
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_30 MSGBOX_AUTOCLOSE
applymovement 5, UndergroundPath_5F_Emboscada_Move_32
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_31 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_5F_Emboscada_Texto_32 MSGBOX_AUTOCLOSE
applymovement 5, UndergroundPath_5F_Emboscada_Move_31
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_33 MSGBOX_AUTOCLOSE
delay 25
msgbox UndergroundPath_5F_Emboscada_Texto_34 MSGBOX_AUTOCLOSE
applymovement 5, UndergroundPath_5F_Emboscada_Move_33
waitmovement 0x0
msgbox UndergroundPath_5F_Emboscada_Texto_35 MSGBOX_AUTOCLOSE
applymovement 4, UndergroundPath_5F_Emboscada_Move_34
applymovement 5, UndergroundPath_5F_Emboscada_Move_34
applymovement 6, UndergroundPath_5F_Emboscada_Move_34
waitmovement 0x0
setflag FLAG_HOENN_300
removeobject 5
removeobject 6
removeobject 4
removeobject 7
removeobject 8
removeobject 9
setvar VAR_UNUSED_0x40F8, 2
release
end

UndergroundPath_5F_Emboscada_Move_34:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

UndergroundPath_5F_Emboscada_Move_33:
delay_16
face_right
delay_16
walk_slow_right
walk_slow_right
delay_16
step_end

UndergroundPath_5F_Emboscada_Move_31:
walk_in_place_left
step_end

UndergroundPath_5F_Emboscada_Move_32:
walk_slow_left
step_end

UndergroundPath_5F_Emboscada_Move_30:
face_left
step_end

UndergroundPath_5F_Emboscada_Move_29:
face_up
step_end

UndergroundPath_5F_Emboscada_Move_28:
jump_in_place_right
face_left
walk_fast_up
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
step_end

UndergroundPath_5F_Emboscada_Move_27:
delay_8
lock_facing_direction
walk_left
unlock_facing_direction
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
step_end

UndergroundPath_5F_Emboscada_Move_26:
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
step_end

UndergroundPath_5F_Emboscada_Move_25.1:
delay_16
lock_facing_direction
walk_left
unlock_facing_direction
step_end

UndergroundPath_5F_Emboscada_Move_25:
walk_left
walk_left
step_end

UndergroundPath_5F_Emboscada_Move_24:
jump_in_place_right
step_end

UndergroundPath_5F_Emboscada_Move_23:
walk_left
walk_left
walk_left
step_end

UndergroundPath_5F_Emboscada_Move_22:
walk_right
walk_right
walk_right
step_end

UndergroundPath_5F_Emboscada_Move_21:
lock_facing_direction
walk_right
unlock_facing_direction
step_end

UndergroundPath_5F_Emboscada_Move_20:
delay_16
face_right
step_end

UndergroundPath_5F_Emboscada_Move_19:
walk_slow_left
step_end

UndergroundPath_5F_Emboscada_Move_18:
walk_in_place_up
step_end

UndergroundPath_5F_Emboscada_Move_17:
delay_16
face_down
step_end

UndergroundPath_5F_Emboscada_Move_16:
walk_left
face_up
step_end

UndergroundPath_5F_Emboscada_Move_15:
face_right
step_end

UndergroundPath_5F_Emboscada_Move_14:
walk_left
step_end

UndergroundPath_5F_Emboscada_Move_13:
delay_16
delay_8
face_up
step_end

UndergroundPath_5F_Emboscada_Move_12:
walk_left
walk_left
face_down
step_end

UndergroundPath_5F_Emboscada_Move_11:
walk_in_place_left
step_end

UndergroundPath_5F_Emboscada_Move_10:
walk_down
walk_left
walk_left
step_end

UndergroundPath_5F_Emboscada_Move_9:
walk_fast_down
face_left
step_end

UndergroundPath_5F_Emboscada_Move_8:
walk_in_place_up
step_end

UndergroundPath_5F_Emboscada_Texto_1:
	.string "The new GAME CORNER PORYGON's a total\n"
	.string "scam. No one can afford it. And besides,\n"
	.string "everyone's saying it's total crap!$"

UndergroundPath_5F_Emboscada_Texto_2:
	.string "Lookin' a bit different there, ain't ya?\n"
	.string "Maybe you'll be…?{PAUSE 15}…{PAUSE 15}?$"

UndergroundPath_5F_Emboscada_Texto_3:
	.string "Hold up…{PAUSE 15}…{PAUSE 15}$"

UndergroundPath_5F_Emboscada_Texto_4:
	.string "A TEAM ROCKET grunt? Whatcha\n"
	.string "scheming?$"

UndergroundPath_5F_Emboscada_Texto_5:
	.string "Lookin' a bit different there, ain't ya?\n"
	.string "Maybe you'll be…?{PAUSE 15}…{PAUSE 15}?$"

UndergroundPath_5F_Emboscada_Texto_6:
	.string "He's gotta be a suit. Think of the dosh\n"
	.string "we'll roll in if we turn him in to LANCE!$"

UndergroundPath_5F_Emboscada_Texto_7:
	.string "You'd be able to buy that PORYGON, a\n"
	.string "DRATINI, or heck, a SCYTHER!$"

UndergroundPath_5F_Emboscada_Texto_8:
	.string "Yeah!$"

UndergroundPath_5F_Emboscada_Texto_9:
	.string "Besides{PAUSE 15}…{PAUSE 15} We're doing the region a huge\n"
	.string "favor.$"

UndergroundPath_5F_Emboscada_Texto_10:
	.string "Your days of freedom are over. I hope it\n"
	.string "was worth it!$"

UndergroundPath_5F_Emboscada_Texto_11:
	.string "Are you fighting back?$"

UndergroundPath_5F_Emboscada_Texto_12:
	.string "Pfff{PAUSE 15}…{PAUSE 15} So{PAUSE 15}…{PAUSE 15} it seems like you trained\n"
	.string "your POKÉMON well.$"

UndergroundPath_5F_Emboscada_Texto_13:
	.string "I'll keep a couple of them before\n"
	.string "handing you over to justice. No one will\n"
	.string "care anyway!$"

UndergroundPath_5F_Emboscada_Texto_14:
	.string "Give up already!$"

UndergroundPath_5F_Emboscada_Texto_15:
	.string "Darn you! He's gotta be a bigwig! If we\n"
	.string "haul his bum to the LEAGUE HQ, we'll make\n"
	.string "it big!$"

UndergroundPath_5F_Emboscada_Texto_16:
	.string "Don't worry. I got this.\n"
	.string "He's tuckered out.$"

UndergroundPath_5F_Emboscada_Texto_17:
	.string "This chump's meager junk'll be a total\n"
	.string "wash against my collection!$"

UndergroundPath_5F_Emboscada_Texto_18:
	.string "Get your luggage; next stop:\n"
	.string "INDIGO PLATEAU!$"

UndergroundPath_5F_Emboscada_Texto_19:
	.string "Who do you think you are?$"

UndergroundPath_5F_Emboscada_Texto_20:
	.string "Dang…{PAUSE 15}…{PAUSE 15} If I had a DRAGONAIR, you'd\n"
	.string "have been whooped. If only it weren't\n"
	.string "such a pain{PAUSE 15}…{PAUSE 15}…$"

UndergroundPath_5F_Emboscada_Texto_21:
	.string "Grr{PAUSE 15}…{PAUSE 15} You keep your butt there{PAUSE 15}…{PAUSE 15} I'm\n"
	.string "ringing up a buddy from CELADON\n"
	.string "MANSION. He'll be here lickity-split. You\l"
	.string "won't even have the chance to{PAUSE 15}…{PAUSE 15}$"

UndergroundPath_5F_Emboscada_Texto_22:
	.string "????: Enough.$"

UndergroundPath_5F_Emboscada_Texto_23:
	.string "Th{PAUSE 15}-the BIKERS!$"

UndergroundPath_5F_Emboscada_Texto_24:
	.string "TETSUO: Get the heck outta here before\n"
	.string "you regret it.$"

UndergroundPath_5F_Emboscada_Texto_25:
	.string "{PAUSE 15}…{PAUSE 15} {PAUSE 15}…{PAUSE 15}$"

UndergroundPath_5F_Emboscada_Texto_26:
	.string "I know what may be going through your\n"
	.string "head, but please don't blame 'em.$"

UndergroundPath_5F_Emboscada_Texto_27:
	.string "The stench of LANCE's reign still\n"
	.string "lingers across KANTO.$"

UndergroundPath_5F_Emboscada_Texto_28:
	.string "His reign dug deep and tore the region a\n"
	.string "new one like it were putty. Then LANCE\n"
	.string "gave it the perfect mold… for him at\l"
	.string "least.$"

UndergroundPath_5F_Emboscada_Texto_29:
	.string "They're just engines guzzling the only\n"
	.string "fuel they know. And I kinda get it.$"

UndergroundPath_5F_Emboscada_Texto_30:
	.string "I mean, not everyone's willing to risk\n"
	.string "catching fire for their creed.$"

UndergroundPath_5F_Emboscada_Texto_31:
	.string "But{PAUSE 25}…{PAUSE 25} not you, right, {PLAYER}?$"

UndergroundPath_5F_Emboscada_Texto_32:
	.string "You look like a guy who doesn't flinch in\n"
	.string "front of an overwhelming force.$"

UndergroundPath_5F_Emboscada_Texto_33:
	.string "But even though LANCE's government\n"
	.string "had made the good ol' KANTO go up in\n"
	.string "smoke{PAUSE 15} …{PAUSE 15}$"

UndergroundPath_5F_Emboscada_Texto_34:
	.string "{PAUSE 15}…{PAUSE 15} Being your own owner's a priceless\n"
	.string "privilege.$"

UndergroundPath_5F_Emboscada_Texto_35:
	.string "Just getting that chance in itself\n"
	.string "makes taking a chance worth it. Don't\n"
	.string "you forget it, {PLAYER}.$"

