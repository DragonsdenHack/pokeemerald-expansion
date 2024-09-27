IlexForest_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, IlexForest_OnResume
map_script MAP_SCRIPT_ON_FRAME_TABLE, IlexForest_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, IlexForest_OnFrame
	.byte 0

IlexForest_OnResume:
	call IlexForest_SetupEscapeWarp
	end

IlexForest_OnFrame:
map_script_2 VAR_UNUSED_0x40FF, 29, IlexForest_Escena
map_script_2 VAR_UNUSED_0x40FF, 31, IlexForest_Escena_Despues
	.2byte 0

IlexForest_SetupEscapeWarp::
	setescapewarp MAP_AZALEA_TOWN, 7, 11
	return

IlexForest1::
lock     
faceplayer     
msgbox IllexForest_Text_1, MSGBOX_DEFAULT
release     
end

IllexForest_Text_1:
.string "PUEBLO AZALEA siempre ha obtenido\n"
.string "la madera con la que fabricamos\l"
.string "carbón de este bosque. Le estamos\l"
.string "muy agradecidos.$"



IlexForest2::
end



IlexForest3::
lock     
faceplayer     
msgbox IllexForest_Text_3, MSGBOX_DEFAULT
release     
end

IllexForest_Text_3:
.string "Malditos arbustos…\n"
.string "¿Por qué se regeneran si acabo de\l"
.string "cortarlos hace nada?\l"
.string "¿En serio tengo que volver a\l"
.string "AZALEA a por CORTE?$"



IlexForest4::
end



IlexForest5::
end



IlexForest6::
end



IlexForest7::
end



IlexForest8::
end



IlexForest9::
lock     
faceplayer     
msgbox IllexForest_Text_9, MSGBOX_DEFAULT
release     
end

IllexForest_Text_9:
.string "Entonces, FARFETCH es débil, pero\n"
.string "nadie corta la madera como ese\l"
.string "POKÉMON{PAUSE 5}…{PAUSE 5}$"



IlexForest10::
end



IlexForest11::
end



IlexForest_EventScript_Cazabichos::
	trainerbattle_single TRAINER_WALLY_VR_4, IlexForest_Text_CazabichosIntro, IlexForest_Text_CazabichosDefeated
	msgbox IlexForest_Text_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end



IlexForest_EventScript_Chico::
	trainerbattle_single TRAINER_BRENDAN_LILYCOVE_MUDKIP, IlexForest_Text_ChicoIntro, IlexForest_Text_ChicoDefeated
	msgbox IlexForest_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



IlexForest_EventScript_Chica::
	trainerbattle_single TRAINER_WALLY_VR_5, IlexForest_Text_ChicaIntro, IlexForest_Text_ChicaDefeated
	msgbox IlexForest_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end


IlexForest_Llamada_Giovanni::
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
msgbox IlexForest_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
msgbox IlexForest_Llamada_Giovanni_Texto_2 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
setvar VAR_UNUSED_0x40F7, 132
release
end

IlexForest_Llamada_Giovanni_Texto_1:
.string "GIOVANNI: ¿{PLAYER}?\n"
	.string "Se oye mal, debes de estar en el\l"
	.string "ENCINAR, ¿me equivoco?\l"
	.string "Grandes recuerdos me trae ese\l"
	.string "lugar, sí{PAUSE 25}…{PAUSE 25}\l"
	.string "Ya tenemos la información del\l"
	.string "BUTTERFREE-& de CÉSAR.\l"
	.string "Lo más extraordinario no son\l"
	.string "sus 505 STATS BASE, es su\l"
	.string "insuperable reparto de STATS\l"
	.string "útiles. Tiene{PAUSE 25}…{PAUSE 25} ¡solo 5 de BASE en\l"
	.string "ATAQUE!\l"
	.string "Entre esto y su HABILIDAD\l"
	.string "ADAPTABLE, en la práctica se\l"
	.string "vuelve un POKÉMON mucho más\l"
	.string "peligroso que la mayoría de\l"
	.string "PSEUDOLEGENDARIOS. Es increíble en\l"
	.string "lo que puede llegar a convertirse\l"
	.string "un POKÉMON como BUTTERFREE,\l"
	.string "a priori destinado a ser mediocre\l"
	.string "con sus 395 de BASE, ¿no crees?$"

IlexForest_Llamada_Giovanni_Texto_2:
.string "Por otro lado, he enviado a ATLAS\n"
	.string "a CIUDAD TRIGAL, quiero que te\l"
	.string "reúnas con él en la TORRE RADIO.\l"
	.string "ATLAS te explicará los detalles\l"
	.string "cuando lo veas, espero noticias\l"
	.string "tuyas de nuevo {PLAYER}.$"


