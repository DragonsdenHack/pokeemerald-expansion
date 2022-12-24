Route49_MazeP3_MapScripts::
	.byte 0

Route49_MazeP3_3::
lock     
faceplayer     
msgbox Route49_MazeP3_Text3, MSGBOX_DEFAULT
release     
end

Route49_MazeP3_Text3:
.string "La frugalidad fortalece al espíritu en\n"
.string "la búsqueda de la virtud.$"



Route49_MazeP3_4::
lock     
faceplayer     
msgbox Route49_MazeP3_Text4, MSGBOX_DEFAULT
release     
end

Route49_MazeP3_Text4:
.string "El techo de los POKÉMON ahora es mayor,\n"
.string "solo los más sabios y experimentados lo\l"
.string "habrán notado. ¿Tú lo has sentido ya?$"



Route49_MazeP3_5::
lock     
faceplayer     
msgbox Route49_MazeP3_Text5, MSGBOX_DEFAULT
release     
end

Route49_MazeP3_Text5:
.string "Por miedo a equivocarse cometen el peor\n"
.string "error: no darse el lujo de poder\l"
.string "acertar o equivocarse.$"



Route49_MazeP3_8::
lock     
faceplayer     
msgbox Route49_MazeP3_Text8, MSGBOX_DEFAULT
release     
end

Route49_MazeP3_Text8:
.string "Tu actitud está por encima de todo lo\n"
.string "demás. Es capaz de cambiar tendencias\l"
.string "que parecen inescapables.$"




Route49_MazeP3_9::
lock     
faceplayer     
msgbox Route49_MazeP3_Text9, MSGBOX_DEFAULT
release     
end

Route49_MazeP3_Text9:
.string "ENTEI, RAIKOU y SUICUNE. Sus nombres\n"
.string "no son casualidad, son una extensión\l"
.string "de otros POKÉMON, más antiguos.$"



Route49MazeP3_EventScript_Sabio::
	trainerbattle_single TRAINER_TRAINER_27, Route49MazeP3_Text_SabioIntro, Route49MazeP3_Text_SabioDefeated
	msgbox Route49MazeP3_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end



Route49MazeP3_EventScript_Sabio2::
	trainerbattle_single TRAINER_TRAINER_28, Route49MazeP3_Text_Sabio2Intro, Route49MazeP3_Text_Sabio2Defeated
	msgbox Route49MazeP3_Text_Sabio2PostBattle, MSGBOX_AUTOCLOSE
	end



Route49MazeP3Documento_100::
lock     
showmonpic SPECIES_EN, 10, 3  
playmoncry SPECIES_FLAREON, CRY_MODE_ENCOUNTER 
msgbox Route49MazeP3Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

Route49MazeP3Documento_Text_100:
.string "EN:\p"
	.string "PS: 75\n"
	.string "ATAQUE: 152\l"
	.string "DEFENSA: 70\l"
	.string "ATAQUE ESPECIAL: 137\l"
	.string "DEFENSA ESPECIAL: 116\l"
	.string "VELOCIDAD: 85\l"
	.string "TOTAL: 635\p"
	.string "FUEGO\n"
	.string "POKÉMON milenario, legado de generación\l"
	.string "en generación al GRAN MAESTRO del\l"
	.string "tercer pagoda de JOHTO. Una vez fue un\l"
	.string "FLAREON, cuyo vínculo con su\l"
	.string "ENTRENADOR alcanzó el equilibrio\l"
	.string "perfecto.$"



Route49MazeP3Documento_101::
lock     
showmonpic SPECIES_SUI, 10, 3  
playmoncry SPECIES_VAPOREON, CRY_MODE_ENCOUNTER 
msgbox Route49MazeP3Documento_Text_101, MSGBOX_DEFAULT
hidemonpic
release     
end

Route49MazeP3Documento_Text_101:
.string "SUI:\p"
	.string "PS: 152\n"
	.string "ATAQUE: 70\l"
	.string "DEFENSA: 85\l"
	.string "ATAQUE ESPECIAL: 116\l"
	.string "DEFENSA ESPECIAL: 137\l"
	.string "VELOCIDAD: 75\l"
	.string "TOTAL: 635\p"
	.string "AGUA\n"
	.string "POKÉMON milenario, legado de generación\l"
	.string "en generación al GRAN MAESTRO del\l"
	.string "tercer pagoda de JOHTO. Una vez fue un\l"
	.string "VAPOREON, cuyo vínculo con su\l"
	.string "ENTRENADOR alcanzó el equilibrio\l"
	.string "perfecto.$"



Route49MazeP3Documento_102::
lock     
showmonpic SPECIES_RAI, 10, 3  
playmoncry SPECIES_RAIKOU, CRY_MODE_ENCOUNTER 
msgbox Route49MazeP3Documento_Text_102, MSGBOX_DEFAULT
hidemonpic
release     
end

Route49MazeP3Documento_Text_102:
.string "RAI:\p"
	.string "PS: 75\n"
	.string "ATAQUE: 85\l"
	.string "DEFENSA: 70\l"
	.string "ATAQUE ESPECIAL: 137\l"
	.string "DEFENSA ESPECIAL: 116\l"
	.string "VELOCIDAD: 152\l"
	.string "TOTAL: 635\p"
	.string "ELÉCTRICO\n"
	.string "POKÉMON milenario, legado de generación\l"
	.string "en generación al GRAN MAESTRO del\l"
	.string "tercer pagoda de JOHTO. Una vez fue un\l"
	.string "JOLTEON, cuyo vínculo con su\l"
	.string "ENTRENADOR alcanzó el equilibrio\l"
	.string "perfecto.$"
