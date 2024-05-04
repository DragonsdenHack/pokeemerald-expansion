.set LOCALID_WOMAN_1, 19
.set LOCALID_MAN_1, 20

LilycoveCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_OnLoad
	.byte 0

LilycoveCity_OnTransition:
	setflag FLAG_VISITED_LILYCOVE_CITY
	setvar VAR_CONTEST_HALL_STATE, 0
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	call Common_EventScript_SetupRivalGfxId
	end

LilycoveCity_OnLoad:
	call_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_SetWailmerMetatiles
	end

LilycoveCity_EventScript_SetWailmerMetatiles::
	setmetatile 76, 12, METATILE_Lilycove_Wailmer0, TRUE
	setmetatile 77, 12, METATILE_Lilycove_Wailmer1, TRUE
	setmetatile 76, 13, METATILE_Lilycove_Wailmer2, TRUE
	setmetatile 77, 13, METATILE_Lilycove_Wailmer3, TRUE
	setmetatile 76, 14, METATILE_Lilycove_Wailmer0_Alt, TRUE
	setmetatile 77, 14, METATILE_Lilycove_Wailmer1_Alt, TRUE
	setmetatile 76, 15, METATILE_Lilycove_Wailmer2, TRUE
	setmetatile 77, 15, METATILE_Lilycove_Wailmer3, TRUE
	setmetatile 77, 16, METATILE_Lilycove_Wailmer0_Alt, TRUE
	setmetatile 78, 16, METATILE_Lilycove_Wailmer1_Alt, TRUE
	setmetatile 77, 17, METATILE_Lilycove_Wailmer2, TRUE
	setmetatile 78, 17, METATILE_Lilycove_Wailmer3, TRUE
	return

LilycoveCity_EventScript_BerryGentleman::
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_ReceivedBerry
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
	random 10
	addvar VAR_RESULT, FIRST_BERRY_INDEX
	giveitem VAR_RESULT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_ReceivedBerry::
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Man3::
	msgbox LilycoveCity_Text_ContestHallInTown, MSGBOX_NPC
	end

LilycoveCity_EventScript_Girl::
	lock
	faceplayer
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_GirlAquaGone
	msgbox LilycoveCity_Text_StrangeCaveInCove, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_GirlAquaGone::
	msgbox LilycoveCity_Text_GoingToMoveDeleterForHMs, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_RichBoy::
	msgbox LilycoveCity_Text_ImFromKanto, MSGBOX_NPC
	end

LilycoveCity_EventScript_Sailor2::
	lock
	faceplayer
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Sailor2AquaGone
	msgbox LilycoveCity_Text_TeamAquaBeenTrainingWailmer, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Sailor2AquaGone::
	msgbox LilycoveCity_Text_SomeonePuntedTeamAquaOut, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Woman2::
	lock
	faceplayer
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Woman2AquaGone
	msgbox LilycoveCity_Text_SomeoneStoleMyPokemon, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Woman2AquaGone::
	msgbox LilycoveCity_Text_MissingPokemonCameBack, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Man2::
	msgbox LilycoveCity_Text_ImArtDealer, MSGBOX_NPC
	end

LilycoveCity_EventScript_ExpertM1::
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
	end

LilycoveCity_EventScript_ExpertF::
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
	end

LilycoveCity_EventScript_ExpertM2::
	lock
	faceplayer
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_ExpertM2AquaGone
	msgbox LilycoveCity_Text_TeamAquaRenovatedCavern, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_ExpertM2AquaGone::
	msgbox LilycoveCity_Text_TeamAquaLotGoneForGood, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Sailor1::
	msgbox LilycoveCity_Text_HeardTowerCalledSkyPillar, MSGBOX_NPC
	end

LilycoveCity_EventScript_FatMan::
	msgbox LilycoveCity_Text_SawTallTowerOnRoute131, MSGBOX_NPC
	end

LilycoveCity_EventScript_Man1::
	lockall
	msgbox LilycoveCity_Text_JustArrivedAndSawRarePokemon, MSGBOX_NPC
	applymovement LOCALID_MAN_1, Common_Movement_FaceOriginalDirection
	end

