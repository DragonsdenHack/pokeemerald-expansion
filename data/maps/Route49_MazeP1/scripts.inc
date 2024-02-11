Route49_MazeP1_MapScripts::
	.byte 0

Route49_MazeP1_2::
lock     
faceplayer     
msgbox Route49_MazeP1_Text2, MSGBOX_DEFAULT
release     
end

Route49_MazeP1_Text2:
.string "La PIEDRA DORADA… ¿De modo que\n"
.string "obtuviste una? Reacciona ante\l"
.string "determinados POKÉMON de JOHTO, que\l"
.string "antes evolucionaban, por la mera\l"
.string "exposición a un medio ambiente que ya\l"
.string "no existe, ni siquiera aquí.$"



Route49_MazeP1_3::
lock     
faceplayer     
msgbox Route49_MazeP1_Text3, MSGBOX_DEFAULT
release     
end

Route49_MazeP1_Text3:
.string "Trabajamos demasiado duro, lo\n"
.string "intentamos con demasiado ímpetu, pero\l"
.string "el secreto de la plenitud está ahí,\l"
.string "mirándonos fijamente.$"



Route49_MazeP1_4::
lock     
faceplayer     
msgbox Route49_MazeP1_Text4, MSGBOX_DEFAULT
release     
end

Route49_MazeP1_Text4:
.string "Sois buenos, pero podríais ser\n"
.string "magníficos, tú y tu amiga. Aún os falta\l"
.string "camino por recorrer.$"



Route49_MazeP1_5::
lock     
faceplayer     
msgbox Route49_MazeP1_Text5, MSGBOX_DEFAULT
release     
end

Route49_MazeP1_Text5:
.string "Nunca fue tan estúpida el águila\n"
.string "imperial que aceptó las enseñanzas del\l"
.string "cuervo mugriento.$"



Route49MazeP1_EventScript_Sabio::
	trainerbattle_single TRAINER_TRAINER_187, Route49MazeP1_Text_SabioIntro, Route49MazeP1_Text_SabioDefeated
	msgbox Route49MazeP1_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end



Route49MazeP1_EventScript_Sabio2::
	trainerbattle_single TRAINER_TRAINER_188, Route49MazeP1_Text_Sabio2Intro, Route49MazeP1_Text_Sabio2Defeated
	msgbox Route49MazeP1_Text_Sabio2PostBattle, MSGBOX_AUTOCLOSE
	end



Route49MazeP1Documento_100::
lock
compare VAR_VERDANTURF_TOWN_STATE, 9
goto_if_lt RocketHideout7FDocumento_Esperando
showmonpic SPECIES_IKARY, 10, 3  
playmoncry SPECIES_BARRASKEWDA, CRY_MODE_ENCOUNTER 
msgbox Route49MazeP1Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

Route49MazeP1Documento_Text_100:
.string "IKARY:\p"
	.string "PS: 65\n"
	.string "ATAQUE: 125\l"
	.string "DEFENSA: 95\l"
	.string "ATAQUE ESPECIAL: 35\l"
	.string "DEFENSA ESPECIAL: 75\l"
	.string "VELOCIDAD: 95\l"
	.string "TOTAL: 490\p"
	.string "TIPO: AGUA/ACERO\n"
	.string "HABILIDAD: ALLANAMIENTO\l"
	.string "Comparte parentesco con la línea\l"
	.string "evolutiva de CARVANHA, aunque su\l"
	.string "cerebro es mucho más primitivo. Su TIPO\l"
	.string "ACERO lo convierte en un rival temible.\l"
	.string "Se enfrentará a cualquier rival con\l"
	.string "total descaro, sin medir consecuencias\l"
	.string "ni nada que perder, por ello todos\l"
	.string "suelen apartarse a su paso.$"



Route49MazeP1Documento_101::
lock
compare VAR_VERDANTURF_TOWN_STATE, 9
goto_if_lt RocketHideout7FDocumento_Esperando
showmonpic SPECIES_PURAKKUSU, 10, 3  
playmoncry SPECIES_PINSIR, CRY_MODE_ENCOUNTER 
msgbox Route49MazeP1Documento_Text_101, MSGBOX_DEFAULT
hidemonpic
release     
end

Route49MazeP1Documento_Text_101:
.string "PURAKKUSU:\p"
	.string "PS: 85\n"
	.string "ATAQUE: 135\l"
	.string "DEFENSA: 110\l"
	.string "ATAQUE ESPECIAL: 45\l"
	.string "DEFENSA ESPECIAL: 80\l"
	.string "VELOCIDAD: 95\l"
	.string "TOTAL: 550\p"
	.string "TIPO: BICHO/VENENO\n"
	.string "HABILIDAD: INTIMIDACIÓN\l"
	.string "De la familia de PINSIR, se cree que es\l"
	.string "una antigua adaptación que logró\l"
	.string "inclinar la rivalidad\l"
	.string "PINSIR-HERACROSS, debido al aumento\l"
	.string "de su poder físico y la ganancia de\l"
	.string "INTIMIDACIÓN como HABILIDAD. Sin\l"
	.string "embargo, la mayoría de PINSIR no\l"
	.string "podían sostener esta adaptación en\l"
	.string "sus cuerpos y acabó extinguiéndose,\l"
	.string "quedan unos pocos en zonas muy\l"
	.string "concretas.$"
