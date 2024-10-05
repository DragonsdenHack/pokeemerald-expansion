Verdantur_Museo_S1_MapScripts::
	.byte 0

Verdantur_Museo_S1_move_1:
delay_16
face_up
delay_16
step_end

Verdantur_Museo_S1_move_2:
emote_exclamation_mark
step_end

Verdantur_Museo_S1_move_3:
walk_slow_left
walk_slow_left
face_up
step_end

Verdantur_Museo_S1_move_4:
face_right
step_end

Verdantur_Museo_S1_move_5:
walk_left
walk_left
walk_down
walk_left
walk_left
walk_left
walk_left
step_end

Verdantur_Museo_S1_move_6:
walk_slow_left
step_end

Verdantur_Museo_S1_move_7:
walk_in_place_left
step_end

Verdantur_Museo_S1_move_8:
walk_up
face_down
step_end

Verdantur_Museo_S1_move_9:
walk_left
walk_left
walk_left
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
step_end


Verdantur_Museo_S1_Fortunia::
lock
applymovement OBJ_EVENT_ID_PLAYER, Verdantur_Museo_S1_move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Verdantur_Museo_S1_move_2
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Verdantur_Museo_S1_move_3
waitmovement 0x0
delay 25
msgbox Verdantur_Museo_S1_Fortunia_Texto_1 MSGBOX_AUTOCLOSE
delay 15
clearflag FLAG_HOENN_687
addobject 6
addobject 5
applymovement OBJ_EVENT_ID_PLAYER, Verdantur_Museo_S1_move_4
applymovement 6, Verdantur_Museo_S1_move_5
waitmovement 0x0
msgbox Verdantur_Museo_S1_Fortunia_Texto_2 MSGBOX_AUTOCLOSE
applymovement 6, Verdantur_Museo_S1_move_6
waitmovement 0x0
msgbox Verdantur_Museo_S1_Fortunia_Texto_3 MSGBOX_AUTOCLOSE
applymovement 6, Verdantur_Museo_S1_move_7
waitmovement 0x0
msgbox Verdantur_Museo_S1_Fortunia_Texto_4 MSGBOX_AUTOCLOSE
delay 25
msgbox Verdantur_Museo_S1_Fortunia_Texto_5 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Verdantur_Museo_S1_move_2
waitmovement 0x0
applymovement 6, Verdantur_Museo_S1_move_8
applymovement 5, Verdantur_Museo_S1_move_9
waitmovement 0x0
applymovement 5, Verdantur_Museo_S1_move_10
waitmovement 0x0
msgbox Verdantur_Museo_S1_Fortunia_Texto_6 MSGBOX_AUTOCLOSE
applymovement 5, Verdantur_Museo_S1_move_7
waitmovement 0x0
msgbox Verdantur_Museo_S1_Fortunia_Texto_7 MSGBOX_AUTOCLOSE
applymovement 5, Verdantur_Museo_S1_move_11
waitmovement 0x0
msgbox Verdantur_Museo_S1_Fortunia_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_663, Verdantur_Museo_S1_Fortunia_Texto_9
playse SE_PIN
applymovement 6, Verdantur_Museo_S1_move_2
waitmovement 0x0
msgbox Verdantur_Museo_S1_Fortunia_Texto_10 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 6, Verdantur_Museo_S1_move_12
waitmovement 0x0
msgbox Verdantur_Museo_S1_Fortunia_Texto_11 MSGBOX_AUTOCLOSE
applymovement 5, Verdantur_Museo_S1_move_13
waitmovement 0x0
msgbox Verdantur_Museo_S1_Fortunia_Texto_12 MSGBOX_AUTOCLOSE
applymovement 5, Verdantur_Museo_S1_move_14
waitmovement 0x0
msgbox Verdantur_Museo_S1_Fortunia_Texto_13 MSGBOX_AUTOCLOSE
applymovement 5, Verdantur_Museo_S1_move_15
waitmovement 0x0
msgbox Verdantur_Museo_S1_Fortunia_Texto_14 MSGBOX_AUTOCLOSE
applymovement 5, Verdantur_Museo_S1_move_16
applymovement 6, Verdantur_Museo_S1_move_17
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Verdantur_Museo_S1_move_18
waitmovement 0x0
delay 15
setflag FLAG_HOENN_687
removeobject 6
removeobject 5
special DrawWholeMapView
setmetatile 1, 9, 0x2F5, TRUE
setmetatile 2, 9, 0x2F5, TRUE
special DrawWholeMapView
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox Verdantur_Museo_S1_Fortunia_Texto_15 MSGBOX_DEFAULT
waitfanfare
setvar VAR_ROUTE117_STATE, 7
release
end

