.set LOCALID_ATTENDANT, 1

SlateportCity_BattleTentLobby_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_BattleTentLobby_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SlateportCity_BattleTentLobby_OnWarp
	.byte 0

SlateportCity_BattleTentLobby_OnWarp:
	map_script_2 VAR_TEMP_1, 0, SlateportCity_BattleTentLobby_EventScript_TurnPlayerNorth
	.2byte 0

SlateportCity_BattleTentLobby_EventScript_TurnPlayerNorth::
	setvar VAR_TEMP_1, 1
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

SlateportCity_BattleTentLobby_OnFrame:
	map_script_2 VAR_TEMP_0, 0, SlateportCity_BattleTentLobby_EventScript_GetChallengeStatus
	map_script_2 VAR_TEMP_0, CHALLENGE_STATUS_SAVING, SlateportCity_BattleTentLobby_EventScript_QuitWithoutSaving
	map_script_2 VAR_TEMP_0, CHALLENGE_STATUS_PAUSED, SlateportCity_BattleTentLobby_EventScript_ResumeChallenge
	map_script_2 VAR_TEMP_0, CHALLENGE_STATUS_WON, SlateportCity_BattleTentLobby_EventScript_WonChallenge
	map_script_2 VAR_TEMP_0, CHALLENGE_STATUS_LOST, SlateportCity_BattleTentLobby_EventScript_LostChallenge
	.2byte 0

SlateportCity_BattleTentLobby_EventScript_GetChallengeStatus::
	frontier_getstatus
	end

SlateportCity_BattleTentLobby_EventScript_QuitWithoutSaving::
	lockall
	msgbox SlateportCity_BattleTentLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
	closemessage
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	setvar VAR_TEMP_0, 255
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
	releaseall
	end

SlateportCity_BattleTentLobby_EventScript_WonChallenge::
	lockall
	message SlateportCity_BattleTentLobby_Text_WonThreeMatchesReturnMons
	waitmessage
	slateporttent_setrandomprize
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
	slateporttent_save 0
	playse SE_SAVE
	waitse
SlateportCity_BattleTentLobby_EventScript_GivePrize::
	msgbox SlateportCity_BattleTentLobby_Text_AwardYouThisPrize, MSGBOX_DEFAULT
	slateporttent_giveprize
	switch VAR_RESULT
	case FALSE, SlateportCity_BattleTentLobby_EventScript_NoRoomForPrize
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	message BattleFrontier_BattleTowerLobby_Text_ReceivedPrize  @ Odd that it uses Tower's instead of Factory's or its own
	waitmessage
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	goto SlateportCity_BattleTentLobby_EventScript_EndGivePrize

SlateportCity_BattleTentLobby_EventScript_NoRoomForPrize::
	msgbox SlateportCity_BattleTentLobby_Text_NoRoomInBagMakeRoom, MSGBOX_DEFAULT
	goto SlateportCity_BattleTentLobby_EventScript_EndGivePrize

SlateportCity_BattleTentLobby_EventScript_LostChallenge::
	lockall
	message SlateportCity_BattleTentLobby_Text_ReturnRentalMonsSaveResults
	waitmessage
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
	slateporttent_save 0
	playse SE_SAVE
	waitse

SlateportCity_BattleTentLobby_EventScript_EndGivePrize::
	msgbox SlateportCity_BattleTentLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_0, 255
	releaseall
	end

SlateportCity_BattleTentLobby_EventScript_ResumeChallenge::
	lockall
	message SlateportCity_BattleTentLobby_Text_BeenWaitingForYou
	waitmessage
	slateporttent_save CHALLENGE_STATUS_SAVING
	playse SE_SAVE
	waitse
	frontier_set FRONTIER_DATA_PAUSED, FALSE
	setvar VAR_TEMP_0, 255
	setvar VAR_0x8006, 2
	goto SlateportCity_BattleTentLobby_EventScript_EnterChallenge

