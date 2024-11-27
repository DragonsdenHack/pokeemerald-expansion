RocketHideout_9F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_9F_OnFrame
.byte 0

RocketHideout_9F_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 92, RocketHideout_9F_Presentacion_Sala
	.2byte 0

RocketHideout9F_1::
end



RocketHideout9F_2::
end



RocketHideout9F_3::
end



RocketHideout9F_4::
end



RocketHideout9F_5::
end



RocketHideout9F_6::
end



RocketHideout9F_7::
end



RocketHideout9F_8::
end



RocketHideout9F_9::
end

RocketHideout_9F_Presentacion_Sala::
clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY
addobject 10
delay 15
msgbox RocketHideout_9F_Presentacion_Sala_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_9F_Presentacion_Sala_Move_1
waitmovement 0x0
applymovement 10, RocketHideout_9F_Presentacion_Sala_Move_2
waitmovement 0x0
msgbox RocketHideout_9F_Presentacion_Sala_Texto_2 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout_9F_Presentacion_Sala_Move_3
waitmovement 0x0
msgbox RocketHideout_9F_Presentacion_Sala_Texto_3 MSGBOX_AUTOCLOSE
msgbox RocketHideout_9F_Presentacion_Sala_Texto_4 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout_9F_Presentacion_Sala_Move_2
waitmovement 0x0
msgbox RocketHideout_9F_Presentacion_Sala_Texto_5 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_9F_Presentacion_Sala_Move_4
applymovement 10, RocketHideout_9F_Presentacion_Sala_Move_5
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RocketHideout_9F_Presentacion_Sala_Move_5.1
waitmovement 0x0
special RemoveCameraObject
msgbox RocketHideout_9F_Presentacion_Sala_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 10, RocketHideout_9F_Presentacion_Sala_Move_5.2
waitmovement 0x0
delay 10
msgbox RocketHideout_9F_Presentacion_Sala_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 10, RocketHideout_9F_Presentacion_Sala_Move_5.3
waitmovement 0x0
delay 10
msgbox RocketHideout_9F_Presentacion_Sala_Texto_8 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 10, RocketHideout_9F_Presentacion_Sala_Move_5.4
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_9F_Presentacion_Sala_Texto_9 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_9F_Presentacion_Sala_Texto_10 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_9F_Presentacion_Sala_Texto_11 MSGBOX_AUTOCLOSE
delay 20
applymovement 10, RocketHideout_9F_Presentacion_Sala_Move_5.5
waitmovement 0x0
delay 10
msgbox RocketHideout_9F_Presentacion_Sala_Texto_12 MSGBOX_AUTOCLOSE
delay 10
applymovement 10, RocketHideout_9F_Presentacion_Sala_Move_5.6
waitmovement 0x0
delay 10
msgbox RocketHideout_9F_Presentacion_Sala_Texto_13 MSGBOX_AUTOCLOSE
delay 20
playse SE_EXIT
setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
removeobject 10
waitse
delay 10
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RocketHideout_9F_Presentacion_Sala_Move_5.7
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40F7, 93
release
end

RocketHideout_9F_Presentacion_Sala_Move_5.7:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

RocketHideout_9F_Presentacion_Sala_Move_5.6:
face_down
step_end

RocketHideout_9F_Presentacion_Sala_Move_5.5:
face_right
step_end

RocketHideout_9F_Presentacion_Sala_Move_5.4:
walk_in_place_up
step_end

RocketHideout_9F_Presentacion_Sala_Move_5.3:
delay_8
face_up
delay_8
step_end

RocketHideout_9F_Presentacion_Sala_Move_5.2:
delay_8
face_left
delay_8
step_end

RocketHideout_9F_Presentacion_Sala_Move_5.1:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

RocketHideout_9F_Presentacion_Sala_Texto_6:
	.string "Nunca pongas a tu enemigo entre la\n"
	.string "espada y la pared, sacará lo mejor de sí.$"

RocketHideout_9F_Presentacion_Sala_Texto_7:
	.string "Hasta ahora, nos hemos guiado por esa\n"
	.string "máxima en lo que a ROJO se refiere.$"

RocketHideout_9F_Presentacion_Sala_Texto_8:
	.string "Pero ha llegado el momento de mostrar\n"
	.string "todas las cartas, somos nosotros los\l"
	.string "que hemos llegado a esa situación.$"

RocketHideout_9F_Presentacion_Sala_Texto_9:
	.string "¡No te contengas, {PLAYER}!$"

RocketHideout_9F_Presentacion_Sala_Texto_10:
	.string "¡Da lo mejor de ti en la LIGA POKÉMON!$"

