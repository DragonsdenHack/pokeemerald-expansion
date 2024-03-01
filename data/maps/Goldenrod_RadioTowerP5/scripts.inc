Goldenrod_RadioTowerP5_MapScripts::
	.byte 0

RadioTowerP5_15::
lock
faceplayer
msgbox RadioTowerP5_15_Texto_1 MSGBOX_AUTOCLOSE
release
end

RadioTowerP5_15_Texto_1:
.string "Es desagradable pensar que la crueldad\n"
	.string "sea un motor de la mejora.$"



GoldenrodRadioTowerP5Documento_100::
msgbox GoldenrodRadioTowerP5Documento_Text_100, MSGBOX_SIGN   
end

GoldenrodRadioTowerP5Documento_Text_100:
.string "P5 SALA CUMBRE$"

GoldenrodRadioTowerP5_Primera_Reunion::
lock
clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
addobject 3
addobject 2
addobject 5
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Primera_Reunion_move_1
waitmovement 0x0
playse SE_PIN
applymovement 10, GoldenrodRadioTowerP5_Primera_Reunion_move_2
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_1 MSGBOX_AUTOCLOSE
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_2 MSGBOX_AUTOCLOSE
applymovement 10, GoldenrodRadioTowerP5_Primera_Reunion_move_3
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_3 MSGBOX_AUTOCLOSE
applymovement 10, GoldenrodRadioTowerP5_Primera_Reunion_move_4
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Primera_Reunion_move_5
applymovement 9, GoldenrodRadioTowerP5_Primera_Reunion_move_6
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_4 MSGBOX_AUTOCLOSE
applymovement 9, GoldenrodRadioTowerP5_Primera_Reunion_move_4
waitmovement 0x0
applymovement 8, GoldenrodRadioTowerP5_Primera_Reunion_move_6
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Primera_Reunion_move_7
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_5 MSGBOX_AUTOCLOSE
applymovement 8, GoldenrodRadioTowerP5_Primera_Reunion_move_4
waitmovement 0x0
applymovement 7, GoldenrodRadioTowerP5_Primera_Reunion_move_6
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Primera_Reunion_move_7
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_6 MSGBOX_AUTOCLOSE
applymovement 7, GoldenrodRadioTowerP5_Primera_Reunion_move_4
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Primera_Reunion_move_8
waitmovement 0x0
applymovement 6, GoldenrodRadioTowerP5_Primera_Reunion_move_4
applymovement 4, GoldenrodRadioTowerP5_Primera_Reunion_move_6
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_7 MSGBOX_AUTOCLOSE
delay 10
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, GoldenrodRadioTowerP5_Primera_Reunion_move_9
applymovement 4, GoldenrodRadioTowerP5_Primera_Reunion_move_9
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Primera_Reunion_move_10
waitmovement 0x0
applymovement 3, GoldenrodRadioTowerP5_Primera_Reunion_move_11
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_9 MSGBOX_AUTOCLOSE
applymovement 3, GoldenrodRadioTowerP5_Primera_Reunion_move_6
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Primera_Reunion_move_12
waitmovement 0x0
delay 15
applymovement 1, GoldenrodRadioTowerP5_Primera_Reunion_move_13
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, GoldenrodRadioTowerP5_Primera_Reunion_move_14
waitmovement 0x0
special RemoveCameraObject
playbgm 567, FALSE
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_3
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, GoldenrodRadioTowerP5_Primera_Reunion_move_3
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_12 MSGBOX_AUTOCLOSE
delay 15
applymovement 13, GoldenrodRadioTowerP5_Primera_Reunion_move_15
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_13 MSGBOX_AUTOCLOSE
delay 15
applymovement 14, GoldenrodRadioTowerP5_Primera_Reunion_move_15
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_14 MSGBOX_AUTOCLOSE
delay 15
applymovement 12, GoldenrodRadioTowerP5_Primera_Reunion_move_16
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_15 MSGBOX_AUTOCLOSE
delay 15
applymovement 11, GoldenrodRadioTowerP5_Primera_Reunion_move_16
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_16 MSGBOX_AUTOCLOSE
delay 15
applymovement 10, GoldenrodRadioTowerP5_Primera_Reunion_move_16
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_17 MSGBOX_AUTOCLOSE
delay 15
applymovement 9, GoldenrodRadioTowerP5_Primera_Reunion_move_16
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_18 MSGBOX_AUTOCLOSE
delay 15
applymovement 8, GoldenrodRadioTowerP5_Primera_Reunion_move_16
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_19 MSGBOX_AUTOCLOSE
delay 15
applymovement 7, GoldenrodRadioTowerP5_Primera_Reunion_move_16
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_20 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, GoldenrodRadioTowerP5_Primera_Reunion_move_17
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_21 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, GoldenrodRadioTowerP5_Primera_Reunion_move_17
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_22 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, GoldenrodRadioTowerP5_Primera_Reunion_move_3
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_23 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Primera_Reunion_move_3
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_24 MSGBOX_AUTOCLOSE
delay 20
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_25 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_3
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_26 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_18
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_27 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_19
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_28 MSGBOX_AUTOCLOSE
delay 15
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_29 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_11
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_30 MSGBOX_AUTOCLOSE
delay 15
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_31 MSGBOX_AUTOCLOSE
applymovement 1, GoldenrodRadioTowerP5_Primera_Reunion_move_9
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_32 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_20
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_33 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, GoldenrodRadioTowerP5_Primera_Reunion_move_6
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_34 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_20
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_35 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_19
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_36 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_21
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_37 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_11
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_38 MSGBOX_AUTOCLOSE
delay 15
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_8 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_6
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_39 MSGBOX_AUTOCLOSE
delay 15
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_40 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_3
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_41 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_18
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_42 MSGBOX_AUTOCLOSE
applymovement 1, GoldenrodRadioTowerP5_Primera_Reunion_move_9
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_11
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_43 MSGBOX_AUTOCLOSE
delay 10
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_44 MSGBOX_AUTOCLOSE
delay 15
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_45 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, GoldenrodRadioTowerP5_Primera_Reunion_move_6
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_6
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_46 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, GoldenrodRadioTowerP5_Primera_Reunion_move_9
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_47 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_21
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_48 MSGBOX_AUTOCLOSE
delay 10
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_49 MSGBOX_AUTOCLOSE
applymovement 1, GoldenrodRadioTowerP5_Primera_Reunion_move_6
waitmovement 0x0
delay 10
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_50 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_3
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_51 MSGBOX_AUTOCLOSE
delay 20
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_52 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_22
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_53 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_3
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_54 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_18
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_55 MSGBOX_AUTOCLOSE
applymovement 14, GoldenrodRadioTowerP5_Primera_Reunion_move_15
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_56 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_9
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_57 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_6
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_58 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_3
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_59 MSGBOX_AUTOCLOSE
delay 15
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_8 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_22
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_60 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_18
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_61 MSGBOX_AUTOCLOSE
delay 15
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_62 MSGBOX_AUTOCLOSE
delay 10
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_63 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_3
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_64 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_3
waitmovement 0x0
delay 20
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_65 MSGBOX_AUTOCLOSE
delay 30
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_66 MSGBOX_AUTOCLOSE
delay 30
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_22
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_67 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 8, GoldenrodRadioTowerP5_Primera_Reunion_move_23
applymovement 7, GoldenrodRadioTowerP5_Primera_Reunion_move_23
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_68 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_18
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_69 MSGBOX_AUTOCLOSE
delay 10
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_70 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_3
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_71 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, GoldenrodRadioTowerP5_Primera_Reunion_move_3
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_72 MSGBOX_AUTOCLOSE
delay 60
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_73 MSGBOX_AUTOCLOSE
applymovement 1, GoldenrodRadioTowerP5_Primera_Reunion_move_3
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_74 MSGBOX_AUTOCLOSE
fadedefaultbgm
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
fadescreen 1
delay 20
removeobject 1
removeobject 7
removeobject 8
removeobject 9
removeobject 10
removeobject 6
removeobject 4
removeobject 11
removeobject 12
removeobject 13
removeobject 14
fadescreen 0
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, GoldenrodRadioTowerP5_Primera_Reunion_move_24
waitmovement 0x0
special RemoveCameraObject
delay 15
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Primera_Reunion_move_11
applymovement 3, GoldenrodRadioTowerP5_Primera_Reunion_move_25
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_75 MSGBOX_AUTOCLOSE
applymovement 3, GoldenrodRadioTowerP5_Primera_Reunion_move_26
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_27
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Primera_Reunion_move_17
applymovement 5, GoldenrodRadioTowerP5_Primera_Reunion_move_28
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_76 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_6
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_77 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_11
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_78 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_15
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_79 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, GoldenrodRadioTowerP5_Primera_Reunion_move_4
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_80 MSGBOX_AUTOCLOSE
delay 15
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_81 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_6
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_82 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
fadescreen 1
delay 20
removeobject 3
removeobject 5
fadescreen 0
delay 10
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_11
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_83 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_29
waitmovement 0x0
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_4
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Primera_Reunion_move_4
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_84 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_22
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Primera_Reunion_move_22
waitmovement 0x0
delay 20
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_85 MSGBOX_AUTOCLOSE
delay 20
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_86 MSGBOX_AUTOCLOSE
delay 10
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_87 MSGBOX_AUTOCLOSE
delay 20
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_88 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_11
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Primera_Reunion_move_9
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_89 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_15
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_90 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Primera_Reunion_move_6
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Primera_Reunion_Texto_91 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
fadescreen 1
delay 20
removeobject 2
fadescreen 0
delay 10
setvar VAR_UNUSED_0x40F7, 153
release
end