SlateportCity_BattleTentLobby_EventScript_Attendant::
	lock
	faceplayer
	slateporttent_getprize
	goto_if_ne VAR_RESULT, ITEM_NONE, SlateportCity_BattleTentLobby_EventScript_GivePrize
	special SavePlayerParty
	msgbox SlateportCity_BattleTentLobby_Text_WelcomeToBattleTent, MSGBOX_DEFAULT
SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge::
	message SlateportCity_BattleTentLobby_Text_TakeChallenge
	waitmessage
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
	switch VAR_RESULT
	case 0, SlateportCity_BattleTentLobby_EventScript_TryEnterChallenge
	case 1, SlateportCity_BattleTentLobby_EventScript_ExplainChallenge
	case 2, SlateportCity_BattleTentLobby_EventScript_CancelChallenge
	case MULTI_B_PRESSED, SlateportCity_BattleTentLobby_EventScript_CancelChallenge

SlateportCity_BattleTentLobby_EventScript_TryEnterChallenge::
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_FACTORY
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_TENT
	msgbox SlateportCity_BattleTentLobby_Text_SaveBeforeChallenge, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, SlateportCity_BattleTentLobby_EventScript_LoadPartyCancelChallenge
	case YES, SlateportCity_BattleTentLobby_EventScript_SaveBeforeChallenge
	case MULTI_B_PRESSED, SlateportCity_BattleTentLobby_EventScript_LoadPartyCancelChallenge

SlateportCity_BattleTentLobby_EventScript_SaveBeforeChallenge::
	setvar VAR_TEMP_0, 0
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
	slateporttent_init
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
	frontier_set FRONTIER_DATA_PAUSED, FALSE
	closemessage
	delay 2
	call Common_EventScript_SaveGame
	setvar VAR_TEMP_0, 255
	goto_if_eq VAR_RESULT, 0, SlateportCity_BattleTentLobby_EventScript_CancelChallengeSaveFailed
	setvar VAR_0x8006, 0
SlateportCity_BattleTentLobby_EventScript_EnterChallenge::
	msgbox SlateportCity_BattleTentLobby_Text_StepThisWay, MSGBOX_DEFAULT
	closemessage
	call SlateportCity_BattleTentLobby_EventScript_WalkToDoor
	warp MAP_SLATEPORT_CITY_BATTLE_TENT_CORRIDOR, 2, 7
	setvar VAR_TEMP_0, 0
	waitstate
	end

SlateportCity_BattleTentLobby_EventScript_WalkToDoor::
	applymovement LOCALID_ATTENDANT, SlateportCity_BattleTentLobby_Movement_AttendantWalkToDoor
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_BattleTentLobby_Movement_PlayerWalkToDoor
	waitmovement 0
	opendoor 6, 1
	waitdooranim
	applymovement LOCALID_ATTENDANT, SlateportCity_BattleTentLobby_Movement_AttendantEnterDoor
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_BattleTentLobby_Movement_PlayerEnterDoor
	waitmovement 0
	closedoor 6, 1
	waitdooranim
	return

SlateportCity_BattleTentLobby_Movement_AttendantWalkToDoor:
	walk_up
	walk_up
	walk_up
	step_end

SlateportCity_BattleTentLobby_Movement_AttendantEnterDoor:
	walk_up
	set_invisible
	step_end

SlateportCity_BattleTentLobby_Movement_PlayerWalkToDoor:
	walk_up
	walk_up
	walk_up
	step_end

SlateportCity_BattleTentLobby_Movement_PlayerEnterDoor:
	walk_up
	walk_up
	set_invisible
	step_end

SlateportCity_BattleTentLobby_EventScript_ExplainChallenge::
	msgbox SlateportCity_BattleTentLobby_Text_ExplainSlateportTent, MSGBOX_DEFAULT
	goto SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge

SlateportCity_BattleTentLobby_EventScript_CancelChallengeSaveFailed::
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	goto SlateportCity_BattleTentLobby_EventScript_CancelChallenge

