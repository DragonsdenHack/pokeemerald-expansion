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