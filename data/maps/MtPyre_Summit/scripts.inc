.set LOCALID_ARCHIE, 2
.set LOCALID_OLD_LADY, 3
.set LOCALID_GRUNT_1, 4
.set LOCALID_GRUNT_2, 5
.set LOCALID_GRUNT_3, 6
.set LOCALID_GRUNT_4, 7
.set LOCALID_MAXIE, 8

MtPyre_Summit_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Summit_OnTransition
	.byte 0

MtPyre_Summit_OnTransition:
	call_if_eq VAR_MT_PYRE_STATE, 2, MtPyre_Summit_EventScript_SetArchieMaxiePositions
	end

MtPyre_Summit_EventScript_SetArchieMaxiePositions::
	setobjectxyperm LOCALID_MAXIE, 23, 6
	setobjectxyperm LOCALID_ARCHIE, 22, 6
	end

MtPyre_Summit_EventScript_TeamAquaTrigger0::
	lockall
	setvar VAR_0x8008, 0
	goto MtPyre_Summit_EventScript_TeamAquaExits
	end

MtPyre_Summit_EventScript_TeamAquaTrigger1::
	lockall
	setvar VAR_0x8008, 1
	goto MtPyre_Summit_EventScript_TeamAquaExits
	end

MtPyre_Summit_EventScript_TeamAquaTrigger2::
	lockall
	setvar VAR_0x8008, 2
	goto MtPyre_Summit_EventScript_TeamAquaExits
	end

MtPyre_Summit_EventScript_TeamAquaExits::
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 50
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieFacePlayer0
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieFacePlayer1
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieFacePlayer2
	msgbox MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_ARCHIE
	removeobject LOCALID_GRUNT_1
	removeobject LOCALID_GRUNT_2
	removeobject LOCALID_GRUNT_3
	removeobject LOCALID_GRUNT_4
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
	fadedefaultbgm
	fadescreen FADE_FROM_BLACK
	delay 20
	setvar VAR_MT_PYRE_STATE, 1
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_OldLadyApproachPlayer0
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_OldLadyApproachPlayer1
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_OldLadyApproachPlayer2
	msgbox MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis, MSGBOX_DEFAULT
	giveitem ITEM_MAGMA_EMBLEM
	setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
	releaseall
	end

MtPyre_Summit_EventScript_ArchieFacePlayer0::
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer0
	waitmovement 0
	return

@ Archie is already facing player
MtPyre_Summit_EventScript_ArchieFacePlayer1::
	return

MtPyre_Summit_EventScript_ArchieFacePlayer2::
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer2
	waitmovement 0
	return

MtPyre_Summit_EventScript_OldLadyApproachPlayer0::
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer0
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

MtPyre_Summit_EventScript_OldLadyApproachPlayer1::
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer1
	waitmovement 0
	return

MtPyre_Summit_EventScript_OldLadyApproachPlayer2::
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

MtPyre_Summit_Movement_OldLadyApproachPlayer0:
	walk_down
	walk_down
	walk_in_place_faster_left
	step_end

MtPyre_Summit_Movement_OldLadyApproachPlayer1:
	walk_down
	step_end

MtPyre_Summit_Movement_OldLadyApproachPlayer2:
	walk_down
	walk_down
	walk_in_place_faster_right
	step_end

MtPyre_Summit_Movement_ArchieFacePlayer0:
	walk_left
	walk_in_place_faster_down
	step_end

MtPyre_Summit_Movement_ArchieFacePlayer2:
	walk_right
	walk_in_place_faster_down
	step_end

MtPyre_Summit_EventScript_OldMan::
	lock
	faceplayer
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, MtPyre_Summit_EventScript_OldManAfterRayquaza
	msgbox MtPyre_Summit_Text_WillYouHearOutMyTale, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManTale
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
	release
	end

MtPyre_Summit_EventScript_OldManAfterRayquaza::
	msgbox MtPyre_Summit_Text_HearTheNewLegendOfHoenn, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManNewTale
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
	release
	end

MtPyre_Summit_EventScript_OldManTale::
	msgbox MtPyre_Summit_Text_GroudonKyogreTale, MSGBOX_DEFAULT
	return

MtPyre_Summit_EventScript_DeclineOldManTale::
	msgbox MtPyre_Summit_Text_WellThatTooIsFine, MSGBOX_DEFAULT
	return

MtPyre_Summit_EventScript_OldManNewTale::
	msgbox MtPyre_Summit_Text_HoennTrioTale, MSGBOX_DEFAULT
	return

