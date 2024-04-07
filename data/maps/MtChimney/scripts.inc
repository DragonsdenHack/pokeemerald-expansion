.set LOCALID_ARCHIE, 1
.set LOCALID_MAXIE, 2
.set LOCALID_TABITHA, 3
.set LOCALID_MAGMA_GRUNT_2, 22
.set LOCALID_MAGMA_GRUNT_1, 29


MtChimney_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
	.byte 0

MtChimney_OnTransition:
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
	end

MtChimney_OnResume:
	setstepcallback STEP_CB_ASH
	end

MtChimney_EventScript_Archie::
	lock
	faceplayer
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
	closemessage
	applymovement LOCALID_ARCHIE, Common_Movement_FaceOriginalDirection
	waitmovement 0
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
	release
	end

MtChimney_EventScript_ArchieGoStopTeamMagma::
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
	return

MtChimney_EventScript_ArchieBusyFighting::
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
	return

MtChimney_EventScript_Maxie::
	lockall
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
	waitmovement 0
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
	closemessage
	delay 30
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_MAXIE
	removeobject LOCALID_MAGMA_GRUNT_1
	removeobject LOCALID_TABITHA
	removeobject LOCALID_MAGMA_GRUNT_2
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
	fadescreen FADE_FROM_BLACK
	setobjectxyperm LOCALID_ARCHIE, 10, 12
	addobject LOCALID_ARCHIE
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
	removeobject LOCALID_ARCHIE
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
	releaseall
	end

MtChimney_EventScript_ArchieApproachPlayerEast::
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
	waitmovement 0
	return

MtChimney_EventScript_ArchieApproachPlayerNorth::
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
	waitmovement 0
	return

MtChimney_EventScript_ArchieExitEast::
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitEast
	waitmovement 0
	return

MtChimney_EventScript_ArchieExitNorth::
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitNorth
	waitmovement 0
	return

MtChimney_EventScript_LavaCookieLady::
	lock
	faceplayer
	showmoneybox 0, 0
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
	checkmoney 200
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
	checkitemspace ITEM_LAVA_COOKIE
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
	giveitem ITEM_LAVA_COOKIE
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
	hidemoneybox
	release
	end

MtChimney_EventScript_BagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

MtChimney_EventScript_RemoveMoney::
	removemoney 200
	updatemoneybox
	return

MtChimney_EventScript_DeclineLavaCookie::
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

MtChimney_EventScript_NotEnoughMoney::
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

MtChimney_Movement_ArchieApproachPlayerEast:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	step_end

MtChimney_Movement_ArchieExitEast:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_ArchieApproachPlayerNorth:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	step_end

MtChimney_Movement_ArchieExitNorth:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused1:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_Unused2:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_Unused3:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused4:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_Unused5:
	delay_16
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_Unused6:
	delay_16
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused7:
	delay_16
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_Unused8:
	delay_16
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_down
	step_end

MtChimney_Movement_Unused9:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused10:
	walk_down
	step_end

MtChimney_Movement_Unused11:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused12:
	delay_16
	delay_16
	walk_in_place_faster_left
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused13:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_faster_left
	delay_16
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused14:
	lock_facing_direction
	walk_fast_left
	unlock_facing_direction
	face_right
	step_end

MtChimney_Movement_Unused15:
	walk_left
	walk_in_place_faster_right
	delay_16
	step_end

MtChimney_EventScript_BusyAquaGrunt1::
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyAquaGrunt2::
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyAquaGrunt3::
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
	end

MtChimney_EventScript_Tabitha::
	trainerbattle_single TRAINER_BRUNO_1_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_BusyMagmaGrunt1::
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyMagmaGrunt2::
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyMagmaGrunt3::
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyMagmaGrunt4::
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyMagmaGrunt5::
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyMagmaGrunt6::
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
	end

MtChimney_EventScript_MagmaPoochyena::
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
	end

MtChimney_EventScript_AquaPoochyena::
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
	end

MtChimney_EventScript_MeteoriteMachine::
	lockall
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
	giveitem ITEM_METEORITE
	setflag FLAG_RECEIVED_METEORITE
	releaseall
	end

MtChimney_EventScript_LeaveMeteoriteAlone::
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
	releaseall
	end

MtChimney_EventScript_MachineOff::
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
	releaseall
	end

