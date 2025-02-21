MtPyre_1F_MapScripts::
	.byte 0

MtPyre_1F_EventScript_CleanseTagWoman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_CLEANSE_TAG, MtPyre_1F_EventScript_ReceivedCleanseTag
	msgbox MtPyre_1F_Text_TakeThisForYourOwnGood, MSGBOX_DEFAULT
	giveitem ITEM_CLEANSE_TAG
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_CLEANSE_TAG
	release
	end

MtPyre_1F_EventScript_ReceivedCleanseTag::
	msgbox MtPyre_1F_Text_ExplainCleanseTag, MSGBOX_DEFAULT
	release
	end

MtPyre_1F_EventScript_PokefanF::
	msgbox MtPyre_1F_Text_ComeToPayRespects, MSGBOX_NPC
	end

MtPyre_1F_EventScript_Man::
	msgbox MtPyre_1F_Text_RestingPlaceOfZigzagoon, MSGBOX_NPC
	end

MtPyre_1F_Text_TakeThisForYourOwnGood:
	.string	"En el MONTE PÍRICO te puedes encontrar\n"
	.string	"con todo tipo de criaturas…\p"
	.string	"Nunca se sabe qué puede pasar,\n"
	.string	"así que toma esto por tu bien.$"

MtPyre_1F_Text_ExplainCleanseTag:
	.string "Have a POKÉMON hold that\n"
	.string "CLEANSE TAG.\p"
	.string "It will help ward off wild POKÉMON.$"

MtPyre_1F_Text_ComeToPayRespects:
	.string "Did you come to pay your respect\n"
	.string "to the spirits of departed POKÉMON?\p"
	.string "You must care for your POKÉMON a lot.$"

MtPyre_1F_Text_RestingPlaceOfZigzagoon:
	.string	"Aquí descansa en paz mi ZIGZAGOON.\n"
	.string	"Yo lo quería tanto…$"


