Cave_Regigigas_S5_MapScripts::
	.byte 0


Cave_Regigigas_S5_Bloqueo::
compare VAR_UNUSED_0x40F8, 19
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S5_Bloqueo_Move_1
waitmovement 0x0
msgbox Cave_Regigigas_S5_Bloqueo_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S5_Bloqueo_Move_2
waitmovement 0x0
release
end

Cave_Regigigas_S5_Bloqueo_Texto_1:
	.string "Debería ir junto con ANDRA, en esta\n"
	.string "zona no podemos avanzar.$"

Cave_Regigigas_S5_Bloqueo_Move_2:
walk_slow_up
step_end

Cave_Regigigas_S5_Bloqueo_Move_1:
walk_in_place_down
step_end

Cave_Regigigas_S5_Andra::
lock
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S5_Andra_Move_1
waitmovement 0x0
msgbox Cave_Regigigas_S5_Andra_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S5_Andra_Move_2
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Cave_Regigigas_S5_Andra_Move_3
waitmovement 0x0
special RemoveCameraObject
msgbox Cave_Regigigas_S5_Andra_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S5_Andra_Texto_3 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Cave_Regigigas_S5_Andra_Move_3.1
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S5_Andra_Move_4
applymovement 4, Cave_Regigigas_S5_Andra_Move_4
waitmovement 0x0
msgbox Cave_Regigigas_S5_Andra_Texto_4 MSGBOX_AUTOCLOSE
applymovement 4, Cave_Regigigas_S5_Andra_Move_5
waitmovement 0x0
msgbox Cave_Regigigas_S5_Andra_Texto_5 MSGBOX_AUTOCLOSE
applymovement 4, Cave_Regigigas_S5_Andra_Move_6
waitmovement 0x0
delay 15
setflag FLAG_HOENN_65
removeobject 4
setvar VAR_UNUSED_0x40F8, 19
release
end

Cave_Regigigas_S5_Andra_Move_6:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Cave_Regigigas_S5_Andra_Move_5:
walk_in_place_right
step_end

Cave_Regigigas_S5_Andra_Move_4:
face_right
step_end

Cave_Regigigas_S5_Andra_Move_3.1:
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
step_end


Cave_Regigigas_S5_Andra_Move_3:
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
step_end

Cave_Regigigas_S5_Andra_Move_2:
walk_down
walk_down
step_end

Cave_Regigigas_S5_Andra_Move_1:
walk_in_place_down
step_end

Cave_Regigigas_S5_Andra_Texto_1:
	.string "Observa, {PLAYER}.$"

Cave_Regigigas_S5_Andra_Texto_2:
	.string "Parece claro que si queremos\n"
	.string "avanzar, debe ser por ahí.$"

Cave_Regigigas_S5_Andra_Texto_3:
	.string "Esto ya lo he visto antes… las cuevas\n"
	.string "de los regis cuentan con cosas así.$"

Cave_Regigigas_S5_Andra_Texto_4:
	.string "Deberemos tomar otro camino, es posible\n"
	.string "que por ahí obtengamos respuesta.$"

Cave_Regigigas_S5_Andra_Texto_5:
	.string "Veámos que encontramos por allí.$"

Cave_Regigigas_S5_Andra_Despues_Izq::
lock
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S5_Andra_Despues_Move_1
waitmovement 0x0
goto Cave_Regigigas_S5_Andra_Despues

Cave_Regigigas_S5_Andra_Despues_Centro::
lock
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S5_Andra_Despues_Move_2
waitmovement 0x0
goto Cave_Regigigas_S5_Andra_Despues

Cave_Regigigas_S5_Andra_Despues_Derecha::
lock
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S5_Andra_Despues_Move_3
waitmovement 0x0
goto Cave_Regigigas_S5_Andra_Despues

Cave_Regigigas_S5_Andra_Despues_Move_3:
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
face_down
step_end

Cave_Regigigas_S5_Andra_Despues_Move_2:
walk_down
walk_down
walk_right
walk_right
face_down
step_end

Cave_Regigigas_S5_Andra_Despues_Move_1:
walk_down
walk_down
walk_right
walk_right
walk_right
face_down
step_end

