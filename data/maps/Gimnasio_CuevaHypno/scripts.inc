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
	.string "And it's because... this once was an\n"
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
	.string "and... dangerous for ordinary people. As\l"
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
	.string "also... you'll comprehend what the\l"
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
	.string "already seen, because... What could limit\l"
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
	.string "GASTLY, HAUNTER, and GENGAR the only\n"
	.string "GHOST POKÉMON in LAVENDER TOWN.$"

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
.string "Respuesta correcta, pero… a ciegas,\n"
	.string "¿verdad? No conoces ningún fantasma\l"
	.string "en KANTO más allá de esos 3, y a pesar\l"
	.string "de ello sientes que hay algo más…\l"
	.string "oculto , ¿no? Volverás a PUEBLO\l"
	.string "LAVANDA, aún te quedan cosas por hacer\l"
	.string "allí, de eso estoy seguro.$"

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
.string "El verdadero CAMPEÓN de KANTO está en\n"
	.string "esta sala.$"

Gimnasio_CuevaHypno_Segunda_Pregunta_Texto_2:
.string "¿Te refieres a mí? No, hace tiempo que\n"
	.string "renuncié a títulos arbitrarios que\l"
	.string "nada tienen que ver con tu desempeño\l"
	.string "en el combate. Respuesta incorrecta.$"

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
.string "Respuesta correcta, tampoco está en la\n"
	.string "LIGA POKÉMON, ni en el MT.PLATEADO. Ese\l"
	.string "título ya no existe hoy en día, está\l"
	.string "vacío, carente del significado que\l"
	.string "otrora tuvo.$"

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
.string "La SEDE SILPH, junto con la TORRE RADIO\n"
	.string "TRIGAL, se elevan por encima de\l"
	.string "ninguna otra construcción humana en\l"
	.string "KANTO-JOHTO$"

Gimnasio_CuevaHypno_Tercera_Pregunta_Texto_2:
	.string "Respuesta incorrecta, hace casi un\n"
	.string "milenio que ese honor lo ostenta y\l"
	.string "sigue ostentando un lugar mucho más\l"
	.string "sagrado.$"

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
.string "Así es, es en la cima de TORRE CAMPANA,\n"
	.string "dónde uno tiene a JOHTO y KANTO bajo la\l"
	.string "palma de su mano. No obstante, lo\l"
	.string "verdaderamente importante de este\l"
	.string "lugar se encuentra a decenas de metros\l"
	.string "bajo su suelo.$"

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
.string "TORRE LATÓN fue destruida en un\n"
	.string "incendio, aún así, JOHTO aún cuenta\l"
	.string "con otras 3 pagodas que mantienen viva\l"
	.string "la esencia de la región.$"

Gimnasio_CuevaHypno_Cuarta_Pregunta_Texto_2:
	.string "Respuesta incorrecta … ¿Dices que solo\n"
	.string "hay 2? ¿El de MALVA y el de IRIS? …\l"
	.string "Respuesta incorrecta.$"

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
.string "Respuesta correcta. Aunque me\n"
	.string "pregunto si de verdad has sido\l"
	.string "consciente de las implicaciones que\l"
	.string "tiene para lo que crees que es JOHTO.$"



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
setvar VAR_DEWFORD_TOWN_STATE, 4
release
end

Gimnasio_CuevaHypno_Combate_Lider_Texto_11.3:
.string "Cuanto más lento sea el POKÉMON,\n"
	.string "antes atacará bajo los efectos del\l"
	.string "ESPACIO RARO.\l"
	.string "Es un movimiento que puede romper los\l"
	.string "esquemas de muchos equipos, con\l"
	.string "muchos POKÉMON que pueden\l"
	.string "beneficiarse de ello.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_11.1:
.string "¿Sabes?\n"
	.string "También te daré esta MT, alguien como\l"
	.string "tú seguro que sabe sacarle provecho.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_11.2:
.string "¡¡{PLAYER} obtuvo la MT94 ESPACIO\n"
	.string "RARO de manos de MORFEO!!$"

Gimnasio_CuevaHypno_Combate_Lider_2::
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_12 MSGBOX_AUTOCLOSE
release
end

Gimnasio_CuevaHypno_Combate_Lider_Texto_12:
.string "Y ahora, ¿dónde irás?\n"
	.string "¿Cúal es tu próximo destino?\l"
	.string "Sea como sea, haz que cada día cuente\l"
	.string "y merezca la pena.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_11:
.string "Descubrí este POKÉMON gracias a uno\n"
	.string "de mis mejores alumnos.\l"
	.string "Su evolución final domina por\l"
	.string "completo los poderes mentales.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_10:
.string "¡¡OBTUVISTE UN FENNEKIN AL NV:15!!$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_9:
.string "Te deseo mucha suerte en tu viaje.\n"
	.string "Quiero que lleves a este POKÉMON\l"
	.string "contigo.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_8:
.string "Por este rato me has hecho recordar\n"
	.string "esos tiempos, en los que iba de\l"
	.string "aspirante en aspirante.\l"
	.string "Esa sensación tan característica de\l"
	.string "la competición, que con los años se\l"
	.string "manifiesta de forma diferente... sin\l"
	.string "duda no me arrepiento de haber tomado\l"
	.string "este camino.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_7:
.string "Impresionante, mi maestra estaría\n"
	.string "orgullosa de ver en lo que HYPNO y yo\l"
	.string "nos hemos convertido, ahora al\l"
	.string "combatir de nuevo lo sé.\l"
	.string "Pero tú, ¡creo que se quedaría sin\l"
	.string "palabras!$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_6:
.string "Diría... que nuestro nivel ha sido\n"
	.string "excelente pero... ¿aún así he\l"
	.string "perdido?$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_5:
.string "Ahora, sin espectadores, sin aplausos\n"
	.string "ni cámaras que inmortalicen este\l"
	.string "momento, fieles al modo de vida que\l"
	.string "hemos escogido... ¡verás los\l"
	.string "resultados de ese entrenamiento!$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_4:
.string "En cuanto a mí... llevo décadas sin\n"
	.string "tener referencia alguna que no sea\l"
	.string "esta pequeña isla.\l"
	.string "Pero... todo ese tiempo, tanto HYPNO\l"
	.string "como yo nos hemos mantenido\l"
	.string "entrenando, con el único objetivo de\l"
	.string "superarnos a nosotros mismos, nuestra\l"
	.string "mejor referencia.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_3:
.string "Sea como sea, debes ser un ENTRENADOR\n"
	.string "muy ducho en combate.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_2:
.string "Si no llega a ser por HYPNO, jamás lo\n"
	.string "hubiera sabido, aunque según él, ese\l"
	.string "título no existe como has podido\l"
	.string "comprobar en sus preguntas...$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_1:
.string "Así que todo este tiempo he estado\n"
	.string "hablando con el CAMPEÓN de KANTO,\l"
	.string "¿eh?$"
