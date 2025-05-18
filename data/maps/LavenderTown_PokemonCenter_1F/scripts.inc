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
	.string "TEAM ROCKET würde alles\n"
	.string "für Geld tun!$"



LavenderTownPokemonCenter3::
lock     
faceplayer     
msgbox LavenderTown_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

LavenderTown_PokemonCenter_Text_3:
    .string "TRAGOSSO tragen Schädelmasken!\p"
    .string "Man zahlt für sie eine Menge Geld!$"



LavenderTownPokemonCenter4::
lock     
faceplayer     
msgbox LavenderTown_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

LavenderTown_PokemonCenter_Text_4:
	.string "Ich bin erst vor kurzem in diese Stadt\n"
	.string "gezogen! Ich hörte, dass MR. Fuji auch\l"
	.string "nicht von hier stammt!$"



LavenderTownPokemonCenter5::
lock     
faceplayer     
msgbox LavenderTown_PokemonCenter_Text_5, MSGBOX_DEFAULT
release     
end

LavenderTown_PokemonCenter_Text_5:
	.string "Du bist Abschaum.\n"
	.string "Stehlen wird dir nichts bringen!$"

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
	.string "PKMN CENTER…$"

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
	.string "Willkommen im POKéMON-CENTER!\n"
	.string "Wir heilen deine POKéMON und machen\l"
	.string "sie wieder fit.$"

Curacion_Centros_Pokemon_Kanto_Texto_2:
    .string "O.K. Wir benötigen deine POKéMON.$"

Curacion_Centros_Pokemon_Kanto_Texto_3:
	.string "Okay, ich nehme deine POKéMON für\n"
	.string "einen Moment in meine Obhut.$"

Curacion_Centros_Pokemon_Kanto_Texto_4:
	.string "Danke! Deine POKéMON sind\n"
	.string "wieder topfit!$"

Curacion_Centros_Pokemon_Kanto_Texto_5::
    .string "Komm jederzeit wieder vorbei!$"


