Route49_Pagoda_P4_MapScripts::
	.byte 0

Route49_Pagoda_P4_Primer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P4_Primer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P4_Primer_Pensador_Texto_1:
	.string "Being trapped in the straitjacket of\n"
	.string "certainties makes us akin to\l"
	.string "characters in a novel whose plot has\l"
	.string "already been written.$"

Route49_Pagoda_P4_Segundo_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P4_Segundo_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P4_Segundo_Pensador_Texto_1:
	.string "If it weren't for being shielded by the\n"
	.string "mountain, the pagoda would be visible\l"
	.string "from CIANWOOD CITY.$"

Route49_Pagoda_P4_Tercer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P4_Tercer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P4_Tercer_Pensador_Texto_1:
	.string "The POKÉMON of our GRAND MASTER are as\n"
	.string "ancient as this place. It is believed\l"
	.string "that the SACRED DRAGON somehow\l"
	.string "blessed them with longevity.$"

Route49_Pagoda_P4_Cuarto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P4_Cuarto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P4_Cuarto_Pensador_Texto_1:
	.string "Did you manage to read the dragon\n"
	.string "scroll? Reading it would be fatal. It's\l"
	.string "the uncertainty what we love. The mist\l"
	.string "makes things wonderful.$"

Route49_Pagoda_P4_Quinto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P4_Quinto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P4_Quinto_Pensador_Texto_1:
	.string "The number of POKÉMON that react to\n"
	.string "the GOLDEN STONE is immeasurable. One\l"
	.string "of our most skilled trainers evolved a\l"
	.string "BASCULIN with it. Now it's a powerful\l"
	.string "BASCULEGION.$"


Route49_Pagoda_P4_Sexto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P4_Sexto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P4_Sexto_Pensador_Texto_1:
	.string "There are many skilled trainers around\n"
	.string "here. As you continue to ascend, you'll\l"
	.string "notice it more.$"

Route49_Pagoda_P4_EventScript_Pensador_1::
	trainerbattle_single TRAINER_TRAINER_224, Route49_Pagoda_P4_Text_Pensador1Intro, Route49_Pagoda_P4_Text_Pensador1Defeated
	msgbox Route49_Pagoda_P4_Text_Pensador1PostBattle, MSGBOX_AUTOCLOSE
	end

Route49_Pagoda_P4_EventScript_Pensador_2::
	trainerbattle_single TRAINER_TRAINER_225, Route49_Pagoda_P4_Text_Pensador2Intro, Route49_Pagoda_P4_Text_Pensador2Defeated
	msgbox Route49_Pagoda_P4_Text_Pensador2PostBattle, MSGBOX_AUTOCLOSE
	end
