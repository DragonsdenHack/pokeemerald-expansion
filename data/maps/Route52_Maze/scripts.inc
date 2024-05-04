Route52_Maze_MapScripts::
	.byte 0

Route52Maze1::
end



Route52Maze2::
end



Route52Maze3::
end



Route52Maze4::
end



Route52Maze5::
end



Route52Maze6::
end



Route52MazeDocumento_100::
msgbox Route52MazeDocumento_Text_100, MSGBOX_SIGN   
end

Route52MazeDocumento_Text_100:
.string "TÉCNICAS AVANZADAS DE MANIPULACIÓN\n"
	.string "DE LOS MERCADOS FINANCIEROS\l"
	.string "…\l"
	.string "…\l"
	.string "¡Tiene más de 700 páginas!$"

Route52_Maze_Combate_1::
compare VAR_UNUSED_0x4091, 2
goto_if_gt Route52_Maze_Combate_1_2
msgbox Route52_Maze_Combate_1_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox Route52_Maze_Combate_1_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 3, Route52_Maze_Combate_1_Move_1
waitmovement 0x0
applymovement 3, Route52_Maze_Combate_1_Move_2
waitmovement 0x0
msgbox Route52_Maze_Combate_1_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route52_Maze_Combate_1_Move_3
waitmovement 0x0
playse MUS_RG_ENCOUNTER_ROCKET
msgbox Route52_Maze_Combate_1_Texto_4 MSGBOX_AUTOCLOSE
applymovement 3, Route52_Maze_Combate_1_Move_4
waitmovement 0x0
trainerbattle_no_intro TRAINER_ANGELO, Route52_Maze_Combate_1_Texto_5
msgbox Route52_Maze_Combate_1_Texto_6 MSGBOX_AUTOCLOSE
applymovement 3, Route52_Maze_Combate_1_Move_5
waitmovement 0x0
setvar VAR_UNUSED_0x4091, 3
release
end

Route52_Maze_Combate_1_2::
lock
msgbox Route52_Maze_Combate_1_Texto_7 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route52_Maze_Combate_1_2_No
delay 40
playse SE_PC_ON
delay 40
playse SE_WALL_HIT
setmetatile 12, 5, 0x2A8, FALSE
special DrawWholeMapView
delay 20
release
end

Route52_Maze_Combate_1_2_No::
release
end


Route52_Maze_Combate_1_Move_1:
emote_exclamation_mark
step_end

Route52_Maze_Combate_1_Move_2:
face_up
step_end

Route52_Maze_Combate_1_Move_3:
face_down
step_end

Route52_Maze_Combate_1_Move_4:
walk_up
walk_up
walk_up
walk_up
step_end

Route52_Maze_Combate_1_Move_5:
walk_down
walk_down
walk_down
walk_down
walk_in_place_left
step_end



Route52_Maze_Combate_1_Texto_1:
.string "…\n"
	.string "{PAUSE 5}…{PAUSE 5}$"

Route52_Maze_Combate_1_Texto_2:
.string "Este ordenador es un tanto\n"
	.string "extraño{PAUSE 5}…{PAUSE 5}$"

Route52_Maze_Combate_1_Texto_3:
.string "¡Eh, tú!\n"
	.string "¿Se puede saber qué haces?$"

Route52_Maze_Combate_1_Texto_4:
.string "Ese ordenador tiene\n"
	.string "información privada muy\l"
	.string "importante, ¡ni se te ocurra\l"
	.string "tocarlo!$"

Route52_Maze_Combate_1_Texto_5:
.string "Maldición, han descubierto la\n"
	.string "tapadera.$"

Route52_Maze_Combate_1_Texto_6:
.string "Atente a las consecuencias si\n"
	.string "decides tocar ese ordenador, estás\l"
	.string "avisado.$"

Route52_Maze_Combate_1_Texto_7:
.string "Hay una función llamada -revertir\n"
	.string "flecha-.\l"
	.string "¿La pulso?$"

Route52_Maze_Cientifico_1::
lock
faceplayer
compare VAR_UNUSED_0x4091, 7
goto_if_gt Route52_Maze_Cientifico_1_3
compare VAR_UNUSED_0x4091, 2
goto_if_gt Route52_Maze_Cientifico_1_2
msgbox Route52_Maze_Cientifico_1_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Cientifico_1_2::
msgbox Route52_Maze_Cientifico_1_Texto_2 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Cientifico_1_3::
msgbox Route52_Maze_Cientifico_1_Texto_3 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Cientifico_1_Texto_1:
.string "¿Quién eres tú, cómo has llegado\n"
	.string "hasta aquí?\l"
	.string "Este lugar era un importante\l"
	.string "centro de investigaciones, pero se\l"
	.string "cerró hace mucho, solo he venido a\l"
	.string "recuperar unos documentos.\l"
	.string "Deberías de volver por donde has\l"
	.string "venido, aquí no hay nada\l"
	.string "interesante.$"

