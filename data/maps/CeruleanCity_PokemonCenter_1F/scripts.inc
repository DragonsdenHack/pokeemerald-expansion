CeruleanCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_PokemonCenter_1F_OnTransition
	.byte 0

CeruleanCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_CERULEAN_CITY
	end

CeruleanCity_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

CeruleanCityPokemonCenter1::
end



CeruleanCityPokemonCenter2::
lock     
faceplayer     
msgbox CeruleanCity_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

CeruleanCity_PokemonCenter_Text_2:
	.string "Hör auf, deine Zeit mit diesen elenden\n"
	.string "Verbrechern zu verschwenden und mach\l"
	.string "gefälligst was aus deinem Leben,\l"
	.string "Bursche!$"



CeruleanCityPokemonCenter3::
lock     
faceplayer     
msgbox CeruleanCity_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

CeruleanCity_PokemonCenter_Text_3:
	.string "Du solltest dich schämen mit diesen\n"
	.string "Klamotten in der Öffentlichkeit\l"
	.string "rumzulaufen!$"



CeruleanCityPokemonCenter4::
lock     
faceplayer     
msgbox CeruleanCity_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

CeruleanCity_PokemonCenter_Text_4:
	.string "Wenn es nach mir ginge, dürftest du\n"
	.string "keinen Fuß in ein POKéMON-CENTER\l"
	.string "setzen! Ihr ROCKETs verdient nicht\l"
	.string "einmal grundlegende Dienstleistungen.$"



CeruleanCityPokemonCenter5::
lock     
faceplayer     
msgbox CeruleanCity_PokemonCenter_Text_5, MSGBOX_DEFAULT
release     
end

CeruleanCity_PokemonCenter_Text_5:
	.string "Wort auf der Straße ist, BILL hätte\n"
	.string "POKéMON, die sonst keiner besitzt. Ich\l"
	.string "würde sie gerne mal sehen!$"



CeruleanCityPokemonCenterDocumento_100::
msgbox CeruleanCityPokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

CeruleanCityPokemonCenterDocumento_Text_100:
.string "POKéMON JOURNAL:\p"
	.string "Sonderreportage: ARENALEITERIN\n"
	.string "MISTY aus AZURIA CITY!\p"
	.string "MISTY vergöttert angeblich\n"
	.string "LORELEI von den TOP VIER.$"
