Silph_5F_MapScripts::
map_script MAP_SCRIPT_ON_LOAD, SilphCo_5F_OnLoad
	.byte 0
	
SilphCo_5F_OnLoad::
	call_if_unset FLAG_UNUSED_0x02E, EventScript_Close5FDoor1
	call_if_unset FLAG_UNUSED_0x02F, EventScript_Close5FDoor2
	call_if_unset FLAG_UNUSED_0x030, EventScript_Close5FDoor3
	end	

Silph5F_1::
end



Silph5F_2::
end



Silph5F_3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
	.string "Our security will take care of all of\n"
	.string "you, scoundrels!$"



Silph5F_4::
end



Silph5F_5::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Silph5F_5_Despues_Invasion
msgbox Silph5F_5_Texto_1 MSGBOX_AUTOCLOSE
release
end

Silph5F_5_Despues_Invasion::
msgbox Silph5F_5_Texto_2 MSGBOX_AUTOCLOSE
release
end

Silph5F_5_Texto_1:
	.string "SILPH was behind two ROCKETS that were\n"
	.string "causing trouble. Are you one of them?$"

Silph5F_5_Texto_2:
.string "You should learn from RED!\n"
	.string "He gave you a lesson!$"



Silph5F_6::
end



Silph5F_7::
end



Silph5F_8::
end



Silph5F_9::
end



Silph5F_EventScript_Cientifico::
	trainerbattle_single TRAINER_NED, Silph5F_Text_CientificoIntro, Silph5F_Text_CientificoDefeated
	msgbox Silph5F_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



Silph5F_EventScript_Policia::
	trainerbattle_single TRAINER_ISAIAH_2, Silph5F_Text_PoliciaIntro, Silph5F_Text_PoliciaDefeated
	msgbox Silph5F_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



Silph5F_EventScript_Policia2::
	trainerbattle_single TRAINER_ISAIAH_3, Silph5F_Text_Policia2Intro, Silph5F_Text_Policia2Defeated
	msgbox Silph5F_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



Silph5F_EventScript_Chico::
	trainerbattle_single TRAINER_ANNA_AND_MEG_1, Silph5F_Text_ChicoIntro, Silph5F_Text_ChicoDefeated
	msgbox Silph5F_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end


Silph5FDocumento_100::
lock     
msgbox Silph5FDocumento_Text_100, MSGBOX_DEFAULT
release     
end

Silph5FDocumento_Text_100:
.string "It's a POKÉMON REPORT!\p"
    .string "POKÉMON LAB created PORYGON,\n"
    .string "the first virtual-reality POKÉMON.$"



Silph5FDocumento_101::
lock     
msgbox Silph5FDocumento_Text_101, MSGBOX_DEFAULT
release     
end

Silph5FDocumento_Text_101:
.string "It's a POKÉMON REPORT!\p"
    .string "Some POKÉMON have been confirmed\n"
    .string "to evolve when they are traded.$"



Silph5FDocumento_102::
lock     
msgbox Silph5FDocumento_Text_102, MSGBOX_DEFAULT
release     
end

Silph5FDocumento_Text_102:
.string "It's a POKÉMON REPORT!\p"
    .string "Over 350 POKÉMON techniques have\n"
    .string "been confirmed.$"




Silph5FDocumento_103::
msgbox Silph5FDocumento_Text_103, MSGBOX_SIGN   
end

Silph5FDocumento_Text_103:
.string "SILPH CO. HEAD OFFICE\n"
    .string "5F$"
