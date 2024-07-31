Cherry_House1_MapScripts::
	.byte 0

CherryHouse1_1::
lock     
faceplayer     
msgbox CherryHouse1_Text_1, MSGBOX_DEFAULT
release     
end

CherryHouse1_Text_1:
	.string "You'd sooner catch wind of a CYNDAQUIL\n"
	.string "or CHIKORITA around these parts, but\l"
	.string "just the other day, I thought I'd seen a\l"
	.string "TOTODILE at the pond up north.$"



CherryHouse1_2::
lock     
faceplayer     
msgbox CherryHouse1_Text_2, MSGBOX_DEFAULT
release     
end

CherryHouse1_Text_2:
	.string "We used to live in GOLDENROD CITY, but\n"
	.string "it's just gotten way too crowded these\l"
	.string "past months. Moving here was a good\l"
	.string "call. It's just the tranquility we need\l"
	.string "to find ourselves.$"
