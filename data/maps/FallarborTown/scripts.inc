FallarborTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
	.byte 0

FallarborTown_OnTransition:
	setflag FLAG_VISITED_FALLARBOR_TOWN
	setvar VAR_CONTEST_HALL_STATE, 0
	clearflag FLAG_CONTEST_SKETCH_CREATED
	end

FallarborTown_EventScript_ExpertM::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_ExpertMNormal::
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_Girl::
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
	end

FallarborTown_EventScript_Gentleman::
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
	end

FallarborTown_EventScript_Azurill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FallarborTown_EventScript_BattleTentSign::
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
	end

FallarborTown_EventScript_TownSign::
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
	end

FallarborTown_EventScript_MoveTutorSign::
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
	end

FallarborTown_Text_ShadyCharactersCozmosHome:
	.string	"¿Qué pasa, qué pasa?\p"
	.string	"He visto a un tipo muy sospechoso\n"
	.string	"merodeando por el LABORATORIO del\l"
	.string	"PROF. COZMO…{PAUSE 5}$"

FallarborTown_Text_RegionKnownForMeteors:
	.string	"Esta región es conocida por sus\n"
	.string	"lluvias de meteoritos.\p"
	.string	"Dicen que la CASCADA METEORO se creó\n"
	.string	"hace siglos, a causa de un meteorito…{PAUSE 5}$"

FallarborTown_Text_MyPreciousAzurill:
	.string	"¡Mira! ¡Pero mira bien!\n"
	.string	"¡Éste es mi precioso AZURILL!\p"
	.string	"¿A que es la cosita más mona,\n"
	.string	"suave y blandita del mundo?$"

FallarborTown_Text_Azurill:
	.string	"AZURILL: Azu, azuuuu…{PAUSE 5}$"

FallarborTown_Text_HaveYouChallengedFlannery:
	.string "Have you already challenged FLANNERY,\n"
	.string "the LEADER of LAVARIDGE GYM?\p"
	.string "The girl's grandfather was famous.\n"
	.string "He was one of the ELITE FOUR in the\l"
	.string "POKÉMON LEAGUE at one point.\p"
	.string "It wouldn't surprise me to see FLANNERY\n"
	.string "become a great TRAINER in her own\l"
	.string "right.$"

FallarborTown_Text_BattleTentSign:
	.string	"TIENDA de BATALLA de PUEBLO PARDAL\n"
	.string	"“¡El punto de encuentro\l"
	.string	"de los grandes equipos!”$"

FallarborTown_Text_TownSign:
	.string	"PUEBLO PARDAL\n"
	.string	"“Una comunidad de granjas y jardines.”$"

FallarborTown_Text_MoveTutorSign:
	.string "MOVE TUTOR'S HOUSE\n"
	.string "“New moves taught to POKÉMON.”$"

