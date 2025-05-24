CinnabarIsland_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_PokemonCenter_1F_OnTransition
	.byte 0

CinnabarIsland_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_CINNABAR_ISLAND
	end

CinnabarIsland_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

CinnabarIslandPokemonCenter1::
end



CinnabarIslandPokemonCenter2::
lock     
faceplayer     
msgbox CinnabarIsland_Center_Text_2, MSGBOX_DEFAULT
release     
end

CinnabarIsland_Center_Text_2:
	.string "Brichst du ihre Entwicklung ab, dann\n"
	.string "können deine POKéMON dennoch weitere\l"
	.string "Attacken lernen. Die weitere\l"
	.string "Entwicklung kann warten, bis sie neue\l"
	.string "Attacken gelernt haben!$"



CinnabarIslandPokemonCenter3::
lock     
faceplayer     
msgbox CinnabarIsland_Center_Text_3, MSGBOX_DEFAULT
release     
end

CinnabarIsland_Center_Text_3:
	.string "Ihr ROCKETs seid hier nicht willkommen!\p"
	.string "Unser ARENALEITER würde niemals\n"
	.string "zulassen, dass ihr diesen Ort mit\l"
	.string "eurer Anwesenheit beschmutzt!$"



CinnabarIslandPokemonCenter4::
lock     
faceplayer     
msgbox CinnabarIsland_Center_Text_4, MSGBOX_DEFAULT
release     
end

CinnabarIsland_Center_Text_4:
	.string "Ich wollte die ARENA der ZINNOBERINSEL\n"
	.string "besuchen, aber die Türen sind\l"
	.string "verschlossen. Es muss irgendwo einen\l"
	.string "Schlüssel geben. Vielleicht in dieser\l"
	.string "abgebrannten Villa? Der Freund des\l"
	.string "ARENALEITERs hat dort gewohnt.$"



CinnabarIslandPokemonCenterDocumento_100::
msgbox CinnabarIslandPokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

CinnabarIslandPokemonCenterDocumento_Text_100:
.string "POKéMON JOURNAL:\p"
	.string "Sonderreportage: MR. FUJI vom\n"
	.string "POKéMON-CLUBHAUS! Redakteur: Der\l"
	.string "publikumsscheue MR. FUJI hat unsere\l"
	.string "Interviewanfragen zurückgewiesen. Er\l"
	.string "ist ein freundlicher Mann, der in\l"
	.string "LAVANDIA verehrt und respektiert wird.$"

