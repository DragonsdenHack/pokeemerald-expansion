Goldenrod_Gym_MapScripts::
	.byte 0

GoldenrodGym_EventScript_Chica::
	trainerbattle_single TRAINER_ALEXA, GoldenrodGym_Text_ChicaIntro, GoldenrodGym_Text_ChicaDefeated
	msgbox GoldenrodGym_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



GoldenrodGym_EventScript_Chica2::
	trainerbattle_single TRAINER_AIDAN, GoldenrodGym_Text_Chica2Intro, GoldenrodGym_Text_Chica2Defeated
	msgbox GoldenrodGym_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



GoldenrodGym_EventScript_Chica3::
	trainerbattle_single TRAINER_RUBEN, GoldenrodGym_Text_Chica3Intro, GoldenrodGym_Text_Chica3Defeated
	msgbox GoldenrodGym_Text_Chica3PostBattle, MSGBOX_AUTOCLOSE
	end

GoldenrodGym_Encuentro_Valeria::
lock
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodGym_Encuentro_Valeria_Move_1
waitmovement 0x0
msgbox GoldenrodGym_Encuentro_Valeria_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodGym_Encuentro_Valeria_Move_2
waitmovement 0x0
applymovement 4, GoldenrodGym_Encuentro_Valeria_Move_3
waitmovement 0x0
msgbox GoldenrodGym_Encuentro_Valeria_Texto_2 MSGBOX_AUTOCLOSE
msgbox GoldenrodGym_Encuentro_Valeria_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox GoldenrodGym_Encuentro_Valeria_Texto_4 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodGym_Encuentro_Valeria_Move_4
waitmovement 0x0
msgbox GoldenrodGym_Encuentro_Valeria_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodGym_Encuentro_Valeria_Move_5
waitmovement 0x0
msgbox GoldenrodGym_Encuentro_Valeria_Texto_6 MSGBOX_AUTOCLOSE
msgbox GoldenrodGym_Encuentro_Valeria_Texto_7 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodGym_Encuentro_Valeria_Move_6
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodGym_Encuentro_Valeria_Move_7
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 2, GoldenrodGym_Encuentro_Valeria_Move_8
waitmovement 0x0
applymovement 2, GoldenrodGym_Encuentro_Valeria_Move_9
waitmovement 0x0
msgbox GoldenrodGym_Encuentro_Valeria_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox GoldenrodGym_Encuentro_Valeria_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodGym_Encuentro_Valeria_Move_10
waitmovement 0x0
msgbox GoldenrodGym_Encuentro_Valeria_Texto_10 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY
fadescreen 1
delay 2
removeobject 2
fadescreen 0
setvar VAR_UNUSED_0x40F7, 135
release
end

GoldenrodGym_Encuentro_Valeria_Texto_1:
	.string "????: You won't need to kick me out, I\n"
	.string "resign myself.$"

GoldenrodGym_Encuentro_Valeria_Texto_2:
	.string "But there's no need for you to react\n"
	.string "like this either. We don't know any\l"
	.string "TRAINER as skilled as you are. You could\l"
	.string "still be the LEADER, just adapting to\l"
	.string "the new times.$"

GoldenrodGym_Encuentro_Valeria_Texto_3:
	.string "????: That's not possible. Every cause\n"
	.string "has a consequence, and my DARK-TYPE\l"
	.string "POKÉMON require the right environment\l"
	.string "to continue growing. Without that,\l"
	.string "they'll lose part of what they are, and I\l"
	.string "won't tolerate the degradation of my\l"
	.string "team just for a passing urban trend\l"
	.string "towards NORMAL-TYPE. Farewell.$"

GoldenrodGym_Encuentro_Valeria_Texto_4:
.string "O-okay…\n"
	.string "However you want…$"

GoldenrodGym_Encuentro_Valeria_Texto_5:
.string "????: A challenger?\n"
	.string "I'm sorry but this is not the\l"
	.string "right moment.$"

