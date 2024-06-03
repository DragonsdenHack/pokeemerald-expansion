Mosdeep_Jirachi_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Mosdeep_Jirachi_OnFrame
	.byte 0

Mosdeep_Jirachi_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 247, MossdeepCity_Jirachi
	.2byte 0

MossdeepCity_Jirachi_Move_2:
walk_up
step_end

MossdeepCity_Jirachi_Move_3:
walk_in_place_up
step_end

MossdeepCity_Jirachi_Move_4:
walk_down
step_end

MossdeepCity_Jirachi_Move_5:
face_down
step_end

MossdeepCity_Jirachi_Move_6:
walk_down
walk_down
walk_down
step_end

MossdeepCity_Jirachi_Move_7:
face_up
step_end

MossdeepCity_Jirachi::
lock
delay 30
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MossdeepCity_Jirachi_Move_1
waitmovement 0x0
special RemoveCameraObject
delay 30
msgbox MossdeepCity_Jirachi_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox MossdeepCity_Jirachi_Texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, MossdeepCity_Jirachi_Move_2
waitmovement 0x0
msgbox MossdeepCity_Jirachi_Texto_2.1 MSGBOX_AUTOCLOSE
delay 15
msgbox MossdeepCity_Jirachi_Texto_3 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, MossdeepCity_Jirachi_Move_2
waitmovement 0x0
msgbox MossdeepCity_Jirachi_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, MossdeepCity_Jirachi_Move_3
waitmovement 0x0
msgbox MossdeepCity_Jirachi_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox MossdeepCity_Jirachi_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox MossdeepCity_Jirachi_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox MossdeepCity_Jirachi_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox MossdeepCity_Jirachi_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox MossdeepCity_Jirachi_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox MossdeepCity_Jirachi_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox MossdeepCity_Jirachi_Texto_12 MSGBOX_AUTOCLOSE
applymovement 2, MossdeepCity_Jirachi_Move_4
waitmovement 0x0
msgbox MossdeepCity_Jirachi_Texto_13 MSGBOX_AUTOCLOSE
applymovement 1, MossdeepCity_Jirachi_Move_5
waitmovement 0x0
delay 15
msgbox MossdeepCity_Jirachi_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, MossdeepCity_Jirachi_Move_6
waitmovement 0x0
applymovement 2, MossdeepCity_Jirachi_Move_4
waitmovement 0x0
msgbox MossdeepCity_Jirachi_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox MossdeepCity_Jirachi_Texto_16 MSGBOX_AUTOCLOSE
delay 15
msgbox MossdeepCity_Jirachi_Texto_17 MSGBOX_AUTOCLOSE
delay 35
msgbox MossdeepCity_Jirachi_Texto_18 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, MossdeepCity_Jirachi_Move_7
waitmovement 0x0
msgbox MossdeepCity_Jirachi_Texto_19 MSGBOX_AUTOCLOSE
delay 15
msgbox MossdeepCity_Jirachi_Texto_20 MSGBOX_AUTOCLOSE
delay 15
msgbox MossdeepCity_Jirachi_Texto_21 MSGBOX_AUTOCLOSE
applymovement 1, MossdeepCity_Jirachi_Move_8
waitmovement 0x0
msgbox MossdeepCity_Jirachi_Texto_22 MSGBOX_AUTOCLOSE
delay 35
msgbox MossdeepCity_Jirachi_Texto_23 MSGBOX_AUTOCLOSE
delay 35
msgbox MossdeepCity_Jirachi_Texto_24 MSGBOX_AUTOCLOSE
applymovement 1, MossdeepCity_Jirachi_Move_7
waitmovement 0x0
msgbox MossdeepCity_Jirachi_Texto_25 MSGBOX_AUTOCLOSE
applymovement 1, MossdeepCity_Jirachi_Move_2
waitmovement 0x0
msgbox MossdeepCity_Jirachi_Texto_26 MSGBOX_AUTOCLOSE
delay 15
msgbox MossdeepCity_Jirachi_Texto_27 MSGBOX_AUTOCLOSE
delay 15
msgbox MossdeepCity_Jirachi_Texto_28 MSGBOX_AUTOCLOSE
delay 15
msgbox MossdeepCity_Jirachi_Texto_29 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, MossdeepCity_Jirachi_Move_2
waitmovement 0x0
delay 15
msgbox MossdeepCity_Jirachi_Texto_30 MSGBOX_AUTOCLOSE
playse SE_M_DETECT
dofieldeffectsparkle 57, 21, 0
waitfieldeffect FLDEFF_SPARKLE
waitse
playse SE_PIN
applymovement 1, MossdeepCity_Jirachi_Move_9
waitmovement 0x0
msgbox MossdeepCity_Jirachi_Texto_31 MSGBOX_AUTOCLOSE
applymovement 1, MossdeepCity_Jirachi_Move_10
playse SE_ORB
special DoOrbEffect
delay 150
waitstate
delay 60
special FadeOutOrbEffect
warpsilent MAP_ARRECIPOLIS_ANTIGUA, 45, 5
delay 150
release
end