MtPyre_Summit_EventScript_OldLady::
	lock
	faceplayer
	goto_if_set FLAG_RETURNED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned
	call_if_ge VAR_MT_PYRE_STATE, 3, MtPyre_Summit_EventScript_OldLadyOrbsReturned
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, MtPyre_Summit_EventScript_OldLadyLegendariesAwake
	msgbox MtPyre_Summit_Text_OrbsHaveBeenTaken, MSGBOX_DEFAULT
	release
	end

MtPyre_Summit_EventScript_OldLadyOrbsReturned::
	msgbox MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs, MSGBOX_DEFAULT
	setflag FLAG_RETURNED_RED_OR_BLUE_ORB
	release
	end

MtPyre_Summit_EventScript_OldLadyLegendariesAwake::
	msgbox MtPyre_Summit_Text_GroudonKyogreAwakened, MSGBOX_DEFAULT
	release
	end

MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned::
	msgbox MtPyre_Summit_Text_SuperAncientPokemonTaughtUs, MSGBOX_DEFAULT
	release
	end

MtPyre_Summit_EventScript_ArchieMaxieTrigger0::
	lockall
	setvar VAR_0x8008, 0
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
	end

MtPyre_Summit_EventScript_ArchieMaxieTrigger1::
	lockall
	setvar VAR_0x8008, 1
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
	end

MtPyre_Summit_EventScript_ArchieMaxieTrigger2::
	lockall
	setvar VAR_0x8008, 2
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
	end

MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 60
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieMaxieBeginExit0
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieMaxieBeginExit1
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieMaxieBeginExit2
	playse SE_PIN
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
	waitmovement 0
	delay 30
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachPlayer0
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachPlayer1
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachPlayer2
	msgbox MtPyre_Summit_Text_MaxieSilence, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachArchie0
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachArchie1
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachArchie2
	delay 30
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
	waitmovement 0
	removeobject LOCALID_ARCHIE
	removeobject LOCALID_MAXIE
	setvar VAR_MT_PYRE_STATE, 3
	releaseall
	end

MtPyre_Summit_EventScript_ArchieMaxieBeginExit0::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
	waitmovement 0
	return

MtPyre_Summit_EventScript_ArchieMaxieBeginExit1::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
	waitmovement 0
	return

MtPyre_Summit_EventScript_ArchieMaxieBeginExit2::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
	waitmovement 0
	return

MtPyre_Summit_EventScript_MaxieApproachPlayer0::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie0
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer0
	waitmovement 0
	return

MtPyre_Summit_EventScript_MaxieApproachPlayer1::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer1
	waitmovement 0
	return

MtPyre_Summit_EventScript_MaxieApproachPlayer2::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer2
	waitmovement 0
	return

MtPyre_Summit_EventScript_MaxieApproachArchie0::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie0
	waitmovement 0
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

MtPyre_Summit_EventScript_MaxieApproachArchie1::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie1
	waitmovement 0
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

MtPyre_Summit_EventScript_MaxieApproachArchie2::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie2
	waitmovement 0
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

MtPyre_Summit_Movement_PlayerFaceMaxie0:
	delay_16
	delay_16
	walk_in_place_faster_right
	step_end

MtPyre_Summit_Movement_PlayerFaceMaxie:
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

MtPyre_Summit_Movement_ArchieExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtPyre_Summit_Movement_MaxieExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0:
	delay_16
	delay_8
	walk_left
	walk_in_place_faster_right
	delay_16
	walk_in_place_faster_down
	step_end

MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1:
	delay_16
	delay_8
	walk_right
	walk_in_place_faster_left
	delay_16
	walk_in_place_faster_down
	step_end

MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2:
	delay_16
	delay_8
	walk_in_place_faster_left
	delay_16
	walk_in_place_faster_down
	step_end

MtPyre_Summit_Movement_MaxieApproachPlayer0:
	walk_up
	walk_up
	walk_up
	walk_left
	step_end

MtPyre_Summit_Movement_MaxieApproachPlayer1:
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_right
	step_end

MtPyre_Summit_Movement_MaxieApproachPlayer2:
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_right
	step_end

MtPyre_Summit_Movement_ArchieWatchMaxie:
	delay_16
	walk_in_place_faster_up
	step_end

MtPyre_Summit_Movement_PlayerWatchMaxie:
	delay_16
	walk_in_place_faster_down
	step_end

MtPyre_Summit_Movement_MaxieApproachArchie0:
	walk_down
	walk_right
	walk_down
	walk_down
	walk_in_place_faster_left
	step_end

