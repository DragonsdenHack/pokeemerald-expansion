OneIsland_House1_MapScripts::
	.byte 0

OneIslandHouse1-1::
lock     
faceplayer     
msgbox Text_1, MSGBOX_DEFAULT
release     
end

Text_1:
.string "Mmm, no consigo acordarme...\n"
.string "¿Cuándo fue la última vez que\l"
.string "entró en erupción el MT. ASCUAS?$"



OneIslandHouse1-2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "Cuando hace buen día, salgo\n"
.string "a contemplar el volcán.\p"
.string "Es lo que hago siempre.$"