RocketHideout_9F_Presentacion_Sala_Texto_11:
	.string "¡Pon a ROJO entre la espada y la pared,\n"
	.string "muéstrale algo que jamás ha visto, y\l"
	.string "entonces{PAUSE 15}…{PAUSE 15}!$"

RocketHideout_9F_Presentacion_Sala_Texto_12:
	.string "Entonces{PAUSE 15}…{PAUSE 15}$"

RocketHideout_9F_Presentacion_Sala_Texto_13:
	.string "{PAUSE 15}…{PAUSE 15}será incapaz de reaccionar a\n"
	.string "tiempo, de dar lo mejor de sí.$"

RocketHideout_9F_Presentacion_Sala_Texto_1:
.string "GIOVANNI: Bien, ya estás aquí,\n"
	.string "observa este lugar {PLAYER}.$"

RocketHideout_9F_Presentacion_Sala_Texto_2:
.string "Aquí nos centramos en proporcionar a\n"
	.string "nuestros mejores ROCKET las herramientas\l"
	.string "para llevar al límite la única variable\l"
	.string "que depende exclusivamente de nosotros:\l"
	.string "el entrenamiento.$"

RocketHideout_9F_Presentacion_Sala_Texto_3:
.string "Todo cuanto necesitas para llevar\n"
	.string "a tus POKÉMON al siguiente nivel\l"
	.string "está aquí, al alcance de tu mano.$"

RocketHideout_9F_Presentacion_Sala_Texto_4:
.string "En esta sala tú eres quien manda,\n"
	.string "el que decide si parar o si\l"
	.string "seguir, espero que le des un gran\l"
	.string "uso antes de asaltar de forma\l"
	.string "definitiva la LIGA POKÉMON.$"

RocketHideout_9F_Presentacion_Sala_Texto_5:
.string "Confío en ti, {PLAYER}.\n"
	.string "No importa la clase de poderes a los que\l"
	.string "vayas a enfrentarte, si sabes mantener\l"
	.string "la cabeza fría y sacar a relucir lo\l"
	.string "mejor de tus POKÉMON.\l"
	.string "Desde aquí estaremos atentos a todo\l"
	.string "cuanto ocurra, no estarás solo\l"
	.string "enfrentando a la ÉLITE 4.$"

RocketHideout_9F_Presentacion_Sala_Move_1:
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_9F_Presentacion_Sala_Move_2:
walk_in_place_down
step_end

RocketHideout_9F_Presentacion_Sala_Move_3:
walk_down
walk_in_place_down
step_end

RocketHideout_9F_Presentacion_Sala_Move_4:
walk_in_place_left
delay_16
walk_in_place_down
step_end

RocketHideout_9F_Presentacion_Sala_Move_5:
walk_left
walk_down
walk_down
walk_down
walk_down
walk_right
walk_down
step_end

RocketHideout_9F_Entrenador_Experiencia::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 179
goto_if_gt RocketHideout_9F_Entrenador_Experiencia_Blissey
showmoneybox 0, 0
msgbox RocketHideout_9F_Entrenador_Experiencia_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_9F_Entrenador_Experiencia_No
delay 10
playse SE_SHOP
removemoney 5000 0
updatemoneybox
msgbox RocketHideout_9F_Entrenador_Experiencia_Texto_2 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ENTRENAMIENTO_6, RocketHideout_9F_Entrenador_Experiencia_Texto_3 
release
end

RocketHideout_9F_Entrenador_Experiencia_Blissey::
showmoneybox 0, 0
msgbox RocketHideout_9F_Entrenador_Experiencia_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_9F_Entrenador_Experiencia_No
delay 10
playse SE_SHOP
removemoney 5000 0
updatemoneybox
msgbox RocketHideout_9F_Entrenador_Experiencia_Texto_2 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_592, RocketHideout_9F_Entrenador_Experiencia_Texto_3 
release
end


RocketHideout_9F_Entrenador_Experiencia_No::
delay 40
hidemoneybox
release
end

RocketHideout_9F_Entrenador_Experiencia_Texto_1:
.string "Me especializo en entrenar la\n"
	.string "EXPERIENCIA, por 5000¥ tendrás\l"
	.string "una sesión completa de entreno.\l"
	.string "¿Aceptas?$"

RocketHideout_9F_Entrenador_Experiencia_Texto_2:
.string "Bien, vamos a ello.$"

RocketHideout_9F_Entrenador_Experiencia_Texto_3:
.string "Un honor servirle para mejorar su\n"
	.string "equipo.$"

