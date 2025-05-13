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
delay 100
release
end


FiveIslandPort_Text_Andra_1:
	.string "ANDRA: Da bist du ja endlich {PAUSE 15}…{PAUSE 15} Ich habe\n"
	.string "mich noch gar nicht dafür entschuldigt,\l"
	.string "wie ich mich bisher verhalten habe.\p"
	.string "Ich dachte, wir wären im Wettstreit\n"
	.string "miteinander. Aber ATLAS und du haben\l"
	.string "mir gezeigt, worauf es wirklich ankommt:\p"
	.string "Teamwork.$"

FiveIslandPort_Text_Andra_2:
	.string "Aber hey, das heißt nicht, dass\n"
	.string "ich nicht trotzdem meinen eigenen Weg\l"
	.string "gehen und mein Team aus ehrgeizigen\l"
	.string "Gründen besser machen kann.\p"
	.string "Bei unserem nächsten Kampf werde ich all\n"
	.string "deine POKéMON auf die Bretter schicken.\l"
	.string "Ich bin nicht hier, um ein x-beliebiger\l"
	.string "RÜPEL zu sein, verstehst du?$"


FiveIslandPort_Text_Andra_3:
	.string "MATROSE: Seid ihr endlich fertig?\n"
	.string "Wir fahren jetzt nach KANTO!$"

FiveIslandPort_Text_Andra_4:
	.string "ANDRA: Gehen wir, {PLAYER}.\n"
	.string "Auf nach KANTO!$"

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
