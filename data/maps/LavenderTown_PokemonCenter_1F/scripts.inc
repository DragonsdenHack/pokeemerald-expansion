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
.string "¡El TEAM ROCKET hará lo que sea\n"
.string "por el oro!\p"
.string "¡No hay trabajo sucio ni actos\n"
.string "vandálicos que no seáis capaces\l"
.string "de hacer!$"



LavenderTownPokemonCenter3::
lock     
faceplayer     
msgbox LavenderTown_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

LavenderTown_PokemonCenter_Text_3:
.string "Los CUBONE llevan cráneos,\n"
.string "¿verdad?\p"
.string "¡La gente pagaría mucho por uno\n"
.string "de ellos!$"



LavenderTownPokemonCenter4::
lock     
faceplayer     
msgbox LavenderTown_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

LavenderTown_PokemonCenter_Text_4:
.string "Acabo de mudarme a este pueblo.\p"
.string "He oído que el SR. FUJI tampoco\n"
.string "es de por aquí.$"



LavenderTownPokemonCenter5::
lock     
faceplayer     
msgbox LavenderTown_PokemonCenter_Text_5, MSGBOX_DEFAULT
release     
end

LavenderTown_PokemonCenter_Text_5:
.string "¡Sois despreciables!\n"
.string "¡Robando no vais a llegar a\l"
.string "ninguna parte!$"

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
.string "Bienvenido al CENTRO de curación\n"
	.string "exprés...$"

Curacion_Centros_Pokemon_Johto_Texto_2:
.string "¡Y listo!\n"
	.string "¡Todos tus POKÉMON están en plena\l"
	.string "forma de nuevo!$"


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
    .string "the POKéMON CENTER.\p"
    .string "We restore your tired POKéMON\n"
    .string "to full health.$"

Curacion_Centros_Pokemon_Kanto_Texto_2:
    .string "Would you like to rest your POKéMON?$"

Curacion_Centros_Pokemon_Kanto_Texto_3:
    .string "Okay, I'll take your POKéMON\n"
    .string "for a few seconds.$"

Curacion_Centros_Pokemon_Kanto_Texto_4:
    .string "Thank you for waiting.\p"
    .string "We've restored your POKéMON\n"
    .string "to full health.$"

Curacion_Centros_Pokemon_Kanto_Texto_5::
    .string "We hope to see you again!$"