MtPyre_Summit_Movement_MaxieApproachArchie1:
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_left
	step_end

MtPyre_Summit_Movement_MaxieApproachArchie2:
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_left
	step_end

MtPyre_Summit_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, MtPyre_Summit_Text_Grunt1Intro, MtPyre_Summit_Text_Grunt1Defeat
	msgbox MtPyre_Summit_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_Summit_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, MtPyre_Summit_Text_Grunt2Intro, MtPyre_Summit_Text_Grunt2Defeat
	msgbox MtPyre_Summit_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_Summit_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, MtPyre_Summit_Text_Grunt3Intro, MtPyre_Summit_Text_Grunt3Defeat
	msgbox MtPyre_Summit_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_Summit_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, MtPyre_Summit_Text_Grunt4Intro, MtPyre_Summit_Text_Grunt4Defeat
	msgbox MtPyre_Summit_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_Summit_Text_Grunt1Intro:
	.string "No! Those TEAM MAGMA goons got\n"
	.string "here ahead of us!\p"
	.string "We can't fall behind!$"

MtPyre_Summit_Text_Grunt1Defeat:
	.string "I thought you were one of the MAGMAS\n"
	.string "who happened to come back…{PAUSE 5}$"

MtPyre_Summit_Text_Grunt1PostBattle:
	.string "Yeah, so you are strong…\n"
	.string "But there're a lot of us!$"

MtPyre_Summit_Text_Grunt2Intro:
	.string "Hah!\n"
	.string "Too bad for you!\p"
	.string "If you came earlier, you only would've\n"
	.string "had to battle the wimpy TEAM MAGMA.\p"
	.string "But since you arrived now, you have\n"
	.string "to take on us toughies!$"

MtPyre_Summit_Text_Grunt2Defeat:
	.string "Urgh… I should've let you take on\n"
	.string "TEAM MAGMA first…{PAUSE 5}$"

MtPyre_Summit_Text_Grunt2PostBattle:
	.string "You don't know anything!\n"
	.string "So why are you messing with us?$"

MtPyre_Summit_Text_Grunt3Intro:
	.string "You…\n"
	.string "We saw you at MT. CHIMNEY.\p"
	.string "You don't belong to either TEAM,\n"
	.string "so why would you be here?$"

MtPyre_Summit_Text_Grunt3Defeat:
	.string "If you're going to mess with anyone,\n"
	.string "let it be TEAM MAGMA…{PAUSE 5}$"

MtPyre_Summit_Text_Grunt3PostBattle:
	.string "Heh, it doesn't matter!\n"
	.string "We bought ourselves some time!\p"
	.string "The BOSS should have snatched what\n"
	.string "he was after!$"

MtPyre_Summit_Text_Grunt4Intro:
	.string "Oh, I know!\n"
	.string "You tried to join TEAM MAGMA,\l"
	.string "but they wouldn't have you!\p"
	.string "Well, don't think that we'll let you\n"
	.string "join our TEAM AQUA!$"

MtPyre_Summit_Text_Grunt4Defeat:
	.string "If you want to join TEAM AQUA that\n"
	.string "badly, we can consider it…{PAUSE 5}$"

MtPyre_Summit_Text_Grunt4PostBattle:
	.string "We have a great combination going\n"
	.string "with us members and our leader.$"

MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo:
	.string "ARCHIE: TEAM MAGMA's MAXIE got ahead\n"
	.string "of us, but we also got what we wanted.\p"
	.string "The RED ORB preserved at MT. PYRE…\n"
	.string "I, ARCHIE, now have it in my possession!\p"
	.string "Fufufu… Now we can bring our ultimate\n"
	.string "objective to fruition!\p"
	.string "Okay, TEAM!\n"
	.string "We're pulling out!$"

MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis:
	.string "Oh, no…\n"
	.string "This cannot happen…\p"
	.string "Not only the BLUE ORB, but even\n"
	.string "the RED ORB has been taken…\p"
	.string "The BLUE ORB and RED ORB must never\n"
	.string "be separated. They belong together.\p"
	.string "What are those men trying to do with\n"
	.string "the two ORBS?\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "Oh, yes. Was it TEAM MAGMA who came\n"
	.string "and took the BLUE ORB first?\p"
	.string "Well, in their haste, they left this\n"
	.string "behind.\p"
	.string "I couldn't imagine what exactly it\n"
	.string "could be.\p"
	.string "I would like you to have it.\n"
	.string "Perhaps it will be useful in some way.$"

