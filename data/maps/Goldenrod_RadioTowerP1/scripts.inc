Goldenrod_RadioTowerP1_MapScripts::
	.byte 0

RadioTowerP1_1::
end



RadioTowerP1_2::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP1_Text_2, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP1_Text_2:
.string "Las nanas de la radio pueden\n"
.string "dormir a los POKÉMON.\l"
.string "¡Y otras, despertarlos!$"



RadioTowerP1_3::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP1_Text_3, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP1_Text_3:
.string "Dejaos ya de rollos…\n"
.string "Yo vine aquí para elevar de forma\l"
.string "ilegal los STATS BASE de mis\l"
.string "POKÉMON manipulando las ondas de\l"
.string "radio, no para editar canciones\l"
.string "infantiles…$"



RadioTowerP1_4::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP1_Text_4, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP1_Text_4:
.string "La brisa del mar hace muy\n"
.string "agradable trabajar aquí, en SILPH\l"
.string "el ambiente cargado de ciudad debe\l"
.string "hacerse muy pesado.$"



RadioTowerP1_5::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP1_Text_5, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP1_Text_5:
.string "Este edificio refleja la posición\n"
.string "actual de TRIGAL como capital de\l"
.string "JOHTO.\l"
.string "Las comparaciones con el edificio\l"
.string "de SILPH en AZAFRÁN son\l"
.string "inevitables, aunque este último es\l"
.string "más ancho, nuestra TORRE RADIO es\l"
.string "más alta.$"



RadioTowerP1_6::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP1_Text_6, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP1_Text_6:
.string "Las ondas de radio son el futuro,\n"
.string "¡créeme!$"



RadioTowerP1_7::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP1_Text_7, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP1_Text_7:
.string "Me gusta ROSA de la HORA POKÉMON,\n"
.string "aunque solo conozca su voz.$"



RadioTowerP1_8::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP1_Text_8, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP1_Text_8:
.string "En el CASINO venden POKÉMON muy\n"
.string "buenos, pero hay un tipo en los\l"
.string "subterráneos que vende POKÉMON de\l"
.string "otras regiones, incluso\l"
.string "PSEUDOLEGENDARIOS de allí. Creo\l"
.string "que debería ir antes de que se\l"
.string "agoten.$"



GoldenrodRadioTowerP1_EventScript_Necio::
	trainerbattle_single TRAINER_ROGER, GoldenrodRadioTowerP1_Text_NecioIntro, GoldenrodRadioTowerP1_Text_NecioDefeated
	msgbox GoldenrodRadioTowerP1_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end


GoldenrodRadioTowerP1Documento_100::
msgbox GoldenrodRadioTowerP1Documento_Text_100, MSGBOX_SIGN   
end

GoldenrodRadioTowerP1Documento_Text_100:
.string "P1 VENTAS$"



GoldenrodRadioTowerP1Documento_101::
msgbox GoldenrodRadioTowerP1Documento_Text_101, MSGBOX_SIGN   
end

GoldenrodRadioTowerP1Documento_Text_101:
.string "Radio POKÉMON.\n"
	.string "A cualquier hora y en todas\l"
	.string "partes.$"
