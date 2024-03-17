Route49_Pagoda_P12_MapScripts::
	.byte 0

Route49_Pagoda_P12_Combate_Maestro::
lock
msgbox Route49_Pagoda_P12_Combate_Maestro_Texto_1 MSGBOX_AUTOCLOSE
delay 5
applymovement 1, Route49_Pagoda_P12_Combate_Maestro_Move_1
waitmovement 0x0
msgbox Route49_Pagoda_P12_Combate_Maestro_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P12_Combate_Maestro_Move_2
waitmovement 0x0
msgbox Route49_Pagoda_P12_Combate_Maestro_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P12_Combate_Maestro_Move_3
waitmovement 0x0
msgbox Route49_Pagoda_P12_Combate_Maestro_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P12_Combate_Maestro_Move_4
waitmovement 0x0
msgbox Route49_Pagoda_P12_Combate_Maestro_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P12_Combate_Maestro_Move_5
waitmovement 0x0
msgbox Route49_Pagoda_P12_Combate_Maestro_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P12_Combate_Maestro_Move_3
waitmovement 0x0
msgbox Route49_Pagoda_P12_Combate_Maestro_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_220, Route49_Pagoda_P12_Combate_Maestro_Texto_8
msgbox Route49_Pagoda_P12_Combate_Maestro_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P12_Combate_Maestro_Move_2
waitmovement 0x0
msgbox Route49_Pagoda_P12_Combate_Maestro_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P12_Combate_Maestro_Move_6
waitmovement 0x0
msgbox Route49_Pagoda_P12_Combate_Maestro_Texto_11 MSGBOX_AUTOCLOSE
setvar VAR_VERDANTURF_TOWN_STATE, 15
release
end

Route49_Pagoda_P12_Combate_Maestro_Move_6:
walk_slow_right
delay_4
face_up
delay_4
step_end


Route49_Pagoda_P12_Combate_Maestro_Move_5:
delay_4
face_up
delay_4
step_end

Route49_Pagoda_P12_Combate_Maestro_Move_4:
walk_left
step_end

Route49_Pagoda_P12_Combate_Maestro_Move_3:
walk_in_place_left
step_end

Route49_Pagoda_P12_Combate_Maestro_Move_2:
face_right
step_end

Route49_Pagoda_P12_Combate_Maestro_Move_1:
face_left
step_end

Route49_Pagoda_P12_Combate_Maestro_Texto_1:
	.string "You must be {PLAYER}. I already lived\n"
	.string "this moment before, in my dreams.$"

Route49_Pagoda_P12_Combate_Maestro_Texto_2:
	.string "I was also once a CHAMPION, but I quit\n"
	.string "shortly after. When I finally managed\l"
	.string "to climb that great mountain, I realized\l"
	.string "it was the journey that I enjoyed; once\l"
	.string "at the top, I felt empty.$"

Route49_Pagoda_P12_Combate_Maestro_Texto_3:
	.string "Your case is different; you at least\n"
	.string "gained that fleeting recognition from\l"
	.string "the masses, didn't you? But more\l"
	.string "importantly, from those few who truly\l"
	.string "matter.$"

Route49_Pagoda_P12_Combate_Maestro_Texto_4:
	.string "Those few are the ones who ultimately\n"
	.string "write history, and time will set\l"
	.string "everything in its place.$"

Route49_Pagoda_P12_Combate_Maestro_Texto_5:
	.string "The most important thing is that, unlike\n"
	.string "others, your identity hasn't been\l"
	.string "carved in stone. You always have the\l"
	.string "power to choose.$"

Route49_Pagoda_P12_Combate_Maestro_Texto_6:
	.string "Those unfortunate ones who haven't\n"
	.string "faced adversity… Who go through life\l"
	.string "without an opponent, never knowing\l"
	.string "what they are capable of…lucky us for\l"
	.string "finding a worthy rival.$"

Route49_Pagoda_P12_Combate_Maestro_Texto_7:
	.string "There is no greater honor for me than\n"
	.string "to contemplate both the history\l"
	.string "already written and that yet to be\l"
	.string "written, and to be a participant in the\l"
	.string "unfolding of events that will lead us\l"
	.string "there!$"

Route49_Pagoda_P12_Combate_Maestro_Texto_8:
.string "I will never forget this fight.$"

Route49_Pagoda_P12_Combate_Maestro_Texto_9:
	.string "I thought my loyal DELPHOX and the\n"
	.string "DUNSPARCE I trained extensively at the\l"
	.string "summit of the SACRED RAGON's resting\l"
	.string "place would be enough.$"

Route49_Pagoda_P12_Combate_Maestro_Texto_10:
	.string "It's clear, someone like you can't be\n"
	.string "measured by the paradigms of their\l"
	.string "time. You would have been great in any\l"
	.string "context.$"

Route49_Pagoda_P12_Combate_Maestro_Texto_11:
	.string "I'll be looking forward to the future,\n"
	.string "after all, it's that uncertainty that we\l"
	.string "love. Mist makes everything wonderful.$"


Route49_Pagoda_P12_Encuentro_Maestro::
lock
faceplayer
msgbox Route49_Pagoda_P12_Encuentro_Maestro_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P12_Encuentro_Maestro_Texto_1:
	.string "For most, life isn't guided by choice but\n"
	.string "by inertia. What we perceive as laziness\l"
	.string "is often a lack of clarity. If you don't\l"
	.string "know who you are or where you're going,\l"
	.string "it's easy to be swept along.$"
