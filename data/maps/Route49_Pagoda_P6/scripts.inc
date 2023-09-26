Route49_Pagoda_P6_MapScripts::
	.byte 0



Route49_Pagoda_P6_Primer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P6_Primer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P6_Primer_Pensador_Texto_1:
.string "...$"

Route49_Pagoda_P6_Segundo_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P6_Primer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P6_Segundo_Pensador_Texto_1:
.string "La gente se queda tan atrapada en el\n"
	.string "hecho de que tiene límites que\l"
	.string "raramente hace el esfuerzo que se\l"
	.string "requiere para siquiera acercarse a\l"
	.string "ellos.$"

Route49_Pagoda_P6_Tercer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P6_Tercer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P6_Tercer_Pensador_Texto_1:
.string "...$"

Route49_Pagoda_P6_Cuarto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P6_Cuarto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P6_Cuarto_Pensador_Texto_1:
.string "La línea evolutiva de DUNSPARCE es\n"
	.string "fascinante, ¿no crees? ¿Cómo un\l"
	.string "POKÉMON condenado a la mediocridad\l"
	.string "pudo en última instancia albergar\l"
	.string "tanto poder?$"

Route49_Pagoda_P6_EventScript_Pensador_1::
	trainerbattle_single TRAINER_TRAINER_227, Route49_Pagoda_P6_Text_Pensador1Intro, Route49_Pagoda_P6_Text_Pensador1Defeated
	msgbox Route49_Pagoda_P6_Text_Pensador1PostBattle, MSGBOX_AUTOCLOSE
	end

Route49_Pagoda_P6_EventScript_Pensador_2::
	trainerbattle_single TRAINER_TRAINER_228, Route49_Pagoda_P6_Text_Pensador2Intro, Route49_Pagoda_P6_Text_Pensador2Defeated
	msgbox Route49_Pagoda_P6_Text_Pensador2PostBattle, MSGBOX_AUTOCLOSE
	end

