Route42_MapScripts::
	.byte 0

Route42_1::
end



Route42_2::
end



Route42_3::
end



Route42_4::
end



Route42_5::
end



Route42_6::
end



Route42_7::
lock     
faceplayer     
msgbox Route42_Text_7, MSGBOX_DEFAULT
release     
end

Route42_Text_7:
.string "Nuestro LÍDER, FREDO, tiene una\n"
.string "importante cita en TRIGAL, y nos\l"
.string "ha pedido que cerremos PUEBLO\l"
.string "CAOBA en su ausencia. A su regreso,\l"
.string "podrás visitar CAOBA.$"



Route42_8::
lock     
faceplayer     
msgbox Route42_Text_8, MSGBOX_DEFAULT
release     
end

Route42_Text_8:
.string "Nuestro LÍDER, FREDO, tiene una\n"
.string "importante cita en TRIGAL, y nos\l"
.string "ha pedido que cerremos PUEBLO\l"
.string "CAOBA en su ausencia. A su regreso,\l"
.string "podrás visitar CAOBA.$"



Route42_9::
lock     
faceplayer     
msgbox Route42_Text_9, MSGBOX_DEFAULT
release     
end

Route42_Text_9:
.string "Nuestro LÍDER, FREDO, tiene una\n"
.string "importante cita en TRIGAL, y nos\l"
.string "ha pedido que cerremos PUEBLO\l"
.string "CAOBA en su ausencia. A su regreso,\l"
.string "podrás visitar CAOBA.$"



Route42_EventScript_Necio::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_13, Route42_Text_NecioIntro, Route42_Text_NecioDefeated
	msgbox Route42_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



Route42_EventScript_Pescador::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_15, Route42_Text_PescadorIntro, Route42_Text_PescadorDefeated
	msgbox Route42_Text_PescadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route42_EventScript_Montanero::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_14, Route42_Text_MontaneroIntro, Route42_Text_MontaneroDefeated
	msgbox Route42_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end



Route42_SudowoodoRest::
msgbox Route42_SudowoodoRest_Text, MSGBOX_NPC   
end

Route42_SudowoodoRest_Text:
	.string "...\n"
	.string "...\l"
	.string "(Es un POKÉMON, parece estar\l"
	.string "reposando)$"



Route42Documento_100::
msgbox Route42Documento_Text_100, MSGBOX_SIGN   
end

Route42Documento_Text_100:
	.string "MONTE MORTERO\n"
	.string "Cueva Cascada Interior$"



Route42Documento_101::
msgbox Route42Documento_Text_101, MSGBOX_SIGN   
end

Route42Documento_Text_101:
	.string "RUTA 42\n"
	.string "CIUDAD IRIS-PUEBLO CAOBA$"
