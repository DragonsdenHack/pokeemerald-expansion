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
.string "And you?\n"
.string "What made you want to join our ranks?\l"
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
	.string "Don't worry about this base being\n"
	.string "discovered. The people out there are so\l"
	.string "blind, they wouldn't notice a Zapdos\l"
	.string "using Thunder right in front of them.$"



RocketHideout1F_3::
lock     
faceplayer     
msgbox RocketHideout1F_Text_3, MSGBOX_DEFAULT
release     
end

RocketHideout1F_Text_3:
	.string "The casino upstairs is our main cash\n"
	.string "flow. The best part? We count on\l"
	.string "people's poor judgment to play a game\l"
	.string "they know they're statistically doomed\l"
	.string "to lose.$"



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
	.string "Only show your enemy what you want\n"
	.string "them to see. Burn that into your memory,\l"
	.string "young Rocket-that's the key to success.$"



RocketHideout1F_7::
lock     
faceplayer     
msgbox RocketHideout1F_Text_7, MSGBOX_DEFAULT
release     
end

RocketHideout1F_Text_7:
	.string "So, CHRONO ISLAND, huh. Are there rare\n"
	.string "POKÉMON there or what?$"

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
	.string "I heard the boss wants to see you.\n"
	.string "You're not planning to start off by\l"
	.string "ignoring a direct order, are you?$"

RocketHideout1F_Barrera_Move_1:
face_up
step_end

RocketHideout1F_Barrera_Move_2:
face_down
step_end

RocketHideout1F_Barrera_Move_3:
walk_slow_right
step_end
