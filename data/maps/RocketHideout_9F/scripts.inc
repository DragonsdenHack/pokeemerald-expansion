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
	.string "Dränge niemals einen Feind mit dem\n"
	.string "Rücken zur Wand. Denn dann wird er all\l"
	.string "seine Kraft aufbringen, um sich aus der\l"
	.string "Situation zu befreien.$"

RocketHideout_9F_Presentacion_Sala_Texto_7:
	.string "Nun ja. Bisher haben wir uns, was ROT\n"
	.string "angeht, an dieser Weisheit orientiert.$"

RocketHideout_9F_Presentacion_Sala_Texto_8:
	.string "Aber jetzt ist die Zeit gekommen, um\n"
	.string "alle Karten offen auf den Tisch zu\l"
	.string "legen. Denn nun sind wir es, die mit\l"
	.string "dem Rücken zur Wand stehen.$"

RocketHideout_9F_Presentacion_Sala_Texto_9:
	.string "Halte dich nicht zurück, {PLAYER}!$"

RocketHideout_9F_Presentacion_Sala_Texto_10:
	.string "Gib alles im INDIGO-PLATEAU!$"

RocketHideout_9F_Presentacion_Sala_Texto_11:
	.string "Dränge ROT in die Enge und demonstriere\n"
	.string "ihm deine wahre Stärke! Kämpfe auf\l"
	.string "einem Level, das er noch nie gesehen\l"
	.string "hat. Dann und nur dann {PAUSE 15}…{PAUSE 15}$"

RocketHideout_9F_Presentacion_Sala_Texto_12:
	.string "Then{PAUSE 15}…{PAUSE 15}$"

RocketHideout_9F_Presentacion_Sala_Texto_13:
	.string "{PAUSE 15}…{PAUSE 15} wird er nicht in der Lage sein,\n"
	.string "entsprechend zu reagieren, um\l"
	.string "seinerseits alles zu geben.$"

RocketHideout_9F_Presentacion_Sala_Texto_1:
	.string "GIOVANNI: Gut. Da bist du ja.\n"
	.string "Sieh dich hier um, {PLAYER}.$"

RocketHideout_9F_Presentacion_Sala_Texto_2:
	.string "Hier statten wir unsere besten ROCKETs\n"
	.string "mit allem aus, was sie brauchen, um das\l"
	.string "Meiste aus dem Einzigen herauszuholen,\l"
	.string "was wir wirklich kontrollieren können:\l"
	.string "das Training.$"

RocketHideout_9F_Presentacion_Sala_Texto_3:
	.string "Hier findest du alles, was du brauchst,\n"
	.string "um deine POKéMON auf die nächste Stufe\l"
	.string "zu bringen. Alles in diesem Raum steht\l"
	.string "dir uneingeschränkt zur Verfügung.$"

RocketHideout_9F_Presentacion_Sala_Texto_4:
	.string "Dieser Raum richtet sich nach dir. Du\n"
	.string "entscheidest, ob du eine Pause einlegst\l"
	.string "oder weiterkämpfst. Hole das Meiste aus\l"
	.string "diesem Raum raus, bevor du dich der\l"
	.string "POKéMON LIGA stellst.$"

RocketHideout_9F_Presentacion_Sala_Texto_5:
	.string "Ich glaube an dich, {PLAYER}. Egal, wie\n"
	.string "stark deine Gegner sind - solange du\l"
	.string "einen kühlen Kopf bewahrst und dein\l"
	.string "Team auf die bestmögliche Weise\l"
	.string "einsetzt, wirst du bestehen. Wir werden\l"
	.string "alles von hier aus verfolgen,\l"
	.string "{PLAYER}. Du wirst nicht alleine sein,\l"
	.string "wenn du der TOP VIER gegenübertrittst.$"

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
compare VAR_UNUSED_0x40F7, 217
goto_if_gt RocketHideout_9F_Entrenador_Experiencia_Blissey_Hoenn
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

RocketHideout_9F_Entrenador_Experiencia_Blissey_Hoenn::
showmoneybox 0, 0
msgbox RocketHideout_9F_Entrenador_Experiencia_Texto_1.2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_9F_Entrenador_Experiencia_No
delay 10
playse SE_SHOP
removemoney 9000 0
updatemoneybox
msgbox RocketHideout_9F_Entrenador_Experiencia_Texto_2 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_731, RocketHideout_9F_Entrenador_Experiencia_Texto_3 
release
end


RocketHideout_9F_Entrenador_Experiencia_Blissey::
showmoneybox 0, 0
msgbox RocketHideout_9F_Entrenador_Experiencia_Texto_1.1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_9F_Entrenador_Experiencia_No
delay 10
playse SE_SHOP
removemoney 7500 0
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

RocketHideout_9F_Entrenador_Experiencia_Texto_1.2:
	.string "Ich bin auf EXP-Training spezialisiert.\p"
	.string "Eine vollständige Trainingseinheit\n"
	.string "kostet 9.000¥.\p"
	.string "Sind Sie interessiert?$"

RocketHideout_9F_Entrenador_Experiencia_Texto_1.1:
	.string "Ich bin auf EXP-Training spezialisiert.\p"
	.string "Eine vollständige Trainingseinheit\n"
	.string "kostet 7.500¥.\p"
	.string "Sind Sie interessiert?$"

RocketHideout_9F_Entrenador_Experiencia_Texto_1:
	.string "Ich bin auf EXP-Training spezialisiert.\p"
	.string "Eine vollständige Trainingseinheit\n"
	.string "kostet 5.000¥.\p"
	.string "Sind Sie interessiert?$"

RocketHideout_9F_Entrenador_Experiencia_Texto_2:
	.string "Alles klar. Legen wir los!$"

RocketHideout_9F_Entrenador_Experiencia_Texto_3:
	.string "Es war mir eine Ehre, Ihnen dabei zu\n"
	.string "helfen, Ihr Team zu verbessern.$"

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
	.string "Ich bin auf SPEZIAL-ANGRIFFS-Training\n"
	.string "spezialisiert. Eine vollständige\l"
	.string "Trainingseinheit kostet 2.000¥.\p"
	.string "Sind Sie interessiert?$"


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
	.string "Ich bin auf VERTEIDIGUNGS-Training\n"
	.string "spezialisiert. Eine vollständige\l"
	.string "Trainingseinheit kostet 2.000¥.\p"
	.string "Sind Sie interessiert?$"

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
	.string "Ich bin auf INITIATIVE-Training\n"
	.string "spezialisiert. Eine vollständige\l"
	.string "Trainingseinheit kostet 2.000¥.\p"
	.string "Sind Sie interessiert?$"

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
	.string "Ich bin auf ANGRIFFS-Training\n"
	.string "spezialisiert. Eine vollständige\l"
	.string "Trainingseinheit kostet 2.000¥.\p"
	.string "Sind Sie interessiert?$"



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
	.string "Ich bin auf SPZ-VERT-Training\n"
	.string "spezialisiert. Eine vollständige\l"
	.string "Trainingseinheit kostet 2.000¥.\p"
	.string "Sind Sie interessiert?$"

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
	.string "Ich bin auf KP-Training\n"
	.string "spezialisiert. Eine vollständige\l"
	.string "Trainingseinheit kostet 2.000¥.\p"
	.string "Sind Sie interessiert?$"