Cave_Regigigas_S5_Andra_Despues_Move_4:
delay_16
face_up
delay_16
delay_8
face_right
delay_16
delay_8
walk_in_place_right
step_end

Cave_Regigigas_S5_Andra_Despues_Move_5:
emote_exclamation_mark
step_end

Cave_Regigigas_S5_Andra_Despues_Move_6:
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
face_up
step_end

Cave_Regigigas_S5_Andra_Despues_Move_7:
delay_16
delay_16
delay_8
walk_down
walk_right
walk_right
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Cave_Regigigas_S5_Andra_Despues_Move_8:
face_down
delay_16
delay_16
walk_slow_down
step_end

Cave_Regigigas_S5_Andra_Despues_Move_9:
face_up
step_end

Cave_Regigigas_S5_Andra_Despues_Move_10:
walk_up
face_left
step_end

Cave_Regigigas_S5_Andra_Despues::
lock
msgbox Cave_Regigigas_S5_Andra_Despues_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S5_Andra_Despues_Texto_2 MSGBOX_AUTOCLOSE
applymovement 4, Cave_Regigigas_S5_Andra_Despues_Move_4
waitmovement 0x0
msgbox Cave_Regigigas_S5_Andra_Despues_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S5_Andra_Despues_Texto_4 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 4, Cave_Regigigas_S5_Andra_Despues_Move_5
waitmovement 0x0
delay 10
msgbox Cave_Regigigas_S5_Andra_Despues_Texto_5 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S5_Andra_Despues_Move_7
applymovement 4, Cave_Regigigas_S5_Andra_Despues_Move_6
waitmovement 0x0
delay 35
applymovement 4, Cave_Regigigas_S5_Andra_Despues_Move_8
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S5_Andra_Despues_Move_5
waitmovement 0x0
delay 10
msgbox Cave_Regigigas_S5_Andra_Despues_Texto_6 MSGBOX_AUTOCLOSE
applymovement 4, Cave_Regigigas_S5_Andra_Despues_Move_9
waitmovement 0x0
msgbox Cave_Regigigas_S5_Andra_Despues_Texto_7 MSGBOX_AUTOCLOSE
applymovement 4, Cave_Regigigas_S5_Andra_Despues_Move_10
waitmovement 0x0
msgbox Cave_Regigigas_S5_Andra_Despues_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox Cave_Regigigas_S5_Andra_Despues_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, Cave_Regigigas_S5_Andra_Despues_Move_9
waitmovement 0x0
msgbox Cave_Regigigas_S5_Andra_Despues_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, Cave_Regigigas_S5_Andra_Despues_Move_11
waitmovement 0x0
delay 15
applymovement 4, Cave_Regigigas_S5_Andra_Despues_Move_12
waitmovement 0x0
applymovement 4, Cave_Regigigas_S5_Andra_Despues_Move_9.1
waitmovement 0x0
delay 15
msgbox Cave_Regigigas_S5_Andra_Despues_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S5_Andra_Despues_Move_12
applymovement 4, Cave_Regigigas_S5_Andra_Despues_Move_9
waitmovement 0x0
msgbox Cave_Regigigas_S5_Andra_Despues_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S5_Andra_Despues_Texto_13 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S5_Andra_Despues_Move_5
waitmovement 0x0
delay 10
applymovement 4, Cave_Regigigas_S5_Andra_Despues_Move_13
waitmovement 0x0
msgbox Cave_Regigigas_S5_Andra_Despues_Texto_14 MSGBOX_AUTOCLOSE
applymovement 4, Cave_Regigigas_S5_Andra_Despues_Move_14
waitmovement 0x0
msgbox Cave_Regigigas_S5_Andra_Despues_Texto_15 MSGBOX_AUTOCLOSE
applymovement 4, Cave_Regigigas_S5_Andra_Despues_Move_15
waitmovement 0x0
setflag FLAG_HOENN_65
removeobject 4
setvar VAR_UNUSED_0x40F8, 21
release
end

Cave_Regigigas_S5_Andra_Despues_Move_9.1:
walk_down
walk_down
step_end

