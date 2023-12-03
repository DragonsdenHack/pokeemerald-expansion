TwoIsland_Torre_P1_MapScripts::
	.byte 0

TwoIsland_Torre_P1_Primer_Motero::
lock
faceplayer
msgbox TwoIsland_Torre_P1_Primer_Motero_Texto_1 MSGBOX_NPC
release
end

TwoIsland_Torre_P1_Primer_Motero_Texto_1:
	.string "We will turn this island into SEVII main\n"
	.string "place. What are they complaining so\l"
	.string "much about?$"

TwoIsland_Torre_P1_Segundo_Motero::
lock
faceplayer
msgbox TwoIsland_Torre_P1_Segundo_Motero_Texto_1 MSGBOX_DEFAULT
release
end

TwoIsland_Torre_P1_Segundo_Motero_Texto_1:
.string "This kind of stuff it's not for me…$"

TwoIsland_Torre_P1_Trabajador::
lock
faceplayer
msgbox TwoIsland_Torre_P1_Trabajador_Texto_1 MSGBOX_DEFAULT
release
end

TwoIsland_Torre_P1_Trabajador_Texto_1:
.string "Who are you?\n"
	.string "As long as you leave me working alone, I\l"
	.string "won't do anything to you for now,\l"
	.string "someone else will deal with you.$"

TwoIsland_Torre_P1_Cientifico::
lock
faceplayer
msgbox TwoIsland_Torre_P1_Cientifico_Texto_1 MSGBOX_DEFAULT
release
end

TwoIsland_Torre_P1_Cientifico_Texto_1:
	.string "We are so lucky that in these islands\n"
	.string "there are just POKÉMON from KANTO and\l"
	.string "JOHTO. We will earn a lot of money by\l"
	.string "bringing POKÉMON from a far away\l"
	.string "region.$"
