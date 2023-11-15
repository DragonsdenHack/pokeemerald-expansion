SixIsland_MapScripts::
	.byte 0

SixIsland1::
lock     
faceplayer     
msgbox SixIsland_Text_1, MSGBOX_DEFAULT
release     
end

SixIsland_Text_1:
.string "Keep going this way and you'll get\n"
    .string "to the WATER PATH.\p"
    .string "Stay on that and you'll get to\n"
    .string "the RUIN VALLEY.$"


SixIsland2::
lock     
faceplayer     
msgbox SixIsland_Text_2, MSGBOX_DEFAULT
release     
end

SixIsland_Text_2:
.string "When you're this far away from the\n"
    .string "city, the sky at night is fantastic.$"



SixIslandDocumento_100::
msgbox SixIslandDocumento_Text_100, MSGBOX_SIGN   
end

SixIslandDocumento_Text_100:
.string "SIX ISLAND\n"
    .string "Fortune Island of Aged Wisdom$"
