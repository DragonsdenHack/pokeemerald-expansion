Route49_Pagoda_P11_MapScripts::
	.byte 0

Route49_Pagoda_P11_Combate_Maestro::
lock
delay 15
msgbox Route49_Pagoda_P11_Combate_Maestro_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Route49_Pagoda_P11_Combate_Maestro_Move_1
waitmovement 0x0
delay 15
msgbox Route49_Pagoda_P11_Combate_Maestro_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Route49_Pagoda_P11_Combate_Maestro_Move_2
waitmovement 0x0
msgbox Route49_Pagoda_P11_Combate_Maestro_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P11_Combate_Maestro_Move_3
waitmovement 0x0
msgbox Route49_Pagoda_P11_Combate_Maestro_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P11_Combate_Maestro_Move_4
waitmovement 0x0
msgbox Route49_Pagoda_P11_Combate_Maestro_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P11_Combate_Maestro_Move_5
waitmovement 0x0
msgbox Route49_Pagoda_P11_Combate_Maestro_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P11_Combate_Maestro_Move_4
waitmovement 0x0
msgbox Route49_Pagoda_P11_Combate_Maestro_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_219, Route49_Pagoda_P11_Combate_Maestro_Texto_7
msgbox Route49_Pagoda_P11_Combate_Maestro_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P11_Combate_Maestro_Move_6
waitmovement 0x0
msgbox Route49_Pagoda_P11_Combate_Maestro_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P11_Combate_Maestro_Move_7
waitmovement 0x0
msgbox Route49_Pagoda_P11_Combate_Maestro_Texto_10 MSGBOX_AUTOCLOSE
setvar VAR_VERDANTURF_TOWN_STATE, 14
release
end

Route49_Pagoda_P11_Combate_Maestro_Move_7:
walk_slow_right
delay_4
face_up
delay_4
step_end

Route49_Pagoda_P11_Combate_Maestro_Move_6:
face_right
step_end

Route49_Pagoda_P11_Combate_Maestro_Move_5:
walk_left
step_end

Route49_Pagoda_P11_Combate_Maestro_Move_4:
walk_in_place_left
step_end

Route49_Pagoda_P11_Combate_Maestro_Move_3:
delay_4
face_up
delay_4
step_end

Route49_Pagoda_P11_Combate_Maestro_Move_2:
face_left
step_end

Route49_Pagoda_P11_Combate_Maestro_Move_1:
walk_slow_right
walk_slow_right
step_end

Route49_Pagoda_P11_Combate_Maestro_Texto_1:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

Route49_Pagoda_P11_Combate_Maestro_Texto_2:
	.string "Oh... I'm truly sorry. I was lost in\n"
	.string "thought, meditating.$"

Route49_Pagoda_P11_Combate_Maestro_Texto_3:
	.string "It's quite a common method around here.\n"
	.string "Through it, we heighten our awareness\l"
	.string "level, allowing us to better understand\l"
	.string "ourselves and our environment.$"

Route49_Pagoda_P11_Combate_Maestro_Texto_4:
	.string "As long as you don't turn the\n"
	.string "unconscious into conscious, the\l"
	.string "unconscious will guide your life, and\l"
	.string "you will call it destiny.$"

Route49_Pagoda_P11_Combate_Maestro_Texto_5:
	.string "But you already know that, don't you?\n"
	.string "Even if it's unconsciously, otherwise,\l"
	.string "you would never have made it this far.$"

Route49_Pagoda_P11_Combate_Maestro_Texto_6:
	.string "Now the matter is, to what extent have\n"
	.string "you developed the level of\l"
	.string "consciousness with your POKÉMON team?$"

Route49_Pagoda_P11_Combate_Maestro_Texto_7:
.string "Oh… I see…$"

Route49_Pagoda_P11_Combate_Maestro_Texto_8:
	.string "Despite your young age, I see that you\n"
	.string "have already lived intense experiences.\l"
	.string "That has strengthened the BOND with\l"
	.string "your POKÉMON in a special way,\l"
	.string "different from what could be achieved\l"
	.string "secluded here, but equally effective.$"

Route49_Pagoda_P11_Combate_Maestro_Texto_9:
	.string "There's no doubt, your advancement\n"
	.string "echoes that of the SACRED DRAGON.$"

Route49_Pagoda_P11_Combate_Maestro_Texto_10:
	.string "I only hope you don't lose your way.$"



Route49_Pagoda_P11_Encuentro_Maestro::
lock
faceplayer
msgbox Route49_Pagoda_P11_Encuentro_Maestro_Texto_1 MSGBOX_NPC
release
end

Route49_Pagoda_P11_Encuentro_Maestro_Texto_1:
	.string "As long as you don't turn the\n"
	.string "unconscious into conscious, the\l"
	.string "unconscious will guide your life, and\l"
	.string "you will call it destiny.$"
