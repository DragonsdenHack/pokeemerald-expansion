Goldenrod_RadioTowerP9_MapScripts::
	.byte 0

Goldenrod_RadioTowerP9_EventScript_Policia::
	trainerbattle_single TRAINER_TRAINER_718, Goldenrod_RadioTowerP9_Text_PoliciaIntro, Goldenrod_RadioTowerP9_Text_PoliciaDefeated
	msgbox Goldenrod_RadioTowerP9_Text_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end


Goldenrod_RadioTowerP9_NPC5::
lock
faceplayer
msgbox Goldenrod_RadioTowerP9_NPC5_Texto_1 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP9_NPC5_Texto_1:
	.string "Legal, illegal, creative, destructive…\n"
	.string "If it makes some cash, it will prosper\n"
	.string "here.$"

Goldenrod_RadioTowerP9_NPC7::
lock
faceplayer
msgbox Goldenrod_RadioTowerP9_NPC7_Texto_1 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP9_NPC7_Texto_1:
	.string "The perfection road is plain and\n"
	.string "straight; the genius' one, is devious\n"
	.string "and uncertain.$"

Goldenrod_RadioTowerP9_Llave_1::
msgbox Goldenrod_RadioTowerP10_Llave_1_Texto_1, MSGBOX_AUTOCLOSE
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 1, 12, 0x335, FALSE
setmetatile 1, 11, 0x335, FALSE
special DrawWholeMapView
delay 60
release
end

Goldenrod_RadioTowerP9_Llave_2::
msgbox Goldenrod_RadioTowerP10_Llave_1_Texto_1, MSGBOX_AUTOCLOSE
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 14, 9, 0x335, FALSE
setmetatile 14, 10, 0x335, FALSE
setmetatile 15, 9, 0x334, FALSE
setmetatile 15, 10, 0x334, FALSE
setmetatile 15, 11, 0x334, FALSE
special DrawWholeMapView
delay 60
release
end

Goldenrod_RadioTowerP9_Policia_Move_1:
walk_in_place_right
step_end

Goldenrod_RadioTowerP9_Policia_Move_2:
delay_8
face_left
step_end

Goldenrod_RadioTowerP9_Policia_Move_3:
walk_left
step_end

Goldenrod_RadioTowerP9_Policia_Move_4:
walk_left
walk_left
step_end

Goldenrod_RadioTowerP9_Policia_Llave_Izq::
lock
applymovement 6, Goldenrod_RadioTowerP9_Policia_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP9_Policia_Move_2
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Policia_Llave_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP9_Policia_Move_2
waitmovement 0x0
delay 10
goto Goldenrod_RadioTowerP9_Policia

Goldenrod_RadioTowerP9_Policia_Llave_Centro::
lock
applymovement 6, Goldenrod_RadioTowerP9_Policia_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP9_Policia_Move_2
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Policia_Llave_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP9_Policia_Move_3
waitmovement 0x0
delay 10
goto Goldenrod_RadioTowerP9_Policia

Goldenrod_RadioTowerP9_Policia_Llave_Der::
lock
applymovement 6, Goldenrod_RadioTowerP9_Policia_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP9_Policia_Move_2
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Policia_Llave_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP9_Policia_Move_4
waitmovement 0x0
delay 10
goto Goldenrod_RadioTowerP9_Policia

Goldenrod_RadioTowerP9_Policia::
delay 10
msgbox Goldenrod_RadioTowerP9_Policia_Llave_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, Goldenrod_RadioTowerP9_Policia_Move_1
waitmovement 0x0
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox Goldenrod_RadioTowerP9_Policia_Llave_Texto_3 MSGBOX_DEFAULT
waitfanfare
msgbox Goldenrod_RadioTowerP9_Policia_Llave_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F8, 32
release
end

Goldenrod_RadioTowerP9_Policia_Llave_Texto_1:
	.string "Excuse me, SIR. You are {PLAYER},\n"
	.string "aren't you? I need you to come with me.$"

Goldenrod_RadioTowerP9_Policia_Llave_Texto_2:
	.string "The security from now on is more strict.\n"
	.string "If you want to go upstairs, you'll need\n"
	.string "this special key.$"

Goldenrod_RadioTowerP9_Policia_Llave_Texto_3:
	.string "{PLAYER} obtained RADIO KEY!$"

Goldenrod_RadioTowerP9_Policia_Llave_Texto_4:
	.string "Good luck.$"

Goldenrod_RadioTowerP9_Giovanni_Move_1:
walk_in_place_left
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_2:
face_up
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_3:
emote_exclamation_mark
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_4:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_left
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_4.1:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_5:
walk_in_place_down
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_6:
face_up
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_7:
face_left
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_8:
walk_slow_left
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_9:
delay_8
face_up
delay_16
delay_8
face_left
delay_8
walk_in_place_left
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_10:
delay_8
face_left
delay_16
delay_8
face_up
delay_8
step_end