SlateportCity_BattleTentLobby_EventScript_LoadPartyCancelChallenge::
	special LoadPlayerParty
SlateportCity_BattleTentLobby_EventScript_CancelChallenge::
	msgbox SlateportCity_BattleTentLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
	release
	end

@ Unused
SlateportCity_BattleTentLobby_Movement_UnusedEnterDoor::
	walk_up
	walk_up
	walk_up
	set_invisible
	step_end

SlateportCity_BattleTentLobby_EventScript_TormentGiver::
	lock
	faceplayer
	msgbox SlateportCity_BattleTentLobby_Text_CouldntFindMonForMe, MSGBOX_DEFAULT
	release
	end

SlateportCity_BattleTentLobby_EventScript_ReceivedTorment::
	msgbox SlateportCity_BattleTentLobby_Text_ExplainTorment, MSGBOX_DEFAULT
	release
	end

SlateportCity_BattleTentLobby_EventScript_Man::
	msgbox SlateportCity_BattleTentLobby_Text_IllTryUsingBugMons, MSGBOX_NPC
	end

SlateportCity_BattleTentLobby_EventScript_Girl::
	msgbox SlateportCity_BattleTentLobby_Text_BattleEvenWithoutToughMons, MSGBOX_NPC
	end

SlateportCity_BattleTentLobby_EventScript_Woman::
	msgbox SlateportCity_BattleTentLobby_Text_NiceIfMoreSelection, MSGBOX_NPC
	end

SlateportCity_BattleTentLobby_EventScript_RulesBoard::
	lockall
	msgbox BattleFrontier_BattleFactoryLobby_Text_RulesAreListed, MSGBOX_DEFAULT
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
	end

SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard::
	message BattleFrontier_BattleFactoryLobby_Text_ReadWhichHeading
	waitmessage
	multichoice 17, 0, MULTI_SLATEPORT_TENT_RULES, FALSE
	switch VAR_RESULT
	case 0, SlateportCity_BattleTentLobby_EventScript_RulesBasics
	case 1, SlateportCity_BattleTentLobby_EventScript_RulesSwapPartner
	case 2, SlateportCity_BattleTentLobby_EventScript_RulesSwapNumber
	case 3, SlateportCity_BattleTentLobby_EventScript_RulesSwapNotes
	case 4, SlateportCity_BattleTentLobby_EventScript_RulesMons
	case 5, SlateportCity_BattleTentLobby_EventScript_ExitRules
	case MULTI_B_PRESSED, SlateportCity_BattleTentLobby_EventScript_ExitRules
	end

SlateportCity_BattleTentLobby_EventScript_RulesBasics::
	msgbox SlateportCity_BattleTentLobby_Text_ExplainBasicRules, MSGBOX_DEFAULT
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
	end

SlateportCity_BattleTentLobby_EventScript_RulesSwapPartner::
	msgbox SlateportCity_BattleTentLobby_Text_ExplainSwapPartnerRules, MSGBOX_DEFAULT
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
	end

SlateportCity_BattleTentLobby_EventScript_RulesSwapNumber::
	msgbox SlateportCity_BattleTentLobby_Text_ExplainSwapNumberRules, MSGBOX_DEFAULT
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
	end

SlateportCity_BattleTentLobby_EventScript_RulesSwapNotes::
	msgbox SlateportCity_BattleTentLobby_Text_ExplainSwapNotes, MSGBOX_DEFAULT
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
	end

SlateportCity_BattleTentLobby_EventScript_RulesMons::
	msgbox SlateportCity_BattleTentLobby_Text_ExplainMonRules, MSGBOX_DEFAULT
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
	end

SlateportCity_BattleTentLobby_EventScript_ExitRules::
	releaseall
	end

