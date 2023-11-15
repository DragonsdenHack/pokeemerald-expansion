OneIsland_MapScripts::
	.byte 0

OneIsland1::
lock     
faceplayer     
msgbox OneIsland_Text_1, MSGBOX_DEFAULT
release     
end

OneIsland_Text_1:
.string "¿Cómo?\n"
.string "¿KANTO?\l"
.string "¡Esto es isla prima chico!\l"
.string "¡Te has equivocado de destino!\l"
.string "¡No te preocupes, justo iba para\l"
.string "KANTO!\l"
.string "¡Tienes suerte de que pueda\l"
.string "llevarte!$"


OneIsland2::
lock     
faceplayer     
msgbox OneIsland_Text_2, MSGBOX_DEFAULT
release     
end

OneIsland_Text_2:
.string "Here we are on an island smack in\n"
    .string "the middle of nowhere.\p"
    .string "We're lucky to have an upstanding\n"
    .string "young man like CELIO here.\p"
    .string "My granddaughter was in a tizzy\n"
    .string "over CELIO's friend.\p"
    .string "Something about a famous\n"
    .string "POKéMANIAC?\p"
    .string "I'm not sure what that means, but\n"
    .string "CELIO is quite the man!$"


OneIsland3::
lock     
faceplayer     
msgbox OneIsland_Text_3, MSGBOX_DEFAULT
release     
end

OneIsland_Text_3:
.string "Hi, sight-seeing, are you?\n"
    .string "Isn't the warm climate here great?$"

OneIslandDocumento_100::
msgbox OneIslandDocumento_Text_100, MSGBOX_SIGN   
end

OneIslandDocumento_Text_100:
.string "Expanding the POKéMON World!\n"
    .string "POKéMON NET CENTER$"



OneIslandDocumento_101::
msgbox OneIslandDocumento_Text_101, MSGBOX_SIGN   
end

OneIslandDocumento_Text_101:
.string "ONE ISLAND\n"
    .string "Friends Gather at Knot Island$"
