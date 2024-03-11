Olivine_Pub_MapScripts::
	.byte 0

OlivinePub1::
lock     
faceplayer     
msgbox OlivineCity_Pub_Text_1, MSGBOX_DEFAULT
release     
end

OlivineCity_Pub_Text_1:
	.string "This place is open 24 hours a day. It\n"
	.string "was very popular among sailors to come\l"
	.string "here at 5-6 am, until it became a\l"
	.string "meeting point for retired sailors or\l"
	.string "those returning from work. The\l"
	.string "tradition has persisted to this day.$"



OlivinePub2::
end



OlivinePub3::
lock     
faceplayer     
msgbox OlivineCity_Pub_Text_3, MSGBOX_DEFAULT
release     
end

OlivineCity_Pub_Text_3:
	.string "The CELADON CITY restaurant is a joke\n"
	.string "compared to this place. Here they bring\l"
	.string "you everything freshly caught from the\l"
	.string "sea, I'm going to feast!$"



OlivinePub4::
lock     
faceplayer     
msgbox OlivineCity_Pub_Text_4, MSGBOX_DEFAULT
release     
end

OlivineCity_Pub_Text_4:
.string "In the sea, you can only trust yourself!\n"
.string "And I'm in my best!$"



OlivinePub5::
lock     
faceplayer     
msgbox OlivineCity_Pub_Text_5, MSGBOX_DEFAULT
release     
end

OlivineCity_Pub_Text_5:
.string "Hey, sailor!\n"
.string "Never forget you have to be willing\l"
.string "to get lost to find unreachable\l"
.string "destinations!\l"
.string "Waiter!\l"
.string "Another drink!$"

Olivine_Pub_Mision_Secundaria::
lock
faceplayer
compare VAR_EVER_GRANDE_CITY_STATE, 4
goto_if_gt Olivine_Pub_Mision_Secundaria_4
compare VAR_EVER_GRANDE_CITY_STATE, 3
goto_if_gt Olivine_Pub_Mision_Secundaria_3
compare VAR_EVER_GRANDE_CITY_STATE, 0
goto_if_gt Olivine_Pub_Mision_Secundaria_2
msgbox Olivine_Pub_Mision_Secundaria_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox Olivine_Pub_Mision_Secundaria_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 6, Olivine_Pub_Mision_Secundaria_Move_1
waitmovement 0x0
msgbox Olivine_Pub_Mision_Secundaria_Texto_3 MSGBOX_AUTOCLOSE
msgbox Olivine_Pub_Mision_Secundaria_Texto_4 MSGBOX_AUTOCLOSE
applymovement 6, Olivine_Pub_Mision_Secundaria_Move_2
waitmovement 0x0
msgbox Olivine_Pub_Mision_Secundaria_Texto_5 MSGBOX_AUTOCLOSE
applymovement 6, Olivine_Pub_Mision_Secundaria_Move_3
waitmovement 0x0
msgbox Olivine_Pub_Mision_Secundaria_Texto_6 MSGBOX_AUTOCLOSE
setvar VAR_EVER_GRANDE_CITY_STATE, 1
release
end

Olivine_Pub_Mision_Secundaria_4::
msgbox Olivine_Pub_Mision_Secundaria_Texto_15 MSGBOX_AUTOCLOSE
release
end

Olivine_Pub_Mision_Secundaria_3::
delay 20
msgbox Olivine_Pub_Mision_Secundaria_Texto_8 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_BADGE
msgbox Olivine_Pub_Mision_Secundaria_Texto_9 MSGBOX_DEFAULT
waitfanfare
playse SE_PIN
applymovement 6, Olivine_Pub_Mision_Secundaria_Move_1
waitmovement 0x0
msgbox Olivine_Pub_Mision_Secundaria_Texto_10 MSGBOX_AUTOCLOSE
delay 10
msgbox Olivine_Pub_Mision_Secundaria_Texto_11 MSGBOX_AUTOCLOSE
applymovement 6, Olivine_Pub_Mision_Secundaria_Move_2
waitmovement 0x0
applymovement 6, Olivine_Pub_Mision_Secundaria_Move_3
waitmovement 0x0
msgbox Olivine_Pub_Mision_Secundaria_Texto_12 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox Olivine_Pub_Mision_Secundaria_Texto_13 MSGBOX_DEFAULT
givemon SPECIES_FROAKIE, 15, ITEM_WATER_GEM
waitfanfare
msgbox Olivine_Pub_Mision_Secundaria_Texto_14 MSGBOX_AUTOCLOSE
setvar VAR_EVER_GRANDE_CITY_STATE, 5
release
end

