Route47_MapScripts::
	.byte 0

Route47_4::
lock     
faceplayer     
msgbox Route47_Text_4, MSGBOX_DEFAULT
release     
end

Route47_Text_4:
.string "El arte es una conversación unilateral\n"
.string "con lo no observado.$"



Route47_EventScript_Montanero::
	trainerbattle_single TRAINER_FERNANDO_5, Route47_Text_MontaneroIntro, Route47_Text_MontaneroDefeated
	msgbox Route47_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end



Route47_EventScript_Montanero2::
	trainerbattle_single TRAINER_SAWYER_2, Route47_Text_Montanero2Intro, Route47_Text_Montanero2Defeated
	msgbox Route47_Text_Montanero2PostBattle, MSGBOX_AUTOCLOSE
	end



Route47_EventScript_Sabio::
	trainerbattle_single TRAINER_SAWYER_3, Route47_Text_SabioIntro, Route47_Text_SabioDefeated
	msgbox Route47_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end
