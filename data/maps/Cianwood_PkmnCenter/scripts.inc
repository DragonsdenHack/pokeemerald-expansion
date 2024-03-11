Cianwood_PkmnCenter_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, Cianwood_PokemonCenter_1F_OnTransition
	.byte 0

Cianwood_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_CIANWOOD_CITY
	end

Cianwood_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

CianwoodPkmnCenter1::
end



CianwoodPkmnCenter2::
lock     
faceplayer     
msgbox Cianwood_PkmnCenter_Text_2, MSGBOX_DEFAULT
release     
end

Cianwood_PkmnCenter_Text_2:
	.string "The life of a sailor is hard, but it's\n"
	.string "also difficult for their wives; we\l"
	.string "constantly scan the horizon each\l"
	.string "morning, longing for the return of our\l"
	.string "husbands.$"



CianwoodPkmnCenter3::
lock     
faceplayer     
msgbox Cianwood_PkmnCenter_Text_3, MSGBOX_DEFAULT
release     
end

Cianwood_PkmnCenter_Text_3:
	.string "CHUCK's FIGHTING TYPE POKÉMON are\n"
	.string "incredibly strong; can you believe that\l"
	.string "a high-level MACHAMP is his weakest\l"
	.string "Pokémon?$"



CianwoodPkmnCenter4::
lock     
faceplayer     
msgbox Cianwood_PkmnCenter_Text_4, MSGBOX_DEFAULT
release     
end

Cianwood_PkmnCenter_Text_4:
	.string "The WHIRL ISLANDS have always been a\n"
	.string "mystery; they say everything changed\l"
	.string "there on the day of the BRASS TOWER\l"
	.string "burn.$"