IlexForestDocumento_100::
msgbox IlexForestDocumento_Text_100, MSGBOX_SIGN   
end

IlexForestDocumento_Text_100:
.string "Hay tantos árboles en el ENCINAR\n"
	.string "que no se ve ni el cielo.\l"
	.string "Por favor, busca objetos que\l"
	.string "puedan haber caído.$"

IlexForest_IdaVuelta::
lock     
faceplayer  
goto_if_set FLAG_NUEVA_808, IlexForest_Despues
msgbox IlexForest_Texto_1, MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM91
msgbox IlexForest_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
setflag FLAG_NUEVA_808
release     
end

IlexForest_Despues::
msgbox IlexForest_Texto_2, MSGBOX_NPC
release
end

IlexForest_Texto_1.1:
.string "¡{PLAYER} obtuvo la MT91 IDA Y\n"
	.string "VUELTA de manos de cazabichos!$"

IlexForest_Texto_1:
.string "Estoy aquí desarrollando\n"
	.string "en secreto el movimiento TIPO\l"
	.string "BICHO defintivo en cuanto\l"
	.string "estrategia. IDA Y VUELTA marcará\l"
	.string "un antes y un después en el ritmo\l"
	.string "de los combates. Mira.$"

IlexForest_Texto_2:
.string "¡Vas a tener a los POKÉMON más\n"
	.string "escurridizos e impredecibles\l"
	.string "gracias a IDA Y VUELTA, ya lo\l"
	.string "verás!$"

IlexForest_Escena_Move_1:
walk_up
walk_up
walk_up
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
step_end

IlexForest_Escena_Move_2:
walk_fast_down
lock_facing_direction
walk_up
unlock_facing_direction
step_end

IlexForest_Escena_Move_3:
face_left
step_end

IlexForest_Escena_Move_4:
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
step_end

IlexForest_Escena_Move_5:
face_up
delay_16
delay_16
walk_slow_right
step_end

IlexForest_Escena_Move_6:
delay_8
face_down
step_end

IlexForest_Escena_Move_7:
walk_slow_right
step_end

IlexForest_Escena_Move_8:
face_up
step_end

IlexForest_Escena_Move_9:
walk_slow_up
walk_slow_up
step_end

IlexForest_Escena_Move_10:
delay_16
delay_8
face_up
step_end


IlexForest_Escena::
lock
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
setflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
setflag FLAG_HOENN_674
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_2
removeobject 19
removeobject 20
removeobject 3
removeobject 12
removeobject 13
removeobject 16
addobject 15
addobject 14
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, IlexForest_Escena_Move_1
waitmovement 0x0
special RemoveCameraObject
playmoncry SPECIES_SCYTHER, CRY_MODE_ENCOUNTER
msgbox IlexForest_Escena_Texto_1 MSGBOX_AUTOCLOSE
waitmoncry
applymovement 14, IlexForest_Escena_Move_2
delay 10
applymovement VAR_LAST_TALKED, Movement_CutTreeDown
waitmovement 0
removeobject VAR_LAST_TALKED
playse SE_M_CUT
waitse
removeobject 2
delay 75
applymovement 14, IlexForest_Escena_Move_3
applymovement 15, IlexForest_Escena_Move_3
waitmovement 0x0
delay 15
msgbox IlexForest_Escena_Texto_2 MSGBOX_AUTOCLOSE
delay 15
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_6
addobject 18
applymovement 18, IlexForest_Escena_Move_4
waitmovement 0x0
msgbox IlexForest_Escena_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 18, IlexForest_Escena_Move_5
waitmovement 0x0
msgbox IlexForest_Escena_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, IlexForest_Escena_Move_6
waitmovement 0x0
msgbox IlexForest_Escena_Texto_5 MSGBOX_AUTOCLOSE
applymovement 18, IlexForest_Escena_Move_7
waitmovement 0x0
msgbox IlexForest_Escena_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, IlexForest_Escena_Move_3
applymovement 15, IlexForest_Escena_Move_3
waitmovement 0x0
msgbox IlexForest_Escena_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 18, IlexForest_Escena_Move_8
waitmovement 0x0
msgbox IlexForest_Escena_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, IlexForest_Escena_Move_10
applymovement 14, IlexForest_Escena_Move_10
applymovement 18, IlexForest_Escena_Move_9
waitmovement 0x0
msgbox IlexForest_Escena_Texto_9 MSGBOX_AUTOCLOSE
delay 15
applymovement 15, IlexForest_Escena_Move_11
waitmovement 0x0
msgbox IlexForest_Escena_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 18, IlexForest_Escena_Move_11
waitmovement 0x0
msgbox IlexForest_Escena_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement 18, IlexForest_Escena_Move_6
waitmovement 0x0
msgbox IlexForest_Escena_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox IlexForest_Escena_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox IlexForest_Escena_Texto_14 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, IlexForest_Escena_Move_12
applymovement 18, IlexForest_Escena_Move_13
waitmovement 0x0
msgbox IlexForest_Escena_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 18, IlexForest_Escena_Move_14
waitmovement 0x0
msgbox IlexForest_Escena_Texto_16 MSGBOX_AUTOCLOSE
playse SE_LEDGE
applymovement 15, IlexForest_Escena_Move_15
waitmovement 0x0
waitse
delay 5
msgbox IlexForest_Escena_Texto_17 MSGBOX_AUTOCLOSE
delay 15
applymovement 18, IlexForest_Escena_Move_12
waitmovement 0x0
msgbox IlexForest_Escena_Texto_18 MSGBOX_AUTOCLOSE
delay 15
applymovement 18, IlexForest_Escena_Move_16
delay 250
applymovement 15, IlexForest_Escena_Move_6
delay 15
msgbox IlexForest_Escena_Texto_19 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_SCYTHER, CRY_MODE_ENCOUNTER
waitmoncry
delay 15
msgbox IlexForest_Escena_Texto_20 MSGBOX_AUTOCLOSE
delay 15
clearflag FLAG_HOENN_674
setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
setflag FLAG_HIDE_UNION_ROOM_PLAYER_2
clearflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
delay 15
setvar VAR_UNUSED_0x40FF, 30
warpsilent MAP_SOUTH_ROUTE45, 5, 82
delay 100
release
end