MtChimney_EventScript_MachineOn::
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
	releaseall
	end

MtChimney_EventScript_RouteSign::
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
	end

MtChimney_EventScript_Shelby::
	trainerbattle_single TRAINER_TRAINER_454, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat,
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
	release
	end

MtChimney_EventScript_DefeatedShelby::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_SHELBY_1
	release
	end

MtChimney_EventScript_RematchShelby::
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Melissa::
	trainerbattle_single TRAINER_TRAINER_453, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Sheila::
	trainerbattle_single TRAINER_TRAINER_452, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Shirley::
	trainerbattle_single TRAINER_TRAINER_451, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Sawyer::
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
	release
	end

MtChimney_EventScript_SawyerDefeated::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_SAWYER_1
	release
	end

MtChimney_EventScript_SawyerRematch::
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
	end

MtChimney_Text_MeteoriteWillActivateVolcano:
	.string "The power contained in the METEORITE…\p"
	.string "By amplifying its power with this\n"
	.string "machine, MT. CHIMNEY's volcanic\l"
	.string "activity will instantly intensify…\p"
	.string "Its energy will grow deep inside\n"
	.string "the crater and…\l"
	.string "Fufufu…$"

MtChimney_Text_MaxieIntro:
	.string "MAXIE: Hm?\n"
	.string "Who are you?\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "I'd heard ARCHIE bemoaning a child\n"
	.string "who's been meddling in TEAM AQUA's\l"
	.string "affairs.\p"
	.string "It must be you he meant.\p"
	.string "Humph! So you're thinking of\n"
	.string "interfering with us, TEAM MAGMA?\p"
	.string "Now you listen.\n"
	.string "Long ago, living things used the\l"
	.string "land to live and grow.\p"
	.string "That is why land is all important!\n"
	.string "It is the cradle of all!\p"
	.string "That is why TEAM MAGMA is dedicated\n"
	.string "to the expansion of the land mass.\p"
	.string "It is for further advancement of\n"
	.string "humankind and POKéMON!\p"
	.string "And for that, we need the power of\n"
	.string "what sleeps within this mountain…\p"
	.string "Oh! There was no need for you to\n"
	.string "learn that much.\p"
	.string "But, no matter!\n"
	.string "I'll teach you the consequences of\l"
	.string "meddling in our grand design!$"

MtChimney_Text_MaxieDefeat:
	.string "What?!\p"
	.string "I, MAXIE, was caught off guard?!$"

MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
	.string "MAXIE: But, enough.\n"
	.string "I will back off this time.\p"
	.string "But don't think that this is the last\n"
	.string "you've seen of TEAM MAGMA.\p"
	.string "Fufufu…\p"
	.string "Even without the METEORITE, if we\n"
	.string "obtain that ORB… Fufufu…$"

MtChimney_Text_TabithaIntro:
	.string "Hehehe!\p"
	.string "So you've come all the way here!\p"
	.string "But you're too late!\n"
	.string "I've already delivered the METEORITE\l"
	.string "from METEOR FALLS to the BOSS!$"

MtChimney_Text_TabithaDefeat:
	.string "Hehehe…\p"
	.string "Even though I've lost, if our leader\n"
	.string "awakens that thing…$"

MtChimney_Text_TabithaPostBattle:
	.string "BOSS, hurry!\n"
	.string "Give it the METEORITE's energy!\p"
	.string "Hehehe…$"

MtChimney_Text_Grunt2Intro:
	.string "We of TEAM MAGMA are working hard for\n"
	.string "everyone's sake.\p"
	.string "Like, if that thing's power made more\n"
	.string "land, there'd be more places to live.\p"
	.string "Everyone'd be happy!$"

MtChimney_Text_Grunt2Defeat:
	.string "Hunh?\n"
	.string "What do you mean I lost?$"

MtChimney_Text_Grunt2PostBattle:
	.string "Our BOSS says, “It will make everyone\n"
	.string "happy.”\p"
	.string "But why does everyone keep getting\n"
	.string "in our way?$"

MtChimney_Text_Grunt1Intro:
	.string "If there were more land, I'd be able\n"
	.string "to get a big house of my own!\p"
	.string "I'm going to build it on hardened lava!$"

MtChimney_Text_Grunt1Defeat:
	.string "My dream of a big house…$"

