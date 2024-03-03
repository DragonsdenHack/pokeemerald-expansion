Goldenrod_RadioTowerP2_MapScripts::
	.byte 0

RadioTowerP2_1::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP2_Text_1, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP2_Text_1:
	.string "Our work will even affect the color of\n"
	.string "POKÉMON, mark my words!$"



RadioTowerP2_2::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP2_Text_2, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP2_Text_2:
	.string "TEDDIURSA is so cute, but there is\n"
	.string "nothing cuter than MARY'S MEOWTH.\l"
	.string "Meowth!$"



RadioTowerP2_3::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP2_Text_3, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP2_Text_3:
	.string "The radio still has a long way to go to\n"
	.string "be heard throughout JOHTO and KANTO,\l"
	.string "but mark my words, we'll do it!$"



RadioTowerP2_4::
end



RadioTowerP2_5::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP2_Text_5, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP2_Text_5:
	.string "I heard that my cousin held a very\n"
	.string "important position on CHRONO ISLAND,\l"
	.string "although I haven't heard from her in a\l"
	.string "while…$"



RadioTowerP2_6::
end



RadioTowerP2_7::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP2_Text_7, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP2_Text_7:
	.string "Thanks to the MAGNET TRAIN, we'll be\n"
	.string "able to cross JOHTO and reach the\l"
	.string "center of KANTO in just 15 minutes.\l"
	.string "Imagine it! From the RADIO TOWER to the\l"
	.string "SILPH CO. headquarters in a quarter of\l"
	.string "an hour!$"



RadioTowerP2_8::
end



RadioTowerP2_9::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP2_Text_9, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP2_Text_9:
	.string "According to my estimates, in a couple\n"
	.string "of years, everyone in JOHTO will have a\l"
	.string "radio in their homes.$"


RadioTowerP2_10::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP2_Text_10, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP2_Text_10:
.string "BEN is a fabulous DJ.\n"
.string "His sweet voice makes me melt!$"



GoldenrodRadioTowerP2_EventScript_Caballero::
	trainerbattle_single TRAINER_JONAH, GoldenrodRadioTowerP2_Text_CaballeroIntro, GoldenrodRadioTowerP2_Text_CaballeroDefeated
	msgbox GoldenrodRadioTowerP2_Text_CaballeroPostBattle, MSGBOX_AUTOCLOSE
	end



GoldenrodRadioTowerP2_EventScript_Rico::
	trainerbattle_single TRAINER_BRENDAN_LILYCOVE_TORCHIC, GoldenrodRadioTowerP2_Text_RicoIntro, GoldenrodRadioTowerP2_Text_RicoDefeated
	msgbox GoldenrodRadioTowerP2_Text_RicoPostBattle, MSGBOX_AUTOCLOSE
	end


GoldenrodRadioTowerP2Documento_100::
msgbox GoldenrodRadioTowerP2Documento_Text_100, MSGBOX_SIGN   
end

GoldenrodRadioTowerP2Documento_Text_100:
	.string "3F PERSONNEL$"
