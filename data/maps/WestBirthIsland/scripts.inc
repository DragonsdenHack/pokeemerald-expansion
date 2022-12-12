WestBirthIsland_MapScripts::
	.byte 0

WestBirthIsland1::
end



WestBirthIsland_EventScript_Montanero::
	trainerbattle_single TRAINER_EDWIN_2, WestBirthIsland_Text_MontaneroIntro, WestBirthIsland_Text_MontaneroDefeated
	msgbox WestBirthIsland_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end
