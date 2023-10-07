NeoViridianCity_MapScripts::
	.byte 0

NeoViridianCity_Primer_Npc::
lock
faceplayer
msgbox NeoViridianCity_Primer_Npc_Texto_1 MSGBOX_NPC
release
end

NeoViridianCity_Primer_Npc_Texto_1:
.string "Dicen que en el suelo del BOSQUE VERDE\n"
	.string "hay muchos objetos.$"



NeoViridianCity_Segundo_Npc::
lock
faceplayer
msgbox NeoViridianCity_Segundo_Npc_Texto_1 MSGBOX_NPC
release
end

NeoViridianCity_Segundo_Npc_Texto_1:
.string "Dicen que en el suelo del BOSQUE VERDE\n"
	.string "hay muchos objetos.$"



NeoViridianCity_Tercer_Npc::
lock
faceplayer
msgbox NeoViridianCity_Tercer_Npc_Texto_1 MSGBOX_NPC
release
end

NeoViridianCity_Tercer_Npc_Texto_1:
.string "Dicen que en el suelo del BOSQUE VERDE\n"
	.string "hay muchos objetos.$"

NeoViridianCity_Anciano::
lock
faceplayer
msgbox NeoViridianCity_Anciano_YesNo_Texto_1,MSGBOX_DEFAULT
msgbox NeoViridianCity_Anciano_YesNo_Texto_2,MSGBOX_DEFAULT
msgbox NeoViridianCity_Anciano_YesNo_Texto_3, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq NeoViridianCity_Anciano_No
msgbox NeoViridianCity_Anciano_Yes, MSGBOX_DEFAULT
release
end

NeoViridianCity_Anciano_YesNo_Texto_3:
.string "¿Me crees?$"

NeoViridianCity_Anciano_YesNo_Texto_2:
.string "¡Tengo que hablar con alguien, así que\n"
	.string "te toca a ti! Puede que no lo parezca,\l"
	.string "pero yo era un experto atrapando\l"
	.string "POKÉMON.$"



NeoViridianCity_Anciano_YesNo_Texto_1:
.string "¡Hola! ¡Me acabo de tomar un café doble\n"
	.string "y estoy como una moto!$"



NeoViridianCity_Anciano_No::
msgbox NeoViridianCity_Anciano_No_Texto_1, MSGBOX_DEFAULT
release
end

NeoViridianCity_Anciano_No_Texto_1:
.string "¿Qué? ¡Serás insolente! Si fuera un\n"
	.string "poco más joven, te enseñaría un par de\l"
	.string "cosas. ¡Vaya!$"


NeoViridianCity_Anciano_Yes:
.string "Muy bien. Sí, yo era algo fuera de lo\n"
	.string "normal. ¡Déjame contártelo!$"

NeoViridianCity_Anciano_Gym::
lock
faceplayer
msgbox NeoViridianCity_Anciano_Gym_Texto_1 MSGBOX_NPC
release
end

NeoViridianCity_Anciano_Gym_Texto_1:
.string "Al parecer, el GIMNASIO ha cambiado de\n"
	.string "LÍDER, aunque el nuevo LÍDER se deja\l"
	.string "ver lo mismo que el anterior: nada.$"


