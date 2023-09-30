Route49_Pagoda_P8_MapScripts::
	.byte 0


Route49_Pagoda_P8_Primer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Primer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Primer_Pensador_Texto_1:
.string "Hay cierta preocupación por el relevo\n"
	.string "generacional, el camino del pensador ya\l"
	.string "no es necesario. A todos los que\l"
	.string "llegamos aquí nos impulsó la curiosidad\l"
	.string "y la inquietud, algo que escasea hoy en\l"
	.string "día.$"

Route49_Pagoda_P8_Segundo_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Segundo_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Segundo_Pensador_Texto_1:
.string "El MADAAMU de MING es extremadamente\n"
	.string "fuerte, ha recibido un entrenamiento\l"
	.string "excepcional y eso se ve reflejado en\l"
	.string "combate.$"

Route49_Pagoda_P8_Tercer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Tercer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Tercer_Pensador_Texto_1:
.string "LUNG, el pensador más fuerte de la\n"
	.string "pagoda después de nuestro GRAN\l"
	.string "MAESTRO, llegó incluso a ser CAMPEÓN de\l"
	.string "JOHTO tiempo atrás. Quedó fascinado\l"
	.string "con el DRAGÓN SAGRADO, y desde ese\l"
	.string "entonces se entregó al entrenamiento\l"
	.string "de un DUNSPARCE al que salvó.$"

Route49_Pagoda_P8_Cuarto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Cuarto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Cuarto_Pensador_Texto_1:
.string "Los miembros del ALTO MANDO protegen\n"
	.string "los pisos superiores de la pagoda. En\l"
	.string "esos pisos no solo entrena nuestro\l"
	.string "GRAN MAESTRO, tambien hay valiosos\l"
	.string "escritos sobre POKÉMON ancestrales.$"

Route49_Pagoda_P8_Quinto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Quinto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Quinto_Pensador_Texto_1:
.string "Se debe absorber el color de la vida,\n"
	.string "pero nunca recordar los detalles. Los\l"
	.string "detalles son siempre vulgares.$"

Route49_Pagoda_P8_Sexto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Sexto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Sexto_Pensador_Texto_1:
.string "Algunos de nuestros más duchos\n"
	.string "pensadores han podido dominar por\l"
	.string "completo los antiguos POKÉMON de\l"
	.string "JOHTO, si quieres seguir subiendo\l"
	.string "deberás enfrentarte a ellos.$"	

Route49_Pagoda_P8_Septimo_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Septimo_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Septimo_Pensador_Texto_1:
.string "Nuestro ALTO MANDO se fundó con la\n"
	.string "propia creación de la TORRE DUN, para\l"
	.string "recordarnos a todos que la excelencia\l"
	.string "está ahí, lista para poner a prueba a\l"
	.string "cualquiera que quiera aspirar a ella.$"

Route49_Pagoda_P8_Octavo_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Octavo_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Octavo_Pensador_Texto_1:
.string "Ese POKÉMON SAMURAI de MAO inspira un\n"
	.string "profundo respeto. Aunque no tengo\l"
	.string "claro que sea del TIPO BICHO, aunque lo\l"
	.string "parece.$"

Route49_Pagoda_P8_Noveno_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Noveno_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Noveno_Pensador_Texto_1:
.string "El presente no puede reducirse a un\n"
	.string "medio para alcanzar un fin futuro, el\l"
	.string "presente es el fin en sí mismo.$"

Route49_Pagoda_P8_Decimo_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Decimo_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Decimo_Pensador_Texto_1:
.string "HO-OH y LUGIA son posteriores al\n"
	.string "DRAGÓN SAGRADO. Este último es incluso\l"
	.string "más esquivo que las dos aves.$"


Route49_Pagoda_P8_Undecimo_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Undecimo_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Undecimo_Pensador_Texto_1:
.string "Es mejor pasar hambre sin dejarse\n"
	.string "abatir por el miedo o el dolor que vivir\l"
	.string "en opulencia pero lleno de\l"
	.string "preocupación.$"

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
