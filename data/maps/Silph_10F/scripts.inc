Silph_10F_MapScripts::
map_script MAP_SCRIPT_ON_LOAD, SilphCo_10F_OnLoad
	.byte 0
	
SilphCo_10F_OnLoad::
	call_if_unset FLAG_UNUSED_0x03A, EventScript_Close10FDoor
	end	

Silph10F_1::
end



Silph10F_2::
end



Silph10F_3::
end



Silph10F_4::
end



Silph10F_5::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Silph10F_5_Despues_Invasion
msgbox Silph10F_5_Texto_1 MSGBOX_NPC
release
end

Silph10F_5_Despues_Invasion::
msgbox Silph10F_5_Texto_2 MSGBOX_NPC
release
end

Silph10F_5_Texto_1:
.string "Waaaaa!\n"
	.string "I'm afraid!$"

Silph10F_5_Texto_2:
	.string "Are you really that cynical to come\n"
	.string "back here after all you've done?$"



Silph10F_6::
end



Silph10F_EventScript_Policia::
	trainerbattle_single TRAINER_KATELYN_4, Silph10F_Text_PoliciaIntro, Silph10F_Text_PoliciaDefeated
	msgbox Silph10F_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



Silph10F_EventScript_Cientifico::
	trainerbattle_single TRAINER_ELLIOT_2, Silph10F_Text_CientificoIntro, Silph10F_Text_CientificoDefeated
	msgbox Silph10F_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



Silph10FDocumento_100::
msgbox Silph10FDocumento_Text_100, MSGBOX_SIGN   
end

Silph10FDocumento_Text_100:
.string "SILPH CO. HEAD OFFICE\n"
    .string "10F$"
