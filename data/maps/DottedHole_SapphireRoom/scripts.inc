DottedHole_SapphireRoom_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, DottedHole_SapphireRoom_OnFrame
	.byte 0

DottedHole_SapphireRoom_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 99, DottedHole_SapphireRoom_Encuentro_Aquiles
	.2byte 0

DottedHoleSaphireRoom2::
lock
faceplayer
msgbox DottedHoleSaphireRoom2_Texto_1 MSGBOX_NPC
release
end

DottedHoleSaphireRoom2_Texto_1:
	.string "I hope the brief moments you spend\n"
	.string "witnessing KYOGRE's resurgence are\l"
	.string "worth it before you find yourself\l"
	.string "submerged dozens of meters below sea\l"
	.string "level.$"

DottedHole_SapphireRoom_Encuentro_Aquiles::
addobject 2
addobject 3
addobject 4
lock
setmetatile 7, 3, 0x2D9, TRUE
setmetatile 7, 2, 0x299, TRUE
setmetatile 7, 1, 0x2C4, TRUE
special DrawWholeMapView
applymovement OBJ_EVENT_ID_PLAYER, MtEmber_B5F_Encuentro_Magno_Move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MtEmber_B5F_Encuentro_Magno_Move_2
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MtEmber_B5F_Encuentro_Magno_Move_3
waitmovement 0x0
special RemoveCameraObject
playse MUS_ENCOUNTER_AQUA
msgbox DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_2 MSGBOX_AUTOCLOSE
delay 20
applymovement 4, MtEmber_B5F_Encuentro_Magno_Move_4
waitmovement 0x0
delay 15
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_3
addobject 1
applymovement 4, MtEmber_B5F_Encuentro_Magno_Move_4.1
waitmovement 0x0
delay 15
msgbox DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_3 MSGBOX_AUTOCLOSE
msgbox DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_4 MSGBOX_AUTOCLOSE
applymovement 4, MtEmber_B5F_Encuentro_Magno_Move_5
waitmovement 0x0
msgbox DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_5 MSGBOX_AUTOCLOSE
applymovement 4, MtEmber_B5F_Encuentro_Magno_Move_5
waitmovement 0x0
delay 20
playse SE_M_DETECT
waitse
dofieldeffectsparkle 7, 4, 0
waitfieldeffect FLDEFF_SPARKLE
playfanfare MUS_AWAKEN_LEGEND
playse SE_ORB
special DoOrbEffect
delay 150
waitstate
delay 60
special FadeOutOrbEffect
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
delay 75
removeobject 1
waitfanfare
playse SE_BANG
setmetatile 7, 3, 0x284, FALSE
setmetatile 7, 2, 0x294, FALSE
setmetatile 7, 1, 0x28C, TRUE
special DrawWholeMapView
delay 25
playse SE_PIN
applymovement 2, MtEmber_B5F_Encuentro_Magno_Move_2
applymovement 3, MtEmber_B5F_Encuentro_Magno_Move_2
applymovement 5, MtEmber_B5F_Encuentro_Magno_Move_2
applymovement 6, MtEmber_B5F_Encuentro_Magno_Move_2
applymovement 7, MtEmber_B5F_Encuentro_Magno_Move_2
applymovement 8, MtEmber_B5F_Encuentro_Magno_Move_2
applymovement 9, MtEmber_B5F_Encuentro_Magno_Move_2
applymovement 10, MtEmber_B5F_Encuentro_Magno_Move_2
waitmovement 0x0
delay 40
msgbox DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_6 MSGBOX_AUTOCLOSE
applymovement 4, MtEmber_B5F_Encuentro_Magno_Move_5
waitmovement 0x0
msgbox DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_6.1 MSGBOX_AUTOCLOSE
applymovement 9, MtEmber_B5F_Encuentro_Magno_Move_14
waitmovement 0x0
playse SE_EXIT
removeobject 9
applymovement 8, MtEmber_B5F_Encuentro_Magno_Move_15
waitmovement 0x0
playse SE_EXIT
removeobject 8
applymovement 10, MtEmber_B5F_Encuentro_Magno_Move_16
waitmovement 0x0
playse SE_EXIT
removeobject 10
applymovement 7, MtEmber_B5F_Encuentro_Magno_Move_17
waitmovement 0x0
playse SE_EXIT
removeobject 7
applymovement 6, MtEmber_B5F_Encuentro_Magno_Move_18
waitmovement 0x0
playse SE_EXIT
removeobject 6
applymovement 5, MtEmber_B5F_Encuentro_Magno_Move_19
waitmovement 0x0
playse SE_EXIT
removeobject 5
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MtEmber_B5F_Encuentro_Magno_Move_6
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, MtEmber_B5F_Encuentro_Magno_Move_7
waitmovement 0x0
playse SE_PIN
applymovement 2, MtEmber_B5F_Encuentro_Magno_Move_8
applymovement 3, MtEmber_B5F_Encuentro_Magno_Move_8
waitmovement 0x0
applymovement 4, MtEmber_B5F_Encuentro_Magno_Move_9
waitmovement 0x0
msgbox DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_7 MSGBOX_AUTOCLOSE
applymovement 2, MtEmber_B5F_Encuentro_Magno_Move_10
waitmovement 0x0
msgbox DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_8 MSGBOX_AUTOCLOSE
msgbox DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_9 MSGBOX_AUTOCLOSE
applymovement 4, MtEmber_B5F_Encuentro_Magno_Move_11
waitmovement 0x0
setflag FLAG_HIDE_CAVE_OF_ORIGIN_B1F_WALLACE
removeobject 4
playse SE_EXIT
applymovement 3, MtEmber_B5F_Encuentro_Magno_Move_12
waitmovement 0x0
removeobject 3
playse SE_EXIT
applymovement 2, MtEmber_B5F_Encuentro_Magno_Move_13
waitmovement 0x0
msgbox DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_10 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_KAYLEE, DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_11
msgbox DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 100
release
end

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_1:
	.string "ARCHIE: The BLUE ORB shines brighter\n"
	.string "than ever. This chamber leads to the\l"
	.string "place where KYOGRE lies, awaiting a\l"
	.string "worthy servant to set it free.$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_2:
