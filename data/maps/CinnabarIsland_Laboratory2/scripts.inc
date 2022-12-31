CinnabarIsland_Laboratory2_MapScripts::
	.byte 0

CinnabarIslandLaboratory2_1::
end



CinnabarIslandLaboratory2_2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "EEVEE puede evolucionar\n"
.string "y convertirse en tres tipos\l"
.string "de POKéMON.$"



CinnabarIslandLaboratory2Documento_100::
msgbox CinnabarIslandLaboratory2Documento_Text_100, MSGBOX_SIGN   
end

CinnabarIslandLaboratory2Documento_Text_100:
.string "¡Un bote de ámbar!$"



CinnabarIslandLaboratory2Documento_101::
msgbox CinnabarIslandLaboratory2Documento_Text_101, MSGBOX_SIGN   
end

CinnabarIslandLaboratory2Documento_Text_101:
.string "¡Hay un correo electrónico!\p"
	.string "...\p"
	.string "Los 3 legendarios pájaros POKéMON\n"
	.string "son ARTICUNO, ZAPDOS y MOLTRES.\p"
	.string "Desconocemos sus guaridas.\p"
	.string "Pensamos explorar la cueva\n"
	.string "que hay cerca de la CELESTE.\p"
	.string "De: EQUIPO de INVESTIGACIÓN\n"
	.string "POKéMON...$"
