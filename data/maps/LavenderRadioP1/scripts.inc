LavenderRadioP1_MapScripts::
	.byte 0


LavenderRadioP1_1::
lock     
faceplayer     
msgbox LavenderRadioP1_Text_1, MSGBOX_DEFAULT
release     
end

LavenderRadioP1_Text_1:
.string "También trabajo para SILPH, me han\n"
.string "trasladado aquí para organizar no sé\l"
.string "qué documentos sobre las ondas\l"
.string "magnéticas. Aunque no puedo subir a\l"
.string "ver lo que están haciendo en los pisos\l"
.string "superiores.$"



LavenderRadioP1_2::
lock     
faceplayer     
msgbox LavenderRadioP1_Text_2, MSGBOX_DEFAULT
release     
end

LavenderRadioP1_Text_2:
.string "No ha bastado más que mencionar la\n"
.string "palabra <seguridad>, y ya todos\l"
.string "asienten como corderitos. La palabra\l"
.string "se ha convertido en un comodín del\l"
.string "mundo moderno para justificar\l"
.string "cualquier restricción, por\l"
.string "desproporcionada que sea.$"




LavenderRadioP1_3::
lock     
faceplayer     
msgbox LavenderRadioP1_Text_3, MSGBOX_DEFAULT
release     
end

LavenderRadioP1_Text_3:
.string "Las tumbas han sido trasladadas al\n"
.string "cementerio del sur, han construido\l"
.string "unas enormes catacumbas subterráneas\l"
.string "para albergar todas.$"




LavenderRadioP1_4::
lock     
faceplayer     
msgbox LavenderRadioP1_Text_4, MSGBOX_DEFAULT
release     
end

LavenderRadioP1_Text_4:
.string "A cierta frecuencia las ondas de radio\n"
.string "con las que trabajamos convierten en\l"
.string "<Shinys> a los POKÉMON expuestos a\l"
.string "ella. Aquí solo nos interesa el\l"
.string "incremento puro de STATS BASE, pero\l"
.string "esta utilidad puede estar bien para dar\l"
.string "algún que otro susto.$"




LavenderRadioP1_5::
lock     
faceplayer     
msgbox LavenderRadioP1_Text_5, MSGBOX_DEFAULT
release     
end

LavenderRadioP1_Text_5:
.string "La tragedia es que gran parte de lo que\n"
.string "consideras aleatorio está bajo tu\l"
.string "control y, lo que es peor, también\l"
.string "sucede a la inversa.$"




LavenderRadioP1_6::
lock     
faceplayer     
msgbox LavenderRadioP1_Text_6, MSGBOX_DEFAULT
release     
end

LavenderRadioP1_Text_6:
.string "¿Cómo crees que reaccionaría ese tal\n"
.string "ROJO si pudiera subir aquí y ver al\l"
.string "supuestamente disuelto TEAM ROCKET\l"
.string "campar a sus anchas? ¡Exacto! ¡Toda su\l"
.string "realidad se vendría abajo! ¡De un\l"
.string "plumazo vería el mundo tal y como es!$"




LavenderRadioP1_7::
lock     
faceplayer     
msgbox LavenderRadioP1_Text_7, MSGBOX_DEFAULT
release     
end

LavenderRadioP1_Text_7:
.string "NIDOKING y NIDOQUEEN ya han llegado a\n"
.string "su máximo potencial, gracias a sus\l"
.string "formas X e Y. Tal vez si uniéramos sus\l"
.string "genes podríamos lograr algo incluso\l"
.string "mejor…$"



LavenderRadioP1_EventScript_Cientifico::
	trainerbattle_single TRAINER_CRISTIN_2, LavenderRadioP1_Text_CientificoIntro, LavenderRadioP1_Text_CientificoDefeated
	msgbox LavenderRadioP1_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



LavenderRadioP1Documento_100::
msgbox LavenderRadioP1Documento_Text_100, MSGBOX_SIGN   
end

LavenderRadioP1Documento_Text_100:
.string "2o Ventas & Producción$"



LavenderRadioP1Documento_101::
msgbox LavenderRadioP1Documento_Text_101, MSGBOX_SIGN   
end

LavenderRadioP1Documento_Text_101:
.string "-Con la voluntad de la inmadurez se\n"
	.string "pueden conseguir grandes cosas-.$"
