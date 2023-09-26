Route49_Pagoda_P5_MapScripts::
	.byte 0

Route49_Pagoda_P5_Primer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P5_Primer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P5_Primer_Pensador_Texto_1:
.string "Hoy en día la gente sabe el precio de\n"
	.string "todo, y el valor de nada.$"

Route49_Pagoda_P5_Segundo_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P5_Primer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P5_Segundo_Pensador_Texto_1:
.string "La TORRE DUN consta de 14 plantas, es\n"
	.string "más alta y antigua que TORRE CAMPANA.$"

Route49_Pagoda_P5_Tercer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P5_Tercer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P5_Tercer_Pensador_Texto_1:
.string "No nos elevamos al nivel de nuestras\n"
	.string "expectativas, caemos al nivel de\l"
	.string "nuestro entrenamiento.$"

Route49_Pagoda_P5_EventScript_Pensador_1::
	trainerbattle_single TRAINER_TRAINER_226, Route49_Pagoda_P5_Text_Pensador1Intro, Route49_Pagoda_P5_Text_Pensador1Defeated
	msgbox Route49_Pagoda_P5_Text_Pensador1PostBattle, MSGBOX_AUTOCLOSE
	end
