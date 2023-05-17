PokemonMansion_1F_MapScripts::
	.byte 0

PokemonMansion1F_1::
end



PokemonMansion1F_2::
end



PokemonMansion1F_3::
end



PokemonMansion1F_4::
end



PokemonMansion1F_5::
end



PokemonMansion1F_6::
end



PokemonMansion1F_7::
end



PokemonMansion1F_EventScript_Chico::
	trainerbattle_single TRAINER_MAY_ROUTE_103_TORCHIC, PokemonMansion1F_Text_ChicoIntro, PokemonMansion1F_Text_ChicoDefeated
	msgbox PokemonMansion1F_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



PokemonMansion1F_EventScript_Cientifico::
	trainerbattle_single TRAINER_ANDREW, PokemonMansion1F_Text_CientificoIntro, PokemonMansion1F_Text_CientificoDefeated
	msgbox PokemonMansion1F_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end
