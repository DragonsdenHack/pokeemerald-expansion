Route12_House1_MapScripts::
	.byte 0

Route12House1_1::
end

Route12_House_1_Secundaria_Squirtle::
compare VAR_UNUSED_0x4083, 2
goto_if_gt Route12_House_1_Secundaria_Squirtle_4
compare VAR_UNUSED_0x4083, 2
goto_if_eq Route12_House_1_Secundaria_Squirtle_3
compare VAR_UNUSED_0x4083, 1
goto_if_eq Route12_House_1_Secundaria_Squirtle_2
msgbox Route12_House_1_Secundaria_Squirtle_Texto_1 MSGBOX_SIGN
delay 20
msgbox Route12_House_1_Secundaria_Squirtle_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
waitmovement 0x0
msgbox Route12_House_1_Secundaria_Squirtle_Texto_3 MSGBOX_AUTOCLOSE
msgbox Route12_House_1_Secundaria_Squirtle_Texto_9 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route12_House_1_Secundaria_Squirtle_No
msgbox Route12_House_1_Secundaria_Squirtle_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_2
waitmovement 0x0
msgbox Route12_House_1_Secundaria_Squirtle_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_3
waitmovement 0x0
msgbox Route12_House_1_Secundaria_Squirtle_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x4083, 1
release
end

Route12_House_1_Secundaria_Squirtle_2::
lock
faceplayer
msgbox Route12_House_1_Secundaria_Squirtle_Texto_8 MSGBOX_AUTOCLOSE
release
end

Route12_House_1_Secundaria_Squirtle_3::
lock
faceplayer
delay 20
msgbox Route12_House_1_Secundaria_Squirtle_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
waitmovement 0x0
msgbox Route12_House_1_Secundaria_Squirtle_Texto_5 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_OBTAIN_TMHM
msgbox Route12_House_1_Secundaria_Squirtle_Texto_6 MSGBOX_DEFAULT
givemon SPECIES_SQUIRTLE, 5, ITEM_NONE
waitfanfare
msgbox Route12_House_1_Secundaria_Squirtle_Texto_7 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x4083, 3
release
end

Route12_House_1_Secundaria_Squirtle_4::
lock
faceplayer
msgbox Route12_House_1_Secundaria_Squirtle_Texto_4 MSGBOX_AUTOCLOSE
release
end


Route12_House_1_Secundaria_Squirtle_No::
msgbox Route12_House_1_Secundaria_Squirtle_Texto_13 MSGBOX_AUTOCLOSE
release
end

Route12_House_1_Secundaria_Squirtle_Texto_1:
.string "Jamás alcanzaré ese nivel de\n"
	.string "reconocimiento y popularidad, no\l"
	.string "puede ser...\l"
	.string "Tengo que hacer algo...$"

Route12_House_1_Secundaria_Squirtle_Texto_2:
.string "...\n"
	.string "...$"

Route12_House_1_Secundaria_Squirtle_Texto_3:
.string "¡TÚ! ¡ROCKET!\n"
	.string "...\l"
	.string "...\l"
	.string "¡Además se te ve bastante\l"
	.string "competente en comparación con el\l"
	.string "resto!$"

Route12_House_1_Secundaria_Squirtle_Texto_4:
.string "El mar es enorme, KANTO solo está\n"
	.string "rodeado por una pequeñísima parte\l"
	.string "de este.\l"
	.string "¿Te imaginas la clase de POKÉMON\l"
	.string "que habrá en alta mar?$"

Route12_House_1_Secundaria_Squirtle_Texto_5:
.string "¿¡¡En serio!!?\n"
	.string "¡No puedo creer que pudieras\l"
	.string "derrotarlo, sus GYARADOS son\l"
	.string "terribles!\l"
	.string "¡No tengo palabras de\l"
	.string "agradecimiento ROCKET, después de\l"
	.string "ese duro golpe, siempre podré\l"
	.string "alegar esa derrota como una mancha\l"
	.string "imborrable en su carrera!\l"
	.string "¡Aquí tienes ROCKET!\l"
	.string "¡Cuida bien de este POKÉMON, es\l"
	.string "único!$"

Route12_House_1_Secundaria_Squirtle_Texto_6:
.string "¡¡OBTUVISTE UN SQUIRTLE AL\n"
	.string "NV.5!!$"

Route12_House_1_Secundaria_Squirtle_Texto_7:
.string "¡Uno de los últimos SQUIRTLE que\n"
	.string "me quedan heredados de nuestro\l"
	.string "padre!\l"
	.string "Es un POKÉMON en grave peligro de\l"
	.string "extinción aquí en KANTO, a día de\l"
	.string "hoy es imposible encontrarlo en\l"
	.string "estado salvaje, y solo quedan unos\l"
	.string "pocos ejemplares en manos de\l"
	.string "aquellos que han vivido desde\l"
	.string "siempre aquí en KANTO.\l"
	.string "Su forma evolucionada final es el\l"
	.string "tipo AGUA más potente que podrás\l"
	.string "encontrar en esta región, un\l"
	.string "POKÉMON ante el que todos se\l"
	.string "sorprenderán y se sentirán\l"
	.string "intimidados nada más verlo por su\l"
	.string "fuerza y rareza, espero que seas\l"
	.string "consciente del valor del POKÉMON\l"
	.string "que acabas de recibir.$"

