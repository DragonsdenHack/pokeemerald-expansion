Azalea_PkmnCenter_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, Azalea_PokemonCenter_1F_OnTransition
	.byte 0

Azalea_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_AZALEA_TOWN
	end

Azalea_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

AzaleaPkmnCenter1::
end



AzaleaPkmnCenter2::
lock     
faceplayer     
msgbox AzaleaPkmnCenter_Text_2, MSGBOX_DEFAULT
release     
end

AzaleaPkmnCenter_Text_2:
	.string "KURT doesn't want to admit it, but he's\n"
	.string "by far the greatest BUG-TYPE\l"
	.string "specialist in JOHTO. Unlike that young\l"
	.string "kid BUGSY, he prefers to keep hidden his\l"
	.string "skills as a TRAINER.$"



AzaleaPkmnCenter3::
lock     
faceplayer     
msgbox AzaleaPkmnCenter_Text_3, MSGBOX_DEFAULT
release     
end

AzaleaPkmnCenter_Text_3:
	.string "Someday, KANTO and JOHTO will be united\n"
	.string "again. I promise!$"



AzaleaPkmnCenter4::
end



AzaleaPkmnCenter_EventScript_ReceiveWimpod::
    lock
    faceplayer
	checkmoncatch SPECIES_WIMPOD
	goto_if_eq VAR_RESULT, FALSE, AzaleaPkmnCenter_EventScript_TakeWimpod 
	msgbox AzaleaPkmnCenter_Text_1, MSGBOX_DEFAULT
	release
	end



AzaleaPkmnCenter_EventScript_TakeWimpod::
    msgbox AzaleaPkmnCenter_Text_TakeWimpod MSGBOX_DEFAULT
	msgbox AzaleaPkmnCenter_Text_TakeWimpod2 MSGBOX_DEFAULT
	msgbox AzaleaPkmnCenter_Text_TakeWimpod3 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox AzaleaPkmnCenter_Text_MensajeWimpod, MSGBOX_DEFAULT
	givemon SPECIES_WIMPOD, 10, ITEM_BUG_GEM
	waitfanfare  
	release
	end 



AzaleaPkmnCenter_Text_TakeWimpod:
   .string "A newcomer, welcome!$"

AzaleaPkmnCenter_Text_TakeWimpod2:
	.string "You must know that this place and the\n"
	.string "ILEX FOREST were once united. It was\l"
	.string "all vegetation, children played and\l"
	.string "lived in the midst of the forest,\l"
	.string "surrounded by BUG-TYPE POKÉMON.$"

AzaleaPkmnCenter_Text_TakeWimpod3:
	.string "In that environment, KURT grew up, who\n"
	.string "still remains active in his GYM past 60\l"
	.string "years old. Thanks to his travels he\l"
	.string "brought several POKÉMON from other\l"
	.string "regions, and gave some to his closest\l"
	.string "associates. I want you to have one too.$"

AzaleaPkmnCenter_Text_MensajeWimpod:
	.string "YOU OBTAINED A WIMPOD AT LEVEL 10!$"

AzaleaPkmnCenter_Text_1:
	.string "Don't even think about underestimating\n"
	.string "that tadpole! When it grows up, it gets\l"
	.string "the strength of a HERACROSS and the\l"
	.string "toughness of a SKARMORY!$"
