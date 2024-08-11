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
.string "¡MÁX. REPEL dura más que el\n"
.string "SUPERREPEL; mantiene alejados\l"
.string "más tiempo a los POKéMON débiles!$"



SaffronCityMart3::
lock     
faceplayer     
msgbox SaffronCity_Mart_Text_3, MSGBOX_DEFAULT
release     
end

SaffronCity_Mart_Text_3:
.string "¡REVIVIR es caro, pero hace\n"
.string "revivir a los POKéMON debilitados!$"
