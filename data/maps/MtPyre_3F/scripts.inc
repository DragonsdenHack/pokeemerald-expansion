MtPyre_3F_MapScripts::
	.byte 0

MtPyre_3F_EventScript_William::
	trainerbattle_single TRAINER_TRAINER_538, MtPyre_3F_Text_WilliamIntro, MtPyre_3F_Text_WilliamDefeat
	msgbox MtPyre_3F_Text_WilliamPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_3F_EventScript_Kayla::
	trainerbattle_single TRAINER_TRAINER_539, MtPyre_3F_Text_KaylaIntro MtPyre_3F_Text_KaylaDefeat
	msgbox MtPyre_3F_Text_KaylaPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_3F_EventScript_Gabrielle::
	trainerbattle_single TRAINER_TRAINER_540, MtPyre_3F_Text_GabrielleIntro, MtPyre_3F_Text_GabrielleDefeat,
	msgbox MtPyre_3F_Text_GabriellePostBattle, MSGBOX_DEFAULT
	release
	end

MtPyre_3F_EventScript_RegisterGabrielle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MtPyre_3F_Text_GabrielleRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ALTORANGO
	release
	end

MtPyre_3F_EventScript_RematchGabrielle::
	trainerbattle_rematch TRAINER_ALTORANGO, MtPyre_3F_Text_GabrielleRematchIntro, MtPyre_3F_Text_GabrielleRematchDefeat
	msgbox MtPyre_3F_Text_GabriellePostRematch, MSGBOX_AUTOCLOSE
	end

MtPyre_3F_Text_WilliamIntro:
	.string "¡El fresco aire de la montaña ha\n"
	.string "potenciado mis poderes psíquicos!\l"
	.string "Alguien tan pequeño como tú… No tienes\l"
	.string "ni medio movimiento…$"

MtPyre_3F_Text_WilliamDefeat:
	.string "Qué vergüenza más grande…$"

MtPyre_3F_Text_WilliamPostBattle:
	.string "Quizás todavía pueda potenciar mis\n"
	.string "poderes psíquicos una pizquita…$"

MtPyre_3F_Text_KaylaIntro:
	.string "¡Ja, ja, ja, ja! Éste no es lugar para\n"
	.string "críos... ¡y menos aún para ti!$"

MtPyre_3F_Text_KaylaDefeat:
	.string "Es evidente que he perdido…$"

MtPyre_3F_Text_KaylaPostBattle:
	.string "Está claro que tengo que entrenarme\n"
	.string "mucho más… No debo flaquear si quiero\l"
	.string "alcanzar la cima. ¡Yo puedo!$"

MtPyre_3F_Text_GabrielleIntro:
	.string "¿Por qué has venido hasta aqui?$"

MtPyre_3F_Text_GabrielleDefeat:
	.string "¡Ha sido impresionante! Tienes\n"
	.string "cualidades muy especiales.$"

MtPyre_3F_Text_GabriellePostBattle:
	.string "Me gustaría volver a ver a tus Pokémon\n"
	.string "cuando hayan crecido un poco…$"

MtPyre_3F_Text_GabrielleRegister:
	.string "I would like to see your POKÉMON\n"
	.string "when they grow up some more…\p"
	.string "Please, I need to see your POKéNAV.$"

MtPyre_3F_Text_GabrielleRematchIntro:
	.string "Oh, it's you…\p"
	.string "Have you come to show me your grown\n"
	.string "POKÉMON?$"

MtPyre_3F_Text_GabrielleRematchDefeat:
	.string "How amazing!\n"
	.string "You are a special person.$"

MtPyre_3F_Text_GabriellePostRematch:
	.string "POKÉMON no longer of this world.\n"
	.string "POKÉMON that are with you now.\p"
	.string "And the POKÉMON that you will meet\n"
	.string "in the future…\p"
	.string "They are all to be equally cherished.\n"
	.string "I see that you've remembered that.$"

