.set LOCALID_RIVAL, 16
.set LOCALID_RIVAL_ON_BIKE, 25
.set LOCALID_SCOTT, 43

Route119_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Route119_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_OnTransition
	.byte 0

Route119_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route119_EventScript_TryRemoveKecleon
	end

Route119_EventScript_TryRemoveKecleon::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

Route119_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	call Common_EventScript_SetupRivalOnBikeGfxId
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 1, Route119_EventScript_MoveInstituteWorkersDownstairs
	special SetRoute119Weather
	end

Route119_EventScript_MoveInstituteWorkersDownstairs::
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS
	setvar VAR_WEATHER_INSTITUTE_STATE, 2
	return

Route119_EventScript_RivalTrigger1::
	setvar VAR_TEMP_1, 1
	goto Route119_EventScript_RivalEncounter
	end

Route119_EventScript_RivalTrigger2::
	setvar VAR_TEMP_1, 2
	goto Route119_EventScript_RivalEncounter
	end

Route119_EventScript_RivalEncounter::
	lockall
	addobject LOCALID_RIVAL_ON_BIKE
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route119_EventScript_PlayMayMusic
	call_if_eq VAR_RESULT, FEMALE, Route119_EventScript_PlayBrendanMusic
	delay 65
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_RivalEnter1
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_RivalEnter2
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 30
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetRivalPos1
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetRivalPos2
	removeobject LOCALID_RIVAL_ON_BIKE
	addobject LOCALID_RIVAL
	delay 30
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route119_EventScript_BattleMay
	goto_if_eq VAR_RESULT, FEMALE, Route119_EventScript_BattleBrendan
	releaseall
	end

Route119_EventScript_PlayMayMusic::
	playbgm MUS_ENCOUNTER_MAY, TRUE
	return

Route119_EventScript_PlayBrendanMusic::
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	return

Route119_EventScript_BattleMay::
	msgbox Route119_Text_MayIntro, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, Route119_EventScript_BattleMayTreecko
	case 1, Route119_EventScript_BattleMayTorchic
	case 2, Route119_EventScript_BattleMayMudkip
	end

Route119_EventScript_BattleMayTreecko::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TREECKO, Route119_Text_MayDefeat
	goto Route119_EventScript_DefeatedMay
	end

Route119_EventScript_BattleMayTorchic::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TORCHIC, Route119_Text_MayDefeat
	goto Route119_EventScript_DefeatedMay
	end

Route119_EventScript_BattleMayMudkip::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_MUDKIP, Route119_Text_MayDefeat
	goto Route119_EventScript_DefeatedMay
	end

Route119_EventScript_DefeatedMay::
	msgbox Route119_Text_MayPresentForYou, MSGBOX_DEFAULT
	call Route119_EventScript_GiveFlyHM
	msgbox Route119_Text_MayExplainFly, MSGBOX_DEFAULT
	goto Route119_EventScript_RivalExitScottArrive
	end

Route119_EventScript_BattleBrendan::
	msgbox Route119_Text_BrendanIntro, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, Route119_EventScript_BattleBrendanTreecko
	case 1, Route119_EventScript_BattleBrendanTorchic
	case 2, Route119_EventScript_BattleBrendanMudkip
	end

Route119_EventScript_BattleBrendanTreecko::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TREECKO, Route119_Text_BrendanDefeat
	goto Route119_EventScript_DefeatedBrendan
	end

Route119_EventScript_BattleBrendanTorchic::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TORCHIC, Route119_Text_BrendanDefeat
	goto Route119_EventScript_DefeatedBrendan
	end

Route119_EventScript_BattleBrendanMudkip::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_MUDKIP, Route119_Text_BrendanDefeat
	goto Route119_EventScript_DefeatedBrendan
	end

Route119_EventScript_DefeatedBrendan::
	msgbox Route119_Text_BrendanIllGiveYouThis, MSGBOX_DEFAULT
	call Route119_EventScript_GiveFlyHM
	msgbox Route119_Text_BrendanExplainFly, MSGBOX_DEFAULT
	goto Route119_EventScript_RivalExitScottArrive
	end

Route119_EventScript_GiveFlyHM::
	giveitem ITEM_HM02
	setflag FLAG_RECEIVED_HM02
	return

