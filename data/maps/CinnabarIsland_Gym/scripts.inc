CinnabarIsland_Gym_MapScripts::
map_script MAP_SCRIPT_ON_LOAD, CinnabarIsland_Gym_OnLoad
	.byte 0
	
CinnabarIsland_Gym_OnLoad::
	compare VAR_UNUSED_0x40F7, 81
	goto_if_gt CinnabarIsland_Gym_OnLoadOpenAllDoors
	call_if_set FLAG_ITEM_OLD_MAGMA_HIDEOUT_B1F_MASTER_BALL, CinnabarIsland_Gym_OnLoadOpenDoor1
	call_if_set FLAG_ITEM_OLD_MAGMA_HIDEOUT_B1F_MAX_ELIXIR, CinnabarIsland_Gym_OnLoadOpenDoor2
	@@call_if_set FLAG_ITEM_OLD_MAGMA_HIDEOUT_B2F_NEST_BALL, CinnabarIsland_Gym_OnLoadOpenDoor3
	@@call_if_set FLAG_UNUSED_0x468, CinnabarIsland_Gym_OnLoadOpenDoor4
	@@call_if_set FLAG_ITEM_MT_PYRE_2F_ULTRA_BALL, CinnabarIsland_Gym_OnLoadOpenDoor5
	@@call_if_set FLAG_ITEM_MT_PYRE_4F_SEA_INCENSE, CinnabarIsland_Gym_OnLoadOpenDoor6
	end

CinnabarIsland_Gym_OnLoadOpenAllDoors::
	call CinnabarIsland_Gym_EventScript_OpenDoor1
	call CinnabarIsland_Gym_EventScript_OpenDoor2
	call CinnabarIsland_Gym_EventScript_OpenDoor3
	call CinnabarIsland_Gym_EventScript_OpenDoor4
	call CinnabarIsland_Gym_EventScript_OpenDoor5
	call CinnabarIsland_Gym_EventScript_OpenDoor6
	end

CinnabarIsland_Gym_OnLoadOpenDoor1::
	call CinnabarIsland_Gym_EventScript_OpenDoor1
	return

CinnabarIsland_Gym_OnLoadOpenDoor2::
	call CinnabarIsland_Gym_EventScript_OpenDoor2
	return

CinnabarIsland_Gym_OnLoadOpenDoor3::
	call CinnabarIsland_Gym_EventScript_OpenDoor3
	return

CinnabarIsland_Gym_OnLoadOpenDoor4::
	call CinnabarIsland_Gym_EventScript_OpenDoor4
	return

CinnabarIsland_Gym_OnLoadOpenDoor5::
	call CinnabarIsland_Gym_EventScript_OpenDoor5
	return

CinnabarIsland_Gym_OnLoadOpenDoor6::
	call CinnabarIsland_Gym_EventScript_OpenDoor6
	return

CinnabarIsland_Gym_EventScript_OpenDoor1::
	setmetatile 26,  8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
	setmetatile 27,  8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
	setmetatile 26,  9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
	setmetatile 27,  9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
	setmetatile 26, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
	setmetatile 27, 10, METATILE_CinnabarGym_Floor, 0
	setmetatile 28, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
	return

CinnabarIsland_Gym_EventScript_OpenDoor2::
	setmetatile 17,  8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
	setmetatile 18,  8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
	setmetatile 17,  9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
	setmetatile 18,  9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
	setmetatile 17, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
	setmetatile 18, 10, METATILE_CinnabarGym_Floor, 0
	setmetatile 19, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
	return

CinnabarIsland_Gym_EventScript_OpenDoor3::
	setmetatile 17, 15, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
	setmetatile 18, 15, METATILE_CinnabarGym_Floor_WallRightCorner, 0
	setmetatile 17, 16, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
	setmetatile 18, 16, METATILE_CinnabarGym_Floor_WallRightEdge, 0
	setmetatile 17, 17, METATILE_CinnabarGym_Floor_ShadeFull, 0
	setmetatile 18, 17, METATILE_CinnabarGym_Floor, 0
	setmetatile 19, 17, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
	return

CinnabarIsland_Gym_EventScript_OpenDoor4::
	setmetatile 11, 21, METATILE_CinnabarGym_Wall_RetractedBarrier, 1
	setmetatile 11, 22, METATILE_CinnabarGym_Floor_ShadeFull, 0
	setmetatile 11, 23, METATILE_CinnabarGym_Floor, 0
	return

