SixIsland_House2_MapScripts::
	.byte 0

SixIslandHouse2_1::
end



SixIslandHouse2_2::
lock     
faceplayer     
msgbox SixIsland_House2_Text_2, MSGBOX_DEFAULT
release     
end

SixIsland_House2_Text_2:
.string "I should buy some MAIL and write\n"
    .string "him a letter…$"



SixIslandHouse2_3::
lock     
faceplayer     
msgbox SixIsland_House2_Text_3, MSGBOX_DEFAULT
release     
end

SixIsland_House2_Text_3:
	.string "Spiele viel mit POKéMON und führe ein\n"
	.string "langes Leben! Nimm z.B. AGATHE! Sie hält\l"
	.string "den Rekord als ältestes Mitglied der\l"
	.string "TOP VIER. Sie ist mein Ansporn nach\l"
	.string "Größerem zu streben.$"
