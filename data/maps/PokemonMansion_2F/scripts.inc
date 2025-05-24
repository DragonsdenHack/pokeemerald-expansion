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
.string "TAGEBUCH: 10. JULI\n"
    .string "Wir nennen das neuentdeckte\l"
    .string "POKéMON, MEW.$"


PokemonMansion2FDocumento_101::
lock     
msgbox PokemonMansion2FDocumento_Text_101, MSGBOX_DEFAULT
release     
end

PokemonMansion2FDocumento_Text_101:
    .string "TAGEBUCH: 5. JULI\n"
    .string "Der Dschungel im Niemandsland.\p"
    .string "Wir haben tief im Dschungel ein\n"
    .string "völlig neues POKéMON gefunden.$"
