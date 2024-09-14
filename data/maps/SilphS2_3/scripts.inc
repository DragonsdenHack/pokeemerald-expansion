SilphS2_3_MapScripts::
	.byte 0

SilphS2_3_Presidente::
lock
applymovement OBJ_EVENT_ID_PLAYER, SilphS2_3_Presidente_Move_1
waitmovement 0x0
msgbox SilphS2_3_Presidente_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SilphS2_3_Presidente_Move_2
waitmovement 0x0
applymovement 1, SilphS2_3_Presidente_Move_3
waitmovement 0x0
msgbox SilphS2_3_Presidente_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_4
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_3
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_5
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Presidente_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_6
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_7
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Presidente_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_3
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_8
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_11 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, SilphS2_3_Presidente_Move_10
applymovement 1, SilphS2_3_Presidente_Move_9
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Presidente_Texto_13 MSGBOX_AUTOCLOSE
delay 15
delay 10
applymovement 1, SilphS2_3_Presidente_Move_5
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_14 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, SilphS2_3_Presidente_Move_11
applymovement 1, SilphS2_3_Presidente_Move_12
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_15 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_707, SilphS2_3_Presidente_Texto_16
msgbox SilphS2_3_Presidente_Texto_17 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Presidente_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, SilphS2_3_Presidente_Move_13
waitmovement 0x0
delay 10
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_RAINBOW_PASS
msgbox SilphS2_3_Presidente_Texto_19 MSGBOX_DEFAULT
waitfanfare
msgbox SilphS2_3_Presidente_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, SilphS2_3_Presidente_Move_14
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_21 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_5
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, SilphS2_3_Presidente_Move_16
applymovement 1, SilphS2_3_Presidente_Move_15
waitmovement 0x0
delay 20
msgbox SilphS2_3_Presidente_Texto_23 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_17
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HOENN_80
clearflag FLAG_HOENN_85
removeobject 1
release
end

SilphS2_3_Presidente_Move_17:
walk_slow_down
walk_slow_down
walk_slow_right
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end


SilphS2_3_Presidente_Move_16:
delay_16
delay_8
face_down
step_end

SilphS2_3_Presidente_Move_15:
walk_slow_down
walk_slow_down
step_end

SilphS2_3_Presidente_Move_14:
delay_16
delay_8
face_down
delay_16
delay_8
face_right
step_end

SilphS2_3_Presidente_Move_13:
walk_in_place_right
step_end

SilphS2_3_Presidente_Move_12:
walk_down
face_right
step_end

SilphS2_3_Presidente_Move_11:
delay_16
face_left
step_end

SilphS2_3_Presidente_Move_10:
delay_16
delay_8
face_up
step_end

SilphS2_3_Presidente_Move_9:
walk_slow_right
walk_slow_up
delay_16
delay_8
step_end

SilphS2_3_Presidente_Move_8:
walk_in_place_right
step_end

SilphS2_3_Presidente_Move_7:
face_up
step_end

SilphS2_3_Presidente_Move_6:
walk_slow_right
step_end

SilphS2_3_Presidente_Move_5:
face_down
step_end

SilphS2_3_Presidente_Move_4:
walk_slow_down
step_end

SilphS2_3_Presidente_Move_3:
face_right
step_end

SilphS2_3_Presidente_Move_2:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
face_left
step_end

SilphS2_3_Presidente_Move_1:
walk_in_place_up
step_end

SilphS2_3_Presidente_Texto_1:
	.string "Burlando de nuevo a mi seguridad,\n"
	.string "¿eh, jovencito?$"

SilphS2_3_Presidente_Texto_2:
	.string "No sé si eres consciente de la magnitud\n"
	.string "de tus acciones en la LIGA POKÉMON,\l"
	.string "pero lo que allí hiciste va a cambiar el\l"
	.string "curso de la historia.$"

SilphS2_3_Presidente_Texto_3:
	.string "Reconozco que me equivoqué contigo,\n"
	.string "con el TEAM ROCKET.$"

