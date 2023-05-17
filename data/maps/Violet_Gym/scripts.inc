Violet_Gym_MapScripts::
	.byte 0

VioletGym1::
end



VioletGym2::
end



VioletGym3::
end



VioletGym4::
end



VioletGym5::
end



VioletGym_EventScript_Chico::
	trainerbattle_single TRAINER_MIKE_2, VioletGym_Text_ChicoIntro, VioletGym_Text_ChicoDefeated
	msgbox VioletGym_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



VioletGym_EventScript_Chico2::
	trainerbattle_single TRAINER_TRENT_2, VioletGym_Text_Chico2Intro, VioletGym_Text_Chico2Defeated
	msgbox VioletGym_Text_Chico2PostBattle, MSGBOX_AUTOCLOSE
	end