IlexForest_Escena_Move_16:
walk_slow_down
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
step_end

IlexForest_Escena_Move_15:
jump_in_place_left
step_end

IlexForest_Escena_Move_15.1:
jump_in_place_down
step_end

IlexForest_Escena_Move_14:
walk_in_place_right
step_end

IlexForest_Escena_Move_13:
walk_down
face_right
step_end

IlexForest_Escena_Move_12:
delay_16
face_left
step_end

IlexForest_Escena_Move_11:
walk_in_place_up
step_end

IlexForest_Escena_Texto_1:
	.string "¡Ther!$"

IlexForest_Escena_Texto_2:
	.string "¡Oh! ¡Estoy impresionado!$"

IlexForest_Escena_Texto_3:
	.string "Tu SCYTHER no para de crecer.$"

IlexForest_Escena_Texto_4:
	.string "En los tiempos que corren, ver una joven\n"
	.string "con esta ilusión es un regalo para la\l"
	.string "vista, ¡me alegra que los viejos valores\l"
	.string "aún perduran!$"

IlexForest_Escena_Texto_5:
	.string "Gracias, pero{PAUSE 25}…{PAUSE 25} yo lo sigo viendo igual.$"

IlexForest_Escena_Texto_6:
	.string "Ah{PAUSE 25}…{PAUSE 25} Sí{PAUSE 25}…{PAUSE 25} Tú lo ves todo el tiempo. No\n"
	.string "puedes apreciarlo, pero con cada nueva\l"
	.string "acción, cada combate, tu POKÉMON está\l"
	.string "cambiando.$"

IlexForest_Escena_Texto_7:
	.string "¿Eso quiere decir que en algún momento\n"
	.string "será un KLEAVOR como el de CÉSAR?$"

IlexForest_Escena_Texto_8:
	.string "¡Oh! ¡Si supieras por lo que CÉSAR pasó\n"
	.string "antes de evolucionar a su SCYTHER!$"

IlexForest_Escena_Texto_9:
	.string "Solo lo logró tras viajar por toda\n"
	.string "JOHTO, tras desvelar todos los\l"
	.string "secretos que la región esconde. No\l"
	.string "antes.$"

IlexForest_Escena_Texto_10:
	.string "Pero{PAUSE 25}…{PAUSE 25} yo aún no he llegado siquiera a\n"
	.string "desvelar los secretos del ENCINAR…\l"
	.string "¿cómo podré llegar a eso?$"

IlexForest_Escena_Texto_11:
	.string "El camino del entrenador requiere\n"
	.string "tiempo y sacrificio, solo así podrás\l"
	.string "sembrar raíces fuertes, que no cedan\l"
	.string "ante la adversidad.$"

