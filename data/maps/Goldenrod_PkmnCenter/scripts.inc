Goldenrod_PkmnCenter_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, Goldenrod_PokemonCenter_1F_OnTransition
	.byte 0

Goldenrod_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_GOLDENROD_CITY
	end

Goldenrod_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

GoldenrodPkmnCenter1::
end



GoldenrodPkmnCenter2::
lock     
faceplayer     
msgbox Goldenrod_PkmnCenter_Text_2, MSGBOX_DEFAULT
release     
end

Goldenrod_PkmnCenter_Text_2:
.string "Ese OAK llegó a decir que no\n"
.string "existen más de 150 POKÉMON.\l"
.string "¡Qué disparate!\l"
.string "O era un ignorante, o un mentiroso\l"
.string "con intereses detrás.$"



GoldenrodPkmnCenter3::
lock     
faceplayer     
msgbox Goldenrod_PkmnCenter_Text_3, MSGBOX_DEFAULT
release     
end

Goldenrod_PkmnCenter_Text_3:
.string "¿Has visitado la floristería?\n"
.string "Venden algunas bayas interesantes\l"
.string "allí.$"



GoldenrodPkmnCenter4::
lock     
faceplayer     
msgbox Goldenrod_PkmnCenter_Text_4, MSGBOX_DEFAULT
release     
end

Goldenrod_PkmnCenter_Text_4:
.string "¡Demasiados negocios juntos veo\n"
.string "en esta ciudad!$"
