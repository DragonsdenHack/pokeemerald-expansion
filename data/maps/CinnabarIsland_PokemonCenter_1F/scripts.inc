CinnabarIsland_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_PokemonCenter_1F_OnTransition
	.byte 0

CinnabarIsland_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_CINNABAR_ISLAND
	end

CinnabarIsland_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

CinnabarIslandPokemonCenter1::
end



CinnabarIslandPokemonCenter2::
lock     
faceplayer     
msgbox CinnabarIsland_Center_Text_2, MSGBOX_DEFAULT
release     
end

CinnabarIsland_Center_Text_2:
.string "A veces es conveniente no\n"
.string "evolucionar demasiado pronto a un\l"
.string "POKÉMON, ya que en sus formas\l"
.string "preevolucionadas aprenden antes\l"
.string "buenos movimientos, a veces\l"
.string "incluso movimientos que no pueden\l"
.string "aprender una vez evolucionados.$"



CinnabarIslandPokemonCenter3::
lock     
faceplayer     
msgbox CinnabarIsland_Center_Text_3, MSGBOX_DEFAULT
release     
end

CinnabarIsland_Center_Text_3:
.string "Los ROCKET no sois bienvenidos\n"
.string "por aquí, nuestro LÍDER de\l"
.string "GIMNASIO nunca dejaría que este\l"
.string "lugar se infecte con vuestra\l"
.string "presencia.$"



CinnabarIslandPokemonCenter4::
lock     
faceplayer     
msgbox CinnabarIsland_Center_Text_4, MSGBOX_DEFAULT
release     
end

CinnabarIsland_Center_Text_4:
.string "Quería entrar en el GIMNASIO de\n"
.string "CANELA, pero la puerta está\l"
.string "cerrada a cal y canto.\l"
.string "Debe de haber una LLAVE en algún\l"
.string "sitio.\l"
.string "¿Estará en la MANSIÓN quemada esa?\l"
.string "Dicen que está habitada por un\l"
.string "amigo del LÍDER del GIMNASIO.$"



CinnabarIslandPokemonCenterDocumento_100::
msgbox CinnabarIslandPokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

CinnabarIslandPokemonCenterDocumento_Text_100:
.string "POKéMON JOURNAL\p"
	.string "Special Feature:\n"
	.string "MR. FUJI of POKéMON HOUSE!\p"
	.string "Editor: The shy MR. FUJI turned\n"
	.string "down our interview requests.\p"
	.string "He is a kindly man who is adored\n"
	.string "and respected in LAVENDER TOWN.$"
