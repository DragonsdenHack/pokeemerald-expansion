Route49_Pagoda_P4_MapScripts::
	.byte 0

Route49_Pagoda_P4_Primer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P4_Primer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P4_Primer_Pensador_Texto_1:
.string "Estar presos en la camisa de fuerza de\n"
	.string "las certezas nos hace ser como los\l"
	.string "personajes de una novela para los\l"
	.string "cuales el argumento ya está escrito.$"

Route49_Pagoda_P4_Segundo_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P4_Segundo_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P4_Segundo_Pensador_Texto_1:
.string "De no ser por estar protegidos por la\n"
	.string "montaña, la pagoda sería visible desde\l"
	.string "CIUDAD ORQUÍDEA.$"

Route49_Pagoda_P4_Tercer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P4_Tercer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P4_Tercer_Pensador_Texto_1:
.string "Los POKÉMON de nuestro GRAN MAESTRO\n"
	.string "son tan antiguos como este lugar. Se\l"
	.string "cree que el DRAGÓN SAGRADO de algún\l"
	.string "modo les bendijo con la longevidad.$"

Route49_Pagoda_P4_Cuarto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P4_Cuarto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P4_Cuarto_Pensador_Texto_1:
.string "¿Llegaste a leer el pergamino del\n"
	.string "dragón? Leerlo sería fatal. Es la\l"
	.string "incertidumbre lo que nos encanta. La\l"
	.string "bruma vuelve maravillosas las cosas.$"

Route49_Pagoda_P4_Quinto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P4_Quinto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P4_Quinto_Pensador_Texto_1:
.string "La cantidad de POKÉMON que reaccionan\n"
	.string "a la PIEDRA DORADA es incalculable. Uno\l"
	.string "de nuestros más duchos entrenadores\l"
	.string "evolucionó a un BASCULIN con ella.\l"
	.string "Ahora es un poderoso BASCULEGION.$"

Route49_Pagoda_P4_Sexto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P4_Sexto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P4_Sexto_Pensador_Texto_1:
.string "Hay muchos entrenadores diestros por\n"
	.string "aquí. Ha medida que vayas subiendo lo\l"
	.string "notarás más.$"

Route49_Pagoda_P4_EventScript_Pensador_1::
	trainerbattle_single TRAINER_TRAINER_224, Route49_Pagoda_P4_Text_Pensador1Intro, Route49_Pagoda_P4_Text_Pensador1Defeated
	msgbox Route49_Pagoda_P4_Text_Pensador1PostBattle, MSGBOX_AUTOCLOSE
	end

Route49_Pagoda_P4_EventScript_Pensador_2::
	trainerbattle_single TRAINER_TRAINER_225, Route49_Pagoda_P4_Text_Pensador2Intro, Route49_Pagoda_P4_Text_Pensador2Defeated
	msgbox Route49_Pagoda_P4_Text_Pensador2PostBattle, MSGBOX_AUTOCLOSE
	end
