Pass_RuinsOfAlphEast_MapScripts::
	.byte 0

RuinsOfAlphEast1::
lock     
faceplayer     
msgbox RuinsOfAlphEast_Text_1, MSGBOX_DEFAULT
release     
end

RuinsOfAlphEast_Text_1:
	.string "Those researchers at the RUINS OF ALPH\n"
	.string "are incompetent. They could spend 10\l"
	.string "years researching without reaching any\l"
	.string "conclusion.$"



RuinsOfAlphEast2::
lock     
faceplayer     
msgbox RuinsOfAlphEast_Text_2, MSGBOX_DEFAULT
release     
end

RuinsOfAlphEast_Text_2:
	.string "I thought I would find some rare\n"
	.string "POKÉMON in this place, but there's\l"
	.string "nothing interesting, just the remains\l"
	.string "of what once was. I can't brag about\l"
	.string "that to my friends in GOLDENROD CITY!$"



RuinsOfAlphEast3::
lock     
faceplayer     
msgbox RuinsOfAlphEast_Text_3, MSGBOX_DEFAULT
release     
end

RuinsOfAlphEast_Text_3:
	.string "Have you any idea who could've pulled\n"
	.string "off something like this? And why?$"
