LostCave_B1F_LastRoom_MapScripts::
	.byte 0

LostCaveLastRoom_1::
end



LostCaveLastRoom_2::
end

LostCaveB1FLastRoom_EventScript_Rica::
	trainerbattle_single TRAINER_HALEY_2, LostCaveB1FLastRoom_Text_RicaIntro, LostCaveB1FLastRoom_Text_RicaDefeated
	msgbox LostCaveB1FLastRoom_Text_RicaPostBattle, MSGBOX_AUTOCLOSE
	end