GoldenrodRadioTowerP5_Primera_Reunion_Texto_1:
	.string "BLUE: {PLAYER}, you couldn't miss this\n"
	.string "meeting.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_2:
	.string "LANCE is going to reclaim the title of\n"
	.string "CHAMPION, and GIOVANNI will delegate\l"
	.string "control of the VIRIDIAN CITY GYM to me,\l"
	.string "along with his UNDERGROUND WAREHOUSE.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_3:
	.string "I already told you, {PLAYER}, your\n"
	.string "destiny is to explore new regions,\l"
	.string "become the best TRAINER possible, and\l"
	.string "finally, here you are, also challenging\l"
	.string "the limits of JOHTO. If by any chance\l"
	.string "you pass through MT. SILVER, I hope you\l"
	.string "defeat RED again, just in case.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_4:
	.string "FUJI: {PLAYER}, right? Yes, I've been\n"
	.string "released now. I wanted to talk to you.\l"
	.string "What you did in the POKÉMON TOWER,\l"
	.string "handing me over to the CUBONE, was very\l"
	.string "noble of you. Due to that gesture; it\l"
	.string "changed the opinion I had of TEAM\l"
	.string "ROCKET. I saw that those poor devils\l"
	.string "who killed MAROWAK were only victims of\l"
	.string "their ignorance; GIOVANNI made it clear\l"
	.string "to me that he imposed an exemplary\l"
	.string "punishment on them for such atrocity.\l"
	.string "In contrast, those of you upstairs\l"
	.string "know the true purpose of TEAM ROCKET;\l"
	.string "now I know it too.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_5:
	.string "BILL: Well, well, well. Look who it is.\n"
	.string "From a lowly thief to a high-ranking\l"
	.string "ROCKET, EXECUTIVE, ADMIN.CHIEF, and\l"
	.string "now rubbing shoulders with the 15 most\l"
	.string "influential people in all of\l"
	.string "KANTO-JOHTO. I have a rematch planned\l"
	.string "with you, {PLAYER}. This time, my new\l"
	.string "toys will be too much, even for you.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_6:
	.string "OAK: Hey! {PLAYER}! Welcome to\n"
	.string "POKÉMON world! Didnt you want to\l"
	.string "discover this world? Then this is the\l"
	.string "reality! 15 individuals dividing 2\l"
	.string "regions like pieces of a cake!$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_7:
	.string "You have dishonored our clan, LANCE. I\n"
	.string "am ashamed to have instructed you in\l"
	.string "the noble art of training the oldest\l"
	.string "and most sacred type. When this is over,\l"
	.string "I don't want to see your face in\l"
	.string "BLACKTHORN CITY again. Do you\l"
	.string "understand?$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_8:
.string "LANCE: ...$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_9:
.string "ANDRA: Come on, {PLAYER}!\n"
	.string "Always late, Just like in\l"
	.string "ARCHER' first speech!$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_10:
	.string "PRESIDENT: All right, ladies and\n"
	.string "gentlemen, I trust you're all aware of\l"
	.string "the efforts we've made to keep this\l"
	.string "meeting confidential. Whatever we\l"
	.string "discuss, plan, or debate here will stay\l"
	.string "strictly among those present, namely:$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_11:
	.string "GIOVANNI, TEAM ROCKET'S LEADER, the\n"
	.string "organization currently controlling the\l"
	.string "government of KANTO and the POKÉMON\l"
	.string "LEAGUE championship, and former\l"
	.string "champion of KANTO.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_12:
	.string "ARCHER, TEAM ROCKET'S CHIEF\n"
	.string "ADMINISTRATOR, GIOVANNI's right hand\l"
	.string "and ROCKET ADMIN. on SEVII ISLANDS.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_13:
	.string "The PRESIDENT of SILPH, the most\n"
	.string "successful corporation in KANTO, which\l"
	.string "collaborates with TEAM ROCKET.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_14:
	.string "PROFESSOR ELM, the most prominent\n"
	.string "researcher in JOHTO, knowledgeable\l"
	.string "about all its fauna and flora.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_15:
	.string "PRYCE, the eternal LEADER of MAHOGANY\n"
	.string "TOWN and its secrets.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_16:
	.string "JADEN, master of BELL TOWER and\n"
	.string "ECRUTEAK CITY'S LEADER, the HO-OH'S\l"
	.string "chosen one.$"


GoldenrodRadioTowerP5_Primera_Reunion_Texto_17:
	.string "BLUE, OAK's grandson, TEAM ROCKET's\n"
	.string "collaborator and temporary CHAMPION\l"
	.string "waiting for new decisions.$"