MossdeepCity_Jirachi_Move_10:
face_left
delay_8
face_right
delay_8
face_down
delay_8
face_up
delay_8
face_left
delay_8
face_right
delay_8
face_down
delay_8
face_up
delay_8
face_left
delay_8
face_right
delay_8
face_down
delay_8
face_up
delay_8
walk_in_place_fast_left
walk_in_place_fast_left
walk_in_place_fast_left
walk_in_place_fast_left
walk_in_place_fast_left
walk_in_place_fast_left
walk_in_place_fast_left
walk_in_place_fast_left
walk_in_place_fast_left
walk_in_place_fast_left
walk_in_place_fast_left
walk_in_place_fast_left
walk_in_place_fast_left
walk_in_place_fast_left
walk_in_place_fast_left
walk_in_place_fast_left
walk_in_place_fast_left
walk_in_place_fast_left
step_end

MossdeepCity_Jirachi_Move_9:
emote_exclamation_mark
step_end

MossdeepCity_Jirachi_Move_8:
face_left
step_end

MossdeepCity_Jirachi_Move_1:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
step_end

MossdeepCity_Jirachi_Texto_1:
	.string "????: Llevaba tiempo buscándote.$"

MossdeepCity_Jirachi_Texto_2:
	.string "ANDRA: JIRACHI…$"

MossdeepCity_Jirachi_Texto_2.1:
	.string "¡¿Dónde estoy? ¿Qué has hecho?!$"

MossdeepCity_Jirachi_Texto_3:
	.string "JIRACHI: Te he teletransportado a mi\n"
	.string "lugar de descanso.$"

MossdeepCity_Jirachi_Texto_4:
	.string "ANDRA: No juegues conmigo, te lo\n"
	.string "advierto. He derrotado a POKÉMON\l"
	.string "LEGENDARIOS mucho más fuertes que tú.$"

MossdeepCity_Jirachi_Texto_5:
	.string "Dime, ¿qué es lo que quieres?$"

MossdeepCity_Jirachi_Texto_6:
	.string "JIRACHI: La gente suele referirse a mí\n"
	.string "como el 'POKÉMON DESEO'.$"

MossdeepCity_Jirachi_Texto_7:
	.string "Pero no saben que también puedo ver a\n"
	.string "través de la voluntad, las inquietudes y\l"
	.string "las razones vitales de una persona.$"

MossdeepCity_Jirachi_Texto_8:
	.string "Acumular energía en algo, aún\n"
	.string "pareciendo una causa pérdida, nunca es\l"
	.string "inofensivo ni fútil.$"

