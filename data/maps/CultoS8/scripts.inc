CultoS8_MapScripts::
	.byte 0

CultoS8_Combate_Lider::
lock
applymovement OBJ_EVENT_ID_PLAYER, CultoS8_Combate_Lider_Move_1
waitmovement 0x0
msgbox CultoS8_Combate_Lider_Texto_1 MSGBOX_AUTOCLOSE
applymovement 10, CultoS8_Combate_Lider_Move_2
waitmovement 0x0
msgbox CultoS8_Combate_Lider_Texto_2 MSGBOX_AUTOCLOSE
applymovement 10, CultoS8_Combate_Lider_Move_3
waitmovement 0x0
msgbox CultoS8_Combate_Lider_Texto_3 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CULTO_2, CultoS8_Combate_Lider_Texto_4 
applymovement OBJ_EVENT_ID_PLAYER, CultoS8_Combate_Lider_Move_4
waitmovement 0x0
msgbox CultoS8_Combate_Lider_Texto_5 MSGBOX_AUTOCLOSE
applymovement 10, CultoS8_Combate_Lider_Move_4
waitmovement 0x0
msgbox CultoS8_Combate_Lider_Texto_6 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 10, CultoS8_Combate_Lider_Move_5
waitmovement 0x0
applymovement 10, CultoS8_Combate_Lider_Move_2
waitmovement 0x0
msgbox CultoS8_Combate_Lider_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox CultoS8_Combate_Lider_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox CultoS8_Combate_Lider_Texto_9 MSGBOX_AUTOCLOSE
msgbox CultoS8_Combate_Lider_Texto_10 MSGBOX_AUTOCLOSE
applymovement 10, CultoS8_Combate_Lider_Move_4
waitmovement 0x0
msgbox CultoS8_Combate_Lider_Texto_11 MSGBOX_AUTOCLOSE
applymovement 10, CultoS8_Combate_Lider_Move_6
waitmovement 0x0
msgbox CultoS8_Combate_Lider_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 171
release
end

CultoS8_Combate_Lider_Texto_1:
.string "{PLAYER}, has vuelto.$"

CultoS8_Combate_Lider_Texto_2:
.string "No digas nada, deja que tu equipo\n"
	.string "POKÉMON hable por sí solo. Esta\l"
	.string "vez te pondré a prueba de verdad.$"

CultoS8_Combate_Lider_Texto_3:
.string "Espero que estés preparado para lo\n"
	.string "que vas a ver.$"

CultoS8_Combate_Lider_Texto_4:
.string "Así que has seguido creciendo como\n"
	.string "ENTRENADOR…$"

CultoS8_Combate_Lider_Texto_5:
.string "No soy amigo de los halagos,\n"
	.string "pero he de admitir que todo el\l"
	.string "camino que has recorrido para\l"
	.string "llegar hasta aquí, en este estado,\l"
	.string "es impresionante, tanto que casi\l"
	.string "has alcanzado el tope que permiten\l"
	.string "las leyes de este mundo.$"

CultoS8_Combate_Lider_Texto_6:
.string "Sí, incluso podrías ser digno de\n"
	.string "presenciar al POKEMON ES…$"

CultoS8_Combate_Lider_Texto_7:
.string "¿Un ENTRENADOR misterioso ha\n"
	.string "logrado capturar a LUGIA y HO-OH?\l"
	.string "¿Y dice faltarle una pieza para\l"
	.string "liberar al que él llama el creador\l"
	.string "de todo?$"

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
	.string "viendo cómo has combatido{PAUSE 25}…{PAUSE 25} A\l"
	.string "alguien como tú solo el POKÉMON\l"
	.string "ESENCIA puede tumbar en combate.$"

CultoS8_Combate_Lider_Texto_11:
.string "Solo puedo decirte que aceptes el\n"
	.string "reto como uno más. Ningún POKÉMON\l"
	.string "LEGENDARIO o ANCESTRAL, por muy\l"
	.string "fuerte que sea, puede inutilizar\l"
	.string "completamente al resto de POKÉMON,\l"
	.string "a pesar de lo que ese charlatán\l"
	.string "pueda decir. LUGIA y HO-OH no los\l"
	.string "ha atrapado por el POKÉMON\l"
	.string "ESENCIA, lo ha hecho simplemente\l"
	.string "por completar su equipo de POKÉMON\l"
	.string "poderosos.$"

CultoS8_Combate_Lider_Texto_12:
.string "Aún podéis estar a tiempo de\n"
	.string "conocer acerca del POKÉMON ESENCIA,\l"
	.string "{PLAYER}, si recuperáis a LUGIA y\l"
	.string "HO-OH. Confío en ti, {PLAYER}.$"

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
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
msgbox CultoS8_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
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
	.string "{PLAYER}?\l"
	.string "{PAUSE 15}…{PAUSE 15}\l"
	.string "{PAUSE 15}…{PAUSE 15}\l"
	.string "¿RUINAS ALFA?\l"
	.string "Tal y como sospechamos, si un NATU\l"
	.string "estornuda en su hierba alta, lo\l"
	.string "sabremos. Toda la zona estará\l"
	.string "vigilada.\l"
	.string "{PAUSE 15}…{PAUSE 15}\l"
	.string "{PAUSE 15}…{PAUSE 15}\l"
	.string "¿Dices que LUGIA y HO-OH nada\l"
	.string "tienen que ver con el propósito de\l"
	.string "ese ENTRENADOR?\l"
	.string "Entonces mejor. Ahora sí, dirígete\l"
	.string "a CIUDAD ENDRINO, {PLAYER}, el\l"
	.string "MAESTRO DRAGÓN debe estar allí,\l"
	.string "con posiblemente el POKÉMON FUERTE\l"
	.string "VÍNCULO más poderoso.$"
