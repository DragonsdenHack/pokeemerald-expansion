FloaromaTown_MapScripts::
	.byte 0

Aromaflor_Floristeria::
lock
msgbox Aromaflor_Floristeria_Texto_1, MSGBOX_SIGN
release
end

Aromaflor_Floristeria_Texto_1:
	.string "FLORISTERÍA ARCO IRIS\n"
	.string "Bayas gratis$"


Aromaflor_Cartel::
lock
msgbox Aromaflor_Cartel_Texto_1, MSGBOX_SIGN
release
end

Aromaflor_Cartel_Texto_1:
	.string "PUEBLO AROMAFLOR\n"
	.string "Lleno de aroma y color$"



Aromaflor_Prado::
lock
msgbox Aromaflor_Prado_Texto_1, MSGBOX_SIGN
release
end

Aromaflor_Prado_Texto_1:
	.string "PRADO AROMAFLOR a pocos metros\n"
	.string "Si quieres MIEL, ¡tenemos!$"


Aromaflor_Primer_NPC::
lock     
faceplayer     
msgbox Aromaflor_Primer_NPC_Texto_1, MSGBOX_NPC
release     
end
 
Aromaflor_Primer_NPC_Texto_1:
.string "Estás en AROMAFLOR, ¡el pueblo de las\n"
.string "flores! ¡Hay flores por todas partes!\p"
.string "¡Adoro plantar flores! ¡Deberías\n"
.string "plantar algunas tú también!$"


Aromaflor_Segundo_NPC::
lock     
faceplayer     
msgbox Aromaflor_Segundo_NPC_Texto_1, MSGBOX_NPC
release     
end

Aromaflor_Segundo_NPC_Texto_1:
.string "¿Has oído hablar de las GRACÍDEAS?\p"
.string "Son flores que se regalan en ramos para\n"
.string "expresar gratitud.\p"
.string "Es una tradición que se respeta desde\n"
.string "hace muchos años por estos lares.$"


Aromaflor_Tercer_NPC::
lock     
faceplayer     
msgbox Aromaflor_Tercer_NPC_Texto_1, MSGBOX_NPC
release     
end

Aromaflor_Tercer_NPC_Texto_1:
.string "Vine aquí atraído por el dulce olor de\n"
.string "la miel… ¡ni que fuera un POKÉMON!\p"
.string "¿Tendré que preocuparme por esto de\n"
.string "que me guste el olor de la miel?$"


Aromaflor_Cuarto_NPC::
lock     
faceplayer     
msgbox Aromaflor_Cuarto_NPC_Texto_1, MSGBOX_NPC
release     
end

Aromaflor_Cuarto_NPC_Texto_1:
.string "Me encanta este lugar… Es un entorno\n"
.string "agradable que eleva el espíritu.\p"
.string "Tú también has venido buscando una\n"
.string "cura emocional, ¿verdad?$"


Aromaflor_Quinto_NPC::
lock     
faceplayer     
msgbox Aromaflor_Quinto_NPC_Texto_1, MSGBOX_NPC
release     
end

Aromaflor_Quinto_NPC_Texto_1:
.string "Inventar diálogo$"