MtPyre_Summit_Text_OrbsHaveBeenTaken:
	.string "The BLUE ORB and RED ORB taken by\n"
	.string "those sinister men…\p"
	.string "They must never be apart…\n"
	.string "I fear something terrible will happen…{PAUSE 5}$"

MtPyre_Summit_Text_GroudonKyogreAwakened:
	.string "Oh, my goodness…\p"
	.string "You say that both GROUDON and KYOGRE\n"
	.string "have been awakened?\p"
	.string "It is said that the BLUE ORB and\n"
	.string "the RED ORB quelled the rage of\l"
	.string "the two POKéMON…\p"
	.string "It is also said that the true owner\n"
	.string "of the ORBS still exists.\p"
	.string "However, no one knows who, or what\n"
	.string "exactly, the ORBS belong to.\p"
	.string "It could be a human, or perhaps\n"
	.string "a POKéMON, but no one knows.$"

MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs:
	.string "The two men who took the ORBS came\n"
	.string "back to return them on their own.\p"
	.string "Those men…\n"
	.string "Perhaps they are not so evil after all…{PAUSE 5}$"

MtPyre_Summit_Text_SuperAncientPokemonTaughtUs:
	.string	"Nada menos que la personificación\n"
	.string	"de la tierra, el mar y el cielo…\p"
	.string	"Ésa es la identidad de los POKéMON\n"
	.string	"más antiguos…\p"
	.string	"Del mismo modo que los humanos\n"
	.string	"y los POKéMON estamos vivos,\l"
	.string	"nuestro mundo también lo está…\p"
	.string	"Es la lección que nos enseñaron\n"
	.string	"los POKéMON más antiguos…$"

MtPyre_Summit_Text_WillYouHearOutMyTale:
	.string	"El MONTE PÍRICO es donde descansan\n"
	.string	"los espíritus de los POKéMON\l"
	.string	"que han partido…\p"
	.string	"Desde aquí se puede ver todo HOENN.\p"
	.string	"Eso debe de ayudar a las almas\n"
	.string	"de los POKéMON a encontrar reposo.\p"
	.string	"Qué coincidencia que estés aquí…\p"
	.string	"¿Quieres oír un cuento muy antiguo\n"
	.string	"de la región de HOENN?$"

MtPyre_Summit_Text_GroudonKyogreTale:
	.string	"Érase una vez, hace mucho tiempo…,\p"
	.string	"el mundo estaba devastado por el feroz\n"
	.string	"enfrentamiento entre los POKéMON\l"
	.string	"terrestres y los POKéMON marinos…\p"
	.string	"Los POKéMON terrestres creaban\n"
	.string	"montañas y continentes…\p"
	.string	"Los POKéMON marinos creaban\n"
	.string	"grandes olas y océanos…\p"
	.string	"Su violento duelo parecía eterno…\p"
	.string	"El mundo se vio asolado por terribles\n"
	.string	"tormentas y colosales incendios.\p"
	.string	"La ESFERA ROJA y la ESFERA AZUL\n"
	.string	"pusieron fin a esta desgracia.\p"
	.string	"La luz que emanó de ambas ESFERAS\n"
	.string	"calmó la fiereza de los adversarios.\p"
	.string	"Éstos, amansados, se adentraron\n"
	.string	"en las profundidades de la tierra\l"
	.string	"hasta desaparecer…$"

MtPyre_Summit_Text_WellThatTooIsFine:
	.string "I see…\n"
	.string "Well, that, too, is fine…{PAUSE 5}$"

MtPyre_Summit_Text_MaxieSilence:
	.string "MAXIE: {PLAYER}…\p"
	.string "… … … … … …\n"
	.string "… … … … … …{PAUSE 5}$"

MtPyre_Summit_Text_HearTheNewLegendOfHoenn:
	.string	"Mi deber es transmitir las leyendas\n"
	.string	"de HOENN a las futuras generaciones.\p"
	.string	"Y la crisis que acabamos de superar en\n"
	.string	"ARRECÍPOLIS ha reescrito la leyenda…\p"
	.string	"¿Tienes tiempo para oír\n"
	.string	"la nueva leyenda de HOENN?$"

