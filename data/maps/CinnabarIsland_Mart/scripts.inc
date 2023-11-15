CinnabarIsland_Mart_MapScripts::
	.byte 0

CinnabarIslandMart1::
end



CinnabarIslandMart2::
lock     
faceplayer     
msgbox CinnabarIsland_Mart_Text_2, MSGBOX_DEFAULT
release     
end

CinnabarIsland_Mart_Text_2:
.string "Don't they have X ATTACK?\p"
    .string "I like it because it raises the\n"
    .string "ATTACK stat in battle.$"



CinnabarIslandMart3::
lock     
faceplayer     
msgbox CinnabarIsland_Mart_Text_3, MSGBOX_DEFAULT
release     
end

CinnabarIsland_Mart_Text_3:
.string "It never hurts to have extra items.\n"
    .string "You never know what might happen.$"
