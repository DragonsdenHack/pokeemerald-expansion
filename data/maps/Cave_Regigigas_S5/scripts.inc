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
msgbox Cave_Regigigas_S5_Andra_Texto_1 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S5_Andra_Texto_2 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S5_Andra_Texto_3 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S5_Andra_Texto_4 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S5_Andra_Texto_5 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_65
removeobject 4
setvar VAR_UNUSED_0x40F8, 19
release
end

Cave_Regigigas_S5_Andra_Texto_1:
	.string "Observa, {PLAYER}.$"

Cave_Regigigas_S5_Andra_Texto_2:
	.string "Parece claro que si queremos avanzar,\n"
	.string "debe ser por ahí.$"

Cave_Regigigas_S5_Andra_Texto_3:
	.string "Esto ya lo he visto antes… las cuevas\n"
	.string "de los regis cuentan con cosas así.$"

Cave_Regigigas_S5_Andra_Texto_4:
	.string "Deberemos tomar otro camino, es posible\n"
	.string "que por ahí obtengamos respuesta.$"

Cave_Regigigas_S5_Andra_Texto_5:
	.string "Veámos que encontramos por allí.$"
