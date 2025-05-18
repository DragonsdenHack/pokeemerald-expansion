Lavender_Secta_Pasadizo_3_MapScripts::
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Lavender_Secta_Pasadizo_3_OnResume
	.byte 0

Lavender_Secta_Pasadizo_3_OnResume:
map_script_2 VAR_UNUSED_0x40F8, 22, Lavender_Secta_Pasadizo_3_Gray
	.2byte 0

Lavender_Secta_Pasadizo_3_Gray::
call Script_SetGrayscaleTint
setvar VAR_UNUSED_0x40F8, 23
end

Lavender_Secta_Pasadizo_Lider_Move_1:
walk_in_place_right
step_end

Lavender_Secta_Pasadizo_Lider_Move_2:
face_left
step_end

Lavender_Secta_Pasadizo_Lider_Move_3:
walk_up
walk_right
face_down
step_end

Lavender_Secta_Pasadizo_Lider_Move_4:
walk_right
walk_up
walk_right
walk_up
walk_right
step_end

Lavender_Secta_Pasadizo_Lider_Move_5:
delay_16
face_left
delay_16
delay_8
face_up
delay_16
step_end

Lavender_Secta_Pasadizo_Lider_Move_6:
face_up
step_end

Lavender_Secta_Pasadizo_Lider_Move_7:
face_right
step_end

Lavender_Secta_Pasadizo_Lider_Move_8:
walk_in_place_up
step_end

Lavender_Secta_Pasadizo_Lider_Move_9:
emote_exclamation_mark
step_end

Lavender_Secta_Pasadizo_Lider_Move_10:
walk_in_place_left
step_end

Lavender_Secta_Pasadizo_Lider_Move_11:
walk_left
walk_down
walk_down
walk_left
walk_left
step_end

Lavender_Secta_Pasadizo_Lider_Move_12:
walk_right
walk_right
walk_right
walk_down
walk_down
walk_right
walk_down
walk_right
step_end

Lavender_Secta_Pasadizo_Lider_Move_12.1:
walk_down
walk_right
walk_right
walk_right
step_end

Lavender_Secta_Pasadizo_Lider::
lock
call Script_SetGrayscaleTint
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_Lider_Move_1
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HOENN_83
clearflag FLAG_HOENN_81
removeobject 4
addobject 2
call Script_SetGrayscaleTint
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_Lider_Move_2
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_Lider_Move_3
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_4
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_5
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_5
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_9 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_6
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_11 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_2
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Lider_Texto_12 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_7
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_1
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Lider_Texto_14 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_6
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Lider_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_7
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Lider_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_6
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_17 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_8
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_18 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_19 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_20 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_9
waitmovement 0x0
waitse
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_2
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_21 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_22 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_23 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_6
waitmovement 0x0
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_24 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_1
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_25 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_5
waitmovement 0x0
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_26 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_10
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_27 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_1
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_28 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_11
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HOENN_81
removeobject 2
delay 35
msgbox Lavender_Secta_Pasadizo_Lider_Texto_29 MSGBOX_AUTOCLOSE
delay 35
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_Lider_Move_12.1
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_12
applymovement OBJ_EVENT_ID_CAMERA, Lavender_Secta_Pasadizo_Lider_Move_12
waitmovement 0x0
special RemoveCameraObject
delay 50
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_6
waitmovement 0x0
delay 50
clearflag FLAG_HOENN_83
addobject 4
call Script_SetGrayscaleTint
playse SE_BALL_THROW
waitse
delay 50
playse SE_BALL_TRADE
setflag FLAG_HOENN_83
removeobject 4
clearflag FLAG_HOENN_80
addobject 3
call Script_SetGrayscaleTint
waitse
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_Lider_Move_9
waitmovement 0x0
delay 35
playmoncry SPECIES_NINETALES, CRY_MODE_ENCOUNTER
waitmoncry
delay 25
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_7
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_30 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_31 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_6
waitmovement 0x0
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_32 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_33 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_7
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_34 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_35 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Lavender_Secta_Pasadizo_Lider_Move_13.1
waitmovement 0x0
playmoncry SPECIES_NINETALES, CRY_MODE_ENCOUNTER
waitmoncry
applymovement 3, Lavender_Secta_Pasadizo_Lider_Move_13.1
waitmovement 0x0
playse SE_LEDGE
applymovement 3, Lavender_Secta_Pasadizo_Lider_Move_13
waitmovement 0x0
waitse
applymovement 3, Lavender_Secta_Pasadizo_Lider_Move_13.1
waitmovement 0x0
delay 10
playse SE_LEDGE
applymovement 3, Lavender_Secta_Pasadizo_Lider_Move_13
waitmovement 0x0
waitse
applymovement 3, Lavender_Secta_Pasadizo_Lider_Move_13.1
waitmovement 0x0
delay 30
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_6
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_36 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_7
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_37 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_38 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_8
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_39 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_40 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_7
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_41 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_42 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_14
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_43 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_NINETALES, CRY_MODE_ENCOUNTER
waitmoncry
applymovement 3, Lavender_Secta_Pasadizo_Lider_Move_13.1
waitmovement 0x0
playse SE_LEDGE
applymovement 3, Lavender_Secta_Pasadizo_Lider_Move_13
waitmovement 0x0
waitse
applymovement 3, Lavender_Secta_Pasadizo_Lider_Move_13.1
waitmovement 0x0
delay 10
playse SE_LEDGE
applymovement 3, Lavender_Secta_Pasadizo_Lider_Move_13
waitmovement 0x0
waitse
applymovement 3, Lavender_Secta_Pasadizo_Lider_Move_13.1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Lavender_Secta_Pasadizo_Lider_Move_15
waitmovement 0x0
special RemoveCameraObject
delay 10
setflag FLAG_HOENN_82
setflag FLAG_HOENN_81
setflag FLAG_HOENN_80
clearflag FLAG_HOENN_163
playse SE_M_DETECT
dofieldeffectsparkle 9, 5, 0
waitfieldeffect FLDEFF_SPARKLE
waitse
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Jirachi_Move_9
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Jirachi_Move_10
playse SE_ORB
special DoOrbEffect
delay 150
waitstate
delay 60
special FadeOutOrbEffect
setvar VAR_UNUSED_0x40F8, 24
warpsilent MAP_POKEMON_TOWER_S3, 11, 9
delay 150
release
end

