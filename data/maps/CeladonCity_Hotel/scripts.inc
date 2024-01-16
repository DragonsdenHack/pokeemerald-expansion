CeladonCity_Hotel_MapScripts::
	.byte 0

CeladonCityHotel1::
lock     
faceplayer     
msgbox CeladonCity_Hotel_Text_1, MSGBOX_DEFAULT
release     
end

CeladonCity_Hotel_Text_1:
	.string "This hotel is for people. Both POKÉMON\n"
	.string "and criminals like you are banned from\l"
	.string "entering.$"



CeladonCityHotel2::
lock     
faceplayer     
msgbox CeladonCity_Hotel_Text_2, MSGBOX_DEFAULT
release     
end

CeladonCity_Hotel_Text_2:
.string "Why?\n"
    .string "Why did she bring her brother?$"



CeladonCityHotel3::
lock     
faceplayer     
msgbox CeladonCity_Hotel_Text_3, MSGBOX_DEFAULT
release     
end

CeladonCity_Hotel_Text_3:
	.string "Don't come a step closer, you thief!$"



CeladonCityHotel4::
lock     
faceplayer     
msgbox CeladonCity_Hotel_Text_4, MSGBOX_DEFAULT
release     
end

CeladonCity_Hotel_Text_4:
	.string "My bigger sister says that I shouldn't\n"
	.string "talk to people like you.$"