LilycoveCity_EventScript_Woman1::
	lockall
	msgbox LilycoveCity_Text_HoneymoonVowToSeeRarePokemon, MSGBOX_NPC
	applymovement LOCALID_WOMAN_1, Common_Movement_FaceOriginalDirection
	end

LilycoveCity_EventScript_CitySign::
	msgbox LilycoveCity_Text_CitySign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_ContestHallSign::
	msgbox LilycoveCity_Text_ContestHallSign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_MotelSign::
	msgbox LilycoveCity_Text_MotelSign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_MuseumSign::
	lockall
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
	switch VAR_0x8004
	case 0, LilycoveCity_EventScript_MuseumSignNoPaintings
	msgbox LilycoveCity_Text_MuseumSignPlayersExhibit, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_MuseumSignNoPaintings::
	msgbox LilycoveCity_Text_MuseumSign, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_HarborSign::
	lockall
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_HarborSignFerryReady
	msgbox LilycoveCity_Text_HarborSignUnderConstruction, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_HarborSignFerryReady::
	msgbox LilycoveCity_Text_HarborSign, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_TrainerFanClubSign::
	msgbox LilycoveCity_Text_TrainerFanClubSign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_DepartmentStoreSign::
	msgbox LilycoveCity_Text_DepartmentStoreSign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_MoveDeletersHouseSign::
	msgbox LilycoveCity_Text_MoveDeletersHouseSign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_WailmerTrainerGrunt::
	lockall
	goto_if_set FLAG_MET_WAILMER_TRAINER, LilycoveCity_EventScript_MetWailmerTrainer
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LilycoveCity_Text_GetLostMessingUpTraining, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	setflag FLAG_MET_WAILMER_TRAINER
	releaseall
	end

LilycoveCity_EventScript_MetWailmerTrainer::
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_AquaGrunt1::
	msgbox LilycoveCity_Text_MovedLootIntoHideoutToday, MSGBOX_NPC
	end

LilycoveCity_EventScript_AquaGrunt2::
	msgbox LilycoveCity_Text_ChanceToDoBigThings, MSGBOX_NPC
	end

LilycoveCity_EventScript_AquaGrunt3::
	msgbox LilycoveCity_Text_DontGoNearCaveInCove, MSGBOX_NPC
	end

LilycoveCity_EventScript_AquaGrunt4::
	msgbox LilycoveCity_Text_IfWorldBecomesOurs, MSGBOX_NPC
	end

LilycoveCity_EventScript_Rival::
	lock
	faceplayer
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, LilycoveCity_EventScript_May
	goto_if_eq VAR_RESULT, FEMALE, LilycoveCity_EventScript_Brendan
	end

LilycoveCity_EventScript_May::
	playbgm MUS_ENCOUNTER_MAY, TRUE
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattleAgain
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattle
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineMayBattle
	msgbox LilycoveCity_Text_MayWontBeBeaten, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, LilycoveCity_EventScript_BattleMayTreecko
	case 1, LilycoveCity_EventScript_BattleMayTorchic
	case 2, LilycoveCity_EventScript_BattleMayMudkip
	end

LilycoveCity_EventScript_MayAskToBattleAgain::
	msgbox LilycoveCity_Text_MayBattleMe, MSGBOX_YESNO
	return

LilycoveCity_EventScript_MayAskToBattle::
	msgbox LilycoveCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
	return

LilycoveCity_EventScript_DeclineMayBattle::
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
	msgbox LilycoveCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end

LilycoveCity_EventScript_Brendan::
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattleAgain
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattle
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineBrendanBattle
	msgbox LilycoveCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, LilycoveCity_EventScript_BattleBrendanTreecko
	case 1, LilycoveCity_EventScript_BattleBrendanTorchic
	case 2, LilycoveCity_EventScript_BattleBrendanMudkip
	end

LilycoveCity_EventScript_BrendanAskToBattleAgain::
	msgbox LilycoveCity_Text_BrendanBattleMe, MSGBOX_YESNO
	return

LilycoveCity_EventScript_BrendanAskToBattle::
	msgbox LilycoveCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
	return

