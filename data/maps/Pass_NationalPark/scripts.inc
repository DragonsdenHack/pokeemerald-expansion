Pass_NationalPark_MapScripts::
	.byte 0

PassNationalPark1::
lock     
faceplayer     
msgbox Pass_NationalPark_Text_1, MSGBOX_DEFAULT
release     
end

Pass_NationalPark_Text_1:
	.string "If you need to clear your mind from your\n"
	.string "busy life, the NATIONAL PARK is the\l"
	.string "perfect place.$"



PassNationalPark2::
lock     
faceplayer     
msgbox Pass_NationalPark_Text_2, MSGBOX_DEFAULT
release     
end

Pass_NationalPark_Text_2:
	.string "Once I heard KURT talk about a BUG TYPE\n"
	.string "POKÉMON even more powerful than\l"
	.string "HERACROSS, PINSIR, or SCIZOR. It was\l"
	.string "from a distant region, very slow, but\l"
	.string "outstanding in everything else.$"



PassNationalPark3::
lock     
faceplayer     
msgbox Pass_NationalPark_Text_3, MSGBOX_DEFAULT
release     
end

Pass_NationalPark_Text_3:
	.string "Isn't this the ideal place to have a\n"
	.string "picnic with some friends?$"
