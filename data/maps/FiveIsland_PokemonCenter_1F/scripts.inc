FiveIsland_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_PokemonCenter_1F_OnTransition
	.byte 0

FiveIsland_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_TWO_ISLAND
	end

FiveIsland_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

FiveIslandPokemonCenter1::
end



FiveIslandPokemonCenter2::
lock     
faceplayer     
msgbox FiveIsland_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

FiveIsland_PokemonCenter_Text_2:
    .string "Warst du schon in der SPIELHALLE?\p"
    .string "Du solltest nicht allein dorthin\n"
    .string "gehen! Nimm einen Freund mit!$"



FiveIslandPokemonCenter3::
lock     
faceplayer     
msgbox FiveIsland_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

FiveIsland_PokemonCenter_Text_3:
    .string "Auf EILAND ZWEI leben nicht\n"
    .string "viele Menschen!\p"
    .string "Es gibt da eine alte Dame, die\n"
    .string "draußen am Kap wohnt!\p"
    .string "Sie ist schon immer da gewesen!$"



FiveIslandPokemonCenterDocumento_100::
msgbox FiveIslandPokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

FiveIslandPokemonCenterDocumento_Text_100:
	.string "POKéMON JOURNAL\p"
	.string "Sonderreportage:\n"
	.string "LORELEI von den TOP VIER!\p"
	.string "Die für ihren logischen, coolen und\n"
	.string "berechnenden Kampfstil bekannte\l"
	.string "LORELEI hat ein überraschendes\l"
	.string "Geheimnis!$"
