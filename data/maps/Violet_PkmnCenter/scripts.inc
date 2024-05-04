Violet_PkmnCenter_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, Violet_PokemonCenter_1F_OnTransition
	.byte 0

Violet_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_VIOLET_CITY
	end

Violet_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

VioletPkmnCenter_1::
end



VioletPkmnCenter_2::
lock     
faceplayer     
msgbox VioletCity_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

VioletCity_PokemonCenter_Text_2:
.string "Aquí nos tomamos las cosas con\n"
.string "mucha calma y filosofía. Lo que\l"
.string "alguien como LANCE pueda hacer en\l"
.string "otras regiones no nos representa\l"
.string "ni a mí ni a la gente más madura\l"
.string "de esta bella región.$"



VioletPkmnCenter_3::
lock     
faceplayer     
msgbox VioletCity_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

VioletCity_PokemonCenter_Text_3:
.string "¡Cuántas cosas por ver y visitar\n"
.string "hay por aquí!\l"
.string "¡No puedo esperar más!$"



VioletPkmnCenter_4::
lock     
faceplayer     
msgbox VioletCity_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

VioletCity_PokemonCenter_Text_4:
.string "He venido hasta aquí solo para\n"
.string "plasmar mi arte en un cuadro de la\l"
.string "TORRE BELLSPROUT al amanecer.\l"
.string "Esto como preparación para el\l"
.string "plato gordo{PAUSE 10}…{PAUSE 10} la imponente\l"
.string "TORRE CAMPANA de CIUDAD IRIS.$"
