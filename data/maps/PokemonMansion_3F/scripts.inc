PokemonMansion_3F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_3F_OnLoad
	.byte 0
	
PokemonMansion_3F_OnLoad::
	call_if_set FLAG_UNUSED_0x041, PokemonMansion_EventScript_PressSwitch_1F
	end	

PokemonMansion3F_1::
end



PokemonMansion3F_2::
end



PokemonMansion3F_3::
end



PokemonMansion3F_4::
end



PokemonMansion3F_EventScript_Cientifico::
	trainerbattle_single TRAINER_ETHAN_2, PokemonMansion3F_Text_CientificoIntro, PokemonMansion3F_Text_CientificoDefeated
	msgbox PokemonMansion3F_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



PokemonMansion3F_EventScript_Cientifico2::
	trainerbattle_single TRAINER_ELLIOT_3, PokemonMansion3F_Text_Cientifico2Intro, PokemonMansion3F_Text_Cientifico2Defeated
	msgbox PokemonMansion3F_Cientifico2PostBattle, MSGBOX_AUTOCLOSE
	end



PokemonMansion3FDocumento_100::
lock     
msgbox PokemonMansion3FDocumento_Text_100, MSGBOX_DEFAULT
release     
end

PokemonMansion3FDocumento_Text_100:
.string "Diary: Feb. 6\n"
    .string "MEW gave birth.\p"
    .string "We named the newborn MEWTWO.$"
