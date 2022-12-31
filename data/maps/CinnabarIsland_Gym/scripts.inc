CinnabarIsland_Gym_MapScripts::
	.byte 0

CinnabarIslandGym1::
end



CinnabarIslandGym2::
end



CinnabarIslandGym3::
end



CinnabarIslandGym4::
end



CinnabarIslandGym5::
end



CinnabarIslandGym6::
end



CinnabarIslandGym7::
end



CinnabarIslandGym8::
end



CinnabarIslandGym9::
end



CinnabarIslandGym_EventScript_Ladron::
	trainerbattle_single TRAINER_SHANE, CinnabarIslandGym_Text_LadronIntro, CinnabarIslandGym_Text_LadronDefeated
	msgbox CinnabarIslandGym_Text_LadronPostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarIslandGym_EventScript_Cientifico::
	trainerbattle_single TRAINER_TONY_5, CinnabarIslandGym_Text_CientificoIntro, CinnabarIslandGym_Text_CientificoDefeated
	msgbox CinnabarIslandGym_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarIslandGym_EventScript_Cientifico2::
	trainerbattle_single TRAINER_TAKAO, CinnabarIslandGym_Text_Cientifico2Intro, CinnabarIslandGym_Text_Cientifico2Defeated
	msgbox CinnabarIslandGym_Text_Cientifico2PostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarIslandGym_EventScript_Ladron2::
	trainerbattle_single TRAINER_JUSTIN, CinnabarIslandGym_Text_Ladron2Intro, CinnabarIslandGym_Text_Ladron2Defeated
	msgbox CinnabarIslandGym_Text_Ladron2PostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarIslandGym_EventScript_Cientifico3::
	trainerbattle_single TRAINER_HITOSHI, CinnabarIslandGym_Text_Cientifico3Intro, CinnabarIslandGym_Text_Cientifico3Defeated
	msgbox CinnabarIslandGym_Text_Cientifico3PostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarIslandGym_EventScript_Ladron3::
	trainerbattle_single TRAINER_ETHAN_1, CinnabarIslandGym_Text_Ladron3Intro, CinnabarIslandGym_Text_Ladron3Defeated
	msgbox CinnabarIslandGym_Text_Ladron3PostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarIslandGym_EventScript_Cientifico4::
	trainerbattle_single TRAINER_KIYO, CinnabarIslandGym_Text_Cientifico4Intro, CinnabarIslandGym_Text_Cientifico4Defeated
	msgbox CinnabarIslandGym_Text_Cientifico4PostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarIslandGymDocumento_100::
msgbox CinnabarIslandGymDocumento_Text_100, MSGBOX_SIGN   
end

CinnabarIslandGymDocumento_Text_100:
.string "Una foto de BLAINE\n"
	.string "y el SR. FUJI...\p"
	.string "Aparecen juntos con una sonrisa\n"
	.string "de oreja a oreja.$"
