Goldenrod_RadioTowerP9_MapScripts::
	.byte 0

Goldenrod_RadioTowerP9_EventScript_Policia::
	trainerbattle_single TRAINER_TRAINER_718, Goldenrod_RadioTowerP9_Text_PoliciaIntro, Goldenrod_RadioTowerP9_Text_PoliciaDefeated
	msgbox Goldenrod_RadioTowerP9_Text_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end


Goldenrod_RadioTowerP9_NPC5::
lock
faceplayer
msgbox Goldenrod_RadioTowerP9_NPC5_Texto_1 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP9_NPC5_Texto_1:
	.string "Legal o ilegal, creativo o destructivo,\n"
	.string "mientras algo genere ganancias siempre\l"
	.string "tiene posibilidades de florecer.$"

Goldenrod_RadioTowerP9_NPC7::
lock
faceplayer
msgbox Goldenrod_RadioTowerP9_NPC7_Texto_1 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP9_NPC7_Texto_1:
	.string "Mientras el perfeccionismo traza\n"
	.string "caminos rectos, la senda del genio es\l"
	.string "sinuosa.$"

Goldenrod_RadioTowerP9_Llave_1::
msgbox Goldenrod_RadioTowerP10_Llave_1_Texto_1, MSGBOX_AUTOCLOSE
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 1, 12, 0x335, FALSE
setmetatile 1, 11, 0x335, FALSE
special DrawWholeMapView
delay 60
release
end

Goldenrod_RadioTowerP9_Llave_2::
msgbox Goldenrod_RadioTowerP10_Llave_1_Texto_1, MSGBOX_AUTOCLOSE
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 14, 9, 0x335, FALSE
setmetatile 14, 10, 0x335, FALSE
setmetatile 15, 9, 0x334, FALSE
setmetatile 15, 10, 0x334, FALSE
setmetatile 15, 11, 0x334, FALSE
special DrawWholeMapView
delay 60
release
end

Goldenrod_RadioTowerP9_Policia_Llave::
lock
msgbox Goldenrod_RadioTowerP9_Policia_Llave_Texto_1 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTowerP9_Policia_Llave_Texto_2 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTowerP9_Policia_Llave_Texto_3 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTowerP9_Policia_Llave_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40FF, 32
release
end

Goldenrod_RadioTowerP9_Policia_Llave_Texto_1:
	.string "¿Es usted {PLAYER}? Venga un\n"
	.string "momento.$"

Goldenrod_RadioTowerP9_Policia_Llave_Texto_2:
	.string "La seguridad a partir de este punto es\n"
	.string "aún más estricta. Para seguir\l"
	.string "necesitará una llave específica.$"

Goldenrod_RadioTowerP9_Policia_Llave_Texto_3:
	.string "¡{PLAYER} obtuvo LLAVE RADIO!$"

Goldenrod_RadioTowerP9_Policia_Llave_Texto_4:
	.string "Buena suerte.$"
