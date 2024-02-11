PatternBush_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, PatternBush_OnResume
	.byte 0

PatternBush_OnResume:
	call PatternBush_SetupEscapeWarp
	end

PatternBush_SetupEscapeWarp::
	setescapewarp MAP_GREEN_PATH, 63, 11
	return

PatternBush_1::
end



PatternBush_2::
end



PatternBush_3::
end



PatternBush_4::
end



PatternBush_5::
end



PatternBush_6::
end



PatternBush_7::
end



PatternBush_8::
end



PatternBush_9::
end



PatternBush_10::
end



PatternBush_11::
end



PatternBush_12::
end



PatternBush_EventScript_Chico::
	trainerbattle_single TRAINER_LYLE, PatternBush_Text_ChicoIntro, PatternBush_Text_ChicoDefeated
	msgbox PatternBush_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



PatternBush_EventScript_Cazabichos::
	trainerbattle_single TRAINER_ROBIN, PatternBush_Text_CazabichosIntro, PatternBush_Text_CazabichosDefeated
	msgbox PatternBush_Text_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end



PatternBush_EventScript_Cazabichos2::
	trainerbattle_single TRAINER_CRISSY, PatternBush_Text_Cazabichos2Intro, PatternBush_Text_Cazabichos2Defeated
	msgbox PatternBush_Text_Cazabichos2PostBattle, MSGBOX_AUTOCLOSE
	end



PatternBush_EventScript_Cazabichos3::
	trainerbattle_single TRAINER_ANDREA, PatternBush_Text_Cazabichos3Intro, PatternBush_Text_Cazabichos3Defeated
	msgbox PatternBush_Text_Cazabichos3PostBattle, MSGBOX_AUTOCLOSE
	end



PatternBush_EventScript_Chico2::
	trainerbattle_single TRAINER_RICK, PatternBush_Text_Chico2Intro, PatternBush_Text_Chico2Defeated
	msgbox PatternBush_Text_Chico2PostBattle, MSGBOX_AUTOCLOSE
	end



PatternBush_EventScript_Chico3::
	trainerbattle_single TRAINER_GREG, PatternBush_Text_Chico3Intro, PatternBush_Text_Chico3Defeated
	msgbox PatternBush_Text_Chico3PostBattle, MSGBOX_AUTOCLOSE
	end



PatternBush_EventScript_Chica::
	trainerbattle_single TRAINER_HALEY_5, PatternBush_Text_ChicaIntro, PatternBush_Text_ChicaDefeated
	msgbox PatternBush_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



PatternBush_EventScript_Chica2::
	trainerbattle_single TRAINER_DOUG, PatternBush_Text_Chica2Intro, PatternBush_Text_Chica2Defeated
	msgbox PatternBush_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



PatternBush_EventScript_Chica3::
	trainerbattle_single TRAINER_KENT, PatternBush_Text_Chica3Intro, PatternBush_Text_Chica3Defeated
	msgbox PatternBush_Text_Chica3PostBattle, MSGBOX_AUTOCLOSE
	end



PatternBush_EventScript_Chica4::
	trainerbattle_single TRAINER_SALLY, PatternBush_Text_Chica4Intro, PatternBush_Text_Chica4Defeated
	msgbox PatternBush_Text_Chica4PostBattle, MSGBOX_AUTOCLOSE
	end



PatternBush_EventScript_Chica5::
	trainerbattle_single TRAINER_JOSE, PatternBush_Text_Chica5Intro, PatternBush_Text_Chica5Defeated
	msgbox PatternBush_Text_Chica5PostBattle, MSGBOX_AUTOCLOSE
	end



PatternBush_EventScript_Montanero::
	trainerbattle_single TRAINER_JAMES_1, PatternBush_Text_MontaneroIntro, PatternBush_Text_MontaneroDefeated
	msgbox PatternBush_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end
