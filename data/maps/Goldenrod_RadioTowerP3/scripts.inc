Goldenrod_RadioTowerP3_MapScripts::
	.byte 0

RadioTowerP3_1::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP3_Text_1, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP3_Text_1:
	.string "The RADIO TOWER, the MAGNETRAIN, the\n"
	.string "OLIVINE PORT… Globalization is coming\l"
	.string "to JOHTO, and it's here to stay.$"



RadioTowerP3_2::
end



RadioTowerP3_3::
lock     
faceplayer
msgbox Goldenrod_RadioTowerP3_Text_3, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP3_Text_3:
	.string "That's what we need here, important and\n"
	.string "well-dressed people like you, not those\l"
	.string "thugs from the underground.$"



RadioTowerP3_4::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP3_Text_4, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP3_Text_4:
	.string "GOLDENROD CITY is not only the most\n"
	.string "populated city of JOHTO, in KANTO\l"
	.string "there's no city with this amount of\l"
	.string "habitants. This RADIO TOWER is a very\l"
	.string "important reason.$"



RadioTowerP3_5::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP3_Text_5, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP3_Text_5:
	.string "We broadcast entertainment programs\n"
	.string "24 hours a day. We'll try to do our best!$"



RadioTowerP3_6::
end



RadioTowerP3_7::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP3_Text_7, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP3_Text_7:
	.string "MARY: Creating a program together with\n"
	.string "PROF.OAK… That would give us great\l"
	.string "visibility in KANTO as well, don't you\l"
	.string "think?$"



RadioTowerP3_8::
end



RadioTowerP3_9::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP3_Text_9, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP3_Text_9:
	.string "We've recorded the cries of every known\n"
	.string "POKÉMON in KANTO and JOHTO. We have\l"
	.string "over 200 cries!$"



RadioTowerP3_10::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP3_Text_10, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP3_Text_10:
	.string "Not from here, but it's said that from\n"
	.string "the top floor you can see both the\l"
	.string "ECRUTEAK CITY BELL TOWER and the\l"
	.string "OLIVINE CITY LIGHTHOUSE.$"



RadioTowerP3_11::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP3_Text_11, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP3_Text_11:
	.string "We are working hard so that soon you\n"
	.string "can listen to the radio anywhere. Tune\l"
	.string "in!$"



RadioTowerP3_12::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP3_Text_12, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP3_Text_12:
	.string "I listened to the radio while I was at\n"
	.string "the RUINS. I heard a strange broadcast\l"
	.string "there.$"



GoldenrodRadioTowerP3_EventScript_Bella::
	trainerbattle_single TRAINER_KOJI_1, GoldenrodRadioTowerP3_Text_BellaIntro, GoldenrodRadioTowerP3_Text_BellaDefeated
	msgbox GoldenrodRadioTowerP3_Text_BellaPostBattle, MSGBOX_AUTOCLOSE
	end



GoldenrodRadioTowerP3Documento_100::
msgbox GoldenrodRadioTowerP3Documento_Text_100, MSGBOX_SIGN   
end

GoldenrodRadioTowerP3Documento_Text_100:
	.string "4F PRODUCTION$"



GoldenrodRadioTowerP3Documento_101::
msgbox GoldenrodRadioTowerP3Documento_Text_101, MSGBOX_SIGN   
end

GoldenrodRadioTowerP3Documento_Text_101:
	.string "4F STUDIO 2$"

RadioTower_EventScript_ReceiveElectrike::
    lock
    faceplayer
	checkmoncatch SPECIES_ELECTRIKE
	goto_if_eq VAR_RESULT, FALSE, RadioHouse_EventScript_TakeNosepass 
	msgbox RadioHouse_Text_1, MSGBOX_DEFAULT
	release
	end



RadioHouse_EventScript_TakeNosepass::
    msgbox RadioHouse_Text_TakeNosepass MSGBOX_DEFAULT
	msgbox RadioHouse_Text_TakeNosepass2 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox RadioHouse_Text_MensajeNosepass, MSGBOX_DEFAULT
	givemon SPECIES_ELECTRIKE, 25, ITEM_NONE
	waitfanfare  
	release
	end 



RadioHouse_Text_TakeNosepass:
	.string "JOHTO is increasingly opening to the\n"
	.string "world. We manage more contacts at\l"
	.string "RADIO TOWER with each passing day.$"

RadioHouse_Text_TakeNosepass2:
	.string "Look at this POKÉMON, it's a clear\n"
	.string "example of it.$"


RadioHouse_Text_MensajeNosepass:
.string "YOU OBTAINED A LV.25 ELECTRIKE!$"

RadioHouse_Text_1:
	.string "ELECTRIKE seems to evolve into a quick,\n"
	.string "powerful, and loyal POKÉMON. The\l"
	.string "GOLDENROD CITY POLICE will surely be\l"
	.string "pleased.$"

