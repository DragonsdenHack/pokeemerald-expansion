FiveIsland_Port_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, FiveIsland_Port_OnFrame
	.byte 0

FiveIsland_Port_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 6, FiveIslandPort_Andra
	.2byte 0


FiveIslandPort_Andra::
applymovement OBJ_EVENT_ID_PLAYER, FiveIslandPort_Andra_move1
waitmovement 0x0
playse SE_PIN
applymovement 3, FiveIslandPort_Andra_move2
waitmovement 0x0
applymovement 3, FiveIslandPort_Andra_move3
waitmovement 0x0
msgbox FiveIslandPort_Text_Andra_1, MSGBOX_AUTOCLOSE
delay 20
applymovement 3, FiveIslandPort_Andra_move4
waitmovement 0x0
msgbox FiveIslandPort_Text_Andra_2, MSGBOX_AUTOCLOSE
applymovement 2, FiveIslandPort_Andra_move3
waitmovement 0x0
msgbox FiveIslandPort_Text_Andra_3, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, FiveIslandPort_Andra_move2
applymovement 3, FiveIslandPort_Andra_move2
waitmovement 0x0
applymovement 3, FiveIslandPort_Andra_move5
applymovement OBJ_EVENT_ID_PLAYER, FiveIslandPort_Andra_move5
waitmovement 0x0
applymovement 3, FiveIslandPort_Andra_move3
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_2
msgbox FiveIslandPort_Text_Andra_4, MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 20 @BANCO DE MAPA
setvar VAR_0x8001 4 @NUMERO DE MAPA
setvar VAR_0x8002 0 @POSICION X
setvar VAR_0x8003 16 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end


FiveIslandPort_Text_Andra_1:
.string "ANDRA: Ya llegaste, aún no te he\n"
	.string "pedido disculpas por mi\l"
	.string "comportamiento anterior, pensaba\l"
	.string "que ambos estábamos compitiendo y\l"
	.string "quise quedar por encima tuya,\l"
	.string "ATLAS y tú me habéis dado una\l"
	.string "lección, ahora entiendo el poder\l"
	.string "de trabajar en equipo.$"

FiveIslandPort_Text_Andra_2:
.string "ANDRA: No obstante, eso no quita\n"
	.string "que pueda tener iniciativa propia\l"
	.string "y querer volver a mi equipo más\l"
	.string "fuerte, la próxima vez que\l"
	.string "combatamos voy a tumbar a todos\l"
	.string "tus POKÉMON. Estoy decidida a\l"
	.string "sobresalir por encima del SOLDADO\l"
	.string "ROCKET medio en KANTO.$"

FiveIslandPort_Text_Andra_3:
.string "MARINERO: ¿Queréis dejaros ya de\n"
	.string "tanta charla?\l"
	.string "¡Zarpamos ya hacia KANTO!$"

FiveIslandPort_Text_Andra_4:
.string "ANDRA: Entremos ya, {PLAYER}. Nos\n"
	.string "vemos en KANTO.$"

FiveIslandPort_Andra_move1:
walk_slow_down
walk_in_place_down
step_end

FiveIslandPort_Andra_move2:
emote_exclamation_mark
step_end

FiveIslandPort_Andra_move3:
walk_in_place_up
step_end

FiveIslandPort_Andra_move4:
walk_in_place_left
walk_in_place_up
step_end

FiveIslandPort_Andra_move5:
walk_in_place_down
step_end

FiveIslandPort_Andra_move6:
walk_up
step_end
