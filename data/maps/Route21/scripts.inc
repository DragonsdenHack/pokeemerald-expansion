Route21_MapScripts::
	.byte 0

Route21_1::
end

Route21_2::
end

Route21_3::
end

Route21_4::
end


Route21_5::
end



Route21_EventScript_Pescador::
	trainerbattle_single TRAINER_EDWARD, Route21_Text_PescadorIntro, Route21_Text_PescadorDefeated
	msgbox Route21_PescadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route21_EventScript_Pescador2::
	trainerbattle_single TRAINER_JEFFREY_4, Route21_Text_Pescador2Intro, Route21_Text_Pescador2Defeated
	msgbox Route21_Pescador2PostBattle, MSGBOX_AUTOCLOSE
	end



Route21_EventScript_Nadador::
	trainerbattle_single TRAINER_MAURA, Route21_Text_NadadorIntro, Route21_Text_NadadorDefeated
	msgbox Route21_NadadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route21_EventScript_Pareja1::
	trainerbattle_single TRAINER_ERNEST_1, Route21_Text_Pareja1Intro, Route21_Text_Pareja1Defeated
	msgbox Route21_Text_Pareja1PostBattle, MSGBOX_AUTOCLOSE
	end



Route21_EventScript_Pareja2::
	trainerbattle_single TRAINER_ERNEST_1, Route21_Text_Pareja2Intro, Route21_Text_Pareja2Defeated
	msgbox Route21_Text_Pareja2PostBattle, MSGBOX_AUTOCLOSE
	end
