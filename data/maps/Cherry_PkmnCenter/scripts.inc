Cherry_PkmnCenter_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, Cherry_PokemonCenter_1F_OnTransition
	.byte 0

Cherry_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_CHERRYGROVE_CITY
	end

Cherry_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

CherryPkmnCenter1::
end



CherryPkmnCenter2::
lock     
faceplayer     
msgbox CherryPkmnCenter_Text_2, MSGBOX_DEFAULT
release     
end

CherryPkmnCenter_Text_2:
.string "Estos CENTROS POKÉMON tan cómodos\n"
.string "fueron parte de los recursos que\l"
.string "LANCE destinó a JOHTO tras ganar\l"
.string "la guerra, antes la cura de\l"
.string "POKÉMON aquí era mucho más\l"
.string "rudimentaria.$"



CherryPkmnCenter3::
lock     
faceplayer     
msgbox CherryPkmnCenter_Text_3, MSGBOX_DEFAULT
release     
end

CherryPkmnCenter_Text_3:
.string "Vine hasta aquí por un poderoso\n"
.string "SCYTHER, pero parece que no hay.\l"
.string "Tendré que buscar por el PARQUE\l"
.string "NACIONAL{PAUSE 5}…{PAUSE 5}$"



CherryPkmnCenter4::
end



CherryPkmnCenter5::
lock     
faceplayer     
msgbox CherryPkmnCenter_Text_5, MSGBOX_DEFAULT
release     
end

CherryPkmnCenter_Text_5:
.string "¡Es genial!\n"
.string "¡Puedo guardar a todos los POKÉMON\l"
.string "que quiera, y gratis!$"