Route52_Maze_Cientifico_1_Texto_2:
.string "Aquí no rendimos cuentas a nadie,\n"
	.string "para eso montamos el almacén en\l"
	.string "medio de la nada, no hay nada\l"
	.string "mejor que operar sin que nadie te\l"
	.string "moleste.$"

Route52_Maze_Cientifico_1_Texto_3:
.string "Desde aquí podemos ver el FARO\n"
	.string "OLIVO, ¡pero el FARO OLIVO a\l"
	.string "nosotros no!$"

Route52_Maze_Combate_2::
playse SE_PIN
applymovement 6, Route52_Maze_Combate_2_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Route52_Maze_Combate_2_Move_2
waitmovement 0x0
applymovement 6, Route52_Maze_Combate_2_Move_3
waitmovement 0x0
delay 20
msgbox Route52_Maze_Combate_2_Texto_1 MSGBOX_AUTOCLOSE
delay 20
playse MUS_RG_ENCOUNTER_ROCKET
msgbox Route52_Maze_Combate_2_Texto_2 MSGBOX_AUTOCLOSE
applymovement 6, Route52_Maze_Combate_2_Move_4
waitmovement 0x0
trainerbattle_no_intro TRAINER_DARIUS, Route52_Maze_Combate_2_Texto_3
setvar VAR_UNUSED_0x4091, 4
release
end

Route52_Maze_Combate_2_Texto_1:
.string "¿Quién eres tú?\n"
	.string "¿Te han contratado a ti también?$"

Route52_Maze_Combate_2_Texto_2:
.string "En ese caso, no puedo dejar que\n"
	.string "sigas avanzando.$"

Route52_Maze_Combate_2_Texto_3:
.string "No vas a echar a perder este\n"
	.string "negocio.$"

Route52_Maze_Combate_2_Move_1:
emote_exclamation_mark
step_end

Route52_Maze_Combate_2_Move_2:
face_down
step_end

Route52_Maze_Combate_2_Move_3:
face_up
step_end

Route52_Maze_Combate_2_Move_4:
walk_left
walk_up
step_end

Route52_Maze_Segundo_Cientifico::
lock
faceplayer
compare VAR_UNUSED_0x4091, 7
goto_if_gt Route52_Maze_Segundo_Cientifico_2
msgbox Route52_Maze_Segundo_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Segundo_Cientifico_2::
lock
faceplayer
msgbox Route52_Maze_Segundo_Cientifico_Texto_2 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Segundo_Cientifico_Texto_1:
.string "¿Cómo?\n"
	.string "¿Por qué estamos en medio de la\l"
	.string "nada?\l"
	.string "No te confundas, no estamos\l"
	.string "huyendo de la justicia ni nada\l"
	.string "parecido, es solo que nos gustan\l"
	.string "los lugares exóticos, sí, eso es.$"

Route52_Maze_Segundo_Cientifico_Texto_2:
.string "¿Cómo?\n"
	.string "¿Por qué estamos en medio de la\l"
	.string "nada?\l"
	.string "No te confundas, no estamos\l"
	.string "huyendo de la justicia ni nada\l"
	.string "parecido, es solo que nos gustan\l"
	.string "los lugares exóticos, sí, eso es.$"



Route52_Maze_Trabajador::
lock
faceplayer
compare VAR_UNUSED_0x4091, 7
goto_if_gt Route52_Maze_Trabajador_2
msgbox Route52_Maze_Trabajador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Trabajador_2::
msgbox Route52_Maze_Trabajador_Texto_2 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Trabajador_Texto_1:
.string "Hice bien en desertar de la MARINA\n"
	.string "de OLIVO.\l"
	.string "¡Aquí gano el doble, aunque acabo\l"
	.string "molido de tanto descargar cajas!$"

Route52_Maze_Trabajador_Texto_2:
.string "A este paso voy a ponerme más\n"
	.string "fuerte que un MACHOKE, este\l"
	.string "almacén ya no da a basto para toda\l"
	.string "nuestra demanda.$"

Route52_Maze_Electricista::
lock
faceplayer
compare VAR_UNUSED_0x4091, 7
goto_if_gt Route52_Maze_Electricista_2
msgbox Route52_Maze_Electricista_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Electricista_2::
msgbox Route52_Maze_Electricista_Texto_2 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Electricista_Texto_1:
.string "Cuantas menos preguntas hagas aquí\n"
	.string "mejor, yo lo único que sé es que\l"
	.string "me pagan bien.$"

Route52_Maze_Electricista_Texto_2:
.string "Entonces, ¿formas ya parte de\n"
	.string "nuestro club?$"
