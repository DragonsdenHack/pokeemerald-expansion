Lavender_Secta_Pasadizo_2_MapScripts::
	.byte 0


Lavender_Secta_Pasadizo_2_Esencia::
lock
playse SE_EXIT
clearflag FLAG_HIDE_ROUTE_119_SCOTT
addobject 1
applymovement OBJ_EVENT_ID_PLAYER, CultoS7_Escena_Esencia_Move_2
waitmovement 0x0
waitse
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CultoS7_Escena_Esencia_Move_1
waitmovement 0x0
delay 40
applymovement 1, CultoS7_Escena_Esencia_Move_3
applymovement OBJ_EVENT_ID_PLAYER, CultoS7_Escena_Esencia_Move_4
waitmovement 0x0
delay 40
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_1 MSGBOX_AUTOCLOSE
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_2 MSGBOX_AUTOCLOSE
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_3 MSGBOX_AUTOCLOSE
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_4 MSGBOX_AUTOCLOSE
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_5 MSGBOX_AUTOCLOSE
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_6 MSGBOX_AUTOCLOSE
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_7 MSGBOX_AUTOCLOSE
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_8 MSGBOX_AUTOCLOSE
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_9 MSGBOX_AUTOCLOSE
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_10 MSGBOX_AUTOCLOSE
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_11 MSGBOX_AUTOCLOSE
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_12 MSGBOX_AUTOCLOSE
msgbox Lavender_Secta_Pasadizo_2_Esencia_Texto_13 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_119_SCOTT
removeobject 1
release
end

Lavender_Secta_Pasadizo_2_Esencia_Texto_1:
	.string "Entonces{PAUSE 15}…{PAUSE 15} mantuviste tu voluntad\n"
	.string "intacta.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_2:
	.string "Y eso te ha llevado hasta aquí.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_3:
	.string "Observa. Estás en el núcleo de KANTO.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_4:
	.string "Un lugar tan antiguo como la propia\n"
	.string "región, paralizado en el tiempo, y ajeno\l"
	.string "a todo lo que fuera de él ocurra.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_5:
	.string "Así es. El corazón que late en KANTO no\n"
	.string "está ni en los despachos de SILPH ni en\l"
	.string "la sede del CG de MESETA AÑIL.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_6:
	.string "Solo aquí los dioses del mundo POKÉMON\n"
	.string "te juzgarán. No en la LIGA POKÉMON, no\l"
	.string "como CAMPEÓN.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_7:
	.string "Vamos, {PLAYER}. Haz que se ruboricen\n"
	.string "al ver de lo que eres capaz con las\l"
	.string "mismas reglas que ellos crearon.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_8:
	.string "¡Honra a este lugar con\n"
	.string "un combate inolvidable!$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_9:
	.string "La esencia{PAUSE 25}…{PAUSE 25} la esencia es frágil.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_10:
	.string "No. No estás aquí por casualidad.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_11:
	.string "Rompiste las cadenas de la KANTO de\n"
	.string "LANCE, y ahora un mundo de\l"
	.string "posibilidades te espera.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_12:
	.string "Ni en tus más descabellados sueños\n"
	.string "podrías imaginar todo lo que te\l"
	.string "aguarda, todo lo que aún te queda por\l"
	.string "ver y vivir. KANTO será testigo de ello.$"

Lavender_Secta_Pasadizo_2_Esencia_Texto_13:
	.string "Pero recuerda{PAUSE 35}…{PAUSE 35} la esencia\n"
	.string "puede malograrse.$"
