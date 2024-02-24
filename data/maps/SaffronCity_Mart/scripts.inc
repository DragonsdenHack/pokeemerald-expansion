SaffronCity_Mart_MapScripts::
	.byte 0

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
