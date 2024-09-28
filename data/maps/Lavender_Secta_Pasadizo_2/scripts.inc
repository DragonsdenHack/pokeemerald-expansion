Lavender_Secta_Pasadizo_2_MapScripts::
	.byte 0

Lavender_Secta_Pasadizo_2_Esencia_Move_1:
delay_16
face_left
delay_16
delay_8
face_down
delay_16
delay_8
face_left
delay_16
step_end

Lavender_Secta_Pasadizo_2_Esencia_Move_2:
face_left
step_end

Lavender_Secta_Pasadizo_2_Esencia_Move_3:
face_down
step_end

Lavender_Secta_Pasadizo_2_Esencia_Move_4:
walk_in_place_down
step_end

Lavender_Secta_Pasadizo_2_Esencia_Move_5:
face_up
step_end

Lavender_Secta_Pasadizo_2_Esencia_Move_6:
walk_slow_down
step_end

Lavender_Secta_Pasadizo_2_Esencia_Move_7:
lock_facing_direction
walk_slow_up
unlock_facing_direction
step_end


Lavender_Secta_Pasadizo_2_Esencia::
lock
playse SE_EXIT
clearflag FLAG_HIDE_ROUTE_119_SCOTT
addobject 1
applymovement OBJ_EVENT_ID_PLAYER, CultoS7_Escena_Esencia_Move_2
waitmovement 0x0
waitse
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CultoS7_Escena_Esencia_Move_1
waitmovement 0x0
delay 40
applymovement 1, CultoS7_Escena_Esencia_Move_3
applymovement OBJ_EVENT_ID_PLAYER, CultoS7_Escena_Esencia_Move_4
waitmovement 0x0
delay 40
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_2_Esencia_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_2_Esencia_Move_2
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_4 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_2_Esencia_Move_3
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_5 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_2_Esencia_Move_4
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_2_Esencia_Move_5
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_6 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_2_Esencia_Move_6
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_7 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_2_Esencia_Move_4
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_706, Lavender_Secta_Pasadizo_2_Esencia_Texto_9
delay 15
applymovement 1, Lavender_Secta_Pasadizo_2_Esencia_Move_7
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_10 MSGBOX_AUTOCLOSE
delay 25
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_11 MSGBOX_AUTOCLOSE
delay 25
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_12 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_2_Esencia_Move_5
waitmovement 0x0
delay 15
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_13 MSGBOX_AUTOCLOSE
delay 10
playse SE_M_FAINT_ATTACK
setflag FLAG_HIDE_ROUTE_119_SCOTT
removeobject 1
waitse
delay 35
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_2_Esencia_Move_8
waitmovement 0x0
setvar VAR_UNUSED_0x40FF, 27
release
end

Lavender_Secta_Pasadizo_2_Esencia_Move_8:
emote_exclamation_mark
step_end

Lavender_Secta_Pasadizo_2_Esencia_Texto_1:
	.string "Entonces{PAUSE 15}…{PAUSE 15} mantuviste tu voluntad\n"
	.string "intacta.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_2:
	.string "Y eso te ha llevado hasta aquí.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_3:
	.string "Observa. Estás en el núcleo de KANTO.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_4:
	.string "Un lugar tan antiguo como la propia\n"
	.string "región, paralizado en el tiempo, y ajeno\l"
	.string "a todo lo que fuera de él ocurra.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_5:
	.string "Así es. El corazón que late en KANTO no\n"
	.string "está ni en los despachos de SILPH ni en\l"
	.string "la sede del CG de MESETA AÑIL.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_6:
	.string "Solo aquí los dioses del mundo POKÉMON\n"
	.string "te juzgarán. No en la LIGA POKÉMON, no\l"
	.string "como CAMPEÓN.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_7:
	.string "Vamos, {PLAYER}. Haz que se ruboricen,\n"
	.string "¡que vean lo que eres capaz de hacer\l"
	.string "con las reglas que ellos mismos crearon!$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_8:
	.string "¡Honra a este lugar con\n"
	.string "un combate inolvidable!$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_9:
	.string "La esencia{PAUSE 25}…{PAUSE 25} la esencia es frágil.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_10:
	.string "No. No estás aquí por casualidad.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_11:
	.string "Rompiste las cadenas de la KANTO de\n"
	.string "LANCE, y ahora un mundo de\l"
	.string "posibilidades te espera.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_12:
	.string "Ni en tus más descabellados sueños\n"
	.string "podrías imaginar todo lo que te\l"
	.string "aguarda, todo lo que aún te queda por\l"
	.string "ver y vivir. KANTO será testigo de ello.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_13:
	.string "Pero recuerda{PAUSE 35}…{PAUSE 35} la esencia\n"
	.string "puede malograrse.$"
