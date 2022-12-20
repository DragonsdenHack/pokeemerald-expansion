CinnabarMansionS1_MapScripts::
	.byte 0

CinnabarMansionS1_EventScript_Cientifico::
	trainerbattle_single TRAINER_CINDY_1, CinnabarMansionS1_Text_CientificoIntro, CinnabarMansionS1_Text_CientificoDefeated
	msgbox CinnabarMansionS1_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarMansionS1_1::
lock     
faceplayer     
msgbox CinnabarMansionS1_Text_1, MSGBOX_DEFAULT
release     
end

CinnabarMansionS1_Text_1:
.string "Este lugar quedó reducido a añicos\n"
.string "después de que MEWTWO escapara,\l"
.string "muchas cosas se perdieron aquí,\l"
.string "pero la grandeza de lo aquí\l"
.string "acontecido sigue viva en nuestras\l"
.string "mentes.$"



CinnabarMansionS1_3::
lock     
faceplayer     
msgbox CinnabarMansionS1_Text_3, MSGBOX_DEFAULT
release     
end

CinnabarMansionS1_Text_3:
.string "Nada soporta el paso del tiempo,\n"
.string "dentro de 3 años este lugar\l"
.string "probablemente no exista, aún más,\l"
.string "toda ISLA CANELA podría\l"
.string "desaparecer engullida por su\l"
.string "volcán, pero nada de eso podrá\l"
.string "deshacer lo que aquí ocurrió, ya\l"
.string "nos hemos ganado nuestro hueco en\l"
.string "la infinidad del tiempo y el\l"
.string "universo.$"



CinnabarMansionS1_4::
lock     
faceplayer     
msgbox CinnabarMansionS1_Text_4, MSGBOX_DEFAULT
release     
end

CinnabarMansionS1_Text_4:
.string "Sino acaban contigo, puedes\n"
.string "recuperarte de los más duros\l"
.string "golpes, y volver incluso más\l"
.string "fuerte que antes, la forma en que\l"
.string "hemos mantenido este lugar activo\l"
.string "y hemos por fin acabado nuestro\l"
.string "gran proyecto a pesar de todo lo\l"
.string "que ocurrió es prueba de ello,\l"
.string "nadie, siquiera tú, nos arrebatará\l"
.string "este hecho.$"
