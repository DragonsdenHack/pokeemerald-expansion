Gimnasio_CuevaHypno_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Gimnasio_CuevaHypno_OnFrame
	.byte 0

Gimnasio_CuevaHypno_OnFrame:
map_script_2 VAR_DEWFORD_TOWN_STATE, 2, Gimnasio_CuevaHypno_Dialogo_Lider
	.2byte 0

Gimnasio_CuevaHypno_Equipo_Lavanda::
lock
msgbox Gimnasio_CuevaHypno_Equipo_Lavanda_Texto_1 MSGBOX_SIGN
msgbox Gimnasio_CuevaHypno_Equipo_Lavanda_Texto_2 MSGBOX_SIGN
release
end

Gimnasio_CuevaHypno_Equipo_Lavanda_Texto_1:
	.string "TEAM AS LAVENDER TOWN GYM LEADER$"

Gimnasio_CuevaHypno_Equipo_Lavanda_Texto_2:
.string "DROWZEE - Lv.24\n"
	.string "CUBONE - Lv.25\l"
	.string "HAUNTER - Lv.27\l"
	.string "HYPNO - Lv.28$"

Gimnasio_CuevaHypno_Equipo_Tera::
lock
msgbox Gimnasio_CuevaHypno_Equipo_Tera_Texto_1 MSGBOX_SIGN
msgbox Gimnasio_CuevaHypno_Equipo_Tera_Texto_2 MSGBOX_SIGN
release
end

Gimnasio_CuevaHypno_Equipo_Tera_Texto_1:
	.string "TEAM AS THREE ISLAND GYM LEADER$"

Gimnasio_CuevaHypno_Equipo_Tera_Texto_2:
.string "HYPNO - Lv.43\n"
	.string "HAUNTER - Lv.44\l"
	.string "MAROWAK - Lv.46\l"
	.string "GIRAFARIG - Lv.47\l"
	.string "HYPNO - Lv.49$"

Gimnasio_CuevaHypno_Dialogo_Lider::
lock
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Gimnasio_CuevaHypno_Dialogo_Lider_Move_1
waitmovement 0x0
delay 15
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_2
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Gimnasio_CuevaHypno_Dialogo_Lider_Move_3
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_4
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Gimnasio_CuevaHypno_Dialogo_Lider_Move_6
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_5
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_7
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_5
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_8
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_9
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_10
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_5
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_11
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_7
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_12 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, Gimnasio_CuevaHypno_Dialogo_Lider_Move_4
applymovement OBJ_EVENT_ID_CAMERA, Gimnasio_CuevaHypno_Dialogo_Lider_Move_12
waitmovement 0x0
special RemoveCameraObject
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_14 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Gimnasio_CuevaHypno_Dialogo_Lider_Move_13
waitmovement 0x0
special RemoveCameraObject
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Gimnasio_CuevaHypno_Dialogo_Lider_Move_6
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_5
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_8
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Gimnasio_CuevaHypno_Dialogo_Lider_Move_7
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_17 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
fadescreen 1
delay 20
removeobject 1
fadescreen 0
setvar VAR_DEWFORD_TOWN_STATE, 3
release
end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_13:
walk_slow_down
walk_slow_down
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_12:
walk_slow_up
walk_slow_up
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_11:
walk_slow_right
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_10:
walk_in_place_left
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_9:
walk_slow_left
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_8:
walk_in_place_right
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_7:
face_up
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_6:
face_left
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_5:
face_right
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_4:
walk_in_place_up
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_3:
walk_slow_right
walk_slow_up
walk_slow_up
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_2:
walk_in_place_down
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_1:
walk_slow_up
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_1:
	.string "What do you think? Not bad,\n"
	.string "well-preserved, isn't it?$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_2:
	.string "I had my doubts; regular people would\n"
	.string "run scared from such a eerie place. But\l"
	.string "you're already one of the few who would\l"
	.string "explore BERRY FOREST just for the\l"
	.string "pleasure of it. Your curiosity has\l"
	.string "brought you here, even the islanders\l"
	.string "themselves have forgotten about this\l"
	.string "place.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_3:
	.string "And it's because…{PAUSE 20} this once was an\n"
	.string "official GYM. In the time when the\l"
	.string "islands had 4 GYMS, I came here after\l"
	.string "the LAVENDER TOWN GYM was closed.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_4:
	.string "Soon, I managed to become the\n"
	.string "strongest LEADER of the islands, even\l"
	.string "more than the LEADER of SEVEN ISLAND.\l"
	.string "All thanks to my dear HYPNO.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_5:
	.string "Our bond became unbreakable from the\n"
	.string "start, from when it was nothing more\l"
	.string "than a little DROWZEE, and I was a young\l"
	.string "one beginning my adventure.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_6:
	.string "As HYPNO, our PSYCHIC powers fed off\n"
	.string "each other, we were perfectly\l"
	.string "synchronized. This caused something\l"
	.string "unheard of, but that apparently the\l"
	.string "ancients of JOHTO know well: the\l"
	.string "evolution of my HYPNO didn't stop\l"
	.string "there; it continued to improve.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_7:
	.string "However, its powers became unstable\n"
	.string "and…{PAUSE 20} dangerous for ordinary people. As\l"
	.string "a consequence, we had to close the GYM,\l"
	.string "followed by the other SEVII GYMS later.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_8:
	.string "The rest is history: this place was\n"
	.string "forgotten; no one from that time lives\l"
	.string "in THREE ISLAND anymore.$"


