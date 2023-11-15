OneIsland_House1_MapScripts::
	.byte 0

OneIslandHouse1_1::
lock     
faceplayer     
msgbox OneIsland_House1_Text_1, MSGBOX_DEFAULT
release     
end

OneIsland_House1_Text_1:
.string "Let me think… When was the last\n"
    .string "time MT. EMBER erupted?$"



OneIslandHouse1_2::
lock     
faceplayer     
msgbox OneIsland_House1_Text_2, MSGBOX_DEFAULT
release     
end

OneIsland_House1_Text_2:
.string "On sunny days, I step out and gaze\n"
    .string "upon the volcano.\p"
    .string "That's my daily routine.$"
