WaterPath_MapScripts::
	.byte 0

WatherPath1::
end


WatherPath2::
end


WatherPath3::
end


WatherPath4::
end


WatherPath5::
end


WatherPath6::
end


WatherPath7::
end


WatherPath8::
end


WatherPath9::
end


WatherPath10::
lock     
faceplayer     
msgbox WaterPath_Text_9, MSGBOX_DEFAULT
release     
end

WaterPath_Text_9:
.string "¡Buen día camarada!\n"
.string "ATLAS ya nos ha informado de\l"
.string "vuestra misión en CASA CÓNSUL, tu\l"
.string "compañera ya está dentro al\l"
.string "parecer, deberías de entrar cuanto\l"
.string "antes a ayudarla.$"



WatherPath11::
lock     
faceplayer     
msgbox WaterPath_Text_11, MSGBOX_DEFAULT
release     
end

WaterPath_Text_11:
.string "DONPHAN es del tipo TIERRA puro,\n"
.string "por ello parte con ventaja al\l"
.string "enfrentar a los ROCA y TIERRA dual\l"
.string "clásicos, además es tan rudo como\l"
.string "el que más con 120 de base tanto\l"
.string "en DEFENSA como ATAQUE.$"



WaterPath_EventScript_Chica::
	trainerbattle_single TRAINER_HARRISON, WaterPath_Text_ChicaIntro, WaterPath_Text_ChicaDefeated
	msgbox WaterPath_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



WaterPath_EventScript_Nadador::
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, WaterPath_Text_NadadorIntro, WaterPath_Text_NadadorDefeated
	msgbox WaterPath_Text_NadadorPostBattle, MSGBOX_AUTOCLOSE
	end



WaterPath_EventScript_Nadadora::
	trainerbattle_single TRAINER_CLARENCE, WaterPath_Text_NadadoraIntro, WaterPath_Text_NadadoraDefeated
	msgbox WaterPath_Text_NadadoraPostBattle, MSGBOX_AUTOCLOSE
	end



WaterPath_EventScript_Chico::
	trainerbattle_single TRAINER_VICTOR, WaterPath_Text_ChicoIntro, WaterPath_Text_ChicoDefeated
	msgbox WaterPath_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



WaterPath_EventScript_Montanero::
	trainerbattle_single TRAINER_NATE, WaterPath_Text_MontaneroIntro, WaterPath_Text_MontaneroDefeated
	msgbox WaterPath_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end
