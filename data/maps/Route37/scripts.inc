Route37_MapScripts::
	.byte 0

Route37_1::
end



Route37_2::
end



Route37_3::
end



Route37_EventScript_Chica::
	trainerbattle_single TRAINER_JOHN_AND_JAY_5, Route37_Text_ChicaIntro, Route37_Text_ChicaDefeated
	msgbox Route37_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route37_EventScript_Juglar::
	trainerbattle_single TRAINER_JOHN_AND_JAY_1, Route37_Text_JuglarIntro, Route37_Text_JuglarDefeated
	msgbox Route37_Text_JuglarPostBattle, MSGBOX_AUTOCLOSE
	end



Route37Documento_100::
msgbox Route37Documento_Text_100, MSGBOX_SIGN   
end

Route37Documento_Text_100:
	.string "RUTA 37$"



Route37_SudowoodoRest::
msgbox Route37_SudowoodoRest_Text, MSGBOX_NPC   
end

Route37_SudowoodoRest_Text:
	.string "...\n"
	.string "...\l"
	.string "(Es un POKÉMON, parece estar\l"
	.string "reposando)$"