SlateportCity_BattleTentLobby_Text_CouldntFindMonForMe:
	.string	"Mi problema es que no he encontrado\n"
	.string	"ni un POKéMON que me mole, ¿sabes?\p"
	.string	"Así que decidí ir a montarle un pollo\n"
	.string	"al pibe ese de allí, pues porque sí.\p"
	.string	"Y el tronco pasó de mí…\n"
	.string	"No se enrolló nada, ¿entiendes?\p"
	.string	"Igualito, igualito… ¡que tú! Pues vale,\n"
	.string	"ya lo pillo, colega.$"

SlateportCity_BattleTentLobby_Text_ExplainTorment:
	.string "That's, like, TM41, you know?\n"
	.string "Hey, it's TORMENT, you hearing me?\p"
	.string "Like, it won't let the other guy\n"
	.string "use the same move twice in a row, see?\p"
	.string "Hey, now, you listen here, like,\n"
	.string "I'm not laying a torment on you!$"

SlateportCity_BattleTentLobby_Text_IllTryUsingBugMons:
	.string	"Los POKéMON BICHO no me convencen,\n"
	.string	"pero quizás debería reconsiderarlo,\l"
	.string	"aunque sólo sea por cambiar.\p"
	.string	"Quién sabe, ¡a lo mejor resulta\n"
	.string	"que al final me chiflan!$"

SlateportCity_BattleTentLobby_Text_BattleEvenWithoutToughMons:
	.string	"He estado también en el MUSEO VERDEGAL.\n"
	.string	"En este museo son mucho más amables.$"

SlateportCity_BattleTentLobby_Text_NiceIfMoreSelection:
	.string	"Yo pondría más variedad de estilos.\n"
	.string	"¿No crees?$"

SlateportCity_Museo_Secundaria_Caballero::
lock
msgbox SlateportCity_Museo_Caballero_Texto_1 MSGBOX_DEFAULT
release
end

SlateportCity_Museo_Caballero_Texto_1:
	.string "… …$"


SlateportCity_Museo_Move_2:
walk_in_place_down
step_end

SlateportCity_Museo_Move_1:
walk_in_place_up
step_end

SlateportCity_Museo_Move_3:
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

SlateportCity_Museo_Move_4:
face_player
step_end

SlateportCity_Museo_Move_5:
emote_exclamation_mark
step_end

SlateportCity_Museo_Secundaria::
lock
compare VAR_ROUTE117_STATE, 6
goto_if_gt SlateportCity_Museo_Secundaria_Final
compare VAR_ROUTE117_STATE, 4
goto_if_gt SlateportCity_Museo_Secundaria_Despues
compare VAR_ROUTE117_STATE, 3
goto_if_gt SlateportCity_Museo_Secundaria_No_2
applymovement 8, SlateportCity_Museo_Move_1
waitmovement 0x0
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_1 MSGBOX_AUTOCLOSE
applymovement 7, SlateportCity_Museo_Move_2
waitmovement 0x0
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_2 MSGBOX_AUTOCLOSE
applymovement 8, SlateportCity_Museo_Move_1
waitmovement 0x0
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_3 MSGBOX_AUTOCLOSE
applymovement 8, SlateportCity_Museo_Move_3
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HOENN_39
removeobject 8
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_5 MSGBOX_AUTOCLOSE
delay 15
applymovement 7, SlateportCity_Museo_Move_4
waitmovement 0x0
msgbox SlateportCity_Museo_Secundaria_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_4 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 7, SlateportCity_Museo_Move_5
waitmovement 0x0
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_12 MSGBOX_AUTOCLOSE
delay 15
setvar VAR_ROUTE117_STATE, 4
msgbox SlateportCity_Museo_Secundaria_Texto_13 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq SlateportCity_Museo_Secundaria_No
goto SlateportCity_Museo_Secundaria_Si

SlateportCity_Museo_Secundaria_Si::
delay 15
playse SE_PIN
applymovement 7, SlateportCity_Museo_Move_5
waitmovement 0x0
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_16 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_17 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_18 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_19 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_20 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_21 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_22 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_23 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE117_STATE, 5
release
end

