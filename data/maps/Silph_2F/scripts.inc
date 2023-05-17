Silph_2F_MapScripts::
	.byte 0

Silph2F_1::
end



Silph2F_2::
end



Silph2F_3::
end



Silph2F_4::
end



Silph2F_5::
end



Silph2F_EventScript_Policia::
	trainerbattle_single TRAINER_DEMETRIUS, Silph2F_Text_PoliciaIntro, Silph2F_Text_PoliciaDefeated
	msgbox Silph2F_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



Silph2F_EventScript_Policia2::
	trainerbattle_single TRAINER_CAMDEN, Silph2F_Text_Policia2Intro, Silph2F_Text_Policia2Defeated
	msgbox Silph2F_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



Silph2F_EventScript_Cientifico::
	trainerbattle_single TRAINER_CLAUDE, Silph2F_Text_CientificoIntro, Silph2F_Text_CientificoDefeated
	msgbox Silph2F_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



Silph2F_EventScript_Cientifico2::
	trainerbattle_single TRAINER_IVAN, Silph2F_Text_Cientifico2Intro, Silph2F_Text_Cientifico2Defeated
	msgbox Silph2F_Cientifico2PostBattle, MSGBOX_AUTOCLOSE
	end
