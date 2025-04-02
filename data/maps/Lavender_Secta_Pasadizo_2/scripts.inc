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
setvar VAR_UNUSED_0x40F8, 27
release
end

Lavender_Secta_Pasadizo_2_Esencia_Move_8:
emote_exclamation_mark
step_end

Lavender_Secta_Pasadizo_2_Esencia_Texto_1:
	.string "Then{PAUSE 15}…{PAUSE 15} you kept your will as it was.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_2:
	.string "And it led you here.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_3:
	.string "Look around. You're nowhere else but\n"
	.string "the core of the whole KANTO region.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_4:
	.string "A place as old as the region itself,\n"
	.string "timeless and blind to everything beyond\l"
	.string "its borders.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_5:
	.string "That's it. The beating heart of KANTO is\n"
	.string "neither SILPH's offices nor the INDIGO\l"
	.string "HQ.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_6:
	.string "Here and only here you shall be judged\n"
	.string "by the GODS of this world. Not in the\l"
	.string "LEAGUE, nor as a CHAMPION.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_7:
	.string "Come on, {PLAYER}. Make them blush!\n"
	.string "Show them how you bend to your\l"
	.string "advantage those same rules they\l"
	.string "created!$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_8:
	.string "Honor this place with a battle that\n"
	.string "shall be remembered forever and ever!$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_9:
	.string "Essence{PAUSE 25}…{PAUSE 25} Essence is fragile.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_10:
	.string "No. You're not here by coincidence.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_11:
	.string "You'd rent asunder the chains of\n"
	.string "LANCE's KANTO, and a realm of potential\l"
	.string "is open to you.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_12:
	.string "Not even in your insanest dreams you'd\n"
	.string "have imagined what awaits you, what you\l"
	.string "have still to live, see, and feel. KANTO\l"
	.string "will be a witness to every single bit of\l"
	.string "it.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_13:
	.string "But keep in mind{PAUSE 35}…{PAUSE 35} that essence can be\n"
	.string "corrupted.$"