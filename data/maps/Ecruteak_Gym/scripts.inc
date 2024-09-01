Ecruteak_Gym_MapScripts::
	.byte 0

EcruteakGym1::
end



EcruteakGym2::
end



EcruteakGym3::
end



EcruteakGym4::
lock     
faceplayer     
msgbox Ecruteak_Gym_Text_4, MSGBOX_DEFAULT
release     
end

Ecruteak_Gym_Text_4:
	.string "Our LEADER? I'm sorry, but JOHTO is no\n"
	.string "longer part of the POKÉMON LEAGUE. As\l"
	.string "such, our LEADER isn't obligated to be\l"
	.string "here. That's why he spends day and\l"
	.string "night at BELL TOWER.$"



EcruteakGym5::
lock     
faceplayer     
msgbox Ecruteak_Gym_Text_5, MSGBOX_DEFAULT
release     
end

Ecruteak_Gym_Text_5:
	.string "Ah, hello, young aspirant! Or so I would\n"
	.string "say if you could challenge our LEADER.\l"
	.string "Only disciples remain. Our LEADER has\l"
	.string "been the most influential SAGE in JOHTO\l"
	.string "in recent times, and as such, his place\l"
	.string "is in BELL TOWER. You'll have to climb to\l"
	.string "the top if you want to challenge him.$"



EcruteakGym6::
end



EcruteakGym_EventScript_Sabio::
	trainerbattle_single TRAINER_RELI_AND_IAN, EcruteakGym_Text_SabioIntro, EcruteakGym_Text_SabioDefeated
	msgbox EcruteakGym_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end



EcruteakGym_EventScript_Sabio2::
	trainerbattle_single TRAINER_LILA_AND_ROY_2, EcruteakGym_Text_Sabio2Intro, EcruteakGym_Text_Sabio2Defeated
	msgbox EcruteakGym_Text_Sabio2PostBattle, MSGBOX_AUTOCLOSE
	end



EcruteakGym_EventScript_Exorcista::
	trainerbattle_single TRAINER_LILA_AND_ROY_3, EcruteakGym_Text_ExorcistaIntro, EcruteakGym_Text_ExorcistaDefeated
	msgbox EcruteakGym_Text_ExorcistaPostBattle, MSGBOX_AUTOCLOSE
	end



EcruteakGym_EventScript_Exorcista2::
	trainerbattle_single TRAINER_LILA_AND_ROY_1, EcruteakGym_Text_Exorcista2Intro, EcruteakGym_Text_Exorcista2Defeated
	msgbox EcruteakGym_Text_Exorcista2PostBattle, MSGBOX_AUTOCLOSE
	end
