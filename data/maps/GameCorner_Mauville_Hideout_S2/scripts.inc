GameCorner_Mauville_Hideout_S2_MapScripts::
	.byte 0


GameCorner_Mauville_NPC2_Cientifico::
lock
faceplayer
msgbox GameCorner_Mauville_NPC2_Cientifico_Texto_1 MSGBOX_NPC
release
end

GameCorner_Mauville_NPC2_Cientifico_Texto_1:
	.string "Los profesionales se atienen a un\n"
	.string "horario, los aficionados dejan que la\l"
	.string "vida se entrometa en su camino.$"



GameCorner_Mauville_NPC3_Cientifico::
lock
faceplayer
msgbox GameCorner_Mauville_NPC3_Cientifico_Texto_1 MSGBOX_NPC
release
end

GameCorner_Mauville_NPC3_Cientifico_Texto_1:
	.string "Nuestra superior no quiere saber nada\n"
	.string "de las regiones de KANTO y JOHTO, a\l"
	.string "pesar de que le pusimos sobre la mesa\l"
	.string "suculentas propuestas para expandir el\l"
	.string "negocio a esos lugares.$"

GameCorner_Mauville_NPC6_Cientifico::
lock
faceplayer
msgbox GameCorner_Mauville_NPC6_Cientifico_Texto_1 MSGBOX_NPC
release
end

GameCorner_Mauville_NPC6_Cientifico_Texto_1:
	.string "Lo especulativo se aprovecha de lo\n"
	.string "productivo de los demás, necesita de\l"
	.string "ello. No es productivo en sí. En eso\l"
	.string "basan su negocio lugares como este.$"


GameCorner_Mauville_NPC8_Electricista::
lock
faceplayer
msgbox GameCorner_Mauville_NPC8_Electricista_Texto_1 MSGBOX_NPC
release
end

GameCorner_Mauville_NPC8_Electricista_Texto_1:
	.string "¿Eres nuevo? No debes decir una\n"
	.string "palabra de este lugar a nadie, lo sabes,\l"
	.string "¿no?$"

GameCorner_Mauville_NPC10_Electricista::
lock
faceplayer
msgbox GameCorner_Mauville_NPC10_Electricista_Texto_1 MSGBOX_NPC
release
end

GameCorner_Mauville_NPC10_Electricista_Texto_1:
	.string "DEVON realizó una importante donación\n"
	.string "al CASINO hace poco. Nuestras\l"
	.string "relaciones con la empresa del momento\l"
	.string "son buenas.$"


GameCorner_Mauville_NPC11_Cientifico::
lock
faceplayer
msgbox GameCorner_Mauville_NPC11_Cientifico_Texto_1 MSGBOX_NPC
release
end

GameCorner_Mauville_NPC11_Cientifico_Texto_1:
	.string "Cuanto mayor es la suerte, tanto menos\n"
	.string "hay que aprender.$"


GameCorner_Mauville_NPC12_Cientifico::
lock
faceplayer
msgbox GameCorner_Mauville_NPC12_Cientifico_Texto_1 MSGBOX_NPC
release
end

GameCorner_Mauville_NPC12_Cientifico_Texto_1:
	.string "La dueña del CASINO es muy exigente,\n"
	.string "cada vez nos exige un algoritmo más\l"
	.string "pulido para maximizar ganancias.$"

GameCorner_Mauville_EventScript_Primer_Policia::
	trainerbattle_single TRAINER_TRAINER_583, GameCorner_Mauville_Text_PrimerPoliciaIntro, GameCorner_Mauville_Text_PrimerPoliciaDefeat
	msgbox GameCorner_Mauville_Text_PrimerPoliciaPostBattle, MSGBOX_AUTOCLOSE
	end

GameCorner_Mauville_EventScript_Segundo_Policia::
	trainerbattle_single TRAINER_TRAINER_584, GameCorner_Mauville_Text_SegundoPoliciaIntro, GameCorner_Mauville_Text_SegundoPoliciaDefeat
	msgbox GameCorner_Mauville_Text_SegundoPoliciaPostBattle, MSGBOX_AUTOCLOSE
	end

GameCorner_Mauville_EventScript_Primer_Electricista::
	trainerbattle_single TRAINER_TRAINER_585, GameCorner_Mauville_Text_PrimerElectricistaIntro, GameCorner_Mauville_Text_PrimerElectricistaDefeat
	msgbox GameCorner_Mauville_Text_PrimerElectricistaPostBattle, MSGBOX_AUTOCLOSE
	end
