@ VAR_LAST_TALKED would have made all these direct references unnecessary
.set LOCALID_SMART_MC, 4
.set LOCALID_SMART_JUDGE, 5
.set LOCALID_SMART_CONTESTANT_1, 6
.set LOCALID_SMART_CONTESTANT_2, 7
.set LOCALID_SMART_CONTESTANT_3, 8
.set LOCALID_SMART_CONTESTANT_4, 9
.set LOCALID_SMART_AUDIENCE_4, 11
.set LOCALID_SMART_AUDIENCE_2, 12
.set LOCALID_BEAUTY_MC, 13
.set LOCALID_BEAUTY_JUDGE, 14
.set LOCALID_BEAUTY_CONTESTANT_1, 15
.set LOCALID_BEAUTY_CONTESTANT_2, 16
.set LOCALID_BEAUTY_CONTESTANT_3, 17
.set LOCALID_BEAUTY_CONTESTANT_4, 18
.set LOCALID_BEAUTY_AUDIENCE_1, 19
.set LOCALID_BEAUTY_AUDIENCE_3, 20
.set LOCALID_BEAUTY_AUDIENCE_2, 21
.set LOCALID_SMART_AUDIENCE_3, 22
.set LOCALID_CUTE_MC, 23
.set LOCALID_CUTE_JUDGE, 24
.set LOCALID_CUTE_CONTESTANT_1, 25
.set LOCALID_CUTE_CONTESTANT_2, 26
.set LOCALID_CUTE_CONTESTANT_3, 27
.set LOCALID_CUTE_CONTESTANT_4, 28
.set LOCALID_CUTE_AUDIENCE_1, 29
.set LOCALID_CUTE_AUDIENCE_3, 30
.set LOCALID_CUTE_AUDIENCE_2, 31

LilycoveCity_ContestHall_MapScripts::
	.byte 0

LilycoveCity_ContestHall_EventScript_Boy1::
	msgbox LilycoveCity_ContestHall_Text_TodayWonSmartnessContest, MSGBOX_NPC
	end

LilycoveCity_ContestHall_EventScript_Boy2::
	msgbox LilycoveCity_ContestHall_Text_EnteredBunchOfContests, MSGBOX_NPC
	end

LilycoveCity_ContestHall_EventScript_Girl::
	msgbox LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks, MSGBOX_NPC
	end

LilycoveCity_ContestHall_EventScript_Sailor::
	msgbox LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous, MSGBOX_NPC
	end

LilycoveCity_ContestHall_EventScript_SmartContestMC::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_MC, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestJudge::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_JUDGE, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestant1::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_EnteredWrongContest, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_CONTESTANT_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestant2::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_RaisedMonToBeSmart, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_CONTESTANT_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestant3::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_CONTESTANT_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestant4::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_CONTESTANT_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestAudience1::
	msgbox LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa, MSGBOX_SIGN
	end

LilycoveCity_ContestHall_EventScript_SmartContestAudience2::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_AUDIENCE_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestAudience3::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_AUDIENCE_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestAudience4::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_StillLoveSmartnessContests, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_AUDIENCE_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestMC::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_MC, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestJudge::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_JUDGE, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestant1::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_CONTESTANT_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestant2::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_OverdidGrooming, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_CONTESTANT_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestant3::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_CONTESTANT_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestant4::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_CONTESTANT_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestAudience1::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_AUDIENCE_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestAudience2::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_AUDIENCE_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestAudience3::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_AUDIENCE_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestMC::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_InTheMiddleOfContest, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_MC, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestJudge::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_JUDGE, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestant1::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_MyAzurillWasDistracted, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_CONTESTANT_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestant2::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_NeverWonBattleButContest, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_CONTESTANT_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestant3::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_PetalDanceIsMarvel, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_CONTESTANT_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestant4::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_CONTESTANT_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestAudience1::
	lockall
	applymovement LOCALID_CUTE_AUDIENCE_1, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LilycoveCity_ContestHall_Text_MyChildIsInContest, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_AUDIENCE_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	delay 25
	msgbox LilycoveCity_ContestHall_Text_ComeOnDear, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_ContestHall_EventScript_CuteContestAudience2::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_AUDIENCE_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestAudience3::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_AUDIENCE_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyStageSign::
	msgbox LilycoveCity_ContestHall_Text_BeautyContestStage, MSGBOX_SIGN
	end

