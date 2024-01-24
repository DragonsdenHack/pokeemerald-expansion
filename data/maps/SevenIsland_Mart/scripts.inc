SevenIsland_Mart_MapScripts::
	.byte 0

SevenIslandMart1::
end



SevenIslandMart2::
lock     
faceplayer     
msgbox SevenIsland_Mart_Text_2, MSGBOX_DEFAULT
release     
end

SevenIsland_Mart_Text_2:
	.string "All right, I'm ready to explore the\n"
	.string "RUINS.$"



SevenIslandMart3::
lock     
faceplayer     
msgbox SevenIsland_Mart_Text_3, MSGBOX_DEFAULT
release     
end

SevenIsland_Mart_Text_3:
	.string "POKÉMON have their own personalities,\n"
	.string "similar to anyone else. My PIKACHU, for\l"
	.string "instance, has an ACTIVE nature and\l"
	.string "really doesn't stop.$"



SevenIslandMart4::
lock     
faceplayer     
msgbox SevenIsland_Mart_Text_4, MSGBOX_DEFAULT
release     
end

SevenIsland_Mart_Text_4:
	.string "I have to fish on SEVEN ISLAND. It's the\n"
	.string "one I need to complete my route\l"
	.string "through ARCHI7. But first, I'm going to\l"
	.string "get a few POKé BALLS.$"
