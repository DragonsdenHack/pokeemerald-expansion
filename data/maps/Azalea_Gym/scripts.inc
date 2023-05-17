Azalea_Gym_MapScripts::
	.byte 0




AzaleaGym1::
end



AzaleaGym2::
end



AzaleaGym3::
end



AzaleaGym4::
end



AzaleaGym_EventScript_Cazabichos::
	trainerbattle_single TRAINER_WALLY_MAUVILLE, AzaleaGym_Text_CazabichosIntro, AzaleaGym_Text_CazabichosDefeated
	msgbox AzaleaGym_Text_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end



AzaleaGym_EventScript_Cazabichos2::
	trainerbattle_single TRAINER_WALLY_VR_2, AzaleaGym_Text_Cazabichos2Intro, AzaleaGym_Text_Cazabichos2Defeated
	msgbox AzaleaGym_Text_Cazabichos2PostBattle, MSGBOX_AUTOCLOSE
	end



AzaleaGym_EventScript_Sabio::
	trainerbattle_single TRAINER_WALLY_VR_3, AzaleaGym_Text_SabioIntro, AzaleaGym_Text_SabioDefeated
	msgbox AzaleaGym_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end
