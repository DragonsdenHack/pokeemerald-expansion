PokemonTower_3F_MapScripts::
	.byte 0

PokemonTower3F_1::
end



PokemonTower3F_2::
end



PokemonTower3F_3::
end



PokemonTower3F_4::
end



PokemonTower3F_EventScript_Channeler::
	trainerbattle_single TRAINER_IMANI, PokemonTower3F_Text_ChannelerIntro, PokemonTower3F_Text_ChannelerDefeated
	msgbox PokemonTower3F_Text_ChannelerPostBattle, MSGBOX_AUTOCLOSE
	end



PokemonTower3F_EventScript_Channeler2::
	trainerbattle_single TRAINER_KYLA, PokemonTower3F_Text_Channeler2Intro, PokemonTower3F_Text_Channeler2Defeated
	msgbox PokemonTower3F_Text_Channeler2PostBattle, MSGBOX_AUTOCLOSE
	end



PokemonTower3F_EventScript_Channeler3::
	trainerbattle_single TRAINER_DENISE, PokemonTower3F_Text_Channeler3Intro, PokemonTower3F_Text_Channeler3Defeated
	msgbox PokemonTower3F_Text_Channeler3PostBattle, MSGBOX_AUTOCLOSE
	end
