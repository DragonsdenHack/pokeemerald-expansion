MeteorFalls_1F_2R_MapScripts::
	.byte 0

MeteorFalls_1F_2R_EventScript_Nicolas::
	trainerbattle_single TRAINER_TRAINER_649, MeteorFalls_1F_2R_Text_NicolasIntro, MeteorFalls_1F_2R_Text_NicolasDefeat,
	msgbox MeteorFalls_1F_2R_Text_NicolasPostBattle, MSGBOX_DEFAULT
	release
	end

MeteorFalls_1F_2R_EventScript_RegisterNicolas::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MeteorFalls_1F_2R_Text_NicolasRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_NICOLAS_1
	release
	end

MeteorFalls_1F_2R_EventScript_RematchNicolas::
	trainerbattle_rematch TRAINER_NICOLAS_1, MeteorFalls_1F_2R_Text_NicolasRematchIntro, MeteorFalls_1F_2R_Text_NicolasRematchDefeat
	msgbox MeteorFalls_1F_2R_Text_NicolasPostRematch, MSGBOX_AUTOCLOSE
	end

MeteorFalls_1F_2R_EventScript_John::
	trainerbattle_double TRAINER_TRAINER_648, MeteorFalls_1F_2R_Text_JohnIntro, MeteorFalls_1F_2R_Text_JohnDefeat, MeteorFalls_1F_2R_Text_JohnNotEnoughMons,
	msgbox MeteorFalls_1F_2R_Text_JohnPostBattle, MSGBOX_DEFAULT
	release
	end

MeteorFalls_1F_2R_EventScript_Jay::
	trainerbattle_double TRAINER_TRAINER_648, MeteorFalls_1F_2R_Text_JayIntro, MeteorFalls_1F_2R_Text_JayDefeat, MeteorFalls_1F_2R_Text_JayNotEnoughMons,
	msgbox MeteorFalls_1F_2R_Text_JayPostBattle, MSGBOX_DEFAULT
	release
	end

MeteorFalls_1F_2R_EventScript_RegisterJohn::
	msgbox MeteorFalls_1F_2R_Text_JohnRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_JOHN_AND_JAY_1
	release
	end

MeteorFalls_1F_2R_EventScript_RematchJohn::
	trainerbattle_rematch_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JohnRematchIntro, MeteorFalls_1F_2R_Text_JohnRematchDefeat, MeteorFalls_1F_2R_Text_JohnRematchNotEnoughMons
	msgbox MeteorFalls_1F_2R_Text_JohnPostRematch, MSGBOX_AUTOCLOSE
	end

MeteorFalls_1F_2R_EventScript_RegisterJay::
	msgbox MeteorFalls_1F_2R_Text_JohnRegister, MSGBOX_DEFAULT  @ John speaks for both during register
	register_matchcall TRAINER_JOHN_AND_JAY_1
	release
	end

MeteorFalls_1F_2R_EventScript_RematchJay::
	trainerbattle_rematch_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JayRematchIntro, MeteorFalls_1F_2R_Text_JayRematchDefeat, MeteorFalls_1F_2R_Text_JayRematchNotEnoughMons
	msgbox MeteorFalls_1F_2R_Text_JayPostRematch, MSGBOX_AUTOCLOSE
	end

MeteorFalls_1F_2R_Text_NicolasIntro:
	.string	"Aquí es donde los amantes de los\n"
	.string	"DRAGONES entrenamos.\p"
	.string	"A veces viene el CAMPEÓN de visita.\n"
	.string	"¿Ves como somos algo especial?$"

MeteorFalls_1F_2R_Text_NicolasDefeat:
	.string	"¡Uf!\n"
	.string	"¡No esperaba que fueras tan fuerte!$"

MeteorFalls_1F_2R_Text_NicolasPostBattle:
	.string "The road ahead remains long and harsh.\p"
	.string "When will my POKÉMON and I become\n"
	.string "the best?$"

MeteorFalls_1F_2R_Text_NicolasRegister:
	.string	"Quiero saber más sobre tus habilidades.\n"
	.string	"Déjame registrarte en mi POKéNAV.$"

MeteorFalls_1F_2R_Text_NicolasRematchIntro:
	.string	"Desde que nos conocimos, hemos\n"
	.string	"entrenado duro para ser los mejores.\p"
	.string	"¡Veamos cuánto hemos mejorado!$"

