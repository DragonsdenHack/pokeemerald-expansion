.set LOCALID_MOVE_DELETER, 1

LilycoveCity_MoveDeletersHouse_MapScripts::
	.byte 0

LilycoveCity_MoveDeletersHouse_EventScript_MoveDeleter::
	lockall
	applymovement LOCALID_MOVE_DELETER, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LilycoveCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
	case NO, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
	releaseall
	end

LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget::
	msgbox LilycoveCity_MoveDeletersHouse_Text_WhichMonShouldForget, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_MoveDeletersHouse_EventScript_EggCantForgetMoves
	special GetNumMovesSelectedMonHas
	goto_if_eq VAR_RESULT, 1, LilycoveCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove
	msgbox LilycoveCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special MoveDeleterChooseMoveToForget
	fadescreen FADE_FROM_BLACK
	goto_if_eq VAR_0x8005, MAX_MON_MOVES, LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
	special BufferMoveDeleterNicknameAndMove
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, LilycoveCity_MoveDeletersHouse_EventScript_TryForgetMove
	case NO, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
	releaseall
	end

LilycoveCity_MoveDeletersHouse_EventScript_TryForgetMove::
	special IsLastMonThatKnowsSurf
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_MoveDeletersHouse_EventScript_LastMonWithSurf
	special MoveDeleterForgetMove
	playfanfare MUS_MOVE_DELETED
	waitfanfare
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonHasForgottenMove, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove::
	special BufferMoveDeleterNicknameAndMove
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_MoveDeletersHouse_EventScript_EggCantForgetMoves::
	msgbox LilycoveCity_MoveDeletersHouse_Text_EggCantForgetMoves, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain::
	msgbox LilycoveCity_MoveDeletersHouse_Text_ComeAgain, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_MoveDeletersHouse_EventScript_LastMonWithSurf::
	special BufferMoveDeleterNicknameAndMove
	msgbox LilycoveCity_MoveDeletersHouse_Text_CantForgetSurf, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove:
	.string "Eh… Ah, hola.\n"
	.string "Soy el QUITA MOVIMIENTOS.\p"
	.string "Puedo hacer que los POKÉMON olviden\n"
	.string "sus movimientos.\p"
	.string "¿Quieres que me ocupe de los\n"
	.string "tuyos?$"

LilycoveCity_MoveDeletersHouse_Text_WhichMonShouldForget:
	.string "¿Qué POKÉMON debería olvidar\n"
	.string "algún movimiento?$"

LilycoveCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten:
	.string "¿Qué movimiento debería olvidar?$"

LilycoveCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove:
	.string "{STR_VAR_1} solo conoce un movimiento,\n"
	.string "no puede olvidarlo{PAUSE 5}…{PAUSE 5}$"

LilycoveCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten:
	.string "¡Hmm! ¿El {STR_VAR_2} de {STR_VAR_1}?\n"
	.string "¿Debería olvidar este movimiento?$"

LilycoveCity_MoveDeletersHouse_Text_MonHasForgottenMove:
	.string "¡Ya está!\p"
	.string "Tu {STR_VAR_1} ha olvidado\n"
	.string "{STR_VAR_2} por completo.$"

LilycoveCity_MoveDeletersHouse_Text_ComeAgain:
	.string "Vuelve por aquí si quieres que tus\n"
	.string "POKÉMON olviden algún movimiento.$"

LilycoveCity_MoveDeletersHouse_Text_EggCantForgetMoves:
	.string "¿Qué?\n"
	.string "¡Los HUEVOS no aprenden movimientos!$"

LilycoveCity_MoveDeletersHouse_Text_CantForgetSurf:
	.string "Hm!\p"
	.string "Your {STR_VAR_1} doesn't seem willing\n"
	.string "to forget SURF.$"

