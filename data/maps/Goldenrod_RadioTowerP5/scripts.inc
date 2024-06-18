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
.string "AZUL: {PLAYER}, no podías faltar a\n"
	.string "esta reunión.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_2:
.string "LANCE va a tomar de nuevo el\n"
	.string "título de CAMPEÓN, y GIOVANNI\l"
	.string "delegará en mí el control del\l"
	.string "GIMNASIO de CIUDAD VERDE, junto\l"
	.string "con su ALMACÉN SUBTERRÁNEO.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_3:
.string "Ya te lo dije, {PLAYER}, lo tuyo era\n"
	.string "explorar nuevas regiones, hacerte\l"
	.string "el mejor ENTRENADOR posible, y\l"
	.string "finalmente, aquí estás,\l"
	.string "descubriendo también los límites\l"
	.string "de JOHTO. Si por algún casual\l"
	.string "pasas por el MT.PLATEADO, espero\l"
	.string "que vuelvas a derrotar a ROJO, por\l"
	.string "si acaso.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_4:
.string "FUJI: {PLAYER}, ¿no?\n"
	.string "Así es, ya me han liberado.\l"
	.string "Contigo quería yo hablar.\l"
	.string "Lo que hiciste en TORRE POKÉMON\l"
	.string "entregándome al CUBONE fue muy\l"
	.string "noble por tu parte. Gracias a ese\l"
	.string "gesto cambió la opinión que tenía\l"
	.string "del TEAM ROCKET. Vi que esos\l"
	.string "pobres diablos que mataron a\l"
	.string "MAROWAK solo fueron víctimas de su\l"
	.string "ignorancia, GIOVANNI ya me dejó\l"
	.string "claro que les impuso un castigo\l"
	.string "ejemplar por tal atrocidad.\l"
	.string "En cambio, los que estáis arriba\l"
	.string "sabéis el verdadero propósito del\l"
	.string "TEAM ROCKET, ahora yo también lo\l"
	.string "sé.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_5:
.string "BILL: Mira a quién tenemos aquí.\n"
	.string "De vulgar ladrón, a ROCKET de ALTO\l"
	.string "RANGO, EJECUTIVO, ADMIN.JEFE y\l"
	.string "ahora se sienta en la misma mesa\l"
	.string "que las 15 personas más influyentes\l"
	.string "de todo KANTO-JOHTO.\l"
	.string "Tengo pendiente un nuevo combate\l"
	.string "contigo, {PLAYER}. Esta vez mis\l"
	.string "nuevos juguetes serán demasiado,\l"
	.string "incluso para ti.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_6:
.string "OAK: ¡Eh!\n"
	.string "¡{PLAYER}!\l"
	.string "¡Bienvenido al mundo de los\l"
	.string "POKÉMON!\l"
	.string "¿No querías conocerlo?\l"
	.string "¡Pues aquí tienes la realidad!\l"
	.string "¡15 individuos repartiéndose 2\l"
	.string "regiones cual porción de tarta!$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_7:
.string "Has deshonrado a nuestro clan,\n"
	.string "LANCE, me averguenzo de haberte\l"
	.string "instruido en el noble arte de\l"
	.string "entrenar al tipo más antiguo y\l"
	.string "sagrado. Cuando esto acabe, no\l"
	.string "quiero volver a ver tu cara por\l"
	.string "CIUDAD ENDRINO, ¿me entiendes?$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_8:
.string "LANCE: {PAUSE 15}…{PAUSE 15}$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_9:
.string "ANDRA: ¡Vamos, {PLAYER}!\n"
	.string "¡Siempre tarde, igual que en la\l"
	.string "charla de bienvenida de ATLAS!$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_10:
.string "PRESIDENTE: Muy bien, damas y\n"
	.string "caballeros, espero que sean todos\l"
	.string "conscientes de los esfuerzos que\l"
	.string "hemos hecho para mantener la\l"
	.string "confidencialidad de esta reunión.\l"
	.string "Todo lo que aquí hablemos,\l"
	.string "planeemos o discutamos quedará\l"
	.string "únicamente entre los aquí\l"
	.string "presentes, a saber:$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_11:
.string "GIOVANNI, LÍDER del TEAM ROCKET,\n"
	.string "organización que a día de hoy\l"
	.string "controla el gobierno de KANTO y el\l"
	.string "campeonato de la LIGA POKÉMON, y\l"
	.string "EX-CAMPEÓN de KANTO.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_12:
.string "ATLAS, ADMINISTRADOR JEFE del TEAM\n"
	.string "ROCKET, mano derecha de GIOVANNI y\l"
	.string "JEFE ROCKET en ISLAS SETE.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_13:
.string "El PRESIDENTE de SILPH, la empresa\n"
	.string "más exitosa de KANTO, colaboradora\l"
	.string "del TEAM ROCKET.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_14:
.string "El PROFESOR ELM, el investigador\n"
	.string "más relevante de JOHTO, conocedor\l"
	.string "de toda su fauna y flora.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_15:
.string "FREDO, eterno LÍDER de PUEBLO\n"
	.string "CAOBA y de sus secretos.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_16:
.string "JADEN, maestro de TORRE CAMPANA y\n"
	.string "LÍDER de CIUDAD IRIS, el elegido\l"
	.string "de HO-OH.$"


GoldenrodRadioTowerP5_Primera_Reunion_Texto_17:
.string "AZUL, nieto de OAK, colaborador\n"
	.string "del TEAM ROCKET y CAMPEÓN\l"
	.string "provisional a espera de tomar\l"
	.string "nuevas decisiones.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_18:
.string "FUJI, antiguo científico ROCKET,\n"
	.string "vital en la creación de MEWTWO\l"
	.string "y actual persona más influyente de\l"
	.string "PUEBLO LAVANDA.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_19:
.string "BILL, el POKEMANÍACO más famoso\n"
	.string "del mundo, científico de SILPH. Ha\l"
	.string "optimizado al extremo la\l"
	.string "línea evolutiva de PORYGON.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_20:
.string "SAMUEL OAK, el investigador más\n"
	.string "relevante de KANTO y EX-CAMPEÓN de\l"
	.string "KANTO.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_21:
.string "LANCE, EX-CAMPEÓN y EX-GOBERNADOR\n"
	.string "de KANTO-JOHTO.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_22:
.string "MAESTRO ANCIANO SALAZAR, de CIUDAD\n"
	.string "ENDRINO, el considerado ENTRENADOR\l"
	.string "más poderoso de JOHTO, consumado\l"
	.string "experto en el TIPO DRAGÓN.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_23:
.string "ANDRA, ADMINISTRADORA JEFA del TEAM\n"
	.string "ROCKET y JEFA ROCKET en HOENN.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_24:
.string "Por último, {PLAYER}, ADMINISTRADOR\n"
	.string "JEFE del TEAM ROCKET, JEFE ROCKET\l"
	.string "en JOHTO y CAMPEÓN actual por\l"
	.string "derecho propio de KANTO.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_25:
.string "Ahora que todos nos conocemos,\n"
	.string "podemos dar paso a los temas a\l"
	.string "tratar. GIOVANNI, tienes la\l"
	.string "palabra.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_26:
.string "GIOVANNI: Os he reunido a todos\n"
	.string "aquí con el propósito de ver al\l"
	.string "fin una KANTO y JOHTO unidas de\l"
	.string "verdad. Hasta ahora, todos hemos\l"
	.string "ido por nuestra cuenta, cuando la\l"
	.string "mayoría de nosotros perseguía, al\l"
	.string "fin y al cabo, los mismos\l"
	.string "objetivos.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_27:
.string "El objetivo de esta reunión es\n"
	.string "garantizar un futuro próspero para\l"
	.string "ambas regiones, al tiempo que\l"
	.string "creamos un férreo sistema por el\l"
	.string "que los intereses de cada uno de\l"
	.string "nosotros no se confronten entre\l"
	.string "sí.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_28:
.string "Pero no solo eso, ahora no tenemos\n"
	.string "problema en decir que varios de\l"
	.string "los aquí presentes trabajamos en\l"
	.string "la creación de MEWTWO, a la altura\l"
	.string "de LUGIA y HO-OH. En respuesta a\l"
	.string "los ataques de LANCE, la unión\l"
	.string "entre KANTO y JOHTO no solo\l"
	.string "supondría un pacto de no agresión,\l"
	.string "que evitaría una nueva catástrofe\l"
	.string "entre nosotros, nos permitiría\l"
	.string "colaborar codo con codo en la\l"
	.string "creación de prototipos aún más\l"
	.string "poderosos que MEWTWO, que\l"
	.string "protegerían a ambas regiones en\l"
	.string "caso de ataque.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_29:
.string "BILL: Estoy de acuerdo, no explorar\n"
	.string "los límites de este mundo sería un\l"
	.string "pecado.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_30:
.string "M.ANCIANO: ¿Y cómo sabemos que no\n"
	.string "usarás todo eso como arma, más que\l"
	.string "como defensa?\l"
	.string "Conozco a varios de los aquí\l"
	.string "presentes, la mayoría cree que\l"
	.string "puede lograr en un laboratorio\l"
	.string "algo que ya les podría dar una\l"
	.string "verdadera devoción por su equipo\l"
	.string "POKÉMON.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_31:
.string "GIOVANNI: Lo sé, maestro. Yo mismo,\n"
	.string "hasta hace poco, no llegué a ese\l"
	.string "punto que usted menciona, pero yo\l"
	.string "y mi RHYPERIOR lo logramos. No\l"
	.string "obstante, los números son números,\l"
	.string "y recopilar información y\l"
	.string "conocimiento nunca es en vano.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_32:
.string "PRESIDENTE: ¿Cuales son tus\n"
	.string "propuestas entonces, GIOVANNI?$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_33:
.string "GIOVANNI: El primer paso será\n"
	.string "abrir las fronteras de RUTA 26 y\l"
	.string "27. Algo que, tengo entendido, se\l"
	.string "hará en breve.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_34:
.string "Después, anunciaremos la vuelta\n"
	.string "del CAMPEONATO de la LIGA POKÉMON\l"
	.string "también para JOHTO, haciendo\l"
	.string "válidas las 8 MEDALLAS de la\l"
	.string "región.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_35:
.string "La creación del MAGNETOTREN y la\n"
	.string "ampliación del PUERTO OLIVO\l"
	.string "terminarán de conectar KANTO con\l"
	.string "JOHTO.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_36:
.string "Todos los aquí presentes nos\n"
	.string "veremos beneficiados de esto.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_37:
.string "Como actuales dueños de la LIGA\n"
	.string "POKÉMON, esto es lo que podemos\l"
	.string "ofrecer.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_38:
.string "LANCE, podrás optar de nuevo al\n"
	.string "título de CAMPEÓN si así lo\l"
	.string "deseas, y conservarás intacta tu\l"
	.string "reputación como DOMADRAGONES. No\l"
	.string "creas que lo hago por sentir\l"
	.string "especial empatía por ti,\l"
	.string "únicamente lo hago porque tu\l"
	.string "pertenencia a JOHTO aceleraría el\l"
	.string "proceso de unión si te ven\l"
	.string "integrado de verdad en eventos de\l"
	.string "ambas regiones.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_39:
.string "OAK, podrás seguir con todas tus\n"
	.string "investigaciones, esta vez haciendo\l"
	.string "públicos todos tus resultados a\l"
	.string "los aquí presentes. Podrás\l"
	.string "trabajar con las mejores mentes de\l"
	.string "las 2 regiones, junto con ELM,\l"
	.string "BILL, y también BLAINE. Todo\l"
	.string "vuestro trabajo no se pondrá más\l"
	.string "que al servicio de KANTO-JOHTO.\l"
	.string "Era lo que querías, ¿verdad?\l"
	.string "Qué importa la forma.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_40:
.string "OAK: {PAUSE 15}…{PAUSE 15}$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_41:
.string "GIOVANNI: Por otro lado, SILPH\n"
	.string "podrá ampliar a JOHTO la venta de\l"
	.string "sus productos y la TORRE RADIO\l"
	.string "extender sus emisiones a KANTO.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_42:
.string "Sé que a ustedes, grandes maestros\n"
	.string "de CIUDAD IRIS y ENDRINO, nada les\l"
	.string "interesan estos asuntos, pero el\l"
	.string "TEAM ROCKET sabe respetar las\l"
	.string "tradiciones, y seguro que todo\l"
	.string "habitante que llegue de KANTO\l"
	.string "sabrá apreciar lugares como TORRE\l"
	.string "CAMPANA o la GUARIDA DRAGÓN, del\l"
	.string "mismo modo que intentaremos\l"
	.string "mantener a JOHTO tan rural como lo\l"
	.string "ha sido siempre, a excepción de\l"
	.string "grandes ciudades como TRIGAL.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_43:
.string "PRESIDENTE: ¿Y cómo piensas\n"
	.string "financiar todas esas\l"
	.string "investigaciones?$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_44:
.string "GIOVANNI: Aquí es donde entran\n"
	.string "FUJI y PUEBLO LAVANDA, querido\l"
	.string "amigo.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_45:
.string "FUJI: {PAUSE 15}…{PAUSE 15}$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_46:
.string "GIOVANNI: FUJI ya me ha comunicado\n"
	.string "que va siendo hora de dar un\l"
	.string "cambio de aires al pueblo. Ese no\l"
	.string "es lugar para los pocos CUBONE que\l"
	.string "quedan, que serán llevados a TÚNEL\l"
	.string "ROCA, más acorde a su hábitat.\l"
	.string "Mientras tanto, se construirá un\l"
	.string "nuevo cementerio al sur del pueblo\l"
	.string "para alojar todas las tumbas de\l"
	.string "TORRE LAVANDA.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_47:
.string "PRESIDENTE: Y{PAUSE 15}…{PAUSE 15}\n"
	.string "¿TORRE LAVANDA?$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_48:
.string "GIOVANNI: Será reconvertida en la\n"
	.string "TORRE RADIO de KANTO, ahí podrá\l"
	.string "emitir también sus programas,\l"
	.string "PRESIDENTE. ¿Nos vamos\l"
	.string "entendiendo?$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_49:
.string "PRESIDENTE: Nos entendemos\n"
	.string "perfectamente.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_50:
.string "GIOVANNI: A algunos les puede\n"
	.string "parecer una decisión polémica,\l"
	.string "pero es la mejor decisión a largo\l"
	.string "plazo. No solo beneficia la unión\l"
	.string "entre las 2 regiones, también\l"
	.string "podremos, con las ganancias,\l"
	.string "financiar gran parte de nuestros\l"
	.string "proyectos.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_51:
.string "Debemos tomar decisiones duras,\n"
	.string "señores. Para bien o para mal,\l"
	.string "este mundo se rije por la ley del\l"
	.string "POKÉMON más fuerte. Ya vimos lo\l"
	.string "que ocurrió cuando a LANCE se le\l"
	.string "ocurrió aplicar esa ley contra\l"
	.string "KANTO. Todo lo que invirtamos con\l"
	.string "las ganancias de la nueva TORRE\l"
	.string "RADIO irá destinado a crear un\l"
	.string "POKÉMON que nos dé total seguridad\l"
	.string "ante cualquier ataque. No sé\l"
	.string "ustedes, pero yo prefiero salvar\l"
	.string "potenciales vidas, aún a costa de\l"
	.string "desplazar aquellas que ya no\l"
	.string "tienen remedio, que dejar todo\l"
	.string "como está.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_52:
.string "PRES.SILPH: Bien dicho.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_53:
.string "GIOVANNI: Esto nos lleva al último\n"
	.string "cabo suelto que quiero dejar\l"
	.string "atado, el que nos permitirá\l"
	.string "mantener todo esto en las sombras,\l"
	.string "por el que todos obtendremos todos\l"
	.string "estos beneficios junto con el\l"
	.string "crecimiento de las 2 regiones.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_54:
.string "SILPH y la TORRE RADIO DE KANTO\n"
	.string "permanecerán cerradas para el\l"
	.string "público. ¿La razón?\l"
	.string "El TEAM ROCKET trabajará de forma\l"
	.string "directa en estos lugares junto con\l"
	.string "sus trabajadores. De forma\l"
	.string "pública, alegaremos motivos de\l"
	.string "seguridad, porque, por supuesto,\l"
	.string "¿quién quiere que vuelva a ocurrir\l"
	.string "el horrible asalto a la SEDE SILPH\l"
	.string "a manos del mismo TEAM ROCKET?$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_55:
.string "Y por último, para quien aún no lo\n"
	.string "sepa, no es casualidad que los\l"
	.string "lugares más importantes en los\l"
	.string "próximos años estén relacionados\l"
	.string "con la radio.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_56:
.string "ELM: Así es, hemos descubierto una\n"
	.string "correlación entre determinadas\l"
	.string "frecuencias de radio y el\l"
	.string "crecimiento de los POKÉMON,\l"
	.string "creemos que podrían incluso sufrir\l"
	.string "ciertas mutaciones.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_57:
.string "Por ello, la TORRE RADIO de\n"
	.string "LAVANDA y esta misma contarán\l"
	.string "con sus propias salas de\l"
	.string "investigación, inaccesibles al\l"
	.string "gran público, mientras\l"
	.string "confiamos en que usted, FREDO, nos\l"
	.string "proporcione esa antigua base ninja\l"
	.string "de CAOBA para concluir esta\l"
	.string "extensa red de centros de\l"
	.string "investigación y negocios.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_58:
.string "FREDO: Cuente con ello, GIOVANNI.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_59:
.string "GIOVANNI: Siguiendo con el plan,\n"
	.string "el título de GOBERNADOR quedará\l"
	.string "abolido.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_60:
.string "GIOVANNI: Únicamente existirán\n"
	.string "SILPH, la TORRE RADIO, el TEAM\l"
	.string "ROCKET, y demás empresas como el\l"
	.string "PUERTO OLIVO, MAGNETOTREN o los\l"
	.string "CASINOS.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_61:
.string "¿Alguna pregunta?$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_62:
.string "BILL: Todo eso está muy bien, pero\n"
	.string "como ha dicho, lo que importa al\l"
	.string "final es el poder que puede\l"
	.string "crearse a partir de este sistema.\l"
	.string "¿Qué cifras espera que los nuevos\l"
	.string "prototipos puedan alcanzar?$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_63:
.string "GIOVANNI: Tranquilo, BILL, tendrás\n"
	.string "ocasión de trabajar directamente\l"
	.string "en ello junto con OAK y ELM.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_64:
.string "Es sabido que con MEWTWO llegamos\n"
	.string "a los 680 de STATS BASE.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_65:
.string "Nuestras estimaciones{PAUSE 15}…{PAUSE 15}$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_66:
.string "OAK: {PAUSE 25}…{PAUSE 25}$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_67:
.string "GIOVANNI: Sugieren que es posible\n"
	.string "superar holgadamente la barrera de\l"
	.string "los 700 de base, e incluso\l"
	.string "adentrarse en la de los 800.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_68:
.string "BILL: ¡Está loco!\n"
	.string "¿Se da cuenta de los números de\l"
	.string "los que está hablando?\l"
	.string "El cuerpo de un POKÉMON no puede\l"
	.string "soportar cifras tan elevadas.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_69:
.string "GIOVANNI: Ya lo creo yo que sí\n"
	.string "puede, y cuando veas los recursos\l"
	.string "de los que disponemos, tú también\l"
	.string "lo creerás.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_70:
.string "BILL: {PAUSE 15}…{PAUSE 15}$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_71:
.string "Eso es todo, señores. Como ven, si\n"
	.string "todos colaboramos, podemos hacer\l"
	.string "de estas 2 regiones la mayor\l"
	.string "potencia que el mundo recuerde, y\l"
	.string "salir todos beneficiados, desde\l"
	.string "sus más venerables y antiguos\l"
	.string "habitantes, pasando por sus más\l"
	.string "brillantes científicos y hombres\l"
	.string "de negocios.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_72:
.string "PRESIDENTE: ¿Alguna pregunta?$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_73:
.string "Damos entonces la I CONFERENCIA DE\n"
	.string "TRIGAL por finalizada. Pronto les\l"
	.string "enviaremos a cada uno de los aquí\l"
	.string "presentes las acciones a tomar\l"
	.string "para ir cumpliendo cada uno de los\l"
	.string "puntos expuestos aquí, por el\l"
	.string "momento, les anuncio ya que las\l"
	.string "fronteras con KANTO van a abrirse\l"
	.string "nuevamente.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_74:
.string "Tiempos muy interesantes se\n"
	.string "avecinan para todos nosotros. Eso\l"
	.string "es todo, caballeros.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_75:
.string "ANDRA: Una sesión intensa, ¿eh?$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_76:
.string "GIOVANNI: ANDRA, {PLAYER}, me\n"
	.string "alegra volver a veros juntos a los\l"
	.string "2, muchas alegrías habéis dado al\l"
	.string "TEAM ROCKET trabajando en equipo.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_77:
.string "Estás haciendo un excelente\n"
	.string "trabajo en HOENN, ANDRA, vamos a\l"
	.string "aprender mucho del reparto de\l"
	.string "STATS tan particular de esos\l"
	.string "REGIS.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_78:
.string "{PLAYER}, si no me equivoco,\n"
	.string "cuentas ya con 5 MEDALLAS de\l"
	.string "JOHTO. Los últimos datos sobre ese\l"
	.string "POLIWRATH FUERTE VÍNCULO nos han\l"
	.string "sido de gran utilidad, ese POKÉMON\l"
	.string "es una roca en todos los sentidos.\l"
	.string "Supera a MACHAMP en los 6 STATS, y\l"
	.string "con PUÑO FERREO apoyado en sus\l"
	.string "enormes defensas y ATAQUE de 145\l"
	.string "de BASE, es toda una máquina de\l"
	.string "restar vida al rival y recuperar\l"
	.string "la suya propia.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_79:
.string "Quiero que ambos os toméis unas\n"
	.string "pequeñas vacaciones, os lo habéis\l"
	.string "ganado.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_80:
.string "ATLAS: Sería conveniente que\n"
	.string "visitaran el tercer y cuarto piso\l"
	.string "de nuestra base en RUTA 45, ya\l"
	.string "están listos con los nuevos\l"
	.string "avances en MEGAPIEDRAS que hemos\l"
	.string "hecho.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_81:
.string "GIOVANNI: Desde luego, creo que os\n"
	.string "divertiréis en ese lugar, de igual\l"
	.string "forma que hicisteis por primera\l"
	.string "vez con la BASE ROCKET PROFUNDA.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_82:
.string "ANDRA, ATLAS, id tirando.\n"
	.string "Muéstrale el camino a ANDRA hasta\l"
	.string "la BASE de JOHTO.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_83:
.string "GIOVANNI: ¿Qué te ha parecido la\n"
	.string "reunión, {PLAYER}?\l"
	.string "A ojos de la población, esto nunca\l"
	.string "ha ocurrido, no existe, y aún así,\l"
	.string "ha sentado las bases de sus vidas\l"
	.string "en los próximos años. Esperemos\l"
	.string "que para bien{PAUSE 5}…{PAUSE 5}$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_84:
.string "Observa este espléndido paisaje,\n"
	.string "{PLAYER}, desde aquí podemos ver el\l"
	.string "FARO de CIUDAD OLIVO, la TORRE\l"
	.string "CAMPANA de CIUDAD IRIS, JOHTO, en\l"
	.string "la palma de nuestra mano.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_85:
.string "GIOVANNI: {PAUSE 15}…{PAUSE 15}$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_86:
.string "Supongo que habrás prestado\n"
	.string "especial atención al MAESTRO\l"
	.string "DRAGÓN, de CIUDAD ENDRINO. Dudo que\l"
	.string "lo hayas visto antes.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_87:
.string "Junto con FREDO y el GRAN MAESTRO\n"
	.string "de CIUDAD IRIS, son los 3 LÍDERES\l"
	.string "más poderosos de JOHTO,\l"
	.string "especialmente el MAESTRO DRAGÓN.\l"
	.string "Sospecho que cuenta con un\l"
	.string "PSEUDOLEGENDARIO FUERTE VÍNCULO en\l"
	.string "su equipo. Si llegara a ser\l"
	.string "cierto, conocer sus datos sería\l"
	.string "crucial.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_88:
.string "Los 3 son historia viva de la\n"
	.string "región, forman parte de una\l"
	.string "generación en vías de extinción y\l"
	.string "han demostrado que entrenar\l"
	.string "POKÉMON tiene mucho de arte. Por\l"
	.string "más que nos empeñemos en llevar\l"
	.string "todo a nuestros laboratorios, por\l"
	.string "ello, quiero aunar lo mejor de\l"
	.string "ambos mundos antes de que sea\l"
	.string "demasiado tarde. En unos 3 años,\l"
	.string "será imposible encontrar\l"
	.string "ENTRENADORES así, incluso en la\l"
	.string "rural y tradicional JOHTO.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_89:
.string "Pero tranquilo, {PLAYER}, tiempo es\n"
	.string "lo que ahora tenemos. Sé que te\l"
	.string "las arreglarás para poder combatir\l"
	.string "frente a los últimos 3 LÍDERES,\l"
	.string "tal y como has hecho hasta ahora.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_90:
.string "Por ahora, ANDRA te está\n"
	.string "esperando para visitar los pisos\l"
	.string "superiores de la BASE de JOHTO.\l"
	.string "Ahí verás parte de los progresos\l"
	.string "que hemos hecho.$"

GoldenrodRadioTowerP5_Primera_Reunion_Texto_91:
.string "Eso es todo, {PLAYER}. Me alegra\n"
	.string "verte de nuevo, se nota que estás\l"
	.string "en plena forma.$"

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
	.string "los nuevos prototipos y los STATS{PAUSE 15}…{PAUSE 15} Si\l"
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
.string "LANCE: ¿Quién es este tipo? ¿Por qué{PAUSE 15}…{PAUSE 15}?\n"
	.string "¿Por qué sabe tanto acerca de ENTEI,\l"
	.string "RAIKOU y SUICUNE?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_7:
.string "EUSINE: ¡{PLAYER}! Jamás imaginé el\n"
	.string "alcance de tu organización. Créeme, con\l"
	.string "mis conocimientos y vuestros recursos,\l"
	.string "al fin podremos extraer la verdadera\l"
	.string "esencia de las BESTIAS DE JOHTO.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_8:
.string "ANDRA: {PAUSE 15}…{PAUSE 15}$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_9:
.string "PRESIDENTE: Damas y caballeros{PAUSE 15}…{PAUSE 15} Tengo\n"
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
.string "MIGUEL: {PAUSE 15}…{PAUSE 15}$"

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
.string "BILL: ¡Exacto! ¡Los nuevos protot{PAUSE 15}…{PAUSE 15}!$"

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
	.string "TURNO BALL, ACOPIO BALL, NIDO BALL{PAUSE 15}…{PAUSE 15}\l"
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
.string "BILL: {PAUSE 15}…{PAUSE 15}$"

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
	.string "MAGMORTAR-Y{PAUSE 15}…{PAUSE 15}$"

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
	.string "660 STATS BASE, hasta los 780{PAUSE 15}…{PAUSE 5}$"

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
.string "ANDRA: {PAUSE 15}…{PAUSE 15}$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_62:
.string "GIOVANNI: Esto supone un +110 en\n"
	.string "STATS BASE, lo que les mete de lleno en\l"
	.string "los prototipos de nivel II, con un total\l"
	.string "de 690, pero{PAUSE 15}…{PAUSE 15}$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_63:
.string "Nuestro mayor avance ha sido el que\n"
	.string "marca el límite de los prototipos de\l"
	.string "nivel II, con 780 STATS BASE{PAUSE 15}…{PAUSE 15}$"

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
.string "ELM: Por el momento{PAUSE 25}…{PAUSE 25} trabajaremos para\n"
	.string "que esa variable sea el ATAQUE, que de\l"
	.string "nada le sirve. Esa aberración tiene más\l"
	.string "ATAQUE que un TYRANITAR y lo tiene en\l"
	.string "la reserva, a lo que hemos llegado{PAUSE 15}…{PAUSE 15}$"

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
	.string "hablar de ellos{PAUSE 15}…{PAUSE 15} tal vez en la III\l"
	.string "CONFERENCIA DE TRIGAL{PAUSE 15}…{PAUSE 15}$"

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
.string "LANCE: {PAUSE 15}…{PAUSE 15}$"

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
	.string "luz semejantes números{PAUSE 25}…{PAUSE 25} aún. Nadie\l"
	.string "está preparado para asimilar cifras\l"
	.string "superiores a los 800 STATS BASE, al\l"
	.string "menos en el contexto actual.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81:
.string "ANDRA: Oh{PAUSE 15}…{PAUSE 15}$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.1:
.string "GIOVANNI: ANDRA, {PLAYER}{PAUSE 25}…{PAUSE 25} Tengo\n"
	.string "buenas noticias, ¿recordáis la PIEDRA\l"
	.string "SAGRADA que obtuvísteis en una de\l"
	.string "vuestras misiones?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.2:
.string "ANDRA: Claro{PAUSE 15}…{PAUSE 15} Era algo muy especial.$"

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
	.string "para lanzarse a nuestro mercado…\l"
	.string "privado.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.6:
.string "ANDRA: Entonces{PAUSE 15}…{PAUSE 15} ¿Todos tendrán\n"
	.string "acceso a ella?$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_81.7:
.string "GIOVANNI: No, no todos. La PIEDRA\n"
	.string "DORADA estará a la venta en uno de los\l"
	.string "pisos superiores de la TORRE RADIO\l"
	.string "LAVANDA. De modo que{PAUSE 15}…{PAUSE 15} únicamente los\l"
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
	.string "PUEBLO LAVANDA y{PAUSE 15}…{PAUSE 15} ver de primera mano\l"
	.string "el nuevo lavado de cara que le hemos\l"
	.string "hecho.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_83:
.string "ANDRA: {PAUSE 35}…{PAUSE 35}no fallaré en esa cita con\n"
	.string "la historia{PAUSE 5}…{PAUSE 5}$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_84:
.string "ATLAS: Nosotros investigaremos sobre\n"
	.string "DEVON, debemos convocar una reunión\l"
	.string "con OAK y BLAINE inmediatamente.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_85:
.string "GIOVANNI: Así es.$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_86:
.string "Estamos en contacto{PAUSE 5}…{PAUSE 5}$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_87:
.string "ANDRA: Ya lo has oído, {PLAYER}, nos\n"
	.string "vemos en TORRE POKÉM{PAUSE 25}…{PAUSE 15}$"

GoldenrodRadioTowerP5_Segunda_Reunion_texto_88:
	.string "{PAUSE 15}…{PAUSE 15}TORRE DE RADIO LAVANDA. Se hará\n"
	.string "extraño no volver a ver la original, ¿no\l"
	.string "crees?$"

GoldenrodRadioTowerP5_Tercera_Reunion::
lock
msgbox GoldenrodRadioTowerP5_Tercera_Reunion_Texto_1 MSGBOX_AUTOCLOSE
msgbox GoldenrodRadioTowerP5_Tercera_Reunion_Texto_2 MSGBOX_AUTOCLOSE
msgbox GoldenrodRadioTowerP5_Tercera_Reunion_Texto_3 MSGBOX_AUTOCLOSE
msgbox GoldenrodRadioTowerP5_Tercera_Reunion_Texto_4 MSGBOX_AUTOCLOSE
msgbox GoldenrodRadioTowerP5_Tercera_Reunion_Texto_5 MSGBOX_AUTOCLOSE
msgbox GoldenrodRadioTowerP5_Tercera_Reunion_Texto_6 MSGBOX_AUTOCLOSE
msgbox GoldenrodRadioTowerP5_Tercera_Reunion_Texto_7 MSGBOX_AUTOCLOSE
msgbox GoldenrodRadioTowerP5_Tercera_Reunion_Texto_8 MSGBOX_AUTOCLOSE
msgbox GoldenrodRadioTowerP5_Tercera_Reunion_Texto_9 MSGBOX_AUTOCLOSE
msgbox GoldenrodRadioTowerP5_Tercera_Reunion_Texto_10 MSGBOX_AUTOCLOSE
msgbox GoldenrodRadioTowerP5_Tercera_Reunion_Texto_11 MSGBOX_AUTOCLOSE
msgbox GoldenrodRadioTowerP5_Tercera_Reunion_Texto_12 MSGBOX_AUTOCLOSE
msgbox GoldenrodRadioTowerP5_Tercera_Reunion_Texto_13 MSGBOX_AUTOCLOSE
msgbox GoldenrodRadioTowerP5_Tercera_Reunion_Texto_14 MSGBOX_AUTOCLOSE
msgbox GoldenrodRadioTowerP5_Tercera_Reunion_Texto_15 MSGBOX_AUTOCLOSE
msgbox GoldenrodRadioTowerP5_Tercera_Reunion_Texto_16 MSGBOX_AUTOCLOSE
msgbox GoldenrodRadioTowerP5_Tercera_Reunion_Texto_17 MSGBOX_AUTOCLOSE
msgbox GoldenrodRadioTowerP5_Tercera_Reunion_Texto_18 MSGBOX_AUTOCLOSE
msgbox GoldenrodRadioTowerP5_Tercera_Reunion_Texto_19 MSGBOX_AUTOCLOSE
msgbox GoldenrodRadioTowerP5_Tercera_Reunion_Texto_20 MSGBOX_AUTOCLOSE
msgbox GoldenrodRadioTowerP5_Tercera_Reunion_Texto_21 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F8, 12
release
end

