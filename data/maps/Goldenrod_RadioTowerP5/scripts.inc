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
.string "LANCE: {PAUSE 25}…{PAUSE 25}$"

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
.string "OAK: {PAUSE 25}…{PAUSE 25}$"

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
.string "FUJI: {PAUSE 25}…{PAUSE 25}$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_46:
	.string "GIOVANNI: FUJI has already told me\n"
	.string "that it's time to shake things up in the\l"
	.string "town. It's not the right place for the\l"
	.string "few remaining CUBONE, who will be\l"
	.string "relocated to ROCK TUNNEL, which is more\l"
	.string "suitable for them. Meanwhile, a new\l"
	.string "underground GRAVEYARD will be built\l"
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
.string "OAK: {PAUSE 25}…{PAUSE 25}$"

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
.string "BILL: {PAUSE 25}…{PAUSE 25}$"

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
.string "GIOVANNI: {PAUSE 25}…{PAUSE 25}$"

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
.string "MIGUEL: Surprised to see me here?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_1.1:
	.string "What's the matter with you? Do you\n"
	.string "think I'm not important enough or don't\l"
	.string "have the hierarchy to sit at this\l"
	.string "table? I thought you were more humble,\l"
	.string "{PLAYER}, you might be surprised.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_2:
	.string "BLUE: {PLAYER}, long time no see. I'm\n"
	.string "finally the LEADER of VIRIDIAN CITY,\l"
	.string "and LANCE is once again the CHAMPION.\l"
	.string "Obviously, he's just a puppet on a\l"
	.string "string now, perhaps that's the worst\l"
	.string "punishment for someone like LANCE. I\l"
	.string "hope things go well for you.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_3:
	.string "FUJI: AGATHA has left, {PLAYER},\n"
	.string "she's gone along with the old POKÉMON\l"
	.string "TOWER. We'll never see her GENGAR\l"
	.string "perform that SHADOW BALL beneath its\l"
	.string "walls again. Is this the price of\l"
	.string "progress?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_4:
	.string "BILL: Wait for GIOVANNI to talk about\n"
	.string "the new prototypes and the STATS… If\l"
	.string "it were up to me, I'd skip straight to\l"
	.string "that part; the rest is just formalities!$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_5:
	.string "OAK: Don't you ever tire of keeping\n"
	.string "going? Those are your goals, right? To\l"
	.string "keep dancing and soaking up\l"
	.string "experiences for as long as possible,\l"
	.string "until you can't anymore. Otherwise, what\l"
	.string "else would you do, right? Well, you\l"
	.string "better, you still have so much left to\l"
	.string "see, young {PLAYER}.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_6:
	.string "LANCE: Who is this guy? Why…? Why does\n"
	.string "he know so much about ENTEI, RAIKOU\l"
	.string "and SUICUNE?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_7:
	.string "EUSINE: {PLAYER}! I never imagined\n"
	.string "the extent of your organization.\l"
	.string "Believe me, with my knowledge and your\l"
	.string "resources, we will finally be able to\l"
	.string "extract the true essence of the JOHTO\l"
	.string "BEASTS.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_8:
.string "ANDRA: …$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_9:
	.string "DIRECTOR: Ladies and gentleman… I have\n"
	.string "the honor of being here once again, as\l"
	.string "the host of the II GOLDENROD\l"
	.string "CONFERENCE.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_10:
	.string "First of all, you'll notice there has\n"
	.string "been a small change in those present\l"
	.string "here.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_11:
	.string "The GRAND MASTER of ECRUTEAK CITY has\n"
	.string "been missing for months; the sages of\l"
	.string "the city believe that HO-OH took him,\l"
	.string "just as it was always prophesied.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_12:
	.string "On the other hand, the GRAND MASTER of\n"
	.string "BLACKTHORN CITY refused to continue\l"
	.string "being a part of this. In his own words,\l"
	.string "the fate of JOHTO will now be in our\l"
	.string "hands.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_13:
	.string "You can see that these two vacancies\n"
	.string "have been quickly replaced,\l"
	.string "specifically:$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_14:
	.string "MIGUEL, considered a FOSSILS expert,\n"
	.string "and BILL's main collaborator.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_15:
	.string "And EUSINE, a great expert in the JOHTO\n"
	.string "BEASTS. Knowledgeable about all the\l"
	.string "culture and tradition surrounding the\l"
	.string "region.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_16:
