CeladonCity_Shop_5F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, CeladonCity_Shop_5F_OnFrame
	.byte 0

CeladonCity_Shop_5F_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 6, CeladonCity_Shop_5F_Oak
	.2byte 0
	

CeladonShop5F_1::
end



CeladonShop5F_2::
end



CeladonShop5F_3::
lock     
faceplayer     
msgbox CeladonCity_Shop5F_Text_3, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop5F_Text_3:
.string "¡He venido a por dispositivos de\n"
.string "mejora de los POKéMON!\p"
.string "Las PROTEÍNAS aumentan la potencia\n"
.string "del ATAQUE.\p"
.string "El HIERRO aumenta la DEFENSA.$"



CeladonShop5F_4::
lock     
faceplayer     
msgbox CeladonCity_Shop5F_Text_4, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop5F_Text_4:
.string "¡Los dispositivos de mejora de los\n"
.string "POKéMON solo se venden aquí!\p"
.string "MÁS PS aumenta los PS básicos\n"
.string "de un POKéMON.\p"
.string "Usa CALCIO para aumentar las\n"
.string "habilidades ESPECIALES.\p"
.string "ZINC aumenta la DEF. ESP.\n"
.string "de un POKéMON.\p"
.string "Usa CARBURANTE para aumentar\n"
.string "la VELOCIDAD.$"



CeladonShop5FDocumento_100::
msgbox CeladonShop5FDocumento_Text_100, MSGBOX_SIGN   
end

CeladonShop5FDocumento_Text_100:
.string "P4: FARMACIA$"

CeladonCity_Shop_5F_Oak::
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
addobject 5
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, CeladonCity_Shop_5F_Oak_move_1
waitmovement 0x0
special RemoveCameraObject
applymovement 5, CeladonCity_Shop_5F_Oak_move_2
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_1, MSGBOX_AUTOCLOSE
delay 20
msgbox CeladonCity_Shop5F_Text_Oak_2, MSGBOX_AUTOCLOSE
applymovement 5, CeladonCity_Shop_5F_Oak_move_2
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_3, MSGBOX_AUTOCLOSE
applymovement 1, CeladonCity_Shop_5F_Oak_move_3
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_4, MSGBOX_AUTOCLOSE
playse SE_FAILURE
applymovement 5, CeladonCity_Shop_5F_Oak_move_4
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_5, MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, CeladonCity_Shop_5F_Oak_move_5
applymovement 5, CeladonCity_Shop_5F_Oak_move_6
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
removeobject 5
delay 80
msgbox CeladonCity_Shop5F_Text_Oak_6, MSGBOX_AUTOCLOSE
delay 20
applymovement 7, CeladonCity_Shop_5F_Oak_move_7
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_7, MSGBOX_AUTOCLOSE
delay 20
msgbox CeladonCity_Shop5F_Text_Oak_8, MSGBOX_AUTOCLOSE
applymovement 7, CeladonCity_Shop_5F_Oak_move_8
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_9, MSGBOX_AUTOCLOSE
applymovement 6, CeladonCity_Shop_5F_Oak_move_9
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_10, MSGBOX_AUTOCLOSE
playse SE_POKENAV_ON
delay 20
playse SE_PIN
applymovement 7, CeladonCity_Shop_5F_Oak_move_11
applymovement 6, CeladonCity_Shop_5F_Oak_move_10
waitmovement 0x0
delay 20
playse SE_POKENAV_OFF
msgbox CeladonCity_Shop5F_Text_Oak_11, MSGBOX_AUTOCLOSE
applymovement 6, CeladonCity_Shop_5F_Oak_move_3
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_12, MSGBOX_AUTOCLOSE
applymovement 7, CeladonCity_Shop_5F_Oak_move_2
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_13, MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
warp MAP_VERMILION_CITY, 23, 31
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
release
end

CeladonCity_Shop5F_Text_Oak_1:
.string "SUPERNECIO: ¡¿9800¥?! ¡Esto es un\n"
	.string "atraco! ¡Hace 1 mes costaban 7000¥! ¡Y\l"
	.string "hace un año 3000¥!$"


