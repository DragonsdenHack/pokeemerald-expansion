Silph_4F_MapScripts::
	.byte 0

Silph4F_1::
end



Silph4F_2::
end



Silph4F_3::
end



Silph4F_4::
end



Silph4F_5::
end



Silph4F_6::
end



Silph4F_7::
end



Silph4F_8::
end



Silph4F_EventScript_Policia::
	trainerbattle_single TRAINER_PABLO_1, Silph4F_Text_PoliciaIntro, Silph4F_Text_PoliciaDefeated
	msgbox Silph4F_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



Silph4F_EventScript_Policia2::
	trainerbattle_single TRAINER_CHASE, Silph4F_Text_Policia2Intro, Silph4F_Text_Policia2Defeated
	msgbox Silph4F_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



Silph4F_EventScript_Cientifico::
	trainerbattle_single TRAINER_NED, Silph4F_Text_CientificoIntro, Silph4F_Text_CientificoDefeated
	msgbox Silph4F_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end