Gimnasio_CuevaHypno_Dialogo_Lider_Texto_9:
	.string "The only vestiges that remain from the\n"
	.string "past are the HYPNOS that inhabit BERRY\l"
	.string "FOREST, descendants of my own one.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_10:
	.string "Their powers are very benign in\n"
	.string "comparison, although sometimes they\l"
	.string "can scare the children playing deep in\l"
	.string "the forest.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_11:
	.string "Fortunately, the connection I have\n"
	.string "with my HYPNO allows me to know when\l"
	.string "the others are crossing the line, like\l"
	.string "when you saw me.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_12:
	.string "Now that you know my history, you'll be\n"
	.string "a bit more ready for our battle, and\l"
	.string "also…{PAUSE 20} you'll comprehend what the\l"
	.string "puzzle of this GYM is about. Observe.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_13:
	.string "You'll have to interact with the doors\n"
	.string "to progress, and answer the questions.\l"
	.string "If you make a mistake, you can still\l"
	.string "move forward, but you'll have to battle.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_14:
	.string "Once you answer, the door will\n"
	.string "disappear, and you can proceed. If you\l"
	.string "leave the GYM, you'll have to start\l"
	.string "again, as the doors will reappear\l"
	.string "automatically. Easy, right?$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_15:
	.string "Oh! And one more thing. You should know\n"
	.string "that the questions are personalized\l"
	.string "for each individual.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_16:
	.string "One of the abilities of my HYPNO is that\n"
	.string "it can see the future, at least\l"
	.string "partially. It also knows about the life\l"
	.string "experiences of individuals just by\l"
	.string "sensing their presence.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_17:
	.string "HYPNO takes advantage of this to test\n"
	.string "the subject. Forcing them to expand\l"
	.string "their own reality from what they have\l"
	.string "already seen, because…{PAUSE 40} What could limit\l"
	.string "us more than our own perception of\l"
	.string "reality?$"


Gimnasio_CuevaHypno_Primera_Pregunta::
lock
msgbox Gimnasio_CuevaHypno_Primera_Pregunta_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Gimnasio_CuevaHypno_Primera_Pregunta_No
delay 20
playse SE_FAILURE
waitse
msgbox Gimnasio_CuevaHypno_Primera_Pregunta_Texto_2 MSGBOX_AUTOCLOSE
playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Mision7Lab4_Combate_Move_1
msgbox Mision7Lab4_Combate_Nidoking_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_147, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
waitse
playse SE_M_REFLECT
delay 30
setmetatile 19, 33, 0x289, FALSE
setmetatile 19, 32, 0x281, FALSE
special DrawWholeMapView
delay 20
release
end