Goldenrod_RadioTowerP9_Giovanni::
lock
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP9_Giovanni_Move_1
waitmovement 0x0
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP9_Giovanni_Move_2
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP9_Giovanni_Move_3
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Goldenrod_RadioTowerP9_Giovanni_Move_4
waitmovement 0x0
special RemoveCameraObject
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_2 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
waitse
applymovement 2, Goldenrod_RadioTowerP9_Giovanni_Move_5
waitmovement 0x0
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_6
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_7
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_8
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_9
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_7 MSGBOX_AUTOCLOSE
delay 30
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_6
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_7
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_6
waitmovement 0x0
delay 15
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_10
waitmovement 0x0
delay 15
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_12 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_7
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_11
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_15 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Goldenrod_RadioTowerP9_Giovanni_Move_12
waitmovement 0x0
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_14
applymovement 3, Goldenrod_RadioTowerP9_Giovanni_Move_13
waitmovement 0x0
delay 20
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_17 MSGBOX_AUTOCLOSE
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_16
applymovement 2, Goldenrod_RadioTowerP9_Giovanni_Move_16
applymovement 3, Goldenrod_RadioTowerP9_Giovanni_Move_15
waitmovement 0x0
removeobject 3
playse SE_EXIT
waitse
delay 10
applymovement 2, Goldenrod_RadioTowerP9_Giovanni_Move_17
waitmovement 0x0
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_18 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 2, Goldenrod_RadioTowerP9_Giovanni_Move_5
waitmovement 0x0
waitse
delay 10
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_19 MSGBOX_AUTOCLOSE
delay 30
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_20 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 2, Goldenrod_RadioTowerP9_Giovanni_Move_3
waitmovement 0x0
waitse
delay 20
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_21 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_2
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP9_Giovanni_Move_7
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP9_Giovanni_Texto_23 MSGBOX_AUTOCLOSE
delay 10
setflag FLAG_HOENN_103
fadescreen 1
delay 15
removeobject 1
removeobject 2
delay 15
fadescreen 0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Goldenrod_RadioTowerP9_Giovanni_Move_4.1
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40F8, 33
release
end

Goldenrod_RadioTowerP9_Giovanni_Move_17:
face_down
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_16:
delay_16
delay_16
delay_16
face_left
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_15:
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_up
walk_up
face_right
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_14:
delay_16
delay_16
face_down
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_13:
walk_slow_down
walk_slow_down
walk_slow_left
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_12:
walk_in_place_right
step_end

Goldenrod_RadioTowerP9_Giovanni_Move_11:
delay_8
walk_slow_left
delay_8
step_end

Goldenrod_RadioTowerP9_Giovanni_Texto_1:
	.string "????: We would never imagine that such\n"
	.string "things had occurred on the other side\n"
	.string "of MT. SILVER.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_2:
	.string "ARCHER: Maybe it's because you didn't\n"
	.string "know all the details.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_3:
	.string "But what if they didn't want to\n"
	.string "acknowledge them all?$"

Goldenrod_RadioTowerP9_Giovanni_Texto_4:
	.string "GIOVANNI: Enough, ARCHER.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_5:
	.string "There's no doubt that the DRAGON\n"
	.string "MASTER feels guilty.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_6:
	.string "He was wrong when he thought that\n"
	.string "LANCE would continue his legacy,\n"
	.string "trusting and hoping that he would stay\l"
	.string "on the right path, pure and virtuous,\l"
	.string "respecting tradition and all of what he\l"
	.string "learned back in ECRUTEAK.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_7:
	.string "At least this is what you did. As well as\n"
	.string "your master before you and his master\n"
	.string "before him. I understand you: there was\l"
	.string "no way to predict it could happen\l"
	.string "otherwise.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_8:
	.string "DRAGON MASTER: I was blind… and I\n"
	.string "didn't see what he was turning into…$"

Goldenrod_RadioTowerP9_Giovanni_Texto_9:
	.string "GIOVANNI: Now, the easy way is to blame\n"
	.string "the whole region of JOHTO for letting\n"
	.string "LANCE get into power.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_10:
	.string "However… If this region falls apart…\n"
	.string "KANTO will be doomed to the same fate.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_11:
	.string "We need the aid of JOHTO.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_12:
	.string "And I'll gain nothing from rendering\n"
	.string "judgment on the elderly pretending to\n"
	.string "be deaf-mutes.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_13:
	.string "And not because they don't care about\n"
	.string "KANTO, but because of their true way:\n"
	.string "battling.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_14:
	.string "To follow the old way of the TRAINER,\n"
	.string "that exact one that requires escaping\n"
	.string "from the mundane. How on earth could\l"
	.string "this be punishable?$"

Goldenrod_RadioTowerP9_Giovanni_Texto_15:
	.string "ARCHER: …$"

Goldenrod_RadioTowerP9_Giovanni_Texto_16:
	.string "DRAGON MASTER: Fine. I will help you.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_17:
	.string "But… I refuse to forget who we are and\n"
	.string "where we have come from.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_18:
	.string "ARCHER: SIR… I can understand the\n"
	.string "MASTER, but LANCE?!$"

Goldenrod_RadioTowerP9_Giovanni_Texto_19:
	.string "If only it depended on me…$"

Goldenrod_RadioTowerP9_Giovanni_Texto_20:
	.string "GIOVANNI: You can't yet see all the\n"
	.string "consequences that this implies.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_21:
	.string "ARCHER: What do you mean, SIR?!$"

Goldenrod_RadioTowerP9_Giovanni_Texto_22:
	.string "GIOVANNI: You needn't worry… LANCE's\n"
	.string "true punishment is yet to arrive.$"

Goldenrod_RadioTowerP9_Giovanni_Texto_23:
	.string "Now, let's get moving. There are things\n"
	.string "far more important to discuss, and only\n"
	.string "{PLAYER} and us are left.$"
