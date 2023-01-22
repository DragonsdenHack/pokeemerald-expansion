SsAnne_1F_MapScripts::
	.byte 0

SsAnne_1F_Andra_Ida::
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_1F_Andra_Ida_move_1
applymovement 2, SsAnne_1F_Andra_Ida_move_2
waitmovement 0x0
msgbox SsAnne_1F_Andra_Ida_Text_1 MSGBOX_AUTOCLOSE
applymovement 2, SsAnne_1F_Andra_Ida_move_3
waitmovement 0x0
msgbox SsAnne_1F_Andra_Ida_Text_2 MSGBOX_AUTOCLOSE
msgbox SsAnne_1F_Andra_Ida_Text_3 MSGBOX_AUTOCLOSE
applymovement 2, SsAnne_1F_Andra_Ida_move_4
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_ROUTE_103_RIVAL
removeobject 2
setvar VAR_UNUSED_0x40F7, 25
release
end

SsAnne_1F_Andra_Ida_Text_1:
.string "ANDRA: Ha sido más fácil entrar de\n"
	.string "lo que parecía, ¿eh?$"

SsAnne_1F_Andra_Ida_Text_2:
.string "La mayoría de pasajeros de este\n"
	.string "crucero de lujo no son de KANTO,\l"
	.string "eso nos dará la ventaja de pasar\l"
	.string "desapercibidos y acceder al\l"
	.string "camarote del CAPITÁN sin levantar\l"
	.string "sospechas, una vez allí\l"
	.string "identificamos el frasco y nos lo\l"
	.string "llevamos.$"

SsAnne_1F_Andra_Ida_Text_3:
.string "Vamos allá.$"

SsAnne_1F_Andra_Ida_move_1:
walk_in_place_down
step_end

SsAnne_1F_Andra_Ida_move_2:
walk_in_place_up
step_end

SsAnne_1F_Andra_Ida_move_3:
walk_in_place_down
walk_in_place_up
step_end

SsAnne_1F_Andra_Ida_move_4:
walk_down
step_end
