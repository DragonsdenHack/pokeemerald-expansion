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
	.string "Haben Sie kein X-ANGRIFF?\n"
	.string "Es ist in Kämpfen sehr nützlich!$"



CinnabarIslandMart3::
lock     
faceplayer     
msgbox CinnabarIsland_Mart_Text_3, MSGBOX_DEFAULT
release     
end

CinnabarIsland_Mart_Text_3:
	.string "Man sollte immer einige Items\n"
	.string "bei sich tragen!$"
