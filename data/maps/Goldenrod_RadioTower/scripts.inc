Goldenrod_RadioTower_MapScripts::
	.byte 0

RadioTower_1::
lock     
faceplayer     
msgbox Goldenrod_RadioTower_Text_1, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTower_Text_1:
.string "Bienvenido a TORRE RADIO\n"
.string "caballero. La LOTERÍA POKÉMON aún\l"
.string "no está disponible.$"



RadioTower_2::
lock     
faceplayer     
msgbox Goldenrod_RadioTower_Text_2, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTower_Text_2:
.string "Bienvenido a TORRE RADIO\n"
.string "caballero. La LOTERÍA POKÉMON aún\l"
.string "no está disponible.$"



RadioTower_3::
lock     
faceplayer     
msgbox Goldenrod_RadioTower_Text_3, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTower_Text_3:
.string "La TORRE RADIO es grande, pero es\n"
.string "difícil perderse en ella, todo\l"
.string "está muy bien organizado.$"



RadioTower_4::
lock     
faceplayer     
msgbox Goldenrod_RadioTower_Text_4, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTower_Text_4:
.string "SILPH no ha tenido ningún problema\n"
.string "en proporcionarnos una legión de\l"
.string "GROWLITHE para nuestras unidades.\l"
.string "Gestos como ese ayudan mucho a\l"
.string "devolver la confianza entre\l"
.string "regiones.$"



RadioTower_5::
lock     
faceplayer     
msgbox Goldenrod_RadioTower_Text_5, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTower_Text_5:
.string "Hemos aprendido de lo que le\n"
.string "ocurrió a SILPH. Un asalto como el\l"
.string "que se dió allí no se dará en un\l"
.string "lugar como éste.\l"
.string "¡Y menos a manos de esos ROCKET!$"



RadioTower_6::
lock     
faceplayer     
msgbox Goldenrod_RadioTower_Text_6, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTower_Text_6:
.string "¿Has oído hablar de la ZONA\n"
.string "SAFARI?\l"
.string "Es genial, pero al parecer quieren\l"
.string "cerrarla pronto.$"



RadioTower_7::
lock     
faceplayer     
msgbox Goldenrod_RadioTower_Text_7, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTower_Text_7:
.string "Los programas de radio…\n"
.string "La HORA POKÉMON…\l"
.string "Las canciones de no sé qué DJ…\l"
.string "Todo eso es pura fachada, créeme.\l"
.string "En este edificio se trata con\l"
.string "cosas mucho más importantes que\l"
.string "todas esas ñoñerías que no sirven\l"
.string "para nada.$"



RadioTower_8::
lock     
faceplayer     
msgbox Goldenrod_RadioTower_Text_8, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTower_Text_8:
.string "Las acciones de TORRE RADIO\n"
.string "subirán exponencialmente en los\l"
.string "próximos dos años, créeme.\l"
.string "¡Invierte en ellas!$"



RadioTower_9::
lock     
faceplayer     
msgbox Goldenrod_RadioTower_Text_9, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTower_Text_9:
.string "Dicen que en KANTO hay una TIENDA\n"
.string "DE BICIS que las vende a 1 MILLÓN\l"
.string "de POKÉS.\l"
.string "Me gustaría ir allí a comprarme\l"
.string "una, eso me distinguiría de los\l"
.string "demás.$"



RadioTower_11::
lock     
faceplayer     
msgbox Goldenrod_RadioTower_Text_11, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTower_Text_11:
.string "A pesar de que JOHTO ganó la\n"
.string "guerra, KANTO está\l"
.string "tecnológicamente más desarrollada.\l"
.string "Este edificio es un claro ejemplo\l"
.string "de ello, pues imita gran parte de\l"
.string "la estética y recursos con los que\l"
.string "cuenta el mayor símbolo financiero\l"
.string "de KANTO: SILPH.$"



GoldenrodRadioTowerDocumento_100::
msgbox GoldenrodRadioTowerDocumento_Text_100, MSGBOX_SIGN   
end

GoldenrodRadioTowerDocumento_Text_100:
.string "PB RECEPCIÓN\n"
	.string "P1 VENTAS\l"
	.string "P2 PERSONAL\l"
	.string "P3 PRODUCCIÓN\l"
	.string "P4 OFICINA DEL DIRECTOR$"

Goldenrod_RadioTower_Encuentro_Atlas::
msgbox Goldenrod_RadioTower_Encuentro_Atlas_Texto_1 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_Encuentro_Atlas_Texto_2 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_Encuentro_Atlas_Texto_3 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_Encuentro_Atlas_Texto_4 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_Encuentro_Atlas_Texto_5 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_Encuentro_Atlas_Texto_6 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_Encuentro_Atlas_Texto_7 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_Encuentro_Atlas_Texto_8 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_Encuentro_Atlas_Texto_9 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_Encuentro_Atlas_Texto_10 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_Encuentro_Atlas_Texto_11 MSGBOX_AUTOCLOSE
release
end