SlateportCity_Museo_Secundaria_Despues::
msgbox SlateportCity_Museo_Secundaria_Texto_24 MSGBOX_AUTOCLOSE
release
end

SlateportCity_Museo_Secundaria_Final::
faceplayer
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox SlateportCity_Museo_Secundaria_Texto_25 MSGBOX_DEFAULT
waitfanfare
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_26 MSGBOX_AUTOCLOSE
showmoneybox 0, 0
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_27 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 1000000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox SlateportCity_Museo_Secundaria_Texto_28 MSGBOX_DEFAULT
waitfanfare
hidemoneybox
delay 40
msgbox SlateportCity_Museo_Secundaria_Texto_29 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox SlateportCity_Museo_Secundaria_Texto_30 MSGBOX_DEFAULT
givemon SPECIES_RELICANTH, 60, ITEM_NONE
waitfanfare
msgbox SlateportCity_Museo_Secundaria_Texto_31 MSGBOX_AUTOCLOSE
fadescreen 1
delay 80
fadescreen 0
msgbox SlateportCity_Museo_Secundaria_Texto_32 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_33 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_Museo_Secundaria_Texto_34 MSGBOX_AUTOCLOSE
delay 15
setflag FLAG_HOENN_38
clearflag FLAG_HOENN_686
clearflag FLAG_HOENN_651
fadescreen 1
delay 20
removeobject 7
addobject 9
fadescreen 0
setvar VAR_ROUTE117_STATE, 8
release
end

SlateportCity_Museo_Secundaria_No_2::
faceplayer
msgbox SlateportCity_Museo_Secundaria_Texto_13.1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq SlateportCity_Museo_Secundaria_No
goto SlateportCity_Museo_Secundaria_Si


SlateportCity_Museo_Secundaria_No::
msgbox SlateportCity_Museo_Secundaria_Texto_14 MSGBOX_AUTOCLOSE
release
end

SlateportCity_Museo_Secundaria_Texto_1:
	.string "Esperamos ver esa magnífica obra en la\n"
	.string "próxima exposición del MUSEO CALAGUA.$"

SlateportCity_Museo_Secundaria_Texto_2:
	.string "Por supuesto.$"

SlateportCity_Museo_Secundaria_Texto_3:
	.string "Será una de las principales atracciones\n"
	.string "del evento. Si todo sale bien, su museo\l"
	.string "cobrará mucha relevancia, se lo\l"
	.string "garantizo.$"

SlateportCity_Museo_Secundaria_Texto_4:
	.string "… …$"

SlateportCity_Museo_Secundaria_Texto_5:
	.string "Estoy acabado…$"

SlateportCity_Museo_Secundaria_Texto_6:
	.string "¿Qué quieres muchacho?$"

SlateportCity_Museo_Secundaria_Texto_7:
	.string "Me alegra ver jóvenes interesados en el\n"
	.string "arte, pero no puedes ayudarme.$"

SlateportCity_Museo_Secundaria_Texto_8:
	.string "¿Dices ser un magnífico entrenador?$"

SlateportCity_Museo_Secundaria_Texto_9:
	.string "Ya he perdido toda esperanza, así que\n"
	.string "te contaré mi situación.$"

SlateportCity_Museo_Secundaria_Texto_10:
	.string "La principal obra de nuestro museo ha\n"
	.string "sido robada.$"

SlateportCity_Museo_Secundaria_Texto_11:
	.string "Tengo claras sospechas de quién ha\n"
	.string "podido ser, pero no hay forma de\l"
	.string "demostrarlo.$"

SlateportCity_Museo_Secundaria_Texto_12:
	.string "Solo un excelente entrenador podría\n"
	.string "tener alguna oportunidad.$"

SlateportCity_Museo_Secundaria_Texto_13:
	.string "¿Me ayudarías?$"

