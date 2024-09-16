IlexForest_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, IlexForest_OnResume
	.byte 0

IlexForest_OnResume:
	call IlexForest_SetupEscapeWarp
	end

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
	.string "BUTTERFREE FUERTE VÍNCULO de\l"
	.string "CÉSAR. Lo más extraordinario no\l"
	.string "son sus 505 STATS BASE, es\l"
	.string "su insuperable reparto de STATS\l"
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
walk_up
walk_right
walk_right
walk_right
walk_right
step_end

IlexForest_Escena_Move_2:
walk_fast_down
lock_facing_direction
walk_down
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
removeobject 19
removeobject 20
removeobject 3
removeobject 12
removeobject 13
removeobject 16
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, IlexForest_Escena_Move_1
waitmovement 0x0
special RemoveCameraObject
playmoncry SPECIES_SCYTHER, CRY_MODE_ENCOUNTER
msgbox IlexForest_Escena_Texto_1 MSGBOX_AUTOCLOSE
waitmoncry
applymovement 14, IlexForest_Escena_Move_2
delay 10
dofieldeffect FLDEFF_USE_CUT_ON_TREE
waitstate
applymovement VAR_LAST_TALKED, Movement_CutTreeDown
waitmovement 0
removeobject VAR_LAST_TALKED
delay 15
applymovement 15, IlexForest_Escena_Move_3
waitmovement 0x0
msgbox IlexForest_Escena_Texto_2 MSGBOX_AUTOCLOSE
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
applymovement 15, IlexForest_Escena_Move_3
waitmovement 0x0
msgbox IlexForest_Escena_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 18, IlexForest_Escena_Move_8
waitmovement 0x0
msgbox IlexForest_Escena_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, IlexForest_Escena_Move_10
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
delay 50
applymovement 15, IlexForest_Escena_Move_6
waitmovement 0x0
msgbox IlexForest_Escena_Texto_19 MSGBOX_AUTOCLOSE
playmoncry SPECIES_SCYTHER, CRY_MODE_ENCOUNTER
delay 15
msgbox IlexForest_Escena_Texto_20 MSGBOX_AUTOCLOSE
waitmoncry
clearflag FLAG_HOENN_674
setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
setflag FLAG_HIDE_UNION_ROOM_PLAYER_2
clearflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
removeobject 15
removeobject 18
removeobject 14
delay 15
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
step_end

IlexForest_Escena_Move_15:
jump_in_place_left
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
	.string "Gracias, pero... yo lo sigo viendo igual.$"

IlexForest_Escena_Texto_6:
	.string "Ah... Sí... Tú lo ves todo el tiempo. No\n"
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
	.string "Pero… yo aún no he llegado siquiera a\n"
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
	.string "Tú, jovencita… tienes todo lo que hace\n"
	.string "falta: tiempo y talento.$"

IlexForest_Escena_Texto_16:
	.string "JOHTO te espera, y depende de ti acudir\n"
	.string "a su llamada. ¿Acudirás?$"

IlexForest_Escena_Texto_17:
	.string "¡Claro que acudiré!$"

IlexForest_Escena_Texto_18:
	.string "En ese caso… ¡JOHTO te observa!\n"
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
walk_down
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


IlexForest_Escena_Despues::
lock
setflag FLAG_HOENN_674
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_2
addobject 15
addobject 14
removeobject 20
removeobject 19
applymovement OBJ_EVENT_ID_CAMERA, IlexForest_Escena_Move_1
waitmovement 0x0
special RemoveCameraObject
applymovement 15, IlexForest_Escena_Despues_Move_1
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_1 MSGBOX_AUTOCLOSE
playmoncry SPECIES_SCYTHER, CRY_MODE_ENCOUNTER
msgbox IlexForest_Escena_Despues_Texto_2 MSGBOX_AUTOCLOSE
waitmoncry
applymovement 14, IlexForest_Escena_Move_2
delay 10
dofieldeffect FLDEFF_USE_CUT_ON_TREE
waitstate
applymovement VAR_LAST_TALKED, Movement_CutTreeDown
waitmovement 0
removeobject VAR_LAST_TALKED
delay 15
msgbox IlexForest_Escena_Despues_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement 14, IlexForest_Escena_Despues_Move_3
applymovement 15, IlexForest_Escena_Despues_Move_2
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_4 MSGBOX_AUTOCLOSE
applymovement 15, IlexForest_Escena_Despues_Move_3
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_5 MSGBOX_AUTOCLOSE
applymovement 15, IlexForest_Escena_Despues_Move_4
waitmovement 0x0
msgbox IlexForest_Escena_Despues_Texto_6 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_7 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_8 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_9 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_10 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_11 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_12 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_13 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_14 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_15 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_16 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_17 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_18 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_19 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_20 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_21 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_22 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_23 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_24 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_25 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_26 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_27 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_28 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_29 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_30 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_31 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_32 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_33 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_34 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_35 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_36 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_37 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_38 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_39 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_40 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_41 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_42 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_43 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_44 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_45 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_46 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_47 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_48 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_49 MSGBOX_AUTOCLOSE
msgbox IlexForest_Escena_Despues_Texto_50 MSGBOX_AUTOCLOSE
release
end

IlexForest_Escena_Despues_Texto_1:
	.string "¡SCYTHER! ¡Otra vez!$"

IlexForest_Escena_Despues_Texto_2:
	.string "¡Ther!$"

IlexForest_Escena_Despues_Texto_3:
	.string "Maldita sea…$"

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
	.string "Las cuentas no salen…$"

IlexForest_Escena_Despues_Texto_8:
	.string "¿Será una prueba?$"

IlexForest_Escena_Despues_Texto_9:
	.string "Pero… si de verdad JOHTO está\n"
	.string "observándome, no se siente.$"

IlexForest_Escena_Despues_Texto_10:
	.string "… …$"

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
	.string "Aunque… he visto varios SCIZOR;\n"
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
	.string "Tenéis razón… el mundo ha cambiado. Si\n"
	.string "no aprovecho estas herramientas, ¡me\l"
	.string "quedaré atrás!$"

IlexForest_Escena_Despues_Texto_29:
	.string "Espera aquí, SCYTHER. ¿O tal vez\n"
	.string "debería decir SCIZOR?$"

IlexForest_Escena_Despues_Texto_30:
	.string "¡TRIGAL! ¡Allá vamos!$"

IlexForest_Escena_Despues_Texto_31:
	.string "????: Así que EL ENCINAR…$"

IlexForest_Escena_Despues_Texto_32:
	.string "La leyenda dice que un poderoso\n"
	.string "guardián protege este bosque.$"

IlexForest_Escena_Despues_Texto_33:
	.string "Me pregunto qué ocurrirá si\n"
	.string "agito un poco las aguas.$"

IlexForest_Escena_Despues_Texto_34:
	.string "¡Ram!$"

IlexForest_Escena_Despues_Texto_35:
	.string "Aunque, pensándolo mejor…$"

IlexForest_Escena_Despues_Texto_36:
	.string "Las leyendas acaban decepcionando.$"

IlexForest_Escena_Despues_Texto_37:
	.string "La gran mayoría sangra como todos. Solo\n"
	.string "que… tuvieron la suerte de no llegar a\l"
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
	.string "De modo que… ¿te empeñas en ignorar\n"
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
	.string "Ya va siendo hora… de visitar los\n"
	.string "lugares de JOHTO que de verdad\l"
	.string "importan.$"