Gimnasio_CuevaHypno_Primera_Pregunta_Texto_1:
	.string "GASTLY, HAUNTER, and GENGAR are the\n"
	.string "only GHOST POKÉMON in LAVENDER TOWN.$"

Gimnasio_CuevaHypno_Primera_Pregunta_Texto_2:
	.string "I thought you had seen enough of this\n"
	.string "world to be able to see beyond the\l"
	.string "apparent. I see that, like the rest, you\l"
	.string "only aim to widen your view and subdue\l"
	.string "the senses. Incorrect answer.$"

Gimnasio_CuevaHypno_Primera_Pregunta_No::
delay 20
playse SE_SUCCESS
waitse
msgbox Gimnasio_CuevaHypno_Primera_Pregunta_No_Texto_1 MSGBOX_AUTOCLOSE
playse SE_M_REFLECT
delay 30
setmetatile 19, 33, 0x289, FALSE
setmetatile 19, 32, 0x281, FALSE
special DrawWholeMapView
waitse
release
end


Gimnasio_CuevaHypno_Primera_Pregunta_No_Texto_1:
	.string "Correct answer, but…{PAUSE 20} blindly, right?\n"
	.string "You don't know any ghosts in KANTO\l"
	.string "beyond those 3, and yet you feel that\l"
	.string "there's something more…{PAUSE 20} hidden, don't\l"
	.string "you? You'll return to LAVENDER TOWN; I'm\l"
	.string "sure there are still things for you to\l"
	.string "do there.$"

Gimnasio_CuevaHypno_Segunda_Pregunta::
lock
msgbox Gimnasio_CuevaHypno_Segunda_Pregunta_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Gimnasio_CuevaHypno_Segunda_Pregunta_No
delay 20
playse SE_FAILURE
waitse
msgbox Gimnasio_CuevaHypno_Segunda_Pregunta_Texto_2 MSGBOX_AUTOCLOSE
playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Mision7Lab4_Combate_Move_1
msgbox Mision7Lab4_Combate_Nidoking_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_148, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
waitse
playse SE_M_REFLECT
delay 30
setmetatile 27, 25, 0x289, FALSE
setmetatile 27, 24, 0x281, FALSE
special DrawWholeMapView
delay 20
release
end

Gimnasio_CuevaHypno_Segunda_Pregunta_Texto_1:
	.string "The real KANTO CHAMPION is here.$"

Gimnasio_CuevaHypno_Segunda_Pregunta_Texto_2:
	.string "Are you talking about me? No, I\n"
	.string "abandoned arbitrary titles that have\l"
	.string "nothing to do with your performance in\l"
	.string "combat, a long time ago. Incorrect\l"
	.string "response.$"

Gimnasio_CuevaHypno_Segunda_Pregunta_No::
delay 20
playse SE_SUCCESS
waitse
msgbox Gimnasio_CuevaHypno_Segunda_Pregunta_No_Texto_1 MSGBOX_AUTOCLOSE
playse SE_M_REFLECT
delay 30
setmetatile 27, 25, 0x289, FALSE
setmetatile 27, 24, 0x281, FALSE
special DrawWholeMapView
waitse
release
end


Gimnasio_CuevaHypno_Segunda_Pregunta_No_Texto_1:
	.string "Correct answer, it's not in the POKÉMON\n"
	.string "LEAGUE either, nor in MT.SILVER. That\l"
	.string "title no longer exists today; it's empty,\l"
	.string "devoid of the meaning it once had.$"

Gimnasio_CuevaHypno_Tercera_Pregunta::
lock
msgbox Gimnasio_CuevaHypno_Tercera_Pregunta_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Gimnasio_CuevaHypno_Tercera_Pregunta_No
delay 20
playse SE_FAILURE
waitse
msgbox Gimnasio_CuevaHypno_Tercera_Pregunta_Texto_2 MSGBOX_AUTOCLOSE
playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Mision7Lab4_Combate_Move_1
msgbox Mision7Lab4_Combate_Nidoking_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_149, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
waitse
playse SE_M_REFLECT
delay 30
setmetatile 19, 17, 0x289, FALSE
setmetatile 19, 16, 0x281, FALSE
special DrawWholeMapView
delay 20
release
end

