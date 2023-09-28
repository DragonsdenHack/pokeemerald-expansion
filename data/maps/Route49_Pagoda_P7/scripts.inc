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
