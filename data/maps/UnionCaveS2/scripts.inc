UnionCaveS2_MapScripts::
	.byte 0

UnionCaveS2_1::
end



UnionCaveS2_2::
end



UnionCaveS2_3::
end



UnionCaveS2_4::
end



UnionCaveS2_5::
end



UnionCaveS2_EventScript_Guay::
	trainerbattle_single TRAINER_HIDEO, UnionCaveS2_Text_GuayIntro, UnionCaveS2_Text_GuayDefeated
	msgbox UnionCaveS2_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end




UnionCaveS2_EventScript_Nadador::
	trainerbattle_single TRAINER_ASHLEY, UnionCaveS2_Text_NadadorIntro, UnionCaveS2_Text_NadadorDefeated
	msgbox UnionCaveS2_Text_NadadorPostBattle, MSGBOX_AUTOCLOSE
	end




UnionCaveS2_EventScript_Necio::
	trainerbattle_single TRAINER_KEIGO, UnionCaveS2_Text_NecioIntro, UnionCaveS2_Text_NecioDefeated
	msgbox UnionCaveS2_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end


UnionCave_Salmuera::
lock     
faceplayer  
goto_if_set FLAG_NUEVA_810, UnionCave_Salmuera_Despues
msgbox UnionCave_Salmuera_Texto_1, MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM97
msgbox UnionCave_Salmuera_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
setflag FLAG_NUEVA_810
release     
end

UnionCave_Salmuera_Despues::
msgbox UnionCave_Salmuera_Texto_2, MSGBOX_NPC
release
end

UnionCave_Salmuera_Texto_1:
	.string "There's no better place for a good\n"
	.string "catch than this, but a WATER TYPE worth\l"
	.string "its salt must have powerful moves.$"

UnionCave_Salmuera_Texto_1.1:
.string "{PLAYER} obtained the TM97\n"
	.string "BRINE from the fisherman!!$"

UnionCave_Salmuera_Texto_2:
	.string "When the opponent's HP splashes below\n"
	.string "half, BRINE even washes out HYDRO\l"
	.string "PUMP's potency. Use it wisely!$"


