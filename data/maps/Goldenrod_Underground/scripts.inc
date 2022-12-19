Goldenrod_Underground_MapScripts::
	.byte 0

GoldenrodUnderground1::
end



GoldenrodUnderground2::
end



GoldenrodUnderground3::
end



GoldenrodUnderground4::
end



GoldenrodUnderground5::
end



GoldenrodUnderground6::
end



GoldenrodUnderground7::
end



GoldenrodUnderground8::
end



GoldenrodUnderground9::
lock     
faceplayer     
msgbox Text_9, MSGBOX_DEFAULT
release     
end

Text_9:
.string "Aquí puedes llegar a encontrar\n"
.string "cosas incluso más interesantes que\l"
.string "en el CASINO y el CENTRO\l"
.string "COMERCIAL.\l"
.string "¡Es lo que tiene el mercado negro,\l"
.string "nunca sabes lo que puedes\l"
.string "llegar a ver por aquí!$"



GoldenrodUnderground10::
end



GoldenrodUnderground11::
end



GoldenrodUnderground_EventScript_Maton::
	trainerbattle_single TRAINER_MAY_LILYCOVE_MUDKIP, GoldenrodUnderground_Text_MatonIntro, GoldenrodUnderground_Text_MatonDefeated
	msgbox GoldenrodUnderground_Text_MatonPostBattle, MSGBOX_AUTOCLOSE
	end



GoldenrodUnderground_EventScript_Necio::
	trainerbattle_single TRAINER_MAY_LILYCOVE_TORCHIC, GoldenrodUnderground_Text_NecioIntro, GoldenrodUnderground_Text_NecioDefeated
	msgbox GoldenrodUnderground_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



GoldenrodUnderground_EventScript_Ladron::
	trainerbattle_single TRAINER_WAYNE, GoldenrodUnderground_Text_LadronIntro, GoldenrodUnderground_Text_LadronDefeated
	msgbox GoldenrodUnderground_Text_LadronPostBattle, MSGBOX_AUTOCLOSE
	end



GoldenrodUnderground_EventScript_Maton2::
	trainerbattle_single TRAINER_TRAINER_105, GoldenrodUnderground_Text_Maton2Intro, GoldenrodUnderground_Text_Maton2Defeated
	msgbox GoldenrodUnderground_Text_Maton2PostBattle, MSGBOX_AUTOCLOSE
	end
