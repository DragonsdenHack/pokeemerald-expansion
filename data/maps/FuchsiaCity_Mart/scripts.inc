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
	.string "Du hast einen Wimpel aus der\n"
	.string "SAFARI-ZONE? Kein Programmheft\l"
	.string "oder einen Kalender?$"



FuchsiaCityMart3::
lock     
faceplayer     
msgbox FuchsiaCity_Mart_Text_3, MSGBOX_DEFAULT
release     
end

FuchsiaCity_Mart_Text_3:
	.string "Hast du schon einmal X-TEMPO\n"
	.string "ausprobiert? Dein POKéMON wird\l"
	.string "dadurch im Kampf schneller!$"
