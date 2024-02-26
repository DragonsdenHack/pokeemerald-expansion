Pass_RuinsOfAlphNorth_MapScripts::
	.byte 0

RuinsOfAlphNorth1::
lock     
faceplayer     
msgbox RuinsOfAlphNorth_Text_1, MSGBOX_DEFAULT
release     
end

RuinsOfAlphNorth_Text_1:
	.string "It seems like we've only just begun to\n"
	.string "explore the true secrets hidden within\l"
	.string "this place.$"



RuinsOfAlphNorth2::
lock     
faceplayer     
msgbox RuinsOfAlphNorth_Text_2, MSGBOX_DEFAULT
release     
end

RuinsOfAlphNorth_Text_2:
	.string "The researchers at the RUINS OF ALPH\n"
	.string "didn't share any significant\l"
	.string "information with me; they seem to know\l"
	.string "even less than I do about these ruins!$"



RuinsOfAlphNorth3::
lock     
faceplayer     
msgbox RuinsOfAlphNorth_Text_3, MSGBOX_DEFAULT
release     
end

RuinsOfAlphNorth_Text_3:
	.string "Have you any idea who could've pulled\n"
	.string "off something like this? And why?$"
