NewMap4_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, NewMap4_OnResume
	.byte 0

NewMap4_OnResume:
	call NewMap4_SetupEscapeWarp
	end

NewMap4_SetupEscapeWarp::
	setescapewarp MAP_ROUTE23, 5, 29
	return

VictoryRoad1F_1::
end



VictoryRoad1F_2::
end



VictoryRoad1F_6::
end



VictoryRoad1F_7::
end



VictoryRoad1F_EventScript_Guay::
	trainerbattle_single TRAINER_BENNY, VictoryRoad1F_Text_GuayIntro, VictoryRoad1F_Text_GuayDefeated
	msgbox VictoryRoad1F_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end



VictoryRoad1F_EventScript_Guay2::
	trainerbattle_single TRAINER_AARON, VictoryRoad1F_Text_Guay2Intro, VictoryRoad1F_Text_Guay2Defeated
	msgbox VictoryRoad1F_Text_Guay2PostBattle, MSGBOX_AUTOCLOSE
	end
