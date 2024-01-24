SevenIsland_House1_MapScripts::
	.byte 0

SevenIslandHouse1_1::
end

SevenIsland_Secundaria_Anciana::
lock
faceplayer
msgbox SevenIsland_Secundaria_Anciana_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_ROUTE108_STATE, 3
goto_if_gt SevenIsland_Secundaria_Anciana_2
release
end

SevenIsland_Secundaria_Anciana_2::
delay 15
msgbox SevenIsland_Secundaria_Anciana_Texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, SevenIsland_Secundaria_Anciana_Move_1
waitmovement 0x0
msgbox SevenIsland_Secundaria_Anciana_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, SevenIsland_Secundaria_Anciana_Move_2
waitmovement 0x0
msgbox SevenIsland_Secundaria_Anciana_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, SevenIsland_Secundaria_Anciana_Move_3
waitmovement 0x0
msgbox SevenIsland_Secundaria_Anciana_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, SevenIsland_Secundaria_Anciana_Move_4
waitmovement 0x0
msgbox SevenIsland_Secundaria_Anciana_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, SevenIsland_Secundaria_Anciana_Move_3
waitmovement 0x0
msgbox SevenIsland_Secundaria_Anciana_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, SevenIsland_Secundaria_Anciana_Move_4
waitmovement 0x0
msgbox SevenIsland_Secundaria_Anciana_Texto_8 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SevenIsland_Secundaria_Anciana_Move_4
applymovement 1, SevenIsland_Secundaria_Anciana_Move_5
waitmovement 0x0
msgbox SevenIsland_Secundaria_Anciana_Texto_9 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
fadescreen 1
delay 20
removeobject 1
fadescreen 0
setvar VAR_ROUTE108_STATE, 5
release
end

SevenIsland_Secundaria_Anciana_Move_1:
emote_exclamation_mark
step_end

SevenIsland_Secundaria_Anciana_Move_2:
face_right
step_end

SevenIsland_Secundaria_Anciana_Move_3:
face_player
step_end

SevenIsland_Secundaria_Anciana_Move_4:
face_up
step_end

SevenIsland_Secundaria_Anciana_Move_5:
walk_slow_up
walk_slow_up
step_end

SevenIsland_Secundaria_Anciana_Texto_1:
	.string "Now I don't look like it, but when I was\n"
	.string "younger... I flew around, challenging\l"
	.string "the TRAINERS I came across. Now, I'm\l"
	.string "content remembering old times and\l"
	.string "watching battles.$"

SevenIsland_Secundaria_Anciana_Texto_2:
.string "… …$"

SevenIsland_Secundaria_Anciana_Texto_3:
	.string "So ARCHER, you must be a great TRAINER\n"
	.string "to have caught their attention.$"

SevenIsland_Secundaria_Anciana_Texto_4:
	.string "In the past, on SEVII ISLANDS, there\n"
	.string "were also some GYMS, although they\l"
	.string "eventually closed due to inactivity and\l"
	.string "a lack of competition, even though some\l"
	.string "achieved a very high level.$"

SevenIsland_Secundaria_Anciana_Texto_5:
	.string "Among all of them, I'm aware that mine is\n"
	.string "the only one still standing... hidden and\l"
	.string "unknown to 99% of SEVII's residents.$"

SevenIsland_Secundaria_Anciana_Texto_6:
	.string "See those boxes? Behind them is an\n"
	.string "adjacent room; there's a tile there that\l"
	.string "teleports you to the location of my\l"
	.string "GYM.$"

SevenIsland_Secundaria_Anciana_Texto_7:
	.string "The truth is, they only serve as a\n"
	.string "distraction. To actually move to the\l"
	.string "other room, there's a secret trapdoor\l"
	.string "right under those boxes. Do you think\l"
	.string "I'm going to be rearranging them every\l"
	.string "time I want to enter and exit?$"

SevenIsland_Secundaria_Anciana_Texto_8:
	.string "Once you enter the secret room, you'll\n"
	.string "see a hidden tile; it will take you to my\l"
	.string "GYM.$"

SevenIsland_Secundaria_Anciana_Texto_9:
	.string "I hope to see you there. ARCHER sending\n"
	.string "you has brought back my excitement for\l"
	.string "battle.$"

Isla_Setima_Activador_Entrada::
compare VAR_ROUTE108_STATE, 4
goto_if_gt Isla_Setima_Activador_Entrada_Pasa
release
end

Isla_Setima_Activador_Entrada_Pasa::
delay 15
msgbox Isla_Setima_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CuevaTesoro_Activador_Entrada_Pasa_Move_1
waitmovement 0x0
msgbox Isla_Setima_Activador_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
warp MAP_SEVEN_ISLAND_HOUSE1_CAJAS, 3, 2
release
end

Isla_Setima_Activador_Entrada_Texto_1:
.string "... ...$"

Isla_Setima_Activador_Entrada_Pasa_Text_YesNo:
	.string "There's a little trapdoor under the\n"
	.string "boxes. Do you want to pass through?$"



Isla_Setima_Activador_Entrada_Pasa_2::
delay 15
msgbox Isla_Setima_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CuevaTesoro_Activador_Entrada_Pasa_Move_1
waitmovement 0x0
msgbox Isla_Setima_Activador_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
warp MAP_SEVEN_ISLAND_HOUSE1, 4, 2
release
end
