LavenderRadioP5_MapScripts::
	.byte 0

LavenderRadioP5_2::
lock     
faceplayer     
msgbox LavenderRadioP5_Text_2, MSGBOX_DEFAULT
release     
end

LavenderRadioP5_Text_2:
.string "Todos los trabajadores más allá del P1\n"
.string "en esta torre están sometidos a\l"
.string "estricto juramento. Nuestro contrato\l"
.string "de confidencialidad nos impide hablar\l"
.string "de todo lo que aquí veamos, incluso del\l"
.string "TEAM ROCKET.$"




LavenderRadioP5_3::
lock     
faceplayer     
msgbox LavenderRadioP5_Text_3, MSGBOX_DEFAULT
release     
end

LavenderRadioP5_Text_3:
.string "La mayoría de las eficiencias modernas\n"
.string "son castigos diferidos.$"



LavenderRadioP5_4::
lock     
faceplayer     
msgbox LavenderRadioP5_Text_4, MSGBOX_DEFAULT
release     
end

LavenderRadioP5_Text_4:
.string "Algo me dice que el fenómeno FUERTE\n"
.string "VÍNCULO tiene aún algo de magia por\l"
.string "ofrecernos, y sorprender a nuestra\l"
.string "comunidad científica de nuevo.$"




LavenderRadioP5_6::
lock     
faceplayer     
msgbox LavenderRadioP5_Text_6, MSGBOX_DEFAULT
release     
end

LavenderRadioP5_Text_6:
.string "La tecnología puede degradar cada\n"
.string "aspecto de la vida de un incauto,\l"
.string "convenciéndolo de que se está\l"
.string "haciendo más <eficiente>.$"




LavenderRadioP5_7::
lock     
faceplayer     
msgbox LavenderRadioP5_Text_7, MSGBOX_DEFAULT
release     
end

LavenderRadioP5_Text_7:
.string "Es mucho más fácil esforzarse por\n"
.string "lograr la perfección cuando nunca se\l"
.string "está aburrido. Aquí nunca nos\l"
.string "aburrimos, y lo mejor es que ahí fuera\l"
.string "creen que nada de esto existe.$"





LavenderRadioP5_8::
lock     
faceplayer     
msgbox LavenderRadioP5_Text_8, MSGBOX_DEFAULT
release     
end

LavenderRadioP5_Text_8:
.string "En la ciencia necesitas entender el\n"
.string "mundo; en los negocios necesitas que\l"
.string "no lo entiendan los demás.$"





LavenderRadioP5_9::
lock     
faceplayer     
msgbox LavenderRadioP5_Text_9, MSGBOX_DEFAULT
release     
end

LavenderRadioP5_Text_9:
.string "Podríamos considerar esta una nueva\n"
.string "BASE ROCKET encubierta, de ser así,\l"
.string "sería la cuarta en KANTO, y la octava si\l"
.string "tenemos en cuenta las regiones de\l"
.string "JOHTO y HOENN.$"




LavenderRadioP5_10::
lock     
faceplayer     
msgbox LavenderRadioP5_Text_10, MSGBOX_DEFAULT
release     
end

LavenderRadioP5_Text_10:
.string "Gracias a las ondas de radio, vamos a\n"
.string "convertir KANTO en la mayor potencia\l"
.string "tecnológica del mundo POKÉMON.$"




LavenderRadioP5_11::
lock     
faceplayer     
msgbox LavenderRadioP5_Text_11, MSGBOX_DEFAULT
release     
end

LavenderRadioP5_Text_11:
.string "Siento cierto vacío, al saber que estoy\n"
.string "en un lugar que para la mayoría no\l"
.string "existe, este escritorio, todo lo que\l"
.string "hay a mi alrededor, no existe sobre el\l"
.string "papel, sin embargo, en el futuro dará\l"
.string "forma a todo el mundo conocido.$"



LavenderRadioP5_EventScript_Cientifico::
	trainerbattle_single TRAINER_CRISTIN_4, LavenderRadioP5_Text_CientificoIntro, LavenderRadioP5_Text_CientificoDefeated
	msgbox LavenderRadioP5_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end

LavenderRadioP5_OndaToxica::
lock     
faceplayer  
goto_if_set FLAG_NUEVA_819, LavenderRadioP5_OndaToxica_Despues
msgbox LavenderRadioP5_OndaToxica_Texto_1, MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM63
msgbox LavenderRadioP5_OndaToxica_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
setflag FLAG_NUEVA_819
release     
end

LavenderRadioP5_OndaToxica_Despues::
msgbox LavenderRadioP5_OndaToxica_Texto_2, MSGBOX_NPC
release
end

LavenderRadioP5_OndaToxica_Texto_2:
.string "BOMBA LODO ya era potente, pero ONDA\n"
	.string "TOXICA logra serlo incluso más.\l"
	.string "Los nuevos tiempos, ¿no?$"

LavenderRadioP5_OndaToxica_Texto_1.1:
.string "¡¡{PLAYER} obtuvo la MT93 ONDA\n"
	.string "TOXICA de manos de científico!!$"

LavenderRadioP5_OndaToxica_Texto_1:
.string "Este lugar optimiza un 5% todo lo que\n"
	.string "conocíamos hasta ahora. Los\l"
	.string "movimientos POKÉMON no son menos.\l"
	.string "Mira.$"