MtChimney_Text_Grunt1PostBattle:
	.string "A kid like you, you ought to be\n"
	.string "splashing about in the waves!$"

MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
	.string "That annoying TEAM AQUA…\n"
	.string "They always mess with our plans!$"

MtChimney_Text_MeteoritesPackAmazingPower:
	.string "METEORITES pack amazing power!$"

MtChimney_Text_YouBetterNotMessWithUs:
	.string "You'd better not mess with us!\p"
	.string "We're trying to awaken that thing\n"
	.string "for the benefit of everyone!$"

MtChimney_Text_AquasNameSimilar:
	.string "We're TEAM MAGMA!\p"
	.string "They're TEAM AQUA!\p"
	.string "It totally annoys me that they'd\n"
	.string "use a name like ours!$"

MtChimney_Text_DouseThemInFire:
	.string "Yeah!\n"
	.string "Douse them in fire!$"

MtChimney_Text_KeepMakingMoreLand:
	.string "We're going to keep making more land!$"

MtChimney_Text_Bufoh:
	.string "Bufoh!$"

MtChimney_Text_ArchieGoStopTeamMagma:
	.string "ARCHIE: Grr, {PLAYER}!\n"
	.string "I should've guessed you'd show up!\p"
	.string "See for yourself what the fanatics\n"
	.string "of TEAM MAGMA are up to!\p"
	.string "They're trying to inject the stolen\n"
	.string "METEORITE's power into the volcano!\p"
	.string "Doing something like that will cause\n"
	.string "the volcano's eruption!$"

MtChimney_Text_ArchieIHaveMyHandsFull:
	.string "ARCHIE: Grrr…\p"
	.string "I want to stop that MAXIE,\n"
	.string "but I can't!\p"
	.string "Not when I have my hands full battling\n"
	.string "three opponents at once!$"

MtChimney_Text_ArchieThankYou:
	.string "ARCHIE: {PLAYER}!\n"
	.string "Thank you!\p"
	.string "With your help, we thwarted TEAM\n"
	.string "MAGMA's destructive plan!\p"
	.string "But… You…\n"
	.string "Whose side are you on?\p"
	.string "Ah, it doesn't matter.\p"
	.string "We will remain vigilant and keep up\n"
	.string "our pursuit of TEAM MAGMA.\p"
	.string "{PLAYER}, we shall meet again!$"

MtChimney_Text_MagmaOutnumbersUs:
	.string "Darn… TEAM MAGMA outnumbers us!\n"
	.string "We can't keep up with them!$"

MtChimney_Text_LessHabitatForWaterPokemon:
	.string "If they expand the land, there'll be\n"
	.string "less habitats for WATER POKéMON!$"

MtChimney_Text_MagmasNameSimilar:
	.string "We're TEAM AQUA!\p"
	.string "They're TEAM MAGMA!\p"
	.string "It burns me up that they'd use such\n"
	.string "a confusing name!$"

MtChimney_Text_Bushaa:
	.string "Bushaa!$"

MtChimney_Text_LavaCookiesJust200:
	.string	"Las GALLETAS LAVA son la especialidad\n"
	.string	"del MONTE CENIZO.\p"
	.string	"Prueba una. Son sólo 200¥.$"

MtChimney_Text_ThankYouDear:
	.string	"¡Muchas gracias!$"

MtChimney_Text_YouveNotGotTheMoney:
	.string	"Pero vamos a ver: si no tienes dinero,\n"
	.string	"no puedes comprar nada de nada.$"

MtChimney_Text_OhFineThen:
	.string	"Bueno. Tú te lo pierdes…$"

MtChimney_Text_MetoriteFittedOnMachine:
	.string "A METEORITE is fitted on a mysterious\n"
	.string "machine…\p"
	.string "The machine seems to be storing\n"
	.string "energy in the METEORITE.$"

MtChimney_Text_RemoveTheMeteorite:
	.string "A METEORITE is fitted on a mysterious\n"
	.string "machine…\p"
	.string "Do you want to remove the METEORITE?$"

MtChimney_Text_PlayerRemovedMeteorite:
	.string "{PLAYER} removed the METEORITE from\n"
	.string "the mysterious machine.$"

MtChimney_Text_PlayerLeftMeteorite:
	.string "{PLAYER} left the METEORITE where\n"
	.string "it was.$"