Gimnasio_CuevaHypno_Tercera_Pregunta_Texto_1:
	.string "The SILPH HEADQUARTERS, along with the\n"
	.string "GOLDENROD RADIO TOWER, rises above any\l"
	.string "other human-built structure in\l"
	.string "KANTO-JOHTO.$"

Gimnasio_CuevaHypno_Tercera_Pregunta_Texto_2:
	.string "Incorrect response, for nearly a\n"
	.string "millennium, that honor has been and\l"
	.string "continues to be held by a much more\l"
	.string "sacred place.$"

Gimnasio_CuevaHypno_Tercera_Pregunta_No::
delay 20
playse SE_SUCCESS
waitse
msgbox Gimnasio_CuevaHypno_Tercera_Pregunta_No_Texto_1 MSGBOX_AUTOCLOSE
playse SE_M_REFLECT
delay 30
setmetatile 19, 17, 0x289, FALSE
setmetatile 19, 16, 0x281, FALSE
special DrawWholeMapView
waitse
release
end

Gimnasio_CuevaHypno_Tercera_Pregunta_No_Texto_1:
	.string "That's right, it's at the top of BELL\n"
	.string "TOWER, where one has JOHTO and KANTO\l"
	.string "at their fingertips. However, the truly\l"
	.string "significant part of this place is tens\l"
	.string "of meters beneath its ground.$"

Gimnasio_CuevaHypno_Cuarta_Pregunta::
lock
msgbox Gimnasio_CuevaHypno_Cuarta_Pregunta_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Gimnasio_CuevaHypno_Cuarta_Pregunta_No
delay 20
playse SE_SUCCESS
waitse
msgbox Gimnasio_CuevaHypno_Cuarta_Pregunta_No_Texto_1 MSGBOX_AUTOCLOSE
playse SE_M_REFLECT
delay 30
setmetatile 21, 9, 0x289, FALSE
setmetatile 21, 8, 0x281, FALSE
special DrawWholeMapView
waitse
release
end

Gimnasio_CuevaHypno_Cuarta_Pregunta_Texto_1:
	.string "BRASS TOWER was destroyed in a fire;\n"
	.string "nevertheless, JOHTO still has three\l"
	.string "other pagodas that preserve the\l"
	.string "essence of the region.$"

Gimnasio_CuevaHypno_Cuarta_Pregunta_Texto_2:
	.string "Incorrect answer…{PAUSE 20} Are you saying that\n"
	.string "there are only 2? One in VIOLET CITY\l"
	.string "and the other in ECRUTEAK CITY? …\l"
	.string "Incorrect answer.$"

Gimnasio_CuevaHypno_Cuarta_Pregunta_No::
delay 20
playse SE_FAILURE
waitse
msgbox Gimnasio_CuevaHypno_Cuarta_Pregunta_Texto_2 MSGBOX_AUTOCLOSE
playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Mision7Lab4_Combate_Move_1
msgbox Mision7Lab4_Combate_Nidoking_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_150, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
waitse
playse SE_M_REFLECT
delay 30
setmetatile 21, 9, 0x289, FALSE
setmetatile 21, 8, 0x281, FALSE
special DrawWholeMapView
delay 20
release
end


Gimnasio_CuevaHypno_Cuarta_Pregunta_No_Texto_1:
	.string "Correct answer. Although I wonder if\n"
	.string "you have truly been aware of the\l"
	.string "implications it holds for what you think\l"
	.string "JOHTO is.$"