Route119_EventScript_RivalExitScottArrive::
	closemessage
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetRivalPos1
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetRivalPos2
	removeobject LOCALID_RIVAL
	addobject LOCALID_RIVAL_ON_BIKE
	delay 30
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_RivalExit1
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_RivalExit2
	removeobject LOCALID_RIVAL_ON_BIKE
	setvar VAR_ROUTE119_STATE, 1
	savebgm MUS_DUMMY
	fadedefaultbgm
	delay 60
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_SetScottPos1
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_SetScottPos2
	addobject LOCALID_SCOTT
	applymovement LOCALID_SCOTT, Route119_Movement_ScottEnter
	waitmovement 0
	addvar VAR_SCOTT_STATE, 1
	msgbox Route119_Text_ScottWayToGoBeSeeingYou, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_TEMP_1, 1, Route119_EventScript_ScottExit1
	call_if_eq VAR_TEMP_1, 2, Route119_EventScript_ScottExit2
	removeobject LOCALID_SCOTT
	releaseall
	end

Route119_EventScript_SetScottPos1::
	setobjectxyperm LOCALID_SCOTT, 27, 25
	return

Route119_EventScript_SetScottPos2::
	setobjectxyperm LOCALID_SCOTT, 28, 25
	return

Route119_EventScript_ScottExit1::
	applymovement LOCALID_SCOTT, Route119_Movement_ScottExit1
	waitmovement 0
	return

Route119_EventScript_ScottExit2::
	applymovement LOCALID_SCOTT, Route119_Movement_ScottExit2
	waitmovement 0
	return

Route119_EventScript_RivalEnter1::
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalEnter1
	waitmovement 0
	return

Route119_EventScript_RivalEnter2::
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalEnter2
	waitmovement 0
	return

Route119_EventScript_RivalExit1::
	applymovement OBJ_EVENT_ID_PLAYER, Route119_Movement_PlayerWatchRivalExit1
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalExit1
	waitmovement 0
	return

Route119_EventScript_RivalExit2::
	applymovement OBJ_EVENT_ID_PLAYER, Route119_Movement_PlayerWatchRivalExit2
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalExit2
	waitmovement 0
	return

Route119_EventScript_SetRivalPos1::
	setobjectxyperm LOCALID_RIVAL, 25, 32
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 25, 32
	return

Route119_EventScript_SetRivalPos2::
	setobjectxyperm LOCALID_RIVAL, 26, 32
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 26, 32
	return

Route119_Movement_PlayerWatchRivalExit1:
	delay_16
	walk_in_place_faster_right
	delay_8
	walk_in_place_faster_up
	step_end

Route119_Movement_PlayerWatchRivalExit2:
	delay_16
	walk_in_place_faster_left
	delay_8
	walk_in_place_faster_up
	step_end

Route119_Movement_RivalEnter1:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	step_end

Route119_Movement_RivalEnter2:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	step_end

Route119_Movement_RivalExit1:
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Route119_Movement_RivalExit2:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Route119_Movement_ScottEnter:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	step_end

Route119_Movement_ScottExit1:
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route119_Movement_ScottExit2:
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route119_EventScript_CyclingTriathleteM::
	msgbox Route119_Text_TallGrassSnaresBikeTires, MSGBOX_NPC
	end

Route119_EventScript_RouteSignFortree::
	msgbox Route119_Text_RouteSignFortree, MSGBOX_SIGN
	end

Route119_EventScript_WeatherInstituteSign::
	msgbox Route119_Text_WeatherInstitute, MSGBOX_SIGN
	end

Route119_EventScript_Brent::
	trainerbattle_single TRAINER_TRAINER_328, Route119_Text_BrentIntro, Route119_Text_BrentDefeat
	msgbox Route119_Text_BrentPostBattle, MSGBOX_AUTOCLOSE
	end

Route119_EventScript_Donald::
	trainerbattle_single TRAINER_TRAINER_324, Route119_Text_DonaldIntro, Route119_Text_DonaldDefeat
	msgbox Route119_Text_DonaldPostBattle, MSGBOX_AUTOCLOSE
	end

Route119_EventScript_Taylor::
	trainerbattle_single TRAINER_TRAINER_326, Route119_Text_TaylorIntro, Route119_Text_TaylorDefeat
	msgbox Route119_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
	end

