.set LOCALID_MOVE_RELEARNER, 1

FallarborTown_MoveRelearnersHouse_MapScripts::
	.byte 0

FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner::
	lockall
	faceplayer
	clearflag FLAG_HOENN_639
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_set FLAG_TEMP_1, FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	goto FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove
	end

FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove::
	checkitem ITEM_TINY_MUSHROOM, 2
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	msgbox FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	goto FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove2
	end
	
FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove2::
	case YES, FallarborTown_MoveRelearnersHouse_EventScript_Activate_EggMove
    release
	end

FallarborTown_MoveRelearnersHouse_EventScript_Activate_EggMove::
    clearflag FLAG_HOENN_639
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
	removeitem ITEM_TINY_MUSHROOM, 2
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
    .string "I'm the POKÉMON MOVE MANIAC.\p"
    .string "I know every single move that\n"
    .string "POKÉMON learn growing up.\p"
    .string "I'm also a mushroom maniac.\p"
    .string "Bring me two TINYMUSHROOMS,\n"
    .string "and you'll see.\p"
    .string "If you do that for me, I'll teach\n"
    .string "a move to one POKÉMON.$"

FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove:
	.string "¡Oh! ¡Eso es! ¡Eso es una\n"
	.string "MINI SETA!\p"
	.string "Déjame adivinar, ¿quieres que enseñe\n"
	.string "algún movimiento a tus POKÉMON?$"
	
FallarborTown_MoveRelearnersHouse_Text_EggMove:
	.string "Me sé todos los movimientos\n"
	.string "huevo que aprenden los POKéMON.\p"
	.string "¿Te interesa?$"

FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon:
    .string "Which POKÉMON needs tutoring?$"

FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove:
    .string "Which move should I teach?$"

FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon:
    .string "Sorry…\p"
    .string "It doesn't appear as if I have a\n"
    .string "move I can teach that POKÉMON.$"

FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale:
    .string "{PLAYER} handed over two\n"
    .string "TINYMUSHROOMS in exchange.$"

FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale:
    .string "If your POKÉMON need to learn a\n"
    .string "move, I need a MUSHROOM or two.$"

FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg:
	.string "¿Qué? No puedo enseñar nada\n"
	.string "a un HUEVO.$"

Sala_Ejecutiva_MoveRelearnersHouse_EventScript_MoveRelearner::
lock
setflag FLAG_HOENN_639
msgbox Sala_Ejecutiva_MoveRelearner_Texto_1, MSGBOX_AUTOCLOSE
msgbox Sala_Ejecutiva_MoveRelearner_Texto_2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Sala_Ejecutiva_No
goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_2

Sala_Ejecutiva_MoveRelearner_Texto_4:
		.string "Vuelva cuando guste, SIR.$"
	
Sala_Ejecutiva_MoveRelearner_Texto_3:
		.string "Como usted guste, SIR.$"

Sala_Ejecutiva_MoveRelearner_Texto_2:
	.string "Costará 5000¥ el movimiento.\n"
	.string "¿Te interesa?$"

Sala_Ejecutiva_MoveRelearner_Texto_1:
	.string "Hemos desarrollado tecnología capaz de\n"
	.string "hacer recordar forzosamente\l"
	.string "MOVIMIENTOS HUEVO a los POKÉMON.$"


Sala_Ejecutiva_No::
msgbox Sala_Ejecutiva_MoveRelearner_Texto_3 MSGBOX_AUTOCLOSE
release
end

Sala_Ejecutiva_Despues::
msgbox Sala_Ejecutiva_MoveRelearner_Texto_4 MSGBOX_AUTOCLOSE
release
end

FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_2::
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, Sala_Ejecutiva_No
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg
	goto_if_eq VAR_0x8005, 0, Sala_Ejecutiva_Despues
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove_2
	end
 
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove_2::
	msgbox FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	goto_if_eq VAR_0x8004, 0, Sala_Ejecutiva_No
	showmoneybox 0, 0
	delay 15
	playse SE_SHOP
	removemoney 5000 0
	updatemoneybox
	delay 50
	hidemoneybox
	clearflag FLAG_HOENN_639
	goto Sala_Ejecutiva_Despues
	end

