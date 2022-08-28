Pass_Route42_MapScripts::
	.byte 0

PassRoute42_1::
lock     
faceplayer     
msgbox Pass_Route42_Text_1, MSGBOX_DEFAULT
release     
end

Pass_Route42_Text_1:
.string "Puede ver al gran ANÍBAL\n"
.string "entrenarse en las profundidades\l"
.string "del MONTE MORTERO.\l"
.string "¡Sus POKÉMON tienen una fuerza\l"
.string "impresionante!$"



PassRoute42_2::
lock     
faceplayer     
msgbox Pass_Route42_Text_2, MSGBOX_DEFAULT
release     
end

Pass_Route42_Text_2:
.string "Mi arte aún no es digno de\n"
.string "reproducir ese atardecer\l"
.string "cerniéndose bajo la imponente\l"
.string "TORRE CAMPANA de CIUDAD IRIS…\l"
.string "Creo que volveré en un par de\l"
.string "años.$"



PassRoute42_3::
lock     
faceplayer     
msgbox Pass_Route42_Text_3, MSGBOX_DEFAULT
release     
end

Pass_Route42_Text_3:
.string "El MONTE MORTERO es como un gran\n"
.string "laberinto, algunos se pierden\l"
.string "allí, otros lo usan para entrenar\l"
.string "y fortalecerse.$"