GoldenrodRadioTowerP5_Primera_Reunion_Texto_18:
	.string "FUJI, former ROCKET scientist, pivotal\n"
	.string "in the creation of MEWTWO, now the most\l"
	.string "influential individual in LAVENDER TOWN.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_19:
	.string "BILL, the world's most famous POKÉ\n"
	.string "MANIAC, a SILPH's scientist. He has\l"
	.string "optimized the evolutionary line of\l"
	.string "PORYGON to its limits.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_20:
	.string "SAMUEL OAK, the most prominent\n"
	.string "researcher in KANTO, former champion of\l"
	.string "KANTO.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_21:
	.string "LANCE, former CHAMPION and former\n"
	.string "GOVERNOR of KANTO-JOHTO.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_22:
	.string "ELDER MASTER SALAZAR, from BLACKTHORN\n"
	.string "CITY, the considered most powerful\l"
	.string "TRAINER in JOHTO, a masterful expert in\l"
	.string "the DRAGON TYPE.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_23:
	.string "ANDRA, TEAM ROCKET'S CHIEF\n"
	.string "ADMINISTRATOR, and ROCKET BOSS on\l"
	.string "HOENN.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_24:
	.string "Finally, {PLAYER}, TEAM ROCKET'S\n"
	.string "CHIEF ADMINISTRATOR, ROCKET BOSS on\l"
	.string "JOHTO, and actual CHAMPION of KANTO by\l"
	.string "his own merits.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_25:
	.string "Now that we all know each other, we can\n"
	.string "move on to the topics to discuss.\l"
	.string "GIOVANNI, the floor is yours.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_26:
	.string "GIOVANNI: I have assembled you all here\n"
	.string "with the aim of witnessing a genuinely\l"
	.string "united KANTO and JOHTO at last. Until\l"
	.string "now, we have each been going our own\l"
	.string "way, when the majority of us were, after\l"
	.string "all, chasing the same goals.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_27:
	.string "The purpose of this gathering is to\n"
	.string "secure a prosperous future for both\l"
	.string "regions, while establishing a strong\l"
	.string "system where our respective interests\l"
	.string "do not oppose each other.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_28:
	.string "However, it's not just that; now we have\n"
	.string "no problem stating that several of\l"
	.string "those present here were involved in the\l"
	.string "creation of MEWTWO, alongside LUGIA\l"
	.string "and HO-OH. In response to LANCE's\l"
	.string "attacks, the unity between KANTO and\l"
	.string "JOHTO wouldn't just be about a\l"
	.string "non-aggression pact to prevent\l"
	.string "further catastrophe among us, but\l"
	.string "would also allow us to collaborate\l"
	.string "closely in creating prototypes even\l"
	.string "more powerful than MEWTWO, protecting\l"
	.string "both regions in case of an attack.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_29:
	.string "BILL: I agree, not exploring the limits\n"
	.string "of this world would be a sin.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_30:
	.string "ELDER.M: And how do we know you won't\n"
	.string "use all that as a weapon rather than\l"
	.string "for defense? I know several of those\l"
	.string "present here; most of them believe they\l"
	.string "can achieve in a laboratory something\l"
	.string "that could truly earn them devotion for\l"
	.string "their POKÉMON team.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_31:
	.string "GIOVANNI: I know, master. I myself,\n"
	.string "until recently, didn't reach that point\l"
	.string "you mentioned, but my RHYPERIOR and I\l"
	.string "achieved it. However, numbers are\l"
	.string "numbers, and gathering information and\l"
	.string "knowledge is never in vain.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_32:
	.string "PRESIDENT: So what are you going to\n"
	.string "propose, GIOVANNI?$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_33:
	.string "GIOVANNI: The first step will be to\n"
	.string "open the borders of ROUTE 26 and 27.\l"
	.string "Something that, I understand, will be\l"
	.string "done shortly.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_34:
	.string "Then, we will announce the return of the\n"
	.string "POKÉMON LEAGUE CHAMPIONSHIP to JOHTO\l"
	.string "as well, making the 8 region BADGES\l"
	.string "valid.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_35:
	.string "The creation of the MAGNETRAIN and the\n"
	.string "expansion of OLIVINE PORT will\l"
	.string "complete the connection between KANTO\l"
	.string "and JOHTO.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_36:
	.string "Everyone here will benefit from this.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_37:
	.string "As the current owners of the POKÉMON\n"
	.string "LEAGUE, this is what we can offer.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_38:
	.string "LANCE, you will have the opportunity to\n"
	.string "compete for the title of CHAMPION once\l"
	.string "more if you wish, and your status as a\l"
	.string "DRAGON TAMER will remain unquestioned.\l"
	.string "Please don't assume I'm doing this out\l"
	.string "of any special favoritism towards you;\l"
	.string "I'm simply acting because your\l"
	.string "involvement in JOHTO would expedite\l"
	.string "the unification process if you are\l"
	.string "genuinely engaged in events from both\l"
	.string "regions.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_39:
	.string "OAK, you will be able to continue all\n"
	.string "your research, this time making all your\l"
	.string "findings public to those present here.\l"
	.string "You will be able to work with the finest\l"
	.string "minds from both regions, alongside ELM,\l"
	.string "BILL, and also BLAINE. All your work will\l"
	.string "be put to the service of KANTO-JOHTO.\l"
	.string "That's what you wanted, isn't it? The\l"
	.string "means are insignificant.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_40:
.string "OAK: ...$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_41:
	.string "GIOVANNI: On the other hand, SILPH will\n"
	.string "be able to expand the sale of its\l"
	.string "products to JOHTO, and the RADIO TOWER\l"
	.string "will extend its broadcasts to KANTO.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_42:
	.string "I know that to you, esteemed masters\n"
	.string "of BLACKTHORN CITY and ECRUTEAK CITY,\l"
	.string "these matters hold little interest, but\l"
	.string "TEAM ROCKET knows how to respect\l"
	.string "traditions, and surely every inhabitant\l"
	.string "arriving from KANTO will appreciate\l"
	.string "landmarks like the BELL TOWER or the\l"
	.string "DRAGON'S DEN, just as we will strive to\l"
	.string "keep JOHTO as rural as it has always\l"
	.string "been, except for major cities like\l"
	.string "GOLDENROD.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_43:
	.string "PRESIDENT: And how do you intend to\n"
	.string "fund all of these research projects?$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_44:
	.string "GIOVANNI: This is where FUJI and\n"
	.string "LAVENDER TOWN come into play, dear\l"
	.string "friend.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_45:
.string "FUJI: ...$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_46:
	.string "GIOVANNI: FUJI has already told me\n"
	.string "that it's time to shake things up in the\l"
	.string "town. It's not the right place for the\l"
	.string "few remaining CUBONE, who will be\l"
	.string "relocated to ROCK TUNNEL, which is more\l"
	.string "suitable for them. Meanwhile, a new\l"
	.string "underground cemetery will be built\l"
	.string "south of the town to hold all the\l"
	.string "graves from LAVENDER TOWN TOWER.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_47:
.string "PRESIDENT: But…\n"
	.string "And LAVENDER TOWER?$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_48:
	.string "GIOVANNI: It will be converted into the\n"
	.string "KANTO RADIO TOWER, where it will also be\l"
	.string "able to broadcast its programs,\l"
	.string "PRESIDENT. Are we on the same page?$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_49:
	.string "PRESIDENT: We are exactly on the same\n"
	.string "page.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_50:
	.string "GIOVANNI: Some may find it\n"
	.string "controversial, but it's the best\l"
	.string "decision in the long term. It not only\l"
	.string "promotes unity between the 2 regions\l"
	.string "but also allows us to finance many of\l"
	.string "our projects with the profits.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_51:
	.string "We must make tough decisions,\n"
	.string "gentlemen. For better or for worse, this\l"
	.string "world is governed by the law of the\l"
	.string "strongest POKÉMON. We saw what\l"
	.string "happened when LANCE decided to apply\l"
	.string "that law against KANTO. All the\l"
	.string "investments made with the profits from\l"
	.string "the new RADIO TOWER will be aimed at\l"
	.string "creating a POKÉMON that will give us\l"
	.string "total security against any attack. I\l"
	.string "don't know about you, but I prefer to\l"
	.string "save potential lives, even at the cost\l"
	.string "of displacing those that are already\l"
	.string "beyond repair, than to leave everything\l"
	.string "as it is.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_52:
.string "SILPH PRESIDENT: Well said.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_53:
	.string "GIOVANNI: This brings us to the final\n"
	.string "loose end I want to tie up, the one that\l"
	.string "will allow us to keep all of this in the\l"
	.string "shadows, through which we will all reap\l"
	.string "these benefits along with the growth\l"
	.string "of both regions.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_54:
	.string "SILPH and the KANTO RADIO TOWER will\n"
	.string "stay closed to the public. The reason?\l"
	.string "The TEAM ROCKET will work directly in\l"
	.string "these places alongside their workers.\l"
	.string "Publicly, we will claim security reasons\l"
	.string "because, of course, who wants a repeat\l"
	.string "of the horrific assault on the SILPH CO.\l"
	.string "headquarters by the same TEAM ROCKET?$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_55:
	.string "And finally, for those who still don't\n"
	.string "know, it's no coincidence that the most\l"
	.string "important places in the coming years\l"
	.string "are related to radio.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_56:
	.string "ELM: That's correct, we've identified a\n"
	.string "correlation between specific radio\l"
	.string "frequencies and POKÉMON growth;\l"
	.string "there's a chance they could experience\l"
	.string "certain mutations.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_57:
	.string "So, the LAVENDER RADIO TOWER and also\n"
	.string "this one will have own research rooms,\l"
	.string "unavailable to most of population, while\l"
	.string "we trust that you, PRYCE, provide us\l"
	.string "that old ninja base at MAHOGANY to\l"
	.string "build this extensive network of\l"
	.string "research and business center.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_58:
	.string "PRYCE: Count on that, GIOVANNI.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_59:
	.string "GIOVANNI: Continuing with the plan, the\n"
	.string "title of GOVERNOR will be abolished.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_60:
	.string "GIOVANNI: Only SILPH, the RADIO TOWER,\n"
	.string "TEAM ROCKET, and other companies like\l"
	.string "OLIVINE PORT, MAGNETRAIN, or the GAME\l"
	.string "CORNERS will exist.$"


