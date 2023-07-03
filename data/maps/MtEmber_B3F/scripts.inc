MtEmber_B3F_MapScripts::
	.byte 0

MtEmberB3F_8::
end



MtEmberB3F_EventScript_Soldado::
	trainerbattle_single TRAINER_KARA, MtEmberB3F_Text_SoldadoIntro, MtEmberB3F_Text_SoldadoDefeated
	msgbox MtEmberB3F_Text_SoldadoPostBattle, MSGBOX_AUTOCLOSE
	end
