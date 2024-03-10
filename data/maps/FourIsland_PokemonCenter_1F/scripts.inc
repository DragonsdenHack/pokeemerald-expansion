FourIsland_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_PokemonCenter_1F_OnTransition
	.byte 0

FourIsland_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_FOUR_ISLAND
	end

FourIsland_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

FourIslandPokemonCenter1::
end



FourIslandPokemonCenter2::
lock     
faceplayer     
msgbox FourIsland_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

FourIsland_PokemonCenter_Text_2:
.string "En la CUEVA GLACIADA hay un\n"
.string "POKéMON raro del tipo HIELO.\p"
.string "Aquí viene mucha gente para\n"
.string "verlo.$"



FourIslandPokemonCenter3::
lock     
faceplayer     
msgbox FourIsland_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

FourIsland_PokemonCenter_Text_3:
.string "¡Pero bueno!\p"
.string "¿Que aún no ha llegado el nuevo\n"
.string "DIARIO POKéMON a esta isla?$"



FourIslandPokemonCenter4::
lock     
faceplayer     
msgbox FourIsland_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

FourIsland_PokemonCenter_Text_4:
.string "¿Cómo? ¿Un HUEVO POKéMON?\n"
.string "Ni idea…\p"
.string "Eh… sí, espera, los ENCARGADOS\n"
.string "de la GUARDERÍA comentaron algo\l"
.string "sobre eso.\p"
.string "Dijeron que habían encontrado\n"
.string "HUEVOS en la propia GUARDERÍA.$"



FourIslandPokemonCenterDocumento_100::
msgbox FourIslandPokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

FourIslandPokemonCenterDocumento_Text_100:
.string "Un DIARIO POKéMON de hace\n"
	.string "unos años…\p"
	.string "¡Especial sobre el CONCURSO\n"
	.string "del DIARIO POKéMON!\p"
	.string "¡La campeona de la edición de\n"
	.string "primavera del CONCURSO POKéMON\l"
	.string "es DALIA OAK, de PUEBLO PALETA!$"
