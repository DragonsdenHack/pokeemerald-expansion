Silph_3F_MapScripts::
map_script MAP_SCRIPT_ON_LOAD, SilphCo_3F_OnLoad
	.byte 0
	
SilphCo_3F_OnLoad::
	call_if_unset FLAG_UNUSED_0x02A, EventScript_Close3FDoor1
	call_if_unset FLAG_UNUSED_0x02B, EventScript_Close3FDoor2
	end	

Silph3F_1::
end



Silph3F_2::
end



Silph3F_3::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Silph3F_3_Despues_Invasion
msgbox Silph3F_3_Texto_1 MSGBOX_AUTOCLOSE
release
end

Silph3F_3_Despues_Invasion::
msgbox Silph3F_3_Texto_2 MSGBOX_AUTOCLOSE
release
end

Silph3F_3_Texto_1:
.string "You will regret this!$"

Silph3F_3_Texto_2:
	.string "You got what you deserved, ROCKET!$"

Silph3F_4::
end



Silph3F_EventScript_Policia::
	trainerbattle_single TRAINER_ISAIAH_1, Silph3F_Text_PoliciaIntro, Silph3F_Text_PoliciaDefeated
	msgbox Silph3F_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



Silph3F_EventScript_Cientifico::
	trainerbattle_single TRAINER_ELLIOT_1, Silph3F_Text_CientificoIntro, Silph3F_Text_CientificoDefeated
	msgbox Silph3F_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



Silph3FDocumento_100::
msgbox Silph3FDocumento_Text_100, MSGBOX_SIGN   
end

Silph3FDocumento_Text_100:
.string "SILPH CO. HEAD OFFICE\n"
    .string "3F$"