IlexForest_Escena_Texto_12:
	.string "Acumular energía y poner ilusión, como\n"
	.string "tú en este SCYTHER, nunca es fútil,\l"
	.string "nunca en vano. Siempre está regando\l"
	.string "algo.$"

IlexForest_Escena_Texto_13:
	.string "Esa es la esencia de los grandes\n"
	.string "maestros de JOHTO.$"

IlexForest_Escena_Texto_14:
	.string "Oh…$"

IlexForest_Escena_Texto_15:
	.string "Tú, jovencita{PAUSE 25}…{PAUSE 25} tienes todo lo que hace\n"
	.string "falta: tiempo y talento.$"

IlexForest_Escena_Texto_16:
	.string "JOHTO te espera, y depende de ti acudir\n"
	.string "a su llamada. ¿Acudirás?$"

IlexForest_Escena_Texto_17:
	.string "¡Claro que acudiré!$"

IlexForest_Escena_Texto_18:
	.string "En ese caso{PAUSE 35}…{PAUSE 35} ¡JOHTO te observa!\n"
	.string "¡Jo, jo, jo!$"

IlexForest_Escena_Texto_19:
	.string "Vamos, SCYTHER.\n"
	.string "¡La grandeza nos espera!$"

IlexForest_Escena_Texto_20:
	.string "¡Ther!$"

IlexForest_Escena_Despues_Move_1:
walk_in_place_down
step_end

IlexForest_Escena_Despues_Move_2:
lock_facing_direction
walk_up
unlock_facing_direction
step_end

IlexForest_Escena_Despues_Move_3:
delay_8
face_up
step_end

IlexForest_Escena_Despues_Move_4:
delay_16
delay_8
face_left
delay_16
delay_8
face_down
step_end

IlexForest_Escena_Despues_Move_5:
delay_8
face_left
step_end

IlexForest_Escena_Despues_Move_6:
walk_slow_down
step_end

IlexForest_Escena_Despues_Move_7:
face_left
step_end

IlexForest_Escena_Despues_Move_8:
emote_exclamation_mark
step_end

IlexForest_Escena_Despues_Move_9:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

IlexForest_Escena_Despues_Move_10:
walk_left
step_end

IlexForest_Escena_Despues_Move_11:
walk_in_place_right
step_end

IlexForest_Escena_Despues_Move_12:
delay_16
face_left
delay_16
delay_8
face_right
delay_16
delay_8
walk_in_place_right
step_end

IlexForest_Escena_Despues_Move_13:
walk_in_place_left
step_end

IlexForest_Escena_Despues_Move_14:
walk_right
step_end

IlexForest_Escena_Despues_Move_15:
delay_8
face_down
step_end

IlexForest_Escena_Despues_Move_16:
walk_in_place_up
step_end

IlexForest_Escena_Despues_Move_17:
delay_16
face_left
delay_16
delay_16
face_down
step_end

IlexForest_Escena_Despues_Move_7.1:
emote_question_mark
step_end

IlexForest_Escena_Despues_Move_18:
delay_16
delay_8
lock_facing_direction
walk_slow_up
unlock_facing_direction
delay_16
delay_8
face_right
delay_16
delay_8
face_up
delay_16
delay_16
face_down
step_end

