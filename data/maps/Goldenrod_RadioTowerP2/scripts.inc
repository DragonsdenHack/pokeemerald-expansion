Goldenrod_RadioTowerP2_MapScripts::
	.byte 0

RadioTowerP2_1::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP2_Text_1, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP2_Text_1:
.string "Nuestro trabajo va a afectar hasta\n"
.string "al color de los POKÉMON, ¡tiempo\l"
.string "al tiempo!$"



RadioTowerP2_2::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP2_Text_2, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP2_Text_2:
.string "TEDDIURSA es mono, pero no hay\n"
.string "nada tan tierno como el MEOWTH de\l"
.string "ROSA.\l"
.string "¡Meowth!$"



RadioTowerP2_3::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP2_Text_3, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP2_Text_3:
.string "A la radio aún le falta para\n"
.string "hacerse escuchar por todo JOHTO y\l"
.string "KANTO, ¡pero ya verás que lo\l"
.string "conseguiremos!$"



RadioTowerP2_4::
end



RadioTowerP2_5::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP2_Text_5, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP2_Text_5:
.string "Oí que mi prima ocupaba un cargo\n"
.string "muy importante en ISLA INTA,\l"
.string "aunque llevo tiempo sin saber de\l"
.string "ella…$"



RadioTowerP2_6::
end



RadioTowerP2_7::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP2_Text_7, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP2_Text_7:
.string "Gracias al MAGNETOTREN podremos\n"
.string "atravesar JOHTO y llegar al centro\l"
.string "de KANTO en solo 15 minutos.\l"
.string "¡Imagínate!\l"
.string "¡De la TORRE RADIO a la SEDE SILPH\l"
.string "en un cuarto de hora!$"



RadioTowerP2_8::
end



RadioTowerP2_9::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP2_Text_9, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP2_Text_9:
.string "Según mis estimaciones, en un par\n"
.string "de años todos en JOHTO contarán\l"
.string "con una radio en sus casas.$"


RadioTowerP2_10::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP2_Text_10, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP2_Text_10:
.string "NARDO es un DJ fabuloso.\n"
.string "¡Su dulce voz me derrite!$"



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
	.string "P2 PERSONAL$"