RocketHideout_9F_Entrenador_Ataque_Especial::
lock
faceplayer
showmoneybox 0, 0
msgbox RocketHideout_9F_Entrenador_Ataque_Especial_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_9F_Entrenador_Experiencia_No
delay 10
playse SE_SHOP
removemoney 2000 0
updatemoneybox
msgbox RocketHideout_9F_Entrenador_Experiencia_Texto_2 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ENTRENAMIENTO_1, RocketHideout_9F_Entrenador_Experiencia_Texto_3 
release
end

RocketHideout_9F_Entrenador_Ataque_Especial_Texto_1:
.string "Me especializo en entrenar el\n"
	.string "AT.ESPECIAL, por 2000¥ tendrás\l"
	.string "una sesión completa de entreno.\l"
	.string "¿Aceptas?$"

RocketHideout_9F_Entrenador_Defensa::
lock
faceplayer
showmoneybox 0, 0
msgbox RocketHideout_9F_Entrenador_Defensa_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_9F_Entrenador_Experiencia_No
delay 10
playse SE_SHOP
removemoney 2000 0
updatemoneybox
msgbox RocketHideout_9F_Entrenador_Experiencia_Texto_2 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ENTRENAMIENTO_5, RocketHideout_9F_Entrenador_Experiencia_Texto_3 
release
end


RocketHideout_9F_Entrenador_Defensa_Texto_1:
.string "Me especializo en entrenar el\n"
	.string "DEFENSA, por 2000¥ tendrás\l"
	.string "una sesión completa de entreno.\l"
	.string "¿Aceptas?$"

RocketHideout_9F_Entrenador_Velocidad::
lock
faceplayer
showmoneybox 0, 0
msgbox RocketHideout_9F_Entrenador_Velocidad_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_9F_Entrenador_Experiencia_No
delay 10
playse SE_SHOP
removemoney 2000 0
updatemoneybox
msgbox RocketHideout_9F_Entrenador_Experiencia_Texto_2 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ENTRENAMIENTO_3, RocketHideout_9F_Entrenador_Experiencia_Texto_3 
release
end


RocketHideout_9F_Entrenador_Velocidad_Texto_1:
.string "Me especializo en entrenar el\n"
	.string "VELOCIDAD, por 2000¥ tendrás\l"
	.string "una sesión completa de entreno.\l"
	.string "¿Aceptas?$"

RocketHideout_9F_Entrenador_Ataque::
lock
faceplayer
showmoneybox 0, 0
msgbox RocketHideout_9F_Entrenador_Ataque_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_9F_Entrenador_Experiencia_No
delay 10
playse SE_SHOP
removemoney 2000 0
updatemoneybox
msgbox RocketHideout_9F_Entrenador_Experiencia_Texto_2 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ENTRENAMIENTO_2, RocketHideout_9F_Entrenador_Experiencia_Texto_3 
release
end

RocketHideout_9F_Entrenador_Ataque_Texto_1:
.string "Me especializo en entrenar el\n"
	.string "ATAQUE, por 2000¥ tendrás\l"
	.string "una sesión completa de entreno.\l"
	.string "¿Aceptas?$"



RocketHideout_9F_Entrenador_Defensa_Especial::
lock
faceplayer
showmoneybox 0, 0
msgbox RocketHideout_9F_Entrenador_Defensa_Especial_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_9F_Entrenador_Experiencia_No
delay 10
playse SE_SHOP
removemoney 2000 0
updatemoneybox
msgbox RocketHideout_9F_Entrenador_Experiencia_Texto_2 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ENTRENAMIENTO_7, RocketHideout_9F_Entrenador_Experiencia_Texto_3 
release
end


RocketHideout_9F_Entrenador_Defensa_Especial_Texto_1:
.string "Me especializo en entrenar el\n"
	.string "DEF.ESPECIAL, por 2000¥ tendrás\l"
	.string "una sesión completa de entreno.\l"
	.string "¿Aceptas?$"

RocketHideout_9F_Entrenador_Salud::
lock
faceplayer
showmoneybox 0, 0
msgbox RocketHideout_9F_Entrenador_Salud_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_9F_Entrenador_Experiencia_No
delay 10
playse SE_SHOP
removemoney 2000 0
updatemoneybox
msgbox RocketHideout_9F_Entrenador_Experiencia_Texto_2 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ENTRENAMIENTO_4, RocketHideout_9F_Entrenador_Experiencia_Texto_3 
release
end

RocketHideout_9F_Entrenador_Salud_Texto_1:
.string "Me especializo en entrenar el\n"
	.string "PUNTOS DE SALUD, por 2000¥ tendrás\l"
	.string "una sesión completa de entreno.\l"
	.string "¿Aceptas?$"
