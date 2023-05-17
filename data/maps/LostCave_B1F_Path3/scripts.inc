LostCave_B1F_Path3_MapScripts::
	.byte 0

LostCavePath3_1::
end

LostCaveB1FPath3_EventScript_Medium::
	trainerbattle_single TRAINER_HALEY_4, LostCaveB1FPath3_Text_MediumIntro, LostCaveB1FPath3_Text_MediumDefeated
	msgbox LostCaveB1FPath3_Text_MediumPostBattle, MSGBOX_AUTOCLOSE
	end
