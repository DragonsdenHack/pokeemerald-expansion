CultoS8_MapScripts::
	.byte 0

CultoS8_Combate_Lider::
lock
applymovement OBJ_EVENT_ID_PLAYER, CultoS8_Combate_Lider_Move_1
waitmovement 0x0
delay 10
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, CultoS8_Combate_Lider_Move_1.1
waitmovement 0x0
special RemoveCameraObject
msgbox CultoS8_Combate_Lider_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 10, CultoS8_Combate_Lider_Move_2
waitmovement 0x0
delay 10
msgbox CultoS8_Combate_Lider_Texto_2 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, CultoS8_Combate_Lider_Move_1.2
applymovement 10, CultoS8_Combate_Lider_Move_3
waitmovement 0x0
special RemoveCameraObject
delay 10
msgbox CultoS8_Combate_Lider_Texto_3 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CULTO_2, CultoS8_Combate_Lider_Texto_4 
applymovement OBJ_EVENT_ID_PLAYER, CultoS8_Combate_Lider_Move_4
waitmovement 0x0
msgbox CultoS8_Combate_Lider_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 10, CultoS8_Combate_Lider_Move_4
waitmovement 0x0
delay 10
msgbox CultoS8_Combate_Lider_Texto_6 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 10, CultoS8_Combate_Lider_Move_5
waitmovement 0x0
waitse
delay 10
applymovement 10, CultoS8_Combate_Lider_Move_2
waitmovement 0x0
delay 10
msgbox CultoS8_Combate_Lider_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox CultoS8_Combate_Lider_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox CultoS8_Combate_Lider_Texto_9 MSGBOX_AUTOCLOSE
delay 10
msgbox CultoS8_Combate_Lider_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 10, CultoS8_Combate_Lider_Move_4
waitmovement 0x0
delay 10
msgbox CultoS8_Combate_Lider_Texto_11 MSGBOX_AUTOCLOSE
delay 10
applymovement 10, CultoS8_Combate_Lider_Move_6
waitmovement 0x0
delay 10
msgbox CultoS8_Combate_Lider_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 171
release
end

CultoS8_Combate_Lider_Move_1.1:
walk_slow_up
step_end

CultoS8_Combate_Lider_Move_1.2:
walk_slow_down
step_end

CultoS8_Combate_Lider_Texto_1:
.string "{PLAYER}{PAUSE 15}…{PAUSE 15} Has vuelto.$"

CultoS8_Combate_Lider_Texto_2:
.string "No digas nada, deja que tus POKÉMON\n"
	.string "hablen por sí solos. Esta vez\l"
	.string "te pondré a prueba de verdad.$"

CultoS8_Combate_Lider_Texto_3:
.string "Espero que estés preparado para lo\n"
	.string "que vas a ver.$"

CultoS8_Combate_Lider_Texto_4:
.string "Así que has seguido creciendo como\n"
	.string "ENTRENADOR{PAUSE 5}…{PAUSE 5}$"

CultoS8_Combate_Lider_Texto_5:
.string "No soy amigo de los halagos,\n"
	.string "pero he de admitir que todo el\l"
	.string "camino que has recorrido para\l"
	.string "llegar hasta aquí, en este estado,\l"
	.string "es impresionante.\l"
	.string "Tanto que{PAUSE 5}…{PAUSE 5} casi has alcanzado el tope\l"
	.string "que permiten las leyes de este mundo.$"

CultoS8_Combate_Lider_Texto_6:
.string "Sí, incluso podrías ser digno de\n"
	.string "presenciar al POKEMON ES{PAUSE 5}…{PAUSE 5}$"

CultoS8_Combate_Lider_Texto_7:
.string "¿Un ENTRENADOR misterioso logró\n"
	.string "capturar a LUGIA y HO-OH?\p"
	.string "¡¿Dice faltarle una pieza para liberar\n"
	.string "al que él llama el creador de todo?$"

CultoS8_Combate_Lider_Texto_8:
.string "{PAUSE 15}…{PAUSE 15}$"