CinnabarIsland_Gym_EventScript_OpenDoor5::
	setmetatile  5, 16, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
	setmetatile  6, 16, METATILE_CinnabarGym_Floor_WallRightCorner, 0
	setmetatile  5, 17, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
	setmetatile  6, 17, METATILE_CinnabarGym_Floor_WallRightEdge, 0
	setmetatile  5, 18, METATILE_CinnabarGym_Floor_ShadeFull, 0
	setmetatile  6, 18, METATILE_CinnabarGym_Floor, 0
	setmetatile  7, 18, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
	return

CinnabarIsland_Gym_EventScript_OpenDoor6::
	setmetatile  5,  8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
	setmetatile  6,  8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
	setmetatile  5,  9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
	setmetatile  6,  9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
	setmetatile  5, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
	setmetatile  6, 10, METATILE_CinnabarGym_Floor, 0
	setmetatile  7, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
	return

CinnabarIsland_Gym_EventScript_Quz1Left::
lockall
setvar VAR_TEMP_1, 0
goto CinnabarIsland_Gym_EventScript_Quiz1
end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
CinnabarIsland_Gym_EventScript_Quiz1::
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
	msgbox CinnabarIsland_Gym_Text_QuizQuestion1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz1Correct
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz1Incorrect
	end
	
CinnabarIsland_Gym_EventScript_CorrectAnswer::
	playfanfare MUS_LEVEL_UP
	waitfanfare
	msgbox CinnabarIsland_Gym_Text_CorrectGoOnThrough
	return

CinnabarIsland_Gym_EventScript_IncorrectAnswer::
	waitse
	playse SE_BOO
	waitse
	msgbox CinnabarIsland_Gym_Text_SorryBadCall
	closemessage
	return

CinnabarIsland_Gym_EventScript_Quiz1Correct::
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
	goto_if_set FLAG_ITEM_OLD_MAGMA_HIDEOUT_B1F_MASTER_BALL, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
	releaseall
	end

CinnabarIsland_Gym_EventScript_Quiz1Complete::
	playse SE_UNLOCK
	waitse
	call CinnabarIsland_Gym_EventScript_OpenDoor1
	special DrawWholeMapView
	setflag FLAG_ITEM_OLD_MAGMA_HIDEOUT_B1F_MASTER_BALL
	return

CinnabarIsland_Gym_EventScript_DoorAlreadyOpen::
	releaseall
	end

CinnabarIsland_Gym_EventScript_Quiz1Incorrect::
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
	goto_if_not_defeated TRAINER_SHANE, CinnabarIslandGym_EventScript_Ladron
	releaseall
	end
@@@@@@@@@@@@@@@@@@@@@@@@@@

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
CinnabarIsland_Gym_EventScript_Quiz2::
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules2
	msgbox CinnabarIsland_Gym_Text_QuizQuestion2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz2Correct
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz2Incorrect
	end
	
CinnabarIsland_Gym_EventScript_Quiz2Correct::
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
	goto_if_set FLAG_ITEM_OLD_MAGMA_HIDEOUT_B1F_MAX_ELIXIR, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
	releaseall
	end

CinnabarIsland_Gym_EventScript_Quiz2Complete::
	playse SE_UNLOCK
	waitse
	call CinnabarIsland_Gym_EventScript_OpenDoor2
	special DrawWholeMapView
	setflag FLAG_ITEM_OLD_MAGMA_HIDEOUT_B1F_MAX_ELIXIR
	return

CinnabarIsland_Gym_EventScript_Quiz2Incorrect::
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
	goto_if_not_defeated TRAINER_TAKAO, CinnabarIslandGym_EventScript_Cientifico2
	releaseall
	end
@@@@@@@@@@@@@@@@@@@@@@@@@@	

CinnabarIsland_Gym_EventScript_Quz1Right::
lockall
setvar VAR_TEMP_1, 0
goto CinnabarIsland_Gym_EventScript_Quiz1
end

CinnabarIsland_Gym_EventScript_Quz2Left::
lockall
setvar VAR_TEMP_1, 0
goto CinnabarIsland_Gym_EventScript_Quiz2
end

