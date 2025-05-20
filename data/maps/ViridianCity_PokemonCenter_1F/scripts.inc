ViridianCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_PokemonCenter_1F_OnTransition
	.byte 0

ViridianCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_VIRIDIAN_CITY
	end

ViridianCity_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

ViridianCityPokemonCenter1::
end



ViridianCityPokemonCenter2::
lock     
faceplayer     
msgbox ViridianCity_Center_Text_2, MSGBOX_DEFAULT
release     
end

ViridianCity_Center_Text_2:
	.string "Vergiss nicht. In den Augen deines\n"
	.string "Bosses bist du nur eine Schachfigur,\l"
	.string "für die er sich nicht interessiert und\l"
	.string "die er beliebig herumschieben kann!$"



ViridianCityPokemonCenter3::
lock     
faceplayer     
msgbox ViridianCity_Center_Text_3, MSGBOX_DEFAULT
release     
end

ViridianCity_Center_Text_3:
	.string "Das stimmt. ALABASTIA liegt\n"
	.string "etwas südlich von hier.$"




ViridianCityPokemonCenter4::
lock     
faceplayer     
msgbox ViridianCity_Center_Text_4, MSGBOX_DEFAULT
release     
end

ViridianCity_Center_Text_4:
	.string "Wir werden schon bald dafür sorgen,\n"
	.string "dass ihr nicht einmal mehr\l"
	.string "POKéMON-CENTER betreten dürft! Dann\l"
	.string "bleibt euch nichts mehr! Muahahaha!$"