MtChimney_Text_MachineMakesNoResponse:
	.string "This mysterious machine…\n"
	.string "It makes no response whatsoever.$"

MtChimney_Text_RouteSign:
	.string "{DOWN_ARROW} JAGGED PATH\n"
	.string "LAVARIDGE TOWN AHEAD$"

MtChimney_Text_ShelbyIntro:
	.string "He estado en las fuentes termales y he\n"
	.string "descansado mis pobres huesos. ¡Ahora\l"
	.string "me siento fuerte como un toro!$"

MtChimney_Text_ShelbyDefeat:
	.string "Vaya, vaya, vaya… Tienes un estilo\n"
	.string "increíble luchando.$"

MtChimney_Text_ShelbyPostBattle:
	.string "Soy una Pokéabu con mucha experiencia,\n"
	.string "pero aún me pueden dar una lección…$"

MtChimney_Text_ShelbyRegister:
	.string "Thank you, child. It was fun, as if\n"
	.string "I were battling my own grandchild.\p"
	.string "Please, come see me again for\n"
	.string "a rematch.$"

MtChimney_Text_ShelbyRematchIntro:
	.string "If you can mesh your heart with those\n"
	.string "of your POKéMON, why, you should be\l"
	.string "able to achieve great things.$"

MtChimney_Text_ShelbyRematchDefeat:
	.string "Oh, my goodness.\n"
	.string "Now, aren't you something!$"

MtChimney_Text_ShelbyPostRematch:
	.string "Perhaps your heart has become one\n"
	.string "with the hearts of your POKéMON.$"

MtChimney_Text_MelissaIntro:
	.string "Estoy la mar de nerviosa. Tengo que\n"
	.string "descargar adrenalina. ¡Vamos a luchar!$"

MtChimney_Text_MelissaDefeat:
	.string "Me he quedado la mar de tranquila…$"

MtChimney_Text_MelissaPostBattle:
	.string "No hay nada como un poco de ejercicio\n"
	.string "para recuperar el buen humor.$"

MtChimney_Text_SheilaIntro:
	.string "Por fin he llegado al Monte Cenizo. ¡Y\n"
	.string "ahora quiero un combate Pokémon!$"

MtChimney_Text_SheilaDefeat:
	.string "Tu manera de luchar… ¡es como una\n"
	.string "erupción volcánica!$"

MtChimney_Text_SheilaPostBattle:
	.string "Pues sí, por fin he llegado al Monte\n"
	.string "Cenizo y no me voy a dedicar sólo a\l"
	.string "hacer visitas… También quiero luchar\l"
	.string "un poquito y comprar galletas de\l"
	.string "recuerdo.$"

MtChimney_Text_ShirleyIntro:
	.string "Desde que fui a los baños termales, me\n"
	.string "siento como nueva. ¡Seguro que te gano!$"

MtChimney_Text_ShirleyDefeat:
	.string "¡Achís! ¡Creo que he pillado frío!$"

MtChimney_Text_ShirleyPostBattle:
	.string "Mejor me vuelvo a los baños… ¿Te\n"
	.string "apuntas? Ya, ya sé que tienes cosas más\l"
	.string "importantes que hacer…$"

MtChimney_Text_SawyerIntro:
	.string "This is one fine mountain! Plenty of\n"
	.string "hot people around for company!$"

MtChimney_Text_SawyerDefeat:
	.string "Oh, you're a real firebrand, too!$"

MtChimney_Text_SawyerPostBattle:
	.string "I think I need a dip in LAVARIDGE\n"
	.string "HOT SPRING with the locals!$"

MtChimney_Text_SawyerRegister:
	.string "I like little fireballs like you.\n"
	.string "Let me register you in my POKéNAV.$"

MtChimney_Text_SawyerRematchIntro:
	.string "I'm happily surrounded by hot people\n"
	.string "around these parts. I won't lose!$"

MtChimney_Text_SawyerRematchDefeat:
	.string "Gosh, you're still the same\n"
	.string "firebrand as before!$"

MtChimney_Text_SawyerPostRematch:
	.string "Actually, it really is hot here.\n"
	.string "I'm overdressed for these parts.$"

