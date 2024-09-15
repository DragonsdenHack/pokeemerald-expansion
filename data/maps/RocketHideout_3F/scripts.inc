RocketHideout_3F_MapScripts::
	.byte 0

RocketHideout3F_1::
lock     
faceplayer     
msgbox RocketHideout3F_Text_1, MSGBOX_DEFAULT
release     
end

RocketHideout3F_Text_1:
	.string "In Celadon, they say we're polluting the\n"
	.string "city. They're not wrong, ha! If they only\l"
	.string "knew what was right under their feet!$"



RocketHideout3F_2::
lock     
faceplayer     
msgbox RocketHideout3F_Text_2, MSGBOX_DEFAULT
release     
end

RocketHideout3F_Text_2:
	.string "Our job here is simple: increase\n"
	.string "production, optimize, and automate as\l"
	.string "much as possible. What you did at Bill's\l"
	.string "has helped significantly, there's no\l"
	.string "doubt about that.$"



RocketHideout3F_3::
lock     
faceplayer     
msgbox RocketHideout3F_Text_3, MSGBOX_DEFAULT
release     
end

RocketHideout3F_Text_3:
	.string "-You'll never be a real Rocket until you\n"
	.string "set your emotions aside and become a\l"
	.string "cold, ruthless machine.- That was the\l"
	.string "old view of the average Rocket Grunt.\l"
	.string "Nothing could be further from the\l"
	.string "truth. That's just propaganda pushed by\l"
	.string "the current government. Every time we\l"
	.string "steal, we're just taking back what was\l"
	.string "taken from us in the first place.$"



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
.string "The machine is ready.\n"
	.string "Want to teleport to\l"
	.string "the base on Route 5?$"

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
	.string "Wow! You must be {PLAYER}. It takes guts to mess\n"
	.string "with someone as well-protected as Bill\l"
	.string "and come out on top!$"

RocketHideout_3F_Cientifico_Bienvenida_Texto_2:
	.string "The big boss, Giovanni, is in his office\n"
	.string "on the -4th floor, one level down from\l"
	.string "here. He wanted to see you the second\l"
	.string "you arrived. Don't keep him waiting!$"

RocketHideout_3F_Cientifico_Bienvenida_Texto_3:
	.string "One more thing: to reach his office, you\n"
	.string "can't use the regular stairs. For\l"
	.string "security, the only way in is through the\l"
	.string "elevator on the floor above. You'll need\l"
	.string "this key to get it working.$"

RocketHideout_3F_Cientifico_Bienvenida_Texto_3.1:
.string "Obtained the ELEVATOR KEY\n"
	.string "from the ROCKET SCIENTIST!$"


RocketHideout_3F_Cientifico_Bienvenida_Texto_4:
	.string "Go, {PLAYER}. Giovanni is\n"
	.string "waiting for you.$"

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
