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
.string "{PAUSE 5}…{PAUSE 5}$"



DragonsdenHouse3::
lock     
faceplayer     
msgbox DragonsdenHouse2_Text_3, MSGBOX_DEFAULT
release     
end

DragonsdenHouse2_Text_3:
.string "{PAUSE 5}…{PAUSE 5}$"



DragonsdenHouse4::
lock     
faceplayer     
msgbox DragonsdenHouse2_Text_4, MSGBOX_DEFAULT
release     
end

DragonsdenHouse2_Text_4:
.string "{PAUSE 5}…{PAUSE 5}$"



DragonsdenHouse5::
lock     
faceplayer     
msgbox DragonsdenHouse2_Text_5, MSGBOX_DEFAULT
release     
end

DragonsdenHouse2_Text_5:
.string "{PAUSE 5}…{PAUSE 5}$"

DragonsdenHouse_Anciano_Trampilla::
lock
faceplayer
msgbox DragonsdenHouse_Anciano_Trampilla_Texto_1 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
fadescreen 1
removeobject 1
delay 20
fadescreen 0
clearflag FLAG_HOENN_74
clearflag FLAG_HOENN_75
clearflag FLAG_HOENN_76
clearflag FLAG_HOENN_77
clearflag FLAG_HOENN_78
clearflag FLAG_HOENN_79
clearflag FLAG_HOENN_90
clearflag FLAG_HOENN_91
clearflag FLAG_HOENN_92
clearflag FLAG_HOENN_93
clearflag FLAG_HOENN_94
clearflag FLAG_HOENN_95
clearflag FLAG_HOENN_96
clearflag FLAG_HOENN_97
clearflag FLAG_HOENN_98
clearflag FLAG_HOENN_99
setflag FLAG_HOENN_640
setflag FLAG_HOENN_641
setflag FLAG_HOENN_642
setflag FLAG_HOENN_643
setflag FLAG_HOENN_644
setflag FLAG_HOENN_645
setflag FLAG_HOENN_646
setflag FLAG_HOENN_647
setflag FLAG_HOENN_648
setflag FLAG_HOENN_649
clearflag FLAG_NUEVA_165
clearflag FLAG_NUEVA_136
clearflag FLAG_NUEVA_133
clearflag FLAG_NUEVA_137
clearflag FLAG_NUEVA_144
clearflag FLAG_NUEVA_147
clearflag FLAG_NUEVA_152
clearflag FLAG_NUEVA_153
clearflag FLAG_NUEVA_154
clearflag FLAG_NUEVA_155
clearflag FLAG_NUEVA_156
clearflag FLAG_NUEVA_159
clearflag FLAG_NUEVA_511
clearflag FLAG_NUEVA_512
clearflag FLAG_NUEVA_513
clearflag FLAG_NUEVA_514
release
end

DragonsdenHouse_Anciano_Trampilla_Texto_1:
.string "¿{PLAYER}?\n"
	.string "Nuestro MAESTRO te está esperando.\l"
	.string "Nos ha dicho que puedes acceder\l"
	.string "hacia su prueba, la de verdad, de\l"
	.string "modo que…\l"
	.string "Sigue adelante.$"

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
    .string "Hay una trampilla que asoma\n"
	.string "sutilmente unas escaleras que\l"
	.string "conducen a una zona subterránea,\l"
	.string "¿quieres entrar?$"

Dragonsden_Warp_move1:
walk_slow_down
step_end
