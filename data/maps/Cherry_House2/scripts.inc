Cherry_House2_MapScripts::
	.byte 0

CherryHouse2_1::
lock     
faceplayer     
msgbox CherryHouse2_Text_1, MSGBOX_DEFAULT
release     
end

CherryHouse2_Text_1:
.string "LANCE is the best!\n"
.string "The savior of KANTO and JOHTO!\l"
.string "The TV just said it!$"



CherryHouse2_2::
lock     
faceplayer     
msgbox CherryHouse2_Text_2, MSGBOX_DEFAULT
release     
end

CherryHouse2_Text_2:
	.string "After LANCE won the war for JOHTO, one\n"
	.string "of the first measures he took was to\l"
	.string "give a television to every family, as a\l"
	.string "symbol of abundance and upcoming progress,\l"
	.string "and to keep the population informed.\p"
	.string "However, I'd rather that my son go out\n"
	.string "to play around the nearby routes more;\l"
	.string "we must keep the old traditions alive.$"
