PokemonMansion_2F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_2F_OnLoad
	.byte 0
	
PokemonMansion_2F_OnLoad::
	call_if_set FLAG_UNUSED_0x041, PokemonMansion_EventScript_PressSwitch_2F
	end	

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


PokemonMansion2FDocumento_100::
lock     
msgbox PokemonMansion2FDocumento_Text_100, MSGBOX_DEFAULT
release     
end

PokemonMansion2FDocumento_Text_100:
	.string "Diario: 10 de Julio\n"
	.string "Bautizamos como Mew al nuevo\l"
	.string "Pokémon descubierto.$"


PokemonMansion2FDocumento_101::
lock     
msgbox PokemonMansion2FDocumento_Text_101, MSGBOX_DEFAULT
release     
end

PokemonMansion2FDocumento_Text_101:
	.string "Diario: 5 de Julio\n"
	.string "Guyana, Sudamérica, un nuevo\l"
	.string "Pokémon ha sido descubierto en lo\l"
	.string "más profundo de la jungla.$"
