Silph_9F_MapScripts::
	.byte 0

Silph9F_1::
end



Silph9F_2::
end



Silph9F_3::
end



Silph9F_4::
end



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
.string "OFICINA CENTRAL DE SILPH S.A.\n"
	.string "P8$"