.string "MIGUEL: …$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_17:
	.string "Now, gentlemen, I ask that we recap and\n"
	.string "look back. Let's see everything we've\l"
	.string "achieved since the I GOLDENROD\l"
	.string "CONFERENCE, almost a year ago.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_18:
	.string "At this moment, the LAVENDER TOWN\n"
	.string "RADIO TOWER is about to complete its\l"
	.string "construction in record time.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_19:
	.string "Furthermore, due to the recent\n"
	.string "intervention of CHIEF ADMIN.\l"
	.string "{PLAYER}, the GOLDENROD-SAFFRON\l"
	.string "route will soon be inaugurated without\l"
	.string "any further obstacles.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_20:
.string "GIOVANNI: Thank you so much, DIRECTOR.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_21:
	.string "Indeed, these were our two main\n"
	.string "material goals, and they have been\l"
	.string "achieved. Now, before moving on to more\l"
	.string "relevant topics, I would like to talk to\l"
	.string "you about the construction of a new\l"
	.string "SAFARI ZONE.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_22:
	.string "The one in FUCHSIA wont work anymore.\n"
	.string "KANTO's opening to the rest of the\l"
	.string "world has played against it; tourism in\l"
	.string "the region is nearly non-existent, and\l"
	.string "its inhabitants are now more focused on\l"
	.string "discovering new POKÉMON.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_23:
	.string "Even KANGASKHAN has become overly\n"
	.string "familiar, not to mention the numerous\l"
	.string "settlements of this species in ROCK\l"
	.string "TUNNEL. So many that it has become\l"
	.string "impossible to hide them from the\l"
	.string "masses.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_24:
.string "DIRECTOR: What do you propose, GIOVANNI?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_25:
	.string "GIOVANNI: Building a new SAFARI ZONE,\n"
	.string "this time in the western area of\l"
	.string "CIANWOOD.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_26:
	.string "ANDRA and {PLAYER} have explored the\n"
	.string "area, and it's a true paradise. Full of\l"
	.string "exotic POKÉMON and with that purity\l"
	.string "still untouched by the people.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_27:
	.string "I am aware of the existence of certain\n"
	.string "areas there that would be better kept\l"
	.string "hidden. Therefore, the path leading to\l"
	.string "the new SAFARI ZONE will be free of any\l"
	.string "hint that could lead tourists to access\l"
	.string "those areas.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_28:
	.string "This will provide us a basis to finance\n"
	.string "our projects even more, offering a\l"
	.string "highly sought-after service for a\l"
	.string "region like JOHTO.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_29:
	.string "OAK: I think that is enough, we must\n"
	.string "talk about the truly important matters.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_30:
.string "BILL: Yes! The new prototy…!$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_31:
	.string "GIOVANNI: You're right OAK, we must\n"
	.string "talk about DEVON.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_32:
.string "BILL: DEVON?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_33:
	.string "GIOVANNI: Many of you are familiar with\n"
	.string "the HOENN region, where there is a large\l"
	.string "company, equivalent to SILPH in KANTO.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_34:
	.string "Theoretically, their specialty lies in\n"
	.string "the creation of POKÉ BALLS. NET BALL,\l"
	.string "TIMER BALL, REPEAT BALL, NEST BALL… all\l"
	.string "of them were created at SILPH.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_35:
	.string "They also invented a method for\n"
	.string "reviving FOSSILS, before the CINNABAR\l"
	.string "LABORATORY did.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_36:
	.string "BILL: Nonsense, basic technology that\n"
	.string "we've already mastered.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_37:
	.string "GIOVANNI: That technology is also\n"
	.string "integrated into their operations, BILL.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_38:
	.string "DEVON, like us, does not make its major\n"
	.string "advancements public. We have evidence\l"
	.string "confirming this; we know firsthand that\l"
	.string "METAGROSS is an artificial POKÉMON\l"
	.string "created by them even before your\l"
	.string "beloved PORYGON existed. Is this\l"
	.string "enough for you, BILL?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_39:
.string "BILL: …$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_40:
	.string "GIOVANNI: It's to be expected that\n"
	.string "today, DEVON is more powerful than when\l"
	.string "it created METAGROSS.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_41:
	.string "ANDRA and {PLAYER} have already had\n"
	.string "encounters with what seem to be\l"
	.string "executives of the organization. One of\l"
	.string "them in JOHTO itself, gathering\l"
	.string "information on unique POKÉMON.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_42:
	.string "This leads me to believe that, just like\n"
	.string "us, they aim to create prototypes that\l"
	.string "make a difference compared to the rest\l"
	.string "of the POKÉMON we know.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_43:
	.string "What are their goals?, I don't have any\n"
	.string "idea, we must discover it.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_44:
	.string "BILL: If they have them, they will never\n"
	.string "match the power of ours!$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_45:
.string "OAK: Be cautious, BILL.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_46:
	.string "GIOVANNI: Indeed, we have made\n"
	.string "significant advancements in enhancing\l"
	.string "POKÉMON's performance.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_47:
	.string "This has led us to make a three-tier\n"
	.string "distinction in the prototypes obtained.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_48:
	.string "Firstly, level I prototypes encompass a\n"
	.string "range of BASE STATS between 570 and\l"
	.string "660 BASE STATS…$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_49:
	.string "In this group, the vast majority of\n"
	.string "prototypes we have created to date are\l"
	.string "included: NIDOKING-X, PORYGON3,\l"
	.string "MAGMORTAR-Y…$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_51:
	.string "BILL: And now the MEGA STONE of\n"
	.string "PORYGON-Z.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_52:
	.string "GIOVANNI: Exactly, pushing its limit to\n"
	.string "645 BASE STATS, 30 points more than\l"
	.string "PORYGON3, albeit with the\l"
	.string "inconvenience of carrying a MEGA STONE\l"
	.string "as an item.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_53:
	.string "Then we have the level II prototypes,\n"
	.string "those ranging from 660 BASE STATS to\l"
	.string "780…$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_54:
	.string "In this category, and with the recent\n"
	.string "addition of EUSINE to our team, we are\l"
	.string "honored to include future optimized\l"
	.string "forms of the LEGENDARY BEASTS.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_55:
	.string "This is a huge breakthrough, as it is\n"
	.string "the closest thing to simulating the\l"
	.string "DEEP BOND under LABORATORY conditions.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_56:
.string "ANDRA: How is that possible?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_57:
	.string "EUSINE: There is a connection between\n"
	.string "these POKÉMON and the 3 DEEP BOND of\l"
	.string "the GRAND MASTER you battled. Under\l"
	.string "the proper exposure, the JOHTO BEASTS\l"
	.string "would undergo a similar process to what\l"
	.string "the GRAND MASTER's JOLTEON, FLAREON,\l"
	.string "and VAPOREON went through.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_58:
	.string "By simulating this and seizing this gift\n"
	.string "from HO-OH, we have succeeded in\l"
	.string "deceiving nature to obtain its\l"
	.string "forbidden fruits.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_59:
	.string "ANDRA: And so that way turn sacred into\n"
	.string "profane.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_60:
	.string "OAK: Hah! Now when you get closer to\n"
	.string "the real limit is when you feel the\l"
	.string "vertigo?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_60.1:
	.string "Moreover, above all, what is sacred\n"
	.string "truly deserves to be tested, ANDRA.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_61:
.string "ANDRA: …$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_62:
	.string "GIOVANNI: This results in a +110 in\n"
	.string "BASE STATS, which plunges them directly\l"
	.string "into level II prototypes, with a total\l"
	.string "of 690, but…$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_63:
	.string "Our most significant advancement has\n"
	.string "been the one that establishes the limit\l"
	.string "for level II prototypes, at 780 BASE\l"
	.string "STATS…$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_64:
	.string "We managed to synthesize a MEGA STONE\n"
	.string "that would act on MEWTWO, further\l"
	.string "amplifying its offensive power.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_65:
	.string "Thanks to studying ALDER's\n"
	.string "VOLCARONA-&, we were able to find a way\l"
	.string "to further increase its SPECIAL\l"
	.string "ATTACK, thus setting a new record: 194\l"
	.string "points.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_66:
	.string "BILL: No! It has 9 points more than my\n"
	.string "PORYGONZ-Y!$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_67:
	.string "GIOVANNI: It's also faster, with better\n"
	.string "SPECIAL DEFENSE. However, the\l"
	.string "opportunity cost resulted in its\l"
	.string "DEFENSE irreversibly decreasing. Every\l"
	.string "specialization inevitably entails the\l"
	.string "decrease of some other variable.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_68:
	.string "ELM: Just for a while… we'll work to make\n"
	.string "that variable its ATTACK, which serves\l"
	.string "no purpose. That aberration has more\l"
	.string "ATTACK than a TYRANITAR, and it's being\l"
	.string "kept in reserve, what have we\l"
	.string "descended to…$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_69:
	.string "OAK: Its combined power is\n"
	.string "overwhelming; it's to be expected that\l"
	.string "from such uncontrollable force, energy\l"
	.string "will seep through less efficient\l"
	.string "channels.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_70:
	.string "GIOVANNI: Hence, we have created the\n"
	.string "new RADIO TOWER; its waves will take us\l"
	.string "to the next level: efficiency combined\l"
	.string "with unrestrained power.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_71:
	.string "DIRECTOR: What about the level III\n"
	.string "prototypes?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_72:
	.string "GIOVANNI: I'm afraid they're still in an\n"
	.string "experimental phase; it's too early to\l"
	.string "discuss them… perhaps at the III\l"
	.string "GOLDENROD CONFERENCE…$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_73:
.string "DIRECTOR: Any doubt?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_74:
	.string "LANCE: There's a vacant position in the\n"
	.string "ELITE FOUR.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_75:
	.string "ARCHER: That's correct, AGATHA. She\n"
	.string "left just before the demolition of the\l"
	.string "POKÉMON TOWER began, and she hasn't\l"
	.string "been heard from since.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_76:
	.string "GIOVANNI: It was predictable.\n"
	.string "Thankfully, we have the ideal\l"
	.string "replacement: KOGA will be part of the\l"
	.string "ELITE FOUR. His daughter is already\l"
	.string "prepared to succeed in FUCHSIA. He is a\l"
	.string "notable TRAINER, and he has always\l"
	.string "been loyal to us.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_77:
.string "LANCE: …$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_78:
	.string "DIRECTOR: We hereby conclude the II\n"
	.string "GOLDENROD CONFERENCE. I thank\l"
	.string "everyone for their presence and hope\l"
	.string "to soon hold a new meeting, with a\l"
	.string "consolidated union between KANTO and\l"
	.string "JOHTO. That's all, gentlemen.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_79:
	.string "ARCHER: You should have provided more\n"
	.string "details about the level III prototypes,\l"
	.string "sir. It would have been a reality check\l"
	.string "for BILL.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_80:
	.string "GIOVANNI: Revealing such numbers\n"
	.string "wouldn't be wise… not yet. Nobody is\l"
	.string "ready to comprehend figures exceeding\l"
	.string "800 BASE STATS, at least not in the\l"
	.string "current context.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81:
.string "ANDRA: Oh…$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.1:
	.string "GIOVANNI: ANDRA, {PLAYER}… I have\n"
	.string "good news, remember the GOLDEN STONE\l"
	.string "you obtained on one of your missions?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.2:
	.string "ANDRA: Of course… It was something\n"
	.string "very special.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.3:
	.string "GIOVANNI: Just as I said, ARCHER went\n"
	.string "to investigate and managed to find one.\l"
	.string "Our scientists did the rest in record\l"
	.string "time.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.4:
.string "ANDRA: What do you mean exactly?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.5:
	.string "GIOVANNI: The GOLDEN STONE has been\n"
	.string "successfully mass-produced and is\l"
	.string "ready to be launched into our… private\l"
	.string "market.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.6:
	.string "ANDRA: So… everyone will have access to\n"
	.string "it?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.7:
	.string "GIOVANNI: No, not everyone. The GOLDEN\n"
	.string "STONE will be available for purchase on\l"
	.string "one of the upper floors of the\l"
	.string "LAVENDER RADIO TOWER. Therefore… only\l"
	.string "high-ranking ROCKETS and beyond will be\l"
	.string "able to acquire it.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.8:
	.string "Furthermore, I wanted to specifically\n"
	.string "talk about the LAVENDER RADIO TOWER.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.9:
.string "ANDRA: Is that our next destination?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_82:
	.string "GIOVANNI: Exactly, ANDRA. I would like\n"
	.string "both of you to visit the new LAVENDER\l"
	.string "RADIO TOWER! It has been constructed\l"
	.string "in record time, and although everything\l"
	.string "isn't ready yet, it has the essentials\l"
	.string "for you to get an idea of what's coming\l"
	.string "in the future.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_82.1:
	.string "It's not completely finished inside yet,\n"
	.string "but it will be soon. In the meantime, I\l"
	.string "recommend revisiting LAVENDER TOWN\l"
	.string "and… seeing firsthand the new makeover\l"
	.string "we've given it.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_83:
	.string "ANDRA: … I won't miss this date with\n"
	.string "history …$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_84:
	.string "ARCHER: We'll investigate DEVON; we\n"
	.string "need to convene a meeting with OAK and\l"
	.string "BLAINE immediately.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_85:
.string "GIOVANNI: Indeed.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_86:
.string "We are in contact…$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_87:
	.string "ANDRA: You've already heard it,\n"
	.string "{PLAYER}, I see you at POKÉMON TOW…$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_88:
	.string "… LAVENDER RADIO TOWER. It will be\n"
	.string "strange not to see the original one\l"
	.string "again, don't you think?$"
