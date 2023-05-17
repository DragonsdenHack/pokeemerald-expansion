CinnabarIsland_Path_MapScripts::
	.byte 0

CinnabarIslandPath1::
end



CinnabarIslandPath2::
end



CinnabarIslandPath3::
end



CinnabarIslandPath4::
end



CinnabarIslandPath5::
end



CinnabarPath_EventScript_Pescador::
	trainerbattle_single TRAINER_JEFFREY_5, CinnabarPath_Text_PescadorIntro, CinnabarPath_Text_PescadorDefeated
	msgbox CinnabarPath_PescadorPostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarPath_EventScript_Pescador2::
	trainerbattle_single TRAINER_PRESTON, CinnabarPath_Text_Pescador2Intro, CinnabarPath_Text_Pescador2Defeated
	msgbox CinnabarPath_Pescador2PostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarPath_EventScript_Nadador::
	trainerbattle_single TRAINER_KAYLA, CinnabarPath_Text_NadadorIntro, CinnabarPath_Text_NadadorDefeated
	msgbox CinnabarPath_NadadorPostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarPath_EventScript_Nadador2::
	trainerbattle_single TRAINER_JACKI_1, CinnabarPath_Text_Nadador2Intro, CinnabarPath_Text_Nadador2Defeated
	msgbox CinnabarPath_Nadador2PostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarPath_EventScript_Nadador3::
	trainerbattle_single TRAINER_ALEXIS, CinnabarPath_Text_Nadador3Intro, CinnabarPath_Text_Nadador3Defeated
	msgbox CinnabarPath_Nadador3PostBattle, MSGBOX_AUTOCLOSE
	end
