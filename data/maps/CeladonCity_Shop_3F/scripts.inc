CeladonCity_Shop_3F_MapScripts::
	.byte 0

CeladonShop3F_1::
lock     
faceplayer     
msgbox CeladonCity_Shop3F_Text_1, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop3F_Text_1:
.string "Captured POKÉMON are registered\n"
    .string "with an ID No. and the OT.\p"
    .string "OT stands for “Original TRAINER” -\n"
    .string "the TRAINER that caught it first.$"



CeladonShop3F_2::
end



CeladonShop3F_3::
lock     
faceplayer     
msgbox CeladonCity_Shop3F_Text_3, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop3F_Text_3:
.string "You can identify POKÉMON you get\n"
    .string "in trades by their ID Numbers.$"



CeladonShop3F_4::
lock     
faceplayer     
msgbox CeladonCity_Shop3F_Text_4, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop3F_Text_4:
.string "All right!\p"
    .string "My buddy's going to trade me his\n"
    .string "KANGASKHAN for my HAUNTER!$"



CeladonShop3F_5::
lock     
faceplayer     
msgbox CeladonCity_Shop3F_Text_5, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop3F_Text_5:
.string "Come on, HAUNTER!\p"
    .string "I love HAUNTER!\n"
    .string "I collect them!\p"
    .string "Huh?\p"
    .string "HAUNTER turned into a different\n"
    .string "POKÉMON while being traded!$"



CeladonShop3FDocumento_100::
msgbox CeladonShop3FDocumento_Text_100, MSGBOX_SIGN   
end

CeladonShop3FDocumento_Text_100:
.string "3F: TV GAME SHOP$"



CeladonShop3FDocumento_101::
msgbox CeladonShop3FDocumento_Text_101, MSGBOX_SIGN   
end

CeladonShop3FDocumento_Text_101:
.string "Red and Green!\n"
    .string "Both are POKÉMON!$"




CeladonShop3FDocumento_102::
msgbox CeladonShop3FDocumento_Text_102, MSGBOX_SIGN   
end

CeladonShop3FDocumento_Text_102:
.string "It's a Super NES.$"



CeladonShop3FDocumento_103::
msgbox CeladonShop3FDocumento_Text_103, MSGBOX_SIGN   
end

CeladonShop3FDocumento_Text_103:
.string "An RPG!\n"
    .string "There's no time for that!$"



CeladonShop3FDocumento_104::
msgbox CeladonShop3FDocumento_Text_104, MSGBOX_SIGN   
end

CeladonShop3FDocumento_Text_104:
.string "A sports game!\n"
    .string "Dad'll like that!$"

CeladonShop3FDocumento_105::
msgbox CeladonShop3FDocumento_Text_105, MSGBOX_SIGN   
end

CeladonShop3FDocumento_Text_105:
.string "A puzzle game!\n"
    .string "Looks addictive!$"



CeladonShop3FDocumento_106::
msgbox CeladonShop3FDocumento_Text_106, MSGBOX_SIGN   
end

CeladonShop3FDocumento_Text_106:
.string "A fighting game!\n"
    .string "Looks tough!$"

CeladonCity_Shop_3F_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE112_STATE, 0
goto_if_gt CeladonCity_Shop_3F_Entrenador_Especial_3
msgbox CeladonCity_Shop_3F_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
msgbox CeladonCity_Shop_3F_Entrenador_Especial_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CeladonCity_Shop_3F_Entrenador_Especial_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox CeladonCity_Shop_3F_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CONTADOR, CeladonCity_Shop_3F_Entrenador_Especial_Texto_5
msgbox CeladonCity_Shop_3F_Entrenador_Especial_Texto_6 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM53
msgbox CeladonCity_Shop_3F_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox CeladonCity_Shop_3F_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE112_STATE, 1
release
end

CeladonCity_Shop_3F_Entrenador_Especial_No::
msgbox CeladonCity_Shop_3F_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
release
end

CeladonCity_Shop_3F_Entrenador_Especial_3::
msgbox CeladonCity_Shop_3F_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end

CeladonCity_Shop_3F_Entrenador_Especial_Texto_1.1:
.string "You got MT53 GIGA IMPACT\n"
	.string "from the hands of SALESMAN!$"

CeladonCity_Shop_3F_Entrenador_Especial_Texto_1:
	.string "If a POKEMON resists a physical move\n"
	.string "and uses COUNTER, it will return double\l"
	.string "the damage it just caused to its\l"
	.string "opponent. That is why we must make sure\l"
	.string "that our physical movements are\l"
	.string "definitive and do not give the opponent\l"
	.string "the option to move! If you defeat me I\l"
	.string "will teach you how to destroy your rival\l"
	.string "with a single blow!$"

CeladonCity_Shop_3F_Entrenador_Especial_Texto_2:
.string "Do you accept the challenge?$"

CeladonCity_Shop_3F_Entrenador_Especial_Texto_3:
	.string "GIGA IMPACT has a whopping 150 POWER,\n"
	.string "used on NORMAL type POKEMON it will\l"
	.string "also receive STAB, TAUROS or SNORLAX\l"
	.string "are the best options, they will give the\l"
	.string "final blow to that POKÉMON that is so\l"
	.string "difficult to knock down, you'll see!$"

CeladonCity_Shop_3F_Entrenador_Especial_Texto_4:
.string "You won't regret!$"

CeladonCity_Shop_3F_Entrenador_Especial_Texto_5:
.string "Wow!\n"
	.string "So powerful!$"

CeladonCity_Shop_3F_Entrenador_Especial_Texto_6:
	.string "Your POKÉMON are a defensive whirlwind!\n"
	.string "This TM will be perfect for you.$"

CeladonCity_Shop_3F_Entrenador_Especial_Texto_7:
.string "Ok you miss it!$"