MtPyre_Summit_Text_HoennTrioTale:
	.string	"Érase una vez, hace mucho tiempo…,\p"
	.string	"el mundo estaba devastado por el feroz\n"
	.string	"enfrentamiento entre los POKéMON\l"
	.string	"terrestres y los POKéMON marinos…\p"
	.string	"Los POKéMON terrestres creaban\n"
	.string	"montañas y continentes…\p"
	.string	"Los POKéMON marinos creaban\n"
	.string	"grandes olas y océanos…\p"
	.string	"Su violento duelo parecía eterno…\p"
	.string	"El mundo se vio asolado por terribles\n"
	.string	"tormentas y colosales incendios.\p"
	.string	"Fue entonces cuando los POKéMON\n"
	.string	"aéreos bajaron a lomos de una tormenta.\p"
	.string	"Estos POKéMON, de un verde intenso,\n"
	.string	"calmaron a los enfurecidos POKéMON.\p"
	.string	"Hecho esto, los POKéMON verdes\n"
	.string	"se perdieron entre las nubes…$"

MtPyre_Summit_Andra_Izquierda_move_0:
walk_in_place_up
step_end

MtPyre_Summit_Andra_Izquierda_move_1:
emote_exclamation_mark
walk_up
walk_right
face_up
step_end

MtPyre_Summit_Andra_Izquierda_move_1.1:
emote_exclamation_mark
walk_up
walk_left
face_up
step_end

MtPyre_Summit_Andra_Izquierda_move_1.2:
emote_exclamation_mark
walk_up
step_end

MtPyre_Summit_Andra_Izquierda::
lock
applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Andra_Izquierda_move_0
msgbox MtPyre_Summit_Andra_Texto_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Andra_Izquierda_move_1
waitmovement 0x0
goto MtPyre_Summit_Andra

MtPyre_Summit_Andra_Derecha::
lock
applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Andra_Izquierda_move_0
msgbox MtPyre_Summit_Andra_Texto_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Andra_Izquierda_move_1.1
waitmovement 0x0
goto MtPyre_Summit_Andra

MtPyre_Summit_Andra_Centro::
lock
applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Andra_Izquierda_move_0
msgbox MtPyre_Summit_Andra_Texto_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Andra_Izquierda_move_1.2
waitmovement 0x0
goto MtPyre_Summit_Andra

MtPyre_Summit_Andra_Izquierda_move_2:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

MtPyre_Summit_Andra_Izquierda_move_2.1:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

MtPyre_Summit_Andra_Izquierda_move_3:
face_right
step_end

MtPyre_Summit_Andra_Izquierda_move_4:
face_down
step_end

MtPyre_Summit_Andra_Izquierda_move_5:
walk_in_place_down
step_end

MtPyre_Summit_Andra_Izquierda_move_6:
face_up
step_end

MtPyre_Summit_Andra_Izquierda_move_7:
walk_slow_up
step_end

MtPyre_Summit_Andra_Izquierda_move_8:
delay_16
walk_in_place_up
delay_16
delay_16
face_down
delay_16
walk_in_place_down
step_end

MtPyre_Summit_Andra_Izquierda_move_9:
emote_exclamation_mark
face_right
step_end


