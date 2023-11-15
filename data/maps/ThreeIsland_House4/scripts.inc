ThreeIsland_House4_MapScripts::
	.byte 0

ThreeIslandHouse4_1::
lock     
faceplayer     
msgbox ThreeIsland_House4_Text_1, MSGBOX_DEFAULT
release     
end

ThreeIsland_House4_Text_1:
.string "You must never, ever go out to\n"
    .string "the BERRY FOREST alone.\p"
    .string "Why?\n"
    .string "There are ghosts there.$"



ThreeIslandHouse4_2::
lock     
faceplayer     
msgbox ThreeIsland_House4_Text_2, MSGBOX_DEFAULT
release     
end

ThreeIsland_House4_Text_2:
.string "Papa keeps lying to me, and won't\n"
    .string "let me go out and play!$"
