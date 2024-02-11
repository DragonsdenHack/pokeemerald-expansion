LavenderTown_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, LavenderTown_OnFrame
map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_OnTransition
	.byte 0

LavenderTown_OnTransition::
setflag FLAG_VISITED_LAVENDER_TOWN
end

LavenderTown_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 185, LavenderTown_Cierre_Torre
	.2byte 0

LavenderTown1::
lock     
faceplayer     
msgbox LavenderTown_Text1, MSGBOX_DEFAULT
release     
end

LavenderTown_Text1:
	.string "You have no shame nor regard for our\n"
	.string "region's traditions!$"


LavenderTown2::
lock     
faceplayer     
msgbox LavenderTown_Text2, MSGBOX_DEFAULT
release     
end

LavenderTown_Text2:
.string "This town is known as the grave\n"
    .string "site of POKéMON.\p"
    .string "Memorial services are held in\n"
    .string "POKéMON TOWER.$"



LavenderTownDocumento_100::
msgbox LavenderTownDocumento_Text_100, MSGBOX_SIGN   
end

LavenderTownDocumento_Text_100:
.string "LAVENDER VOLUNTEER\n"
    .string "POKéMON HOUSE$"



LavenderTownDocumento_101::
msgbox LavenderTownDocumento_Text_101, MSGBOX_SIGN   
end

LavenderTownDocumento_Text_101:
.string "New SILPH SCOPE!\n"
    .string "Make the Invisible Plain to See!\p"
    .string "SILPH CO.$"



LavenderTownDocumento_102::
msgbox LavenderTownDocumento_Text_102, MSGBOX_SIGN   
end

LavenderTownDocumento_Text_102:
.string "LAVENDER TOWN\n"
    .string "The Noble Purple Town$"



LavenderTownDocumento_103::
msgbox LavenderTownDocumento_Text_103, MSGBOX_SIGN   
end

LavenderTownDocumento_Text_103:
.string "POKéMON TOWER\n"
    .string "Becalm the Spirits of POKéMON$"

LavenderTown_3::
lock
faceplayer
msgbox LavenderTown_3_Text_3YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq LavenderTown_3No
msgbox LavenderTown_3_Text_3Yes, MSGBOX_DEFAULT
release
end



LavenderTown_3_Text_3YesNo:
.string "Do you believe in ghosts?$"


LavenderTown_3No::
msgbox LavenderTown_3_Text_3No, MSGBOX_DEFAULT
release
end


LavenderTown_3_Text_3Yes:
.string "Really?\n"
    .string "So there are believers…$"

LavenderTown_3_Text_3No:
.string "Hahaha, I guess not.\p"
    .string "That white hand on your shoulder…\n"
    .string "I'm just imagining it.$"

LavenderTown_Barrera_Mision_Kangaskhan::
compare VAR_UNUSED_0x40F7, 54
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
compare VAR_UNUSED_0x40F7, 50
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_3
compare VAR_UNUSED_0x40F7, 43
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Mision_Kangaskhan_Move_1
waitmovement 0x0
msgbox LavenderTown_Barrera_Mision_Kangaskhan_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Mision_Kangaskhan_Move_2
waitmovement 0x0
release
end

LavenderTown_Barrera_Mision_Kangaskhan_2::
release
end

LavenderTown_Barrera_Mision_Kangaskhan_3::
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Mision_Kangaskhan_Move_1
waitmovement 0x0
msgbox LavenderTown_Barrera_Mision_Kangaskhan_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Mision_Kangaskhan_Move_2
waitmovement 0x0
release
end

LavenderTown_Barrera_Mision_Kangaskhan_Texto_1:
	.string "(GIOVANNI was so clear about keep\n"
	.string "distances from POKÉMON TOWER)$"

LavenderTown_Barrera_Mision_Kangaskhan_Texto_2:
	.string "(RED could be still inside the POKÉMON\n"
	.string "TOWER)$"

LavenderTown_Barrera_Mision_Kangaskhan_Move_1:
walk_in_place_up
step_end

LavenderTown_Barrera_Mision_Kangaskhan_Move_2:
walk_slow_down
step_end

VermilionCity_Barco_Zarpa::
compare VAR_UNUSED_0x40F7, 94
goto_if_gt VermilionCity_Barco_Zarpa_2
release
end

VermilionCity_Barco_Zarpa_2::
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Sur_Move_1
waitmovement 0x0
msgbox VermilionCity_Barco_Zarpa_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Sur_Move_2
waitmovement 0x0
release
end

VermilionCity_Barco_Zarpa_Texto_1:
.string "The ship sailed.$"


LavenderTown_Barrera_Sur::
compare VAR_UNUSED_0x40F7, 62
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Sur_Move_1
waitmovement 0x0
msgbox LavenderTown_Barrera_Sur_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Sur_Move_2
waitmovement 0x0
release
end

LavenderTown_Barrera_Sur_Texto_1:
	.string "(That route does not match with any\n"
	.string "assigned mission, better to not waste\l"
	.string "time).$"

LavenderTown_Barrera_Sur_Move_1:
walk_in_place_down
step_end