Lavender_Secta_Pasadizo_Lider_Move_15:
walk_fast_left
walk_fast_left
walk_fast_up
walk_fast_up
step_end

Lavender_Secta_Pasadizo_Lider_Move_14:
delay_16
delay_16
face_up
delay_16
delay_16
face_right
delay_16
delay_16
step_end

Lavender_Secta_Pasadizo_Lider_Move_13:
jump_in_place_down
step_end

Lavender_Secta_Pasadizo_Lider_Move_13.1:
walk_in_place_down
step_end

Lavender_Secta_Pasadizo_Lider_Texto_1:
	.string "????: May I?$"

Lavender_Secta_Pasadizo_Lider_Texto_2:
	.string "C. FRIDA: Certainly. You're still the\n"
	.string "LEADER in this GYM.$"

Lavender_Secta_Pasadizo_Lider_Texto_3:
	.string "????: Yeah, about that{PAUSE 15}…{PAUSE 15}$"

Lavender_Secta_Pasadizo_Lider_Texto_4:
	.string "C. FRIDA: That's what I thought.$"

Lavender_Secta_Pasadizo_Lider_Texto_5:
	.string "How much time does it have left?$"

Lavender_Secta_Pasadizo_Lider_Texto_6:
	.string "????: Ten years. Maybe twelve.$"

Lavender_Secta_Pasadizo_Lider_Texto_7:
	.string "C. FRIDA: Good. At least little MORPHEUS\n"
	.string "will make his dream come true.$"

Lavender_Secta_Pasadizo_Lider_Texto_8:
	.string "????: He will.$"

Lavender_Secta_Pasadizo_Lider_Texto_9:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

Lavender_Secta_Pasadizo_Lider_Texto_10:
	.string "Who could have known this GYM\n"
	.string "wouldn't last forever.$"

Lavender_Secta_Pasadizo_Lider_Texto_11:
	.string "C. FRIDA: Nothing does.$"

Lavender_Secta_Pasadizo_Lider_Texto_12:
	.string "Tell me, what fate awaits this town?$"

Lavender_Secta_Pasadizo_Lider_Texto_13:
	.string "????: SAFFRON CITY is growing larger\n"
	.string "each day.$"

Lavender_Secta_Pasadizo_Lider_Texto_14:
	.string "That new enterprise, SILPH. They're\n"
	.string "building their HQ there. They say the\l"
	.string "building will be taller than the POKÉMON\l"
	.string "TOWER itself.$"

Lavender_Secta_Pasadizo_Lider_Texto_15:
	.string "And besides that, a new GYM may open\n"
	.string "there, alongside the grand opening of\l"
	.string "SILPH.$"

