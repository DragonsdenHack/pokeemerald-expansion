PewterCity_House2_MapScripts::
	.byte 0

PewterCityHouse2_1::
lock     
faceplayer     
msgbox PewterCity_House2_Text_1, MSGBOX_DEFAULT
release     
end

PewterCity_House2_Text_1:
	.string "POKéMON sind einfacher zu fangen, wenn\n"
	.string "sie verletzt sind oder schlafen!\p"
	.string "Trotzdem gibt es keine\n"
	.string "Erfolgsgarantie!$"



PewterCityHouse2_2::
lock     
faceplayer     
msgbox PewterCity_House2_Text_2, MSGBOX_DEFAULT
release     
end

PewterCity_House2_Text_2:
	.string "Mit wachsender Erfahrung lernen\n"
	.string "POKéMON neue Attacken! Manche\l"
	.string "Attacken kann ihnen jedoch nur\l"
	.string "ein TRAINER beibringen!$"
