CeladonCity_Shop_3F_MapScripts::
	.byte 0

CeladonShop3F_1::
lock     
faceplayer     
msgbox CeladonCity_Shop3F_Text_1, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop3F_Text_1:
	.string "Jedes gefangene POKéMON erhält eine\n"
	.string "ID-Nr. und wird mit dem Namen des\l"
	.string "ORIGINALTRAINERS, OT, registriert.\p"
	.string "Der OT ist der Trainer, der das\n"
	.string "POKéMON gefangen hat!$"



CeladonShop3F_2::
end



CeladonShop3F_3::
lock     
faceplayer     
msgbox CeladonCity_Shop3F_Text_3, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop3F_Text_3:
	.string "Anhand ihrer ID-Nr. kannst du POKéMON,\n"
	.string "die du bei einem Tausch erhalten hast,\l"
	.string "identifizieren!$"



CeladonShop3F_4::
lock     
faceplayer     
msgbox CeladonCity_Shop3F_Text_4, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop3F_Text_4:
	.string "Mein Kumpel tauscht sein KANGAMA\n"
	.string "gegen mein GEOROK!$"



CeladonShop3F_5::
lock     
faceplayer     
msgbox CeladonCity_Shop3F_Text_5, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop3F_Text_5:
.string "Komm, GEOROK!\p"
    .string "Ich bin GEOROK-Sammler!\n"
    .string "Nanu?\p"
	.string "GEOROK hat sich zu einem anderen\n"
	.string "POKéMON entwickelt!$"



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
.string "Du erhältst TM53 GIGASTOß\n"
	.string "vom VERKÄUFER!$"

CeladonCity_Shop_3F_Entrenador_Especial_Texto_1:
	.string "Übersteht ein POKéMON einen\n"
	.string "physischen Angriff und nutzt daraufhin\l"
	.string "KONTER, wird es seinem Gegner den\l"
	.string "Schaden, den es gerade eingesteckt\l"
	.string "hat, mit doppelter Münze heimzahlen.\p"
	.string "Daher müssen wir dafür sorgen, dass\n"
	.string "unsere physischen Angriffe den Gegner\l"
	.string "sofort ausschalten und ihm keine\l"
	.string "Möglichkeit geben, uns zu kontern!\p"
	.string "Wenn du mich besiegst, werde ich dir\n"
	.string "beibringen, deinen Gegner mit einem\l"
	.string "einzigen Angriff auf die Bretter zu\l"
	.string "schicken!$"

CeladonCity_Shop_3F_Entrenador_Especial_Texto_2:
	.string "Wirst du dich der Herausforderung\n"
	.string "stellen?$"

CeladonCity_Shop_3F_Entrenador_Especial_Texto_3:
	.string "GIGASTOß hat ganze 170 STÄRKE. Wird es\n"
	.string "obendrein von einem POKéMON vom Typen\l"
	.string "NORMAL verwendet, erhält es zudem\l"
	.string "STAB. TAUROS UND RELAXO sind die\l"
	.string "besten Kandidaten für diese Attacke.\p"
	.string "Ich versichere dir, dass die Beiden den\n"
	.string "finalen Schlag gegen jene POKéMON, die\l"
	.string "schwer zu besiegen sind, landen werden.$"

CeladonCity_Shop_3F_Entrenador_Especial_Texto_4:
.string "Du wirst es nicht bereuen!$"

CeladonCity_Shop_3F_Entrenador_Especial_Texto_5:
.string "Wow!\n"
	.string "Du bist stark!$"

CeladonCity_Shop_3F_Entrenador_Especial_Texto_6:
	.string "Deine POKéMON sind eine defensive\n"
	.string "Macht! Diese TM passt perfekt zu\l"
	.string "deinem Kampfstil.$"

CeladonCity_Shop_3F_Entrenador_Especial_Texto_7:
.string "Tja. Dein Pech!$"