LilycoveCity_EventScript_DeclineBrendanBattle::
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
	msgbox LilycoveCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end

LilycoveCity_EventScript_BattleMayTreecko::
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TREECKO, LilycoveCity_Text_MayDefeat
	goto LilycoveCity_EventScript_DefeatedMay
	end

LilycoveCity_EventScript_BattleMayTorchic::
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, LilycoveCity_Text_MayDefeat
	goto LilycoveCity_EventScript_DefeatedMay
	end

LilycoveCity_EventScript_BattleMayMudkip::
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_MUDKIP, LilycoveCity_Text_MayDefeat
	goto LilycoveCity_EventScript_DefeatedMay
	end

LilycoveCity_EventScript_BattleBrendanTreecko::
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TREECKO, LilycoveCity_Text_BrendanDefeat
	goto LilycoveCity_EventScript_DefeatedBrendan
	end

LilycoveCity_EventScript_BattleBrendanTorchic::
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TORCHIC, LilycoveCity_Text_BrendanDefeat
	goto LilycoveCity_EventScript_DefeatedBrendan
	end

LilycoveCity_EventScript_BattleBrendanMudkip::
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_MUDKIP, LilycoveCity_Text_BrendanDefeat
	goto LilycoveCity_EventScript_DefeatedBrendan
	end

LilycoveCity_EventScript_DefeatedMay::
	msgbox LilycoveCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
	setvar VAR_RESULT, FALSE
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_MayCollectBadges
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_MayPokemonLeague
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
	goto LilycoveCity_EventScript_RivalFlyAway
	end

LilycoveCity_EventScript_CheckFinalBadge::
	goto_if_set FLAG_BADGE08_GET, LilycoveCity_EventScript_HasFinalBadge
	return

LilycoveCity_EventScript_HasFinalBadge::
	setvar VAR_RESULT, TRUE
	return

LilycoveCity_EventScript_MayCollectBadges::
	msgbox LilycoveCity_Text_MayYouGoingToCollectBadges, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_MayPokemonLeague::
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_MayBattleFrontier
	msgbox LilycoveCity_Text_MayYouGoingToPokemonLeague, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_MayBattleFrontier::
	msgbox LilycoveCity_Text_MayYouGoingToBattleFrontier, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_DefeatedBrendan::
	msgbox LilycoveCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
	setvar VAR_RESULT, FALSE
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_BrendanCollectBadges
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_BrendanPokemonLeague
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
	goto LilycoveCity_EventScript_RivalFlyAway
	end

LilycoveCity_EventScript_BrendanCollectBadges::
	msgbox LilycoveCity_Text_BrendanYouGoingToCollectBadges, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_BrendanPokemonLeague::
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_BrendanBattleFrontier
	msgbox LilycoveCity_Text_BrendanYouGoingToPokemonLeague, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_BrendanBattleFrontier::
	msgbox LilycoveCity_Text_BrendanYouGoingToBattleFrontier, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_RivalFlyAway::
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 50
	setfieldeffectargument 0, 1
	dofieldeffect FLDEFF_NPCFLY_OUT
	delay 15
	removeobject VAR_LAST_TALKED
	waitfieldeffect FLDEFF_NPCFLY_OUT
	savebgm MUS_DUMMY
	fadedefaultbgm
	setflag FLAG_MET_RIVAL_LILYCOVE
	release
	end

LilycoveCity_EventScript_SchoolKidM::
	lock
	faceplayer
	msgbox LilycoveCity_Text_DoYouKnowAboutBerryBlender, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, LilycoveCity_EventScript_KnowAboutBerryBlender
	call_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DontKnowAboutBerryBlender
	release
	end

LilycoveCity_EventScript_KnowAboutBerryBlender::
	msgbox LilycoveCity_Text_FasterSpinBetterPokeblocks, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_DontKnowAboutBerryBlender::
	msgbox LilycoveCity_Text_ExplainBerryBlender, MSGBOX_DEFAULT
	return

