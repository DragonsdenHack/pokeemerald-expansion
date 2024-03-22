Cherry_PkmnCenter_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, Cherry_PokemonCenter_1F_OnTransition
	.byte 0

Cherry_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_CHERRYGROVE_CITY
	end

Cherry_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

CherryPkmnCenter1::
end



CherryPkmnCenter2::
lock     
faceplayer     
msgbox CherryPkmnCenter_Text_2, MSGBOX_DEFAULT
release     
end

CherryPkmnCenter_Text_2:
	.string "These PKMN CENTERS are so comfortable,\n"
	.string "they were part of the resources LANCE\l"
	.string "allocated to JOHTO after winning the\l"
	.string "war; healing POKÉMON here used to be\l"
	.string "much more rudimentary.$"




CherryPkmnCenter3::
lock     
faceplayer     
msgbox CherryPkmnCenter_Text_3, MSGBOX_DEFAULT
release     
end

CherryPkmnCenter_Text_3:
	.string "I came here for a powerful SCYTHER, but\n"
	.string "it seems there isn't one. I'll have to\l"
	.string "look in the NATIONAL PARK…$"




CherryPkmnCenter4::
end



CherryPkmnCenter5::
lock     
faceplayer     
msgbox CherryPkmnCenter_Text_5, MSGBOX_DEFAULT
release     
end

CherryPkmnCenter_Text_5:
	.string "It's awesome! I can store as many\n"
	.string "POKÉMON as I want, and it's free!$"

