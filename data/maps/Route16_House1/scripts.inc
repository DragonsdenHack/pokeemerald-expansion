Route16_House1_MapScripts::
	.byte 0

Route16House1_1::
end



Route16House1_2::
end

Route16_House1_Combate_Vuelo::
lock
faceplayer
compare VAR_UNUSED_0x40A1, 0
goto_if_gt Route16_House1_Combate_Vuelo_2
playse SE_PIN
applymovement 1, Route16_House1_Combate_Vuelo_Move_1
waitmovement 0x0
msgbox Route16_House1_Combate_Vuelo_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox Route16_House1_Combate_Vuelo_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Route16_House1_Combate_Vuelo_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route16_House1_Combate_Vuelo_3
msgbox Route16_House1_Combate_Vuelo_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_VUELO, Route16_House1_Combate_Vuelo_Texto_6
playfanfare MUS_OBTAIN_TMHM
giveitem ITEM_AMULET_COIN
waitfanfare
msgbox Route16_House1_Combate_Vuelo_Texto_7 MSGBOX_AUTOCLOSE
msgbox Route16_House1_Combate_Vuelo_Texto_8 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40A1, 1
release
end

Route16_House1_Combate_Vuelo_2::
lock
faceplayer
msgbox Route16_House1_Combate_Vuelo_Texto_4 MSGBOX_AUTOCLOSE
release
end

Route16_House1_Combate_Vuelo_3::
lock
faceplayer
msgbox Route16_House1_Combate_Vuelo_Texto_9 MSGBOX_AUTOCLOSE
release
end

Route16_House1_Combate_Vuelo_Move_1:
emote_exclamation_mark
step_end

Route16_House1_Combate_Vuelo_Texto_1:
.string "¡Oh, no!\n"
	.string "¡Has descubierto mi escondite!\l"
	.string "Aquí entreno en secreto a mis\l"
	.string "queridos pájaros POKÉMON, siempre\l"
	.string "me ha fascinado la variedad de\l"
	.string "especies de este tipo, y la forma\l"
	.string "en que crecen.$"

Route16_House1_Combate_Vuelo_Texto_2:
.string "...\n"
	.string "...$"

Route16_House1_Combate_Vuelo_Texto_3:
.string "Mira, si quieres puedo enseñarte a\n"
	.string "las mejores aves de la región,\l"
	.string "pero deberás de mantener este\l"
	.string "lugar en secreto, ¿vale?$"

Route16_House1_Combate_Vuelo_Texto_4:
.string "Creo que cambiaré de estrategia a\n"
	.string "partir de ahora, a todo el que\l"
	.string "encuentre este lugar le daré una\l"
	.string "MO02 como premio y ya está, mis\l"
	.string "pájaros POKÉMON no necesitan\l"
	.string "demostrar lo que valen en un\l"
	.string "combate, voy a centrarme en mi\l"
	.string "próximo gran objetivo: evolucionar\l"
	.string "mi PIDGEOTTO a PIDGEOT, el ave no\l"
	.string "legendaria de mayor poder en esta\l"
	.string "región.$"

Route16_House1_Combate_Vuelo_Texto_5:
.string "¡Genial!\n"
	.string "¡Hace tiempo que no lucho en un\l"
	.string "combate contra otro ENTRENADOR!\l"
	.string "¡Prepárate, conseguí ganar la\l"
	.string "MEDALLA ARCOIRIS gracias a este\l"
	.string "equipo!$"

Route16_House1_Combate_Vuelo_Texto_6:
.string "¡Oh!\n"
	.string "Después de esto mis pobres POKÉMON\l"
	.string "necesitarán un buen descanso.$"

Route16_House1_Combate_Vuelo_Texto_7:
.string "No esperaba perder, o el mundo ha\n"
	.string "cambiado mucho desde mi exilio, o\l"
	.string "tú eres un ENTRENADOR muy capaz...\l"
	.string "Si te lo propusieras seguro que\l"
	.string "podrías luchar por todas las\l"
	.string "MEDALLAS DE GIMNASIO, alguien como\l"
	.string "tú debe de tener esto.$"

Route16_House1_Combate_Vuelo_Texto_8:
.string "La MO02 te permitirá usar VUELO\n"
	.string "tanto dentro como fuera del\l"
	.string "combate, lo agradecerás y mucho\l"
	.string "cuando tengas que desplazarte de\l"
	.string "una ciudad a otra, créeme.$"

Route16_House1_Combate_Vuelo_Texto_9:
.string "¡Oh!\n"
	.string "¿En serio?\l"
	.string "¡Pero al menos no le hables a\l"
	.string "nadie de este lugar!\l"
	.string "¿Vale?$"
