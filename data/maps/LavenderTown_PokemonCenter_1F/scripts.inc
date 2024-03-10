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
	.string "exprés…$"

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
    .string "¡Éste es el CENTRO POKÉMON!\p"
    .string "Nosotros curamos a los POKÉMON\n"
    .string "debilitados.\n"

Curacion_Centros_Pokemon_Kanto_Texto_2:
    .string "¿Quieres que nos ocupemos de los\n"
    .string "POKÉMON de tu equipo?$"

Curacion_Centros_Pokemon_Kanto_Texto_3:
    .string "Muy bien. Ten un poco de\n"
    .string "paciencia. Será solo un momento.$"

Curacion_Centros_Pokemon_Kanto_Texto_4:
    .string "Misión cumplida. Somos especialistas\p"
    .string "en devolver la forma a los\n"
    .string "POKÉMON.$"

Curacion_Centros_Pokemon_Kanto_Texto_5::
    .string "¡Vuelve siempre que quieras!$"