.string "{PAUSE 20}…{PAUSE 20}$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_3:
	.string "This SAPPHIRE{PAUSE 20}…{PAUSE 20} already a big deal in\n"
	.string "the black market. But what most people\l"
	.string "don't get is that it's worth way more\l"
	.string "than any price some rich dude would pay\l"
	.string "just to have it collecting dust in their\l"
	.string "fancy mansion.$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_4:
	.string "We gotta be glad nobody's messed up\n"
	.string "this place yet. I know loads of\l"
	.string "scientists who'd kill to sell a piece like\l"
	.string "this to anyone, anywhere, even those\l"
	.string "TEAM ROCKET losers. Don't worry, KYOGRE,\l"
	.string "this SAPPHIRE's in good hands! Hey,\l"
	.string "keep an eye out, HIGH RANK SILVINE and\l"
	.string "ADMIN MATT!$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_5:
	.string "On its own, the SAPPHIRE in this place\n"
	.string "leads nowhere. However, if we manage to\l"
	.string "bring the BLUE ORB and make it shine in\l"
	.string "its presence, this is what happens…$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_6:
	.string "After years of effort and numerous\n"
	.string "failed attempts, we have succeeded:\l"
	.string "KYOGRE! Finally, you can roam the seven\l"
	.string "seas freely and harness all your power!$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_6.1:
	.string "What are you waiting for, bunch of\n"
	.string "pests? Everyone inside! Or you'll be the\l"
	.string "first to experience KYOGRE's WATER\l"
	.string "SPOUT!$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_7:
	.string "ARCHIE: I recognize you; you're the one\n"
	.string "who obstructed my path when I stumbled\l"
	.string "upon this location. Normally, I would\l"
	.string "take it upon myself to give you a lesson\l"
	.string "for your impudence. However, as you can\l"
	.string "appreciate, I won't prolong the\l"
	.string "awakening of Kyogre because someone\l"
	.string "like you has decided to cause a\l"
	.string "commotion. HIGH RANK SHELLY!\l"
	.string "Demonstrate this trash how we operate\l"
	.string "here in TEAM AQUA!$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_8:
	.string "HR.SHELLY: With pleasure, sir.$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_9:
	.string "ARCHIE: I hope you don't make the\n"
	.string "mistake of trying to follow me. You\l"
	.string "should have been taught to respect the\l"
	.string "sea and its dangers from a young age.\l"
	.string "KYOGRE is the sea!$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_10:
	.string "This situation has escalated too much;\n"
	.string "you're not welcome here. Did you know?\l"
	.string "KYOGRE is typically a calm and peaceful\l"
	.string "POKÉMON, except when facing its\l"
	.string "eternal rival, GROUDON. However, if you\l"
	.string "continue down this path, we won't\l"
	.string "hesitate to instruct it to unleash a\l"
	.string "couple of HYDROPUMPS that will take out\l"
	.string "your entire team!$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_11:
	.string "Well, my loss has given ARCHIE the time\n"
	.string "he needed.$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_12:
	.string "I hope the brief moments you spend\n"
	.string "witnessing KYOGRE's resurgence are\l"
	.string "worth it before you find yourself\l"
	.string "submerged dozens of meters below sea\l"
	.string "level.$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_1:
face_left
step_end

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_2:
emote_exclamation_mark
step_end

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_3:
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
step_end

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_4:
walk_up
step_end

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_5:
walk_in_place_up
step_end

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_6:
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
step_end

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_7:
walk_left
walk_left
walk_left
walk_up
walk_up
walk_left
walk_in_place_up
step_end

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_8:
emote_exclamation_mark
face_down
step_end

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_9:
face_down
step_end

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_10:
walk_left
walk_in_place_down
step_end

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_11:
face_up
step_end

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_12:
walk_up
walk_right
walk_up
step_end

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_13:
walk_in_place_down
step_end
