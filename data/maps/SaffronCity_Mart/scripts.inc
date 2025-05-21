SaffronCity_Mart_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_Mart_OnTransition
	.byte 0
	
SaffronCity_Mart_OnTransition::
goto_if_ge VAR_UNUSED_0x40F7, 203, SaffronCity_Mart_WarpDinamica
setdynamicwarp MAP_SAFFRON_CITY, 40, 21
end

SaffronCity_Mart_WarpDinamica::
setdynamicwarp MAP_NEO_SAFFRON_CITY, 40, 21
end		

SaffronCityMart1::
end



SaffronCityMart2::
lock     
faceplayer     
msgbox SaffronCity_Mart_Text_2, MSGBOX_DEFAULT
release     
end

SaffronCity_Mart_Text_2:
	.string "TOP-SCHUTZ hält schwache POKéMON\n"
	.string "länger von dir fern als SUPERSCHUTZ!$"



SaffronCityMart3::
lock     
faceplayer     
msgbox SaffronCity_Mart_Text_3, MSGBOX_DEFAULT
release     
end

SaffronCity_Mart_Text_3:
	.string "BELEBER ist zwar teuer, aber besiegte\n"
	.string "POKéMON werden damit wieder fit!$"