Route119_EventScript_Doug::
	trainerbattle_single TRAINER_TRAINER_327, Route119_Text_DougIntro, Route119_Text_DougDefeat
	msgbox Route119_Text_DougPostBattle, MSGBOX_AUTOCLOSE
	end

Route119_EventScript_Greg::
	trainerbattle_single TRAINER_TRAINER_325, Route119_Text_GregIntro, Route119_Text_GregDefeat
	msgbox Route119_Text_GregPostBattle, MSGBOX_AUTOCLOSE
	end

Route119_EventScript_Kent::
	trainerbattle_single TRAINER_TRAINER_323, Route119_Text_KentIntro, Route119_Text_KentDefeat
	msgbox Route119_Text_KentPostBattle, MSGBOX_AUTOCLOSE
	end

Route119_EventScript_Jackson::
	trainerbattle_single TRAINER_TRAINER_331, Route119_Text_JacksonIntro, Route119_Text_JacksonDefeat,
	msgbox Route119_Text_JacksonPostBattle, MSGBOX_DEFAULT
	release
	end

Route119_EventScript_RegisterJackson::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route119_Text_JacksonRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_JACKSON_1
	release
	end

Route119_EventScript_RematchJackson::
	trainerbattle_rematch TRAINER_JACKSON_1, Route119_Text_JacksonRematchIntro, Route119_Text_JacksonRematchDefeat
	msgbox Route119_Text_JacksonPostRematch, MSGBOX_AUTOCLOSE
	end

Route119_EventScript_Catherine::
	trainerbattle_single TRAINER_TRAINER_330, Route119_Text_CatherineIntro, Route119_Text_CatherineDefeat,
	msgbox Route119_Text_CatherinePostBattle, MSGBOX_DEFAULT
	release
	end

Route119_EventScript_RegisterCatherine::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route119_Text_CatherineRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CATHERINE_1
	release
	end

Route119_EventScript_RematchCatherine::
	trainerbattle_rematch TRAINER_CATHERINE_1, Route119_Text_CatherineRematchIntro, Route119_Text_CatherineRematchDefeat
	msgbox Route119_Text_CatherinePostRematch, MSGBOX_AUTOCLOSE
	end

Route119_EventScript_Hugh::
	trainerbattle_single TRAINER_TRAINER_336, Route119_Text_HughIntro, Route119_Text_HughDefeat
	msgbox Route119_Text_HughPostBattle, MSGBOX_AUTOCLOSE
	end

Route119_EventScript_Phil::
	trainerbattle_single TRAINER_TRAINER_333, Route119_Text_PhilIntro, Route119_Text_PhilDefeat
	msgbox Route119_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
	end

Route119_EventScript_Yasu::
	trainerbattle_single TRAINER_TRAINER_338, Route119_Text_YasuIntro, Route119_Text_YasuDefeat
	msgbox Route119_Text_YasuPostBattle, MSGBOX_AUTOCLOSE
	end

Route119_EventScript_Takashi::
	trainerbattle_single TRAINER_TRAINER_335, Route119_Text_TakashiIntro, Route119_Text_TakashiDefeat
	msgbox Route119_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
	end

Route119_EventScript_Hideo::
	trainerbattle_single TRAINER_TRAINER_339, Route119_Text_HideoIntro, Route119_Text_HideoDefeat
	msgbox Route119_Text_HideoPostBattle, MSGBOX_AUTOCLOSE
	end

Route119_EventScript_Chris::
	trainerbattle_single TRAINER_TRAINER_329, Route119_Text_ChrisIntro, Route119_Text_ChrisDefeat
	msgbox Route119_Text_ChrisPostBattle, MSGBOX_AUTOCLOSE
	end

Route119_EventScript_Fabian::
	trainerbattle_single TRAINER_TRAINER_337, Route119_Text_FabianIntro, Route119_Text_FabianDefeat
	msgbox Route119_Text_FabianPostBattle, MSGBOX_AUTOCLOSE
	end

Route119_EventScript_Dayton::
	trainerbattle_single TRAINER_TRAINER_334, Route119_Text_DaytonIntro, Route119_Text_DaytonDefeat
	msgbox Route119_Text_DaytonPostBattle, MSGBOX_AUTOCLOSE
	end

