MahoganyTown_Gym_MapScripts::
	.byte 0

MahoganyTownGym1::
end



MahoganyTownGym2::
end



MahoganyTownGym4::
end



MahoganyTownGym5::
end



MahoganyTownGym6::
end



MahoganyTownGym7::
end



MahoganyTownGym_EventScript_Guay::
	trainerbattle_single TRAINER_BRYAN, MahoganyTownGym_Text_GuayIntro, MahoganyTownGym_Text_GuayDefeated
	msgbox MahoganyTownGym_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end



MahoganyTownGym_EventScript_Guay2::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, MahoganyTownGym_Text_Guay2Intro, MahoganyTownGym_Text_Guay2Defeated
	msgbox MahoganyTownGym_Text_Guay2PostBattle, MSGBOX_AUTOCLOSE
	end



MahoganyTownGym_EventScript_Guay3::
	trainerbattle_single TRAINER_ISABELLA, MahoganyTownGym_Text_Guay3Intro, MahoganyTownGym_Text_Guay3Defeated
	msgbox MahoganyTownGym_Text_Guay3PostBattle, MSGBOX_AUTOCLOSE
	end



MahoganyTownGym_EventScript_Guay4::
	trainerbattle_single TRAINER_GRUNT_JAGGED_PASS, MahoganyTownGym_Text_Guay4Intro, MahoganyTownGym_Text_Guay4Defeated
	msgbox MahoganyTownGym_Text_Guay4PostBattle, MSGBOX_AUTOCLOSE
	end
