SixIsland_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_OnTransition
	.byte 0

SixIsland_OnTransition::
setflag FLAG_VISITED_SIX_ISLAND
end

SixIsland1::
lock     
faceplayer     
msgbox SixIsland_Text_1, MSGBOX_DEFAULT
release     
end

SixIsland_Text_1:
	.string "Laufe hier weiter und du erreichst den\n"
	.string "WASSERWEG. Wenn du noch weiter läufst,\l"
	.string "erreichst du das RUINENTAL.$"


SixIsland2::
lock     
faceplayer     
msgbox SixIsland_Text_2, MSGBOX_DEFAULT
release     
end

SixIsland_Text_2:
	.string "Wenn man so weit weg von der Stadt ist,\n"
	.string "sieht der Himmel fantastisch aus.$"



SixIslandDocumento_100::
msgbox SixIslandDocumento_Text_100, MSGBOX_SIGN   
end

SixIslandDocumento_Text_100:
.string "EILAND SECHS\n"
    .string "Schicksalsinsel der Alten Weisheit$"
