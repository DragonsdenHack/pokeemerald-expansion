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