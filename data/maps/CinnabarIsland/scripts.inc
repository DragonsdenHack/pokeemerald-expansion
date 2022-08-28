CinnabarIsland_MapScripts::
	.byte 0

CinnabardIsland1::
lock     
faceplayer     
msgbox CinnabarIsland_Text_1, MSGBOX_DEFAULT
release     
end

CinnabarIsland_Text_1:
.string "BLAINE, del GIMNASIO CANELA, es un\n"
.string "hombre raro que lleva años\l"
.string "viviendo aquí.\l"
.string "Ya vivía aquí desde antes de que\l"
.string "construyeran el LABORATORIO.$"


CinnabardIsland2::
lock     
faceplayer     
msgbox CinnabarIsland_Text_2, MSGBOX_DEFAULT
release     
end

CinnabarIsland_Text_2:
.string "Los científicos experimentan en el\n"
.string "edificio quemado.\l"
.string "Es el mismo edificio al que llaman\l"
.string "MANSIÓN POKÉMON.$"
