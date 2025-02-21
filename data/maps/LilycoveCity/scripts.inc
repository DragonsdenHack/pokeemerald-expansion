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
	.string "POKÉMON, and I'm raising them\l"
	.string "properly, too.\p"
	.string "Actually, I'm more worried if you're\n"
	.string "raising POKÉMON properly, {PLAYER}{KUN}.\p"
	.string "I'll battle with you, so you can show\n"
	.string "me your POKÉMON, {PLAYER}{KUN}.$"

LilycoveCity_Text_MayNotRaisingPokemon:
	.string "MAY: Oh, why? {PLAYER}{KUN}, haven't you\n"
	.string "been raising your POKÉMON?\p"
	.string "That's not a very good showing as a\n"
	.string "TRAINER…{PAUSE 5}$"

LilycoveCity_Text_MayBattleMe:
	.string "MAY: Come on, battle with me, so I can\n"
	.string "check out your POKÉMON!$"

LilycoveCity_Text_MayWontBeBeaten:
	.string "MAY: The POKÉMON I raised won't be\n"
	.string "beaten by your POKÉMON, {PLAYER}{KUN}!$"

LilycoveCity_Text_MayDefeat:
	.string "… … … … … … … …\p"
	.string "I remember the battle I had with you,\n"
	.string "{PLAYER}{KUN}, on ROUTE 103.\p"
	.string "That battle helped you become this\n"
	.string "strong, {PLAYER}{KUN}, didn't it?$"

LilycoveCity_Text_MayGoingBackToLittleroot:
	.string "MAY: I'm thinking of going back to\n"
	.string "LITTLEROOT soon.\p"
	.string "I've caught a decent group of POKÉMON,\n"
	.string "and my POKéDEX is coming along, so\l"
	.string "I'm going home to show my dad.$"

LilycoveCity_Text_MayYouGoingToCollectBadges:
	.string "{PLAYER}{KUN}, what are you going to do?\p"
	.string "Collect all the GYM BADGES and take\n"
	.string "the POKÉMON LEAGUE challenge?\p"
	.string "Well, while you're collecting BADGES,\n"
	.string "{PLAYER}{KUN}, I'm going to work on my\l"
	.string "POKéDEX. I'll complete it before you!\p"
	.string "See you!$"

LilycoveCity_Text_MayYouGoingToPokemonLeague:
	.string "{PLAYER}{KUN}, what are you going to do?\p"
	.string "Are you taking the POKÉMON LEAGUE\n"
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
	.string "raising POKÉMON better?$"

LilycoveCity_Text_BrendanNoConfidence:
	.string "BRENDAN: Oh, what's the matter?\n"
	.string "Don't have the confidence?$"

LilycoveCity_Text_BrendanBattleMe:
	.string "BRENDAN: Want to battle to see who's\n"
	.string "been raising POKÉMON better?$"

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
	.string "the POKÉMON LEAGUE challenge?\p"
	.string "Maybe I'll do that, too…\p"
	.string "Well, anyway, hang in there!$"

LilycoveCity_Text_BrendanYouGoingToPokemonLeague:
	.string "{PLAYER}, what are you going to do?\p"
	.string "Since you're that strong, are you\n"
	.string "taking the POKÉMON LEAGUE challenge?\p"
	.string "Heh, even me--if I trained my POKÉMON\n"
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
	.string "Heh, if I train my POKÉMON a bit more,\n"
	.string "I'll get stronger than you, {PLAYER}.\p"
	.string "Maybe I should go to the BATTLE\n"
	.string "FRONTIER.\p"
	.string "Well, anyway, hang in there!$"

LilycoveCity_Text_MovedLootIntoHideoutToday:
	.string	"Jua, jua, jua…\p"
	.string	"Llevaremos todo nuestro botín\n"
	.string	"a la nueva GUARIDA secreta…\p"
	.string	"¡¿Qui-quién eres tú?!\n"
	.string	"¡Yo no he dicho nada!$"

LilycoveCity_Text_ChanceToDoBigThings:
	.string	"Soy solo un SOLDADO, así que no sé\n"
	.string	"nada de los planes del JEFE…\p"
	.string	"¡Pero, siendo parte del EQUIPO AQUA,\n"
	.string	"sé que vamos a hacer grandes cosas!\p"
	.string	"¡¿Qui-quién eres tú?!\n"
	.string	"¡Yo no he dicho nada!$"