Cave_Regigigas_S5_Andra_Despues_Move_15:
walk_right
walk_right
walk_down
walk_right
walk_down
walk_down
walk_right
walk_down
walk_down
walk_left
walk_left
walk_down
walk_down
walk_down
step_end


Cave_Regigigas_S5_Andra_Despues_Move_14:
walk_in_place_down
step_end

Cave_Regigigas_S5_Andra_Despues_Move_13:
face_left
step_end

Cave_Regigigas_S5_Andra_Despues_Move_12:
face_down
step_end

Cave_Regigigas_S5_Andra_Despues_Move_11:
walk_in_place_up
step_end

Cave_Regigigas_S5_Andra_Despues_Texto_1:
	.string "Lo que guardaban ESMERALDA y ZAFIRO\n"
	.string "eran coordenadas.$"

Cave_Regigigas_S5_Andra_Despues_Texto_2:
	.string "Si estoy en lo cierto, el lago es una\n"
	.string "tapadera, y podemos caminar por ciertas\l"
	.string "zonas.$"

Cave_Regigigas_S5_Andra_Despues_Texto_3:
	.string "La cuestión es… ¿dónde está\n"
	.string "el punto de inicio?$"

Cave_Regigigas_S5_Andra_Despues_Texto_4:
	.string "… …$"

Cave_Regigigas_S5_Andra_Despues_Texto_5:
	.string "Debe ser ese.$"

Cave_Regigigas_S5_Andra_Despues_Texto_6:
	.string "Lo es.$"

Cave_Regigigas_S5_Andra_Despues_Texto_7:
	.string "Escucha atentamente, {PLAYER}.$"

Cave_Regigigas_S5_Andra_Despues_Texto_8:
	.string "Las coordenadas que había grabadas en\n"
	.string "esas ruinas eran:$"

Cave_Regigigas_S5_Andra_Despues_Texto_9:
	.string "2 {DOWN_ARROW}, 2 {RIGHT_ARROW}, 1 {DOWN_ARROW}, 1 {RIGHT_ARROW}, 2 {DOWN_ARROW}, 1 {RIGHT_ARROW}, 2 {DOWN_ARROW}, 2 {LEFT_ARROW}, 3 {DOWN_ARROW}, 1\n"
	.string "{LEFT_ARROW}, 1 {DOWN_ARROW}, 1 {LEFT_ARROW}, 2 {DOWN_ARROW}, 2 {LEFT_ARROW}, 1 {DOWN_ARROW}, 1 {LEFT_ARROW}, 1 {DOWN_ARROW}, 3 {LEFT_ARROW}, 1 {DOWN_ARROW},\l"
	.string "1 {LEFT_ARROW}, 7 {DOWN_ARROW}, 2 {RIGHT_ARROW}, 1 {DOWN_ARROW}, 1 {RIGHT_ARROW}, 1 {DOWN_ARROW}, 2 {RIGHT_ARROW}, 2 {UP_ARROW}.$"

Cave_Regigigas_S5_Andra_Despues_Texto_10:
	.string "Las dejaré aquí grabadas.$"

Cave_Regigigas_S5_Andra_Despues_Texto_11:
	.string "… …$"

Cave_Regigigas_S5_Andra_Despues_Texto_12:
	.string "Este lugar es inmenso. Parece que fue\n"
	.string "una eternidad, pero no hace tanto\l"
	.string "estuvimos en una situación similar.$"

Cave_Regigigas_S5_Andra_Despues_Texto_13:
	.string "En RUINAS ALFA, ¿recuerdas?$"

Cave_Regigigas_S5_Andra_Despues_Texto_14:
	.string "Por aquel entonces, fuiste tú el único\n"
	.string "que pudo superar todas las pruebas.$"

Cave_Regigigas_S5_Andra_Despues_Texto_15:
	.string "Pero ahora… estoy más que preparada\n"
	.string "para llegar contigo hasta el final.$"

Cave_Regigigas_S5_Cartel::
lock
msgbox Cave_Regigigas_S5_Andra_Despues_Texto_9 MSGBOX_SIGN
release
end