Route12_House_1_Secundaria_Squirtle_Texto_8:
.string "CIUDAD FUCSIA está al suroeste,\n"
	.string "siguiente, tendrás que cruzar la\l"
	.string "RUTA 12, 13, 14 y 15 para llegar.\l"
	.string "¡Úsalas como entrenamiento antes\l"
	.string "de llegar a retar a mi hermano!$"

Route12_House_1_Secundaria_Squirtle_Texto_9:
.string "Escucha, ¿te interesaría hacer una\n"
	.string "misión para mi?\l"
	.string "Si logras tener éxito, te daré lo\l"
	.string "mejor que cualquier pescador pueda\l"
	.string "ofrecerte en toda la región de\l"
	.string "KANTO.\l"
	.string "¿Aceptas?$"

Route12_House_1_Secundaria_Squirtle_Texto_10:
.string "¡Esa es la actitud!\n"
	.string "Bien...\l"
	.string "Escucha ROCKET...\l"
	.string "Yo tengo 2 hermanos, los 3\l"
	.string "heredamos de nuestro padre la\l"
	.string "tradición de ser unos\l"
	.string "excepcionales pescadores, mi\l"
	.string "hermano pequeño reside en CARMÍN,\l"
	.string "y ha decidido centrarse en una\l"
	.string "CAÑA VIEJA que solo le permite\l"
	.string "pescar MAGIKARPS, algo respetable\l"
	.string "y necesario, ya que gracias a él\l"
	.string "muchos entrenadores tienen la\l"
	.string "oportunidad de contar con el\l"
	.string "POKÉMON más atroz de estas aguas.$"

Route12_House_1_Secundaria_Squirtle_Texto_11:
.string "Mi hermano mayor y yo, sin\n"
	.string "embargo, nos centramos más en la\l"
	.string "pesca de POKÉMON poderosos,\l"
	.string "competimos por ver quién atrapa\l"
	.string "las mejores piezas, y ahí está el\l"
	.string "problema...\l"
	.string "...\l"
	.string "...\l"
	.string "La SUPERCAÑA de mi hermano ha\l"
	.string "resultado ser mejor que mi CAÑA\l"
	.string "BUENA, si a ello le sumas que es\l"
	.string "considerado por muchos como el\l"
	.string "mejor PESCADOR de la región, el\l"
	.string "que mejores POKÉMON tiene, resulta\l"
	.string "que me ha superado en todas las\l"
	.string "facetas.\l"
	.string "Actualmente cuenta con un aurea de\l"
	.string "invencibilidad y triunfo que me\l"
	.string "opaca completamente, a pesar de\l"
	.string "que sé que estoy a su altura,\l"
	.string "nadie se fijará en mi hasta que no\l"
	.string "vean que mi hermano también es\l"
	.string "humano y puede tener derrotas...$"

Route12_House_1_Secundaria_Squirtle_Texto_12:
.string "Es aquí donde entras tú ROCKET, si\n"
	.string "fueras a su casa de CIUDAD FUCSIA,\l"
	.string "y le derrotaras, sería un muy duro\l"
	.string "golpe para su reputación, no solo\l"
	.string "por ser derrotado, sino por ser\l"
	.string "derrotado por un ROCKET que,\l"
	.string "perdona por ser tan directo, sois\l"
	.string "considerados los entrenadores más\l"
	.string "débiles junto con los CAZABICHOS.\l"
	.string "Si eso ocurriera, yo y mi CAÑA\l"
	.string "BUENA tendríamos una segunda\l"
	.string "oportunidad para demostrar que\l"
	.string "también valemos.\l"
	.string "De modo que esa es tu misión\l"
	.string "ROCKET, ir a FUCSIA y derrotar a\l"
	.string "mi hermano, si logras hacerlo,\l"
	.string "vuelve aquí para confirmarlo y\l"
	.string "recibir algo por lo que cualquier\l"
	.string "PESCADOR en esta región daría su\l"
	.string "brazo derecho.$"

Route12_House_1_Secundaria_Squirtle_Texto_13:
.string "¿En serio?\n"
	.string "Ningún pescador a excepción de mi\l"
	.string "hermano mayor tiene lo que yo\l"
	.string "puedo ofrecerte, piénsatelo dos\l"
	.string "veces.$"

Route12_House_1_Secundaria_Squirtle_Move_1:
emote_exclamation_mark
face_player
step_end

Route12_House_1_Secundaria_Squirtle_Move_2:
walk_in_place_right
step_end

Route12_House_1_Secundaria_Squirtle_Move_3:
face_player
step_end
