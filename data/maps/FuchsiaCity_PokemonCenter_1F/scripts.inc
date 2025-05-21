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
	.string "Man kann nicht mit nur einem starken\n"
	.string "POKéMON gewinnen! Es ist mühsam, doch\l"
	.string "alle POKéMON sollten ungefähr den\l"
	.string "gleichen Level haben.$"




FuchsiaCityPokemonCenter3::
lock     
faceplayer     
msgbox FuchsiaCity_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

FuchsiaCity_PokemonCenter_Text_3:
	.string "Die TOP VIER werden dir eine Lektion\n"
	.string "erteilen! Du wirst zerquetscht werden,\l"
	.string "wie das kümmerliche Insekt, das du bist!$"



FuchsiaCityPokemonCenter4::
lock     
faceplayer     
msgbox FuchsiaCity_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

FuchsiaCity_PokemonCenter_Text_4:
	.string "Westlich von VERTANIA CITY liegt ein\n"
	.string "Pfad. Er führt zum Hauptquartier der\l"
	.string "POKéMON LIGA, der höchsten Instanz für\l"
	.string "TRAINER.$"
