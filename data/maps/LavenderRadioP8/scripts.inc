LavenderRadioP8_MapScripts::
	.byte 0

LavenderRadioP8_EventScript_Policia::
	trainerbattle_single TRAINER_TRAINER_183, LavenderRadioP8_Text_PoliciaIntro, LavenderRadioP8_Text_PoliciaDefeated
	msgbox LavenderRadioP8_Text_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end

LavenderRadioP8_Primer_Cientifico::
lock
faceplayer
msgbox LavenderRadioP8_Primer_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP8_Primer_Cientifico_Texto_1:
.string "El P8 se eleva ya más alto de lo que\n"
	.string "jamás se elevó la ya otrora TORRE\l"
	.string "POKÉMON.\l"
	.string "Esto es, ahora mismo vemos PUEBLO\l"
	.string "LAVANDA desde un prisma que jamás\l"
	.string "vieron sus habitantes.$"

LavenderRadioP8_Segundo_Cientifico::
lock
faceplayer
msgbox LavenderRadioP8_Segundo_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP8_Segundo_Cientifico_Texto_1:
	.string "Si uno desconoce las causas de su\n"
	.string "éxito, es cuestión de tiempo que la\l"
	.string "esperanza matemática deshaga lo que\l"
	.string "por mera casualidad produjo.$"

LavenderRadioP8Documento_100::
msgbox LavenderRadioP8Documento_Text_100, MSGBOX_SIGN   
end

LavenderRadioP8Documento_Text_100:
.string "8vo Stats Base$"

LavenderRadioP8Documento_101::
msgbox LavenderRadioP8Documento_Text_101, MSGBOX_SIGN   
end

LavenderRadioP8Documento_Text_101:
.string "-La posibilidad engendra cada vez más y\n"
	.string "más posibilidad-.$"

LavenderRadioP8_Tercer_Cientifico::
lock
faceplayer
msgbox LavenderRadioP8_Tercer_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP8_Tercer_Cientifico_Texto_1:
.string "En este piso ya se tratan temas muy\n"
	.string "serios, he tenido oportunidad de\l"
	.string "trabajar en ellos de primera mano.\l"
	.string "Para mi sorpresa, no sentí alegría ni\l"
	.string "satisfacción al ver los resultados,\l"
	.string "más bien miedo y... mucho vértigo por\l"
	.string "todo lo que pueda suponer.$"

LavenderRadioP8_Cuarto_Cientifico::
lock
faceplayer
msgbox LavenderRadioP8_Cuarto_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP8_Cuarto_Cientifico_Texto_1:
.string "Fuera de estas instalaciones aún\n"
	.string "siguen usando POKÉMON de KANTO, y\l"
	.string "ahora un poco más de JOHTO también.\l"
	.string "Pero aquí es común ver a gente con\l"
	.string "POKÉMON de regiones exóticas, el\l"
	.string "mercado interno que hemos creado es\l"
	.string "increíble.$"