LilycoveCity_Text_MayShoppingLetsBattle:
	.string "MAY: Oh, hey?\n"
	.string "{PLAYER}{KUN}, are you shopping, too?\p"
	.string "I bought a whole bunch of DOLLS and\n"
	.string "POSTERS.\p"
	.string "Of course, I've also caught a lot of\n"
	.string "POKéMON, and I'm raising them\l"
	.string "properly, too.\p"
	.string "Actually, I'm more worried if you're\n"
	.string "raising POKéMON properly, {PLAYER}{KUN}.\p"
	.string "I'll battle with you, so you can show\n"
	.string "me your POKéMON, {PLAYER}{KUN}.$"

LilycoveCity_Text_MayNotRaisingPokemon:
	.string "MAY: Oh, why? {PLAYER}{KUN}, haven't you\n"
	.string "been raising your POKéMON?\p"
	.string "That's not a very good showing as a\n"
	.string "TRAINER…{PAUSE 5}$"

LilycoveCity_Text_MayBattleMe:
	.string "MAY: Come on, battle with me, so I can\n"
	.string "check out your POKéMON!$"

LilycoveCity_Text_MayWontBeBeaten:
	.string "MAY: The POKéMON I raised won't be\n"
	.string "beaten by your POKéMON, {PLAYER}{KUN}!$"

LilycoveCity_Text_MayDefeat:
	.string "… … … … … … … …\p"
	.string "I remember the battle I had with you,\n"
	.string "{PLAYER}{KUN}, on ROUTE 103.\p"
	.string "That battle helped you become this\n"
	.string "strong, {PLAYER}{KUN}, didn't it?$"

LilycoveCity_Text_MayGoingBackToLittleroot:
	.string "MAY: I'm thinking of going back to\n"
	.string "LITTLEROOT soon.\p"
	.string "I've caught a decent group of POKéMON,\n"
	.string "and my POKéDEX is coming along, so\l"
	.string "I'm going home to show my dad.$"

LilycoveCity_Text_MayYouGoingToCollectBadges:
	.string "{PLAYER}{KUN}, what are you going to do?\p"
	.string "Collect all the GYM BADGES and take\n"
	.string "the POKéMON LEAGUE challenge?\p"
	.string "Well, while you're collecting BADGES,\n"
	.string "{PLAYER}{KUN}, I'm going to work on my\l"
	.string "POKéDEX. I'll complete it before you!\p"
	.string "See you!$"

LilycoveCity_Text_MayYouGoingToPokemonLeague:
	.string "{PLAYER}{KUN}, what are you going to do?\p"
	.string "Are you taking the POKéMON LEAGUE\n"
	.string "challenge?\p"
	.string "Or, are you going to complete your\n"
	.string "POKéDEX?\p"
	.string "I might've lost to you in battling,\n"
	.string "but I'll finish my POKéDEX before you!\p"
	.string "See you!$"

LilycoveCity_Text_MayYouGoingToBattleFrontier:
	.string "{PLAYER}{KUN}, what are you going to do?\p"
	.string "Are you taking the BATTLE FRONTIER\n"
	.string "challenge?\p"
	.string "Or, are you going to complete your\n"
	.string "POKéDEX?\p"
	.string "I might've lost to you in battling,\n"
	.string "but I'll finish my POKéDEX before you!\p"
	.string "See you!$"

LilycoveCity_Text_BrendanShoppingLetsBattle:
	.string "BRENDAN: Oh, hey, it's {PLAYER}.\p"
	.string "I'm running an errand for my dad.\n"
	.string "No, I'm not buying any DOLLS.\p"
	.string "Anyways, it's been a while.\p"
	.string "Want to have a battle to see who's been\n"
	.string "raising POKéMON better?$"

LilycoveCity_Text_BrendanNoConfidence:
	.string "BRENDAN: Oh, what's the matter?\n"
	.string "Don't have the confidence?$"

LilycoveCity_Text_BrendanBattleMe:
	.string "BRENDAN: Want to battle to see who's\n"
	.string "been raising POKéMON better?$"

LilycoveCity_Text_BrendanWontBeBeaten:
	.string "BRENDAN: Aww, but you know I'm not\n"
	.string "going to lose to no {PLAYER}.$"

