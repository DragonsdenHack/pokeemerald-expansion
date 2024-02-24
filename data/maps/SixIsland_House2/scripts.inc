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
.string "Play with POKÉMON lots and live\n"
    .string "a long life!\p"
    .string "Take AGATHA, for example.\p"
    .string "She set a record for being the\n"
    .string "oldest-ever ELITE FOUR member.\p"
    .string "She spurs me to do bigger things.$"
