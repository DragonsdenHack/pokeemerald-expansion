.set LOCALID_MOVE_RELEARNER, 1

FallarborTown_MoveRelearnersHouse_MapScripts::
	.byte 0

FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner::
	lockall
	faceplayer
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_set FLAG_TEMP_1, FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	goto FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove
	end

FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove::
	checkitem ITEM_TINY_MUSHROOM
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	msgbox FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	goto FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove2
	end
	
FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove2::
    msgbox FallarborTown_MoveRelearnersHouse_Text_EggMove, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, FallarborTown_MoveRelearnersHouse_EventScript_Activate_EggMove
	clearflag FLAG_HOENN_639
    goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	end

FallarborTown_MoveRelearnersHouse_EventScript_Activate_EggMove::
    setflag FLAG_HOENN_639
    goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
    end 	

FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon::
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg
	goto_if_eq VAR_0x8005, 0, FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove
	end

FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove::
	msgbox FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	goto_if_eq VAR_0x8004, 0, FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	msgbox FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale, MSGBOX_DEFAULT
	removeitem ITEM_TINY_MUSHROOM
	clearflag FLAG_HOENN_639
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	end

FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon::
	msgbox FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	end

FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg::
	msgbox FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	end

FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale::
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
	releaseall
	end

FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor:
	.string "Soy el TUTOR de MOVIMIENTOS.\p"
	.string "Me sé todos los movimientos que\n"
	.string "aprenden los POKÉMON. Todos,\l"
	.string "toditos, todos. Y puedo enseñar.\p"
	.string "También soy experto en setas.\n"
	.string "Si me traes una MINI SETA,\p"
	.string "le enseñaré un movimiento a\n"
	.string "uno de tus POKÉMON.$"

FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove:
	.string "¡Oh! ¡Eso es! ¡Eso es una\n"
	.string "MINI SETA!\p"
	.string "Déjame adivinar, ¿quieres que enseñe\n"
	.string "algún movimiento a tus POKÉMON?$"
	
FallarborTown_MoveRelearnersHouse_Text_EggMove:
	.string "Me sé todos los movimientos\n"
	.string "huevo que aprenden los POKéMON.\p"
	.string "¿Te interesa ó continúamos?$"

FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon:
	.string "¿A qué POKÉMON debería enseñárselo?$"

FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove:
	.string "¿Qué movimiento debería enseñar?$"

FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon:
	.string "Lo siento…\p"
	.string "Parece que no hay ningún movimiento\n"
	.string "que le pueda enseñar a este POKÉMON.$"

FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale:
	.string "{PLAYER} entregó la MINI SETA\n"
	.string "a cambio.$"

FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale:
	.string "Si quieres que le enseñe un movimiento\n" 
	.string "a algún POKÉMON, traéme una MINI SETA.$"

FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg:
	.string "¿Qué? No puedo enseñar nada\n"
	.string "a un HUEVO.$"

