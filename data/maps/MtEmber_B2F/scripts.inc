MtEmber_B2F_MapScripts::
	.byte 0

MtEmberB2F_2::
end



MtEmberB2F_EventScript_Soldado::
	trainerbattle_single TRAINER_SUSIE, MtEmberB2F_Text_SoldadoIntro, MtEmberB2F_Text_SoldadoDefeated
	msgbox MtEmberB2F_Text_SoldadoPostBattle, MSGBOX_AUTOCLOSE
	end