Olivine_Pub_Mision_Secundaria_2::
msgbox Olivine_Pub_Mision_Secundaria_Texto_7 MSGBOX_AUTOCLOSE
release
end

Olivine_Pub_Mision_Secundaria_Move_3:
face_player
step_end

Olivine_Pub_Mision_Secundaria_Move_2:
face_up
step_end

Olivine_Pub_Mision_Secundaria_Move_1:
emote_exclamation_mark
step_end

Olivine_Pub_Mision_Secundaria_Texto_1:
	.string "I'm trying to get my life back on track\n"
	.string "after years of choosing the fast and\l"
	.string "easy path. Now It's time for me to make\l"
	.string "up for lost time…$"

Olivine_Pub_Mision_Secundaria_Texto_2:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

Olivine_Pub_Mision_Secundaria_Texto_3:
	.string "Oh… So you're something more than those\n"
	.string "GOLDENROD executives, maybe you can…$"

Olivine_Pub_Mision_Secundaria_Texto_4:
.string "Escucha, TRIGAL es muy grande. Hace\n"
	.string "tiempo formé parte de una gran red de\l"
	.string "tráfico de POKÉMON. Finalmente\l"
	.string "abandoné, no podía soportar varias\l"
	.string "de sus prácticas. Ahora estoy aquí,\l"
	.string "tratando de hacerme MARINERO.$"

Olivine_Pub_Mision_Secundaria_Texto_5:
.string "Solo me arrepiento de una cosa: haber\n"
	.string "dejado atrás a mi querido SNUBULL, el\l"
	.string "pobre continúa allí. Para mí es\l"
	.string "imposible volver, pero tú… tal vez\l"
	.string "puedas abrirte paso por ese lugar, y\l"
	.string "traerme de vuelta a SNUBULL.$"

Olivine_Pub_Mision_Secundaria_Texto_6:
.string "La red de POKE-TRAFICO se encuentra en\n"
	.string "el subsuelo de TRIGAL, siempre está\l"
	.string "vigilada por algún MOTORISTA. Para\l"
	.string "entrar deberás abrirte paso\l"
	.string "combatiendo, no hay otra. Confío en ti.$"

Olivine_Pub_Mision_Secundaria_Texto_7:
.string "¿Has podido entrar? Recuerda que la red\n"
	.string "de POKE-TRAFICO está en el subsuelo\l"
	.string "de TRIGAL, siempre vigilada por algún\l"
	.string "MOTORISTA.$"

Olivine_Pub_Mision_Secundaria_Texto_8:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

Olivine_Pub_Mision_Secundaria_Texto_9:
.string "{PLAYER} entregó el SNUBBULL a\n"
	.string "MARINERO.$"

Olivine_Pub_Mision_Secundaria_Texto_10:
.string "Oh… Mi SNUBBULL… Creí que no volvería a\n"
	.string "verlo nunca más.$"

Olivine_Pub_Mision_Secundaria_Texto_11:
.string "Eres increíble, ¿{PLAYER}? Debes ser\n"
	.string "uno de los ENTRENADORES más poderosos\l"
	.string "de esta región, si no el que más.$"

Olivine_Pub_Mision_Secundaria_Texto_12:
.string "Sé que es poco para alguien como tú,\n"
	.string "pero rescaté a este raro POKÉMON de\l"
	.string "ser vendido en el mercado negro. Es\l"
	.string "tuyo.$"

Olivine_Pub_Mision_Secundaria_Texto_13:
.string "¡OBTUVISTE UN FROAKIE AL NV.15!$"

Olivine_Pub_Mision_Secundaria_Texto_14:
.string "Creo que es el inicial de alguna región\n"
	.string "lejana, puede cambiar de tipo según el\l"
	.string "movimiento que ejecute. ¡Es muy\l"
	.string "versátil!$"

Olivine_Pub_Mision_Secundaria_Texto_15:
.string "Seguir una vida íntegra te dará mayor\n"
.string "satisfacción que una vida de trampas.\l"
.string "Aún con todas las recompensas del mundo,\l"
.string "esta última no lo hará, tenlo en cuenta.$"
