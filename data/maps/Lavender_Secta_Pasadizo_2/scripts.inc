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
	.string "Dann {PAUSE 15}…{PAUSE 15} ist dein Wille also ungebrochen\n"
	.string "geblieben.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_2:
	.string "Und er hat dich hierhergeführt.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_3:
	.string "Schau dich um. Du befindest dich genau\n"
	.string "im Herzen der gesamten KANTO-Region.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_4:
	.string "An einem Ort, der so alt ist wie die\n"
	.string "Region selbst. Ein Ort, der zeitlos und\l"
	.string "blind gegenüber allem jenseits seiner\l"
	.string "Grenzen ist.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_5:
	.string "Genau so ist es. Das schlagende Herz\n"
	.string "von KANTO ist weder das SILPH-COMPANY\l"
	.string "noch das INDIGO-PLATEAU.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_6:
	.string "Hier und nur hier wirst du von den\n"
	.string "GÖTTERN dieser Welt gerichtet. Nicht in\l"
	.string "der LIGA und auch nicht als CHAMP.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_7:
	.string "Na los, {PLAYER}. Bringe sie zum\n"
	.string "Erröten! Zeig ihnen, wie du dieselben\l"
	.string "Regeln, die sie selbst einst aufgestellt\l"
	.string "haben, zu deinem Vorteil zurechtbiegst!$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_8:
	.string "Erweise diesem Ort Respekt - in Form\n"
	.string "eines Kampfes, der für alle Zeiten in\l"
	.string "Erinnerung bleiben wird!$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_9:
	.string "Die Essenz{PAUSE 25}…{PAUSE 25} Sie ist zerbrechlich.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_10:
	.string "Nein. Deine Anwesenheit hier ist kein\n"
	.string "Zufall.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_11:
	.string "Du hast die Ketten von SIEGFRIEDs\n"
	.string "KANTO gesprengt und nun liegt dir ein\l"
	.string "Welt voller Möglichkeiten zu Füßen.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_12:
	.string "Nicht einmal in deinen kühnsten Träumen\n"
	.string "hättest du dir ausmalen können, was was\l"
	.string "dich erwartet und was du noch erleben,\l"
	.string "sehen und fühlen wirst.\p"
	.string "KANTO wird jedem einzelnen dieser\n"
	.string "Momente beiwohnen.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_13:
	.string "Aber vergiss nicht {PAUSE 35}…{PAUSE 35} Diese Essenz kann\n"
	.string "korrumpiert werden.$"

