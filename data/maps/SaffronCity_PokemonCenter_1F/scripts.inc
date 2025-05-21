SaffronCity_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_PokemonCenter_1F_OnTransition
	.byte 0

SaffronCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_SAFFRON_CITY
	goto_if_ge VAR_UNUSED_0x40F7, 203, SaffronCity_PokemonCenter_1F_WarpDinamica
	setdynamicwarp MAP_SAFFRON_CITY, 24, 38
	end
	
SaffronCity_PokemonCenter_1F_WarpDinamica::
setdynamicwarp MAP_NEO_SAFFRON_CITY, 24, 38
end		

SaffronCity_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

SaffronCityPokemonCenter1::
end



SaffronCityPokemonCenter2::
lock     
faceplayer     
msgbox SaffronCity_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

SaffronCity_PokemonCenter_Text_2:
	.string "Alle hier wissen, was SILPH wirklich ist.\p"
	.string "Es ist seinem Erfolg zum Opfer gefallen.\p"
	.string "Doch das rechtfertigt nicht, was ihr\n"
	.string "getan habt!$"



SaffronCityPokemonCenter3::
lock     
faceplayer     
msgbox SaffronCity_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

SaffronCity_PokemonCenter_Text_3:
	.string "SAFFRONIA ist das Finanzzentrum von\n"
	.string "KANTO. Egal, was ihr versucht, wir\l"
	.string "werden nicht fallen.$"



SaffronCityPokemonCenter4::
lock
faceplayer
msgbox SaffronCityPokemonCenter4_Texto_1 MSGBOX_NPC
release
end

SaffronCityPokemonCenter4_Texto_1:
.string "SILPH is such an important company that\n"
	.string "even LANCE came here for business.$"


SaffronCityPokemonCenterDocumento_100::
msgbox SaffronCityPokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

SaffronCityPokemonCenterDocumento_Text_100:
.string "POKÉMON JOURNAL\p"
	.string "Special Feature: SAFFRON GYM\n"
	.string "LEADER SABRINA!\p"
	.string "People say that SABRINA can\n"
	.string "communicate with her POKÉMON\l"
	.string "during battle without speaking.$"
