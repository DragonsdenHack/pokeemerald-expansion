TrainerTower_MapScripts::
	.byte 0

TrainerTower1::
end


TrainerTower2::
end



TrainerTower_EventScript_Chica::
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_5, TrainerTower_Text_ChicaIntro, TrainerTower_Text_ChicaDefeated
	msgbox TrainerTower_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end




	TrainerTower_EventScript_Chico::
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_4, TrainerTower_Text_ChicoIntro, TrainerTower_Text_ChicoDefeated
	msgbox TrainerTower_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end
