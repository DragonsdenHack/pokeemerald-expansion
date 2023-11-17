RocketHideout_3F_MapScripts::
	.byte 0

RocketHideout3F_1::
lock     
faceplayer     
msgbox RocketHideout3F_Text_1, MSGBOX_DEFAULT
release     
end

RocketHideout3F_Text_1:
.string "In CELADON we're being accused of\n"
	.string "contaminating the city, if they know\l"
	.string "how right they were! If they knew what\l"
	.string "we have here, under the ground they\l"
	.string "walk on every day!$"



RocketHideout3F_2::
lock     
faceplayer     
msgbox RocketHideout3F_Text_2, MSGBOX_DEFAULT
release     
end

RocketHideout3F_Text_2:
.string "Our job here is simple: to create the\n"
	.string "highest production capacity, optimize\l"
	.string "and automate as much as we can in every\l"
	.string "process, what you did at BILL's helped a\l"
	.string "lot, obviously.$"



RocketHideout3F_3::
lock     
faceplayer     
msgbox RocketHideout3F_Text_3, MSGBOX_DEFAULT
release     
end

RocketHideout3F_Text_3:
.string "-You'll never be a true ROCKET until you\n"
	.string "leave apart your feelings and turn\l"
	.string "yourself into a cold and bloodlusted\l"
	.string "machine whose only objective is to\l"
	.string "steal from trainers and ruin them.-\l"
	.string "That was the usual vision of the normal\l"
	.string "ROCKET, nothing further from reality,\l"
	.string "and simple propaganda pushed by today's\l"
	.string "government. With every stealing we're\l"
	.string "doing, we're just recovering what was\l"
	.string "taken of us before.$"



RocketHideout3F_4::
end



RocketHideout3F_5::
end

RocketHideout_3F_Maquina_Teletransporte_2::
msgbox RocketHideout_3F_Maquina_Teletransporte_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_3F_Maquina_Teletransporte_No
delay 10
playse SE_M_CHARGE
delay 20
playse SE_M_TELEPORT
warpsilent MAP_ROCKET_HIDEOUT_6F, 10, 16
release
end

RocketHideout_3F_Maquina_Teletransporte_YesNo:
.string "The machine is ready to be used. Do you\n"
	.string "want to be teleported to the BASE of\l"
	.string "ROUTE 5?$"

RocketHideout_3F_Maquina_Teletransporte_No::
release
end

RocketHideout_3F_Cientifico_Bienvenida::
delay 5
playse SE_PIN
applymovement 2, RocketHideout_3F_Cientifico_Bienvenida_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_3F_Cientifico_Bienvenida_Move_2
delay 10
msgbox RocketHideout_3F_Cientifico_Bienvenida_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, RocketHideout_3F_Cientifico_Bienvenida_Move_3
waitmovement 0x0
msgbox RocketHideout_3F_Cientifico_Bienvenida_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, RocketHideout_3F_Cientifico_Bienvenida_Move_3
waitmovement 0x0
msgbox RocketHideout_3F_Cientifico_Bienvenida_Texto_3 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideout_3F_Cientifico_Bienvenida_Move_1.1
waitmovement 0x0
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem 772
msgbox RocketHideout_3F_Cientifico_Bienvenida_Texto_3.1 MSGBOX_DEFAULT
waitfanfare
msgbox RocketHideout_3F_Cientifico_Bienvenida_Texto_4 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideout_3F_Cientifico_Bienvenida_Move_3
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 37
release
end

RocketHideout_3F_Cientifico_Bienvenida_Texto_1:
.string "Wow! You must be {PLAYER}! You need\n"
	.string "your guts to mess up with someone as\l"
	.string "protected as BILL and emerge\l"
	.string "victorious!$"

RocketHideout_3F_Cientifico_Bienvenida_Texto_2:
.string "Our LEADER GIOVANNI is waiting for you\n"
	.string "in his office, on FLOOR -4, on a lower\l"
	.string "floor. Don't keep him waiting!$"

RocketHideout_3F_Cientifico_Bienvenida_Texto_3:
.string "Also, you can't go to his office by\n"
	.string "stairs, for extra protection, the only\l"
	.string "way in and out is by elevator. You can\l"
	.string "find it on the upper floor. Take these\l"
	.string "keys, you need them to access the\l"
	.string "elevator.$"

RocketHideout_3F_Cientifico_Bienvenida_Texto_3.1:
.string "You obtained the LIFT KEY from the\n"
	.string "ROCKET SCIENTIST!$"


RocketHideout_3F_Cientifico_Bienvenida_Texto_4:
.string "That's all {PLAYER}, GIOVANNI is\n"
	.string "awaiting you.$"

RocketHideout_3F_Cientifico_Bienvenida_Move_1:
emote_exclamation_mark
walk_in_place_left
step_end

RocketHideout_3F_Cientifico_Bienvenida_Move_1.1:
walk_in_place_left
step_end

RocketHideout_3F_Cientifico_Bienvenida_Move_2:
walk_in_place_right
step_end

RocketHideout_3F_Cientifico_Bienvenida_Move_3:
walk_in_place_up
walk_in_place_left
step_end

RocketHideout_3F_Cientifico_Bienvenida_Move_4:
face_down
step_end

RocketHideout_3F_Cientifico_Bienvenida_Move_5:
face_up
step_end
