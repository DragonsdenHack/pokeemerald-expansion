MtEmber_B1F_MapScripts::
	.byte 0

MtEmberB1F_1::
end



MtEmberB1F_EventScript_Soldado::
	trainerbattle_single TRAINER_KATIE, MtEmberB1F_Text_SoldadoIntro, MtEmberB1F_Text_SoldadoDefeated
	msgbox MtEmberB1F_Text_SoldadoPostBattle, MSGBOX_AUTOCLOSE
	end