Gimnasio_CuevaHypno_Combate_Lider::
lock
faceplayer
compare VAR_DEWFORD_TOWN_STATE, 3
goto_if_gt Gimnasio_CuevaHypno_Combate_Lider_2
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_1 MSGBOX_AUTOCLOSE
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_2 MSGBOX_AUTOCLOSE
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_3 MSGBOX_AUTOCLOSE
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_4 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_118, Gimnasio_CuevaHypno_Combate_Lider_Texto_6
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_7 MSGBOX_AUTOCLOSE
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_8 MSGBOX_AUTOCLOSE
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_9 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_OBTAIN_BADGE
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_9.1 MSGBOX_DEFAULT
waitfanfare
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_9.2 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_FENNEKIN, 15, ITEM_NONE
waitfanfare
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_11.1 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM94
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_11.2 MSGBOX_DEFAULT
waitfanfare
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_11.3 MSGBOX_NPC
setflag FLAG_UNUSED_0x4FA
setvar VAR_DEWFORD_TOWN_STATE, 4
release
end

Gimnasio_CuevaHypno_Combate_Lider_Texto_11.3:
	.string "The slower the POKÉMON is, the earlier\n"
	.string "it will attack under the effects of\l"
	.string "TRICK ROOM. It's a move that can\l"
	.string "disrupt the strategies of many teams,\l"
	.string "with many POKÉMON that can benefit\l"
	.string "from it.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_11.1:
	.string "Do you know? I'll also give you this TM;\n"
	.string "someone like you surely knows how to\l"
	.string "take advantage of it.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_11.2:
	.string "{PLAYER} obtained TM94 TRICK ROOM\n"
	.string "from GYM LEADER MORFEUS!!$"

Gimnasio_CuevaHypno_Combate_Lider_2::
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_12 MSGBOX_AUTOCLOSE
release
end

Gimnasio_CuevaHypno_Combate_Lider_Texto_12:
	.string "And now, where will you go? What is your\n"
	.string "next destination? Regardless, make\l"
	.string "each day count and be worth it.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_11:
	.string "I discovered this POKÉMON thanks to\n"
	.string "one of my best students. Its final\l"
	.string "evolution completely masters mental\l"
	.string "powers.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_10:
	.string "YOU OBTAINED A LV.15 FENNEKIN!!$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_9:
	.string "40 years later, one more time,\n"
	.string "I can say a PKMN TRAINER\l"
	.string "deserves my GYM BADGE.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_9.1:
	.string "Take this, you have\n"
	.string "earned the ONEIRICBADGE.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_9.2:
	.string "I hope you have a great journey. Take\n"
	.string "this POKÉMON with you.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_8:
	.string "For a while now, you've brought back\n"
	.string "memories of those times when I was\l"
	.string "going from aspirant to aspirant. That\l"
	.string "characteristic feeling of competition,\l"
	.string "which over the years manifests in a\l"
	.string "different way…{PAUSE 20} I definitely don't\l"
	.string "regret taking this path.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_7:
	.string "Impressive, my teacher would be proud\n"
	.string "to see what HYPNO and I have become.\l"
	.string "But you, I think she would be\l"
	.string "speechless!$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_6:
	.string "I would say…{PAUSE 20} that our performance has\n"
	.string "been excellent, but…{PAUSE 20} have I still lost?$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_5:
	.string "At this moment, devoid of spectators,\n"
	.string "applause, or cameras to immortalize\l"
	.string "this moment, adhering to the lifestyle\l"
	.string "we've chosen…{PAUSE 30} you'll see the results of\l"
	.string "our training!$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_4:
	.string "As for me…{PAUSE 20} I've spent decades without\n"
	.string "any other reference than this small\l"
	.string "island. But…{PAUSE 20} all that time, both HYPNO\l"
	.string "and I have kept training, with the sole\l"
	.string "goal of surpassing ourselves, our best\l"
	.string "benchmark.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_3:
	.string "In any case, you must be a skilled\n"
	.string "TRAINER.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_2:
	.string "Without HYPNO, I wouldn't have known,\n"
	.string "even though, according to him, that\l"
	.string "title doesn't exist, as you have\l"
	.string "verified in his questions…$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_1:
	.string "So all this time, I've been talking with\n"
	.string "the CHAMPION of KANTO, huh?$"
