CeladonCity_House1_1F_MapScripts::
	.byte 0

CeladonMansion_1::
end



CeladonMansion_2::
end



CeladonMansion_3::
end



CeladonMansion_4::
lock     
faceplayer     
msgbox CeladonMansion_Text_4, MSGBOX_DEFAULT
release     
end

CeladonMansion_Text_4:
	.string "Du solltest dich schämen, junger Mann!\p"
	.string "Die Probleme einer Region löst man\n"
	.string "nicht, indem man eigenmächtig einen\l"
	.string "Krieg anzettelt, sondern durch\l"
	.string "Zusammenarbeit!$"



CeladonMansionDocumento_100::
msgbox CeladonMansionDocumento_Text_100, MSGBOX_SIGN   
end

CeladonMansionDocumento_Text_100:
.string "CELADON MANSION\n"
    .string "Manager's Suite$"
