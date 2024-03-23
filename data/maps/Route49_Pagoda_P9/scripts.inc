Route49_Pagoda_P9_MapScripts::
	.byte 0


Route49_Pagoda_P9_Combate_Maestro::
lock
applymovement OBJ_EVENT_ID_PLAYER, Route49_Pagoda_P9_Combate_Maestro_Move_1
msgbox Route49_Pagoda_P9_Combate_Maestro_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Route49_Pagoda_P9_Combate_Maestro_Move_3
applymovement 1, Route49_Pagoda_P9_Combate_Maestro_Move_2
waitmovement 0x0
msgbox Route49_Pagoda_P9_Combate_Maestro_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P9_Combate_Maestro_Move_4
waitmovement 0x0
msgbox Route49_Pagoda_P9_Combate_Maestro_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P9_Combate_Maestro_Move_5
waitmovement 0x0
msgbox Route49_Pagoda_P9_Combate_Maestro_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P9_Combate_Maestro_Move_6
waitmovement 0x0
msgbox Route49_Pagoda_P9_Combate_Maestro_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P9_Combate_Maestro_Move_4
waitmovement 0x0
msgbox Route49_Pagoda_P9_Combate_Maestro_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_217, Route49_Pagoda_P9_Combate_Maestro_Texto_7
applymovement 1, Route49_Pagoda_P9_Combate_Maestro_Move_7
waitmovement 0x0
msgbox Route49_Pagoda_P9_Combate_Maestro_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P9_Combate_Maestro_Move_6
waitmovement 0x0
msgbox Route49_Pagoda_P9_Combate_Maestro_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P9_Combate_Maestro_Move_8
waitmovement 0x0
msgbox Route49_Pagoda_P9_Combate_Maestro_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox Route49_Pagoda_P9_Combate_Maestro_Texto_11 MSGBOX_AUTOCLOSE
setvar VAR_VERDANTURF_TOWN_STATE, 12
release
end

Route49_Pagoda_P9_Combate_Maestro_Move_8:
walk_right
face_up
step_end

Route49_Pagoda_P9_Combate_Maestro_Move_7:
lock_facing_direction
walk_slow_right
unlock_facing_direction
step_end

Route49_Pagoda_P9_Combate_Maestro_Move_6:
walk_in_place_left
step_end

Route49_Pagoda_P9_Combate_Maestro_Move_5:
face_up
step_end

Route49_Pagoda_P9_Combate_Maestro_Move_4:
walk_left
step_end

Route49_Pagoda_P9_Combate_Maestro_Move_3:
walk_right
walk_up
walk_right
step_end

Route49_Pagoda_P9_Combate_Maestro_Move_2:
face_left
step_end

Route49_Pagoda_P9_Combate_Maestro_Move_1:
face_right
step_end

Route49_Pagoda_P9_Combate_Maestro_Texto_1:
.string "You must be {PLAYER}, aren't you?$"

Route49_Pagoda_P9_Combate_Maestro_Texto_2:
	.string "The GRAND MASTER already told us about\n"
	.string "your arrival.$"

Route49_Pagoda_P9_Combate_Maestro_Texto_3:
	.string "The DUN TOWER is{PAUSE 25}…{PAUSE 25} like a time capsule,\n"
	.string "isn't it? No matter all the changes in\l"
	.string "the world, this pagoda retains the\l"
	.string "essence of its early days completely\l"
	.string "unchanged.$"

Route49_Pagoda_P9_Combate_Maestro_Texto_4:
	.string "Hence, what could be a greater honor\n"
	.string "than to duel here, just as the esteemed\l"
	.string "masters of the past did?$"

Route49_Pagoda_P9_Combate_Maestro_Texto_5:
	.string "Trying to match the heights once\n"
	.string "reached, and who knows, even surpass\l"
	.string "them, with us as the sole witnesses to\l"
	.string "recreate that fiction.$"

Route49_Pagoda_P9_Combate_Maestro_Texto_6:
	.string "Not just this place{PAUSE 25}…{PAUSE 25} my POKÉMON are\n"
	.string "also from the old days!$"

Route49_Pagoda_P9_Combate_Maestro_Texto_7:
	.string "You are a master of the old… and the\n"
	.string "new.$"

Route49_Pagoda_P9_Combate_Maestro_Texto_8:
	.string "It is clear, since EUSINE we hadn't seen\n"
	.string "two youngsters with such great potential\l"
	.string "as you.$"

Route49_Pagoda_P9_Combate_Maestro_Texto_9:
	.string "I would even go further to say that\n"
	.string "your potential is greater, something\l"
	.string "even more commendable considering your\l"
	.string "surroundings.$"

Route49_Pagoda_P9_Combate_Maestro_Texto_10:
	.string "My part is done, you still have a long\n"
	.string "way to reach the end.$"

Route49_Pagoda_P9_Combate_Maestro_Texto_11:
	.string "After all, you're just on the ninth floor\n"
	.string "of a lost pagoda, on the edge of a cliff,\l"
	.string "right?$"

Route49_Pagoda_P9_Dialogo_Maestro::
lock
faceplayer
msgbox Route49_Pagoda_P9_Combate_Maestro_Texto_3 MSGBOX_NPC
release
end
