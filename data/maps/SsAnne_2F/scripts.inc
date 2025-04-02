SsAnne_2F_MapScripts::
	.byte 0

SsAnne2F_1::
lock     
faceplayer     
msgbox SsAnne2F_Text_1, MSGBOX_DEFAULT
release     
end

SsAnne2F_Text_1:
	.string "It's pretty uncommon to see people with\n"
	.string "those clothes around here. Is it a\l"
	.string "custom of any town in this region at\l"
	.string "all?$"



SsAnne2F_2::
lock     
faceplayer     
msgbox SsAnne2F_Text_2, MSGBOX_DEFAULT
release     
end

SsAnne2F_Text_2:
.string "SS. ANNE luxury party is unmatched\n"
.string "across all regions.$"

SsAnne2F_Puerta_Cerrada::
lock
applymovement OBJ_EVENT_ID_PLAYER, SsAnne2F_Puerta_Cerrada_Move_1
waitmovement 0x0
msgbox SsAnne2F_Puerta_Cerrada_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SsAnne2F_Puerta_Cerrada_Move_2
waitmovement 0x0
release
end

SsAnne2F_Puerta_Cerrada_Move_1:
walk_in_place_down
step_end

SsAnne2F_Puerta_Cerrada_Move_2:
walk_up
step_end

SsAnne2F_Puerta_Cerrada_Texto_1:
	.string "-This door is closed.-$"