LilycoveCity_Text_BrendanDefeat:
	.string "Humph…\n"
	.string "You've done a lot of raising.\p"
	.string "That stings a bit--I had a head start\n"
	.string "on you as a TRAINER…{PAUSE 5}$"

LilycoveCity_Text_BrendanGoingBackToLittleroot:
	.string "BRENDAN: I…\n"
	.string "I plan on going home to LITTLEROOT.\p"
	.string "You know I'm helping out my dad on his\n"
	.string "POKéDEX. It's coming together pretty\l"
	.string "decently, so I should go show him.$"

LilycoveCity_Text_BrendanYouGoingToCollectBadges:
	.string "{PLAYER}, what are you going to do?\p"
	.string "Collect all the GYM BADGES and take\n"
	.string "the POKéMON LEAGUE challenge?\p"
	.string "Maybe I'll do that, too…\p"
	.string "Well, anyway, hang in there!$"

LilycoveCity_Text_BrendanYouGoingToPokemonLeague:
	.string "{PLAYER}, what are you going to do?\p"
	.string "Since you're that strong, are you\n"
	.string "taking the POKéMON LEAGUE challenge?\p"
	.string "Heh, even me--if I trained my POKéMON\n"
	.string "a bit more, I should be stronger than\l"
	.string "you, {PLAYER}.\p"
	.string "Well, anyway, hang in there!$"

LilycoveCity_Text_BrendanYouGoingToBattleFrontier:
	.string "{PLAYER}, what are you going to do?\p"
	.string "Are you taking the BATTLE FRONTIER\n"
	.string "challenge?\p"
	.string "Or, are you going to complete your\n"
	.string "POKéDEX?\p"
	.string "Since you're that strong, you should\n"
	.string "consider the BATTLE FRONTIER.\p"
	.string "Heh, if I train my POKéMON a bit more,\n"
	.string "I'll get stronger than you, {PLAYER}.\p"
	.string "Maybe I should go to the BATTLE\n"
	.string "FRONTIER.\p"
	.string "Well, anyway, hang in there!$"

LilycoveCity_Text_MovedLootIntoHideoutToday:
	.string "Fufufu…\p"
	.string "We moved more loot into our secret\n"
	.string "HIDEOUT today…\p"
	.string "Wh-who are you?!\n"
	.string "I was just talking to myself!$"

LilycoveCity_Text_ChanceToDoBigThings:
	.string "I'm just a GRUNT, so I don't know what\n"
	.string "the BOSS is thinking…\p"
	.string "But being on TEAM AQUA, I know I'll get\n"
	.string "the chance to do big things!\p"
	.string "Wh-who are you?!\n"
	.string "I was just talking to myself!$"

LilycoveCity_Text_DontGoNearCaveInCove:
	.string "Hey, you!\p"
	.string "Don't go near the cave in the cove!\p"
	.string "Why? You don't need a reason why!\n"
	.string "I'm an adult, so you just listen to me!$"

LilycoveCity_Text_IfWorldBecomesOurs:
	.string "If this whole wide world becomes ours,\n"
	.string "TEAM AQUA's, it will be a happier\l"
	.string "place for POKéMON, too.$"

LilycoveCity_Text_WailmerLeapOutOfWater:
	.string "There! WAILMER!\n"
	.string "Leap out of the water now!$"

LilycoveCity_Text_GetLostMessingUpTraining:
	.string "Hunh? What do you want?\p"
	.string "You're messing up our training,\n"
	.string "so can you, like, get lost?$"

LilycoveCity_Text_ContestHallInTown:
	.string	"Hay una SALA de CONCURSOS\n"
	.string	"POKéMON en esta misma ciudad.\p"
	.string	"Eso quiere decir que POKéMON fabulosos\n"
	.string	"llegan desde cada rincón de la región.\p"
	.string	"¡Estoy deseando verlos en acción!$"

LilycoveCity_Text_StrangeCaveInCove:
	.string	"¿Has visto esa extraña cueva que hay\n"
	.string	"en la ensenada, al otro lado del pueblo?$"