Route119_EventScript_Rachel::
	trainerbattle_single TRAINER_TRAINER_332, Route119_Text_RachelIntro, Route119_Text_RachelDefeat
	msgbox Route119_Text_RachelPostBattle, MSGBOX_AUTOCLOSE
	end

Route119_EventScript_BridgeAquaGrunt1::
	lock
	faceplayer
	msgbox Route119_Text_StayAwayFromWeatherInstitute, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route119_EventScript_BridgeAquaGrunt2::
	lock
	faceplayer
	msgbox Route119_Text_DontGoNearWeatherInstitute, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route119_EventScript_Boy1::
	msgbox Route119_Text_ThoughtFlyByCatchingBirdMons, MSGBOX_NPC
	end

Route119_EventScript_Boy2::
	msgbox Route119_Text_CanYourMonMakeSecretBase, MSGBOX_NPC
	end

Route119_EventScript_TrainerTipsDecoration::
	msgbox Route119_Text_TrainerTipsDecoration, MSGBOX_SIGN
	end

Route119_EventScript_ScottWonAtFortreeGymCall::
	lockall
	pokenavcall Route119_Text_ScottYouWonAtFortreeGym
	waitmessage
	clearflag FLAG_SCOTT_CALL_FORTREE_GYM
	addvar VAR_SCOTT_STATE, 1
	releaseall
	end

Route119_Text_MayIntro:
	.string "MAY: {PLAYER}{KUN}!\n"
	.string "Where were you? I was looking for you!\p"
	.string "How much stronger have you gotten?\n"
	.string "Let me check for you!\p"
	.string "Ready with your POKéMON?\n"
	.string "Of course you are! Go!$"

Route119_Text_MayDefeat:
	.string "Achah!\n"
	.string "{PLAYER}{KUN}, you're strong!\p"
	.string "I was worried that you might be\n"
	.string "struggling with your training.$"

Route119_Text_MayPresentForYou:
	.string "MAY: But I had absolutely nothing to\n"
	.string "worry about! Keep it up!\p"
	.string "And, here! I have a present for you.$"

Route119_Text_MayExplainFly:
	.string "MAY: Use FLY, and your POKéMON will\n"
	.string "instantly carry you to any town you've\l"
	.string "already visited.\p"
	.string "But, to use FLY, you have to get\n"
	.string "the GYM BADGE from FORTREE CITY.\l"
	.string "That's important, so don't forget.\p"
	.string "You should FLY home and visit\n"
	.string "LITTLEROOT for a change.\p"
	.string "I bet your mom's worried about you,\n"
	.string "{PLAYER}{KUN}.\p"
	.string "Well, let's meet again somewhere!$"

Route119_Text_BrendanIntro:
	.string "BRENDAN: {PLAYER}! So this is where\n"
	.string "you've been looking for POKéMON?\p"
	.string "Let me see how good you got.\n"
	.string "I'll test you!\p"
	.string "Now!\n"
	.string "It's a battle, so battle!$"

Route119_Text_BrendanDefeat:
	.string "Hmm…\n"
	.string "You've gotten pretty darn decent.$"

Route119_Text_BrendanIllGiveYouThis:
	.string "BRENDAN: I'd say you're good enough\n"
	.string "to search for POKéMON anywhere.\p"
	.string "Here, I'll give you this.\n"
	.string "Try it out.$"

Route119_Text_BrendanExplainFly:
	.string "BRENDAN: Use FLY, and your POKéMON\n"
	.string "instantly carries you to any town\l"
	.string "you've already visited.\p"
	.string "But you need the FORTREE GYM BADGE \n"
	.string "to do that.\p"
	.string "Anyway, I have to move along.$"

Route119_Text_ScottWayToGoBeSeeingYou:
	.string "SCOTT: Hahahah!\n"
	.string "Way to go, {PLAYER}{KUN}!\p"
	.string "I just passed by a TRAINER riding\n"
	.string "a BIKE.\p"
	.string "You just beat that TRAINER, didn't you?\n"
	.string "It was pretty obvious that you did.\p"
	.string "The kid looked really upset with\n"
	.string "a face all red from anger.\p"
	.string "I sure seem to run into you often.\n"
	.string "Are you off to FORTREE GYM next?\p"
	.string "I expect that you'll do well at the GYM.\n"
	.string "Well, I'll be seeing you!$"


