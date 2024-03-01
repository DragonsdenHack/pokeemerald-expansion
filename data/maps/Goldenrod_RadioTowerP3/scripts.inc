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
.string "Desde aquí no, pero dicen que\n"
.string "desde el último piso pueden verse\l"
.string "tanto la TORRE CAMPANA DE CIUDAD\l"
.string "IRIS como el FARO de CIUDAD\l"
.string "OLIVO.$"



RadioTowerP3_11::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP3_Text_11, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP3_Text_11:
.string "Estamos trabajando duro para que\n"
.string "pronto se pueda escuchar la radio\l"
.string "en cualquier lugar.\l"
.string "¡Sintoniza!$"



RadioTowerP3_12::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP3_Text_12, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP3_Text_12:
.string "Pocos saben que si sintonizas la\n"
.string "radio a una determinada frecuencia\l"
.string "dentro de las RUINAS ALFA…\l"
.string "¡Escucharás ruidos muy\l"
.string "extraños!$"



GoldenrodRadioTowerP3_EventScript_Bella::
	trainerbattle_single TRAINER_KOJI_1, GoldenrodRadioTowerP3_Text_BellaIntro, GoldenrodRadioTowerP3_Text_BellaDefeated
	msgbox GoldenrodRadioTowerP3_Text_BellaPostBattle, MSGBOX_AUTOCLOSE
	end



GoldenrodRadioTowerP3Documento_100::
msgbox GoldenrodRadioTowerP3Documento_Text_100, MSGBOX_SIGN   
end

GoldenrodRadioTowerP3Documento_Text_100:
	.string "P3 PRODUCCIÓN$"



GoldenrodRadioTowerP3Documento_101::
msgbox GoldenrodRadioTowerP3Documento_Text_101, MSGBOX_SIGN   
end

GoldenrodRadioTowerP3Documento_Text_101:
	.string "P3 ESTUDIO 2$"

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
	.string "JOHTO está cada vez más abierta al\n"
	.string "mundo. En TORRE RADIO manejamos cada\l"
	.string "vez más contactos.$"



RadioHouse_Text_TakeNosepass2:
	.string "Mira este POKÉMON, es un claro ejemplo\n"
	.string "de ello.$"



RadioHouse_Text_MensajeNosepass:
.string "¡OBTUVISTE UN ELECTRIKE AL NV.25!$"


RadioHouse_Text_1:
	.string "Al parecer ELECTRIKE evoluciona en un\n"
	.string "POKÉMON veloz, potente y fiel. A la\l"
	.string "policía de CIUDAD TRIGAL seguro que le\l"
	.string "encantará.$"