LavenderTown_Barrera_Sur_Move_2:
walk_slow_up
step_end


LavenderTown_Cierre_Torre::
lock
clearflag FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD
addobject 4
addobject 5
addobject 7
addobject 8
addobject 9
addobject 10
addobject 11
addobject 12
addobject 14
addobject 15
addobject 16
applymovement 3, LavenderTown_Cierre_Torre_Move_2
applymovement 2, LavenderTown_Cierre_Torre_Move_2
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Cierre_Torre_Move_1
waitmovement 0x0
special RemoveCameraObject
delay 40
playse SE_EXIT
clearflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
addobject 6
msgbox LavenderTown_Cierre_Torre_Texto_1 MSGBOX_AUTOCLOSE
delay 20
applymovement 7, LavenderTown_Cierre_Torre_Move_4
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_2 MSGBOX_AUTOCLOSE
applymovement 8, LavenderTown_Cierre_Torre_Move_5
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_3 MSGBOX_AUTOCLOSE
applymovement 7, LavenderTown_Cierre_Torre_Move_6
applymovement 8, LavenderTown_Cierre_Torre_Move_6
applymovement 9, LavenderTown_Cierre_Torre_Move_5
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_4 MSGBOX_AUTOCLOSE
applymovement 8, LavenderTown_Cierre_Torre_Move_7
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_5 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Cierre_Torre_Move_8
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_6 MSGBOX_AUTOCLOSE
applymovement 7, LavenderTown_Cierre_Torre_Move_4
applymovement 11, LavenderTown_Cierre_Torre_Move_5
applymovement 9, LavenderTown_Cierre_Torre_Move_5
applymovement 8, LavenderTown_Cierre_Torre_Move_9
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_7 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Cierre_Torre_Texto_8 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
msgbox LavenderTown_Cierre_Torre_Texto_9 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Cierre_Torre_Move_6
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_10 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Cierre_Torre_Move_5
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_11 MSGBOX_AUTOCLOSE
applymovement 8, LavenderTown_Cierre_Torre_Move_10
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_12 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderTown_Cierre_Torre_Texto_13 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 7, LavenderTown_Cierre_Torre_Move_11
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_14 MSGBOX_AUTOCLOSE
fadescreen 1
playmoncry SPECIES_CROBAT, CRY_MODE_ENCOUNTER
waitmoncry
removeobject 8
playse SE_M_FLY
delay 15
fadescreen 0
delay 20
applymovement 9, LavenderTown_Cierre_Torre_Move_10
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_15 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderTown_Cierre_Torre_Texto_16 MSGBOX_AUTOCLOSE
delay 20
applymovement 9, LavenderTown_Cierre_Torre_Move_4
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_17 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Cierre_Torre_Move_12
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_18 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Cierre_Torre_Move_13
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_19 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD
delay 10
fadescreen 1
playmoncry SPECIES_SKARMORY, CRY_MODE_ENCOUNTER
waitmoncry
removeobject 9
playse SE_M_FLY
delay 15
fadescreen 0
delay 20
applymovement 11, LavenderTown_Cierre_Torre_Move_16
waitmovement 0x0
delay 10
msgbox LavenderTown_Cierre_Torre_Texto_20 MSGBOX_AUTOCLOSE
addobject 13
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Cierre_Torre_Move_14
waitmovement 0x0
special RemoveCameraObject
delay 20
playmoncry SPECIES_CUBONE, CRY_MODE_ENCOUNTER
msgbox LavenderTown_Cierre_Torre_Texto_21 MSGBOX_AUTOCLOSE
waitmoncry
delay 30
applymovement 13, LavenderTown_Cierre_Torre_Move_15
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 186
warpsilent MAP_BASE_ROCKET_HOENN, 29, 34
release
end

LavenderTown_Cierre_Torre_Move_16:
walk_in_place_up
step_end

LavenderTown_Cierre_Torre_Move_15:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

LavenderTown_Cierre_Torre_Move_14:
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

LavenderTown_Cierre_Torre_Move_13:
walk_left
step_end

LavenderTown_Cierre_Torre_Move_12:
walk_right
step_end

LavenderTown_Cierre_Torre_Move_11:
emote_exclamation_mark
step_end

LavenderTown_Cierre_Torre_Move_10:
walk_slow_up
step_end

LavenderTown_Cierre_Torre_Move_9:
walk_down
walk_in_place_right
step_end

LavenderTown_Cierre_Torre_Move_8:
walk_slow_down
step_end

LavenderTown_Cierre_Torre_Move_7:
walk_up
face_right
step_end

LavenderTown_Cierre_Torre_Move_6:
face_up
step_end

LavenderTown_Cierre_Torre_Move_5:
face_left
step_end

LavenderTown_Cierre_Torre_Move_4:
face_right
step_end

LavenderTown_Cierre_Torre_Move_3:
walk_down
step_end

LavenderTown_Cierre_Torre_Move_2:
walk_right
face_up
step_end

LavenderTown_Cierre_Torre_Move_1:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