MtPyre_Summit_Andra::
lock
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MtPyre_Summit_Andra_Izquierda_move_2
waitmovement 0x0
special RemoveCameraObject
msgbox MtPyre_Summit_Andra_Texto_2 MSGBOX_AUTOCLOSE
applymovement 3, MtPyre_Summit_Andra_Izquierda_move_3
waitmovement 0x0
msgbox MtPyre_Summit_Andra_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, MtPyre_Summit_Andra_Izquierda_move_4
waitmovement 0x0
msgbox MtPyre_Summit_Andra_Texto_4 MSGBOX_AUTOCLOSE
applymovement 3, MtPyre_Summit_Andra_Izquierda_move_5
waitmovement 0x0
msgbox MtPyre_Summit_Andra_Texto_5 MSGBOX_AUTOCLOSE
applymovement 3, MtPyre_Summit_Andra_Izquierda_move_6
waitmovement 0x0
msgbox MtPyre_Summit_Andra_Texto_6 MSGBOX_AUTOCLOSE
applymovement 3, MtPyre_Summit_Andra_Izquierda_move_7
waitmovement 0x0
msgbox MtPyre_Summit_Andra_Texto_7 MSGBOX_AUTOCLOSE
applymovement 3, MtPyre_Summit_Andra_Izquierda_move_8
waitmovement 0x0
msgbox MtPyre_Summit_Andra_Texto_8 MSGBOX_AUTOCLOSE
playse SE_M_DETECT
dofieldeffectsparkle 23, 4, 0
waitfieldeffect FLDEFF_SPARKLE
waitse
setvar VAR_RESULT, 4
playfanfare MUS_AWAKEN_LEGEND
playse SE_ORB
special DoOrbEffect
delay 150
waitstate
delay 60
setflag FLAG_HOENN_2
clearflag FLAG_HOENN_1
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_9
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
special FadeOutOrbEffect
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
addobject 6
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 7
addobject 6
delay 5
removeobject 6
addobject 7
delay 5
removeobject 6
addobject 7
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
delay 50
playse SE_PIN
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_10
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MtPyre_Summit_Andra_Izquierda_move_2.1
waitmovement 0x0
special RemoveCameraObject
msgbox MtPyre_Summit_Andra_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Andra_Izquierda_move_11
waitmovement 0x0
msgbox MtPyre_Summit_Andra_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_12
waitmovement 0x0
delay 15
msgbox MtPyre_Summit_Andra_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_13
waitmovement 0x0
delay 15
msgbox MtPyre_Summit_Andra_Texto_12 MSGBOX_AUTOCLOSE
delay 15
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_14
waitmovement 0x0
delay 15
msgbox MtPyre_Summit_Andra_Texto_13 MSGBOX_AUTOCLOSE
delay 15
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_15
waitmovement 0x0
msgbox MtPyre_Summit_Andra_Texto_14 MSGBOX_AUTOCLOSE
delay 15
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_16
waitmovement 0x0
delay 15
msgbox MtPyre_Summit_Andra_Texto_15 MSGBOX_AUTOCLOSE
delay 15
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_16
waitmovement 0x0
delay 15
msgbox MtPyre_Summit_Andra_Texto_16 MSGBOX_AUTOCLOSE
delay 15
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_17
waitmovement 0x0
delay 15
msgbox MtPyre_Summit_Andra_Texto_17 MSGBOX_AUTOCLOSE
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_14
waitmovement 0x0
msgbox MtPyre_Summit_Andra_Texto_18 MSGBOX_AUTOCLOSE
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_13
waitmovement 0x0
msgbox MtPyre_Summit_Andra_Texto_19 MSGBOX_AUTOCLOSE
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_18
waitmovement 0x0
msgbox MtPyre_Summit_Andra_Texto_20 MSGBOX_AUTOCLOSE
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_19
applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Andra_Izquierda_move_19
waitmovement 0x0
msgbox MtPyre_Summit_Andra_Texto_21 MSGBOX_AUTOCLOSE
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_14
applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Andra_Izquierda_move_20
waitmovement 0x0
msgbox MtPyre_Summit_Andra_Texto_22 MSGBOX_AUTOCLOSE
delay 15
msgbox MtPyre_Summit_Andra_Texto_23 MSGBOX_AUTOCLOSE
delay 15
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_20
waitmovement 0x0
msgbox MtPyre_Summit_Andra_Texto_24 MSGBOX_AUTOCLOSE
delay 15
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_14
waitmovement 0x0
msgbox MtPyre_Summit_Andra_Texto_25 MSGBOX_AUTOCLOSE
delay 15
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_21
waitmovement 0x0
msgbox MtPyre_Summit_Andra_Texto_26 MSGBOX_AUTOCLOSE
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_14
waitmovement 0x0
msgbox MtPyre_Summit_Andra_Texto_27 MSGBOX_AUTOCLOSE
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_12
waitmovement 0x0
msgbox MtPyre_Summit_Andra_Texto_28 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Andra_Izquierda_move_0
waitmovement 0x0
delay 15
msgbox MtPyre_Summit_Andra_Texto_29 MSGBOX_AUTOCLOSE
delay 15
msgbox MtPyre_Summit_Andra_Texto_30 MSGBOX_AUTOCLOSE
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_22
waitmovement 0x0
msgbox MtPyre_Summit_Andra_Texto_31 MSGBOX_AUTOCLOSE
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_14
waitmovement 0x0
msgbox MtPyre_Summit_Andra_Texto_32 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Andra_Izquierda_move_24
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_23
waitmovement 0x0
msgbox MtPyre_Summit_Andra_Texto_33 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Andra_Izquierda_move_25
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_26
waitmovement 0x0
msgbox MtPyre_Summit_Andra_Texto_34 MSGBOX_AUTOCLOSE
applymovement 8, MtPyre_Summit_Andra_Izquierda_move_26
waitmovement 0x0
delay 15
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Andra_Izquierda_move_27
waitmovement 0x0
setflag FLAG_HOENN_53
setflag FLAG_HOENN_1
delay 15
playse SE_M_HEAL_BELL
waitse
fadescreen 1
playse SE_M_MOONLIGHT
removeobject 7
removeobject 8
delay 30
fadescreen 0
setvar VAR_UNUSED_0x40F8, 9
release
end

MtPyre_Summit_Andra_Izquierda_move_27:
emote_exclamation_mark
face_up
step_end