Route119_Text_ScottYouWonAtFortreeGym:
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "SCOTT: Hiya, {PLAYER}{KUN}, it's me!\p"
	.string "Just as I thought, you won at\n"
	.string "the FORTREE GYM.\p"
	.string "Your strength…\n"
	.string "Perhaps you really are the TRAINER\l"
	.string "that I've been searching for.\p"
	.string "Remember, you have a fan in me.\n"
	.string "I'll be cheering from the sidelines.\l"
	.string "Keep up the great work!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

Route119_Text_StayAwayFromWeatherInstitute:
	.string "We're standing lookout here.\p"
	.string "Hey, you! Stay away from the WEATHER\n"
	.string "INSTITUTE. It's not safe.$"

Route119_Text_DontGoNearWeatherInstitute:
	.string "Lookout duty is surprisingly boring.\p"
	.string "Hey, you! Please don't go near the\n"
	.string "WEATHER INSTITUTE.$"

Route119_Text_ThoughtFlyByCatchingBirdMons:
	.string	"Pensé que para usar VUELO necesitabas\n"
	.string	"un montón de POKéMON PÁJARO en\l"
	.string	"los que poder montarte.\p"
	.string	"¡Pero resulta que hay un movimiento\n"
	.string	"de MO llamado VUELO!\p"
	.string	"Si lo hubiera sabido antes{PAUSE 5}…{PAUSE 5}$"

Route119_Text_TallGrassSnaresBikeTires:
	.string	"Uf… No hay nada que hacer…\p"
	.string	"La hierba alta se enreda en las ruedas\n"
	.string	"de la BICI. No se puede seguir{PAUSE 5}…{PAUSE 5}$"

Route119_Text_CanYourMonMakeSecretBase:
	.string	"¿Tu POKéMON puede usar DAÑO\n"
	.string	"SECRETO en un montón de hierba\l"
	.string	"y crear una BASE SECRETA?$"

Route119_Text_RouteSignFortree:
	.string	"RUTA 119\n"
	.string	"{RIGHT_ARROW} CIUDAD ARBORADA$"

Route119_Text_WeatherInstitute:
	.string	"INSTITUTO METEOROLÓGICO$"

Route119_Text_TrainerTipsDecoration:
	.string	"PISTAS para ENTRENADORES\p"
	.string	"Una BASE SECRETA se puede decorar\n"
	.string	"hasta con dieciséis muebles\l"
	.string	"y objetos de decoración.\p"
	.string	"Escoge tus objetos favoritos y crea\n"
	.string	"tu propia BASE SECRETA en el lugar\l"
	.string	"que más te guste.$"

Route119_Norman_Abajo::
lock
applymovement OBJ_EVENT_ID_PLAYER, Route119_Norman_Move_1.1
waitmovement 0x0
delay 15
goto Route119_Norman

Route119_Norman_Arriba::
lock
applymovement OBJ_EVENT_ID_PLAYER, Route119_Norman_Move_1
waitmovement 0x0
delay 15
goto Route119_Norman

