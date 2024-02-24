PewterCity_Mart_MapScripts::
	.byte 0

PewterCityMart1::
end



PewterCityMart2::
lock     
faceplayer     
msgbox PewterCity_Mart_Text_2, MSGBOX_DEFAULT
release     
end

PewterCity_Mart_Text_2:
.string "Good things can happen if you raise\n"
    .string "POKÉMON diligently.\p"
    .string "Even the weak ones can surprise\n"
    .string "you if you don't give up on them.$"



PewterCityMart3::
lock     
faceplayer     
msgbox PewterCity_Mart_Text_3, MSGBOX_DEFAULT
release     
end

PewterCity_Mart_Text_3:
.string "A shady old guy sucked me into\n"
    .string "buying this weird fish POKÉMON!\p"
    .string "It's totally weak and it cost ¥500!$"