SilphS2_3_Presidente_Texto_4:
	.string "Cuando vi que vuestro LÍDER era aquel\n"
	.string "extraordinario ENTRENADOR, ese que\l"
	.string "tantas veces ganó la LIGA de KANTO en\l"
	.string "el pasado, una oleada de preguntas\l"
	.string "azotó mi mente.$"

SilphS2_3_Presidente_Texto_5:
	.string "GIOVANNI me puso al día sobre su\n"
	.string "historia: la fundación del TEAM ROCKET,\l"
	.string "las AVES LEGENDARIAS, MEWTWO, la\l"
	.string "MASTER BALL, el asalto a la LIGA…$"

SilphS2_3_Presidente_Texto_6:
	.string "Se arriesgó a que le traicionara por\n"
	.string "LANCE. Pero él sabía que su oferta era\l"
	.string "imposible de rechazar.$"

SilphS2_3_Presidente_Texto_7:
	.string "Devolverle a KANTO su autonomía,\n"
	.string "su gloria pasada…$"

SilphS2_3_Presidente_Texto_8:
	.string "GIOVANNI me garantizó que, en caso de\n"
	.string "fracasar, SILPH tendría cubiertas las\l"
	.string "espaldas.$"

SilphS2_3_Presidente_Texto_9:
	.string "Pero aún sin esa garantía, hubiera\n"
	.string "aceptado sin dudar, solo por mantener\l"
	.string "viva la esperanza de recuperar la vieja\l"
	.string "KANTO.$"

SilphS2_3_Presidente_Texto_10:
	.string "Y ahora estamos en ello, ¿no?\n"
	.string "Por eso has venido aquí.$"

SilphS2_3_Presidente_Texto_11:
	.string "Con SILPH y el TEAM ROCKET unidos,\n"
	.string "KANTO mantendrá su esencia.$"

SilphS2_3_Presidente_Texto_12:
	.string "Pero… también convertiremos esta\n"
	.string "región en la mayor potencia\l"
	.string "tecnológica. Lo que estás viendo aquí\l"
	.string "es solo el principio.$"

SilphS2_3_Presidente_Texto_13:
	.string "… …$"

SilphS2_3_Presidente_Texto_14:
	.string "Déjame mostrarte un poco de lo que\n"
	.string "estoy hablando.$"

SilphS2_3_Presidente_Texto_15:
	.string "¡Vas a ver de nuevo lo que es enfrentar\n"
	.string "a un equipo de la vieja escuela de\l"
	.string "KANTO, y también de la nueva!$"

SilphS2_3_Presidente_Texto_16:
	.string "Otra vez… me has devuelto al pasado.$"

SilphS2_3_Presidente_Texto_17:
	.string "Has demostrado tu talento una vez más,\n"
	.string "{PLAYER}. Espero que lo pongas al\l"
	.string "servicio de una KANTO mejor.$"

SilphS2_3_Presidente_Texto_18:
	.string "En cuanto a mí respecta, tienes\n"
	.string "todo el apoyo de SILPH.$"

SilphS2_3_Presidente_Texto_19:
	.string "¡{PLAYER} obtuvo la LLAVE SILPH S3!$"

SilphS2_3_Presidente_Texto_20:
	.string "Con esto podrás seguir explorando la\n"
	.string "biblioteca, ten algo en cuenta: muchas\l"
	.string "cosas se han perdido con el paso del\l"
	.string "tiempo.$"

SilphS2_3_Presidente_Texto_21:
	.string "Puede que allí abajo encuentres lo que\n"
	.string "buscas, pero… quizás sea imposible de\l"
	.string "demostrar; la historia es implacable,\l"
	.string "capaz de enterrar todo lo que una vez\l"
	.string "fue evidente y estaba a la vista de\l"
	.string "todos.$"

SilphS2_3_Presidente_Texto_22:
	.string "La cuestión es, ¿serás capaz de\n"
	.string "desenterrar algo que siquiera sabemos\l"
	.string "de su existencia?$"

SilphS2_3_Presidente_Texto_23:
	.string "KANTO te observa, ¡jo, jo, jo!$"
