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
	.string "Here, we approach things with a great\n"
	.string "deal of calmness and philosophy. What\l"
	.string "someone like LANCE might achieve in\l"
	.string "other regions doesn't represent me or\l"
	.string "the more mature individuals of this\l"
	.string "beautiful region.$"



VioletPkmnCenter_3::
lock     
faceplayer     
msgbox VioletCity_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

VioletCity_PokemonCenter_Text_3:
	.string "There are so many things to see and\n"
	.string "visit around here! I can't wait any\l"
	.string "longer!$"



VioletPkmnCenter_4::
lock     
faceplayer     
msgbox VioletCity_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

VioletCity_PokemonCenter_Text_4:
	.string "My sole purpose in coming here is to\n"
	.string "immortalize my art in a painting of the\l"
	.string "SPROUT TOWER at sunrise. This is just\l"
	.string "preparation for the main event… the\l"
	.string "magnificent BELL TOWER of ECRUTEAK\l"
	.string "CITY.$"
