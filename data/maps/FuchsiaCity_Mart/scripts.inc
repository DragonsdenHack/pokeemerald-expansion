FuchsiaCity_Mart_MapScripts::
	.byte 0

FuchsiaCityMart1::
end



FuchsiaCityMart2::
lock     
faceplayer     
msgbox FuchsiaCity_Mart_Text_2, MSGBOX_DEFAULT
release     
end

FuchsiaCity_Mart_Text_2:
	.string "Do you have any pennants\n"
	.string "promoting the SAFARI ZONE?\p"
	.string "How about some paper lanterns?\n"
	.string "And calendars?$"



FuchsiaCityMart3::
lock     
faceplayer     
msgbox FuchsiaCity_Mart_Text_3, MSGBOX_DEFAULT
release     
end

FuchsiaCity_Mart_Text_3:
	.string "Did you try X SPEED?\n"
	.string "It speeds up a POKéMON in battle.$"