MeteorFalls_1F_2R_Text_NicolasRematchDefeat:
	.string	"¡Uf!\n"
	.string	"¡No esperaba que fueras tan fuerte!$"

MeteorFalls_1F_2R_Text_NicolasPostRematch:
	.string "You've obviously kept up your\n"
	.string "POKÉMON training.\p"
	.string "So long as you remain strong, I, too,\n"
	.string "can become stronger!$"

MeteorFalls_1F_2R_Text_JohnIntro:
	.string "JOHN: We've always battled POKÉMON\n"
	.string "together as a twosome.\l"
	.string "We've confidence in ourselves.$"

MeteorFalls_1F_2R_Text_JohnDefeat:
	.string	"JULI: Oh…\n"
	.string	"Hemos perdido, querida.$"

MeteorFalls_1F_2R_Text_JohnPostBattle:
	.string	"JULI: Llevamos cincuenta años casados.\p"
	.string	"Y ahora que lo pienso… Todavía\n"
	.string	"no he vencido a mi mujer en combate.$"

MeteorFalls_1F_2R_Text_JohnNotEnoughMons:
	.string "JOHN: Well, well, what a young TRAINER!\p"
	.string "Will you battle with us? If so, you'll\n"
	.string "have to return with more POKÉMON.$"

MeteorFalls_1F_2R_Text_JohnRegister:
	.string	"JULI: Dime, si surgiera la oportunidad,\n"
	.string	"¿volverías a enfrentarte a nosotros?$"

MeteorFalls_1F_2R_Text_JayIntro:
	.string	"NELA: Llevamos cincuenta años casados.\p"
	.string	"El vínculo que nos une como pareja\n"
	.string	"es fuerte como un roble.$"

MeteorFalls_1F_2R_Text_JayDefeat:
	.string	"NELA: Oh…\n"
	.string	"Hemos perdido, querido.$"

MeteorFalls_1F_2R_Text_JayPostBattle:
	.string "JAY: Fifty years of marriage…\p"
	.string "If we ever argued, we always settled\n"
	.string "it with a POKÉMON battle…$"

MeteorFalls_1F_2R_Text_JayNotEnoughMons:
	.string "JAY: Well, well, aren't you a young\n"
	.string "TRAINER?\p"
	.string "If you'd care to battle with us, you'll\n"
	.string "have to come back with more POKÉMON.$"

MeteorFalls_1F_2R_Text_JohnRematchIntro:
	.string "JOHN: We've always battled POKÉMON\n"
	.string "together as a twosome.\l"
	.string "We've confidence in ourselves.$"

MeteorFalls_1F_2R_Text_JohnRematchDefeat:
	.string	"JULI: Oh…\n"
	.string	"Hemos perdido, querida.$"

MeteorFalls_1F_2R_Text_JohnPostRematch:
	.string	"JULI: Llevamos cincuenta años casados.\p"
	.string	"Y ahora que lo pienso… Mi mujer y yo\n"
	.string	"hemos combatido día sí y día no.$"

MeteorFalls_1F_2R_Text_JohnRematchNotEnoughMons:
	.string "JOHN: Well, well, what a young TRAINER!\p"
	.string "Will you battle with us? If so, you'll\n"
	.string "have to return with more POKÉMON.$"

MeteorFalls_1F_2R_Text_JayRematchIntro:
	.string	"NELA: Llevamos cincuenta años casados.\p"
	.string	"Nos hemos apoyado el uno al otro\n"
	.string	"en las duras y en las maduras.$"

MeteorFalls_1F_2R_Text_JayRematchDefeat:
	.string	"NELA: Oh…\n"
	.string	"Hemos perdido, querido.$"

MeteorFalls_1F_2R_Text_JayPostRematch:
	.string	"NELA: Cincuenta años de matrimonio…\n"
	.string	"Han pasado tantas cosas…\p"
	.string	"Espero que siempre seamos\n"
	.string	"tan felices como hasta ahora.$"

MeteorFalls_1F_2R_Text_JayRematchNotEnoughMons:
	.string "JAY: Well, well, aren't you a young\n"
	.string "TRAINER?\p"
	.string "If you'd care to battle with us, you'll\n"
	.string "have to come back with more POKÉMON.$"

