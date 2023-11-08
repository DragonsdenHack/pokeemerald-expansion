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
.string "¡Deberías avergonzarte de lo que\n"
.string "haces joven!\l"
.string "¡Los problemas de una región se\l"
.string "solucionan remando todos juntos,\l"
.string "no declarando la guerra por tu\l"
.string "cuenta!$"



CeladonMansionDocumento_100::
msgbox CeladonMansionDocumento_Text_100, MSGBOX_SIGN   
end

CeladonMansionDocumento_Text_100:
.string "CELADON MANSION\n"
    .string "Manager's Suite$"