Route119_Norman::
msgbox Route119_Norman_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route119_Norman_Move_2
waitmovement 0x0
delay 15
applymovement 44, Route119_Norman_Move_3
waitmovement 0x0
msgbox Route119_Norman_Texto_2 MSGBOX_AUTOCLOSE
applymovement 44, Route119_Norman_Move_4
waitmovement 0x0
msgbox Route119_Norman_Texto_3 MSGBOX_AUTOCLOSE
applymovement 44, Route119_Norman_Move_5
waitmovement 0x0
msgbox Route119_Norman_Texto_4 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route119_Norman_Move_5
waitmovement 0x0
msgbox Route119_Norman_Texto_5 MSGBOX_AUTOCLOSE
applymovement 44, Route119_Norman_Move_6
waitmovement 0x0
msgbox Route119_Norman_Texto_6 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route119_Norman_Move_7
waitmovement 0x0
msgbox Route119_Norman_Texto_7 MSGBOX_AUTOCLOSE
applymovement 44, Route119_Norman_Move_8
waitmovement 0x0
msgbox Route119_Norman_Texto_8 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route119_Norman_Move_10
applymovement 44, Route119_Norman_Move_9
waitmovement 0x0
playse SE_PIN
applymovement 44, Route119_Norman_Move_11
waitmovement 0x0
delay 15
msgbox Route119_Norman_Texto_9 MSGBOX_AUTOCLOSE
delay 15
applymovement 44, Route119_Norman_Move_7
waitmovement 0x0
msgbox Route119_Norman_Texto_10 MSGBOX_AUTOCLOSE
applymovement 44, Route119_Norman_Move_2
waitmovement 0x0
msgbox Route119_Norman_Texto_11 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route119_Norman_Move_8
waitmovement 0x0
msgbox Route119_Norman_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox Route119_Norman_Texto_13 MSGBOX_AUTOCLOSE
applymovement 44, Route119_Norman_Move_12
waitmovement 0x0
msgbox Route119_Norman_Texto_14 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route119_Norman_Move_8
waitmovement 0x0
msgbox Route119_Norman_Texto_15 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 44, Route119_Norman_Move_11
waitmovement 0x0
msgbox Route119_Norman_Texto_16 MSGBOX_AUTOCLOSE
applymovement 44, Route119_Norman_Move_13
waitmovement 0x0
msgbox Route119_Norman_Texto_17 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route119_Norman_Move_8
waitmovement 0x0
delay 15
applymovement 44, Route119_Norman_Move_14
waitmovement 0x0
msgbox Route119_Norman_Texto_18 MSGBOX_AUTOCLOSE
applymovement 44, Route119_Norman_Move_15
waitmovement 0x0
msgbox Route119_Norman_Texto_19 MSGBOX_AUTOCLOSE
applymovement 44, Route119_Norman_Move_16
waitmovement 0x0
msgbox Route119_Norman_Texto_20 MSGBOX_AUTOCLOSE
playfanfare MUS_REGISTER_MATCH_CALL
msgbox Route119_Norman_Texto_21 MSGBOX_DEFAULT
waitfanfare
msgbox Route119_Norman_Texto_8.1 MSGBOX_AUTOCLOSE
applymovement 44, Route119_Norman_Move_17
waitmovement 0x0
msgbox Route119_Norman_Texto_8.2 MSGBOX_AUTOCLOSE
applymovement 44, Route119_Norman_Move_18
waitmovement 0x0
setflag FLAG_HOENN_27
removeobject 44
setvar VAR_UNUSED_0x40F8, 5
release
end

Route119_Norman_Move_18:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Route119_Norman_Move_17:
walk_right
step_end

Route119_Norman_Move_16:
walk_in_place_left
step_end

Route119_Norman_Move_15:
walk_left
walk_left
step_end

Route119_Norman_Move_14:
lock_facing_direction
walk_slow_right
unlock_facing_direction
step_end

Route119_Norman_Move_13:
walk_left
step_end

Route119_Norman_Move_12:
walk_up
walk_left
step_end

Route119_Norman_Move_11:
emote_exclamation_mark
step_end

Route119_Norman_Move_10:
delay_16
face_down
delay_16
delay_16
face_right
delay_16
walk_in_place_right
step_end

Route119_Norman_Move_9:
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Route119_Norman_Move_8:
walk_in_place_right
step_end

Route119_Norman_Move_7:
face_left
step_end

Route119_Norman_Move_6:
face_right
delay_16
delay_16
step_end

Route119_Norman_Move_5:
face_up
step_end

Route119_Norman_Move_4:
walk_slow_right
step_end

Route119_Norman_Move_3:
face_right
delay_16
step_end

Route119_Norman_Move_2:
walk_slow_left
step_end

Route119_Norman_Move_1.1:
walk_up
face_left
step_end

Route119_Norman_Move_1:
walk_in_place_left
step_end

Route119_Norman_Texto_9:
	.string "NORMAN: {PAUSE 25}…{PAUSE 25} …{PAUSE 15}$"

Route119_Norman_Texto_10:
	.string "Así que me entiendes.$"

Route119_Norman_Texto_11:
	.string "Ya veo, también te has expuesto a\n"
	.string "muchas verdades incómodas. Pero, no\l"
	.string "eres de HOENN, ¿verdad?$"

Route119_Norman_Texto_12:
	.string "{PAUSE 25}…{PAUSE 25} …{PAUSE 15}$"

