.set LOCALID_LITTLE_BOY, 5

Route119_WeatherInstitute_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_1F_OnTransition
	.byte 0

Route119_WeatherInstitute_1F_OnTransition:
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_1F_EventScript_SetLittleBoyPos
	end

Route119_WeatherInstitute_1F_EventScript_SetLittleBoyPos::
	setobjectxyperm LOCALID_LITTLE_BOY, 0, 5
	setobjectmovementtype LOCALID_LITTLE_BOY, MOVEMENT_TYPE_FACE_RIGHT
	return

Route119_WeatherInstitute_1F_EventScript_LittleBoy::
	lock
	faceplayer
	special GetPlayerBigGuyGirlString
	goto_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_1F_EventScript_LittleBoyTeamAquaHere
	msgbox Route119_WeatherInstitute_1F_Text_WowYoureStrong, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_1F_EventScript_LittleBoyTeamAquaHere::
	msgbox Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_1F_EventScript_InstituteWorker1::
	lock
	faceplayer
	goto_if_unset FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_1F_EventScript_StudyingRain
	setvar VAR_0x8004, 0
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated
	goto_if_eq VAR_0x8004, 2, Route119_WeatherInstitute_1F_EventScript_StudyingRain  @ Both defeated
	msgbox Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated::
	addvar VAR_0x8004, 1
	return

Route119_WeatherInstitute_1F_EventScript_StudyingRain::
	msgbox Route119_WeatherInstitute_1F_Text_ProfStudyingRain, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_1F_EventScript_InstituteWorker2::
	msgbox Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo, MSGBOX_NPC
	end

Route119_WeatherInstitute_1F_EventScript_Bed::
	lockall
	msgbox Route119_WeatherInstitute_1F_Text_TakeRestInBed, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	releaseall
	end

Route119_WeatherInstitute_1F_EventScript_Grunt1::
	trainerbattle_single TRAINER_BRUNO_1, Route119_WeatherInstitute_1F_Text_Grunt1Intro, Route119_WeatherInstitute_1F_Text_Grunt1Defeat
	msgbox Route119_WeatherInstitute_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_1F_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, Route119_WeatherInstitute_1F_Text_Grunt4Intro, Route119_WeatherInstitute_1F_Text_Grunt4Defeat
	msgbox Route119_WeatherInstitute_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_1F_Text_Grunt1Intro:
	.string "The BOSS got interested in\n"
	.string "the research they have going here,\l"
	.string "so he sent us out.\p"
	.string "You quit meddling!$"

Route119_WeatherInstitute_1F_Text_Grunt1Defeat:
	.string "Blast it…\n"
	.string "Blasted by a kid{PAUSE 5}…{PAUSE 5}$"

Route119_WeatherInstitute_1F_Text_Grunt1PostBattle:
	.string "Our BOSS knows everything.\p"
	.string "But I'm just a GRUNT. What would I know\n"
	.string "about what he's thinking?$"

Route119_WeatherInstitute_1F_Text_Grunt4Intro:
	.string "Huh?\n"
	.string "What's a kid doing here?$"

Route119_WeatherInstitute_1F_Text_Grunt4Defeat:
	.string "Huh?\n"
	.string "I lost?!$"

Route119_WeatherInstitute_1F_Text_Grunt4PostBattle:
	.string "Oh, no…\n"
	.string "I'll catch an earful for losing to a kid…\p"
	.string "I should just take a nap in the bed{PAUSE 5}…{PAUSE 5}$"

Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs:
	.string "While I was sleeping, everyone went\n"
	.string "upstairs!$"

Route119_WeatherInstitute_1F_Text_WowYoureStrong:
	.string "Wow, you're really strong!\p"
	.string "I wish I could be a POKéMON TRAINER\n"
	.string "like you!$"

Route119_WeatherInstitute_1F_Text_ProfStudyingRain:
	.string	"Al PROFESOR le encanta la lluvia.\n"
	.string	"Eso es un hecho.\p"
	.string	"Pero si sigue lloviendo así, tendremos\n"
	.string	"problemas. Eso también es un hecho.\p"
	.string	"Por eso el PROFESOR está estudiando\n"
	.string	"cómo hacer buen uso de esta lluvia.$"

Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather:
	.string	"En el primer piso del INSTITUTO\n"
	.string	"estudiamos los fenómenos atmosféricos\l"
	.string	"de la región de HOENN.\p"
	.string	"Últimamente, estamos detectando casos\n"
	.string	"aislados de sequía e inundaciones{PAUSE 5}…{PAUSE 5}$"

Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo:
	.string "Hello!\n"
	.string "We've been saved by your actions!\p"
	.string "What I don't understand is what on\n"
	.string "earth the AQUAS were up to.$"

Route119_WeatherInstitute_1F_Text_TakeRestInBed:
	.string	"Mira, una cama…\n"
	.string	"¡A descansar!$"

Route119_EventScript_Cientifico::
	trainerbattle_single TRAINER_TRAINER_631, Route119_Text_CientificoIntro, Route119_Text_CientificoDefeat
	msgbox Route119_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end

