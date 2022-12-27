Route4_MapScripts::
	.byte 0


Route4_1::
lock     
faceplayer     
msgbox Route4_Text_1, MSGBOX_DEFAULT
release     
end

Route4_Text_1:
.string "¡Ouch!\n"
.string "¡Me tropecé con un POKÉMON rocoso,\l"
.string "GEODUDE!$"


Route4_2::
lock     
faceplayer     
msgbox Route4_Text_2, MSGBOX_DEFAULT
release     
end

Route4_Text_2:
.string "Si no fuera por la imposibilidad\n"
.string "de entrar a los GIMNASIOS POKÉMON,\l"
.string "quizás me plantearía incluso ser\l"
.string "RECLUTA ROCKET. Esa vida de\l"
.string "criminal al margen de la ley\l"
.string "siempre me llamó la atención,\l"
.string "¡pero prefiero retar a BROCK!$"


Route4_3::
end


Route4_4::
end


Route4_5::
lock     
faceplayer     
msgbox Route4_Text_5, MSGBOX_DEFAULT
release     
end

Route4_Text_5:
.string "¡Recuerda!\n"
.string "¡Más vale potencia sostenida,\l"
.string "constante y controlada que\l"
.string "desgaste permanentemente al rival\l"
.string "que el poder sin control!$"


Route4_6::
end



Route4_EventScript_Chica::
	trainerbattle_single TRAINER_CINDY_3, Route4_Text_ChicaIntro, Route4_Text_ChicaDefeated
	msgbox Route4_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end


Route4Documento_100::
msgbox Route4Documento_Text_100, MSGBOX_SIGN   
end

Route4Documento_Text_100:
	.string "MT. MOON\n"
	.string "Entrada al túnel$"



Route4Documento_101::
msgbox Route4Documento_Text_101, MSGBOX_SIGN   
end

Route4Documento_Text_101:
.string "RUTA 4\n"
	.string "MT. MOON - CIUDAD CELESTE$"
