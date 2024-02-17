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
           .string "ANDRA: You're finally here. I haven't\n"
	.string "even said sorry yet for how I acted\l"
	.string "earlier. I thought we were both trying\l"
	.string "to one-up each other. But ARCHER and\l"
	.string "you taught me a lesson. I get it now,\l"
	.string "teamwork is where it's at.$"

FiveIslandPort_Text_Andra_2:
	.string "ANDRA: But hey, that doesn't mean I\n"
	.string "can't do my own thing and try to make my\l"
	.string "team stronger. Next time we throw down,\l"
	.string "I'm gonna take out all your POKÉMON. I'm\l"
	.string "not here for just being a random ROCKET\l"
	.string "GRUNT, did you mean?$"


FiveIslandPort_Text_Andra_3:
	.string "SAILOR: Can we cut the chatter\n"
	.string "already? We're heading to KANTO now!$"

FiveIslandPort_Text_Andra_4:
	.string "ANDRA: Let's go, {PLAYER}. See you in\n"
	.string "KANTO.$"

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
