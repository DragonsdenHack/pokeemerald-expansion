RocketHideout_2F_MapScripts::
	.byte 0

RocketHideout2F_1::
lock     
faceplayer     
msgbox RocketHideout2F_Text_1, MSGBOX_DEFAULT
release     
end

RocketHideout2F_Text_1:
.string "If you serve justice,\n"
.string "you'll be betraying TEAM ROCKET!!$"



RocketHideout2F_2::
lock     
faceplayer     
msgbox RocketHideout2F_Text_2, MSGBOX_DEFAULT
release     
end

RocketHideout2F_Text_2:
.string "The main rule in this business of ours\n"
	.string "called CASINO is: never consume\l"
	.string "anything you sell, our scientists\l"
	.string "designed the slots so the odds are with\l"
	.string "us. Never forget this: the house always\l"
	.string "wins!$"



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
.string "(GIOVANNI himself wants to see me, I\n"
	.string "can't leave without even knowing what\l"
	.string "to do).$"

RocketHideout2F_Barrera_Move_1:
walk_in_place_right
step_end

RocketHideout2F_Barrera_Move_2:
walk_down
walk_slow_down
step_end
