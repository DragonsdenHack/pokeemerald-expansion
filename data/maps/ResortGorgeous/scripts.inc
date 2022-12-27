ResortGorgeous_MapScripts::
	.byte 0

ResortGorgeous1::
end


ResortGorgeous2::
lock     
faceplayer     
msgbox ResortGorgeous_Text_2, MSGBOX_DEFAULT
release     
end

ResortGorgeous_Text_2:
.string "¡Buen día camarada!\n"
.string "ATLAS ya nos ha informado de\l"
.string "vuestra misión en CASA CÓNSUL, tu\l"
.string "compañera ya está dentro al\l"
.string "parecer, deberías de entrar cuanto\l"
.string "antes a ayudarla.$"

ResortGorgeous3::
end


ResortGorgeous4::
end


ResortGorgeous5::
end


ResortGorgeous6::
end


ResortGorgeous7::
end


ResortGorgeous8::
end

ResortGorgeus_EventScript_Pintora1::
	trainerbattle_single TRAINER_CATHERINE_4, ResortGorgeus_Text_Pintora1Intro, ResortGorgeus_Text_Pintora1Defeated
	msgbox ResortGorgeus_Text_Pintora1PostBattle, MSGBOX_AUTOCLOSE
    end

ResortGorgeus_EventScript_Rica1::	
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_TORCHIC, ResortGorgeus_Text_Rica1Intro, ResortGorgeus_Text_Rica1Defeated
	msgbox ResortGorgeus_Text_Rica1PostBattle, MSGBOX_AUTOCLOSE
    end

ResortGorgeus_EventScript_Joven::	
	trainerbattle_single TRAINER_JULIO, ResortGorgeus_Text_JulioIntro, ResortGorgeus_Text_JulioDefeated
	msgbox ResortGorgeus_Text_JulioPostBattle, MSGBOX_AUTOCLOSE
    end

ResortGorgeus_EventScript_Rica2::
	trainerbattle_single TRAINER_CATHERINE_5, ResortGorgeus_Text_Rica2Intro, ResortGorgeus_Text_Rica2Defeated
	msgbox ResortGorgeus_Text_Rica2PostBattle, MSGBOX_AUTOCLOSE
    end

ResortGorgeus_EventScript_Pintora2::
	trainerbattle_single TRAINER_CATHERINE_3, ResortGorgeus_Text_Pintora2Intro, ResortGorgeus_Text_Pintora2Defeated
	msgbox ResortGorgeus_Text_Pintora2PostBattle, MSGBOX_AUTOCLOSE
    end

ResortGorgeus_EventScript_Pintora3::
	trainerbattle_single TRAINER_BRENDAN_ROUTE_110_TORCHIC, ResortGorgeus_Text_Pintora3Intro, ResortGorgeus_Text_Pintora3Defeated
	msgbox ResortGorgeus_Text_Pintora3PostBattle, MSGBOX_AUTOCLOSE
    end

ResortGorgeus_EventScript_Nadador::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_5, ResortGorgeus_Text_NadadorIntro, ResortGorgeus_Text_NadadorDefeated
	msgbox ResortGorgeus_Text_NadadorPostBattle, MSGBOX_AUTOCLOSE
    end


ResortGorgeusDocumento_100::
msgbox ResortGorgeusDocumento_Text_100, MSGBOX_SIGN   
end

ResortGorgeusDocumento_Text_100:
	.string "CASA DE CÓNSUL$"
	