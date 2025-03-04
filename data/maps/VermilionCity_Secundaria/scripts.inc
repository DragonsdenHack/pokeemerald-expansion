VermilionCity_Secundaria_MapScripts::
	.byte 0

VermilionCity_Secundaria_Moteros_Move_1:
walk_in_place_left
delay_16
face_down
step_end

VermilionCity_Secundaria_Moteros_Move_2:
walk_in_place_right
delay_16
face_down
step_end

VermilionCity_Secundaria_Moteros_Move_3:
walk_slow_down
walk_slow_down
step_end

VermilionCity_Secundaria_Moteros_Move_3.1:
walk_up
walk_up
step_end

VermilionCity_Secundaria_Moteros_Move_4:
walk_in_place_right
step_end

VermilionCity_Secundaria_Moteros_Move_5:
walk_in_place_left
step_end

VermilionCity_Secundaria_Moteros_Move_6:
walk_right
walk_right
face_down
step_end

VermilionCity_Secundaria_Moteros_Move_7:
emote_exclamation_mark
face_up
step_end

VermilionCity_Secundaria_Moteros_Move_8:
walk_up
step_end

VermilionCity_Secundaria_Moteros_Move_9:
face_left
step_end

VermilionCity_Secundaria_Moteros_Move_10:
emote_exclamation_mark
step_end

VermilionCity_Secundaria_Moteros_Move_11:
walk_down
walk_right
walk_right
walk_right
step_end

VermilionCity_Secundaria_Moteros_Move_12:
walk_up
walk_up
walk_left
step_end

VermilionCity_Secundaria_Moteros_Move_13:
walk_up
walk_up
walk_left
walk_left
walk_left
walk_down
walk_left
step_end

VermilionCity_Secundaria_Moteros_Move_14:
delay_16
face_right
step_end

VermilionCity_Secundaria_Moteros_Move_15:
walk_up
walk_right
walk_right
walk_right
walk_up
step_end

VermilionCity_Secundaria_Moteros_Move_16:
walk_in_place_up
step_end

VermilionCity_Secundaria_Moteros_Move_17:
face_up
step_end

VermilionCity_Secundaria_Moteros_Move_18:
face_down
step_end


