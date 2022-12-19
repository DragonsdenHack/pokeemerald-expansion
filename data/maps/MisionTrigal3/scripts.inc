MisionTrigal3_MapScripts::
	.byte 0



MisionTrigal3_EventScript_Motero::
	trainerbattle_single TRAINER_TRAINER_81, MisionTrigal3_Text_MoteroIntro, MisionTrigal3_Text_MoteroDefeated
	msgbox MisionTrigal3_Text_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end



MisionTrigal3_EventScript_Motero2::
	trainerbattle_single TRAINER_TRAINER_82, MisionTrigal3_Text_Motero2Intro, MisionTrigal3_Text_Motero2Defeated
	msgbox MisionTrigal3_Text_Motero2PostBattle, MSGBOX_AUTOCLOSE
	end
	