LilycoveCity_Text_GoingToMoveDeleterForHMs:
	.string	"Voy a enseñar a mi POKéMON algún\n"
	.string	"movimiento nuevo para que participe\l"
	.string	"en algún CONCURSO.\p"
	.string	"Para eso tengo que visitar al QUITA-\n"
	.string	"MOVIMIENTOS y hacerle olvidar algún\l"
	.string	"movimiento de MO.$"

LilycoveCity_Text_ImFromKanto:
	.string	"Vengo desde KANTO.\p"
	.string	"Me parece que HOENN, con tanta agua\n"
	.string	"y tanto verde, es realmente precioso.\p"
	.string	"Pero una duda me corroe…\p"
	.string	"¿Es posible que haya POKéMON raros\n"
	.string	"que sólo vivan aquí?$"

LilycoveCity_Text_TeamAquaBeenTrainingWailmer:
	.string "TEAM AQUA's been training their\n"
	.string "WAILMER in the cove.\p"
	.string "We SAILORS can't get our boats out\n"
	.string "to sea with them in the way!$"

LilycoveCity_Text_SomeonePuntedTeamAquaOut:
	.string "Ahoy, did you know?\p"
	.string "Someone punted TEAM AQUA out of\n"
	.string "the way for us!\p"
	.string "That got the WAILMER out of the cove,\n"
	.string "so we can get our boats out again.$"

LilycoveCity_Text_SomeoneStoleMyPokemon:
	.string "I was taking a relaxing snooze at the\n"
	.string "seaside inn to the sound of waves…\p"
	.string "When someone stole my POKéMON!\p"
	.string "Who's the abductor?\n"
	.string "TEAM AQUA? Is it TEAM AQUA?$"

LilycoveCity_Text_MissingPokemonCameBack:
	.string "My missing POKéMON…\n"
	.string "It came back without me noticing!$"

LilycoveCity_Text_ImArtDealer:
	.string	"Soy un MARCHANTE de ARTE.\p"
	.string	"Compro y vendo arte del bueno,\n"
	.string	"sobre todo cuadros.\p"
	.string	"Me han dicho que el MUSEO de aquí\n"
	.string	"expone unas obras magníficas…{PAUSE 5}$"

LilycoveCity_Text_SeaRemainsForeverYoung:
	.string	"Nosotros envejecemos y nos arrugamos,\n"
	.string	"pero el mar continúa joven y bravío,\l"
	.string	"lleno de vida, por siempre…\p"
	.string	"Qué pensamiento tan profundo, ¿eh?$"

LilycoveCity_Text_SixtyYearsAgoHusbandProposed:
	.string	"Hace sesenta años que mi marido se me\n"
	.string	"declaró aquí… El mar sigue tan hermoso\l"
	.string	"como en aquel entonces…\p"
	.string	"Ay, que me emociono…{PAUSE 5}$"

LilycoveCity_Text_TeamAquaRenovatedCavern:
	.string	"Dime, ¿has oído hablar de esa gruta\n"
	.string	"que hay en la ensenada?\p"
	.string	"Se ha creado de forma natural,\n"
	.string	"pero el dichoso EQUIPO AQUA llegó\l"
	.string	"y tuvo que hacer reformas, claro.\p"
	.string	"¡Y se atreven a llamarse el “equipo\n"
	.string	"amante de la naturaleza”!\p"
	.string	"Lo que dicen no tiene nada que ver\n"
	.string	"con lo que hacen en realidad…{PAUSE 5}$"

LilycoveCity_Text_TeamAquaLotGoneForGood:
	.string "That cave in the cove…\p"
	.string "I didn't notice it right away,\n"
	.string "but it's completely empty now.\p"
	.string "That TEAM AQUA lot, they must\n"
	.string "have gone away for good.$"

LilycoveCity_Text_CitySign:
	.string	"CIUDAD CALAGUA\p"
	.string	"“Allí donde acaba la tierra\n"
	.string	"y empieza el mar.”$"

LilycoveCity_Text_ContestHallSign:
	.string	"SALA de CONCURSOS POKéMON\p"
	.string	"“¡Un punto de encuentro para\n"
	.string	"grandes ENTRENADORES!”$"