GoldenrodRadioTowerP5_Primera_Reunion_Texto_61:
.string "Any doubt?$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_62:
	.string "BILL: All of that sounds great, but as\n"
	.string "he mentioned, what really matters in\l"
	.string "the end is the power that can be\l"
	.string "generated from this system. What\l"
	.string "numbers do you expect the new\l"
	.string "prototypes to reach?$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_63:
	.string "GIOVANNI: Calm down, BILL, you will have\n"
	.string "a chance to work for that directly\l"
	.string "together with OAK and ELM.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_64:
	.string "It's known that with MEWTWO, we reached\n"
	.string "680 BASE STATS.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_65:
.string "Our expectations…$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_66:
.string "OAK: ...$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_67:
	.string "GIOVANNI: Suggest that it's possible\n"
	.string "to comfortably exceed the 700 base\l"
	.string "limit, and even breach the 800 mark.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_68:
	.string "BILL: That's insane!! Do you realize the\n"
	.string "numbers that you are talking about? A\l"
	.string "POKÉMON's body can't withstand such\l"
	.string "high stats.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_69:
	.string "GIOVANNI: I certainly believe it can,\n"
	.string "and when you see the resources we have\l"
	.string "at our disposal, you'll believe it too.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_70:
.string "BILL: ...$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_71:
	.string "That's all, gentleman. As you can see, if\n"
	.string "we all work together, we can transform\l"
	.string "these two regions into the greatest\l"
	.string "powerhouse the world has ever known,\l"
	.string "benefiting everyone from the most\l"
	.string "venerable and ancient residents to the\l"
	.string "brightest scientists and\l"
	.string "entrepreneurs.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_72:
	.string "DIRECTOR: Any question?$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_73:
	.string "We hereby conclude the I GOLDENROD\n"
	.string "CONFERENCE. Soon, each of you present\l"
	.string "here will receive the actions to take to\l"
	.string "fulfill each of the points discussed\l"
	.string "here. For now, I announce that the\l"
	.string "borders with KANTO will reopen.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_74:
	.string "Very interesting times are coming for\n"
	.string "all of us. That's it, gentlemen.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_75:
.string "ANDRA: An intense meeting, huh?$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_76:
	.string "GIOVANNI: ANDRA, {PLAYER}, it's a\n"
	.string "pleasure to see you both together\l"
	.string "again. You've brought much joy to TEAM\l"
	.string "ROCKET through your teamwork.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_77:
	.string "You're doing an excellent job in HOENN,\n"
	.string "ANDRA. We'll learn a lot from the unique\l"
	.string "STATS distribution of those REGIS.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_78:
	.string "{PLAYER}, if I'm not wrong, you\n"
	.string "already have 5 JOHTO BADGES. The latest\l"
	.string "data on that DEEP BOND POLIWRATH has\l"
	.string "been very useful to us; that POKÉMON is\l"
	.string "a powerhouse in every sense. It\l"
	.string "outperforms MACHAMP in all 6 STATS, and\l"
	.string "with IRON FIST supported by its huge\l"
	.string "defenses and a BASE ATTACK of 145, it's\l"
	.string "a true life-draining and\l"
	.string "self-recovering machine.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_79:
	.string "I want both of you to take a short\n"
	.string "vacation; you've earned it.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_80:
	.string "ARCHER: You should consider visiting\n"
	.string "the third and fourth floors of our base\l"
	.string "on ROUTE 45; they're prepared with the\l"
	.string "latest developments in MEGA STONES\l"
	.string "that we've achieved.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_81:
	.string "GIOVANNI: Yeah, I think you'll enjoy\n"
	.string "visiting that place, just like you did\l"
	.string "for the first time with the DEEP ROCKET\l"
	.string "BASE.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_82:
	.string "ANDRA, ARCHER, keep going ahead. Show\n"
	.string "the way to ANDRA to the JOHTO BASE.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_83:
	.string "GIOVANNI: What did you think of the\n"
	.string "meeting, {PLAYER}? To the eyes of the\l"
	.string "population, this has never happened, it\l"
	.string "doesn't exist, and yet, it has laid the\l"
	.string "groundwork for their lives in the coming\l"
	.string "years. Let's hope for the best…$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_84:
	.string "Look at this magnificent landscape,\n"
	.string "{PLAYER}, from here we have a view of\l"
	.string "the OLIVINE CITY LIGHTHOUSE, the BELL\l"
	.string "TOWER of ECRUTEAK CITY, JOHTO, right at\l"
	.string "our fingertips.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_85:
.string "GIOVANNI: ...$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_86:
	.string "I suppose you paid special attention to\n"
	.string "the DRAGON MASTER from BLACKTHORN\l"
	.string "CITY. I doubt you've seen him before.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_87:
	.string "Alongside PRYCE and the GREAT MASTER\n"
	.string "from ECRUTEAK CITY, they are the 3 most\l"
	.string "powerful LEADERS in JOHTO, especially\l"
	.string "the DRAGON MASTER. I suspect he has a\l"
	.string "DEEP BOND PSEUDO-LEGENDARY on his\l"
	.string "team. If this were to be true, knowing\l"
	.string "its data would be crucial.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_88:
	.string "The three are living legends of the\n"
	.string "region, they are part of a dying breed\l"
	.string "and have shown that training POKÉMON\l"
	.string "is a true art. Despite our efforts to\l"
	.string "bring everything to our laboratories, I\l"
	.string "want to unite the best of both worlds\l"
	.string "before it's too late. In about 3 years,\l"
	.string "it will be impossible to find TRAINERS\l"
	.string "like them, even in this rural and\l"
	.string "traditional JOHTO.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_89:
	.string "But don't worry, {PLAYER}, time is\n"
	.string "what we have now. I know you'll manage\l"
	.string "to battle against the last 3 LEADERS,\l"
	.string "just as you've done so far.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_90:
	.string "For now, ANDRA is waiting for you to\n"
	.string "visit the upper floors of the JOHTO\l"
	.string "BASE. There, you'll see some of the\l"
	.string "progress we've made.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_91:
	.string "That's all, {PLAYER}. I'm glad to see\n"
	.string "you again, it's evident that your skills\l"
	.string "have improved.$"

GoldenrodRadioTowerP5_Primera_Reunion_move_1:
walk_up
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_2:
emote_exclamation_mark
face_down
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_3:
walk_in_place_down
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_4:
face_up
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_5:
walk_left
face_up
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_6:
face_down
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_7:
walk_left
walk_left
face_up
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_8:
walk_left
walk_left
walk_left
walk_up
walk_in_place_up
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_9:
face_right
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_10:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_11:
face_left
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_12:
walk_up
walk_right
walk_right
walk_right
walk_right
walk_down
walk_in_place_down
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_13:
face_left
walk_in_place_down
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_14:
walk_slow_down
walk_slow_down
walk_slow_right
walk_slow_right
walk_slow_down
walk_slow_right
step_end


GoldenrodRadioTowerP5_Primera_Reunion_move_15:
walk_in_place_left
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_16:
walk_in_place_up
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_17:
walk_in_place_right
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_18:
walk_slow_down
walk_in_place_down
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_19:
walk_slow_left
walk_in_place_down
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_20:
walk_slow_right
walk_in_place_down
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_21:
walk_slow_up
walk_in_place_down
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_22:
walk_slow_up
walk_in_place_up
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_23:
emote_exclamation_mark
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_24:
walk_slow_up
walk_slow_up
walk_slow_left
walk_slow_left
walk_slow_up
walk_slow_left
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_25:
walk_right
walk_right
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_26:
walk_down
walk_right
walk_in_place_right
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_27:
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_28:
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

GoldenrodRadioTowerP5_Primera_Reunion_move_29:
walk_in_place_up
walk_in_place_left
step_end

