PokemonMansion_4F_MapScripts::
	.byte 0

PokemonMansion4F_1::
end



PokemonMansion4F_2::
end



PokemonMansion4F_3::
end



PokemonMansion4F_4::
end



PokemonMansion4F_5::
end



PokemonMansion4F_6::
end



PokemonMansion4F_EventScript_Cientifico::
	trainerbattle_single TRAINER_ETHAN_3, PokemonMansion4F_Text_CientificoIntro, PokemonMansion4F_Text_CientificoDefeated
	msgbox PokemonMansion4F_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



PokemonMansion4F_EventScript_Cientifico2::
	trainerbattle_single TRAINER_ELLIOT_4, PokemonMansion4F_Text_Cientifico2Intro, PokemonMansion4F_Text_Cientifico2Defeated
	msgbox PokemonMansion4F_Cientifico2PostBattle, MSGBOX_AUTOCLOSE
	end


PokemonMansion4FDocumento_100::
lock     
msgbox PokemonMansion4FDocumento_Text_100, MSGBOX_DEFAULT
release     
end

PokemonMansion4FDocumento_Text_100:
	.string "Diario: 1 de Septiembre\n"
	.string "Mewtwo es demasiado poderoso, no\l"
	.string "hemos podido contener sus malos\l"
	.string "instintos...$"
