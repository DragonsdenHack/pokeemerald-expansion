WaterLabyrinth_MapScripts::
	.byte 0

WaterLabyrinth1::
end


WaterLabyrinth2::
end

WaterLabyrinth_EventScript_Lass::
	trainerbattle_single TRAINER_BRENDAN_ROUTE_110_MUDKIP, WaterLabyrinth_Text_LassIntro, WaterLabyrinth_Text_LassDefeated
	msgbox WaterLabyrinth_Text_LassPostBattle, MSGBOX_AUTOCLOSE
	end



WaterLabyrinth_EventScript_Gentleman::
	trainerbattle_single TRAINER_SAWYER_1, WaterLabyrinth_Text_GentlemanIntro, WaterLabyrinth_Text_GentlemanDefeated
	msgbox WaterLabyrinth_Text_GentlemanPostBattle, MSGBOX_AUTOCLOSE
	end