GoldenrodRadioTowerP5_Segunda_Reunion::
clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
clearflag FLAG_RECEIVED_SHOAL_SHELL_4
addobject 1
addobject 2
addobject 5
addobject 3
addobject 13
addobject 14
addobject 12
addobject 16
addobject 10
addobject 9
addobject 8
addobject 7
addobject 6
addobject 17
removeobject 4
removeobject 11
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Segunda_Reunion_Move_1
waitmovement 0x0
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Segunda_Reunion_Move_2
waitmovement 0x0
delay 15
applymovement 10, GoldenrodRadioTowerP5_Segunda_Reunion_Move_3
applymovement 16, GoldenrodRadioTowerP5_Segunda_Reunion_Move_4
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_1.1 MSGBOX_AUTOCLOSE
applymovement 16, GoldenrodRadioTowerP5_Segunda_Reunion_Move_5
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Segunda_Reunion_Move_5
applymovement 10, GoldenrodRadioTowerP5_Segunda_Reunion_Move_6
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_2 MSGBOX_AUTOCLOSE
applymovement 10, GoldenrodRadioTowerP5_Segunda_Reunion_Move_5
applymovement 9, GoldenrodRadioTowerP5_Segunda_Reunion_Move_3
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Segunda_Reunion_Move_7
waitmovement 0x0
applymovement 9, GoldenrodRadioTowerP5_Segunda_Reunion_Move_6
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_3 MSGBOX_AUTOCLOSE
applymovement 9, GoldenrodRadioTowerP5_Segunda_Reunion_Move_5
applymovement 8, GoldenrodRadioTowerP5_Segunda_Reunion_Move_3
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Segunda_Reunion_Move_9
waitmovement 0x0
applymovement 8, GoldenrodRadioTowerP5_Segunda_Reunion_Move_6
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_4 MSGBOX_AUTOCLOSE
applymovement 8, GoldenrodRadioTowerP5_Segunda_Reunion_Move_5
applymovement 7, GoldenrodRadioTowerP5_Segunda_Reunion_Move_3
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Segunda_Reunion_Move_9
waitmovement 0x0
applymovement 7, GoldenrodRadioTowerP5_Segunda_Reunion_Move_6
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_5 MSGBOX_AUTOCLOSE
applymovement 7, GoldenrodRadioTowerP5_Segunda_Reunion_Move_5
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Segunda_Reunion_Move_10
waitmovement 0x0
applymovement 6, GoldenrodRadioTowerP5_Segunda_Reunion_Move_3
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_6 MSGBOX_AUTOCLOSE
applymovement 6, GoldenrodRadioTowerP5_Segunda_Reunion_Move_11
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Segunda_Reunion_Move_12
waitmovement 0x0
applymovement 17, GoldenrodRadioTowerP5_Segunda_Reunion_Move_4
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Segunda_Reunion_Move_11
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_7 MSGBOX_AUTOCLOSE
applymovement 17, GoldenrodRadioTowerP5_Segunda_Reunion_Move_11
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Segunda_Reunion_Move_13
waitmovement 0x0
delay 20
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_8 MSGBOX_AUTOCLOSE
delay 30
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Segunda_Reunion_Move_14
waitmovement 0x0
delay 15
applymovement 1, GoldenrodRadioTowerP5_Segunda_Reunion_Move_15
waitmovement 0x0
delay 10
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, GoldenrodRadioTowerP5_Primera_Reunion_move_14
waitmovement 0x0
special RemoveCameraObject
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_10 MSGBOX_AUTOCLOSE
applymovement 1, GoldenrodRadioTowerP5_Segunda_Reunion_Move_11
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_11 MSGBOX_AUTOCLOSE
applymovement 1, GoldenrodRadioTowerP5_Segunda_Reunion_Move_15
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_13 MSGBOX_AUTOCLOSE
applymovement 16, GoldenrodRadioTowerP5_Segunda_Reunion_Move_16
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_14 MSGBOX_AUTOCLOSE
applymovement 17, GoldenrodRadioTowerP5_Segunda_Reunion_Move_17
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_15 MSGBOX_AUTOCLOSE
delay 20
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_16 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, GoldenrodRadioTowerP5_Segunda_Reunion_Move_18
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_17 MSGBOX_AUTOCLOSE
applymovement 1, GoldenrodRadioTowerP5_Segunda_Reunion_Move_19
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_18 MSGBOX_AUTOCLOSE
applymovement 1, GoldenrodRadioTowerP5_Segunda_Reunion_Move_4
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_19 MSGBOX_AUTOCLOSE
applymovement 1, GoldenrodRadioTowerP5_Segunda_Reunion_Move_3
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_20
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_20 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_15
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_21 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_21
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_22 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_22
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_23 MSGBOX_AUTOCLOSE
applymovement 1, GoldenrodRadioTowerP5_Segunda_Reunion_Move_11
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_24 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_4
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_25 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, GoldenrodRadioTowerP5_Segunda_Reunion_Move_23
waitmovement 0x0
applymovement 6, GoldenrodRadioTowerP5_Segunda_Reunion_Move_23
waitmovement 0x0
applymovement 8, GoldenrodRadioTowerP5_Segunda_Reunion_Move_23
waitmovement 0x0
applymovement 9, GoldenrodRadioTowerP5_Segunda_Reunion_Move_23
waitmovement 0x0
applymovement 10, GoldenrodRadioTowerP5_Segunda_Reunion_Move_23
waitmovement 0x0
applymovement 12, GoldenrodRadioTowerP5_Segunda_Reunion_Move_23
waitmovement 0x0
applymovement 3, GoldenrodRadioTowerP5_Segunda_Reunion_Move_23
waitmovement 0x0
delay 10
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_26 MSGBOX_AUTOCLOSE
applymovement 1, GoldenrodRadioTowerP5_Segunda_Reunion_Move_3
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_24
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_27 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_25
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_28 MSGBOX_AUTOCLOSE
applymovement 7, GoldenrodRadioTowerP5_Segunda_Reunion_Move_16
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_29 MSGBOX_AUTOCLOSE
applymovement 8, GoldenrodRadioTowerP5_Segunda_Reunion_Move_16
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_30 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_20
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_31 MSGBOX_AUTOCLOSE
delay 20
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_32 MSGBOX_AUTOCLOSE
delay 20
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_15
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_33 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_21
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_34 MSGBOX_AUTOCLOSE
delay 15
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_35 MSGBOX_AUTOCLOSE
delay 15
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_36 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_20
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_37 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_25
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_38 MSGBOX_AUTOCLOSE
delay 20
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_39 MSGBOX_AUTOCLOSE
delay 20
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_5
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_40 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_20
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_41 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_15
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_42 MSGBOX_AUTOCLOSE
delay 15
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_43 MSGBOX_AUTOCLOSE
applymovement 8, GoldenrodRadioTowerP5_Segunda_Reunion_Move_16
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_44 MSGBOX_AUTOCLOSE
applymovement 7, GoldenrodRadioTowerP5_Segunda_Reunion_Move_11
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_45 MSGBOX_AUTOCLOSE
applymovement 7, GoldenrodRadioTowerP5_Segunda_Reunion_Move_5
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_46 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_15
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_47 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_21
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_48 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_22
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_49 MSGBOX_AUTOCLOSE
applymovement 8, GoldenrodRadioTowerP5_Segunda_Reunion_Move_16
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_15
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_51 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_24
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_52 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_25
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_53 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_20
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_54 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 6, GoldenrodRadioTowerP5_Segunda_Reunion_Move_23
waitmovement 0x0
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_15
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_55 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 3, GoldenrodRadioTowerP5_Segunda_Reunion_Move_23
waitmovement 0x0
applymovement 3, GoldenrodRadioTowerP5_Segunda_Reunion_Move_11
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_56 MSGBOX_AUTOCLOSE
applymovement 3, GoldenrodRadioTowerP5_Segunda_Reunion_Move_3
applymovement 17, GoldenrodRadioTowerP5_Segunda_Reunion_Move_17
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_57 MSGBOX_AUTOCLOSE
applymovement 17, GoldenrodRadioTowerP5_Segunda_Reunion_Move_5
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_58 MSGBOX_AUTOCLOSE
delay 15
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_59 MSGBOX_AUTOCLOSE
applymovement 17, GoldenrodRadioTowerP5_Segunda_Reunion_Move_11
applymovement 7, GoldenrodRadioTowerP5_Segunda_Reunion_Move_16
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_60 MSGBOX_AUTOCLOSE
delay 10
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_60.1 MSGBOX_AUTOCLOSE
delay 20
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_61 MSGBOX_AUTOCLOSE
delay 20
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_21
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_62 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_5
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_63 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_22
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_64 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 9, GoldenrodRadioTowerP5_Segunda_Reunion_Move_23
applymovement 6, GoldenrodRadioTowerP5_Segunda_Reunion_Move_23
applymovement 10, GoldenrodRadioTowerP5_Segunda_Reunion_Move_23
waitmovement 0x0
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_24
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_65 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 8, GoldenrodRadioTowerP5_Segunda_Reunion_Move_23
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_66 MSGBOX_AUTOCLOSE
delay 10
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_67 MSGBOX_AUTOCLOSE
applymovement 14, GoldenrodRadioTowerP5_Segunda_Reunion_Move_4
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_68 MSGBOX_AUTOCLOSE
applymovement 7, GoldenrodRadioTowerP5_Segunda_Reunion_Move_16
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_69 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_25
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_70 MSGBOX_AUTOCLOSE
applymovement 1, GoldenrodRadioTowerP5_Segunda_Reunion_Move_11
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_71 MSGBOX_AUTOCLOSE
delay 15
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_72 MSGBOX_AUTOCLOSE
applymovement 1, GoldenrodRadioTowerP5_Segunda_Reunion_Move_3
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_73 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, GoldenrodRadioTowerP5_Segunda_Reunion_Move_17
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_74 MSGBOX_AUTOCLOSE
applymovement 5, GoldenrodRadioTowerP5_Segunda_Reunion_Move_15
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_75 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_5
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_76 MSGBOX_AUTOCLOSE
delay 20
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_77 MSGBOX_AUTOCLOSE
delay 20
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_3
applymovement 1, GoldenrodRadioTowerP5_Segunda_Reunion_Move_15
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_78 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
setflag FLAG_RECEIVED_SHOAL_SHELL_4
fadescreen 1
delay 20
removeobject 1
removeobject 7
removeobject 8
removeobject 9
removeobject 10
removeobject 6
removeobject 4
removeobject 11
removeobject 12
removeobject 13
removeobject 14
removeobject 17
removeobject 16
fadescreen 0
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, GoldenrodRadioTowerP5_Primera_Reunion_move_24
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Segunda_Reunion_Move_17
applymovement 3, GoldenrodRadioTowerP5_Segunda_Reunion_Move_26
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_27
applymovement 5, GoldenrodRadioTowerP5_Segunda_Reunion_Move_28
waitmovement 0x0
applymovement 5, GoldenrodRadioTowerP5_Segunda_Reunion_Move_5
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_79 MSGBOX_AUTOCLOSE
delay 15
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_80 MSGBOX_AUTOCLOSE
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_81 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_5
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.1 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_4
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.2 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_5
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 3, GoldenrodRadioTowerP5_Segunda_Reunion_Move_23
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.4 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_6
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.5 MSGBOX_AUTOCLOSE
applymovement 3, GoldenrodRadioTowerP5_Segunda_Reunion_Move_17
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.6 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_5
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.7 MSGBOX_AUTOCLOSE
delay 10
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.8 MSGBOX_AUTOCLOSE
applymovement 3, GoldenrodRadioTowerP5_Segunda_Reunion_Move_17
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.9 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, GoldenrodRadioTowerP5_Segunda_Reunion_Move_20
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_6
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_82 MSGBOX_AUTOCLOSE
delay 15
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_82.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_4
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_83 MSGBOX_AUTOCLOSE
applymovement 5, GoldenrodRadioTowerP5_Segunda_Reunion_Move_5
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_84 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_15
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_85 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodRadioTowerP5_Segunda_Reunion_Move_4
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_86 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
fadescreen 1
delay 20
removeobject 2
removeobject 5
fadescreen 0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodRadioTowerP5_Segunda_Reunion_Move_3
applymovement 3, GoldenrodRadioTowerP5_Segunda_Reunion_Move_5
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_87 MSGBOX_AUTOCLOSE
delay 20
applymovement 3, GoldenrodRadioTowerP5_Segunda_Reunion_Move_20
waitmovement 0x0
msgbox GoldenrodRadioTowerP5_Segunda_Reunion_texto_88 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
removeobject 3
fadescreen 0
clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
setflag FLAG_NUEVA_840
setvar VAR_UNUSED_0x40F7, 205
release
end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_28:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_left
walk_left
walk_left
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_27:
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_26:
walk_down
walk_right
walk_right
walk_right
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_25:
walk_slow_up
walk_in_place_down
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_24:
walk_slow_right
walk_in_place_down
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_23:
emote_exclamation_mark
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_22:
walk_slow_left
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_21:
walk_slow_down
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_20:
face_left
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_19:
walk_down
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_18:
walk_slow_up
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_17:
walk_in_place_right
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_16:
walk_in_place_up
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_15:
walk_in_place_down
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_14:
walk_slow_right
walk_slow_right
walk_slow_up
walk_slow_right
walk_in_place_down
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_13:
walk_slow_up
walk_slow_right
walk_slow_right
walk_in_place_up
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_12:
walk_slow_left
walk_slow_up
walk_slow_up
walk_slow_up
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_11:
face_right
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_10:
walk_slow_left
walk_slow_left
walk_slow_up
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_9:
walk_slow_left
walk_slow_left
face_up
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_8:
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_7:
walk_slow_left
face_up
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_6:
walk_in_place_down
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_5:
face_up
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_4:
walk_in_place_left
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_3:
face_down
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_1:
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_Move_2:
emote_exclamation_mark
face_right
step_end