MtChimney_EventScript_Primer_Policia::
	trainerbattle_single TRAINER_TRAINER_562, MtChimney_Text_PrimerPoliciaIntro, MtChimney_Text_PrimerPoliciaDefeat
	msgbox MtChimney_Text_PrimerPoliciaPostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Segundo_Policia::
	trainerbattle_single TRAINER_TRAINER_563, MtChimney_Text_SegundoPoliciaIntro, MtChimney_Text_SegundoPoliciaDefeat
	msgbox MtChimney_Text_SegundoPoliciaPostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Tercer_Policia::
	trainerbattle_single TRAINER_TRAINER_564, MtChimney_Text_TercerPoliciaIntro, MtChimney_Text_TercerPoliciaDefeat
	msgbox MtChimney_Text_TercerPoliciaPostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Primer_Cientifico::
	trainerbattle_single TRAINER_TRAINER_565, MtChimney_Text_PrimerCientificoIntro, MtChimney_Text_PrimerCientificoDefeat
	msgbox MtChimney_Text_PrimerCientificoPostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_NPC5_Cientifico::
lock
faceplayer
msgbox MtChimney_NPC5_Cientifico_Texto_1 MSGBOX_NPC
release
end

MtChimney_NPC5_Cientifico_Texto_1:
	.string "Algunos meteoritos de la CASCADA\n"
	.string "METEORO tienen propiedades\l"
	.string "asombrosas, podrían calmar o hacer\l"
	.string "estallar un volcán como este.$"

MtChimney_NPC16_Cientifico::
lock
faceplayer
msgbox MtChimney_NPC16_Cientifico_Texto_1 MSGBOX_NPC
release
end

MtChimney_NPC16_Cientifico_Texto_1:
	.string "La principal razón por la que estamos\n"
	.string "aquí no puede revelarse al público. ¿Por\l"
	.string "qué te digo esto? Nadie te hará caso de\l"
	.string "todos modos.$"


MtChimney_NPC19_Cientifico::
lock
faceplayer
msgbox MtChimney_NPC19_Cientifico_Texto_1 MSGBOX_NPC
release
end

MtChimney_NPC19_Cientifico_Texto_1:
	.string "En lo profundo de este lugar duerme\n"
	.string "GROUDON, aunque ya no es ningún\l"
	.string "misterio para DEVON.$"

MtChimney_NPC29_Cientifico::
lock
faceplayer
msgbox MtChimney_NPC29_Cientifico_Texto_1 MSGBOX_NPC
release
end

MtChimney_NPC29_Cientifico_Texto_1:
	.string "Me pregunto qué pasaría si arrojáramos\n"
	.string "al volcán todo el combustible para\l"
	.string "cohetes de la ESTACIÓN ESPACIAL…$"

MtChimney_NPC10_Policia::
lock
faceplayer
msgbox MtChimney_NPC10_Policia_Texto_1 MSGBOX_NPC
release
end

MtChimney_NPC10_Policia_Texto_1:
	.string "Estamos haciendo pruebas en la cima del\n"
	.string "volcán, hasta entonces los pasos están\l"
	.string "cortados.$"

MtChimney_Doctor_Rasmus::
lock
msgbox MtChimney_Doctor_Rasmus_Texto_1 MSGBOX_AUTOCLOSE
msgbox MtChimney_Doctor_Rasmus_Texto_2 MSGBOX_AUTOCLOSE
msgbox MtChimney_Doctor_Rasmus_Texto_3 MSGBOX_AUTOCLOSE
msgbox MtChimney_Doctor_Rasmus_Texto_4 MSGBOX_AUTOCLOSE
msgbox MtChimney_Doctor_Rasmus_Texto_5 MSGBOX_AUTOCLOSE
msgbox MtChimney_Doctor_Rasmus_Texto_6 MSGBOX_AUTOCLOSE
msgbox MtChimney_Doctor_Rasmus_Texto_7 MSGBOX_AUTOCLOSE
msgbox MtChimney_Doctor_Rasmus_Texto_8 MSGBOX_AUTOCLOSE
msgbox MtChimney_Doctor_Rasmus_Texto_9 MSGBOX_AUTOCLOSE
msgbox MtChimney_Doctor_Rasmus_Texto_10 MSGBOX_AUTOCLOSE
msgbox MtChimney_Doctor_Rasmus_Texto_11 MSGBOX_AUTOCLOSE
msgbox MtChimney_Doctor_Rasmus_Texto_12 MSGBOX_AUTOCLOSE
msgbox MtChimney_Doctor_Rasmus_Texto_13 MSGBOX_AUTOCLOSE
msgbox MtChimney_Doctor_Rasmus_Texto_14 MSGBOX_AUTOCLOSE
msgbox MtChimney_Doctor_Rasmus_Texto_15 MSGBOX_AUTOCLOSE
msgbox MtChimney_Doctor_Rasmus_Texto_16 MSGBOX_AUTOCLOSE
msgbox MtChimney_Doctor_Rasmus_Texto_17 MSGBOX_AUTOCLOSE
msgbox MtChimney_Doctor_Rasmus_Texto_18 MSGBOX_AUTOCLOSE
release
end