MossdeepCity_Jirachi_Texto_9:
	.string "Siempre tiene su impacto. Eso está\n"
	.string "regando algo, manteniendo con vida una\l"
	.string "posibilidad.$"

MossdeepCity_Jirachi_Texto_10:
	.string "Tu fé plena en que, pase lo que pase,\n"
	.string "siempre podrás alcanzar cotas mayores\l"
	.string "no ha pasado inadvertida.$"

MossdeepCity_Jirachi_Texto_11:
	.string "Llevaba siglos y siglos sin sentir una\n"
	.string "energía así.$"

MossdeepCity_Jirachi_Texto_12:
	.string "En tus palabras y decisiones hay\n"
	.string "asertos que parecen repugnar a la\l"
	.string "razón… pero a la del resto, no a la de\l"
	.string "una verdadera ENTRENADORA.$"

MossdeepCity_Jirachi_Texto_13:
	.string "Por eso te he traído aquí: más que a\n"
	.string "nadie, quiero concederte un deseo.$"

MossdeepCity_Jirachi_Texto_14:
	.string "ANDRA: No quiero tu deseo. Lo haré a mi\n"
	.string "manera.$"

MossdeepCity_Jirachi_Texto_15:
	.string "JIRACHI: ¡Oh! ¿No lo ves, ANDRA?$"

MossdeepCity_Jirachi_Texto_16:
	.string "¡Esa es precisamente la razón por la que\n"
	.string "quiero concedértelo!$"

MossdeepCity_Jirachi_Texto_17:
	.string "ANDRA: Hace tiempo juré que jamás\n"
	.string "aceptaría regalos divinos. Lo que tenga\l"
	.string "que lograr, lo haré por mis propios\l"
	.string "medios.$"

MossdeepCity_Jirachi_Texto_18:
	.string "JIRACHI: Es un regalo divino… que te\n"
	.string "has ganado por tus propios medios.$"

MossdeepCity_Jirachi_Texto_19:
	.string "ANDRA: ¿Qué quieres decir?$"

MossdeepCity_Jirachi_Texto_20:
	.string "JIRACHI: Que esta situación es solo\n"
	.string "debida a ti, es consecuencia de tus\l"
	.string "acciones y solo gracias a tus acciones.$"

MossdeepCity_Jirachi_Texto_21:
	.string "El deseo que pidas seguirá siendo eso.\n"
	.string "Puedes pedir lo que quieras y esa\l"
	.string "elección dependerá de ti.$"

MossdeepCity_Jirachi_Texto_22:
	.string "ANDRA: Lo que quiera…$"

MossdeepCity_Jirachi_Texto_23:
	.string "… …$"

MossdeepCity_Jirachi_Texto_24:
	.string "Muy bien, solo quiero una cosa.$"

MossdeepCity_Jirachi_Texto_25:
	.string "Hazme volver al pasado, a la antigua\n"
	.string "ARRECÍPOLIS. Cuando KYOGRE\l"
	.string "PRIMIGENIO fue derrotado por un NO\l"
	.string "LEGENDARIO.$"

MossdeepCity_Jirachi_Texto_26:
	.string "Quiero verlo con mis propios ojos,\n"
	.string "aprender de lo que ahí ocurrió y\l"
	.string "conocer a ese ENTRENADOR.$"

MossdeepCity_Jirachi_Texto_27:
	.string "¿Podrás hacer eso y después devolverme\n"
	.string "a este momento?$"

MossdeepCity_Jirachi_Texto_28:
	.string "JIRACHI: Si es lo que deseas, podré\n"
	.string "hacerlo.$"

MossdeepCity_Jirachi_Texto_29:
	.string "Acércate.$"

MossdeepCity_Jirachi_Texto_30:
	.string "¿Sabes, ANDRA? No todos esperan lo\n"
	.string "mismo de los grandes eventos.$"

MossdeepCity_Jirachi_Texto_31:
	.string "ANDRA: ¡¿Q… qu…?!$"
