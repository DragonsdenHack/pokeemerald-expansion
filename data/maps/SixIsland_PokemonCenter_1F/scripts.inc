SixIsland_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_PokemonCenter_1F_OnTransition
	.byte 0

SixIsland_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_SIX_ISLAND
	end

SixIsland_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

SixIslandPokemonCenter1::
end



SixIslandPokemonCenter2::
lock     
faceplayer     
msgbox SixIsland_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

SixIsland_PokemonCenter_Text_2:
	.string "Du weißt, dass es POKéMON gibt, die sich\n"
	.string "nur beim Tausch entwickeln? Aber\l"
	.string "wusstest du, dass es sogar noch\l"
	.string "speziellere POKéMON gibt? Einige\l"
	.string "POKéMON entwickeln sich nur, wenn sie\l"
	.string "beim Tausch ein spezielles Item tragen.$"




SixIslandPokemonCenter3::
lock     
faceplayer     
msgbox SixIsland_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

SixIsland_PokemonCenter_Text_3:
	.string "Seit zehn Jahren erforsche ich die\n"
	.string "RUINEN. Nein, es sind zwanzig. Ich habe\l"
	.string "das Gefühl, dass auf die- ser Insel\l"
	.string "irgendein Geheimnis ist.$"
