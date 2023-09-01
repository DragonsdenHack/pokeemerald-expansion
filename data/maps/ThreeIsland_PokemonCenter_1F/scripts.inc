ThreeIsland_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_PokemonCenter_1F_OnTransition
	.byte 0

ThreeIsland_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_THREE_ISLAND
	end

ThreeIsland_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

ThreeIslandPokemonCenter1::
end



ThreeIslandPokemonCenter2::
lock     
faceplayer     
msgbox ThreeIsland_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

ThreeIsland_PokemonCenter_Text_2:
.string "Es imposible hacer SURF\n"
.string "entre las islas de esta zona.\p"
.string "Hay corrientes y remolinos.$"



ThreeIslandPokemonCenter3::
lock     
faceplayer     
msgbox ThreeIsland_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

ThreeIsland_PokemonCenter_Text_3:
.string "Eh, ¿te has enterado?\p"
.string "Ahora podemos estar en red\n"
.string "con los PCs de KANTO.\p"
.string "¡No sé quién lo habrá organizado,\n"
.string "pero me parece una idea estupenda!$"



ThreeIslandPokemonCenter4::
lock     
faceplayer     
msgbox ThreeIsland_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

ThreeIsland_PokemonCenter_Text_4:
.string "¡Vamos a MACHACAR BAYAS!\n"
.string "¿Que sería un desperdicio de BAYAS\l"
.string "dices?…\p"
.string "¡Pero si el BOSQUE BAYA está hasta\n"
.string "arriba!$"
