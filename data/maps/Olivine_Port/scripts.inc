Olivine_Port_MapScripts::
	.byte 0

OlivinePort1::
lock     
faceplayer     
msgbox OlivineCity_Port_Text_1, MSGBOX_DEFAULT
release     
end

OlivineCity_Port_Text_1:
	.string "The SEAGALLOP FERRY is out of service,\n"
	.string "thank you.$"



OlivinePort2::
lock     
faceplayer     
msgbox OlivineCity_Port_Text_2, MSGBOX_DEFAULT
release     
end

OlivineCity_Port_Text_2:
	.string "Our kind of TRAINER will disappear soon\n"
	.string "in JOHTO. There's no CYCLING ROAD here.\l"
	.string "And the OLIVINE PORT tempts us a lot to\l"
	.string "work as sailors. For example, I stroll\l"
	.string "around here every day to see if someone\l"
	.string "would finally give me some work. And\l"
	.string "from there, to the S.S. AQUA!$"



OlivinePort3::
lock     
faceplayer     
msgbox OlivineCity_Port_Text_3, MSGBOX_DEFAULT
release     
end

OlivineCity_Port_Text_3:
.string "The SEAGALLOP FERRY is\n"
.string "out of service, thank you.$"



OlivinePort4::
lock     
faceplayer     
msgbox OlivineCity_Port_Text_4, MSGBOX_DEFAULT
release     
end

OlivineCity_Port_Text_4:
.string "The SEAGALLOP FERRY is\n"
.string "out of service, thank you.$"



OlivinePort5::
lock     
faceplayer     
msgbox OlivineCity_Port_Text_5, MSGBOX_DEFAULT
release     
end

OlivineCity_Port_Text_5:
.string "The SEAGALLOP FERRY is\n"
.string "out of service, thank you.$"



OlivinePort7::
lock     
faceplayer     
msgbox OlivineCity_Port_Text_7, MSGBOX_DEFAULT
release     
end

OlivineCity_Port_Text_7:
	.string "OLIVINE CITY gets larger every time.\n"
	.string "That's why the OLIVINE PORT must grow\l"
	.string "too. Soon, we'll connect with KANTO and\l"
	.string "HOENN.$"

compare VAR_UNUSED_0x40F7, 142
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2

OlivinePort_Barrera::
compare VAR_UNUSED_0x40F7, 146
goto_if_gt OlivinePort_Barrera_4
compare VAR_UNUSED_0x40F7, 144
goto_if_eq LavenderTown_Barrera_Mision_Kangaskhan_2
compare VAR_UNUSED_0x40F7, 145
goto_if_eq LavenderTown_Barrera_Mision_Kangaskhan_2
compare VAR_UNUSED_0x40F7, 146
goto_if_eq LavenderTown_Barrera_Mision_Kangaskhan_2
compare VAR_UNUSED_0x40F7, 143
goto_if_lt OlivinePort_Barrera_3
compare VAR_UNUSED_0x40F7, 142
goto_if_gt OlivinePort_Barrera_2
release
end

OlivinePort_Barrera_2::
lock
applymovement OBJ_EVENT_ID_PLAYER, OlivinePort_Barrera_Move_1
applymovement 7, OlivinePort_Barrera_Move_2
waitmovement 0x0
playfanfare MUS_OBTAIN_ITEM
msgbox OlivinePort_Barrera_Texto_3.1 MSGBOX_DEFAULT
waitfanfare
msgbox OlivinePort_Barrera_Texto_3 MSGBOX_AUTOCLOSE
applymovement 7, OlivinePort_Barrera_Move_3
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 144
release
end

OlivinePort_Barrera_Texto_3.1:
.string "({PLAYER} showed their PARTYCKET).$"

OlivinePort_Barrera_3::
lock
applymovement OBJ_EVENT_ID_PLAYER, OlivinePort_Barrera_Move_1
applymovement 7, OlivinePort_Barrera_Move_2
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, OlivinePort_Barrera_Move_1.1
waitmovement 0x0
msgbox OlivinePort_Barrera_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, OlivinePort_Barrera_Move_4
applymovement 7, OlivinePort_Barrera_Move_3
waitmovement 0x0
release
end

OlivinePort_Barrera_4::
lock
applymovement OBJ_EVENT_ID_PLAYER, OlivinePort_Barrera_Move_1
applymovement 7, OlivinePort_Barrera_Move_2
waitmovement 0x0
msgbox OlivinePort_Barrera_Texto_2 MSGBOX_AUTOCLOSE
applymovement 7, OlivinePort_Barrera_Move_3
applymovement OBJ_EVENT_ID_PLAYER, OlivinePort_Barrera_Move_4
waitmovement 0x0
release
end

OlivinePort_Barrera_Texto_1:
	.string "I'm sorry, but without the PARTYCKET,\n"
	.string "you cannot pass.$"

OlivinePort_Barrera_Texto_2:
	.string "The party is over. Thank you for coming.$"

OlivinePort_Barrera_Texto_3:
.string "Ah!\n"
	.string "I see you have the PARTYCKET!\l"
	.string "Come in. You're arriving at the perfect time!$"

OlivinePort_Barrera_Move_1.1:
walk_in_place_up
step_end

OlivinePort_Barrera_Move_1:
face_right
step_end

OlivinePort_Barrera_Move_2:
face_left
step_end

OlivinePort_Barrera_Move_3:
face_up
step_end

OlivinePort_Barrera_Move_4:
walk_slow_up
step_end