IlexForest_Escena_Despues::
lock
setflag FLAG_HOENN_674
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_2
addobject 15
addobject 14
removeobject 20
removeobject 19
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, IlexForest_Escena_Move_1
waitmovement 0x0
special RemoveCameraObject
applymovement 15, IlexForest_Escena_Despues_Move_1
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_1 MSGBOX_AUTOCLOSE
playmoncry SPECIES_SCYTHER, CRY_MODE_ENCOUNTER
waitmoncry
msgbox IlexForest_Escena_Despues_Texto_2 MSGBOX_AUTOCLOSE
applymovement 14, IlexForest_Escena_Move_2
delay 10
applymovement VAR_LAST_TALKED, Movement_CutTreeDown
waitmovement 0
removeobject VAR_LAST_TALKED
playse SE_M_CUT
waitse
removeobject 2
delay 75
msgbox IlexForest_Escena_Despues_Texto_3 MSGBOX_AUTOCLOSE
delay 35
applymovement 14, IlexForest_Escena_Despues_Move_3
applymovement 15, IlexForest_Escena_Despues_Move_2
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_4 MSGBOX_AUTOCLOSE
delay 15
applymovement 15, IlexForest_Escena_Despues_Move_3
waitmovement 0x0
delay 35
msgbox IlexForest_Escena_Despues_Texto_5 MSGBOX_AUTOCLOSE
applymovement 15, IlexForest_Escena_Despues_Move_4
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, IlexForest_Escena_Despues_Move_5
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_7 MSGBOX_AUTOCLOSE
applymovement 15, IlexForest_Escena_Despues_Move_4
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_8 MSGBOX_AUTOCLOSE
applymovement 15, IlexForest_Escena_Despues_Move_6
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_9 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_SCYTHER, CRY_MODE_ENCOUNTER
waitmoncry
applymovement 14, IlexForest_Escena_Despues_Move_7.1
waitmovement 0x0
delay 35
msgbox IlexForest_Escena_Despues_Texto_2 MSGBOX_AUTOCLOSE
delay 25
msgbox IlexForest_Escena_Despues_Texto_10 MSGBOX_AUTOCLOSE
delay 25
applymovement 15, IlexForest_Escena_Despues_Move_7
applymovement 14, IlexForest_Escena_Despues_Move_7
waitmovement 0x0
delay 15
msgbox IlexForest_Escena_Despues_Texto_11 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 15, IlexForest_Escena_Despues_Move_8
waitmovement 0x0
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_3
addobject 12
addobject 13
applymovement 12, IlexForest_Escena_Despues_Move_9
applymovement 13, IlexForest_Escena_Despues_Move_9
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_12 MSGBOX_AUTOCLOSE
applymovement 15, IlexForest_Escena_Despues_Move_10
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_13 MSGBOX_AUTOCLOSE
applymovement 13, IlexForest_Escena_Despues_Move_11
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_14 MSGBOX_AUTOCLOSE
applymovement 12, IlexForest_Escena_Despues_Move_12
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, IlexForest_Escena_Despues_Move_13
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_16 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 12, IlexForest_Escena_Despues_Move_8
waitmovement 0x0
applymovement 15, IlexForest_Escena_Despues_Move_15
applymovement 12, IlexForest_Escena_Despues_Move_14
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_17 MSGBOX_AUTOCLOSE
delay 5
playse SE_PIN
applymovement 15, IlexForest_Escena_Despues_Move_8
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_18 MSGBOX_AUTOCLOSE
delay 15
msgbox IlexForest_Escena_Despues_Texto_19 MSGBOX_AUTOCLOSE
applymovement 12, IlexForest_Escena_Despues_Move_3
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_20 MSGBOX_AUTOCLOSE
applymovement 12, IlexForest_Escena_Despues_Move_16
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_21 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 15, IlexForest_Escena_Despues_Move_8
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, IlexForest_Escena_Despues_Move_14
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_23 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, IlexForest_Escena_Despues_Move_17
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_24 MSGBOX_AUTOCLOSE
applymovement 12, IlexForest_Escena_Despues_Move_11
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_25 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 15, IlexForest_Escena_Despues_Move_8
waitmovement 0x0
delay 10
msgbox IlexForest_Escena_Despues_Texto_26 MSGBOX_AUTOCLOSE
delay 10
applymovement 12, IlexForest_Escena_Despues_Move_3
waitmovement 0x0
delay 10
msgbox IlexForest_Escena_Despues_Texto_27 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, IlexForest_Escena_Despues_Move_3
applymovement 15, IlexForest_Escena_Despues_Move_18
waitmovement 0x0
delay 10
msgbox IlexForest_Escena_Despues_Texto_28 MSGBOX_AUTOCLOSE
applymovement 12, IlexForest_Escena_Despues_Move_16
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_28.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 14, IlexForest_Escena_Despues_Move_3
applymovement 15, IlexForest_Escena_Despues_Move_19
waitmovement 0x0
delay 10
msgbox IlexForest_Escena_Despues_Texto_29 MSGBOX_AUTOCLOSE
playse SE_LEDGE
applymovement 15, IlexForest_Escena_Move_15.1
waitmovement 0x0
waitse
delay 15
msgbox IlexForest_Escena_Despues_Texto_30 MSGBOX_AUTOCLOSE
applymovement 14, IlexForest_Escena_Despues_Move_20
applymovement 15, IlexForest_Escena_Despues_Move_21
applymovement 12, IlexForest_Escena_Despues_Move_22
applymovement 13, IlexForest_Escena_Despues_Move_22
waitmovement 0x0
removeobject 15
removeobject 12
removeobject 13
applymovement 14, IlexForest_Escena_Despues_Move_23
waitmovement 0x0
playmoncry SPECIES_SCYTHER, CRY_MODE_ENCOUNTER
waitmoncry
msgbox IlexForest_Escena_Despues_Texto_2 MSGBOX_AUTOCLOSE
delay 15
addobject 16
applymovement 16, IlexForest_Escena_Despues_Move_24
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_31 MSGBOX_AUTOCLOSE
applymovement 14, IlexForest_Escena_Despues_Move_26
applymovement 16, IlexForest_Escena_Despues_Move_25
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_32 MSGBOX_AUTOCLOSE
delay 15
applymovement 14, IlexForest_Escena_Despues_Move_27
applymovement 16, IlexForest_Escena_Despues_Move_16
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_33 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, IlexForest_Escena_Despues_Move_28
waitmovement 0x0
special RemoveCameraObject
playse SE_BALL_THROW
waitse
delay 15
playse SE_BALL_TRADE
waitse
addobject 17
delay 15
playmoncry SPECIES_RESHIRAM, CRY_MODE_ENCOUNTER
waitmoncry
msgbox IlexForest_Escena_Despues_Texto_34 MSGBOX_AUTOCLOSE
delay 25
applymovement 16, IlexForest_Escena_Despues_Move_29
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_35 MSGBOX_AUTOCLOSE
delay 15
msgbox IlexForest_Escena_Despues_Texto_36 MSGBOX_AUTOCLOSE
delay 15
msgbox IlexForest_Escena_Despues_Texto_37 MSGBOX_AUTOCLOSE
delay 15
msgbox IlexForest_Escena_Despues_Texto_38 MSGBOX_AUTOCLOSE
applymovement 16, IlexForest_Escena_Despues_Move_16
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_39 MSGBOX_AUTOCLOSE
delay 15
msgbox IlexForest_Escena_Despues_Texto_40 MSGBOX_AUTOCLOSE
playmoncry SPECIES_SCYTHER, CRY_MODE_ENCOUNTER
waitmoncry
msgbox IlexForest_Escena_Despues_Texto_41 MSGBOX_AUTOCLOSE
playse SE_LEDGE
applymovement 16, IlexForest_Escena_Despues_Move_31
applymovement 14, IlexForest_Escena_Despues_Move_30
waitmovement 0x0
delay 45
msgbox IlexForest_Escena_Despues_Texto_42 MSGBOX_AUTOCLOSE
delay 15
msgbox IlexForest_Escena_Despues_Texto_43 MSGBOX_AUTOCLOSE
playmoncry SPECIES_SCYTHER, CRY_MODE_ENCOUNTER
waitmoncry
msgbox IlexForest_Escena_Despues_Texto_44 MSGBOX_AUTOCLOSE
playse SE_LEDGE
applymovement 14, IlexForest_Escena_Despues_Move_30
waitmovement 0x0
playse SE_LEDGE
applymovement 14, IlexForest_Escena_Despues_Move_30
waitmovement 0x0
delay 15
msgbox IlexForest_Escena_Despues_Texto_45 MSGBOX_AUTOCLOSE
applymovement 16, IlexForest_Escena_Despues_Move_32
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_46 MSGBOX_AUTOCLOSE
applymovement 16, IlexForest_Escena_Despues_Move_33
waitmovement 0x0
playmoncry SPECIES_RESHIRAM, CRY_MODE_ENCOUNTER
waitmoncry
msgbox IlexForest_Escena_Despues_Texto_47 MSGBOX_AUTOCLOSE
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
playse SE_M_FLAME_WHEEL2
applymovement 17, IlexForest_Escena_Despues_Move_34
waitmovement 0x0
delay 15
playse SE_SUPER_EFFECTIVE
waitse
playmoncry SPECIES_SCYTHER, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
removeobject 14
waitse
delay 25
msgbox IlexForest_Escena_Despues_Texto_48 MSGBOX_AUTOCLOSE
delay 25
msgbox IlexForest_Escena_Despues_Texto_49 MSGBOX_AUTOCLOSE
delay 25
applymovement 16, IlexForest_Escena_Despues_Move_35
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_50 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_2
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
setvar VAR_UNUSED_0x40FF, 32
warpsilent MAP_ROUTE27, 74, 8
release
end

