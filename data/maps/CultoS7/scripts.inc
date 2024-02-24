CultoS7_MapScripts::
	.byte 0

CultoS7_1::
lock     
faceplayer     
msgbox CultoS7_Text_7, MSGBOX_DEFAULT
release     
end

CultoS7_Text_7:
.string "Conviértete en un alquimista:\n"
.string "transmuta el metal inferior en oro, el\l"
.string "sufrimiento en conciencia, el desastre\l"
.string "en iluminación.$"



CultoS7_EventScript_Cultista::
	trainerbattle_single TRAINER_KOJI_5, CultoS7_Text_CultistaIntro, CultoS7_Text_CultistaDefeated
	msgbox CultoS7_Text_CultistaPostBattle, MSGBOX_AUTOCLOSE
	end


CultoS7_Escena_Esencia::
lock
playse SE_EXIT
clearflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
addobject 4
applymovement OBJ_EVENT_ID_PLAYER, CultoS7_Escena_Esencia_Move_2
waitmovement 0x0
waitse
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CultoS7_Escena_Esencia_Move_1
waitmovement 0x0
delay 40
applymovement 4, CultoS7_Escena_Esencia_Move_3
applymovement OBJ_EVENT_ID_PLAYER, CultoS7_Escena_Esencia_Move_4
waitmovement 0x0
delay 40
msgbox CultoS7_Escena_Esencia_Texto_1 MSGBOX_AUTOCLOSE
delay 40
msgbox CultoS7_Escena_Esencia_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox CultoS7_Escena_Esencia_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, CultoS7_Escena_Esencia_Move_6
applymovement 4, CultoS7_Escena_Esencia_Move_5
waitmovement 0x0
setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
removeobject 4
setvar VAR_UNUSED_0x40F7, 170
delay 40
release
end

CultoS7_Escena_Esencia_Move_6:
delay_8
delay_8
delay_8
delay_8
face_right
step_end

CultoS7_Escena_Esencia_Move_5:
walk_slow_right
walk_slow_right
walk_slow_down
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
step_end

CultoS7_Escena_Esencia_Move_4:
lock_facing_direction
walk_slow_down
walk_slow_down
unlock_facing_direction
step_end

CultoS7_Escena_Esencia_Move_3:
walk_slow_down
step_end

CultoS7_Escena_Esencia_Move_1:
emote_exclamation_mark
step_end

CultoS7_Escena_Esencia_Move_2:
walk_in_place_up
step_end

CultoS7_Escena_Esencia_Texto_1:
.string "{PAUSE 30}…{PAUSE 30} …{PAUSE 30}$"

CultoS7_Escena_Esencia_Texto_2:
.string "La esencia puede corromperse ante la\n"
	.string "acción humana, aunque…{PAUSE 50}$"

CultoS7_Escena_Esencia_Texto_3:
	.string "{PAUSE 50}…{PAUSE 40}ello no implica una pérdida de su\n"
	.string "potencialidad.$"
