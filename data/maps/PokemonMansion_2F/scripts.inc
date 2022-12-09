PokemonMansion_2F_MapScripts::
	.byte 0

PokemonMansion2F_1::
end



PokemonMansion2F_2::
end



PokemonMansion2F_3::
end



PokemonMansion2F_4::
end



PokemonMansion2F_EventScript_Cientifico::
	trainerbattle_single TRAINER_AUTUMN, PokemonMansion2F_Text_CientificoIntro, PokemonMansion2F_Text_CientificoDefeated
	msgbox PokemonMansion2F_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end
