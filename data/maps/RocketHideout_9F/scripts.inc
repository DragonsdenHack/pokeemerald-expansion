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
	.string "GIOVANNI: Alright, you're here. Take a\n"
	.string "look at this place, {PLAYER}.$"

RocketHideout_9F_Presentacion_Sala_Texto_2:
	.string "Here, we aim to give our best ROCKETS\n"
	.string "the tools they need to maximize the\l"
	.string "only variable that's entirely within our\l"
	.string "control: training.$"

RocketHideout_9F_Presentacion_Sala_Texto_3:
	.string "All the essentials to elevate your\n"
	.string "POKÉMON's abilities to the next level\l"
	.string "are available here, easily accessible to\l"
	.string "you.$"

RocketHideout_9F_Presentacion_Sala_Texto_4:
	.string "So, in this room, it's all up to you. You\n"
	.string "decide whether to hit pause or keep\l"
	.string "pushing forward. Make sure you make it\l"
	.string "count before you take on the POKÉMON\l"
	.string "LEAGUE once and for all.$"

RocketHideout_9F_Presentacion_Sala_Texto_5:
	.string "I trust you, {PLAYER}. No matter the\n"
	.string "caliber of powers you're going to face,\l"
	.string "if you can keep a level head and bring\l"
	.string "out the best in your team. From here,\l"
	.string "we'll be monitoring whatever happens,\l"
	.string "{PLAYER}. You won't be alone facing\l"
	.string "the ELITE 4.$"

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
delay 40
release
end

RocketHideout_9F_Entrenador_Experiencia_Texto_1:
	.string "I specialize in EXP training. It's 5,000\n"
	.string "POKÉ for a full training session. Do\l"
	.string "you accept?$"

RocketHideout_9F_Entrenador_Experiencia_Texto_2:
	.string "Alright, let's do this!$"

RocketHideout_9F_Entrenador_Experiencia_Texto_3:
	.string "Serving you to enhance your team is\n"
	.string "truly an honor.$"

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
	.string "I specialize in SP.ATTACK training. It's\n"
	.string "2,000 POKÉ for a full training session.\l"
	.string "Do you accept?$"


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
	.string "I specialize in DEFENSE training. It's\n"
	.string "2,000 POKÉ for a full training session. Do\l"
	.string "you accept?$"

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
	.string "I specialize in SPEED training. It's\n"
	.string "2,000 POKÉ for a full training session. Do\l"
	.string "you accept?$"

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
	.string "I specialize in ATTACK training. It's\n"
	.string "2,000 POKÉ for a full training session. Do\l"
	.string "you accept?$"



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
	.string "I specialize in SP.DEFENSE training. It's\n"
	.string "2,000 POKÉ for a full training session. Do\l"
	.string "you accept?$"

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
	.string "I specialize in HP training. It's\n"
	.string "2,000 POKÉ for a full training session. Do\l"
	.string "you accept?$"
