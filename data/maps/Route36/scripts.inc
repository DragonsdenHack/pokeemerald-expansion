Route36_MapScripts::
	.byte 0

Route36_1::
end



Route36_2::
end



Route36_3::
end



Route36_4::
end



Route36_5::
lock     
faceplayer     
msgbox Route36_Text_5, MSGBOX_DEFAULT
release     
end

Route36_Text_5:
.string "A mi NIDORINO le encanta pasear\n"
.string "por estas rutas, a veces vamos al\l"
.string "ENCINAR a relajarnos.$"



Route36_6::
end



Route36_7::
lock     
faceplayer     
msgbox Route36_Text_7, MSGBOX_DEFAULT
release     
end

Route36_Text_7:
.string "Al parecer hay varios POKÉMON, de\n"
.string "los que se pensaba que no podían\l"
.string "evolucionar, que sí lo hacen, como\l"
.string "GLIGAR o AIPOM.\l"
.string "¿Qué más POKÉMON podrán\l"
.string "evolucionar sin saberlo la\l"
.string "mayoría?$"



Route36_8::
lock     
faceplayer     
msgbox Route36_Text_8, MSGBOX_DEFAULT
release     
end

Route36_Text_8:
.string "Me encanta PINSIR. A diferencia de\n"
.string "SCYTHER o HERACROSS, es un BICHO\l"
.string "puro de verdad, rápido, con un\l"
.string "gran ATAQUE y sólida DEFENSA. Lo\l"
.string "único que le falla es la\l"
.string "DEF.ESPECIAL…$"



Route36_9::
end



Route36_10::
end



Route36_11::
end



Route36_EventScript_Chica::
	trainerbattle_single TRAINER_MEL_AND_PAUL, Route36_Text_ChicaIntro, Route36_Text_ChicaDefeated
	msgbox Route36_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route36_EventScript_Sabio::
	trainerbattle_single TRAINER_JOHN_AND_JAY_3, Route36_Text_SabioIntro, Route36_Text_SabioDefeated
	msgbox Route36_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end



Route36Documento_100::
msgbox Route36Documento_Text_100, MSGBOX_SIGN   
end

Route36Documento_Text_100:
	.string "¡SCYTHER y PINSIR son las mejores\n"
	.string "piezas que puedes atrapar en el\l"
	.string "PARQUE NACIONAL!$"



Route36_SudowoodoRest::
msgbox Route36_SudowoodoRest_Text, MSGBOX_NPC   
end

Route36_SudowoodoRest_Text:
	.string "...\n"
	.string "...\l"
	.string "(Es un POKÉMON, parece estar\l"
	.string "reposando)$"



Route36Documento_101::
msgbox Route36Documento_Text_101, MSGBOX_SIGN   
end

Route36Documento_Text_101:
	.string "RUTA 36\n"
	.string "Al este CIUDAD MALVA$"