SlateportCity_Museo_Secundaria_Texto_13.1:
	.string "¿Te lo has pensado mejor?\n"
	.string "¿Me ayudarías entonces?$"

SlateportCity_Museo_Secundaria_Texto_14:
	.string "Oh… Después de esto, tendré que\n"
	.string "renunciar a mi puesto…$"

SlateportCity_Museo_Secundaria_Texto_15:
	.string "¿De verdad? Escucha.$"

SlateportCity_Museo_Secundaria_Texto_16:
	.string "Este no es el único museo satélite de\n"
	.string "CALAGUA, que es el principal museo de la\l"
	.string "región.$"

SlateportCity_Museo_Secundaria_Texto_17:
	.string "En PUEBLO VERDEGAL existe otro museo.\n"
	.string "Desde fuera, se ve más lujoso que este.$"

SlateportCity_Museo_Secundaria_Texto_18:
	.string "Sobre el papel, el dueño es un romántico\n"
	.string "de los POKÉMON de HOENN, y no deja\l"
	.string "entrar a nadie que no considere apto de\l"
	.string "contemplar sus obras.$"

SlateportCity_Museo_Secundaria_Texto_19:
	.string "Pero… yo creo que todo eso es una\n"
	.string "fachada, y que en ese lugar hay toda\l"
	.string "una red de contrabando de obras.$"

SlateportCity_Museo_Secundaria_Texto_20:
	.string "La seguridad allí dentro es muy\n"
	.string "estricta, y acceder a su galería\l"
	.string "privada es imposible.$"

SlateportCity_Museo_Secundaria_Texto_21:
	.string "Sospecho que en esa galería está mi\n"
	.string "obra… si no ha sido vendida en el\l"
	.string "mercado negro ya.$"

SlateportCity_Museo_Secundaria_Texto_22:
	.string "Tu misión será abrirte paso por la\n"
	.string "seguridad, y llegar hasta el fondo de\l"
	.string "esa galería.$"

SlateportCity_Museo_Secundaria_Texto_23:
	.string "Si llega a estar ahí y lo recuperas,\n"
	.string "salvarías mi carrera. Te recompensaré\l"
	.string "como es debido.$"

SlateportCity_Museo_Secundaria_Texto_24:
	.string "Recuerda, el otro museo está en PUEBLO\n"
	.string "VERDEGAL, al oeste de CIUDAD\l"
	.string "MALVALONA.$"

SlateportCity_Museo_Secundaria_Texto_25:
	.string "¡{PLAYER} entregó la pintura del\n"
	.string "MUSEO PORTUAL!$"

SlateportCity_Museo_Secundaria_Texto_26:
	.string "¡No puedo creerlo! ¡Entonces yo tenía\n"
	.string "razón!$"

SlateportCity_Museo_Secundaria_Texto_27:
	.string "Lo que has hecho no tiene precio,\n"
	.string "acepta este dinero.$"

SlateportCity_Museo_Secundaria_Texto_28:
	.string "¡Te has embolsado 1,000,000¥!$"

SlateportCity_Museo_Secundaria_Texto_29:
	.string "Toma este POKÉMON también, es\n"
	.string "extremadamente raro.$"

SlateportCity_Museo_Secundaria_Texto_30:
	.string "¡¡{PLAYER} obtuvo un RELICANTH al\n"
	.string "nv.60!!$"

SlateportCity_Museo_Secundaria_Texto_31:
	.string "Y ahora… cuéntame, ¿qué ocurrió allí?$"

SlateportCity_Museo_Secundaria_Texto_32:
	.string "Esto no puede quedar así.$"

SlateportCity_Museo_Secundaria_Texto_33:
	.string "Me pondré en contacto con el MUSEO\n"
	.string "CALAGUA, ese tipo no puede seguir al\l"
	.string "mando del MUSEO VERDEGAL.$"

SlateportCity_Museo_Secundaria_Texto_34:
	.string "¡Pondré fin a su corrupción!$"

