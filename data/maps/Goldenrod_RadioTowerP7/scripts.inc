Goldenrod_RadioTowerP7_MapScripts::
	.byte 0

Goldenrod_RadioTowerP7_NPC_2::
lock
faceplayer
msgbox Goldenrod_RadioTowerP7_NPC_2_Texto_1 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP7_NPC_2_Texto_2 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP7_NPC_2_Texto_1:
	.string "La verdadera grandeza de este lugar\n"
	.string "jamás podrá ser comprendida por las\l"
	.string "masas.$"

Goldenrod_RadioTowerP7_NPC_2_Texto_2:
	.string "Pero… si permites que el mundo\n"
	.string "determine tu valía, siempre te\l"
	.string "considerará como un 0.$"

Goldenrod_RadioTowerP7_NPC_3::
lock
faceplayer
msgbox Goldenrod_RadioTowerP7_NPC_3_Texto_1 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP7_NPC_3_Texto_2 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP7_NPC_3_Texto_1:
	.string "TORRE RADIO tiene su verdadera razón\n"
	.string "de ser aquí, a partir del P5.$"

Goldenrod_RadioTowerP7_NPC_3_Texto_2:
	.string "El resto de pisos, abiertos al público,\n"
	.string "no son más que una mera fachada, cuya\l"
	.string "única utilidad es generar ingresos\l"
	.string "pasivos que financian el trabajo de\l"
	.string "gente como yo.$"

Goldenrod_RadioTowerP7_NPC_4::
lock
faceplayer
msgbox Goldenrod_RadioTowerP7_NPC_4_Texto_1 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP7_NPC_4_Texto_2 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP7_NPC_4_Texto_3 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP7_NPC_4_Texto_4 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP7_NPC_4_Texto_1:
	.string "Cada día descubrimos cosas nuevas\n"
	.string "sobre las ondas. Algunas más\l"
	.string "interesantes que otras.$"

Goldenrod_RadioTowerP7_NPC_4_Texto_2:
	.string "Esta a ti podría interesarte.$"

Goldenrod_RadioTowerP7_NPC_4_Texto_3:
	.string "¡{PLAYER} obtuvo la MT78 ONDA ÍGNEA\n"
	.string "de manos de científico!$"

Goldenrod_RadioTowerP7_NPC_4_Texto_4:
	.string "El mundo cambia a una velocidad\n"
	.string "asombrosa. Solo dios sabe dónde\l"
	.string "estaremos de aquí a un año.$"

Goldenrod_RadioTowerP7_NPC_5::
lock
faceplayer
msgbox Goldenrod_RadioTowerP7_NPC_5_Texto_1 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP7_NPC_5_Texto_1:
	.string "El DIRECTOR de TORRE RADIO no es muy\n"
	.string "bueno con los POKÉMON, siempre se\l"
	.string "centró solo en los negocios.$"

Goldenrod_RadioTowerP7_NPC_6::
lock
faceplayer
msgbox Goldenrod_RadioTowerP7_NPC_6_Texto_1 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP7_NPC_6_Texto_2 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP7_NPC_6_Texto_1:
	.string "La POLICÍA de JOHTO se está\n"
	.string "modernizando.$"

Goldenrod_RadioTowerP7_NPC_6_Texto_2:
	.string "Están trayendo POKÉMON de otras\n"
	.string "regiones para mejorar nuestro\l"
	.string "desempeño, mis favoritos son MANECTRIC\l"
	.string "y ARCANINE.$"

Goldenrod_RadioTowerP7_EventScript_Policia::
	trainerbattle_single TRAINER_TRAINER_717, Goldenrod_RadioTowerP7_Text_PoliciaIntro, Goldenrod_RadioTowerP7_Text_PoliciaDefeated
	msgbox Goldenrod_RadioTowerP7_Text_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