MtPyre_Summit_Andra_Izquierda_move_26:
walk_down
walk_down
walk_down
step_end

MtPyre_Summit_Andra_Izquierda_move_25:
delay_16
delay_16
face_down
step_end

MtPyre_Summit_Andra_Izquierda_move_24:
delay_16
face_left
step_end

MtPyre_Summit_Andra_Izquierda_move_23:
walk_left
walk_down
step_end

MtPyre_Summit_Andra_Izquierda_move_22:
face_left
step_end

MtPyre_Summit_Andra_Izquierda_move_21:
lock_facing_direction
walk_slow_up
unlock_facing_direction
delay_16
delay_16
face_up
delay_16
step_end

MtPyre_Summit_Andra_Izquierda_move_20:
face_up
step_end

MtPyre_Summit_Andra_Izquierda_move_19:
face_right
step_end

MtPyre_Summit_Andra_Izquierda_move_18:
walk_down
step_end

MtPyre_Summit_Andra_Izquierda_move_17:
face_down
delay_16
delay_16
face_up
delay_16
step_end

MtPyre_Summit_Andra_Izquierda_move_16:
walk_slow_right
step_end

MtPyre_Summit_Andra_Izquierda_move_15:
face_right
delay_16
delay_16
face_down
delay_16
delay_16
walk_in_place_down
step_end

MtPyre_Summit_Andra_Izquierda_move_14:
face_down
step_end

MtPyre_Summit_Andra_Izquierda_move_13:
walk_slow_left
step_end

MtPyre_Summit_Andra_Izquierda_move_12:
walk_slow_down
step_end

MtPyre_Summit_Andra_Izquierda_move_11:
walk_slow_up
walk_slow_up
walk_slow_up
step_end

MtPyre_Summit_Andra_Izquierda_move_10:
emote_exclamation_mark
delay_16
face_down
step_end

MtPyre_Summit_Andra_Texto_1:
	.string "????: Es asombroso.$"

MtPyre_Summit_Andra_Texto_2:
	.string "Los entrenadores de carácter inclinan\n"
	.string "las circunstancias a su albedrío.$"

MtPyre_Summit_Andra_Texto_3:
	.string "Logran que la naturaleza se comporte\n"
	.string "de tal modo que se cumpla su voluntad\l"
	.string "sobre esta tierra, desafían a los\l"
	.string "elementos, e incluso desafían a su\l"
	.string "propia naturaleza más abyecta, por ver\l"
	.string "triunfar sus ideales ante sus propios\l"
	.string "ojos.$"

MtPyre_Summit_Andra_Texto_4:
	.string "Tú, ANDRA, cumples con todas y cada una\n"
	.string "de estas virtudes. Las has puesto en\l"
	.string "práctica y llevado a cotas impensables.$"

MtPyre_Summit_Andra_Texto_5:
	.string "En consecuencia, has establecido un\n"
	.string "poderoso vínculo con uno de los\l"
	.string "POKÉMON más esquivos para los humanos:\l"
	.string "JIRACHI.$"

MtPyre_Summit_Andra_Texto_6:
	.string "Fue aquí, en el MONTE PÍRICO, donde\n"
	.string "surgieron las ESFERAS de aquellos\l"
	.string "antiguos y sagrados POKÉMON de HOENN.$"

MtPyre_Summit_Andra_Texto_7:
	.string "De todas ellas, la que se ha guardado\n"
	.string "con mayor secretismo y discreción es la\l"
	.string "ESFERA BLANCA.$"

MtPyre_Summit_Andra_Texto_8:
	.string "Jamás pensé que mi generación sería la\n"
	.string "afortunada, pero… es el momento de\l"
	.string "hacerla brillar en este lugar.$"

MtPyre_Summit_Andra_Texto_9:
	.string "ANDRA: {PLAYER}... me has encontrado.$"

MtPyre_Summit_Andra_Texto_10:
	.string "Ha pasado mucho tiempo.$"

MtPyre_Summit_Andra_Texto_11:
	.string "Por un momento, te he vislumbrado como\n"
	.string "recluta normal, tal y como empezamos.$"

MtPyre_Summit_Andra_Texto_12:
	.string "En esa época, mi impulso hubiera sido\n"
	.string "combatir de nuevo contigo.$"

MtPyre_Summit_Andra_Texto_13:
	.string "Así es. Una vez más, para así confirmar\n"
	.string "y corroborar todo lo que habíamos\l"
	.string "mejorado, de mostrar los nuevos\l"
	.string "POKÉMON que habíamos capturado o las\l"
	.string "nuevas evoluciones de los que ya\l"
	.string "teníamos.$"

