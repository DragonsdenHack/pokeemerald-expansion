SixIsland_MapScripts::
	.byte 0

SixIsland1::
lock     
faceplayer     
msgbox SixIsland_Text_1, MSGBOX_DEFAULT
release     
end

SixIsland_Text_1:
.string "Si sigues por aquí, llegarás a la\n"
.string "VÍA ACUÁTICA.\p"
.string "Cuando alcances la VÍA,\n"
.string "ve hacia el sur si quieres ir\l"
.string "al VALLE de las RUINAS.$"


SixIsland2::
lock     
faceplayer     
msgbox SixIsland_Text_2, MSGBOX_DEFAULT
release     
end

SixIsland_Text_2:
.string "Al estar tan lejos de las ciudades,\n"
.string "por la noche el cielo se ve muy\l"
.string "despejado.$"
