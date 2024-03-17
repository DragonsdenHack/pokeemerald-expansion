Route49_Pagoda_P6_MapScripts::
	.byte 0



Route49_Pagoda_P6_Primer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P6_Primer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P6_Primer_Pensador_Texto_1:
	.string "What fools call 'wasting time' is often\n"
	.string "the wisest investment.$"

Route49_Pagoda_P6_Segundo_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P6_Segundo_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P6_Segundo_Pensador_Texto_1:
	.string "People get so caught up in the fact\n"
	.string "that they have limits that they rarely\l"
	.string "make the effort required to even come\l"
	.string "close to them.$"

Route49_Pagoda_P6_Tercer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P6_Tercer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P6_Tercer_Pensador_Texto_1:
	.string "The GOLDEN STONE that the SACRED\n"
	.string "DRAGON generates is, in a way, similar to\l"
	.string "HO-OH's SACRED ASH.$"

Route49_Pagoda_P6_Cuarto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P6_Cuarto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P6_Cuarto_Pensador_Texto_1:
	.string "The evolutionary line of DUNSPARCE is\n"
	.string "fascinating, don't you think so? How\l"
	.string "could a POKÉMON destined for\l"
	.string "mediocrity ultimately harbor so much\l"
	.string "power?$"

Route49_Pagoda_P6_EventScript_Pensador_1::
	trainerbattle_single TRAINER_TRAINER_227, Route49_Pagoda_P6_Text_Pensador1Intro, Route49_Pagoda_P6_Text_Pensador1Defeated
	msgbox Route49_Pagoda_P6_Text_Pensador1PostBattle, MSGBOX_AUTOCLOSE
	end

Route49_Pagoda_P6_EventScript_Pensador_2::
	trainerbattle_single TRAINER_TRAINER_228, Route49_Pagoda_P6_Text_Pensador2Intro, Route49_Pagoda_P6_Text_Pensador2Defeated
	msgbox Route49_Pagoda_P6_Text_Pensador2PostBattle, MSGBOX_AUTOCLOSE
	end

