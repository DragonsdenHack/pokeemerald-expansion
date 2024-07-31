Pass_NationalPark_MapScripts::
	.byte 0

PassNationalPark1::
lock     
faceplayer     
msgbox Pass_NationalPark_Text_1, MSGBOX_DEFAULT
release     
end

Pass_NationalPark_Text_1:
	.string "The NATIONAL PARK is the perfect place\n"
	.string "to clear your mind from your busy life.$"



PassNationalPark2::
lock     
faceplayer     
msgbox Pass_NationalPark_Text_2, MSGBOX_DEFAULT
release     
end

Pass_NationalPark_Text_2:
	.string "Once, I heard KURT talk about a BUG\n"
	.string "TYPE POKÉMON, which is even more potent\l"
	.string "than HERACROSS, PINSIR, or SCIZOR. It\l"
	.string "was from a distant region. It has a very\l"
	.string "slow speed but is outstanding in\l"
	.string "everything else.$"



PassNationalPark3::
lock     
faceplayer     
msgbox Pass_NationalPark_Text_3, MSGBOX_DEFAULT
release     
end

Pass_NationalPark_Text_3:
	.string "Isn't this the ideal place to have a\n"
	.string "picnic with some friends?$"