Lavender_Secta_Pasadizo_Lider_Texto_16:
	.string "This will help the city grow socially and…$"

Lavender_Secta_Pasadizo_Lider_Texto_17:
	.string "C. FRIDA: Economically, I get it.$"

Lavender_Secta_Pasadizo_Lider_Texto_18:
	.string "What about LAVENDER TOWN?$"

Lavender_Secta_Pasadizo_Lider_Texto_19:
	.string "????: Once the new GYM is built, there\n"
	.string "won't be a place for this one anywhere\l"
	.string "in KANTO.$"

Lavender_Secta_Pasadizo_Lider_Texto_20:
	.string "It'll become a place for helping TRAINERS.$"

Lavender_Secta_Pasadizo_Lider_Texto_21:
	.string "C. FRIDA: Helping?$"

Lavender_Secta_Pasadizo_Lider_Texto_22:
	.string "????: Yeah, with nicknames.$"

Lavender_Secta_Pasadizo_Lider_Texto_23:
	.string "C. FRIDA: Hah, these stupid trends,\n"
	.string "predictable, yet it still surprises me.$"

Lavender_Secta_Pasadizo_Lider_Texto_24:
	.string "So, what will become of this small\n"
	.string "GRAVEYARD?$"

Lavender_Secta_Pasadizo_Lider_Texto_25:
	.string "????: The NAME RATER will be in charge\n"
	.string "of it. But these tombs are quite old.\l"
	.string "Sooner or later, this place will be\l"
	.string "forgotten.$"

Lavender_Secta_Pasadizo_Lider_Texto_26:
	.string "C. FRIDA: I see. Well, at least{PAUSE 15}…{PAUSE 15} some of\n"
	.string "this GYM will live under these new\l"
	.string "generations.$"

Lavender_Secta_Pasadizo_Lider_Texto_27:
	.string "Thank you.$"

Lavender_Secta_Pasadizo_Lider_Texto_28:
	.string "????: Well then, I'm leaving you to rest.\n"
	.string "It's been quite a long day.$"

Lavender_Secta_Pasadizo_Lider_Texto_29:
	.string "C. FRIDA: {PAUSE 35}…{PAUSE 35} …{PAUSE 35}$"

Lavender_Secta_Pasadizo_Lider_Texto_30:
	.string "Feels like it was yesterday, right,\n"
	.string "NINETALES?$"

Lavender_Secta_Pasadizo_Lider_Texto_31:
	.string "You were here, curling while you awaited\n"
	.string "the cold embrace of death.$"

Lavender_Secta_Pasadizo_Lider_Texto_32:
	.string "But I managed to save you.$"

Lavender_Secta_Pasadizo_Lider_Texto_33:
	.string "Then, I questioned myself how a VULPIX\n"
	.string "could have got here.$"

Lavender_Secta_Pasadizo_Lider_Texto_34:
	.string "At that moment, I realized that the old,\n"
	.string "forgotten, and mistreated tombstone\l"
	.string "still held something.$"

Lavender_Secta_Pasadizo_Lider_Texto_35:
	.string "Those stairs, as old as this town itself,\n"
	.string "lead to an even deeper place.$"

Lavender_Secta_Pasadizo_Lider_Texto_36:
	.string "But every single time we approached,\n"
	.string "you insisted so much, so we turned back.$"

Lavender_Secta_Pasadizo_Lider_Texto_37:
	.string "You're the strongest and noblest\n"
	.string "POKÉMON that I have ever known, but\l"
	.string "somehow you fear returning to that\l"
	.string "place.$"

Lavender_Secta_Pasadizo_Lider_Texto_38:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

Lavender_Secta_Pasadizo_Lider_Texto_39:
	.string "My curiosity is vast, but not as much as\n"
	.string "my respect for our bond.$"

Lavender_Secta_Pasadizo_Lider_Texto_40:
	.string "If you desire so, I will end my days\n"
	.string "without knowing where those stairs\l"
	.string "lead.$"

Lavender_Secta_Pasadizo_Lider_Texto_41:
	.string "Time will end up burying this place.\n"
	.string "It's already doomed.$"

Lavender_Secta_Pasadizo_Lider_Texto_42:
	.string "Once the NAME RATER is settled here, no\n"
	.string "one will ever get down here.$"

Lavender_Secta_Pasadizo_Lider_Texto_43:
	.string "The secret will remain so until the very\n"
	.string "last day.$"