GoldenrodGym_Encuentro_Valeria_Texto_6:
	.string "Under normal circumstances, I would\n"
	.string "tell you that my name is VALERIA. I\l"
	.string "specialize in the DARK TYPE and so on.\l"
	.string "But it's been a long time since this GYM\l"
	.string "no longer focuses on its main function:\l"
	.string "POKÉMON battles.$"

GoldenrodGym_Encuentro_Valeria_Texto_7:
	.string "VALERIA: For now, I'll retire to a\n"
	.string "secluded place to continue training\l"
	.string "before deciding on my next destination.$"

GoldenrodGym_Encuentro_Valeria_Texto_8:
	.string "Do you want to battle, regardless, just\n"
	.string "to test your POKÉMON against mine?$"

GoldenrodGym_Encuentro_Valeria_Texto_9:
	.string "Interesting, but not enough. You will\n"
	.string "have to prove what you are saying.$"

GoldenrodGym_Encuentro_Valeria_Texto_10:
	.string "If you really think you deserve it, have\n"
	.string "the courage to go beyond the train\l"
	.string "tracks. You'll find me around there.$"

GoldenrodGym_Encuentro_Valeria_Move_1:
walk_in_place_right
step_end

GoldenrodGym_Encuentro_Valeria_Move_2:
walk_right
walk_right
walk_right
face_up
step_end

GoldenrodGym_Encuentro_Valeria_Move_3:
walk_in_place_up
step_end

GoldenrodGym_Encuentro_Valeria_Move_4:
walk_left
walk_left
walk_down
walk_down
walk_down
step_end

GoldenrodGym_Encuentro_Valeria_Move_5:
walk_in_place_down
step_end

GoldenrodGym_Encuentro_Valeria_Move_6:
walk_left
walk_down
walk_left
walk_left
step_end

GoldenrodGym_Encuentro_Valeria_Move_7:
walk_in_place_left
step_end

GoldenrodGym_Encuentro_Valeria_Move_8:
emote_exclamation_mark
walk_in_place_right
step_end

GoldenrodGym_Encuentro_Valeria_Move_9:
emote_exclamation_mark
face_right
step_end

GoldenrodGym_Encuentro_Valeria_Move_10:
walk_right
walk_right
step_end


Goldenrod_Gym_Chicas::
lock
msgbox Goldenrod_Gym_Chicas_Texto_1 MSGBOX_AUTOCLOSE
release
end

Goldenrod_Gym_Chicas_Texto_1:
.string "…$"


TrigalGym_Gym_Dude::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 136
goto_if_gt TrigalGym_Gym_Dude_2
msgbox TrigalGym_Gym_Dude_Texto_1 MSGBOX_NPC
release
end

TrigalGym_Gym_Dude_2::
msgbox TrigalGym_Gym_Dude_Texto_2 MSGBOX_NPC
release
end

TrigalGym_Gym_Dude_Texto_1:
	.string "These girls{PAUSE 15}…{PAUSE 15} They're causing quite a\n"
	.string "stir about the TYPE of this GYM; it\l"
	.string "seems that DARK isn't favored by the\l"
	.string "majority. I just want to see epic\l"
	.string "battles!$"

TrigalGym_Gym_Dude_Texto_2:
	.string "Don't think I missed it! I saw you\n"
	.string "defeat VALERIA! The girls who come\l"
	.string "after her; will have to improve a lot to\l"
	.string "reach your level!$"




TrigalGym_Estatua::
lock
compare VAR_UNUSED_0x40F7, 136
goto_if_gt TrigalGym_Estatua_2
msgbox TrigalGym_Estatua_Texto_1 MSGBOX_AUTOCLOSE
release
end

TrigalGym_Estatua_2::
msgbox TrigalGym_Estatua_Texto_2 MSGBOX_AUTOCLOSE
release
end


TrigalGym_Estatua_Texto_1:
.string "GOLDENROD CITY POKÉMON\n"
	.string "GYM LEADER: VALERIA\p"
	.string "WINNER TRAINERS:\n"
	.string "(It is empty!)$"

TrigalGym_Estatua_Texto_2:
.string "GOLDENROD CITY POKÉMON\n"
	.string "GYM LEADER: VALERIA\p"
	.string "WINNER TRAINERS:\n"
	.string "{PLAYER}$"
