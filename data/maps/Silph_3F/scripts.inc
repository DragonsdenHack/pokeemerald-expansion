Silph_3F_MapScripts::
	.byte 0

Silph3F_1::
end



Silph3F_2::
end



Silph3F_3::
end



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
