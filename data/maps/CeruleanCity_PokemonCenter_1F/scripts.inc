CeruleanCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_PokemonCenter_1F_OnTransition
	.byte 0

CeruleanCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_CERULEAN_CITY
	end

CeruleanCity_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

CeruleanCityPokemonCenter1::
end



CeruleanCityPokemonCenter2::
lock     
faceplayer     
msgbox CeruleanCity_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

CeruleanCity_PokemonCenter_Text_2:
.string "Deja de perder el tiempo sirviendo\n"
.string "a una panda de ladrones sin futuro\l"
.string "y haz algo con tu vida, niño.$"



CeruleanCityPokemonCenter3::
lock     
faceplayer     
msgbox CeruleanCity_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

CeruleanCity_PokemonCenter_Text_3:
.string "¡Debería darte verguenza andar\n"
.string "como si nada con esa vestimenta!$"



CeruleanCityPokemonCenter4::
lock     
faceplayer     
msgbox CeruleanCity_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

CeruleanCity_PokemonCenter_Text_4:
.string "Si por mi fuera, os prohibiría\n"
.string "entrar incluso a los CENTROS\l"
.string "POKÉMON, los ROCKET no merecen\l"
.string "siquiera los servicios de primera\l"
.string "necesidad.$"



CeruleanCityPokemonCenter5::
lock     
faceplayer     
msgbox CeruleanCity_PokemonCenter_Text_5, MSGBOX_DEFAULT
release     
end

CeruleanCity_PokemonCenter_Text_5:
.string "Dicen que BILL tiene POKÉMON que\n"
.string "nadie más tiene, ¡me gustaría\l"
.string "verlos!$"



CeruleanCityPokemonCenterDocumento_100::
msgbox CeruleanCityPokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

CeruleanCityPokemonCenterDocumento_Text_100:
.string "DIARIO POKéMON\p"
	.string "Última hora sobre MISTY, LÍDER\n"
	.string "del GIMNASIO de CELESTE.\p"
	.string "Según fuentes cercanas, MISTY\n"
	.string "adora a LORELEI, del ALTO MANDO.$"
