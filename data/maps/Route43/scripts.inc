Route43_MapScripts::
	.byte 0

Route43_1::
end



Route43_2::
end



Route43_3::
end



Route43_4::
end



Route43_5::
end



Route43_6::
end



Route43_7::
end



Route43_8::
end



Route43_9::
end



Route43_EventScript_Guarda::
	trainerbattle_single TRAINER_BRENDAN_ROUTE_119_TORCHIC, Route43_Text_GuardaIntro, Route43_Text_GuardaDefeated
	msgbox Route43_Text_GuardaPostBattle, MSGBOX_AUTOCLOSE
	end


Route43_EventScript_Chica::
	trainerbattle_single TRAINER_ROBERT_3, Route43_Text_ChicaIntro, Route43_Text_ChicaDefeated
	msgbox Route43_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end


Route43_EventScript_Pescador::
	trainerbattle_single TRAINER_LAURA, Route43_Text_PescadorIntro, Route43_Text_PescadorDefeated
	msgbox Route43_Text_PescadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route43_SudowoodoRest::
msgbox Route43_SudowoodoRest_Text, MSGBOX_NPC   
end

Route43_SudowoodoRest_Text:
	.string "…\n"
	.string "…\l"
	.string "(Es un POKÉMON, parece estar\l"
	.string "reposando)$"



Route43Documento_100::
msgbox Route43Documento_Text_100, MSGBOX_SIGN   
end

Route43Documento_Text_100:
	.string "RUTA 43\n"
	.string "LAGO DE LA FURIA - PUEBLO CAOBA$"



Route43Documento_101::
msgbox Route43Documento_Text_101, MSGBOX_SIGN   
end

Route43Documento_Text_101:
	.string "Según la leyenda, MAGIKARP y\n"
	.string "GYARADOS no son las únicas\l"
	.string "especies que habitan en el LAGO DE\l"
	.string "LA FURIA.$"
