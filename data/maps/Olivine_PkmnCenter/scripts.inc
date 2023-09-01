Olivine_PkmnCenter_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, Olivine_PokemonCenter_1F_OnTransition
	.byte 0

Olivine_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_OLIVINE_CITY
	end

Olivine_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

OlivinePkmnCenter1::
end



OlivinePkmnCenter2::
lock     
faceplayer     
msgbox OlivineCity_PkmnCenter_Text_2, MSGBOX_DEFAULT
release     
end

OlivineCity_PkmnCenter_Text_2:
.string "Mmm…\n"
.string "Ese FARO, con el atardecer de\l"
.string "fondo…\l"
.string "Pero creo que el paisaje mejoraría\l"
.string "aún más si se encontrara al borde\l"
.string "de un acantilado a 200m de\l"
.string "altura…$"



OlivinePkmnCenter3::
lock     
faceplayer     
msgbox OlivineCity_PkmnCenter_Text_3, MSGBOX_DEFAULT
release     
end

OlivineCity_PkmnCenter_Text_3:
.string "¡Hola, chaval!\n"
.string "¡Me gusta el mar!\l"
.string "¡Canta conmigo!\l"
.string "¡Yo jo!\l"
.string "¡Yo jo…!$"



OlivinePkmnCenter4::
lock     
faceplayer     
msgbox OlivineCity_PkmnCenter_Text_4, MSGBOX_DEFAULT
release     
end

OlivineCity_PkmnCenter_Text_4:
.string "Se acabó el armar líos por las\n"
.string "calles de TRIGAL.\l"
.string "A partir de ahora me convertiré en\l"
.string "un honrado marinero al servicio\l"
.string "del SS.AQUA.$"
