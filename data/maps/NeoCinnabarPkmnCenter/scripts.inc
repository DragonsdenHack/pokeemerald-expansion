NeoCinnabarPkmnCenter_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, NeoCinnabarPkmnCenter_PokemonCenter_1F_OnTransition
	.byte 0

NeoCinnabarPkmnCenter_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_NEO_CINNABAR_ISLAND
	end

NeoCinnabarPkmnCenter_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

NeoCinnabarPkmnCenter_2::
lock     
faceplayer     
msgbox NeoCinnabarPkmnCenter_Text_2, MSGBOX_DEFAULT
release     
end

NeoCinnabarPkmnCenter_Text_2:
.string "El volcán hizo erupción hace apenas una\n"
.string "semana.$"



NeoCinnabarPkmnCenter_3::
lock     
faceplayer     
msgbox NeoCinnabarPkmnCenter_Text_3, MSGBOX_DEFAULT
release     
end

NeoCinnabarPkmnCenter_Text_3:
.string "BLAINE: ¿Y ahora, qué? Creo que\n"
.string "reabriré mi GIMNASIO en ISLAS ESPUMA,\l"
.string "ahí seguro que no estalla ningún\l"
.string "volcán…$"
