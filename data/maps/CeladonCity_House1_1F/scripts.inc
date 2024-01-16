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
	.string "You should be ashamed of your actions,\n"
	.string "young one! The problems of a region can\l"
	.string "be solved by cooperating, not by\l"
	.string "declaring a war by yourself!$"



CeladonMansionDocumento_100::
msgbox CeladonMansionDocumento_Text_100, MSGBOX_SIGN   
end

CeladonMansionDocumento_Text_100:
.string "CELADON MANSION\n"
    .string "Manager's Suite$"