GoldenrodRadioTowerP5_Segunda_Reunion_texto_1:
.string "MIGUEL: ¿Sorprendido de verme aquí?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_1.1:
	.string "¿Qué te ocurre? ¿Crees que no soy lo\n"
	.string "suficientemente importante ni tengo la\l"
	.string "jerarquía como para sentarme en esta\l"
	.string "mesa? Te creía más humilde, {PLAYER},\l"
	.string "puede que te lleves una sorpresa.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_2:
.string "AZUL: {PLAYER}, cuánto tiempo.\n"
	.string "Finalmente soy el LÍDER de CIUDAD\l"
	.string "VERDE, y LANCE es de nuevo el CAMPEÓN.\l"
	.string "Obviamente es solo un títere que está\l"
	.string "atado, puede que ese sea el peor\l"
	.string "castigo para alguien como LANCE.\l"
	.string "Espero que te vaya bien.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_3:
.string "FUJI: AGATHA se ha ido {PLAYER}, se\n"
	.string "ha ido junto a la antigua TORRE\l"
	.string "POKÉMON. Jamás volveremos a ver a su\l"
	.string "GENGAR ejecutar ese BOLA SOMBRA bajo\l"
	.string "sus paredes. ¿Este es el precio del\l"
	.string "progreso?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_4:
.string "BILL: Espera a que GIOVANNI hable de\n"
	.string "los nuevos prototipos y los STATS… Si\l"
	.string "por mi fuera, pasaría directamente a\l"
	.string "esa parte, ¡el resto son formalidades!$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_5:
.string "OAK: ¿No te cansas de seguir? A eso\n"
	.string "aspiras, ¿no? A continuar bailando y\l"
	.string "llenándote de experiencias el mayor\l"
	.string "tiempo posible, hasta que no puedas\l"
	.string "más. Si no, ¿qué ibas a hacer? ¿verdad?\l"
	.string "Pues más te vale, te queda demasiado\l"
	.string "por ver aún, joven {PLAYER}.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_6:
.string "LANCE: ¿Quién es este tipo? ¿Por qué…?\n"
	.string "¿Por qué sabe tanto acerca de ENTEI,\l"
	.string "RAIKOU y SUICUNE?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_7:
.string "EUSINE: ¡{PLAYER}! Jamás imaginé el\n"
	.string "alcance de tu organización. Créeme, con\l"
	.string "mis conocimientos y vuestros recursos,\l"
	.string "al fin podremos extraer la verdadera\l"
	.string "esencia de las BESTIAS DE JOHTO.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_8:
.string "ANDRA: …$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_9:
.string "PRESIDENTE: Damas y caballeros… Tengo\n"
	.string "el honor de estar de nuevo aquí, como\l"
	.string "anfitrión de la II CONFERENCIA DE\l"
	.string "TRIGAL.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_10:
.string "Primero de todo, veréis que ha habido un\n"
	.string "pequeño cambio en los aquí presentes.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_11:
.string "El GRAN MAESTRO de CIUDAD IRIS lleva\n"
	.string "meses desaparecido, los PENSADORES de\l"
	.string "la ciudad creen que HO-OH se lo llevó,\l"
	.string "tal y como siempre profetizó.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_12:
.string "Por otro lado, el GRAN MAESTRO de\n"
	.string "CIUDAD ENDRINO se negó a seguir siendo\l"
	.string "partícipe de esto. En sus propias\l"
	.string "palabras, el destino de JOHTO será\l"
	.string "ahora cosa nuestra.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_13:
.string "Podéis apreciar que estas dos bajas\n"
	.string "han sido rápidamente suplidas, a saber:$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_14:
.string "MIGUEL, experto en FÓSILES y principal\n"
	.string "colaborador de BILL.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_15:
.string "Y EUSINE, gran experto en las BESTIAS\n"
	.string "DE JOHTO. Conocedor de toda la cultura\l"
	.string "y tradición que envuelve a la región.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_16:
.string "MIGUEL: …$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_17:
.string "Ahora, caballeros, les pido que\n"
	.string "recapitulemos y echemos la vista\l"
	.string "atrás. Veamos todo lo que hemos\l"
	.string "logrado desde que se celebró la I\l"
	.string "CONFERENCIA DE TRIGAL, hace ya casi 1\l"
	.string "año.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_18:
.string "En estos momentos, la TORRE RADIO de\n"
	.string "LAVANDA está apunto de concluir su\l"
	.string "construcción en tiempo récord.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_19:
.string "Por otro lado, gracias a la reciente\n"
	.string "intervención del ADMIN.JEFE\l"
	.string "{PLAYER}, el trayecto TRIGAL-AZAFRÁN\l"
	.string "podrá ser inaugurado en breve\l"
	.string "sin más contratiempos.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_20:
.string "GIOVANNI: Muchas gracias, PRESIDENTE.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_21:
.string "Así es, estos eran nuestros dos\n"
	.string "principales objetivos materiales, y se\l"
	.string "han cumplido. Ahora, antes de pasar a\l"
	.string "temas más relevantes, me gustaría\l"
	.string "hablaros de la construcción de una\l"
	.string "nueva ZONA SAFARI.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_22:
.string "La de FUCSIA es historia. Que KANTO se\n"
	.string "haya abierto al resto del mundo ha\l"
	.string "jugado en su contra, el turismo de la\l"
	.string "región es casi nulo, y los habitantes de\l"
	.string "la misma están ahora más centrados en\l"
	.string "descubrir nuevos POKÉMON.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_23:
.string "Incluso KANGASKHAN está ya muy visto,\n"
	.string "sin mencionar los múltiples\l"
	.string "asentamientos de esta especie en el\l"
	.string "TÚNEL ROCA. Tantos que se ha vuelto\l"
	.string "imposible ocultarlos a las masas.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_24:
.string "PRESIDENTE: ¿Qué propones, GIOVANNI?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_25:
.string "GIOVANNI: Construir una nueva ZONA\n"
	.string "SAFARI, esta vez en la zona oeste de\l"
	.string "ORQUÍDEA.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_26:
.string "ANDRA Y {PLAYER} han visitado la\n"
	.string "zona, y es un auténtico paraíso. Lleno\l"
	.string "de POKÉMON exóticos y con esa pureza\l"
	.string "aún no corrompida por las masas.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_27:
.string "Sé de la existencia de ciertas zonas\n"
	.string "allí que sería mejor seguir\l"
	.string "manteniendo ocultas. Por ello, el\l"
	.string "camino que lleve a la nueva ZONA SAFARI\l"
	.string "estará exento de cualquier atisbo que\l"
	.string "pueda llevar a los turistas a acceder a\l"
	.string "dichas zonas.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_28:
.string "Con ello, obtendremos una base para\n"
	.string "financiar nuestros proyectos aún\l"
	.string "mayor, ofreciendo un servicio más que\l"
	.string "demandado para una región como JOHTO.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_29:
.string "OAK: Creo que ya es suficiente,\n"
	.string "deberíamos hablar de lo\l"
	.string "verdaderamente importante.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_30:
.string "BILL: ¡Exacto! ¡Los nuevos protot…!$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_31:
.string "GIOVANNI: Tienes razón OAK, hay que\n"
	.string "hablar sobre DEVON.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_32:
.string "BILL: ¿DEVON?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_33:
.string "GIOVANNI: Muchos conocéis la región de\n"
	.string "HOENN, hay allí una gran empresa,\l"
	.string "equivalente a SILPH en KANTO.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_34:
.string "Sobre el papel, su especialidad es la\n"
	.string "creación de POKÉ BALLS. MALLA BALL,\l"
	.string "TURNO BALL, ACOPIO BALL, NIDO BALL…\l"
	.string "todas ellas fueron creadas en SILPH.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_35:
.string "También inventaron un método de\n"
	.string "resurrección de FÓSILES, antes de que\l"
	.string "el LABORATORIO CANELA lo hiciera.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_36:
.string "BILL: Bobadas, tecnología básica que\n"
	.string "ya dominamos.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_37:
.string "GIOVANNI: Esta tecnología forma\n"
	.string "también parte de su superficie, BILL.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_38:
.string "DEVON, como nosotros, no hace públicos\n"
	.string "sus mayores avances. Tenemos pruebas\l"
	.string "que confirman esto, sabemos de primera\l"
	.string "mano que METAGROSS es un POKÉMON\l"
	.string "artificial, creado por ellos antes\l"
	.string "incluso de que tu querido PORYGON\l"
	.string "existiera. ¿Te parece esto suficiente,\l"
	.string "BILL?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_39:
.string "BILL: …$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_40:
.string "GIOVANNI: Es de esperar que a día de\n"
	.string "hoy, DEVON sea más poderosa que\l"
	.string "cuando creó a METAGROSS.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_41:
.string "ANDRA y {PLAYER} ya han tenido\n"
	.string "encuentros con lo que parecen ser\l"
	.string "EJECUTIVOS de la organización. Uno de\l"
	.string "ellos en la propia JOHTO, recolectando\l"
	.string "información de POKÉMON singulares.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_42:
.string "Esto me hace pensar que, al igual que\n"
	.string "nosotros, tienen como objetivo la\l"
	.string "creación de prototipos que marquen\l"
	.string "una diferencia respecto al resto de\l"
	.string "POKÉMON que conocemos.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_43:
.string "Con qué fin, no lo sé, deberemos\n"
	.string "descubrirlo.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_44:
.string "BILL: Si los tienen, ¡jamás igualarán el\n"
	.string "poder de los nuestros!$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_45:
.string "OAK: Sé cauto, BILL.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_46:
.string "GIOVANNI: Así es, hemos hecho notables\n"
	.string "avances en el ámbito de la mejora del\l"
	.string "rendimiento de un POKÉMON.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_47:
.string "Esto nos ha llevado a hacer una\n"
	.string "distinción de 3 niveles en los\l"
	.string "prototipos obtenidos.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_48:
.string "En primer lugar, los prototipos de nivel\n"
	.string "I, comprenden un rango de STATS BASE\l"
	.string "que van entre los 570 y los 660 STATS\l"
	.string "BASE.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_49:
.string "En este grupo están la inmensa mayoría\n"
	.string "de prototipos que hemos creado hasta\l"
	.string "la fecha: NIDOKING-X, PORYGON3,\l"
	.string "MAGMORTAR-Y…$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_51:
.string "BILL: Y ahora las mega piedras de\n"
	.string "PORYGON-Z.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_52:
.string "GIOVANNI: Exacto, llevando su límite a\n"
	.string "los 645 STATS BASE, 30 puntos más que\l"
	.string "PORYGON3, aunque con el inconveniente\l"
	.string "de portar una MEGAPIEDRA por objeto.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_53:
.string "Después tenemos los prototipos de\n"
	.string "nivel II, aquellos que van desde los\l"
	.string "660 STATS BASE, hasta los 780…$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_54:
.string "Aquí, y gracias a la reciente\n"
	.string "incorporación de EUSINE a nuestro\l"
	.string "equipo, tenemos el honor de incluir\l"
	.string "futuras formas optimizadas de los\l"
	.string "PERROS LEGENDARIOS.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_55:
.string "Se trata de un enorme avance, ya que es\n"
	.string "lo más cercano a simular el FUERTE\l"
	.string "VÍNCULO en condiciones de\l"
	.string "LABORATORIO.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_56:
.string "ANDRA: ¿Cómo es eso posible?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_57:
.string "EUSINE: Hay una conexión entre estos\n"
	.string "POKÉMON y los 3 FUERTE VÍNCULO del\l"
	.string "GRAN MAESTRO que enfrentásteis. Bajo\l"
	.string "la exposición adecuada, las BESTIAS de\l"
	.string "JOHTO pasarían por un proceso similar\l"
	.string "al que se sometieron los JOLTEON,\l"
	.string "FLAREON y VAPOREON del GRAN MAESTRO.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_58:
.string "Gracias a simular esto, y a aprovechar\n"
	.string "este regalo de HO-OH, hemos logrado\l"
	.string "engañar a la naturaleza para obtener\l"
	.string "sus frutos prohibidos.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_59:
.string "ANDRA: Y así convertir lo sagrado en\n"
	.string "profano.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_60:
.string "OAK: ¡Jah! ¿Ahora que te acercas al\n"
	.string "límite real es cuando sientes vértigo?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_60.1:
.string "Además, más que nada lo sagrado merece\n"
	.string "realmente ser puesto a prueba, ANDRA.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_61:
.string "ANDRA: …$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_62:
.string "GIOVANNI: Esto supone un +110 en\n"
	.string "STATS BASE, lo que les mete de lleno en\l"
	.string "los prototipos de nivel II, con un total\l"
	.string "de 690, pero…$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_63:
.string "Nuestro mayor avance ha sido el que\n"
	.string "marca el límite de los prototipos de\l"
	.string "nivel II, con 780 STATS BASE…$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_64:
.string "Logramos sintetizar una MEGA PIEDRA\n"
	.string "que actuara sobre MEWTWO, amplificando\l"
	.string "aún más si cabe su poder ofensivo.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_65:
.string "Gracias a estudiar el VOLCARONA-& de\n"
	.string "MIRTO, pudimos encontrar la forma de\l"
	.string "incrementar aún más ese ATAQUE\l"
	.string "ESPECIAL, para así establecer un\l"
	.string "nuevo récord: 194 puntos.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_66:
.string "BILL: ¡No! ¡Tiene 9 puntos más que mi\n"
	.string "PORYGONZ-Y!$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_67:
.string "GIOVANNI: También es más rápido, y con\n"
	.string "mejor DEF.ESPECIAL. El coste de\l"
	.string "oportunidad sin embargo hizo que su\l"
	.string "DEFENSA cayera sin remedio. Toda\l"
	.string "especialización conlleva\l"
	.string "inevitablemente la disminución de\l"
	.string "alguna otra variable.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_68:
.string "ELM: Por el momento… trabajaremos para\n"
	.string "que esa variable sea el ATAQUE, que de\l"
	.string "nada le sirve. Esa aberración tiene más\l"
	.string "ATAQUE que un TYRANITAR y lo tiene en\l"
	.string "la reserva, a lo que hemos llegado…$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_69:
.string "OAK: Su poder en conjunto es abrumador,\n"
	.string "cabe esperar que de una fuerza tan\l"
	.string "incontenible, la energía salga por\l"
	.string "lugares no tan eficientes.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_70:
.string "GIOVANNI: Por ello hemos creado la\n"
	.string "nueva TORRE RADIO, sus ondas nos\l"
	.string "llevarán al siguiente nivel: eficiencia\l"
	.string "combinada con poder desmedido.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_71:
.string "PRESIDENTE: ¿Qué hay de los prototipos\n"
	.string "de nivel III?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_72:
.string "GIOVANNI: Me temo que aún están en\n"
	.string "fase experimental, es pronto para\l"
	.string "hablar de ellos… tal vez en la III\l"
	.string "CONFERENCIA DE TRIGAL...$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_73:
.string "PRESIDENTE: ¿Alguna pregunta?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_74:
.string "LANCE: Hay un puesto vacante en el\n"
	.string "ALTO MANDO.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_75:
.string "ATLAS: Así es, AGATHA. Se fue justo\n"
	.string "antes de empezar la demolición de la\l"
	.string "TORRE POKÉMON, y no ha vuelto a dar\l"
	.string "señales.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_76:
.string "GIOVANNI: Era de esperar. Por fortuna\n"
	.string "tenemos al sustituto perfecto: KOGA\l"
	.string "formará parte del ALTO MANDO. Su hija\l"
	.string "ya está preparada para tomar el relevo\l"
	.string "en FUCSIA. Es un notable ENTRENADOR, y\l"
	.string "siempre nos ha sido leal.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_77:
.string "LANCE: …$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_78:
.string "PRESIDENTE: Damos entonces por\n"
	.string "finalizada la II CONFERENCIA DE\l"
	.string "TRIGAL. Agradezco a todos su\l"
	.string "presencia, y espero poder celebrar\l"
	.string "pronto una nueva reunión, bajo una\l"
	.string "KANTO y JOHTO ya consolidadas como\l"
	.string "unión. Eso es todo, caballeros.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_79:
.string "ATLAS: Debería haber dado más detalles\n"
	.string "acerca de los prototipos de nivel III.\l"
	.string "Hubiera supuesto una cura de humildad\l"
	.string "para BILL.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_80:
.string "GIOVANNI: No es conveniente sacar a la\n"
	.string "luz semejantes números… aún. Nadie\l"
	.string "está preparado para asimilar cifras\l"
	.string "superiores a los 800 STATS BASE, al\l"
	.string "menos en el contexto actual.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81:
.string "ANDRA: Oh…$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.1:
.string "GIOVANNI: ANDRA, {PLAYER}... Tengo\n"
	.string "buenas noticias, ¿recordáis la PIEDRA\l"
	.string "SAGRADA que obtuvísteis en una de\l"
	.string "vuestras misiones?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.2:
.string "ANDRA: Claro... Era algo muy especial.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.3:
.string "GIOVANNI: Tal y como os dije, ATLAS fue\n"
	.string "a investigar y logró encontrar una.\l"
	.string "Nuestros científicos hicieron el resto\l"
	.string "en tiempo récord.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.4:
.string "ANDRA: ¿A qué se refiere exactamente?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.5:
.string "GIOVANNI: La PIEDRA DORADA ha podido\n"
	.string "ser producida en masa, y está lista\l"
	.string "para lanzarse a nuestro mercado...\l"
	.string "privado.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.6:
.string "ANDRA: Entonces... ¿Todos tendrán\n"
	.string "acceso a ella?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.7:
.string "GIOVANNI: No, no todos. La PIEDRA\n"
	.string "DORADA estará a la venta en uno de los\l"
	.string "pisos superiores de la TORRE RADIO\l"
	.string "LAVANDA. De modo que... únicamente los\l"
	.string "ROCKET de ALTO RANGO en adelante\l"
	.string "podrán adquirirla.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.8:
.string "Además, de la TORRE RADIO LAVANDA\n"
	.string "quería hablaros precisamente.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.9:
.string "ANDRA: ¿Es nuestro próximo destino?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_82:
.string "GIOVANNI: Exacto, ANDRA. ¡Me gustaría \n"
	.string "que ambos visitárais la nueva\l"
	.string "TORRE RADIO de LAVANDA! Ha sido\l"
	.string "construida en tiempo récord, y, aunque\l"
	.string "aún no está todo, tiene lo esencial\l"
	.string "para que os hagáis una idea de lo que\l"
	.string "se viene en el futuro.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_82.1:
.string "Aún no está del todo terminada por\n"
	.string "dentro, pero pronto lo estará.\l"
	.string "Entretanto, os recomiendo revisitar\l"
	.string "PUEBLO LAVANDA y... ver de primera mano\l"
	.string "el nuevo lavado de cara que le hemos\l"
	.string "hecho.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_83:
.string "ANDRA: ...no fallaré en esa cita con\n"
	.string "la historia...$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_84:
.string "ATLAS: Nosotros investigaremos sobre\n"
	.string "DEVON, debemos convocar una reunión\l"
	.string "con OAK y BLAINE inmediatamente.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_85:
.string "GIOVANNI: Así es.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_86:
.string "Estamos en contacto…$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_87:
.string "ANDRA: Ya lo has oído, {PLAYER}, nos\n"
	.string "vemos en TORRE POKÉM…$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_88:
	.string "…TORRE DE RADIO LAVANDA. Se hará\n"
	.string "extraño no volver a ver la original, ¿no\l"
	.string "crees?$"
