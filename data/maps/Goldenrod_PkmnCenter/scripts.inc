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
	.string "OAK actually claimed that there are no\n"
	.string "more than 150 POKÉMON. What nonsense!\l"
	.string "Either he was ignorant or a liar with\l"
	.string "hidden motives.$"



GoldenrodPkmnCenter3::
lock     
faceplayer     
msgbox Goldenrod_PkmnCenter_Text_3, MSGBOX_DEFAULT
release     
end

Goldenrod_PkmnCenter_Text_3:
	.string "Have you visited the flower shop? They\n"
	.string "sell some interesting berries there.$"



GoldenrodPkmnCenter4::
lock     
faceplayer     
msgbox Goldenrod_PkmnCenter_Text_4, MSGBOX_DEFAULT
release     
end

Goldenrod_PkmnCenter_Text_4:
	.string "I see too many businesses together in\n"
	.string "this city!$"
