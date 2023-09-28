Route49_Pagoda_P7_MapScripts::
	.byte 0

Route49_Pagoda_P7_Primer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P7_Primer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P7_Primer_Pensador_Texto_1:
.string "Interpretamos el compromiso como una\n"
	.string "falta de libertad, cuando es todo lo\l"
	.string "contrario: es una oportunidad única\l"
	.string "para poner a prueba y ejercer nuestra\l"
	.string "voluntad.$"

Route49_Pagoda_P7_Segundo_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P7_Primer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P7_Segundo_Pensador_Texto_1:
.string "La maestría requiere práctica. Pero\n"
	.string "cuanto más practicas algo, más\l"
	.string "aburrido y rutinario de vuelve. Una vez\l"
	.string "las ganancias de principiante se han\l"
	.string "logrado y hemos aprendido qué esperar,\l"
	.string "nuestro interés comienza a\l"
	.string "desvanecerse.$"

Route49_Pagoda_P7_Tercer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P7_Tercer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P7_Tercer_Pensador_Texto_1:
.string "Es muy difícil someter a la obediencia a\n"
	.string "aquel que no busca mandar.$"

Route49_Pagoda_P7_Cuarto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P7_Cuarto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P7_Cuarto_Pensador_Texto_1:
.string "En sus tratos con el hombre, el Destino\n"
	.string "nunca cancela sus cuentas.$"

Route49_Pagoda_P7_Quinto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P7_Quinto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P7_Quinto_Pensador_Texto_1:
.string "Gracias a la PIEDRA DORADA del DRAGÓN\n"
	.string "SAGRADO, los antiguos POKÉMON de\l"
	.string "JOHTO no se han perdido para siempre.\l"
	.string "Además, reacciona ante ciertos\l"
	.string "POKÉMON, convirtiéndolos en formas\l"
	.string "exóticas.$"

Route49_Pagoda_P7_Sexto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P7_Sexto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P7_Sexto_Pensador_Texto_1:
.string "La PIEDRA DORADA reacciona con\n"
	.string "DUNSPARCE, pero el POKÉMON resultante\l"
	.string "puede evolucionar una vez más, solo\l"
	.string "que muy pocos saben como.$"

Route49_Pagoda_P7_EventScript_Pensador_1::
	trainerbattle_single TRAINER_TRAINER_229, Route49_Pagoda_P7_Text_Pensador1Intro, Route49_Pagoda_P7_Text_Pensador1Defeated
	msgbox Route49_Pagoda_P7_Text_Pensador1PostBattle, MSGBOX_AUTOCLOSE
	end

Route49_Pagoda_P7_Encuentro_Maestro::
lock
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_1 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_2 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_3 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_4 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_5 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_6 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_7 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_8 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_9 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_10 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_11 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_12 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_13 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_14 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_15 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_16 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_17 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_18 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_19 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_20 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_21 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_22 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_23 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_24 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_25 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_26 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_27 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_28 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_29 MSGBOX_NPC
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_30 MSGBOX_NPC
setvar VAR_VERDANTURF_TOWN_STATE, 10
release
end

Route49_Pagoda_P7_Encuentro_Maestro_Texto_1:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_2:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_3:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_4:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_5:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_6:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_7:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_8:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_9:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_10:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_11:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_12:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_13:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_14:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_15:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_16:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_17:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_18:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_19:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_20:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_21:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_22:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_23:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_24:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_25:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_26:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_27:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_28:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_29:
.string "...$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_30:
.string "...$"