VermilionCity_Secundaria_Moteros::
lock
faceplayer
delay 15
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Secundaria_Moteros_Move_2
applymovement 1, VermilionCity_Secundaria_Moteros_Move_1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, VermilionCity_Secundaria_Moteros_Move_3
waitmovement 0x0
special RemoveCameraObject
applymovement 2, VermilionCity_Secundaria_Moteros_Move_4
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, VermilionCity_Secundaria_Moteros_Move_5
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilionCity_Secundaria_Moteros_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, VermilionCity_Secundaria_Moteros_Move_5
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, VermilionCity_Secundaria_Moteros_Move_5
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, VermilionCity_Secundaria_Moteros_Move_5
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, VermilionCity_Secundaria_Moteros_Move_6
waitmovement 0x0
playse SE_PIN
applymovement 3, VermilionCity_Secundaria_Moteros_Move_7
applymovement 2, VermilionCity_Secundaria_Moteros_Move_7
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Secundaria_Moteros_Move_6
msgbox VermilionCity_Secundaria_Moteros_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, VermilionCity_Secundaria_Moteros_Move_8
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_8 MSGBOX_AUTOCLOSE
applymovement 4, VermilionCity_Secundaria_Moteros_Move_9
waitmovement 0x0
playse SE_PIN
applymovement 4, VermilionCity_Secundaria_Moteros_Move_10
waitmovement 0x0
applymovement 1, VermilionCity_Secundaria_Moteros_Move_14
applymovement 2, VermilionCity_Secundaria_Moteros_Move_15
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Secundaria_Moteros_Move_11
applymovement 4, VermilionCity_Secundaria_Moteros_Move_12
applymovement 5, VermilionCity_Secundaria_Moteros_Move_13
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_9 MSGBOX_AUTOCLOSE
applymovement 3, VermilionCity_Secundaria_Moteros_Move_16
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_10 MSGBOX_AUTOCLOSE
applymovement 3, VermilionCity_Secundaria_Moteros_Move_14
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_11 MSGBOX_AUTOCLOSE
applymovement 3, VermilionCity_Secundaria_Moteros_Move_17
waitmovement 0x0
playse 597
applymovement 1, VermilionCity_Secundaria_Moteros_Move_18
applymovement 5, VermilionCity_Secundaria_Moteros_Move_5
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_12 MSGBOX_AUTOCLOSE
applymovement 5, VermilionCity_Secundaria_Moteros_Move_5
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_712, VermilionCity_Secundaria_Moteros_Texto_14
delay 15
applymovement 4, VermilionCity_Secundaria_Moteros_Move_17
waitmovement 0x0
delay 10
msgbox VermilionCity_Secundaria_Moteros_Texto_15 MSGBOX_AUTOCLOSE
applymovement 5, VermilionCity_Secundaria_Moteros_Move_19
applymovement 4, VermilionCity_Secundaria_Moteros_Move_18.1
waitmovement 0x0
delay 15
playse SE_BREAKABLE_DOOR
applymovement 2, VermilionCity_Secundaria_Moteros_Move_20
waitmovement 0x0
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Secundaria_Moteros_Move_21
waitmovement 0x0
delay 20
msgbox VermilionCity_Secundaria_Moteros_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, VermilionCity_Secundaria_Moteros_Move_25
applymovement 3, VermilionCity_Secundaria_Moteros_Move_22
waitmovement 0x0
delay 15
msgbox VermilionCity_Secundaria_Moteros_Texto_17 MSGBOX_AUTOCLOSE
applymovement 2, VermilionCity_Secundaria_Moteros_Move_24
applymovement 3, VermilionCity_Secundaria_Moteros_Move_23
waitmovement 0x0
delay 30
playse SE_BREAKABLE_DOOR
applymovement 4, VermilionCity_Secundaria_Moteros_Move_16
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Secundaria_Moteros_Move_18
waitmovement 0x0
delay 15
msgbox VermilionCity_Secundaria_Moteros_Texto_18 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilionCity_Secundaria_Moteros_Texto_19 MSGBOX_AUTOCLOSE
playse 597
applymovement 4, VermilionCity_Secundaria_Moteros_Move_16
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_20 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_713, VermilionCity_Secundaria_Moteros_Texto_21
applymovement 4, VermilionCity_Secundaria_Moteros_Move_20
waitmovement 0x0
playmoncry SPECIES_BEEDRILL, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
waitse
delay 10
applymovement 1, VermilionCity_Secundaria_Moteros_Move_26
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_22 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilionCity_Secundaria_Moteros_Texto_23 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Secundaria_Moteros_Move_27
waitmovement 0x0
playse SE_PIN
applymovement 3, VermilionCity_Secundaria_Moteros_Move_28
waitmovement 0x0
delay 10
applymovement 3, VermilionCity_Secundaria_Moteros_Move_29
waitmovement 0x0
delay 10
applymovement 3, VermilionCity_Secundaria_Moteros_Move_4
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_24 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 3, VermilionCity_Secundaria_Moteros_Move_4
waitmovement 0x0
waitse
delay 15
playse 597
delay 10
msgbox VermilionCity_Secundaria_Moteros_Texto_25 MSGBOX_AUTOCLOSE
delay 15
trainerbattle_no_intro TRAINER_TRAINER_711, VermilionCity_Secundaria_Moteros_Texto_26
delay 15
applymovement 3, VermilionCity_Secundaria_Moteros_Move_24
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_27 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Secundaria_Moteros_Move_27
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 3, VermilionCity_Secundaria_Moteros_Move_28
waitmovement 0x0
delay 15
msgbox VermilionCity_Secundaria_Moteros_Texto_28 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilionCity_Secundaria_Moteros_Texto_29 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, VermilionCity_Secundaria_Moteros_Move_31
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_30 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, VermilionCity_Secundaria_Moteros_Move_29
waitmovement 0x0
delay 15
msgbox VermilionCity_Secundaria_Moteros_Texto_31 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilionCity_Secundaria_Moteros_Texto_32 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, VermilionCity_Secundaria_Moteros_Move_4
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_33 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
removeobject 5
removeobject 4
removeobject 3
removeobject 2
delay 10
fadescreen 0
delay 10
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, VermilionCity_Secundaria_Moteros_Move_3.1
waitmovement 0x0
special RemoveCameraObject
applymovement 1, VermilionCity_Secundaria_Moteros_Move_26
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Secundaria_Moteros_Move_17
waitmovement 0x0
delay 5
msgbox VermilionCity_Secundaria_Moteros_Texto_34 MSGBOX_AUTOCLOSE
playse SE_USE_ITEM
special HealPlayerParty
waitse
delay 20
msgbox VermilionCity_Secundaria_Moteros_Texto_35 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilionCity_Secundaria_Moteros_Texto_36 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, VermilionCity_Secundaria_Moteros_Move_29
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Secundaria_Moteros_Move_29.1
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_37 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilionCity_Secundaria_Moteros_Texto_38 MSGBOX_AUTOCLOSE
applymovement 1, VermilionCity_Secundaria_Moteros_Move_32
waitmovement 0x0
playse SE_EXIT
removeobject 1
waitse
setflag FLAG_HOENN_87
setvar VAR_SCOTT_STATE, 3
release
end

