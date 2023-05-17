PokemonTower_4F_MapScripts::
	.byte 0

PokemonTower4F_1::
end



PokemonTower4F_2::
end



PokemonTower4F_3::
end



PokemonTower4F_4::
end



PokemonTower4F_5::
end



PokemonTower4F_6::
end



PokemonTower4F_EventScript_Channeler::
	trainerbattle_single TRAINER_TARA, PokemonTower4F_Text_ChannelerIntro, PokemonTower4F_Text_ChannelerDefeated
	msgbox PokemonTower4F_Text_ChannelerPostBattle, MSGBOX_AUTOCLOSE
	end



PokemonTower4F_EventScript_Channeler2::
	trainerbattle_single TRAINER_MISSY, PokemonTower4F_Text_Channeler2Intro, PokemonTower4F_Text_Channeler2Defeated
	msgbox PokemonTower4F_Text_Channeler2PostBattle, MSGBOX_AUTOCLOSE
	end



PokemonTower4F_EventScript_Channeler3::
	trainerbattle_single TRAINER_BETH, PokemonTower4F_Text_Channeler3Intro, PokemonTower4F_Text_Channeler3Defeated
	msgbox PokemonTower4F_Text_Channeler3PostBattle, MSGBOX_AUTOCLOSE
	end
