SsAnne_2F_MapScripts::
	.byte 0

SsAnne2F_1::
lock     
faceplayer     
msgbox SsAnne2F_Text_1, MSGBOX_DEFAULT
release     
end

SsAnne2F_Text_1:
	.string "Es kommt nicht häufig vor, dass einem\n"
	.string "hier Leute in solcher Kleidung\l"
	.string "begegnen. Ist das ein Modetrend aus\l"
	.string "irgendeiner Stadt dieser Region?$"



SsAnne2F_2::
lock     
faceplayer     
msgbox SsAnne2F_Text_2, MSGBOX_DEFAULT
release     
end

SsAnne2F_Text_2:
.string "Die Luxuspartys der M.S. ANNE\n"
.string "suchen ihresgleichen.$"

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
	.string "-Diese Tür ist verschlossen.-$"
