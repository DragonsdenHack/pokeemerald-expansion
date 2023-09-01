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
.string "DIARIO POKéMON\p"
	.string "Última hora sobre el SR. FUJI,\n"
	.string "de la CASA POKéMON.\p"
	.string "Nota del editor: el tímido\n"
	.string "SR. FUJI no ha querido contestar\l"
	.string "a nuestras preguntas.\p"
	.string "Con todo, hay que decir que es una\n"
	.string "persona muy querida en PUEBLO\l"
	.string "LAVANDA.$"
