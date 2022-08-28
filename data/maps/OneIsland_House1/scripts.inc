OneIsland_House1_MapScripts::
	.byte 0

OneIslandHouse1_1::
lock     
faceplayer     
msgbox OneIsland_House1_Text_1, MSGBOX_DEFAULT
release     
end

OneIsland_House1_Text_1:
.string "Mmm, no consigo acordarme...\n"
.string "¿Cuándo fue la última vez que\l"
.string "entró en erupción el MT. ASCUAS?$"



OneIslandHouse1_2::
lock     
faceplayer     
msgbox OneIsland_House1_Text_2, MSGBOX_DEFAULT
release     
end

OneIsland_House1_Text_2:
.string "Cuando hace buen día, salgo\n"
.string "a contemplar el volcán.\p"
.string "Es lo que hago siempre.$"
