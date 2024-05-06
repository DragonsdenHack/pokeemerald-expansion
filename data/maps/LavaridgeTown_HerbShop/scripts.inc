LavaridgeTown_HerbShop_MapScripts::
	.byte 0

LavaridgeTown_HerbShop_EventScript_Clerk::
	lock
	faceplayer
	message LavaridgeTown_HerbShop_Text_WelcomeToHerbShop
	waitmessage
	pokemart LavaridgeTown_HerbShop_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LavaridgeTown_HerbShop_Pokemart:
	.2byte ITEM_ENERGY_POWDER
	.2byte ITEM_ENERGY_ROOT
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_REVIVAL_HERB
	.2byte ITEM_NONE
	release
	end

LavaridgeTown_HerbShop_EventScript_ExpertM::
	msgbox LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike, MSGBOX_NPC
	end


LavaridgeTown_HerbShop_EventScript_OldMan::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_CHARCOAL, LavaridgeTown_HerbShop_EventScript_ExplainCharcoal
	msgbox LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine, MSGBOX_DEFAULT
	giveitem ITEM_CHARCOAL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_CHARCOAL
	release
	end

LavaridgeTown_HerbShop_EventScript_ExplainCharcoal::
	msgbox LavaridgeTown_HerbShop_Text_ExplainCharcoal, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_HerbShop_Text_WelcomeToHerbShop:
	.string	"Hola. Éste es el HERBOLARIO. Nuestras\n"
	.string	"medicinas son baratas y eficaces.$"

LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine:
	.string	"¿Has venido a comprar hierbas\n"
	.string	"medicinales a LAVACALDA?\p"
	.string	"Haces bien. Son muy recomendables.\p"
	.string	"¡Me has gustado! ¡Toma esto!$"

LavaridgeTown_HerbShop_Text_ExplainCharcoal:
	.string	"El CARBÓN que te he dado sirve\n"
	.string	"para preparar una medicina natural.\p"
	.string	"También hace maravillas cuando\n"
	.string	"se lo das a un POKéMON.\p"
	.string	"Intensifica la potencia de los\n"
	.string	"movimientos de tipo FUEGO.$"

LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike:
	.string	"Las hierbas medicinales funcionan\n"
	.string	"increíblemente bien, pero, si le das\l"
	.string	"una a un POKéMON, te tendrá manía.\l"
	.string	"¡El sabor es superamargo!$"

LavaridgeTown_EventScript_ReceiveTorchic::
    lock
    faceplayer
	checkmoncatch SPECIES_TORCHIC
	goto_if_eq VAR_RESULT, FALSE, LavaridgeTown_Torchic_EventScript_TakeNosepass 
	msgbox LavaridgeTown_Torchic_Text_1, MSGBOX_DEFAULT
	release
	end



LavaridgeTown_Torchic_EventScript_TakeNosepass::
lock
faceplayer
    msgbox LavaridgeTown_Torchic_Text_TakeNosepass MSGBOX_DEFAULT
	msgbox LavaridgeTown_Torchic_Text_TakeNosepass2 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox LavaridgeTown_Torchic_Text_MensajeNosepass, MSGBOX_DEFAULT
	givemon SPECIES_TORCHIC, 50, ITEM_NONE
	waitfanfare  
	release
	end 



LavaridgeTown_Torchic_Text_TakeNosepass:
	.string	"¿Has venido a comprar hierbas\n"
	.string	"medicinales a LAVACALDA?\p"
	.string	"Haces bien. Son muy recomendables.\p"
	.string	"¡Me has gustado! ¡Toma esto!$"



LavaridgeTown_Torchic_Text_TakeNosepass2:
	.string "¡Un POKÉMON muy raro que\n"
	.string "solo verás en HOENN!$"



LavaridgeTown_Torchic_Text_MensajeNosepass:
.string "¡OBTUVISTE UN TORCHIC AL NV.50!$"


LavaridgeTown_Torchic_Text_1:
	.string "La línea evolutiva de TORCHIC es cada\n"
	.string "vez más escasa. Que sepas que acabo de\l"
	.string "darte el último. Al siguiente forastero\l"
	.string "que venga, ¡solo podré darle CARBÓN!.$"

