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
playse SE_EXIT
setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
removeobject 10
setvar VAR_UNUSED_0x40F7, 93
release
end

RocketHideout_9F_Presentacion_Sala_Texto_1:
.string "GIOVANNI: Bien, ya estás aquí,\n"
	.string "observa este lugar {PLAYER}.$"

RocketHideout_9F_Presentacion_Sala_Texto_2:
.string "Aquí nos centramos en proporcionar\n"
	.string "a nuestros mejores ROCKETS las\l"
	.string "herramientas para llevar al límite\l"
	.string "la única variable que depende\l"
	.string "exclusivamente de nosotros: el\l"
	.string "entrenamiento.$"

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
.string "Confío en ti {PLAYER}, no importa\n"
	.string "la clase de poderes a los que\l"
	.string "vayas a enfrentarte si sabes\l"
	.string "mantener la cabeza fría y sacar a\l"
	.string "relucir lo mejor de tu equipo.\l"
	.string "Desde aquí estaremos atentos a lo\l"
	.string "que ocurra {PLAYER}, no estarás\l"
	.string "solo enfrentando a la ÉLITE 4.$"

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

RocketHideout_9F_Entrenador_Experiencia_No::
delay 40
hidemoneybox
delay 40
release
end

RocketHideout_9F_Entrenador_Experiencia_Texto_1:
.string "Me especializo en entrenar la\n"
	.string "EXPERIENCIA, por 5000 POKÉS\l"
	.string "tendrás una sesión completa de\l"
	.string "entreno, ¿aceptas?$"

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
	.string "AT.ESPECIAL, por 2000 POKÉS\l"
	.string "tendrás una sesión completa de\l"
	.string "entreno, ¿aceptas?$"

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
.string "Me especializo en entrenar la\n"
	.string "DEFENSA, por 2000 POKÉS\l"
	.string "tendrás una sesión completa de\l"
	.string "entreno, ¿aceptas?$"

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
.string "Me especializo en entrenar la\n"
	.string "VELOCIDAD, por 2000 POKÉS\l"
	.string "tendrás una sesión completa de\l"
	.string "entreno, ¿aceptas?$"

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
	.string "ATAQUE, por 2000 POKÉS\l"
	.string "tendrás una sesión completa de\l"
	.string "entreno, ¿aceptas?$"



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
.string "Me especializo en entrenar la\n"
	.string "DEF.ESPECIAL, por 2000 POKÉS\l"
	.string "tendrás una sesión completa de\l"
	.string "entreno, ¿aceptas?$"

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
.string "Me especializo en entrenar la\n"
	.string "SALUD, por 2000 POKÉS\l"
	.string "tendrás una sesión completa de\l"
	.string "entreno, ¿aceptas?$"
