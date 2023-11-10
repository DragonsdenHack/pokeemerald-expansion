FuchsiaCity_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaCity_PokemonCenter_1F_OnTransition
	.byte 0

FuchsiaCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_FUCHSIA_CITY
	end

FuchsiaCity_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

FuchsiaCityPokemonCenter1::
end



FuchsiaCityPokemonCenter2::
lock     
faceplayer     
msgbox FuchsiaCity_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

FuchsiaCity_PokemonCenter_Text_2:
.string "You can't become a good TRAINER\n"
    .string "with just one strong POKéMON.\p"
    .string "But raising many POKéMON evenly\n"
    .string "is no easy task, either.$"




FuchsiaCityPokemonCenter3::
lock     
faceplayer     
msgbox FuchsiaCity_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

FuchsiaCity_PokemonCenter_Text_3:
.string "¡La ÉLITE 4 os pondrá pronto en\n"
.string "vuestro lugar, vais a ser\l"
.string "exterminados como las ratas que\l"
.string "sois!$"



FuchsiaCityPokemonCenter4::
lock     
faceplayer     
msgbox FuchsiaCity_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

FuchsiaCity_PokemonCenter_Text_4:
.string "There's a narrow trail west of\n"
    .string "VIRIDIAN CITY.\p"
    .string "It goes to the POKéMON LEAGUE HQ.\n"
    .string "The HQ governs all TRAINERS.$"
