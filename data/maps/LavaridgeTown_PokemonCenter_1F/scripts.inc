.set LOCALID_NURSE, 1

LavaridgeTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

LavaridgeTown_PokemonCenter_1F_OnTransition:
	@setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Youngster::
	msgbox LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Woman::
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether:
	.string	"Creo que los POKéMON se van uniendo\n"
	.string	"más a los ENTRENADORES a medida\l"
	.string	"que van pasando más tiempo juntos.\p"
	.string	"Cuanto más tiempo, mejor.\n"
	.string	"Eso creo.$"

LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate:
	.string	"Es increíble cómo pueden devolverte\n"
	.string	"la energía estos baños termales.\p"
	.string	"¡Cómo me gustaría poder meter\n"
	.string	"también aquí a mis POKéMON!$"

LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo:
	.string	"¡Jo, jo, jo! Oye, joven, por aquí\n"
	.string	"llegarás a los baños termales.\p"
	.string	"Los POKéMON descansan, ¿no?\n"
	.string	"Pues los ENTRENADORES también.$"

LavaridgeTown_PokemonCenter_1F_EventScript_TM133::
	lock
	faceplayer
	goto_if_set FLAG_HOENN_172, LavaridgeTown_PokemonCenter_1F_EventScript_ReceivedTM133
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TM133, MSGBOX_DEFAULT
	giveitem ITEM_TM33
	setflag FLAG_HOENN_172
	msgbox LavaridgeTown_PokemonCenter_1F_Text_ExplainTM133, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_PokemonCenter_1F_EventScript_ReceivedTM133::
	msgbox LavaridgeTown_PokemonCenter_1F_Text_ExplainTM133, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_PokemonCenter_1F_Text_TM133:
.string "¡Ouch!\n"
.string "¡Creo que me ha dado un\l"
.string "golpe de calor!\l"
.string "¡Ten cuidado con los baños\l"
.string "termales, jovencito!$"

LavaridgeTown_PokemonCenter_1F_Text_ExplainTM133:
	.string "GOLPE CALOR hará daño en\n"
	.string "en función del peso de tu\l"
	.string "POKÉMON y el de tu rival.\l"
	.string "Cuanto más pesado sea el tuyo,\l"
	.string "¡más daño hará!$"

