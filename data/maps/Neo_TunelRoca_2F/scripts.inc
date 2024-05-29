Neo_TunelRoca_2F_MapScripts::
	.byte 0


Neo_TunelRoca_2F_Fuji::
lock
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
msgbox Neo_TunelRoca_2F_Fuji_Texto_1 MSGBOX_DEFAULT
waitmoncry
delay 15
msgbox Neo_TunelRoca_2F_Fuji_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, Neo_TunelRoca_2F_Fuji_Move_1
waitmovement 0x0
msgbox Neo_TunelRoca_2F_Fuji_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, Neo_TunelRoca_2F_Fuji_Move_2
waitmovement 0x0
msgbox Neo_TunelRoca_2F_Fuji_Texto_4 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_101_BIRCH
fadescreen 1
delay 20
removeobject 1
fadescreen 0
setvar VAR_ROUTE120_STATE, 5
release
end

Neo_TunelRoca_2F_Fuji_Move_2:
walk_in_place_left
step_end

Neo_TunelRoca_2F_Fuji_Move_1:
face_right
step_end

Neo_TunelRoca_2F_Fuji_Texto_1:
	.string "¡Wak!$"

Neo_TunelRoca_2F_Fuji_Texto_2:
	.string "Esta región nunca dejará de\n"
	.string "sorprenderme.$"

Neo_TunelRoca_2F_Fuji_Texto_3:
	.string "Parece que solo estábamos viendo una\n"
	.string "pequeña parte del TÚNEL ROCA. Esta\l"
	.string "pequeña grieta se adentra aún más bajo\l"
	.string "tierra.$"

Neo_TunelRoca_2F_Fuji_Texto_4:
	.string "Estoy intrigado, {PLAYER}. ¿Adónde\n"
	.string "llevará esto?$"

Neo_TunelRoca_Activador_Entrada::
compare VAR_ROUTE120_STATE, 4
goto_if_gt Neo_TunelRoca_Activador_Entrada_Pasa
release
end

Neo_TunelRoca_Activador_Entrada_Pasa::
delay 15
msgbox CuevaTesoro_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CuevaTesoro_Activador_Entrada_Pasa_Move_1
waitmovement 0x0
msgbox CuevaTesoro_Activador_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
warp MAP_GUARDIA_CAVE, 82, 7
release
end

Guardia_Cave_Activador_Entrada_Pasa::
delay 15
msgbox CuevaTesoro_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CuevaTesoro_Activador_Entrada_Pasa_Move_1
waitmovement 0x0
msgbox CuevaTesoro_Activador_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
warp MAP_NEO_TUNEL_ROCA_2F, 1, 18
release
end

