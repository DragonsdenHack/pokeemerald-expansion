Olivine_Pub_MapScripts::
	.byte 0

OlivinePub1::
lock     
faceplayer     
msgbox OlivineCity_Pub_Text_1, MSGBOX_DEFAULT
release     
end

OlivineCity_Pub_Text_1:
.string "Este lugar está abierto las 24\n"
.string "horas, se hizo muy popular entre\l"
.string "los marineros venir aquí a las 5-6\l"
.string "de la mañana, y acabó\l"
.string "convirtiéndose en un punto de\l"
.string "reunión para marineros retirados o\l"
.string "que vuelven después de trabajar.\l"
.string "La tradición se ha mantenido hasta\l"
.string "el día de hoy.$"



OlivinePub2::
end



OlivinePub3::
lock     
faceplayer     
msgbox OlivineCity_Pub_Text_3, MSGBOX_DEFAULT
release     
end

OlivineCity_Pub_Text_3:
.string "El restaurante de CIUDAD AZULONA\n"
.string "es un chiste en comparación con\l"
.string "este.\l"
.string "¡Aquí te traen todo recién pillado\l"
.string "del mar, me voy a poner morado!$"



OlivinePub4::
lock     
faceplayer     
msgbox OlivineCity_Pub_Text_4, MSGBOX_DEFAULT
release     
end

OlivineCity_Pub_Text_4:
.string "¡En el mar solo puedes confiar en\n"
.string "ti mismo!\l"
.string "¡Y yo estoy en plena forma!$"



OlivinePub5::
lock     
faceplayer     
msgbox OlivineCity_Pub_Text_5, MSGBOX_DEFAULT
release     
end

OlivineCity_Pub_Text_5:
.string "¡Hey, marinero!\n"
.string "¡Nunca olvides que hay que estar\l"
.string "dispuesto a perderse para poder\l"
.string "hallar destinos inalcanzables!\l"
.string "¡Camarero!\l"
.string "¡Otra copa!$"

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
.string "Estoy tratando de reconducir mi vida,\n"
	.string "después de haber escogido por años la\l"
	.string "senda rápida y placentera. Ahora me\l"
	.string "toca recuperar el tiempo perdido{PAUSE 5}…{PAUSE 5}$"

Olivine_Pub_Mision_Secundaria_Texto_2:
.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

Olivine_Pub_Mision_Secundaria_Texto_3:
.string "Oh…{PAUSE 35} Entonces eres algo más que uno de\n"
	.string "esos ejecutivos de TRIGAL, tal vez tú\l"
	.string "puedas{PAUSE 5}…{PAUSE 5}$"

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
	.string "imposible volver, pero tú{PAUSE 25}…{PAUSE 25} tal vez\l"
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
.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

Olivine_Pub_Mision_Secundaria_Texto_9:
.string "{PLAYER} entregó el SNUBBULL a\n"
	.string "MARINERO.$"

Olivine_Pub_Mision_Secundaria_Texto_10:
.string "Oh…{PAUSE 35} Mi SNUBBULL{PAUSE 25}…{PAUSE 25} Creí que no volvería a\n"
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