LilycoveCity_Text_MotelSign:
	.string	"MOTEL AGUACALA\p"
	.string	"“¡El único lugar de CALAGUA\n"
	.string	"donde el agua no cala!”$"

LilycoveCity_Text_MuseumSign:
	.string	"MUSEO de CALAGUA\p"
	.string	"“Contempla la magnífica exposición\n"
	.string	"de obras de arte POKéMON.”$"

LilycoveCity_Text_MuseumSignPlayersExhibit:
	.string	"MUSEO de CALAGUA\p"
	.string	"“Contempla la magnífica exposición\n"
	.string	"de obras de arte POKéMON de {PLAYER}.”$"

LilycoveCity_Text_HarborSignUnderConstruction:
	.string	"PUERTO de CIUDAD CALAGUA\p"
	.string	"“El ferry S.S. MAREA está siendo\n"
	.string	"construido en CIUDAD PORTUAL.\p"
	.string	"Se espera que el servicio entre\n"
	.string	"en funcionamiento en breve.”$"

LilycoveCity_Text_HarborSign:
	.string	"PUERTO de CIUDAD CALAGUA\p"
	.string	"“Disfruta de un agradable crucero\n"
	.string	"a bordo del ferry S.S. MAREA.”$"

LilycoveCity_Text_TrainerFanClubSign:
	.string	"CLUB de FANS de ENTRENADORES POKéMON\p"
	.string	"En el cartel hay garabateados un\n"
	.string	"montón de nombres de ENTRENADORES…{PAUSE 5}$"

LilycoveCity_Text_DepartmentStoreSign:
	.string	"CENTRO COMERCIAL de CALAGUA\p"
	.string	"“¡Un lugar donde comprar\n"
	.string	"y divertirse hasta la saciedad!\p"
	.string	"Busques lo que busques…,\n"
	.string	"¡lo encontrarás aquí!”$"

LilycoveCity_Text_MoveDeletersHouseSign:
	.string	"CASA del QUITA-MOVIMIENTOS\p"
	.string	"“Si no te gusta un movimiento\n"
	.string	"POKéMON, ¡bórralo!”$"

LilycoveCity_Text_DoYouKnowAboutBerryBlender:
	.string	"¿Sabes algo de la LICUABAYAS?$"

LilycoveCity_Text_FasterSpinBetterPokeblocks:
	.string	"La gente tiene que trabajar en equipo\n"
	.string	"para hacer que gire más rápido.\p"
	.string	"Cuanto más rápido gira, mejor salen\n"
	.string	"los {POKEBLOCK}S. Eso dicen.$"

LilycoveCity_Text_ExplainBerryBlender:
	.string	"Se usa para crear una especie\n"
	.string	"de caramelo que se llama {POKEBLOCK}.\p"
	.string	"Si le das un buen {POKEBLOCK} a un POKéMON,\n"
	.string	"éste mejorará un montón.$"

LilycoveCity_Text_HeardTowerCalledSkyPillar:
	.string	"He oído que hay una torre en\n"
	.string	"alguna de las rutas marítimas.\p"
	.string	"Creo que se llama PILAR CELESTE.$"

LilycoveCity_Text_SawTallTowerOnRoute131:
	.string	"Vi una torre muy alta en algún\n"
	.string	"punto de la RUTA 131.\p"
	.string	"¿Podría tratarse de…?$"

LilycoveCity_Text_JustArrivedAndSawRarePokemon:
	.string	"Acabamos de llegar y estamos\n"
	.string	"de luna de miel.\p"
	.string	"Y justo hemos visto un POKéMON\n"
	.string	"de tipo DRAGÓN volando en el cielo.\p"
	.string	"¿Hay muchos POKéMON de ese tipo\n"
	.string	"en la región de HOENN?$"

LilycoveCity_Text_HoneymoonVowToSeeRarePokemon:
	.string	"Durante nuestra luna de miel,\n"
	.string	"intentamos ver tantos POKéMON\l"
	.string	"raros como fuera posible.\p"
	.string	"Por eso nos alegró tanto ver a ese\n"
	.string	"extraño POKéMON nada más llegar.\p"
	.string	"¡Ha sido muy emocionante!$"