Goldenrod_RadioTower_Encuentro_Atlas_Texto_1:
.string "ATLAS: ¡Ah, {PLAYER}!$"

Goldenrod_RadioTower_Encuentro_Atlas_Texto_2:
.string "Te veo en plena forma, aunque no\n"
	.string "me extraña, pasear por JOHTO\l"
	.string "sienta bien a todo el mundo.$"

Goldenrod_RadioTower_Encuentro_Atlas_Texto_3:
.string "Muchas cosas por hacer en CIUDAD\n"
	.string "TRIGAL, ¿verdad?\l"
	.string "Lo cierto es que ofrece más\l"
	.string "posibilidades que cualquier otra\l"
	.string "ciudad de KANTO, y es por eso, y\l"
	.string "tu gran servicio aportando ya\l"
	.string "datos de 2 POKÉMON FUERTE VÍNCULO,\l"
	.string "que GIOVANNI me ha pedido que te\l"
	.string "de esto.$"

Goldenrod_RadioTower_Encuentro_Atlas_Texto_4:
.string "(¡ACABAS DE FACTURAR 500000\n"
	.string "POKÉS!).$"

Goldenrod_RadioTower_Encuentro_Atlas_Texto_5:
.string "No estamos en AZULONA, aquí podras\n"
	.string "comprar y gastar FICHAS, un ROCKET\l"
	.string "de tu jerarquía debe tener acceso\l"
	.string "a toda la oferta de TRIGAL.$"

Goldenrod_RadioTower_Encuentro_Atlas_Texto_6:
.string "Dejando esto de lado, vayamos al\n"
	.string "motivo de nuestro pequeño\l"
	.string "encuentro aquí.\l"
	.string "Sígueme.$"

Goldenrod_RadioTower_Encuentro_Atlas_Texto_7:
.string "ATLAS: Bien, con esto podrás subir\n"
	.string "a los pisos superiores, y tener\l"
	.string "acceso al despacho del PRESIDENTE,\l"
	.string "que es por lo que estamos aquí.$"

Goldenrod_RadioTower_Encuentro_Atlas_Texto_8:
.string "Por el aspecto exterior, ya habrás\n"
	.string "deducido que este lugar es el\l"
	.string "equivalente a SILPH en JOHTO, aquí\l"
	.string "es donde se tomarán las decisiones\l"
	.string "más importantes que influirán en\l"
	.string "el futuro inmediato de KANTO y\l"
	.string "JOHTO.$"

Goldenrod_RadioTower_Encuentro_Atlas_Texto_9:
.string "GIOVANNI quiere que pongamos al\n"
	.string "día al PRESIDENTE sobre la\l"
	.string "situación real de KANTO, y así\l"
	.string "convencerle de convocar una gran\l"
	.string "reunión en la cual se tomen de una\l"
	.string "vez cartas en el asunto sobre qué\l"
	.string "hacer con el destino de estas dos\l"
	.string "regiones.$"

Goldenrod_RadioTower_Encuentro_Atlas_Texto_10:
.string "Tú hiciste posible la situación\n"
	.string "actual, derrotando a LANCE, es por\l"
	.string "ello que tu presencia es de vital\l"
	.string "importancia aquí.$"

Goldenrod_RadioTower_Encuentro_Atlas_Texto_11:
.string "Te espero en el despacho del\n"
	.string "PRESIDENTE, un placer volver a\l"
	.string "verte ADMIN.JEFE {PLAYER}.$"

Goldenrod_RadioTower_Encuentro_Atlas_Move_1:
emote_exclamation_mark
face_left
step_end

Goldenrod_RadioTower_Encuentro_Atlas_Move_2:
walk_up
face_right
step_end

Goldenrod_RadioTower_Encuentro_Atlas_Move_3:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

Goldenrod_RadioTower_Encuentro_Atlas_Move_4:
walk_in_place_left
step_end

Goldenrod_RadioTower_Encuentro_Atlas_Move_5:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
face_down
step_end

Goldenrod_RadioTower_Encuentro_Atlas_Move_6:
walk_in_place_down
step_end

Goldenrod_RadioTower_Encuentro_Atlas_Move_7:
walk_in_place_up
step_end

Goldenrod_RadioTower_Encuentro_Atlas_Move_8:
face_right
step_end

Goldenrod_RadioTower_Encuentro_Atlas_Move_9:
face_left
step_end

Goldenrod_RadioTower_Encuentro_Atlas_Move_10:
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Goldenrod_RadioTower_Encuentro_Atlas_Move_11:
face_up
step_end