IlexForest_Escena_Despues_Move_35:
face_up
delay_16
step_end

IlexForest_Escena_Despues_Move_34:
walk_fast_down
walk_fast_down
step_end

IlexForest_Escena_Despues_Move_33:
walk_in_place_down
step_end

IlexForest_Escena_Despues_Move_32:
face_right
delay_16
delay_16
delay_16
face_down
delay_16
delay_16
step_end

IlexForest_Escena_Despues_Move_31:
delay_16
face_down
step_end

IlexForest_Escena_Despues_Move_30:
jump_in_place_up
step_end

IlexForest_Escena_Despues_Move_29:
face_left
delay_16
delay_16
face_up
delay_16
step_end

IlexForest_Escena_Despues_Move_28:
walk_fast_up
walk_fast_up
step_end

IlexForest_Escena_Despues_Move_27:
delay_8
face_up
step_end

IlexForest_Escena_Despues_Move_26:
delay_16
face_left
step_end

IlexForest_Escena_Despues_Move_25:
walk_slow_up
step_end

IlexForest_Escena_Despues_Move_24:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
step_end

IlexForest_Escena_Despues_Move_23:
face_left
delay_16
delay_16
face_down
delay_16
delay_16
face_up
step_end


IlexForest_Escena_Despues_Move_22:
walk_in_place_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

