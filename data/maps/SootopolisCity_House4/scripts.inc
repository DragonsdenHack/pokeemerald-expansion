SootopolisCity_House4_MapScripts::
	.byte 0

SootopolisCity_House4_EventScript_Man::
	msgbox SootopolisCity_House4_Text_AncientTreasuresWaitingInSea, MSGBOX_NPC
	end

SootopolisCity_House4_EventScript_Woman::
	msgbox SootopolisCity_House4_Text_StrollUnderwaterWithPokemon, MSGBOX_NPC
	end

SootopolisCity_House4_EventScript_Azumarill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
	msgbox SootopolisCity_House4_Text_Azumarill, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SootopolisCity_House4_Text_AncientTreasuresWaitingInSea:
	.string	"Escúchame bien si quieres aprender\n"
	.string	"algo muy interesante.\p"
	.string	"Dicen que hay unas antiguas ruinas\n"
	.string	"cerca de aquí, en el mar.\p"
	.string	"Es posible que alberguen tesoros\n"
	.string	"que solo esperan a ser descubiertos.$"

SootopolisCity_House4_Text_StrollUnderwaterWithPokemon:
	.string "Ancient treasures…\p"
	.string "It would be nice if they existed, but\n"
	.string "even if they didn't, it would be so\l"
	.string "beautiful to take an underwater\l"
	.string "stroll with my POKÉMON.$"

SootopolisCity_House4_Text_Azumarill:
	.string	"AZUMARILL: ¡Mariiiii!$"

