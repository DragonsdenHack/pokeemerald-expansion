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
.string "MAX REPEL keeps weaker POKÉMON\n"
    .string "from appearing.\p"
    .string "MAX REPEL stays effective longer\n"
    .string "than SUPER REPEL.$"



SaffronCityMart3::
lock     
faceplayer     
msgbox SaffronCity_Mart_Text_3, MSGBOX_DEFAULT
release     
end

SaffronCity_Mart_Text_3:
.string "REVIVE is costly, but it revives\n"
    .string "fainted POKÉMON!$"
