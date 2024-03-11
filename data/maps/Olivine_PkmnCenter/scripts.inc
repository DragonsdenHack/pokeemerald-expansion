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
.string "Hmmm…\n"
	.string "That LIGHTHOUSE, with the sunshine in\l"
	.string "the background… But I think the\l"
	.string "landscape would improve even more if it\l"
	.string "were on the edge of a 650 fts high\l"
	.string "cliff.$"



OlivinePkmnCenter3::
lock     
faceplayer     
msgbox OlivineCity_PkmnCenter_Text_3, MSGBOX_DEFAULT
release     
end

OlivineCity_PkmnCenter_Text_3:
.string "Ahoy, landlubber!\n"
.string "I love the sea!\l"
.string "Sing along with me!\l"
.string "There once was a ship!\l"
.string "That put to the sea…!$"



OlivinePkmnCenter4::
lock     
faceplayer     
msgbox OlivineCity_PkmnCenter_Text_4, MSGBOX_DEFAULT
release     
end

OlivineCity_PkmnCenter_Text_4:
	.string "No more causing trouble on the streets\n"
	.string "of GOLDENROD. From now on, I'll become an\l"
	.string "honest sailor in the service of the\l"
	.string "S.S.AQUA.$"
