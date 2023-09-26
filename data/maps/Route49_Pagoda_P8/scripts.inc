Route49_Pagoda_P8_MapScripts::
	.byte 0


Route49_Pagoda_P8_Primer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Primer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Primer_Pensador_Texto_1:
.string "...$"

Route49_Pagoda_P8_Segundo_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Primer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Segundo_Pensador_Texto_1:
.string "...$"

Route49_Pagoda_P8_Tercer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Tercer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Tercer_Pensador_Texto_1:
.string "...$"

Route49_Pagoda_P8_Cuarto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Cuarto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Cuarto_Pensador_Texto_1:
.string "...$"

Route49_Pagoda_P8_Quinto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Quinto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Quinto_Pensador_Texto_1:
.string "...$"

Route49_Pagoda_P8_Sexto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Sexto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Sexto_Pensador_Texto_1:
.string "...$"	

Route49_Pagoda_P8_Septimo_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Septimo_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Septimo_Pensador_Texto_1:
.string "...$"

Route49_Pagoda_P8_Octavo_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Octavo_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Octavo_Pensador_Texto_1:
.string "...$"

Route49_Pagoda_P8_Noveno_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Noveno_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Noveno_Pensador_Texto_1:
.string "...$"

Route49_Pagoda_P8_Curacion::
lock
faceplayer
msgbox Route49_Pagoda_P8_Curacion_Texto_1 MSGBOX_AUTOCLOSE
fadescreen 1
playse SE_USE_ITEM
special HealPlayerParty
delay 20
fadescreen 0
msgbox Route49_Pagoda_P8_Curacion_Texto_2 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Curacion_Texto_1:
.string "Un buen descanso no te vendrá mal,\n"
	.string "TORRE DUN es larga y dura.$"

Route49_Pagoda_P8_Curacion_Texto_2:
.string "Tus POKÉMON ya están listos para\n"
	.string "proseguir vuestro viaje.$"