LilycoveCity_Text_DontGoNearCaveInCove:
	.string	"¡Eh, tú!\p"
	.string	"¡Ni se te ocurra acercarte a la cueva\n"
	.string	"que hay en la ensenada!\p"
	.string	"¿Por qué? ¡Porque lo digo yo!\n"
	.string	"¡Soy del EQUIPO AQUA, así que obedece!$"

LilycoveCity_Text_IfWorldBecomesOurs:
	.string "If this whole wide world becomes ours,\n"
	.string "TEAM AQUA's, it will be a happier\l"
	.string "place for POKÉMON, too.$"

LilycoveCity_Text_WailmerLeapOutOfWater:
	.string "There! WAILMER!\n"
	.string "Leap out of the water now!$"

LilycoveCity_Text_GetLostMessingUpTraining:
	.string "Hunh? What do you want?\p"
	.string "You're messing up our training,\n"
	.string "so can you, like, get lost?$"

LilycoveCity_Text_ContestHallInTown:
	.string "There's a POKÉMON CONTEST HALL\n"
	.string "right in this here town. \p"
	.string "That means well-raised POKÉMON will\n"
	.string "come from all over the country.\p"
	.string "My heart swells with excitement!$"

LilycoveCity_Text_StrangeCaveInCove:
	.string	"¿Has visto esa extraña cueva que hay\n"
	.string	"en la ensenada, al otro lado del pueblo?$"

LilycoveCity_Text_GoingToMoveDeleterForHMs:
	.string "I'm going to teach my POKÉMON some new\n"
	.string "moves for entering a CONTEST.\p"
	.string "So, I'm going to see the MOVE DELETER\n"
	.string "and make it forget HM moves.$"

LilycoveCity_Text_ImFromKanto:
	.string "I came from KANTO.\p"
	.string "The HOENN region is beautiful with\n"
	.string "all its water and verdant nature.\p"
	.string "Hunh? Wait a second…\p"
	.string "Could there be rare POKÉMON that live\n"
	.string "only in this area?$"

LilycoveCity_Text_TeamAquaBeenTrainingWailmer:
	.string	"Esos granujas del EQUIPO AQUA no\n"
	.string	"paran de rondar la cueva del noreste.\p"
	.string	"Lo siguiente será impedir que\n"
	.string	"nosotros, los MARINEROS, saquemos\l"
	.string	"nuestras barcas al mar.$"

LilycoveCity_Text_SomeonePuntedTeamAquaOut:
	.string "Ahoy, did you know?\p"
	.string "Someone punted TEAM AQUA out of\n"
	.string "the way for us!\p"
	.string "That got the WAILMER out of the cove,\n"
	.string "so we can get our boats out again.$"

LilycoveCity_Text_SomeoneStoleMyPokemon:
	.string "I was taking a relaxing snooze at the\n"
	.string "seaside inn to the sound of waves…\p"
	.string "When someone stole my POKÉMON!\p"
	.string "Who's the abductor?\n"
	.string "TEAM AQUA? Is it TEAM AQUA?$"

LilycoveCity_Text_MissingPokemonCameBack:
	.string "My missing POKÉMON…\n"
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
	.string	"Dime, ¿has oído hablar de esa gruta\n"
	.string	"que hay en la ensenada?\p"
	.string	"Se ha creado de forma natural,\n"
	.string	"pero el dichoso EQUIPO AQUA llegó\l"
	.string	"y tuvo que hacer reformas, claro.\p"
	.string	"¡Y se atreven a llamarse el “equipo\n"
	.string	"amante de la naturaleza”!\p"
	.string	"Lo que dicen no tiene nada que ver\n"
	.string	"con lo que hacen en realidad…{PAUSE 5}$"

LilycoveCity_Text_CitySign:
	.string	"CIUDAD CALAGUA\p"
	.string	"“Allí donde acaba la tierra\n"
	.string	"y empieza el mar.”$"

LilycoveCity_Text_ContestHallSign:
	.string "POKÉMON CONTEST HALL\n"
	.string "“The gathering place for TRAINERS!”$"

LilycoveCity_Text_MotelSign:
	.string	"MOTEL AGUACALA\p"
	.string	"“¡El único lugar de CALAGUA\n"
	.string	"donde el agua no cala!”$"

