VermilionCity_House3_MapScripts::
	.byte 0

VermilionCityHouse3_1::
lock     
faceplayer     
msgbox VermilionCity_House3_Text_1, MSGBOX_DEFAULT
release     
end

VermilionCity_House3_Text_1:
.string "I want to exchange MAIL with all sorts\n"
	.string "of people. I send my PIDGEY to a UNION\l"
	.string "ROOM to exchange MAIL for me.$"



VermilionCityHouse3_2::
end



VermilionCityHouse3_3::
lock     
faceplayer     
msgbox VermilionCity_House3_Text_3, MSGBOX_DEFAULT
release     
end

VermilionCity_House3_Text_3:
.string "I'm getting my PIDGEY to fly a letter to\n"
	.string "SAFFRON in the north.$"



VermilionCityHouse3_4::
end



VermilionCityHouse3Documento_100::
msgbox VermilionCityHouse3Documento_Text_100, MSGBOX_SIGN   
end

VermilionCityHouse3Documento_Text_100:
.string "Dear PIPPI, I hope to see you soon. I\n"
	.string "heard SAFFRON has problems with TEAM\l"
	.string "ROCKET. VERMILION appears to be safe.$"