VermilionCity_Secundaria_Moteros_Move_32:
walk_right
walk_down
walk_right
walk_right
walk_right
walk_up
walk_right
walk_right
walk_up
step_end

VermilionCity_Secundaria_Moteros_Move_31:
delay_16
face_left
delay_16
face_down
delay_16
walk_in_place_down
step_end

VermilionCity_Secundaria_Moteros_Move_30:
walk_right
step_end

VermilionCity_Secundaria_Moteros_Move_29.1:
delay_16
delay_8
face_right
step_end

VermilionCity_Secundaria_Moteros_Move_29:
face_right
step_end

VermilionCity_Secundaria_Moteros_Move_28:
emote_exclamation_mark
step_end

VermilionCity_Secundaria_Moteros_Move_27:
walk_left
step_end

VermilionCity_Secundaria_Moteros_Move_26:
walk_in_place_down
step_end

VermilionCity_Secundaria_Moteros_Move_25:
delay_16
face_down
step_end

VermilionCity_Secundaria_Moteros_Move_24:
face_right
lock_facing_direction
walk_slow_left
unlock_facing_direction
step_end

VermilionCity_Secundaria_Moteros_Move_23:
delay_8
walk_slow_up
walk_slow_up
step_end

VermilionCity_Secundaria_Moteros_Move_22:
walk_slow_up
delay_16
step_end

VermilionCity_Secundaria_Moteros_Move_21:
emote_exclamation_mark
delay_8
face_left
step_end


VermilionCity_Secundaria_Moteros_Move_20:
lock_facing_direction
walk_down
unlock_facing_direction
step_end

VermilionCity_Secundaria_Moteros_Move_19:
face_down
delay_16
face_left
delay_16
lock_facing_direction
walk_slow_right
unlock_facing_direction
step_end

VermilionCity_Secundaria_Moteros_Move_18.1:
walk_left
face_up
step_end

VermilionCity_Secundaria_Moteros_Texto_1:
	.string "Bah! This sucks! Can't believe we got\n"
	.string "saddled with idling here all day.$"

VermilionCity_Secundaria_Moteros_Texto_2:
	.string "Wanna can it, fool? You plan on hopping\n"
	.string "out right where everyone can see you?$"

VermilionCity_Secundaria_Moteros_Texto_3:
	.string "The BOSS was clear. We can only take the\n"
	.string "product outside between 4 and 6AM.$"

VermilionCity_Secundaria_Moteros_Texto_4:
	.string "We've got one job. And it's serious dosh\n"
	.string "without even lifting a finger.$"

VermilionCity_Secundaria_Moteros_Texto_5:
	.string "You're right. Those preppies from\n"
	.string "GOLDENROD are crazy for these mints.$"

VermilionCity_Secundaria_Moteros_Texto_6:
	.string "You'd be pressed to find one in JOHTO,\n"
	.string "so that's a fun, little niche.$"

