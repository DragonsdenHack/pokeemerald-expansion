BlackthornCity_DragonsdenHouse_MapScripts::
	.byte 0

DragonsdenHouse1::
end



DragonsdenHouse2::
lock     
faceplayer     
msgbox DragonsdenHouse2_Text_2, MSGBOX_DEFAULT
release     
end

DragonsdenHouse2_Text_2:
.string "…$"



DragonsdenHouse3::
lock     
faceplayer     
msgbox DragonsdenHouse2_Text_3, MSGBOX_DEFAULT
release     
end

DragonsdenHouse2_Text_3:
.string "…$"



DragonsdenHouse4::
lock     
faceplayer     
msgbox DragonsdenHouse2_Text_4, MSGBOX_DEFAULT
release     
end

DragonsdenHouse2_Text_4:
.string "…$"



DragonsdenHouse5::
lock     
faceplayer     
msgbox DragonsdenHouse2_Text_5, MSGBOX_DEFAULT
release     
end

DragonsdenHouse2_Text_5:
.string "…$"

DragonsdenHouse_Anciano_Trampilla::
lock
faceplayer
msgbox DragonsdenHouse_Anciano_Trampilla_Texto_1 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
fadescreen 1
removeobject 1
delay 20
fadescreen 0
release
end

DragonsdenHouse_Anciano_Trampilla_Texto_1:
	.string "{PLAYER}? Our MASTER is waiting for\n"
	.string "you. He has instructed us that you may\l"
	.string "proceed to his true test, so{PAUSE 15}…{PAUSE 15} Go ahead.$"

Dragonsden_Warp::
applymovement OBJ_EVENT_ID_PLAYER, Dragonsden_Warp_move_2
waitmovement 0x0
msgbox Dragonsden_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Dragonsden_Warp_No
warp MAP_BLACKTHORN_CITY_DRAGONSDEN_S2, 20, 19
release
end

Dragonsden_Warp_move_2:
walk_in_place_up
step_end

Dragonsden_Warp_No::
applymovement OBJ_EVENT_ID_PLAYER, Dragonsden_Warp_move1
waitmovement 0x0
release
end

Dragonsden_Warp_Text_YesNo:
	.string "A discreet trapdoor reveals stairs\n"
	.string "descending to an underground area.\l"
	.string "Would you like to enter?$"

Dragonsden_Warp_move1:
walk_slow_down
step_end