LavenderTown_Cierre_Torre_Texto_1:
.string "CONSTRUCTOR: Procedo a cerrar la zona,\n"
	.string "a partir de ahora nadie podrá volver a\l"
	.string "entrar al lugar. Todas las tumbas y\l"
	.string "POKÉMON han sido evacuados con éxito.$"

LavenderTown_Cierre_Torre_Texto_2:
.string "FUJI: No te preocupes, AGATHA. Estoy\n"
	.string "construyendo un gran CEMENTERIO\l"
	.string "subterráneo para alojar todas las\l"
	.string "almas desplazadas.$"

LavenderTown_Cierre_Torre_Texto_3:
.string "AGATHA: Oh, FUJI… Es el fin de una era,\n"
	.string "¿qué haremos ahora?$"

LavenderTown_Cierre_Torre_Texto_4:
.string "ATLAS: Este puede ser el comienzo de la\n"
	.string "mejor era en la historia de KANTO.$"

LavenderTown_Cierre_Torre_Texto_5:
.string "AGATHA: No podemos olvidar de dónde\n"
	.string "venimos, esta TORRE lleva siglos en pie,\l"
	.string "alojó a todos los caídos tras la\l"
	.string "guerra. Cómo podrá entenderse la\l"
	.string "historia de KANTO sin uno de sus\l"
	.string "mayores símbolos, ¿también ocultarás\l"
	.string "su pasado?$"

LavenderTown_Cierre_Torre_Texto_6:
.string "ATLAS: Lo que TORRE LAVANDA ha sido\n"
	.string "para KANTO está celosamente\l"
	.string "documentado, ya nada podrá borrar su\l"
	.string "papel en la historia. Dentro de 1000\l"
	.string "años sabrán lo mismo que hoy sabemos\l"
	.string "nosotros acerca de este lugar. Su\l"
	.string "memoria perdurará, si es lo que te\l"
	.string "preocupa.$"

LavenderTown_Cierre_Torre_Texto_7:
.string "AGATHA: ¿Pero por qué? ¿Por qué\n"
	.string "destruirla? ¿Por qué no construir una\l"
	.string "torre gemela al este?$"

LavenderTown_Cierre_Torre_Texto_8:
.string "ATLAS: En ocasiones lo viejo debe\n"
	.string "desaparecer, para que lo nuevo pueda\l"
	.string "prosperar.$"

LavenderTown_Cierre_Torre_Texto_9:
.string "AGATHA: ¡Es innecesario!$"

LavenderTown_Cierre_Torre_Texto_10:
.string "ATLAS: Que TORRE LAVANDA desaparezca\n"
	.string "envía un poderoso mensaje a KANTO.\l"
	.string "Prepara a toda la región para nuevos\l"
	.string "tiempos y les libera de su pasado.$"

LavenderTown_Cierre_Torre_Texto_11:
.string "Es necesario, AGATHA. Forma parte del\n"
	.string "proceso de cambio, por mucho que duela.$"

LavenderTown_Cierre_Torre_Texto_12:
.string "AGATHA: Así que… No queda ya nada para\n"
	.string "mí en esta región pues…$"

LavenderTown_Cierre_Torre_Texto_13:
.string "AGATHA: Adiós, FUJI.$"

LavenderTown_Cierre_Torre_Texto_14:
.string "FUJI: ¡Espera, AGATHA!$"

LavenderTown_Cierre_Torre_Texto_15:
.string "ATLAS: Los cambios radicales siempre\n"
	.string "implican este tipo de pérdidas, hay que\l"
	.string "seguir adelante. Espero que esto no\l"
	.string "cambie nada en tu labor para con\l"
	.string "LAVANDA, FUJI.$"

LavenderTown_Cierre_Torre_Texto_16:
.string "FUJI: …$"

LavenderTown_Cierre_Torre_Texto_17:
.string "BILL: ¡Si esa anciana supiera lo que\n"
	.string "vamos a montar dentro de la nueva\l"
	.string "TORRE RADIO! ¡Se hubiera ido aún más\l"
	.string "disgustada!$"

LavenderTown_Cierre_Torre_Texto_18:
.string "ATLAS: Muestra más respeto y sé más\n"
	.string "discreto, BILL. No te hemos contratado\l"
	.string "para que te vayas de la lengua con\l"
	.string "asuntos de este calibre.$"

LavenderTown_Cierre_Torre_Texto_19:
.string "Ya no hay nada que ver aquí, preparáos\n"
	.string "para lo que viene.$"

LavenderTown_Cierre_Torre_Texto_20:
.string "BILL: Bah, ¡solo era una broma!$"

LavenderTown_Cierre_Torre_Texto_21:
.string "¡Bone!$"

LavenderTown_Dialogo_Obrero::
lock
faceplayer
msgbox LavenderTown_Dialogo_Obrero_Texto_1 MSGBOX_AUTOCLOSE
release
end

LavenderTown_Dialogo_Obrero_Texto_1:
.string "Lo siento, pero el tiempo para ver la\n"
	.string "TORRE POKÉMON pasó. Ahora solo podrá\l"
	.string "ser vista a través de los libros de\l"
	.string "historia.$"