IlexForest_Escena_Despues_Move_21:
delay_16
delay_8
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

IlexForest_Escena_Despues_Move_20:
delay_16
delay_16
face_left
delay_16
delay_16
emote_question_mark
step_end

IlexForest_Escena_Despues_Move_19:
walk_down
step_end

IlexForest_Escena_Despues_Texto_1:
	.string "¡SCYTHER! ¡Otra vez!$"

IlexForest_Escena_Despues_Texto_2:
	.string "¡Ther!$"

IlexForest_Escena_Despues_Texto_3:
	.string "Maldita sea{PAUSE 25}…{PAUSE 25}$"

IlexForest_Escena_Despues_Texto_4:
	.string "¿Por qué estoy ahora empeorando? ¿Y\n"
	.string "por qué me siento más cansada que hace\l"
	.string "tan solo unas semanas?$"

IlexForest_Escena_Despues_Texto_5:
	.string "Nunca creí que las leyes\n"
	.string "del mundo fueran tan duras.$"

IlexForest_Escena_Despues_Texto_6:
	.string "Es como si estuviera anclada a la\n"
	.string "tierra. Estoy aún tan lejos de esos\l"
	.string "grandes maestros y, sin embargo, ya\l"
	.string "estancada.$"

IlexForest_Escena_Despues_Texto_7:
	.string "Las cuentas no salen{PAUSE 25}…{PAUSE 25}$"

IlexForest_Escena_Despues_Texto_8:
	.string "¿Será una prueba?$"

IlexForest_Escena_Despues_Texto_9:
	.string "Pero{PAUSE 35}…{PAUSE 35} si de verdad JOHTO está\n"
	.string "observándome, no se siente.$"

IlexForest_Escena_Despues_Texto_10:
	.string "{PAUSE 25}…{PAUSE 25} …{PAUSE 25}$"

IlexForest_Escena_Despues_Texto_11:
	.string "¡Ey, chica!$"

IlexForest_Escena_Despues_Texto_12:
	.string "¿Quieres ser guay como nosotros?$"

IlexForest_Escena_Despues_Texto_13:
	.string "¿A qué te refieres?$"

IlexForest_Escena_Despues_Texto_14:
	.string "Hemos oído todo ese rollo del -camino\n"
	.string "del Entrenador- que ese anciano te ha\l"
	.string "soltado.$"

IlexForest_Escena_Despues_Texto_15:
	.string "Nosotros podemos enseñarte el\n"
	.string "verdadero camino. ¿Has estado en\l"
	.string "CIUDAD TRIGAL?$"

IlexForest_Escena_Despues_Texto_16:
	.string "No, soy de PUEBLO AZALEA.$"

IlexForest_Escena_Despues_Texto_17:
	.string "Vaya, ese SCYTHER parece muy fuerte.\n"
	.string "Nosotros teníamos uno, ¿sabes que en\l"
	.string "TRIGAL venden una piedra para\l"
	.string "evolucionarlo a SCIZOR?$"

IlexForest_Escena_Despues_Texto_18:
	.string "¡¿De verdad?!$"

IlexForest_Escena_Despues_Texto_19:
	.string "Aunque{PAUSE 15}…{PAUSE 15} he visto varios SCIZOR;\n"
	.string "KLEAVOR, únicamente el de CÉSAR.$"

IlexForest_Escena_Despues_Texto_20:
	.string "¿KLEAVOR?$"

IlexForest_Escena_Despues_Texto_21:
	.string "Jovencita. Tienes cualquier POKÉMON\n"
	.string "que desees al alcance de tu mano. No\l"
	.string "solo SCIZOR, también hay\l"
	.string "PSEUDOLEGENDARIOS, INICIALES,\l"
	.string "POKÉMON exóticos…$"

IlexForest_Escena_Despues_Texto_22:
	.string "¿¡Qué!?$"