VermilionCity_Secundaria_Moteros_Texto_7:
	.string "Who's there? Reveal yourself!$"

VermilionCity_Secundaria_Moteros_Texto_8:
	.string "Ho, ho, ho… Finally, some fun.$"

VermilionCity_Secundaria_Moteros_Texto_9:
	.string "Ah, crud. They're packing serious heat.$"

VermilionCity_Secundaria_Moteros_Texto_10:
	.string "Not a soul is to leave this place. We'll\n"
	.string "truss up this petty BUG CATCHER.$"

VermilionCity_Secundaria_Moteros_Texto_11:
	.string "And you? You get that ROCKET.$"

VermilionCity_Secundaria_Moteros_Texto_12:
	.string "About time!\p"
	.string "No more books or patrols for me!$"

VermilionCity_Secundaria_Moteros_Texto_13:
	.string "Oh, I'll make you feel real TOXIC now!$"

VermilionCity_Secundaria_Moteros_Texto_14:
	.string "What? This is it?$"

VermilionCity_Secundaria_Moteros_Texto_15:
	.string "You TRUBBISH heap. Leave 'em to me!$"

VermilionCity_Secundaria_Moteros_Texto_16:
	.string "Darn! How could I lose to a BUG\n"
	.string "CATCHER?$"

VermilionCity_Secundaria_Moteros_Texto_17:
	.string "I'll finish him.$"

VermilionCity_Secundaria_Moteros_Texto_18:
	.string "Hey! You there!$"

VermilionCity_Secundaria_Moteros_Texto_19:
	.string "Are you fighting or what?$"

VermilionCity_Secundaria_Moteros_Texto_20:
	.string "You ROCKETs know jack about JOHTO\n"
	.string "POKÉMON. Here's something new!$"

VermilionCity_Secundaria_Moteros_Texto_21:
	.string "You ain't from KANTO!$"

VermilionCity_Secundaria_Moteros_Texto_22:
	.string "No! BEEDRILL!$"

VermilionCity_Secundaria_Moteros_Texto_23:
	.string "This is it, bub. The end of the line.\p"
	.string "Now face the consequenc…$"

VermilionCity_Secundaria_Moteros_Texto_24:
	.string "Useless, useless, useless… Beaten up by\n"
	.string "a ROCKET and a BUG CATCHER. You're all\n"
	.string "useless piles of… bah is not even worth\l"
	.string "mentioning it.$"

VermilionCity_Secundaria_Moteros_Texto_25:
	.string "I'll be taking care of it myself!$"

VermilionCity_Secundaria_Moteros_Texto_26:
	.string "You can't be a ROCKET!$"

VermilionCity_Secundaria_Moteros_Texto_27:
	.string "This is not good… The BOSS won't be\n"
	.string "liking this…$"

VermilionCity_Secundaria_Moteros_Texto_28:
	.string "Huh? You're giving us the boot?$"

VermilionCity_Secundaria_Moteros_Texto_29:
	.string "… …$"

VermilionCity_Secundaria_Moteros_Texto_30:
	.string "Well, you heard him. Everyone, move! And\n"
	.string "you'd better go unseen!$"

VermilionCity_Secundaria_Moteros_Texto_31:
	.string "And about you…{PAUSE 20} We'll be in touch.$"

VermilionCity_Secundaria_Moteros_Texto_32:
	.string "Our BOSS's 'MONs are terrifying.$"

VermilionCity_Secundaria_Moteros_Texto_33:
	.string "He'll take you down. Then we'll return to\n"
	.string "wring you of every, last drop.$"

VermilionCity_Secundaria_Moteros_Texto_34:
	.string "Hold up.$"

VermilionCity_Secundaria_Moteros_Texto_35:
	.string "There you go! Now your buds are all\n"
	.string "patched up.$"

VermilionCity_Secundaria_Moteros_Texto_36:
	.string "…$"

VermilionCity_Secundaria_Moteros_Texto_37:
	.string "Behind that door, you'll find my garden.$"

VermilionCity_Secundaria_Moteros_Texto_38:
	.string "The time's come for me to reclaim what\n"
	.string "was and still is mine.$"
