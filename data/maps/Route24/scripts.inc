Route24_MapScripts::
	.byte 0

Route24_1::
end

Route24_2::
end

Route24_3::
end

Route24_4::
end


Route24_5::
end

Route24_6::
end

Route24_7::
end

Route24_8::
end

Route24_EventScript_Cazabichos::
	trainerbattle_single TRAINER_VALERIE_3, Route24_Text_CazabichosIntro, Route24_Text_CazabichosDefeated
	msgbox Route24_Text_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end


Route24_EventScript_Chica::
	trainerbattle_single TRAINER_MELISSA, Route24_Text_ChicaIntro, Route24_Text_ChicaDefeated
	msgbox Route24_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route24_EventScript_Chico::
	trainerbattle_single TRAINER_KEIRA, Route24_Text_ChicoIntro, Route24_Text_ChicoDefeated
	msgbox Route24_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



Route24_EventScript_Chica2::
	trainerbattle_single TRAINER_CINDY_6, Route24_Text_Chica2Intro, Route24_Text_Chica2Defeated
	msgbox Route24_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



Route24_EventScript_Chico2::
	trainerbattle_single TRAINER_MARK, Route24_Text_Chico2Intro, Route24_Text_Chico2Defeated
	msgbox Route24_Text_Chico2PostBattle, MSGBOX_AUTOCLOSE
	end



Route24_EventScript_Chico3::
	trainerbattle_single TRAINER_THALIA_1, Route24_Text_Chico3Intro, Route24_Text_Chico3Defeated
	msgbox Route24_Text_Chico3PostBattle, MSGBOX_AUTOCLOSE
	end
