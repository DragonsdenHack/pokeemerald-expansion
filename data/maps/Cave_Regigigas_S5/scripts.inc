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
