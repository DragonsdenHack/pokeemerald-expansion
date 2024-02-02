CuevaTesoro1_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, CuevaTesoro1_OnResume
	.byte 0

CuevaTesoro1_OnResume:
	call CuevaTesoro1_SetupEscapeWarp
	end

CuevaTesoro1_SetupEscapeWarp::
	setescapewarp MAP_PLAYA_TESORO, 9, 34
	return



CuevaTesoro1_EventScript_Policia::
	trainerbattle_single TRAINER_TRAINER_91, CuevaTesoro1_Text_PoliciaIntro, CuevaTesoro1_Text_PoliciaDefeated
	msgbox CuevaTesoro1_Text_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



CuevaTesoro1_EventScript_Policia2::
	trainerbattle_single TRAINER_TRAINER_92, CuevaTesoro1_Text_Policia2Intro, CuevaTesoro1_Text_Policia2Defeated
	msgbox CuevaTesoro1_Text_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



CuevaTesoro1_EventScript_Policia3::
	trainerbattle_single TRAINER_TRAINER_94, CuevaTesoro1_Text_Policia3Intro, CuevaTesoro1_Text_Policia3Defeated
	msgbox CuevaTesoro1_Text_Policia3PostBattle, MSGBOX_AUTOCLOSE
	end



CuevaTesoro1_EventScript_Policia4::
	trainerbattle_single TRAINER_TRAINER_93, CuevaTesoro1_Text_Policia4Intro, CuevaTesoro1_Text_Policia4Defeated
	msgbox CuevaTesoro1_Text_Policia4PostBattle, MSGBOX_AUTOCLOSE
	end