LilycoveCity_Text_MuseumSign:
	.string "LILYCOVE MUSEUM\p"
	.string "“POKÉMON Masterpiece Collection\n"
	.string "on exhibit!”$"

LilycoveCity_Text_MuseumSignPlayersExhibit:
	.string "LILYCOVE MUSEUM\p"
	.string "“{PLAYER}'s POKÉMON Collection\n"
	.string "on exhibit!”$"

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
	.string "POKÉMON TRAINER FAN CLUB\p"
	.string "The names of TRAINERS are scribbled\n"
	.string "all over the sign…$"

LilycoveCity_Text_DepartmentStoreSign:
	.string	"CENTRO COMERCIAL de CALAGUA\p"
	.string	"“¡Un lugar donde comprar\n"
	.string	"y divertirse hasta la saciedad!\p"
	.string	"Busques lo que busques…,\n"
	.string	"¡lo encontrarás aquí!”$"

LilycoveCity_Text_MoveDeletersHouseSign:
	.string "MOVE DELETER'S HOUSE\p"
	.string "“Unwanted POKÉMON moves deleted.”$"

LilycoveCity_Text_DoYouKnowAboutBerryBlender:
	.string	"¿Sabes algo de la LICUABAYAS?$"

LilycoveCity_Text_FasterSpinBetterPokeblocks:
	.string	"La gente tiene que trabajar en equipo\n"
	.string	"para hacer que gire más rápido.\p"
	.string	"Cuanto más rápido gira, mejor salen\n"
	.string	"los {POKEBLOCK}S. Eso dicen.$"

LilycoveCity_Text_ExplainBerryBlender:
	.string "It's used for making a kind of candy\n"
	.string "called a {POKEBLOCK}.\p"
	.string "If you give a good {POKEBLOCK} to a POKÉMON,\n"
	.string "its condition will improve by a lot.$"

LilycoveCity_Text_HeardTowerCalledSkyPillar:
	.string	"He oído que hay una torre en\n"
	.string	"alguna de las rutas marítimas.\p"
	.string	"Creo que se llama PILAR CELESTE.$"

LilycoveCity_Text_SawTallTowerOnRoute131:
	.string	"Vi una torre muy alta en algún\n"
	.string	"punto de la RUTA 131.\p"
	.string	"¿Podría tratarse de…?$"

LilycoveCity_Text_JustArrivedAndSawRarePokemon:
	.string "We just arrived here on our\n"
	.string "honeymoon vacation.\p"
	.string "We happened to see a DRAGON-type\n"
	.string "POKÉMON flying way up in the sky.\p"
	.string "Do cool POKÉMON like that live in\n"
	.string "the HOENN region?$"

LilycoveCity_Text_HoneymoonVowToSeeRarePokemon:
	.string "On our honeymoon, we vowed to see as\n"
	.string "many rare POKÉMON as we can.\p"
	.string "So we were delighted to see a rare\n"
	.string "POKÉMON as soon as we arrived.\p"
	.string "I mean, we are totally happy!$"



LilycoveCity_Bloqueo_Aqua::
lock
faceplayer
msgbox LilycoveCity_Bloqueo_Aqua_Texto_1 MSGBOX_AUTOCLOSE
release
end

LilycoveCity_Bloqueo_Aqua_Texto_1:
	.string	"¿Qué haces aquí? ¿Por qué vienes\n"
	.string	"a dar la lata al EQUIPO AQUA?\p"
	.string	"¿Nuestro JEFE?\n"
	.string	"¡Jamás hablaría con alguien como tú!\p"
	.string	"¿Qué?\n"
	.string	"¿Que tú le derrotaste?\p"
	.string	"¡Jua, jua, jua! ¿Pero tú quién te\n"
	.string	"crees que eres renacuajo?$"


LilycoveCity_Primer_Artista::
lock
msgbox LilycoveCity_Primer_Artista_Texto_1 MSGBOX_DEFAULT
release
end

LilycoveCity_Primer_Artista_Texto_1:
	.string "La calidad se recuerda mucho después\n"
	.string "de que el precio se olvide.$"

LilycoveCity_Segundo_Artista::
lock
msgbox LilycoveCity_Segundo_Artista_Texto_1 MSGBOX_DEFAULT
release
end

LilycoveCity_Segundo_Artista_Texto_1:
	.string "¿Has visitado el MUSEO PORTUAL? Hay\n"
	.string "pocas obras, pero de gran calidad.$"