MtPyre_Summit_Andra_Texto_14:
	.string "Era una bonita forma de honrar nuestra\n"
	.string "evolución, una oda a nuestro progreso.$"

MtPyre_Summit_Andra_Texto_15:
	.string "Pero también… era la forma que\n"
	.string "teníamos de verificar que todo el\l"
	.string "tiempo que había pasado desde nuestro\l"
	.string "anterior encuentro no había sido en\l"
	.string "vano, ¿verdad?$"

MtPyre_Summit_Andra_Texto_16:
	.string "Asegurarnos de que nuestro camino\n"
	.string "seguía en constante y lineal evolución,\l"
	.string "y así lograr que nuestros egos y\l"
	.string "expectativas no resultaran dañados.$"

MtPyre_Summit_Andra_Texto_17:
	.string "Porque, de lo contrario, nuestro mayor\n"
	.string "miedo se confirmaría. El progreso se\l"
	.string "detendría y, como consecuencia,\l"
	.string "cualquier viaje o nueva experiencia\l"
	.string "dejaría de tener sentido, ¿no?$"

MtPyre_Summit_Andra_Texto_18:
	.string "Ahora… es diferente, no necesito\n"
	.string "combatir contigo. Me basta con tu mera\l"
	.string "presencia aquí.$"

MtPyre_Summit_Andra_Texto_19:
	.string "Creo que los dos estaremos de acuerdo\n"
	.string "en que hemos llegado más lejos de lo que\l"
	.string "hubiéramos podido imaginar.$"

MtPyre_Summit_Andra_Texto_20:
	.string "Solo párate un momento y mira dónde\n"
	.string "estás… estás en la cima del MONTE\l"
	.string "PÍRICO, a cientos de kilómetros de\l"
	.string "ISLAS SETE, de KANTO, de JOHTO… lejos\l"
	.string "de todo lo que era nuestro mundo\l"
	.string "conocido.$"

MtPyre_Summit_Andra_Texto_21:
	.string "Tal escenario era inconcebible y, aún\n"
	.string "así, parece seguir siendo insuficiente.$"

MtPyre_Summit_Andra_Texto_22:
	.string "Dime, {PLAYER}. ¿Por qué estás aquí?$"

MtPyre_Summit_Andra_Texto_23:
	.string "… …$"

MtPyre_Summit_Andra_Texto_24:
	.string "REGIGIGAS… CIUDAD PUNTANEVA… DEVON…$"

MtPyre_Summit_Andra_Texto_25:
	.string "Estás en lo cierto, sé cuál puede ser el\n"
	.string "próximo movimiento de DEVON.$"

MtPyre_Summit_Andra_Texto_26:
	.string "Pero… si quieres que te ayude, deberás\n"
	.string "hacer algo por mí, {PLAYER}. Algo a lo\l"
	.string "que, desde la I CONFERENCIA de TRIGAL,\l"
	.string "le he estado dando muchas vueltas.$"

MtPyre_Summit_Andra_Texto_27:
	.string "Necesito tu palabra.$"

MtPyre_Summit_Andra_Texto_28:
	.string "Una vez acabemos con DEVON y\n"
	.string "REGIGIGAS, ¿harás cualquier cosa que\l"
	.string "te pida, aún pudiendo ir en contra de\l"
	.string "tus principios?$"

MtPyre_Summit_Andra_Texto_29:
	.string "… …$"

MtPyre_Summit_Andra_Texto_30:
	.string "¿Confías en que nada de lo que pueda\n"
	.string "pedirte lo haga, aunque en un principio\l"
	.string "pudiera parecerlo?$"

MtPyre_Summit_Andra_Texto_31:
	.string "Una respuesta digna de mi mejor rival.\n"
	.string "Aunque… eso se verá una vez sepas lo\l"
	.string "que quiero. Por el momento…$"

MtPyre_Summit_Andra_Texto_32:
	.string "…tenemos un trato, ¿no es así,\n"
	.string "{PLAYER}?$"

MtPyre_Summit_Andra_Texto_33:
	.string "Te espero entonces en CIUDAD ALGARIA,\n"
	.string "ahí trazaremos el plan que tengo en\l"
	.string "mente.$"

MtPyre_Summit_Andra_Texto_34:
	.string "Entretanto, disfruta de CIUDAD\n"
	.string "CALAGUA. Solo hay una única\l"
	.string "oportunidad para poder visitar un lugar\l"
	.string "por primera vez. Haz que cuente.$"

