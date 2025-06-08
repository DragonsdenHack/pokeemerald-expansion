SevenIsland_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_PokemonCenter_1F_OnTransition
	.byte 0

SevenIsland_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_SEVEN_ISLAND
	end

SevenIsland_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

SevenIslandPokemonCenter1::
end



SevenIslandPokemonCenter2::
lock     
faceplayer     
msgbox SevenIsland_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

SevenIsland_PokemonCenter_Text_2:
	.string "Auf dieser Insel geschehen unter-\n"
	.string "schiedliche Ereignisse, abhängig Von\l"
	.string "den Verbindungen! Was diese\l"
	.string "Verbindungen sind? Das musst du\l"
	.string "alleine herausfinden!$"



SevenIslandPokemonCenter3::
lock     
faceplayer     
msgbox SevenIsland_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

SevenIsland_PokemonCenter_Text_3:
	.string "Bist du auf einer SEESPRINT-Fähre\n"
	.string "hierhergekommen? Es gibt mindestens\l"
	.string "zehn von diesen\l"
	.string "Hochgeschwindigkeitsbooten. Ich weiß\l"
	.string "nicht, woe sie alle abgeblieben sind…$"



SevenIslandPokemonCenter4::
lock     
faceplayer     
msgbox SevenIsland_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

SevenIsland_PokemonCenter_Text_4:
	.string "Wenn du selbstbewusst bist, solltest du\n"
	.string "im TRAINERTURM vorbeischauen!$"



SevenIslandPokemonCenterDocumento_100::
msgbox SevenIslandPokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

SevenIslandPokemonCenterDocumento_Text_100:
.string "POKéMON JOURNAL\p"
	.string "Sonderreportage: AGATHE von den\n"
	.string "TOP VIER!\p"
	.string "In ihrer Jugend war AGATHE eine Rivalin\n"
	.string "von PROF. EICH und hat mit ihm um die\l"
	.string "Vorherrschaft als TRAINER gekämpft.$"


