RocketHideout_1F_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, RocketHideout_1F_OnResume
	.byte 0

RocketHideout_1F_OnResume:
	call RocketHideout_1F_SetupEscapeWarp
	end

RocketHideout_1F_SetupEscapeWarp::
	setescapewarp MAP_CELADON_CITY, 34, 22
	return

RocketHideout1F_1::
lock     
faceplayer     
msgbox RocketHideout1F_Text_1, MSGBOX_DEFAULT
release     
end

RocketHideout1F_Text_1:
.string "What about you?\n"
.string "How did you ended up recruited?\l"
.string "…\l"
.string "…\l"
.string "I see…$"



RocketHideout1F_2::
lock     
faceplayer     
msgbox RocketHideout1F_Text_2, MSGBOX_DEFAULT
release     
end

RocketHideout1F_Text_2:
.string "You shouldn't worry. No one will find our\n"
	.string "BASE. Those people outside are as blind\l"
	.string "as hey wouldn't see even a ZAPDOS using\l"
	.string "it's THUNDER right in front of them.$"



RocketHideout1F_3::
lock     
faceplayer     
msgbox RocketHideout1F_Text_3, MSGBOX_DEFAULT
release     
end

RocketHideout1F_Text_3:
.string "That CASINO up there is our main income\n"
	.string "source. The best part about it is that\l"
	.string "everything is based on the awful\l"
	.string "criteria of people, who yet play games\l"
	.string "that they know that statistically won't\l"
	.string "benefit them.$"



RocketHideout1F_4::
end



RocketHideout1F_5::
lock     
faceplayer     
msgbox RocketHideout1F_Text_5, MSGBOX_DEFAULT
release     
end

RocketHideout1F_Text_5:
.string "HAIL GIOVANNI!\n"
.string "Forever!$"



RocketHideout1F_6::
lock     
faceplayer     
msgbox RocketHideout1F_Text_6, MSGBOX_DEFAULT
release     
end

RocketHideout1F_Text_6:
.string "We only show our enemies what we want\n"
	.string "them to see. Make sure you learn it,\l"
	.string "you'll need it to succeed.$"



RocketHideout1F_7::
lock     
faceplayer     
msgbox RocketHideout1F_Text_7, MSGBOX_DEFAULT
release     
end

RocketHideout1F_Text_7:
.string "So, CHRONO ISLAND huh. Are there rare\n"
	.string "POKÉMON over there or what?$"

RocketHideout1F_Barrera::
compare VAR_UNUSED_0x40F7, 38
goto_if_gt RocketHideout1F_Barrera_2
delay 5
playse SE_PIN
applymovement 5, RocketHideout1F_Barrera_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout1F_Barrera_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout1F_Barrera_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout1F_Barrera_Move_3
waitmovement 0x0
release
end

RocketHideout1F_Barrera_2::
release
end


RocketHideout1F_Barrera_Texto_1:
.string "I think our leader is waiting for you, or\n"
	.string "maybe you'd like to ignore orders on\l"
	.string "your first day over here?$"

RocketHideout1F_Barrera_Move_1:
face_up
step_end

RocketHideout1F_Barrera_Move_2:
face_down
step_end

RocketHideout1F_Barrera_Move_3:
walk_slow_right
step_end