GoldenrodRadioTowerP5_Tercera_Reunion_Texto_1:
	.string "GIOVANNI: …Y hemos llegado más lejos de\n"
	.string "lo que cualquiera de nosotros pudiera\l"
	.string "imaginar. De eso no tengo duda alguna.$"

GoldenrodRadioTowerP5_Tercera_Reunion_Texto_2:
	.string "Tal y como se ha expuesto: nuestro\n"
	.string "prototipo de nivel III, si bien no podrá\l"
	.string "acercarse en poder bruto a ese total de\l"
	.string "900 STATS BASE que son el límite\l"
	.string "conocido…$"

GoldenrodRadioTowerP5_Tercera_Reunion_Texto_3:
	.string "…sí que lo hará en lo que a eficiencia\n"
	.string "dentro de un combate POKÉMON se\l"
	.string "refiere. Y esto caballeros, al final del\l"
	.string "día, es lo que nos interesa.$"

GoldenrodRadioTowerP5_Tercera_Reunion_Texto_4:
	.string "OAK: Y pensar que hace 3 años veíamos a\n"
	.string "MEWTWO como un POKÉMON insuperable…$"

GoldenrodRadioTowerP5_Tercera_Reunion_Texto_5:
	.string "GIOVANNI: El MEWTWO original era bueno,\n"
	.string "pero no ha acabado siendo el mejor. El\l"
	.string "tiempo lo ha demostrado.$"

GoldenrodRadioTowerP5_Tercera_Reunion_Texto_6:
	.string "Ahora, me gustaría anunciar que el\n"
	.string "proceso de construcción de la nueva\l"
	.string "ZONA SAFARI en JOHTO ya está en\l"
	.string "marcha.$"

GoldenrodRadioTowerP5_Tercera_Reunion_Texto_7:
	.string "¿No es así, EUSINE?$"

GoldenrodRadioTowerP5_Tercera_Reunion_Texto_8:
	.string "EUSINE: Exacto. Ya he hablado con el\n"
	.string "GRAN MAESTRO.$"

GoldenrodRadioTowerP5_Tercera_Reunion_Texto_9:
	.string "La ruta que lleva a la TORRE DUN y la\n"
	.string "zona alrededor del PILAR DUN\l"
	.string "permanecerán ocultas a ojos de JOHTO…\l"
	.string "para siempre.$"

GoldenrodRadioTowerP5_Tercera_Reunion_Texto_10:
	.string "GIOVANNI: No será muy difícil.\n"
	.string "Destruyendo el actual sendero y\l"
	.string "construyendo uno único que se desvíe\l"
	.string "más al noreste bastará.$"

GoldenrodRadioTowerP5_Tercera_Reunion_Texto_11:
	.string "Con ello, el dinero con el que financiar\n"
	.string "todos nuestros proyectos será el menor\l"
	.string "de los problemas.$"

GoldenrodRadioTowerP5_Tercera_Reunion_Texto_12:
	.string "Eso es todo, damos por finaliz…$"

GoldenrodRadioTowerP5_Tercera_Reunion_Texto_13:
	.string "LANCE: U…un momento.$"

GoldenrodRadioTowerP5_Tercera_Reunion_Texto_14:
	.string "GIOVANNI: ¿Qué no ha quedado claro,\n"
	.string "LANCE?$"

GoldenrodRadioTowerP5_Tercera_Reunion_Texto_15:
	.string "LANCE: No… no alcanzo a comprender lo\n"
	.string "expuesto al comenzar la reunión.$"

GoldenrodRadioTowerP5_Tercera_Reunion_Texto_16:
	.string "Todo ese despliegue de recursos, ¿para\n"
	.string "qué? ¿cuál es su propósito cuando\l"
	.string "ahora mismo somos mucho más poderosos\l"
	.string "que todo eso?$"

GoldenrodRadioTowerP5_Tercera_Reunion_Texto_17:
	.string "GIOVANNI: No necesitas entender nada,\n"
	.string "LANCE. Solo debes ceñirte con absoluta\l"
	.string "precisión a tu papel.$"

GoldenrodRadioTowerP5_Tercera_Reunion_Texto_18:
	.string "LANCE: … …$"

GoldenrodRadioTowerP5_Tercera_Reunion_Texto_19:
	.string "GIOVANNI: Ha sido el primer tema a\n"
	.string "tratar en esta reunión precisamente\l"
	.string "por ser el más importante.$"

GoldenrodRadioTowerP5_Tercera_Reunion_Texto_20:
	.string "Y ahora, es inminente. Todo está\n"
	.string "preparado. Ya no hay vuelta atrás.$"

GoldenrodRadioTowerP5_Tercera_Reunion_Texto_21:
	.string "Después de esto, las regiones de KANTO\n"
	.string "y JOHTO nunca volverán a ser las mismas.$"
