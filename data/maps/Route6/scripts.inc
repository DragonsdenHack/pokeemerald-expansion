Route6_MapScripts::
	.byte 0

Route6_1::
end


Route6_2::
end


Route6_3::
end


Route6_4::
end


Route6_5::
end


Route6_6::
end

Route6_EventScript_Joven1::
	trainerbattle_single TRAINER_STEVE_2, Route6_Text_Joven1Intro, Route6_Text_Joven1Defeated
	msgbox Route6_Text_Joven1PostBattle, MSGBOX_AUTOCLOSE
	end


Route6_EventScript_Dominguera::
	trainerbattle_single TRAINER_DOUGLAS, Route6_Text_Chica1Intro, Route6_Text_Chica1Defeated
	msgbox Route6_Text_Chica1PostBattle, MSGBOX_AUTOCLOSE
	end

Route6_EventScript_Cazabichos::
	trainerbattle_single TRAINER_VALERIE_5, Route6_Text_CazabichosIntro, Route6_Text_CazabichosDefeated
	msgbox Route6_Text_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end



Route6_EventScript_Chica2::
	trainerbattle_single TRAINER_DOMINIK, Route6_Text_Chica2Intro, Route6_Text_Chica2Defeated
	msgbox Route6_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



Route6_EventScript_Joven2::
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, Route6_Text_Joven2Intro, Route6_Text_Joven2Defeated
	msgbox Route6_Text_Joven2PostBattle, MSGBOX_AUTOCLOSE
	end



Route6_EventScript_Cazabichos2::
	trainerbattle_single TRAINER_VALERIE_4, Route6_Text_Cazabichos2Intro, Route6_Text_Cazabichos2Defeated
	msgbox Route6_Text_Cazabichos2PostBattle, MSGBOX_AUTOCLOSE
	end



Route6Documento_100::
msgbox Route6Documento_Text_100, MSGBOX_SIGN   
end

Route6Documento_Text_100:
	.string "UNDERGROUND PATH\n"
	.string "CERULEAN CITY - VERMILION CITY$"