Verdantur_Museo_S1_move_18:
walk_slow_up
walk_slow_up
delay_16
delay_8
walk_in_place_up
step_end

Verdantur_Museo_S1_move_17:
delay_16
delay_16
walk_down
delay_16
face_left
delay_16
delay_16
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Verdantur_Museo_S1_move_16:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Verdantur_Museo_S1_move_15:
walk_slow_right
step_end

Verdantur_Museo_S1_move_14:
face_left
step_end

Verdantur_Museo_S1_move_13:
face_up
step_end

Verdantur_Museo_S1_move_12:
walk_in_place_down
step_end

Verdantur_Museo_S1_move_11:
walk_left
step_end

Verdantur_Museo_S1_move_10:
delay_16
face_up
delay_16
step_end

Verdantur_Museo_S1_Fortunia_Texto_1:
	.string "Ya has hecho bastante ruido.$"

Verdantur_Museo_S1_Fortunia_Texto_2:
	.string "¿Crees que puedes entrar aquí y hacer\n"
	.string "lo que te plazca? Te adelanto que las\l"
	.string "cosas no funcionan así en esta región.$"

Verdantur_Museo_S1_Fortunia_Texto_3:
	.string "He pisoteado muchas flores y soportado\n"
	.string "muchas tormentas para llegar hasta\l"
	.string "aquí…$"

Verdantur_Museo_S1_Fortunia_Texto_4:
	.string "No tengo la menor intención de dejar\n"
	.string "que mi suerte cambie ahora.$"

Verdantur_Museo_S1_Fortunia_Texto_5:
	.string "????: Suerte{PAUSE 35}…{PAUSE 35} algo que muchos ilusos\n"
	.string "no acaban de comprender.$"

Verdantur_Museo_S1_Fortunia_Texto_6:
	.string "FORTUNIA: La verdad es que...cada\n"
	.string "uno busca su propia fortuna.$"

Verdantur_Museo_S1_Fortunia_Texto_7:
	.string "Yo creo en la mía propia.\n"
	.string "Dime, chico, ¿crees tú en la tuya?$"

Verdantur_Museo_S1_Fortunia_Texto_8:
	.string "¡Porque parece habérsete agotado!$"

Verdantur_Museo_S1_Fortunia_Texto_9:
	.string "Mmm…$"

Verdantur_Museo_S1_Fortunia_Texto_10:
	.string "¡No puede ser! FORTUNIA será una de las\n"
	.string "futuras ASES del FRENTE, ¡su nivel es\l"
	.string "igual o mayor al del CAMPEÓN de HOENN!$"

Verdantur_Museo_S1_Fortunia_Texto_11:
	.string "¡Tú no pued…!$"

Verdantur_Museo_S1_Fortunia_Texto_12:
	.string "FORTUNIA: Ya basta, hay que saber\n"
	.string "reconocer cuando lo que queda no\l"
	.string "merece la pena.$"

Verdantur_Museo_S1_Fortunia_Texto_13:
	.string "Has ganado, pero lo que hoy crees que\n"
	.string "es suerte puede mañana tornarse en\l"
	.string "desgracia.$"

Verdantur_Museo_S1_Fortunia_Texto_14:
	.string "Ten esto presente{PAUSE 25}…{PAUSE 25} no te olvidaré…$"

Verdantur_Museo_S1_Fortunia_Texto_15:
	.string "¡{PLAYER} recuperó la pintura del\n"
	.string "MUSEO PORTUAL!$"

