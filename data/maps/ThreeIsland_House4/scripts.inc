ThreeIsland_House4_MapScripts::
	.byte 0

ThreeIslandHouse4_1::
lock     
faceplayer     
msgbox ThreeIsland_House4_Text_1, MSGBOX_DEFAULT
release     
end

ThreeIsland_House4_Text_1:
.string "Du solltest nie alleine in den\n"
    .string "BEERENFORST gehen!\p"
    .string "Warum?\n"
    .string "Es spukt dort!$"



ThreeIslandHouse4_2::
lock     
faceplayer     
msgbox ThreeIsland_House4_Text_2, MSGBOX_DEFAULT
release     
end

ThreeIsland_House4_Text_2:
	.string "Papa lügt mich ständig an und lässt\n"
	.string "mich nicht hinaus zum Spielen!$"