Route119_Norman_Texto_13:
	.string "KANTO… así que el TEAM ROCKET y DEVON\n"
	.string "están librando una guerra silenciosa.$"

Route119_Norman_Texto_14:
	.string "Pero, ¿por qué me cuentas esto?$"

Route119_Norman_Texto_15:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 5}$"

Route119_Norman_Texto_16:
	.string "Crees que tenemos intereses comunes,\n"
	.string "¿y por ello me quieres como contacto?$"

Route119_Norman_Texto_17:
	.string "Escucha, ¿{PLAYER}? El hijo del\n"
	.string "PRESIDENTE está en una situación\l"
	.string "similar al mío, ¿por qué debería de\l"
	.string "fiarme más de vuestra organización?$"

Route119_Norman_Texto_18:
	.string "Oh{PAUSE 25}…{PAUSE 25} Vuestro LÍDER también{PAUSE 15}…{PAUSE 15} En ese\n"
	.string "caso{PAUSE 15}…{PAUSE 5}$"

Route119_Norman_Texto_19:
	.string "No puedo prometerte nada ni estoy en\n"
	.string "las altas esferas de DEVON. Solo soy un\l"
	.string "LÍDER de GIMNASIO, al servicio de la\l"
	.string "LIGA POKÉMON.$"

Route119_Norman_Texto_20:
	.string "Pero{PAUSE 25}…{PAUSE 25} si me entero de algo que pueda\n"
	.string "comprometer el futuro de los\l"
	.string "entrenadores en esta región, te lo haré\l"
	.string "saber.$"

Route119_Norman_Texto_21:
	.string "¡{PLAYER} obtuvo el\n"
	.string "contacto de NORMAN!$"

Route119_Norman_Texto_1:
	.string "NORMAN: Entonces… ni KANTO, ni JOHTO,\n"
	.string "ni ahora HOENN.$"

Route119_Norman_Texto_2:
.string "Disculpa, ¿nos hemos visto antes?$"

Route119_Norman_Texto_3:
	.string "En el MUSEO OCEÁNICO, ¿no? Me suena\n"
	.string "haberte visto también en CIUDAD OLIVO.$"

Route119_Norman_Texto_4:
	.string "Esta ruta es impresionante, ¿no crees?$"

Route119_Norman_Texto_5:
	.string "En otras regiones es imposible\n"
	.string "encontrar una fauna tan salvaje, creí\l"
	.string "que HOENN iba a ser diferente en muchos\l"
	.string "otros aspectos.$"

Route119_Norman_Texto_6:
	.string "El cauce de las cosas nos empuja hacia\n"
	.string "otro lado. La tecnología que han\l"
	.string "desarrollado grandes empresas en las\l"
	.string "sombras cambiará el modo de concebir el\l"
	.string "combate POKÉMON para siempre.$"

Route119_Norman_Texto_7:
	.string "Supongo que tendré que resignarme.$"

Route119_Norman_Texto_8:
	.string "Pero, como nuevo LÍDER de CIUDAD\n"
	.string "PETALIA, trataré de cambiar el sistema\l"
	.string "desde dentro.$"

Route119_Norman_Texto_8.1:
	.string "Sea como sea, en algo tienen razón:\n"
	.string "el gran público no está aún preparado\l"
	.string "para un gran cambio.$"

Route119_Norman_Texto_8.2:
	.string "Que la LIGA POKÉMON permanezca\n"
	.string "imperturbable será importante para\l"
	.string "mantener la cordura.$"

Route119_Primer_Policia::
lock
faceplayer
msgbox Route119_Primer_Policia_Texto_1 MSGBOX_NPC
release
end

Route119_Primer_Policia_Texto_1:
	.string	"A ver cuándo terminan…\p"
	.string	"¡Oye, tú! No te acerques al INSTITUTO\n"
	.string	"METEOROLÓGICO. Es una advertencia.$"

Route119_Segundo_Policia::
lock
faceplayer
msgbox Route119_Segundo_Policia_Texto_1 MSGBOX_NPC
release
end

Route119_Segundo_Policia_Texto_1:
	.string	"Estas reuniones burocráticas…\p"
	.string	"¡Oye, tú! No te acerques al INSTITUTO\n"
	.string	"METEOROLÓGICO. DEVON está reunida.$"
