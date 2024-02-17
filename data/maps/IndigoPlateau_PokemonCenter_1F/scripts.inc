IndigoPlateau_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_OnTransition
map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_PokemonCenter_1F_OnTransition
	.byte 0

IndigoPlateau_OnTransition::
setflag FLAG_VISITED_INDIGO_PLATEAU
end

IndigoPlateau_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_INDIGO_PLATEAU
	end

IndigoPlateau_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

IndigoPlateauPokemonCenter1::
end



IndigoPlateauPokemonCenter2::
end



IndigoPlateauPokemonCenter3::
lock     
faceplayer     
msgbox IndigoPlateau_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

IndigoPlateau_PokemonCenter_Text_3:
	.string "I don't know who you are nor where you\n"
	.string "came from, but that doesn't really care,\l"
	.string "kid, this championship already has an\l"
	.string "owner. Indeed, I heard LANCE saying\l"
	.string "that a kid from PALLET TOWN is destined\l"
	.string "to be the new CHAMP.$"



IndigoPlateauPokemonCenter4::
lock     
faceplayer     
msgbox IndigoPlateau_PokemonCenter_Text_4, MSGBOX_DEFAULT
release   
end

IndigoPlateau_PokemonCenter_Text_4:
	.string "We apologize for the inconvenience, but\n"
	.string "in the last POKÉMON LEAGUE, there were\l"
	.string "some technical issues. We will need time\l"
	.string "to rearrange the championship. Thank\l"
	.string "you.$"



IndigoPlateauPokemonCenter5::
lock     
faceplayer     
msgbox IndigoPlateau_PokemonCenter_Text_5, MSGBOX_DEFAULT
release     
end

IndigoPlateau_PokemonCenter_Text_5:
	.string "AGATHA's GHOST-type POKÉMON are\n"
	.string "horrifically terrifying in toughness.\p"
	.string "I took my FIGHTING-type POKÉMON\n"
	.string "and raised them to the max.\p"
	.string "I went at AGATHA feeling pretty\n"
	.string "confident, but she whupped us.\p"
	.string "That old lady's also got a really\n"
	.string "short fuse, too.\p"
	.string "It doesn't take anything to get\n"
	.string "that scary lady hollering.$"



IndigoPlateauPokemonCenter6::
lock     
faceplayer     
msgbox IndigoPlateau_PokemonCenter_Text_6, MSGBOX_DEFAULT
release     
end

IndigoPlateau_PokemonCenter_Text_6:
	.string "Maybe becoming an ELITE FOUR\n"
	.string "member is in the blood.\p"
	.string "From what I've heard, LANCE has\n"
	.string "a cousin who's a GYM LEADER\l"
	.string "somewhere far away.$"



IndigoPlateauPokemonCenterDocumento_100::
msgbox IndigoPlateauPokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

IndigoPlateauPokemonCenterDocumento_Text_100:
.string "POKéMON JOURNAL\p"
	.string "Special Feature:\n"
	.string "ELITE FOUR's LANCE!\p"
	.string "LANCE's grandfather is thought to\n"
	.string "be the elder of a famous clan of\l"
	.string "dragon masters.$"
