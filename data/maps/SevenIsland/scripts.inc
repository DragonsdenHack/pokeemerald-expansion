SevenIsland_MapScripts::
	.byte 0

SevenIsland1::
end


SevenIsland2::
lock     
faceplayer     
msgbox SevenIsland_Text_2, MSGBOX_DEFAULT
release     
end

SevenIsland_Text_2:
.string "A estas islas las llamamos ARCHI7\n"
.string "porque son siete, je.\p"
.string "O, por lo menos, es lo que la\n"
.string "gente joven cree.\p"
.string "Pero en realidad es porque las\n"
.string "islas se crearon en siete días.$"


SevenIsland3::
lock     
faceplayer     
msgbox SevenIsland_Text_3, MSGBOX_DEFAULT
release     
end

SevenIsland_Text_3:
.string "Esta isla es prácticamente virgen,\n"
.string "apenas ha sufrido modificaciones.\p"
.string "Por ello, es peligroso y difícil\n"
.string "hacer escalada por aquí.$"
