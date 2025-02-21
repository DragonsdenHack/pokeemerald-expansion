DewfordTown_House1_MapScripts::
	.byte 0

DewfordTown_House1_EventScript_Man::
	msgbox DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland, MSGBOX_NPC
	end

DewfordTown_House1_EventScript_Woman::
	msgbox DewfordTown_House1_Text_LifeGoesSlowlyOnIsland, MSGBOX_NPC
	end

DewfordTown_House1_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox DewfordTown_House1_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland:
	.string "There's a lot to be said for living on\n"
	.string "a small island like this in harmony with\l"
	.string "POKÉMON and the family.$"

DewfordTown_House1_Text_LifeGoesSlowlyOnIsland:
	.string	"Yo soy de CIUDAD PORTUAL, pero\n"
	.string	"me vine a vivir aquí cuando me casé.\p"
	.string	"El tiempo pasa despacio en esta isla,\n"
	.string	"pero, tras el estrés de vivir en un gran\l"
	.string	"puerto, sienta bien esta tranquilidad.$"

DewfordTown_House1_Text_Zigzagoon:
	.string	"ZIGZAGOON: ¡Zigzaaaa!$"

