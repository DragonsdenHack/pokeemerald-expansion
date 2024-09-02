MtSilver3_MapScripts::
	.byte 0

MtSilver3_1::
end



MtSilver3_3::
end



MtSilver3_4::
end

MtSilver3_Combate_Rojo::
lock
faceplayer
compare VAR_RECYCLE_GOODS, 0
goto_if_gt MtSilver3_Combate_Rojo_2
compare VAR_UNUSED_0x40F7, 157
goto_if_gt MtSilver3_Combate_Rojo_2
msgbox MtSilver3_Combate_Rojo_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ROJO_3, MtSilver3_Combate_Rojo_Texto_2
applymovement OBJ_EVENT_ID_PLAYER, MtSilver3_Combate_Rojo_Move_1
waitmovement 0x0
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 2
delay 30
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MtSilver3_Combate_Rojo_Move_2
waitmovement 0x0
msgbox MtSilver3_Combate_Rojo_Texto_3 MSGBOX_AUTOCLOSE
applymovement 2, MtSilver3_Combate_Rojo_Move_3
waitmovement 0x0
delay 15
msgbox MtSilver3_Combate_Rojo_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox MtSilver3_Combate_Rojo_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, MtSilver3_Combate_Rojo_Move_4
waitmovement 0x0
msgbox MtSilver3_Combate_Rojo_Texto_6 MSGBOX_AUTOCLOSE
applymovement 2, MtSilver3_Combate_Rojo_Move_5
waitmovement 0x0
msgbox MtSilver3_Combate_Rojo_Texto_7 MSGBOX_AUTOCLOSE
applymovement 2, MtSilver3_Combate_Rojo_Move_4
waitmovement 0x0
msgbox MtSilver3_Combate_Rojo_Texto_8 MSGBOX_AUTOCLOSE
msgbox MtSilver3_Combate_Rojo_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox MtSilver3_Combate_Rojo_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox MtSilver3_Combate_Rojo_Texto_10 MSGBOX_AUTOCLOSE
applymovement 2, MtSilver3_Combate_Rojo_Move_6
waitmovement 0x0
msgbox MtSilver3_Combate_Rojo_Texto_11 MSGBOX_AUTOCLOSE
applymovement 2, MtSilver3_Combate_Rojo_Move_7
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
removeobject 2
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 157
setvar VAR_RECYCLE_GOODS, 1
release
end

MtSilver3_Combate_Rojo_2::
msgbox MtSilver3_Combate_Rojo_Texto_1 MSGBOX_AUTOCLOSE
release
end

MtSilver3_Combate_Rojo_Texto_1:
.string "RED: {PAUSE 25}…{PAUSE 25}$"

MtSilver3_Combate_Rojo_Texto_2:
.string "¡…!$"

MtSilver3_Combate_Rojo_Texto_3:
.string "????: {PLAYER}? Am I wrong?\n"
	.string "We already know each other.$"

MtSilver3_Combate_Rojo_Texto_4:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

MtSilver3_Combate_Rojo_Texto_5:
	.string "DRAGON M.: Your friends should know\n"
	.string "that MT. SILVER is not the place to\l"
	.string "dispose of their failed experiments;\l"
	.string "they'll end up linking this imitation\l"
	.string "TRAINER with a true legend.$"

MtSilver3_Combate_Rojo_Texto_6:
	.string "The MASTER of ECRUTEAK CITY told me\n"
	.string "about you; apparently, you have a great\l"
	.string "talent for POKÉMON battles. You could\l"
	.string "never have stood up to my student\l"
	.string "LANCE if that weren't the case.$"

MtSilver3_Combate_Rojo_Texto_7:
	.string "JOHTO never wanted to go to war with\n"
	.string "KANTO, but LANCE deceived us all about\l"
	.string "the true situation in the neighboring\l"
	.string "region.$"

MtSilver3_Combate_Rojo_Texto_8:
	.string "It was a historic act, no doubt, but the\n"
	.string "real question is: did you do it for the\l"
	.string "benefit of KANTO-or to swap one\l"
	.string "dictatorship for another?$"

MtSilver3_Combate_Rojo_Texto_9:
	.string "Regardless, it's evident that you\n"
	.string "uphold POKÉMON battles in all their\l"
	.string "aspects, showing respect and a humble\l"
	.string "willingness to learn from those who\l"
	.string "forged this ancient region, which we\l"
	.string "highly value here.$"

MtSilver3_Combate_Rojo_Texto_10:
	.string "That's why I, along with the GRAND\n"
	.string "MASTER of ECRUTEAK CITY, invite you to\l"
	.string "visit BELL TOWER, climb to its peak, and\l"
	.string "behold JOHTO from a vantage point\l"
	.string "you've never seen before.$"

MtSilver3_Combate_Rojo_Texto_11:
	.string "Maybe my old buddy will be up for giving\n"
	.string "you a few pointers on battling.\l"
	.string "Someone must carry on our technique\l"
	.string "once we're gone. Don't you agree?\l"
	.string "CHAMPION?$"

MtSilver3_Combate_Rojo_Move_1:
face_up
step_end

MtSilver3_Combate_Rojo_Move_2:
emote_exclamation_mark
face_down
step_end

MtSilver3_Combate_Rojo_Move_3:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

MtSilver3_Combate_Rojo_Move_4:
walk_in_place_up
step_end

MtSilver3_Combate_Rojo_Move_5:
face_right
step_end

MtSilver3_Combate_Rojo_Move_6:
face_down
step_end

MtSilver3_Combate_Rojo_Move_7:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end
