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
.string "En la azotea se llevan a cabo las\n"
	.string "pruebas más importantes, por eso los\l"
	.string "actos se celebran ahí.$"


LavenderRadioP10_Segundo_Cientifico::
lock
faceplayer
msgbox LavenderRadioP10_Segundo_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP10_Segundo_Cientifico_Texto_1:
	.string "Derrotaste a LANCE, el valor de ello\n"
	.string "responde más al contexto en el que lo\l"
	.string "hiciste, ya que si hablamos de nivel\l"
	.string "absoluto, cualquier EJECUTIVO ROCKET\l"
	.string "a día de hoy destrozaría igualmente a\l"
	.string "ese LANCE.$"

LavenderRadioP10_Tercer_Cientifico::
lock
faceplayer
msgbox LavenderRadioP10_Tercer_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP10_Tercer_Cientifico_Texto_1:
.string "MEWTWO tenía razón, no nos importan los\n"
	.string "prototipos en sí, solo los resultados\l"
	.string "que ofrecen. No es culpa nuestra, el\l"
	.string "mundo en sí se mueve por resultados, si\l"
	.string "no los hay desapareces, por mucho amor\l"
	.string "y devoción que demuestres en lo que\l"
	.string "sea.$"

LavenderRadioP10_Cuarto_Cientifico::
lock
faceplayer
msgbox LavenderRadioP10_Cuarto_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP10_Cuarto_Cientifico_Texto_1:
.string "La normalidad y el confort son algo\n"
	.string "capaz de apagar cualquier fuego, sin\l"
	.string "importar cuán potente sea.$"


LavenderRadioP10_Quinto_Cientifico::
lock
faceplayer
msgbox LavenderRadioP10_Quinto_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP10_Quinto_Cientifico_Texto_1:
.string "BILL es un cabezota, jamás pasará de\n"
	.string "los 650 STATS BASE usando a PORYGON\l"
	.string "como modelo, cosa que ya hemos\l"
	.string "logrado con otros prototipos.$"

LavenderRadioP10_Policia::
lock
faceplayer
msgbox LavenderRadioP10_Policia_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP10_Policia_Texto_1:
.string "Lo que más daña tu reputación es lo que\n"
	.string "dices para defenderla.$"

LavenderRadioP10Documento_100::
msgbox LavenderRadioP10Documento_Text_100, MSGBOX_SIGN   
end

LavenderRadioP10Documento_Text_100:
.string "10mo Expansión de Ondas$"

LavenderRadioP10Documento_101::
msgbox LavenderRadioP10Documento_Text_101, MSGBOX_SIGN   
end

LavenderRadioP10Documento_Text_101:
.string "-Cuando crees que has llegado al\n"
	.string "final, en realidad estás empezando-.$"

LavenderRadioP10_Rocket::
lock
faceplayer
msgbox LavenderRadioP10_Rocket_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP10_Rocket_Texto_1:
.string "La PIEDRA ROCKET es extremadamente\n"
	.string "excasa, incluso para los altos cargos\l"
	.string "ROCKET.\l"
	.string "solo a partir de EJECUTIVO se\l"
	.string "te concede una sola, pero debe ser\l"
	.string "increíble contar con un POKÉMON que\l"
	.string "sabes que está al nivel y jerarquía\l"
	.string "de todo un LEGENDARIO, y además\l"
	.string "representa el estilo ROCKET.$"
	