IlexForest_Escena_Despues_Texto_23:
	.string "¡Y no te olvides de PORYGON! Si compras\n"
	.string "sus complementos, ¡puedes tener un\l"
	.string "PORYGON-Z directamente!$"

IlexForest_Escena_Despues_Texto_24:
	.string "¡¿Sin entrenarlo nada?!$"

IlexForest_Escena_Despues_Texto_25:
	.string "¡Por supuesto! ¡Ahora cualquier novato\n"
	.string "puede tener un equipo completo de\l"
	.string "POKÉMON evolucionados!$"

IlexForest_Escena_Despues_Texto_26:
	.string "¡Oh!$"

IlexForest_Escena_Despues_Texto_27:
	.string "Cortando árboles aquí vas a quedar\n"
	.string "agotada, ¿y todo para qué? A ese ritmo,\l"
	.string "pasarán años antes de que alcances un\l"
	.string "nivel considerable.$"

IlexForest_Escena_Despues_Texto_28:
	.string "Tenéis razón{PAUSE 35}…{PAUSE 35} el mundo ha cambiado. Si\n"
	.string "no aprovecho estas herramientas, ¡me\l"
	.string "quedaré atrás!$"

IlexForest_Escena_Despues_Texto_28.1:
	.string "Así se habla.\n"
	.string "Serás tan guay como cualquiera.$"

IlexForest_Escena_Despues_Texto_29:
	.string "Espera aquí, SCYTHER. ¿O tal vez\n"
	.string "debería decir SCIZOR?$"

IlexForest_Escena_Despues_Texto_30:
	.string "¡TRIGAL! ¡Allá vamos!$"

IlexForest_Escena_Despues_Texto_31:
	.string "????: Así que EL ENCINAR{PAUSE 15}…{PAUSE 15}$"

IlexForest_Escena_Despues_Texto_32:
	.string "La leyenda dice que un poderoso\n"
	.string "guardián protege este bosque.$"

IlexForest_Escena_Despues_Texto_33:
	.string "Me pregunto qué ocurrirá si\n"
	.string "agito un poco las aguas.$"

IlexForest_Escena_Despues_Texto_34:
	.string "¡Ram!$"

IlexForest_Escena_Despues_Texto_35:
	.string "Aunque, pensándolo mejor{PAUSE 15}…{PAUSE 15}$"

IlexForest_Escena_Despues_Texto_36:
	.string "Las leyendas acaban decepcionando.$"

IlexForest_Escena_Despues_Texto_37:
	.string "La gran mayoría sangra como todos. Solo\n"
	.string "que{PAUSE 25}…{PAUSE 25} tuvieron la suerte de no llegar a\l"
	.string "hacerlo en presencia de otros.$"

IlexForest_Escena_Despues_Texto_38:
	.string "Esos otros fueron los que tan a la\n"
	.string "ligera otorgaron ese estatus a\l"
	.string "cualquier legendario menor.$"

IlexForest_Escena_Despues_Texto_39:
	.string "Puedes estar tranquilo, leyenda del\n"
	.string "bosque. No me interesa exponer tus\l"
	.string "vergüenzas.$"

IlexForest_Escena_Despues_Texto_40:
	.string "La única leyenda de verdad me espera.$"

IlexForest_Escena_Despues_Texto_41:
	.string "¡Ther!$"

IlexForest_Escena_Despues_Texto_42:
	.string "¿Hmm? No parece un SCYTHER\n"
	.string "convencional.$"

IlexForest_Escena_Despues_Texto_43:
	.string "Mejor o peor entrenado. Bendecido o no,\n"
	.string "es irrelevante.$"

IlexForest_Escena_Despues_Texto_44:
	.string "¡Ther!$"

IlexForest_Escena_Despues_Texto_45:
	.string "De modo que{PAUSE 25}…{PAUSE 25} ¿te empeñas en ignorar\n"
	.string "tus propios límites?$"

IlexForest_Escena_Despues_Texto_46:
	.string "En ese caso, te los mostraré;\n"
	.string "considéralo un regalo.$"

IlexForest_Escena_Despues_Texto_47:
	.string "¡Ram!$"

IlexForest_Escena_Despues_Texto_48:
	.string "Tratar de suplir con coraje una\n"
	.string "diferencia de base insalvable. Absurdo.$"

IlexForest_Escena_Despues_Texto_49:
	.string "Tal es la fragilidad de los mortales.$"

IlexForest_Escena_Despues_Texto_50:
	.string "Ya va siendo hora{PAUSE 35}…{PAUSE 35} de visitar los\n"
	.string "lugares de JOHTO que de verdad\l"
	.string "importan.$"
