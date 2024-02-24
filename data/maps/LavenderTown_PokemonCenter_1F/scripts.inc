LavenderTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_PokemonCenter_1F_OnTransition
	.byte 0

LavenderTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_LAVENDER_TOWN
	end

LavenderTown_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

LavenderTownPokemonCenter1::
end



LavenderTownPokemonCenter2::
lock     
faceplayer     
msgbox LavenderTown_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

LavenderTown_PokemonCenter_Text_2:
	.string "TEAM ROCKET will do whatever it takes\n"
	.string "for money! There is no dirty work or\l"
	.string "acts of vandalism that you are not\l"
	.string "capable of doing!$"



LavenderTownPokemonCenter3::
lock     
faceplayer     
msgbox LavenderTown_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

LavenderTown_PokemonCenter_Text_3:
    .string "You know how the CUBONE species\n"
    .string "wears skulls, right?\p"
    .string "People will pay a lot for one.$"



LavenderTownPokemonCenter4::
lock     
faceplayer     
msgbox LavenderTown_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

LavenderTown_PokemonCenter_Text_4:
	.string "I just moved to LAVENDER. I heard\n"
	.string "MR.FUJI isn't from here either.$"



LavenderTownPokemonCenter5::
lock     
faceplayer     
msgbox LavenderTown_PokemonCenter_Text_5, MSGBOX_DEFAULT
release     
end

LavenderTown_PokemonCenter_Text_5:
	.string "You're scum! Stealing won't get you\n"
	.string "anywhere!$"

Curacion_Centros_Pokemon_Johto::
lock
msgbox Curacion_Centros_Pokemon_Johto_Texto_1 MSGBOX_AUTOCLOSE
fadescreen 1
playse SE_USE_ITEM
special HealPlayerParty
delay 20
fadescreen 0
msgbox Curacion_Centros_Pokemon_Johto_Texto_2 MSGBOX_AUTOCLOSE
release
end

Curacion_Centros_Pokemon_Johto_Texto_1:
.string "Welcome to the ROCKET\n"
	.string "PKMN CENTER...$"

Curacion_Centros_Pokemon_Johto_Texto_2:
.string "Here we go!\p"
	.string "All your POKÉMON are\n"
	.string "in shape again!$"


Curacion_Centros_Pokemon_Kanto::
lock
msgbox Curacion_Centros_Pokemon_Kanto_Texto_1 MSGBOX_AUTOCLOSE
msgbox Curacion_Centros_Pokemon_Kanto_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Curacion_Centros_Pokemon_Kanto_No
msgbox Curacion_Centros_Pokemon_Kanto_Texto_3 MSGBOX_AUTOCLOSE
fadescreen 1
playse SE_USE_ITEM
special HealPlayerParty
delay 20
fadescreen 0
msgbox Curacion_Centros_Pokemon_Kanto_Texto_4 MSGBOX_AUTOCLOSE
msgbox Curacion_Centros_Pokemon_Kanto_Texto_5 MSGBOX_AUTOCLOSE
release
end

Curacion_Centros_Pokemon_Kanto_No::
msgbox Curacion_Centros_Pokemon_Kanto_Texto_5 MSGBOX_AUTOCLOSE
release
end


Curacion_Centros_Pokemon_Kanto_Texto_1:
    .string "Hello, and welcome to\n"
    .string "the POKÉMON CENTER.\p"
    .string "We restore your tired POKÉMON\n"
    .string "to full health.$"

Curacion_Centros_Pokemon_Kanto_Texto_2:
    .string "Would you like to rest your POKÉMON?$"

Curacion_Centros_Pokemon_Kanto_Texto_3:
    .string "Okay, I'll take your POKÉMON\n"
    .string "for a few seconds.$"

Curacion_Centros_Pokemon_Kanto_Texto_4:
    .string "Thank you for waiting.\p"
    .string "We've restored your POKÉMON\n"
    .string "to full health.$"

Curacion_Centros_Pokemon_Kanto_Texto_5::
    .string "We hope to see you again!$"


