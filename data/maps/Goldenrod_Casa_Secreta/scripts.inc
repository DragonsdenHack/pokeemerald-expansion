Goldenrod_Casa_Secreta_MapScripts::
	.byte 0


Goldenrod_Casa_Secreta_Exorcista::
lock
faceplayer
goto_if_set FLAG_HOENN_119, Goldenrod_Casa_Secreta_Exorcista_Final
goto_if_set FLAG_HOENN_120, Goldenrod_Casa_Secreta_Exorcista_Inicio
goto_if_set FLAG_HOENN_118, Goldenrod_Casa_Secreta_Exorcista_Encontrado
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_3 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_4 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_5 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_6 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_7 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_8 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_9 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_120
release
end

Goldenrod_Casa_Secreta_Exorcista_Inicio::
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_6 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_7 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_8 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_9 MSGBOX_AUTOCLOSE
goto_if_set FLAG_HOENN_118, Goldenrod_Casa_Secreta_Exorcista_Encontrado
release
end

Goldenrod_Casa_Secreta_Exorcista_Encontrado::
checkitem ITEM_OVAL_CHARM
goto_if_eq VAR_RESULT, FALSE, Goldenrod_Casa_Secreta_Exorcista_2
delay 10
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_10 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 1, Goldenrod_Casa_Secreta_Exorcista_Move_1
waitmovement 0x0
playfanfare MUS_OBTAIN_BADGE
removeitem ITEM_OVAL_CHARM
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_11 MSGBOX_DEFAULT
waitfanfare
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_12 MSGBOX_AUTOCLOSE
delay 10
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_13 MSGBOX_AUTOCLOSE
applymovement 1, Goldenrod_Casa_Secreta_Exorcista_Move_2
waitmovement 0x0
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, Goldenrod_Casa_Secreta_Exorcista_Move_3
waitmovement 0x0
playfanfare MUS_OBTAIN_TMHM
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_15 MSGBOX_DEFAULT
givemon SPECIES_MARSHADOW, 80, ITEM_FIGHTING_GEM
waitfanfare
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_16 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_17 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_119
release
end

Goldenrod_Casa_Secreta_Exorcista_Final::
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_18 MSGBOX_AUTOCLOSE
release
end

Goldenrod_Casa_Secreta_Exorcista_2::
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_6 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_7 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_8 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_9 MSGBOX_AUTOCLOSE
release
end

Goldenrod_Casa_Secreta_Exorcista_Move_2:
face_up
step_end

Goldenrod_Casa_Secreta_Exorcista_Move_3:
walk_in_place_down
step_end

Goldenrod_Casa_Secreta_Exorcista_Move_1:
emote_exclamation_mark
step_end

Goldenrod_Casa_Secreta_Exorcista_Texto_1:
	.string "Vaya, qué sorpresa. ¿Quién eres tú?$"

Goldenrod_Casa_Secreta_Exorcista_Texto_2:
	.string "{PAUSE 15}… {PAUSE 15}…{PAUSE 15}$"

Goldenrod_Casa_Secreta_Exorcista_Texto_3:
	.string "Así que KANTO, vienes de muy lejos.$"

Goldenrod_Casa_Secreta_Exorcista_Texto_4:
	.string "Yo vivía antes en ARCHI7, decidí\n"
	.string "mudarme a JOHTO cuando cerraron los\l"
	.string "gimnasios.$"

Goldenrod_Casa_Secreta_Exorcista_Texto_5:
	.string "En esa época se hablaba de lo mucho que\n"
	.string "se parecían esas dos regiones, aunque\l"
	.string "cada vez queda menos de eso.$"

Goldenrod_Casa_Secreta_Exorcista_Texto_6:
	.string "Me pregunto si ARCHI7 también habrá\n"
	.string "cambiado tanto. Solo hay una cosa de la\l"
	.string "que me arrepiento…$"

Goldenrod_Casa_Secreta_Exorcista_Texto_7:
	.string "Y es no haber podido encontrar el\n"
	.string "AMULETO de mi difunto POKÉMON.$"

Goldenrod_Casa_Secreta_Exorcista_Texto_8:
	.string "Lo perdí un día, en lo profundo del\n"
	.string "BOSQUE BAYA, y no volví a saber de él.$"

Goldenrod_Casa_Secreta_Exorcista_Texto_9:
	.string "De eso hace ya más de una década.\p"
	.string "Supongo que… tendré que aceptar que se\n"
	.string "perdió para siempre.$"

Goldenrod_Casa_Secreta_Exorcista_Texto_10:
	.string "{PAUSE 15}… {PAUSE 15}…$"

Goldenrod_Casa_Secreta_Exorcista_Texto_11:
	.string "¡{PLAYER} entregó a exorcista el\n"
	.string "AMULETO OVAL!$"

Goldenrod_Casa_Secreta_Exorcista_Texto_12:
	.string "No{PAUSE 15}…{PAUSE 15} no es posible{PAUSE 15}…{PAUSE 15} vuelvo a tenerlo\n"
	.string "entre mis manos.$"

Goldenrod_Casa_Secreta_Exorcista_Texto_13:
	.string "Es{PAUSE 15}…{PAUSE 15} asombroso, solo alguien que conoce\n"
	.string "todos los misterios de ISLA TERA podría\l"
	.string "haberlo encontrado.$"

Goldenrod_Casa_Secreta_Exorcista_Texto_14:
	.string "Por desgracia, algunos de esos\n"
	.string "misterios ya han quedado sepultados\l"
	.string "para siempre, y solo están en la memoria\l"
	.string "de unos pocos. Yo puedo mostrarte\l"
	.string "alguno de esos misterios.$"

Goldenrod_Casa_Secreta_Exorcista_Texto_15:
	.string "¡HAS RECIBIDO UN MARSHADOW AL NV.80!$"

Goldenrod_Casa_Secreta_Exorcista_Texto_16:
	.string "Según el antiguo LÍDER de ISLA TERA,\n"
	.string "ver uno es 100 veces más raro que\l"
	.string "encontrar un POKÉMON variocolor.$"

Goldenrod_Casa_Secreta_Exorcista_Texto_17:
	.string "Un explorador como tú seguro que es\n"
	.string "justo lo que necesita este POKÉMON.$"

Goldenrod_Casa_Secreta_Exorcista_Texto_18:
	.string "A veces, siento curiosidad por saber\n"
	.string "qué ha sido de todo lo que dejé atrás en\l"
	.string "ARCHI7, pero nunca me siento preparada\l"
	.string "para volver a ese lugar.$"

