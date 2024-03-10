Ecruteak_PkmnCenter_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, Ecruteak_PokemonCenter_1F_OnTransition
	.byte 0

Ecruteak_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_ECRUTEAK_CITY
	end

Ecruteak_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

EcruteakPkmnCenter1::
end



EcruteakPkmnCenter2::
lock     
faceplayer     
msgbox Ecruteak_PkmnCenter_Text_2, MSGBOX_DEFAULT
release     
end

Ecruteak_PkmnCenter_Text_2:
	.string "The KIMONO GIRLS are very skilled\n"
	.string "dancers, as well as adept trainers. They\l"
	.string "are amazing!$"



EcruteakPkmnCenter3::
lock     
faceplayer     
msgbox Ecruteak_PkmnCenter_Text_3, MSGBOX_DEFAULT
release     
end

Ecruteak_PkmnCenter_Text_3:
	.string "Here, everyone has an EEVEE at home.\n"
	.string "Although some POKÉMANIACS may want to\l"
	.string "make people believe it's a very rare\l"
	.string "POKÉMON, in ECRUTEAK CITY, it's quite\l"
	.string "common.$"



EcruteakPkmnCenter4::
lock     
faceplayer     
msgbox Ecruteak_PkmnCenter_Text_4, MSGBOX_DEFAULT
release     
end

Ecruteak_PkmnCenter_Text_4:
	.string "I do wonder if BURNED TOWER was higher\n"
	.string "than BELL TOWER. It is said that they\l"
	.string "were similar in height…$"
