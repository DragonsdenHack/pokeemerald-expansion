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