LilycoveCity_ContestHall_EventScript_CuteStageSign::
	msgbox LilycoveCity_ContestHall_Text_CuteContestStage, MSGBOX_SIGN
	end

LilycoveCity_ContestHall_EventScript_SmartStageSign::
	msgbox LilycoveCity_ContestHall_Text_SmartContestStage, MSGBOX_SIGN
	end

LilycoveCity_ContestHall_Text_TodayWonSmartnessContest:
	.string "This POKÉMON won the BEAUTY CONTEST\n"
	.string "here before.\p"
	.string "Well, guess what? Today, I made it\n"
	.string "win a SMARTNESS CONTEST!\p"
	.string "My abilities scare even me…$"

LilycoveCity_ContestHall_Text_EnteredBunchOfContests:
	.string	"He entrado en un montón de CONCURSOS\n"
	.string	"para ver cómo funciona este tinglado.\p"
	.string	"Si estás en un CONCURSO de CARISMA,\n"
	.string	"usa movimientos carismáticos para\l"
	.string	"ganar más puntos.\p"
	.string	"Vamos, que los movimientos ingeniosos\n"
	.string	"o dulces no servirán de gran cosa{PAUSE 5}…{PAUSE 5}$"

LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks:
	.string	"Ese jovencito que ganó antes tenía\n"
	.string	"un buen montón de {POKEBLOCK}S diferentes.\p"
	.string	"¿Crees que usando muchas cosas\n"
	.string	"de ésas resulta más fácil ganar?$"

LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous:
	.string	"Guau… Este sitio es gigantesco…\p"
	.string	"Se respira tanta tensión… No es en\n"
	.string	"absoluto como esas SALAS de CONCURSO\l"
	.string	"perdidas en medio de la nada{PAUSE 5}…{PAUSE 5}$"

LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal:
	.string "MC: Okay, SMART POKÉMON and their\n"
	.string "TRAINERS, are you ready?!\p"
	.string "Give it your best showing!\n"
	.string "Let's appeal!$"

LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest:
	.string	"JUEZ: ¿Te está gustando el CONCURSO?\p"
	.string	"Vuelve con tres amigos más y todos\n"
	.string	"podréis participar en uno.$"

LilycoveCity_ContestHall_Text_EnteredWrongContest:
	.string "Ayayayay…\n"
	.string "I entered the wrong CONTEST.\p"
	.string "I entered this tough POKÉMON in\n"
	.string "the SMARTNESS CONTEST…\p"
	.string "Come on, wow them with a smart-looking\n"
	.string "ROCK SMASH.$"

LilycoveCity_ContestHall_Text_RaisedMonToBeSmart:
	.string "I've spent many a year, and all my\n"
	.string "wisdom besides, raising this POKÉMON\l"
	.string "to be smart.\p"
	.string "It won't be easily bested by some\n"
	.string "young pup's POKÉMON.\p"
	.string "My dear wife, are you seeing this?$"

LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext:
	.string "There it is!\p"
	.string "If my POKÉMON pulls a smart move next,\n"
	.string "the audience's excitement will peak!$"

LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife:
	.string	"¡Oh, no!\p"
	.string	"El CHUPAVIDAS de mi querido ZUBAT\n"
	.string	"es tan guay que lo he usado varias\l"
	.string	"veces seguidas…\p"
	.string	"¡Pero estos cabezas de chorlito no\n"
	.string	"han sabido apreciarlo en absoluto!$"

LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa:
	.string	"¡Adelante! ¡Amorcito, eres el mejor!$"

LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves:
	.string "Even when TRAINERS enter the same\n"
	.string "kind of POKÉMON, they all seem to use\l"
	.string "different moves for appeals.\p"
	.string "It's just like the way people have\n"
	.string "different styles for battling.$"

LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers:
	.string "I think the POKÉMON look smarter\n"
	.string "than their TRAINERS. By a lot.$"

LilycoveCity_ContestHall_Text_StillLoveSmartnessContests:
	.string	"Por mucho que venga, estos CONCURSOS\n"
	.string	"de INGENIO me siguen encantando.\p"
	.string	"Ese color verde es tan… agudo…\n"
	.string	"Es tan, tan… intelectual{PAUSE 5}…{PAUSE 5}$"

LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest:
	.string	"PRESENTADORA: ¿Tú también participas\n"
	.string	"en el CONCURSO de BELLEZA?\l"
	.string	"¡Pues suerte!$"

LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty:
	.string "JUDGE: Ah, every POKÉMON here is\n"
	.string "a model of pristine beauty!\p"
	.string "Why, I almost forgot to score them!$"

LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty:
	.string "A POKÉMON this beautiful…\n"
	.string "There isn't another one like it.\p"
	.string "Everyone's eyes will be glued to\n"
	.string "my beauty.$"

LilycoveCity_ContestHall_Text_OverdidGrooming:
	.string "Waaaah!\p"
	.string "I brushed and groomed my POKÉMON\n"
	.string "carefully for this CONTEST…\p"
	.string "But I overdid it…\n"
	.string "My POKÉMON's coat turned all scraggly…\p"
	.string "What should I do?$"

LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam:
	.string	"Este RAYO AURORA es deslumbrante.\n"
	.string	"El JUEZ no podrá ni verlo.\p"
	.string	"Eh, un momento…\n"
	.string	"¡Entonces no servirá de nada!$"

LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe:
	.string "This pretty POKÉMON looks just like\n"
	.string "me when I was younger.\p"
	.string "Right when I said that, my husband\n"
	.string "spewed the coffee he was drinking.\p"
	.string "Did I say something funny?$"

LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy:
	.string	"Yo creo que a cualquiera le hace\n"
	.string	"ilusión ganar un CONCURSO\l"
	.string	"de BELLEZA, ¿o no?$"

LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon:
	.string "Wahahahah!\p"
	.string "Will you take a gander at all those\n"
	.string "pretty POKÉMON!\l"
	.string "I just love this sort of glitz!$"

LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone:
	.string "You can't always win on just beauty\n"
	.string "alone.\p"
	.string "You have to groom your POKÉMON so\n"
	.string "it's nice and glossy like mine.$"

LilycoveCity_ContestHall_Text_InTheMiddleOfContest:
	.string	"PRESENTADORA: ¡Huy, hola!\n"
	.string	"¡Estamos en mitad de un CONCURSO!\p"
	.string	"Ve a registrarte primero si quieres\n"
	.string	"participar, ¿vale?$"

LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals:
	.string	"JUEZ: ¡Nunca había visto exhibiciones\n"
	.string	"tan dulces y encantadoras como éstas!\p"
	.string	"Por ejemplo, ese HIDROCHORRO tan\n"
	.string	"adorable merece una gran puntuación.$"

LilycoveCity_ContestHall_Text_MyAzurillWasDistracted:
	.string "Oh, no… My sweet AZURILL was\n"
	.string "distracted by another POKÉMON.$"

LilycoveCity_ContestHall_Text_NeverWonBattleButContest:
	.string "My POKÉMON has never won in a battle,\n"
	.string "but put it in a CONTEST and look out!$"

LilycoveCity_ContestHall_Text_PetalDanceIsMarvel:
	.string "My POKÉMON's PETAL DANCE is a marvel\n"
	.string "of elegance.\p"
	.string "I won't let anyone disturb its\n"
	.string "performance.$"

LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter:
	.string "Everyone's POKÉMON are very cute.\p"
	.string "However, if my POKÉMON were to make\n"
	.string "a cute appeal…\p"
	.string "I'm sure that it would be so much \n"
	.string "cuter than the others.$"

LilycoveCity_ContestHall_Text_MyChildIsInContest:
	.string	"Mi hijo está participando\n"
	.string	"en el CONCURSO.$"

LilycoveCity_ContestHall_Text_ComeOnDear:
	.string "Come on, dear. Go for it!\n"
	.string "Your POKÉMON is the best!$"

LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest:
	.string "I think that girl over there is\n"
	.string "the cutest of the lot.\p"
	.string "What's that? They're judging\n"
	.string "POKÉMON by their looks?$"

LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn:
	.string "Ohh, seeing all these cute POKÉMON,\n"
	.string "they make we want to get my own!\p"
	.string "I'm going to go catch some!$"

LilycoveCity_ContestHall_Text_BeautyContestStage:
	.string "BEAUTY CONTEST STAGE\n"
	.string "BE ALLURED BY BEAUTIFUL POKÉMON!$"

LilycoveCity_ContestHall_Text_CuteContestStage:
	.string "CUTENESS CONTEST STAGE\n"
	.string "BE CHARMED BY CUTE POKÉMON!$"

LilycoveCity_ContestHall_Text_SmartContestStage:
	.string "SMARTNESS CONTEST STAGE\n"
	.string "BE IMPRESSED BY SMART POKÉMON!$"

