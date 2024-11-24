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
delay 10
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_2.1
waitmovement 0x0
delay 10
msgbox Route12_House_1_Secundaria_Squirtle_Texto_11.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route12_House_1_Secundaria_Squirtle_Texto_11.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_3
waitmovement 0x0
msgbox Route12_House_1_Secundaria_Squirtle_Texto_12 MSGBOX_AUTOCLOSE
delay 10
msgbox Route12_House_1_Secundaria_Squirtle_Texto_12.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route12_House_1_Secundaria_Squirtle_Texto_12.2 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x4083, 1
release
end

FuchsiaCity_House4_Secundaria_Squirtle_Move_2.1:
delay_8
face_right
delay_16
delay_8
face_player
delay_8
step_end

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
msgbox Route12_House_1_Secundaria_Squirtle_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_OBTAIN_TMHM
msgbox Route12_House_1_Secundaria_Squirtle_Texto_6 MSGBOX_DEFAULT
givemon SPECIES_SQUIRTLE, 5, ITEM_NONE
waitfanfare
msgbox Route12_House_1_Secundaria_Squirtle_Texto_7 MSGBOX_AUTOCLOSE
delay 10
msgbox Route12_House_1_Secundaria_Squirtle_Texto_7.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route12_House_1_Secundaria_Squirtle_Texto_7.2 MSGBOX_AUTOCLOSE
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
	.string "puede ser{PAUSE 15}…{PAUSE 15}\l"
	.string "Tengo que hacer algo{PAUSE 5}…{PAUSE 5}$"

Route12_House_1_Secundaria_Squirtle_Texto_2:
.string "…\n"
	.string "…{PAUSE 5}$"

Route12_House_1_Secundaria_Squirtle_Texto_3:
.string "¡TÚ! ¡ROCKET!\n"
	.string "{PAUSE 15}…{PAUSE 15}\l"
	.string "{PAUSE 15}…{PAUSE 15}\l"
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
	.string "agradecimiento, ROCKET.$"

Route12_House_1_Secundaria_Squirtle_Texto_5.1:
	.string "A partir de ahora, siempre podré\n"
	.string "alegar esa derrota como una mancha\l"
	.string "imborrable en su carrera!\l"
	.string "¡Aquí tienes, ROCKET!\l"
	.string "¡Cuida bien de este POKÉMON,\l"
	.string "es único!$"

Route12_House_1_Secundaria_Squirtle_Texto_6:
.string "¡¡OBTUVISTE UN SQUIRTLE AL\n"
	.string "NV.5!!$"

Route12_House_1_Secundaria_Squirtle_Texto_7:
.string "¡Uno de los últimos SQUIRTLE que\n"
	.string "me quedan heredados de nuestro\l"
	.string "padre!$"

Route12_House_1_Secundaria_Squirtle_Texto_7.1:
	.string "Es un POKÉMON en grave peligro de\n"
	.string "extinción, a día de hoy es imposible\l"
	.string "encontrarlo en estado salvaje, y solo\l"
	.string "quedan unos pocos ejemplares en manos de\l"
	.string "aquellos que han vivido desde siempre\l"
	.string "aquí, en KANTO.$"

Route12_House_1_Secundaria_Squirtle_Texto_7.2:
	.string "Su forma evolucionada final es el\n"
	.string "TIPO AGUA más potente que podrás\l"
	.string "encontrar en esta región, un POKÉMON\l"
	.string "ante el que todos se sorprenderán y\l"
	.string "se sentirán intimidados nada más\l"
	.string "verlo, debido a su fuerza y rareza.$"

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
	.string "Bien{PAUSE 25}…{PAUSE 25}\l"
	.string "Escucha, ROCKET{PAUSE 25}…{PAUSE 25}\l"
	.string "Yo tengo 2 hermanos, los 3 heredamos de\l"
	.string "nuestro padre la tradición de ser unos\l"
	.string "excepcionales pescadores, mi hermano\l"
	.string "pequeño reside en CARMÍN, y ha decidido\l"
	.string "centrarse en una CAÑA VIEJA que solo le\l"
	.string "permite pescar MAGIKARP, algo respetable\l"
	.string "y necesario, ya que gracias a él, muchos\l"
	.string "entrenadores tienen la oportunidad de\l"
	.string "contar con un GYARADOS.$"

Route12_House_1_Secundaria_Squirtle_Texto_11:
.string "Mi hermano mayor y yo, sin embargo,\n"
	.string "nos centramos más en la pesca de\l"
	.string "POKÉMON poderosos, competimos por\l"
	.string "ver quién atrapa las mejores piezas,\l"
	.string "y ahí está el problema{PAUSE 15}…{PAUSE 15}\l"
	.string "{PAUSE 15}…{PAUSE 15}\l"
	.string "{PAUSE 15}…{PAUSE 15}$"

Route12_House_1_Secundaria_Squirtle_Texto_11.1:
	.string "La SUPERCAÑA de mi hermano ha\n"
	.string "resultado ser mejor que mi CAÑA\l"
	.string "BUENA, si a ello le sumas que es\l"
	.string "considerado por muchos como el\l"
	.string "mejor PESCADOR de la región, el\l"
	.string "que mejores piezas tiene{PAUSE 15}…{PAUSE 15} resulta\l"
	.string "que me ha superado en todas las\l"
	.string "facetas.$"

Route12_House_1_Secundaria_Squirtle_Texto_11.2:
	.string "Actualmente, cuenta con un aura de\n"
	.string "invencibilidad y triunfo que\l"
	.string "me opaca completamente.\l"
	.string "A pesar de que sé que estoy a su altura,\l"
	.string "nadie se fijará en mi hasta que no vean\l"
	.string "que mi hermano también es humano y\l"
	.string "puede tener derrotas{PAUSE 15}…{PAUSE 5}$"

Route12_House_1_Secundaria_Squirtle_Texto_12:
.string "Es aquí donde entras tú, ROCKET.\n"
	.string "Si fueras a su casa de CIUDAD FUCSIA,\l"
	.string "y le derrotaras, sería un muy duro\l"
	.string "golpe para su reputación, no solo\l"
	.string "por ser derrotado, sino por ser\l"
	.string "derrotado por un ROCKET que, perdona\l"
	.string "por ser tan directo, sois considerados\l"
	.string "los entrenadores más débiles junto con\l"
	.string "los CAZABICHOS.$"

Route12_House_1_Secundaria_Squirtle_Texto_12.1:
	.string "Si eso ocurriera, mi CAÑA BUENA y yo\n"
	.string "tendríamos una segunda oportunidad\l"
	.string "para demostrar que también valemos.$"

Route12_House_1_Secundaria_Squirtle_Texto_12.2:
	.string "Si logras cumplir la misión, vuelve\l"
	.string "aquí recibirás algo por lo que cualquier\l"
	.string "PESCADOR en KANTO daría su brazo derecho.$"

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
