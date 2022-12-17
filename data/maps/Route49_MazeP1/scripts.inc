Route49_MazeP1_MapScripts::
	.byte 0

Route49_MazeP1_2::
lock     
faceplayer     
msgbox Route49_MazeP1_Text2, MSGBOX_DEFAULT
release     
end

Route49_MazeP1_Text2:
.string "La piedra dorada… ¿De modo que\n"
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
	trainerbattle_single TRAINER_TRAINER_23, Route49MazeP1_Text_SabioIntro, Route49MazeP1_Text_SabioDefeated
	msgbox Route49MazeP1_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end



Route49MazeP1_EventScript_Sabio2::
	trainerbattle_single TRAINER_TRAINER_24, Route49MazeP1_Text_Sabio2Intro, Route49MazeP1_Text_Sabio2Defeated
	msgbox Route49MazeP1_Text_Sabio2PostBattle, MSGBOX_AUTOCLOSE
	end