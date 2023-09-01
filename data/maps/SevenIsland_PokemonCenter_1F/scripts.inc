SevenIsland_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_PokemonCenter_1F_OnTransition
	.byte 0

SevenIsland_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_SEVEN_ISLAND
	end

SevenIsland_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

SevenIslandPokemonCenter1::
end



SevenIslandPokemonCenter2::
lock     
faceplayer     
msgbox SevenIsland_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

SevenIsland_PokemonCenter_Text_2:
.string "En la isla, ocurren distintas cosas\n"
.string "según las conexiones.\p"
.string "¿Que qué son las conexiones?\p"
.string "Eso tendrás que descubrirlo sin\n"
.string "ayuda de nadie.$"



SevenIslandPokemonCenter3::
lock     
faceplayer     
msgbox SevenIsland_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

SevenIsland_PokemonCenter_Text_3:
.string "¿Has venido a bordo del SURCAMAR?\p"
.string "Creo que en total hay diez barcos\n"
.string "rápidos de esos.\p"
.string "Pero no sé las rutas que cubren.$"



SevenIslandPokemonCenter4::
lock     
faceplayer     
msgbox SevenIsland_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

SevenIsland_PokemonCenter_Text_4:
.string "Estas islas guardan muchos\n"
.string "misterios por descubrir, algunos\l"
.string "siquiera podemos imaginarlos.$"



SevenIslandPokemonCenterDocumento_100::
msgbox SevenIslandPokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

SevenIslandPokemonCenterDocumento_Text_100:
.string "DIARIO POKéMON\p"
	.string "Última hora sobre AGATHA,\n"
	.string "miembro del ALTO MANDO.\p"
	.string "Según fuentes cercanas, AGATHA\n"
	.string "y el PROF. OAK estuvieron\p"
	.string "enfrentados durante su formación\n"
	.string "como ENTRENADORES.$"
