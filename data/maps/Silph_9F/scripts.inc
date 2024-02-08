Silph_9F_MapScripts::
map_script MAP_SCRIPT_ON_LOAD, SilphCo_9F_OnLoad
	.byte 0
	
SilphCo_9F_OnLoad::
	call_if_unset FLAG_UNUSED_0x036, EventScript_Close9FDoor1
	call_if_unset FLAG_UNUSED_0x037, EventScript_Close9FDoor2
	call_if_unset FLAG_UNUSED_0x038, EventScript_Close9FDoor3
	call_if_unset FLAG_UNUSED_0x039, EventScript_Close9FDoor4
	end	

Silph9F_1::
end



Silph9F_2::
end



Silph9F_3::
end



Silph9F_4::
lock
msgbox Silph9F_4_Texto_1 MSGBOX_AUTOCLOSE
release
end

Silph9F_4_Texto_1:
	.string "Heal you? For you to keep invading us?\n"
	.string "Public centers heal you because it's a\l"
	.string "law, we are a private company, I hope all\l"
	.string "your POKÉMON faint!$"



Silph9F_EventScript_Cientifico::
	trainerbattle_single TRAINER_CARTER, Silph9F_Text_CientificoIntro, Silph9F_Text_CientificoDefeated
	msgbox Silph9F_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



Silph9F_EventScript_Policia::
	trainerbattle_single TRAINER_KATELYN_3, Silph9F_Text_PoliciaIntro, Silph9F_Text_PoliciaDefeated
	msgbox Silph9F_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



Silph9F_EventScript_Policia2::
	trainerbattle_single TRAINER_KATELYN_2, Silph9F_Text_Policia2Intro, Silph9F_Text_Policia2Defeated
	msgbox Silph9F_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



Silph9FDocumento_100::
msgbox Silph9FDocumento_Text_100, MSGBOX_SIGN   
end

Silph9FDocumento_Text_100:
.string "SILPH CO. HEAD OFFICE\n"
    .string "9F$"
