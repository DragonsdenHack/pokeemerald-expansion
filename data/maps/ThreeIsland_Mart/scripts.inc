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
.string "Stimmt das?\p"
	.string "Das EINKAUFSZENTRUM in PRISMANIA CITY\n"
	.string "ist sehr viel größer als dieses\l"
	.string "Geschäft?$"



ThreeIslandMart3::
lock     
faceplayer     
msgbox ThreeIsland_Mart_Text_3, MSGBOX_DEFAULT
release     
end

ThreeIsland_Mart_Text_3:
	.string "Diese BIKER wollten den POKéMON-\n"
	.string "SUPERMARKT in Schutt und Asche legen.\p"
	.string "Ich bin froh, dass sie weg sind!$"



ThreeIslandMart4::
lock     
faceplayer     
msgbox ThreeIsland_Mart_Text_4, MSGBOX_DEFAULT
release     
end

ThreeIsland_Mart_Text_4:
	.string "Ich kaufe hier manchmal Medizin. Viele\n"
	.string "Leute heilen POKéMON mit BEEREN aus\l"
	.string "dem BEERENFORST. Schließlich sind\l"
	.string "BEEREN umsonst und ihr Vorrat ist\l"
	.string "unerschöpflich!$"
