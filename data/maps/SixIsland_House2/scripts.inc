SixIsland_House2_MapScripts::
	.byte 0

SixIslandHouse2_1::
end



SixIslandHouse2_2::
lock     
faceplayer     
msgbox SixIsland_House2_Text_2, MSGBOX_DEFAULT
release     
end

SixIsland_House2_Text_2:
.string "Debería escribir alguna CARTA{PAUSE 5}…{PAUSE 5}$"



SixIslandHouse2_3::
lock     
faceplayer     
msgbox SixIsland_House2_Text_3, MSGBOX_DEFAULT
release     
end

SixIsland_House2_Text_3:
.string "¡Juega con los POKéMON y vivirás\n"
.string "mucho tiempo!\p"
.string "Mira a AGATHA, por ejemplo.\p"
.string "Es el miembro de más edad\n"
.string "del ALTO MANDO.\p"
.string "¡A mí me anima a superarme\n"
.string "día a día!$"
