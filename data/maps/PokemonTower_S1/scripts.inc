PokemonTower_S1_MapScripts::
	.byte 0


PokemonTower_S1_Activador_Entrada_Pasa::
delay 15
msgbox CuevaTesoro_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, CuevaTesoro_Activador_Entrada_Pasa_Move_1
waitmovement 0x0
msgbox PokemonTower_S1_Activador_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
warp MAP_POKEMON_TOWER_1F, 2, 8
release
end

PokemonTower_S1_Activador_Entrada_Pasa_Text_YesNo:
	.string "Este pilar está hueco. Hay unas\n"
	.string "escaleras que llevan a pisos superiores.\l"
	.string "¿Quieres pasar?$"