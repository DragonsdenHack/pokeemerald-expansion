RocketHideout_2F_MapScripts::
	.byte 0

RocketHideout2F_1::
lock     
faceplayer     
msgbox RocketHideout2F_Text_1, MSGBOX_DEFAULT
release     
end

RocketHideout2F_Text_1:
.string "If you side with the law,\n"
.string "you're betraying TEAM ROCKET!$"



RocketHideout2F_2::
lock     
faceplayer     
msgbox RocketHideout2F_Text_2, MSGBOX_DEFAULT
release     
end

RocketHideout2F_Text_2:
	.string "Rule number one in the casino: never\n"
	.string "touch what you're selling. Our\l"
	.string "scientists rigged the slot machines so\l"
	.string "the odds are always in our favor. The\l"
	.string "house always wins-don't forget it!$"



RocketHideout2F_3::
end



RocketHideout2F_4::
end



RocketHideout2F_5::
end

RocketHideout2F_Barrera::
compare VAR_UNUSED_0x40F7, 38
goto_if_gt RocketHideout2F_Barrera_2
delay 15
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout2F_Barrera_Move_1
waitmovement 0x0
delay 10
msgbox RocketHideout2F_Barrera_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout2F_Barrera_Move_2
waitmovement 0x0
release
end

RocketHideout2F_Barrera_2::
release
end


RocketHideout2F_Barrera_Texto_1:
	.string "(Giovanni himself wants\n"
	.string "to see me first.)$"

RocketHideout2F_Barrera_Move_1:
walk_in_place_right
step_end

RocketHideout2F_Barrera_Move_2:
walk_down
walk_slow_down
step_end
