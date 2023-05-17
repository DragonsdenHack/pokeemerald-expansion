Route22_Path_MapScripts::
	.byte 0

Route22Path1::
end



Route22Path_EventScript_Policia::
	trainerbattle_single TRAINER_DYLAN_5, Route22Path_Text_PoliciaIntro, Route22Path_Text_PoliciaDefeated
	msgbox Route22Path_Text_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end
