Route49_Pagoda_P10_MapScripts::
	.byte 0


Route49_Pagoda_P10_Combate_Maestro::
lock
msgbox Route49_Pagoda_P10_Combate_Maestro_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Route49_Pagoda_P10_Combate_Maestro_Move_1
waitmovement 0x0
msgbox Route49_Pagoda_P10_Combate_Maestro_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P10_Combate_Maestro_Move_2
waitmovement 0x0
msgbox Route49_Pagoda_P10_Combate_Maestro_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P10_Combate_Maestro_Move_3
waitmovement 0x0
msgbox Route49_Pagoda_P10_Combate_Maestro_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P10_Combate_Maestro_Move_4
waitmovement 0x0
msgbox Route49_Pagoda_P10_Combate_Maestro_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P10_Combate_Maestro_Move_5
waitmovement 0x0
msgbox Route49_Pagoda_P10_Combate_Maestro_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_218, Route49_Pagoda_P10_Combate_Maestro_Texto_7
msgbox Route49_Pagoda_P10_Combate_Maestro_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P10_Combate_Maestro_Move_6
waitmovement 0x0
msgbox Route49_Pagoda_P10_Combate_Maestro_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P10_Combate_Maestro_Move_7
waitmovement 0x0
msgbox Route49_Pagoda_P10_Combate_Maestro_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P10_Combate_Maestro_Move_8
waitmovement 0x0
msgbox Route49_Pagoda_P10_Combate_Maestro_Texto_11 MSGBOX_AUTOCLOSE
setvar VAR_VERDANTURF_TOWN_STATE, 13
release
end

Route49_Pagoda_P10_Combate_Maestro_Move_8:
walk_slow_left
face_up
step_end

Route49_Pagoda_P10_Combate_Maestro_Move_7:
walk_slow_left
step_end

Route49_Pagoda_P10_Combate_Maestro_Move_6:
face_left
step_end

Route49_Pagoda_P10_Combate_Maestro_Move_5:
walk_right
step_end

Route49_Pagoda_P10_Combate_Maestro_Move_4:
walk_in_place_right
step_end

Route49_Pagoda_P10_Combate_Maestro_Move_3:
delay_4
face_up
delay_4
step_end

Route49_Pagoda_P10_Combate_Maestro_Move_2:
walk_slow_right
step_end

Route49_Pagoda_P10_Combate_Maestro_Move_1:
face_right
step_end

Route49_Pagoda_P10_Combate_Maestro_Texto_1:
	.string "I see the SACRED DRAGON doesn't choose\n"
	.string "anyone in vain.$"

Route49_Pagoda_P10_Combate_Maestro_Texto_2:
	.string "Its judgment would never be clouded by\n"
	.string "apparent tricks or cardboard\l"
	.string "champions.$"

Route49_Pagoda_P10_Combate_Maestro_Texto_3:
	.string "Similarly, this pagoda remains detached\n"
	.string "from external reality, as it has the\l"
	.string "ability to shape its own.$"

Route49_Pagoda_P10_Combate_Maestro_Texto_4:
	.string "It acts as a gateway for those who\n"
	.string "seek to forge their own destiny, to\l"
	.string "tread the path dictated by the mandate\l"
	.string "of their will.$"

Route49_Pagoda_P10_Combate_Maestro_Texto_5:
	.string "Let me know, what's your strategy\n"
	.string "during battles? What journey are you\l"
	.string "embarking on as a TRAINER?$"

Route49_Pagoda_P10_Combate_Maestro_Texto_6:
	.string "If your answers are not clear for those\n"
	.string "questions, you will never be able to\l"
	.string "defeat me.$"

Route49_Pagoda_P10_Combate_Maestro_Texto_7:
.string "Excellent…$"

Route49_Pagoda_P10_Combate_Maestro_Texto_8:
	.string "That's right, when we confine ourselves\n"
	.string "to a single path or style, we also\l"
	.string "confine ourselves to a single form,\l"
	.string "thereby limiting our adaptability.$"

Route49_Pagoda_P10_Combate_Maestro_Texto_9:
	.string "The wise TRAINER adapts to what the\n"
	.string "situation requires; truth does not\l"
	.string "reside in specific forms or styles but\l"
	.string "within the soul of each individual.$"

Route49_Pagoda_P10_Combate_Maestro_Texto_10:
	.string "As you and your POKÉMON acknowledge\n"
	.string "the current reality, constantly\l"
	.string "recreating itself, engaged in an\l"
	.string "unstoppable dance of movement…$"

Route49_Pagoda_P10_Combate_Maestro_Texto_11:
	.string "{PAUSE 25}…{PAUSE 25} when you reach that point, your\n"
	.string "possibilities will be infinite.$"

Route49_Pagoda_P10_Encuentro_Maestro::
lock
faceplayer
msgbox Route49_Pagoda_P10_Combate_Maestro_Texto_9 MSGBOX_NPC
release
end