CultoS8_Combate_Lider_Texto_9:
.string "No, no puede referirse al POKÉMON\n"
	.string "ESENCIA. Sea lo que sea, {PLAYER},\l"
	.string "lo que busca nada tiene que ver\l"
	.string "con nosotros, y su poder, inferior\l"
	.string "al del POKÉMON ESENCIA, puesto que\l"
	.string "este lo es verdaderamente todo.$"

CultoS8_Combate_Lider_Texto_10:
.string "Ahora bien, las RUINAS ALFA\n"
	.string "guardan innumerables secretos, tal\l"
	.string "vez sepa de alguna leyenda que\l"
	.string "desconozco. Pero tú, {PLAYER},\l"
	.string "viendo cómo has combatido{PAUSE 25}…{PAUSE 25}\p"
	.string "A alguien como tú solo el POKÉMON\n"
	.string "ESENCIA puede tumbar en combate.$"

CultoS8_Combate_Lider_Texto_11:
.string "Solo puedo decirte que aceptes el\n"
	.string "reto como uno más. Ningún POKÉMON\l"
	.string "LEGENDARIO o ANCESTRAL, por muy\l"
	.string "fuerte que sea, puede inutilizar\l"
	.string "completamente al resto de POKÉMON.\p"
	.string "A pesar de lo que ese charlatán\n"
	.string "pueda decir, LUGIA y HO-OH no los\l"
	.string "ha atrapado por el POKÉMON ESENCIA,\l"
	.string "sino por designios completamente\l"
	.string "ajenos a este.$"

CultoS8_Combate_Lider_Texto_12:
.string "Sea como sea, aún puedes estar a tiempo\n"
	.string "de conocer la verdad, {PLAYER}.$"

CultoS8_Combate_Lider_Move_1:
walk_in_place_up
step_end

CultoS8_Combate_Lider_Move_2:
face_down
step_end

CultoS8_Combate_Lider_Move_3:
walk_down
step_end

CultoS8_Combate_Lider_Move_4:
face_up
step_end

CultoS8_Combate_Lider_Move_5:
emote_exclamation_mark
step_end

CultoS8_Combate_Lider_Move_6:
walk_up
walk_in_place_up
step_end

CultoS8_Meditando::
lock
msgbox CultoS8_Meditando_Texto_1 MSGBOX_AUTOCLOSE
release
end

CultoS8_Meditando_Texto_1:
.string "{PAUSE 15}…{PAUSE 15}$"

CultoS8_Llamada_Giovanni::
lock
applymovement OBJ_EVENT_ID_PLAYER, UnionCave_Llamada_Giovanni_Move_1
playse SE_POKENAV_CALL
waitse
delay 30
playse SE_POKENAV_HANG_UP
waitse
msgbox CultoS8_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
playse SE_PC_OFF
waitse
setvar VAR_UNUSED_0x40F7, 172
delay 20
msgbox CultoS8_Llamada_Giovanni_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq IcePath_Llamada_Giovanni_No
warpsilent MAP_SOUTH_ROUTE45, 5, 114
release
end

CultoS8_Llamada_Giovanni_Texto_2:
.string "¿Quieres volver a la BASE ROCKET de\n"
	.string "JOHTO?$"

CultoS8_Llamada_Giovanni_Texto_1:
.string "GIOVANNI: ¿Has averiguado algo,\n"
	.string "{PLAYER}?\p"
	.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}\p"
	.string "¿RUINAS ALFA?\p"
	.string "Tal y como sospechamos, si un NATU\n"
	.string "estornuda en su hierba alta, lo\l"
	.string "sabremos. Toda la zona estará\l"
	.string "vigilada.\p"
	.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}\p"
	.string "¿Dices que LUGIA y HO-OH nada\n"
	.string "tienen que ver con el propósito\l"
	.string "de ese ENTRENADOR?\p"
	.string "Entonces, mejor. Ahora sí, dirígete\n"
	.string "a CIUDAD ENDRINO, {PLAYER}, el\l"
	.string "MAESTRO DRAGÓN debe estar allí,\l"
	.string "con el seguramente NO LEGENDARIO\l"
	.string "más poderoso de toda JOHTO.$"
