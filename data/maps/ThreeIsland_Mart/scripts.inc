ThreeIsland_Mart_MapScripts::
	.byte 0

ThreeIslandMart1::
end



ThreeIslandMart2::
lock     
faceplayer     
msgbox ThreeIsland_Mart_Text_2, MSGBOX_DEFAULT
release     
end

ThreeIsland_Mart_Text_2:
.string "Is it true?\p"
    .string "CELADON DEPT. STORE is several\n"
    .string "times bigger than this shop?$"



ThreeIslandMart3::
lock     
faceplayer     
msgbox ThreeIsland_Mart_Text_3, MSGBOX_DEFAULT
release     
end

ThreeIsland_Mart_Text_3:
.string "Those BIKERS were about to trash\n"
    .string "this POKéMON MART.\p"
    .string "Am I glad they decided to leave!$"



ThreeIslandMart4::
lock     
faceplayer     
msgbox ThreeIsland_Mart_Text_4, MSGBOX_DEFAULT
release     
end

ThreeIsland_Mart_Text_4:
.string "I sometimes buy medicine here.\p"
    .string "But a lot of people heal POKéMON\n"
    .string "with BERRIES from BERRY FOREST.\p"
    .string "After all, BERRIES are free and\n"
    .string "they never run out.$"
