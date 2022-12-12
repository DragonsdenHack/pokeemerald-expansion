NavelRoad_MapScripts::
	.byte 0

NavelRoad_EventScript_Pescador::
	trainerbattle_single TRAINER_EDWIN_3, NavelRoad_Text_PescadorIntro, NavelRoad_Text_PescadorDefeated
	msgbox NavelRoad_Text_PescadorPostBattle, MSGBOX_AUTOCLOSE
	end


NavelRoad_EventScript_Pescador2::
	trainerbattle_single TRAINER_EDWIN_4, NavelRoad_Text_Pescador2Intro, NavelRoad_Text_Pescador2Defeated
	msgbox NavelRoad_Text_Pescador2PostBattle, MSGBOX_AUTOCLOSE
	end
	