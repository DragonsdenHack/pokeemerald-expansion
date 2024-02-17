ViridianCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_PokemonCenter_1F_OnTransition
	.byte 0

ViridianCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_VIRIDIAN_CITY
	end

ViridianCity_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

ViridianCityPokemonCenter1::
end



ViridianCityPokemonCenter2::
lock     
faceplayer     
msgbox ViridianCity_Center_Text_2, MSGBOX_DEFAULT
release     
end

ViridianCity_Center_Text_2:
	.string "You're just a pawn in your boss's hands,\n"
	.string "remember.$"



ViridianCityPokemonCenter3::
lock     
faceplayer     
msgbox ViridianCity_Center_Text_3, MSGBOX_DEFAULT
release     
end

ViridianCity_Center_Text_3:
	.string "That's correct, PALETTE TOWN is\n"
	.string "situated a little further to the south.$"




ViridianCityPokemonCenter4::
lock     
faceplayer     
msgbox ViridianCity_Center_Text_4, MSGBOX_DEFAULT
release     
end

ViridianCity_Center_Text_4:
	.string "Soon, we'll make sure you can't even get\n"
	.string "into POKÉMON CENTERS. Then you'll have\l"
	.string "nothing left, muahahahaha!$"