MtChimney_Doctor_Rasmus_Texto_1:
	.string "(???? arrojó algo al volcán)$"

MtChimney_Doctor_Rasmus_Texto_2:
	.string "Esta es la última prueba, 3 minutos\n"
	.string "serán suficientes para ver cómo\l"
	.string "reacciona.$"

MtChimney_Doctor_Rasmus_Texto_3:
	.string "… …$"

MtChimney_Doctor_Rasmus_Texto_4:
	.string "Ningún ENTRENADOR de por aquí debería\n"
	.string "ser capaz de burlar nuestra seguridad,\l"
	.string "menos aún de ir en contra de DEVON,\l"
	.string "¿quién eres tú?$"

MtChimney_Doctor_Rasmus_Texto_5:
	.string "… …$"

MtChimney_Doctor_Rasmus_Texto_6:
	.string "Entonces eres ese ADMIN ROCKET, no es\n"
	.string "que sea muy inteligente exponerte tan\l"
	.string "fácilmente después de derrotar a\l"
	.string "nuestros ADMIN. RUBÍ y ZAFIRO. Debes\l"
	.string "tener plena confianza en tus POKÉMON.$"

MtChimney_Doctor_Rasmus_Texto_7:
	.string "… …$"

MtChimney_Doctor_Rasmus_Texto_8:
	.string "¿Quieres saber qué hacemos aquí? …\n"
	.string "¿GROUDON?$"

MtChimney_Doctor_Rasmus_Texto_9:
	.string "Chico, hace años que sabemos todo\n"
	.string "sobre GROUDON. Es más, dominamos\l"
	.string "también su forma PRIMIGENIA.$"

MtChimney_Doctor_Rasmus_Texto_10:
	.string "No, la realidad es que he venido hasta\n"
	.string "aquí para realizar unas pruebas\l"
	.string "prácticas, observa.$"

MtChimney_Doctor_Rasmus_Texto_11:
	.string "¿Te suena ese POKÉMON? Es un\n"
	.string "BLACEPHALON. Debería sonarte, alguien\l"
	.string "como tú seguro que ya ha tenido\l"
	.string "contacto con algún ULTRAENTE.$"

MtChimney_Doctor_Rasmus_Texto_12:
	.string "Lo he arrojado al volcán para ver cómo\n"
	.string "reacciona su cuerpo.$"

MtChimney_Doctor_Rasmus_Texto_13:
	.string "¿Así que te parece una crueldad?$"

MtChimney_Doctor_Rasmus_Texto_14:
	.string "No seas hipócrita, ADMIN. ROCKET.\n"
	.string "Vosotros hacéis exactamente lo mismo\l"
	.string "con las ondas de radio.$"

MtChimney_Doctor_Rasmus_Texto_15:
	.string "A estas alturas deberías saber que el\n"
	.string "verdadero poder surge de una\l"
	.string "necesidad. No hay nada que estimule más\l"
	.string "el potencial de un POKÉMON que\l"
	.string "exponerlo a situaciones límite.$"

MtChimney_Doctor_Rasmus_Texto_16:
	.string "(???? recogió al BLACEPHALON\n"
	.string "debilitado)$"

MtChimney_Doctor_Rasmus_Texto_17:
	.string "Por eso mismo estás aquí, de no ser por\n"
	.string "las situaciones límite a las que LANCE\l"
	.string "llevó KANTO, esta versión que ves hoy\l"
	.string "de ti no existiría. Tampoco los POKÉMON\l"
	.string "que te acompañan.$"

MtChimney_Doctor_Rasmus_Texto_18:
	.string "Te hubieras quedado criando SENTRET en\n"
	.string "esa lejana isla, ¿no es ese destino más\l"
	.string "cruel?$"