CinnabarIsland_Gym_EventScript_Quz2Right::
lockall
setvar VAR_TEMP_1, 0
goto CinnabarIsland_Gym_EventScript_Quiz2
end

CinnabarIsland_Gym_EventScript_Quiz3Left::
end

CinnabarIsland_Gym_EventScript_Quiz3Right::
end

CinnabarIsland_Gym_EventScript_Quiz4Left::
end

CinnabarIsland_Gym_EventScript_Quiz4Right::
end

CinnabarIsland_Gym_EventScript_Quiz2Left::
end

CinnabarIsland_Gym_EventScript_Quiz2Right::
end

CinnabarIsland_Gym_EventScript_Quiz6Left::
end

CinnabarIsland_Gym_EventScript_Quiz6Right::
end

CinnabarIsland_Gym_EventScript_Quiz5Left::
end

CinnabarIsland_Gym_EventScript_Quiz5Right::	
end

CinnabarIslandGym1::
end



CinnabarIslandGym2::
end



CinnabarIslandGym3::
end



CinnabarIslandGym4::
end



CinnabarIslandGym5::
end



CinnabarIslandGym6::
end



CinnabarIslandGym7::
end



CinnabarIslandGym8::
end



CinnabarIslandGym9::
end



CinnabarIslandGym_EventScript_Ladron::
	trainerbattle_single TRAINER_SHANE, CinnabarIslandGym_Text_LadronIntro, CinnabarIslandGym_Text_LadronDefeated
	msgbox CinnabarIslandGym_Text_LadronPostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarIslandGym_EventScript_Cientifico::
	trainerbattle_single TRAINER_TONY_5, CinnabarIslandGym_Text_CientificoIntro, CinnabarIslandGym_Text_CientificoDefeated
	msgbox CinnabarIslandGym_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarIslandGym_EventScript_Cientifico2::
	trainerbattle_single TRAINER_TAKAO, CinnabarIslandGym_Text_Cientifico2Intro, CinnabarIslandGym_Text_Cientifico2Defeated
	msgbox CinnabarIslandGym_Text_Cientifico2PostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarIslandGym_EventScript_Ladron2::
	trainerbattle_single TRAINER_JUSTIN, CinnabarIslandGym_Text_Ladron2Intro, CinnabarIslandGym_Text_Ladron2Defeated
	msgbox CinnabarIslandGym_Text_Ladron2PostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarIslandGym_EventScript_Cientifico3::
	trainerbattle_single TRAINER_HITOSHI, CinnabarIslandGym_Text_Cientifico3Intro, CinnabarIslandGym_Text_Cientifico3Defeated
	msgbox CinnabarIslandGym_Text_Cientifico3PostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarIslandGym_EventScript_Ladron3::
	trainerbattle_single TRAINER_ETHAN_1, CinnabarIslandGym_Text_Ladron3Intro, CinnabarIslandGym_Text_Ladron3Defeated
	msgbox CinnabarIslandGym_Text_Ladron3PostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarIslandGym_EventScript_Cientifico4::
	trainerbattle_single TRAINER_KIYO, CinnabarIslandGym_Text_Cientifico4Intro, CinnabarIslandGym_Text_Cientifico4Defeated
	msgbox CinnabarIslandGym_Text_Cientifico4PostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarIslandGymDocumento_100::
msgbox CinnabarIslandGymDocumento_Text_100, MSGBOX_SIGN   
end

CinnabarIslandGymDocumento_Text_100:
.string "Una foto de BLAINE\n"
	.string "y el SR. FUJI…\p"
	.string "Aparecen juntos con una sonrisa\n"
	.string "de oreja a oreja.$"
	

CinnabarIsland_Gym_Text_PokemonQuizRules:
.string "Dragonsden es guapo."
.string "$"

CinnabarIsland_Gym_Text_PokemonQuizRules2:
.string "Jenni Hermoso me besó."
.string "$"		

CinnabarIsland_Gym_Text_CorrectGoOnThrough:
.string "CLARO QUE SÍ, HOHO."
.string "$"

CinnabarIsland_Gym_Text_SorryBadCall:
.string "LO SIENTO, XAXO."
.string "$"

CinnabarIsland_Gym_Text_QuizQuestion1:
.string "¿Esto no es falso o sí?"
.string "$"

CinnabarIsland_Gym_Text_QuizQuestion2:
.string "¿Esto no es falso o sí?"
.string "$"
