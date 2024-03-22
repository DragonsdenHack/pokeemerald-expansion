LavenderTown_Mart_MapScripts::
	.byte 0

LavenderTownMart_1::
end



LavenderTownMart_2::
lock     
faceplayer     
msgbox LavenderTown_Mart_Text_2, MSGBOX_DEFAULT
release     
end

LavenderTown_Mart_Text_2:
    .string "Sometimes, a TRAINER duo will\n"
    .string "challenge you with two POKÉMON\l"
    .string "at the same time.\p"
    .string "If that happens, you have to send\n"
    .string "out two POKÉMON to battle, too.$"



LavenderTownMart_3::
lock     
faceplayer     
msgbox LavenderTown_Mart_Text_3, MSGBOX_DEFAULT
release     
end

LavenderTown_Mart_Text_3:
    .string "Did you buy some REVIVES?\n"
    .string "They revive any fainted POKÉMON!$"



LavenderTownMart_4::
lock     
faceplayer     
msgbox LavenderTown_Mart_Text_4, MSGBOX_DEFAULT
release     
end

LavenderTown_Mart_Text_4:
    .string "I'm searching for items that raise\n"
    .string "the stats of POKÉMON.\p"
    .string "They're effective over the course\n"
    .string "of a single battle.\p"
    .string "X ATTACK, X DEFEND, X SPEED, \n"
    .string "and X SPECIAL are what I'm after.\p"
    .string "Do you know where I can get them?$"
