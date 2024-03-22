Pass_Route43_MapScripts::
	.byte 0

PassRoute43_1::
lock     
faceplayer     
msgbox Pass_Route43_Text_1, MSGBOX_DEFAULT
release     
end

Pass_Route43_Text_1:
	.string "Welcome to the LAKE OF RAGE, don't\n"
	.string "forget to pick up everything and avoid\l"
	.string "leaving any trash during your stay.$"



PassRoute43_2::
lock     
faceplayer     
msgbox Pass_Route43_Text_2, MSGBOX_DEFAULT
release     
end

Pass_Route43_Text_2:
	.string "And I wonder, what could be down at the\n"
	.string "lake's depths? Any rare POKÉMON?$"



PassRoute43_3::
lock     
faceplayer     
msgbox Pass_Route43_Text_3, MSGBOX_DEFAULT
release     
end

Pass_Route43_Text_3:
	.string "Here there was wild, untouched life, a\n"
	.string "jungle on the border of the sea, never\l"
	.string "seen by those who float above an\l"
	.string "opaque surface.$"
