Goldenrod_RadioTowerP10_MapScripts::
	.byte 0

Goldenrod_RadioTowerP10_NPC_1::
lock
faceplayer
msgbox Goldenrod_RadioTowerP10_NPC_1_Texto_1 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP10_NPC_1_Texto_1:
	.string "Fruto del estudio de las ondas estamos\n"
	.string "descubriendo también muchos nuevos\l"
	.string "movimientos, algunos muy interesantes.$"

Goldenrod_RadioTowerP10_NPC_2::
lock
faceplayer
msgbox Goldenrod_RadioTowerP10_NPC_2_Texto_1 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP10_NPC_2_Texto_2 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP10_NPC_2_Texto_1:
	.string "El poder de un LEGENDARIO menor puede\n"
	.string "ser rebasado mediante tecnología.$"

Goldenrod_RadioTowerP10_NPC_2_Texto_2:
	.string "Pero el de un LEGENDARIO mayor, como el\n"
	.string "de LUGIA o HO-OH, jamás creo que quede\l"
	.string "obsoleto, por mucho que se incrementen\l"
	.string "los estándares de poder.$"

Goldenrod_RadioTowerP10_NPC_3::
lock
faceplayer
msgbox Goldenrod_RadioTowerP10_NPC_3_Texto_1 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP10_NPC_3_Texto_2 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP10_NPC_3_Texto_1:
	.string "El DIRECTOR invierte mucho en\n"
	.string "seguridad.$"

Goldenrod_RadioTowerP10_NPC_3_Texto_2:
	.string "Aún así, es una minúscula fracción\n"
	.string "comparada con todo lo que TORRE RADIO\l"
	.string "genera.$"

Goldenrod_RadioTowerP10_NPC_4::
lock
faceplayer
msgbox Goldenrod_RadioTowerP10_NPC_4_Texto_1 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP10_NPC_4_Texto_1:
	.string "Justo arriba está la zona de reuniones\n"
	.string "de… los de arriba.$"

Goldenrod_RadioTowerP10_NPC_5::
lock
faceplayer
msgbox Goldenrod_RadioTowerP10_NPC_5_Texto_1 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP10_NPC_5_Texto_2 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP10_NPC_5_Texto_3 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP10_NPC_5_Texto_1:
	.string "A su servicio, ADMIN.JEFE {PLAYER}.$"

Goldenrod_RadioTowerP10_NPC_5_Texto_2:
	.string "Soy uno de los EJECUTIVOS más\n"
	.string "poderosos del TEAM ROCKET.$"

Goldenrod_RadioTowerP10_NPC_5_Texto_3:
	.string "GIOVANNI me destinó aquí. Como muestra\n"
	.string "de la unión entre JOHTO y KANTO, no dudó\l"
	.string "en destinar recursos a TORRE RADIO.$"

Goldenrod_RadioTowerP10_NPC_6::
lock
faceplayer
msgbox Goldenrod_RadioTowerP10_NPC_6_Texto_1 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP10_NPC_6_Texto_1:
	.string "SILPH, TORRE RADIO y el TEAM ROCKET son\n"
	.string "el triunvirato moderno de KANTO y\l"
	.string "JOHTO.$"

Goldenrod_RadioTowerP10_NPC_7::
lock
faceplayer
checkitem ITEM_WISHING_PIECE
goto_if_eq VAR_RESULT, FALSE, Goldenrod_RadioTowerP10_NPC_7_Ala
msgbox Goldenrod_RadioTowerP10_NPC_7_Texto_4 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP10_NPC_7_Texto_5 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP10_NPC_7_Ala::
msgbox Goldenrod_RadioTowerP10_NPC_7_Texto_1 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP10_NPC_7_Texto_2 MSGBOX_NPC
delay 10
giveitem ITEM_WISHING_PIECE
delay 10
release
end

Goldenrod_RadioTowerP10_NPC_7_Texto_1:
	.string "La CENIZA SAGRADA es muy rara. Pero hay\n"
	.string "algunas partes del cuerpo de HO-OH\l"
	.string "extremadamente raras, que no quedaron\l"
	.string "reducidas a polvo.$"

Goldenrod_RadioTowerP10_NPC_7_Texto_2:
	.string "Es lo que se conoce como ALA ARCOÍRIS.\n"
	.string "Toma.$"

Goldenrod_RadioTowerP10_NPC_7_Texto_3:
.string "¡OBTUVISTE UNA ALA ARCOÍRIS!$"

Goldenrod_RadioTowerP10_NPC_7_Texto_4:
	.string "En nuestros estudios concluímos que la\n"
	.string "ALA ARCOÍRIS potencia en un 20% el\l"
	.string "ATAQUE y la DEFENSA de HO-OH.$"

Goldenrod_RadioTowerP10_NPC_7_Texto_5:
	.string "En la práctica es imposible, pero si\n"
	.string "tuvieras uno, sería una gran opción\l"
	.string "para este POKÉMON sagrado.$"

Goldenrod_RadioTowerP10_Llave_1::
msgbox Goldenrod_RadioTowerP10_Llave_1_Texto_1, MSGBOX_AUTOCLOSE
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 2, 8, 0x335, FALSE
setmetatile 2, 7, 0x335, FALSE
special DrawWholeMapView
delay 60
release
end

Goldenrod_RadioTowerP10_Llave_2::
msgbox Goldenrod_RadioTowerP10_Llave_1_Texto_1, MSGBOX_AUTOCLOSE
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 14, 11, 0x335, FALSE
setmetatile 14, 10, 0x335, FALSE
special DrawWholeMapView
delay 60
release
end

Goldenrod_RadioTowerP10_Llave_3::
msgbox Goldenrod_RadioTowerP10_Llave_1_Texto_1, MSGBOX_AUTOCLOSE
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 14, 7, 0x335, FALSE
setmetatile 14, 6, 0x335, FALSE
special DrawWholeMapView
delay 60
release
end

Goldenrod_RadioTowerP10_Llave_1_Texto_1:
.string "Usaste la LLAVE RADIO.$"