CeladonCity_Shop5F_Text_Oak_2:
	.string "VENDEDOR: Yo no soy quien fija los\n"
	.string "precios, desde arriba se ha\l"
	.string "determinado que manipular los EVs de\l"
	.string "un POKÉMON debe ser costoso.$"


CeladonCity_Shop5F_Text_Oak_3:
	.string "SUPERNECIO: ¿Costoso? Nadie comprará\n"
	.string "PROTEINA ni CALCIO a este precio. La\l"
	.string "gente se limitará a usar las que\l"
	.string "encuentren extraviadas.$"


CeladonCity_Shop5F_Text_Oak_4:
	.string "VENDEDOR: Son los precios impuestos\n"
	.string "por el COMITÉ de la LIGA POKÉMON, nos\l"
	.string "limitamos a cumplir órdenes.$"


CeladonCity_Shop5F_Text_Oak_5:
	.string "SUPERNECIO: ¿Y ahora cómo voy a subir\n"
	.string "el ATAQUE ESPECIAL de mi MAGNEMITE?\l"
	.string "¡No tiene ningún sentido!$"


CeladonCity_Shop5F_Text_Oak_6:
	.string "????: Al contrario, tiene todo el\n"
	.string "sentido que se le pueda dar dentro de\l"
	.string "esta región.$"


CeladonCity_Shop5F_Text_Oak_7:
	.string "CHICA: Qué estúpido. Podría subir a\n"
	.string "TORRE POKÉMON y entrenar ahí a su\l"
	.string "MAGNEMITE.$"


CeladonCity_Shop5F_Text_Oak_8:
	.string "????: No todos han recibido tu\n"
	.string "educación, DALIA. La buena información\l"
	.string "es algo que escasea en los tiempos que\l"
	.string "corren. Hay quien sigue creyendo en\l"
	.string "ese viejo rumor, aquel que afirmaba la\l"
	.string "existencia de únicamente 150 especies\l"
	.string "diferentes de POKÉMON. Si supieran lo\l"
	.string "amplio que es este mundo{PAUSE 5}…{PAUSE 5}$"


CeladonCity_Shop5F_Text_Oak_9:
	.string "DALIA: No es de extrañar que nadie se\n"
	.string "haya acercado a la LIGA POKÉMON en los\l"
	.string "últimos años. ¿Crees que ellos dos\l"
	.string "tienen alguna opción?$"


CeladonCity_Shop5F_Text_Oak_10:
	.string "????: Acaban de empezar su viaje. Aún\n"
	.string "es pronto para hacer pronósticos, pero\l"
	.string "el potencial que atesoran es\l"
	.string "esperanzador, especialmente{PAUSE 5}…{PAUSE 5}$"


CeladonCity_Shop5F_Text_Oak_11:
	.string "¿Diga? SR.LANCE. Sí. Inmediatamente.$"


CeladonCity_Shop5F_Text_Oak_12:
	.string "Me reclaman en el CG de la LIGA POKÉMON.\n"
	.string "Se acabaron las compras, DALIA.$"


CeladonCity_Shop5F_Text_Oak_13:
	.string "DALIA: No hay problema, ya tenemos 50\n"
	.string "VITAMINAS para cada uno de los 6\l"
	.string "stats, suficiente para esta semana.$"

CeladonCity_Shop_5F_Oak_move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
step_end

CeladonCity_Shop_5F_Oak_move_2:
walk_in_place_left
step_end


CeladonCity_Shop_5F_Oak_move_3:
walk_in_place_right
step_end

CeladonCity_Shop_5F_Oak_move_4:
face_right
step_end

CeladonCity_Shop_5F_Oak_move_5:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

CeladonCity_Shop_5F_Oak_move_6:
walk_right
walk_right
walk_right
walk_up
walk_up
walk_right
walk_up
walk_right
walk_up
walk_right
step_end

CeladonCity_Shop_5F_Oak_move_7:
face_left
step_end

CeladonCity_Shop_5F_Oak_move_8:
face_up
step_end

CeladonCity_Shop_5F_Oak_move_9:
walk_in_place_down
step_end

CeladonCity_Shop_5F_Oak_move_10:
emote_exclamation_mark
walk_left
step_end

CeladonCity_Shop_5F_Oak_move_11:
emote_exclamation_mark
face_left
step_end
