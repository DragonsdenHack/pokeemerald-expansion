Route26_MapScripts::
.byte 0

Route26_1::
end



Route26_2::
end



Route26_3::
end



Route26_4::
end



Route26_5::
end



Route26_6::
end



Route26_7::
end



Route26_8::
end



Route26_9::
end



Route26_10::
end



Route26_11::
end



Route26_12::
end



Route26_EventScript_Pescador::
	trainerbattle_single TRAINER_DAVIS, Route26_Text_PescadorIntro, Route26_Text_PescadorDefeated
	msgbox Route26_Text_PescadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route26_EventScript_Guarda::
	trainerbattle_single TRAINER_ISAAC_1, Route26_Text_GuardaIntro, Route26_Text_GuardaDefeated
	msgbox Route26_Text_GuardaPostBattle, MSGBOX_AUTOCLOSE
	end



Route26_EventScript_Guay::
	trainerbattle_single TRAINER_MAY_ROUTE_119_TREECKO, Route26_Text_GuayIntro, Route26_Text_GuayDefeated
	msgbox Route26_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end



Route26_EventScript_Guarda2::
	trainerbattle_single TRAINER_MAY_ROUTE_119_MUDKIP, Route26_Text_Guarda2Intro, Route26_Text_Guarda2Defeated
	msgbox Route26_Text_Guarda2PostBattle, MSGBOX_AUTOCLOSE
	end



Route26_EventScript_Chico::
	trainerbattle_single TRAINER_MAY_ROUTE_110_MUDKIP, Route26_Text_ChicoIntro, Route26_Text_ChicoDefeated
	msgbox Route26_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



Route26_EventScript_Guay2::
	trainerbattle_single TRAINER_MAY_ROUTE_103_MUDKIP, Route26_Text_Guay2Intro, Route26_Text_Guay2Defeated
	msgbox Route26_Text_Guay2PostBattle, MSGBOX_AUTOCLOSE
	end



Route26Documento_100::
msgbox Route26Documento_Text_100, MSGBOX_SIGN   
end

Route26Documento_Text_100:
	.string "ROUTE 26\n"
	.string "POKÉMON LEAGUE RECEPTION GATE$"

