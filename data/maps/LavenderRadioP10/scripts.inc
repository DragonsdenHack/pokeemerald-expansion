LavenderRadioP10_MapScripts::
	.byte 0

LavenderRadioP10_EventScript_Rocket::
	trainerbattle_single TRAINER_TRAINER_185, LavenderRadioP10_Text_RocketIntro, LavenderRadioP10_Text_RocketDefeated
	msgbox LavenderRadioP10_Text_RocketPostBattle, MSGBOX_AUTOCLOSE
	end

LavenderRadioP10_Primer_Cientifico::
lock
faceplayer
msgbox LavenderRadioP10_Primer_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP10_Primer_Cientifico_Texto_1:
	.string "The most crucial tests are held on the\n"
	.string "rooftop, which is why the events take\l"
	.string "place there.$"


LavenderRadioP10_Segundo_Cientifico::
lock
faceplayer
msgbox LavenderRadioP10_Segundo_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP10_Segundo_Cientifico_Texto_1:
	.string "You defeated LANCE, and the value of it\n"
	.string "is more about the circumstances in\l"
	.string "which you achieved it, because if we\l"
	.string "talk about absolute skill, any ROCKET\l"
	.string "EXECUTIVE today would similarly crush\l"
	.string "that LANCE.$"

LavenderRadioP10_Tercer_Cientifico::
lock
faceplayer
msgbox LavenderRadioP10_Tercer_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP10_Tercer_Cientifico_Texto_1:
	.string "MEWTWO was right, we don't care about\n"
	.string "the prototypes themselves, only the\l"
	.string "results they provide. It's not our\l"
	.string "fault; the world itself operates on\l"
	.string "results, if you don't have them, you\l"
	.string "disappear, no matter how much love and\l"
	.string "devotion you show in whatever it is.$"

LavenderRadioP10_Cuarto_Cientifico::
lock
faceplayer
msgbox LavenderRadioP10_Cuarto_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP10_Cuarto_Cientifico_Texto_1:
	.string "Normality and comfort are capable of\n"
	.string "quenching any fire, no matter how\l"
	.string "intense it is.$"


LavenderRadioP10_Quinto_Cientifico::
lock
faceplayer
msgbox LavenderRadioP10_Quinto_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP10_Quinto_Cientifico_Texto_1:
	.string "BILL is stubborn, he'll never surpass\n"
	.string "the 650 BASE STATS mark using PORYGON\l"
	.string "as a base model, something we've\l"
	.string "already achieved with other\l"
	.string "prototypes.$"

LavenderRadioP10_Policia::
lock
faceplayer
msgbox LavenderRadioP10_Policia_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP10_Policia_Texto_1:
	.string "Which damages your reputation the\n"
	.string "most, is which you say to defend it.$"

LavenderRadioP10Documento_100::
msgbox LavenderRadioP10Documento_Text_100, MSGBOX_SIGN   
end

LavenderRadioP10Documento_Text_100:
.string "10th Waves Expansion$"

LavenderRadioP10Documento_101::
msgbox LavenderRadioP10Documento_Text_101, MSGBOX_SIGN   
end

LavenderRadioP10Documento_Text_101:
	.string "-When you think you've reached the end,\n"
	.string "you're actually just starting-.$"

LavenderRadioP10_Rocket::
lock
faceplayer
msgbox LavenderRadioP10_Rocket_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP10_Rocket_Texto_1:
	.string "The ROCKET STONE is extremely limited,\n"
	.string "even for high-ranked ROCKET. Only when\l"
	.string "you become an EXECUTIVE are you\l"
	.string "granted one, but it must be amazing to\l"
	.string "have a POKÉMON that you know is on the\l"
	.string "level and hierarchy of a LEGENDARY, and\l"
	.string "also represents the ROCKET style.$"

