Sootopolis_Secret_Cave_MapScripts::
    map_script MAP_SCRIPT_ON_FRAME_TABLE, Sootopolis_Secret_Cave_OnFrame
	.byte 0

Sootopolis_Secret_Cave_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 236, CaveOfOrigin_Relato
	.2byte 0

CaveOfOrigin_Relato_Move_1:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

CaveOfOrigin_Relato_Move_2:
delay_16
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

CaveOfOrigin_Relato_Move_3:
delay_16
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

CaveOfOrigin_Relato_Move_4:
emote_exclamation_mark
step_end

CaveOfOrigin_Relato_Move_5:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

CaveOfOrigin_Relato_Move_6:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

CaveOfOrigin_Relato_Move_6.1:
walk_slow_up
walk_slow_up
step_end

CaveOfOrigin_Relato_Move_7:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

CaveOfOrigin_Relato_Move_8:
delay_8
face_down
delay_8
step_end

CaveOfOrigin_Relato_Move_9:
walk_slow_down
step_end

CaveOfOrigin_Relato_Move_10:
delay_8
face_left
delay_8
step_end

CaveOfOrigin_Relato_Move_11:
walk_in_place_left
step_end

CaveOfOrigin_Relato_Move_12:
walk_down
face_left
step_end

CaveOfOrigin_Relato_Move_13:
face_right
step_end

CaveOfOrigin_Relato_Move_14:
face_up
step_end

CaveOfOrigin_Relato_Move_15:
walk_in_place_up
step_end

CaveOfOrigin_Relato_Move_16:
walk_in_place_right
step_end

CaveOfOrigin_Relato_Move_17:
face_down
step_end

CaveOfOrigin_Relato::
lock
special SpawnCameraObject
applymovement 2, CaveOfOrigin_Relato_Move_3
applymovement OBJ_EVENT_ID_CAMERA, CaveOfOrigin_Relato_Move_1
waitmovement 0x0
special RemoveCameraObject
delay 15
playse SE_PIN
applymovement 2, CaveOfOrigin_Relato_Move_4
waitmovement 0x0
msgbox CaveOfOrigin_Relato_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox CaveOfOrigin_Relato_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox CaveOfOrigin_Relato_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox CaveOfOrigin_Relato_Texto_3.1 MSGBOX_AUTOCLOSE
applymovement 2, CaveOfOrigin_Relato_Move_6.1
waitmovement 0x0
msgbox CaveOfOrigin_Relato_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox CaveOfOrigin_Relato_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox CaveOfOrigin_Relato_Texto_6 MSGBOX_AUTOCLOSE
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, CaveOfOrigin_Relato_Move_6
waitmovement 0x0
special RemoveCameraObject
delay 20
fadescreen 1
delay 50
playse SE_THUNDERSTORM
delay 15
msgbox CaveOfOrigin_Relato_Texto_7 MSGBOX_AUTOCLOSE
delay 15
playse SE_M_HYDRO_PUMP
msgbox CaveOfOrigin_Relato_Texto_8 MSGBOX_AUTOCLOSE
delay 15
playse SE_THUNDER
msgbox CaveOfOrigin_Relato_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox CaveOfOrigin_Relato_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox CaveOfOrigin_Relato_Texto_11 MSGBOX_AUTOCLOSE
delay 15
playse SE_THUNDER
msgbox CaveOfOrigin_Relato_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox CaveOfOrigin_Relato_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox CaveOfOrigin_Relato_Texto_14 MSGBOX_AUTOCLOSE
delay 15
playse SE_M_WHIRLPOOL
msgbox CaveOfOrigin_Relato_Texto_15 MSGBOX_AUTOCLOSE
delay 15
playse SE_THUNDER
msgbox CaveOfOrigin_Relato_Texto_16 MSGBOX_AUTOCLOSE
delay 15
playse SE_THUNDER
msgbox CaveOfOrigin_Relato_Texto_17 MSGBOX_AUTOCLOSE
delay 15
msgbox CaveOfOrigin_Relato_Texto_18 MSGBOX_AUTOCLOSE
delay 15
playse SE_THUNDER
msgbox CaveOfOrigin_Relato_Texto_19 MSGBOX_AUTOCLOSE
delay 15
playse SE_RAIN_STOP
waitse
delay 10
playse SE_THUNDERSTORM
delay 15
playse SE_ORB
msgbox CaveOfOrigin_Relato_Texto_20 MSGBOX_AUTOCLOSE
playse SE_RAIN_STOP
waitse
delay 10
playse SE_THUNDER
waitse
playse SE_THUNDERSTORM
msgbox CaveOfOrigin_Relato_Texto_21 MSGBOX_AUTOCLOSE
playse SE_M_THUNDER_WAVE
msgbox CaveOfOrigin_Relato_Texto_22 MSGBOX_AUTOCLOSE
msgbox CaveOfOrigin_Relato_Texto_23 MSGBOX_AUTOCLOSE
playse SE_RAIN_STOP
waitse
fadeoutbgm 0
playse 0
delay 60
playse MUS_RAYQUAZA_APPEARS
delay 60
msgbox CaveOfOrigin_Relato_Texto_24 MSGBOX_AUTOCLOSE
msgbox CaveOfOrigin_Relato_Texto_25 MSGBOX_AUTOCLOSE
fadeoutbgm 0
playse 0
delay 20
playse MUS_VS_KYOGRE_GROUDON
delay 20
msgbox CaveOfOrigin_Relato_Texto_26 MSGBOX_AUTOCLOSE
delay 15
msgbox CaveOfOrigin_Relato_Texto_27 MSGBOX_AUTOCLOSE
delay 15
msgbox CaveOfOrigin_Relato_Texto_28 MSGBOX_AUTOCLOSE
delay 15
playse SE_M_HYDRO_PUMP
msgbox CaveOfOrigin_Relato_Texto_29 MSGBOX_AUTOCLOSE
delay 15
playse SE_NOT_EFFECTIVE
msgbox CaveOfOrigin_Relato_Texto_30 MSGBOX_AUTOCLOSE
delay 15
playse SE_INTRO_BLAST
msgbox CaveOfOrigin_Relato_Texto_31 MSGBOX_AUTOCLOSE
delay 15
playse SE_FAINT
msgbox CaveOfOrigin_Relato_Texto_32 MSGBOX_AUTOCLOSE
fadeoutbgm 0
playse 0
delay 20
playse 560
delay 20
msgbox CaveOfOrigin_Relato_Texto_33 MSGBOX_AUTOCLOSE
msgbox CaveOfOrigin_Relato_Texto_34 MSGBOX_AUTOCLOSE
fadeoutbgm 0
playse 0
fadescreen 0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, CaveOfOrigin_Relato_Move_7
waitmovement 0x0
special RemoveCameraObject
msgbox CaveOfOrigin_Relato_Texto_35 MSGBOX_AUTOCLOSE
msgbox CaveOfOrigin_Relato_Texto_36 MSGBOX_AUTOCLOSE
msgbox CaveOfOrigin_Relato_Texto_37 MSGBOX_AUTOCLOSE
applymovement 2, CaveOfOrigin_Relato_Move_8
waitmovement 0x0
msgbox CaveOfOrigin_Relato_Texto_38 MSGBOX_AUTOCLOSE
delay 10
msgbox CaveOfOrigin_Relato_Texto_39 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, CaveOfOrigin_Relato_Move_9
waitmovement 0x0
msgbox CaveOfOrigin_Relato_Texto_40 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, CaveOfOrigin_Relato_Move_4
waitmovement 0x0
msgbox CaveOfOrigin_Relato_Texto_41 MSGBOX_AUTOCLOSE
delay 15
msgbox CaveOfOrigin_Relato_Texto_42 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, CaveOfOrigin_Relato_Move_4
waitmovement 0x0
msgbox CaveOfOrigin_Relato_Texto_43 MSGBOX_AUTOCLOSE
applymovement 2, CaveOfOrigin_Relato_Move_10
waitmovement 0x0
msgbox CaveOfOrigin_Relato_Texto_44 MSGBOX_AUTOCLOSE
applymovement 2, CaveOfOrigin_Relato_Move_11
waitmovement 0x0
msgbox CaveOfOrigin_Relato_Texto_45 MSGBOX_AUTOCLOSE
msgbox CaveOfOrigin_Relato_Texto_46 MSGBOX_AUTOCLOSE
msgbox CaveOfOrigin_Relato_Texto_47 MSGBOX_AUTOCLOSE
msgbox CaveOfOrigin_Relato_Texto_48 MSGBOX_AUTOCLOSE
applymovement 1, CaveOfOrigin_Relato_Move_13
applymovement 2, CaveOfOrigin_Relato_Move_12
waitmovement 0x0
msgbox CaveOfOrigin_Relato_Texto_49 MSGBOX_AUTOCLOSE
delay 15
msgbox CaveOfOrigin_Relato_Texto_50 MSGBOX_AUTOCLOSE
applymovement 1, CaveOfOrigin_Relato_Move_14
waitmovement 0x0
msgbox CaveOfOrigin_Relato_Texto_51 MSGBOX_AUTOCLOSE
applymovement 1, CaveOfOrigin_Relato_Move_15
waitmovement 0x0
msgbox CaveOfOrigin_Relato_Texto_52 MSGBOX_AUTOCLOSE
applymovement 1, CaveOfOrigin_Relato_Move_13
waitmovement 0x0
msgbox CaveOfOrigin_Relato_Texto_53 MSGBOX_AUTOCLOSE
applymovement 1, CaveOfOrigin_Relato_Move_16
waitmovement 0x0
msgbox CaveOfOrigin_Relato_Texto_54 MSGBOX_AUTOCLOSE
delay 20
msgbox CaveOfOrigin_Relato_Texto_55 MSGBOX_AUTOCLOSE
applymovement 2, CaveOfOrigin_Relato_Move_17
waitmovement 0x0
msgbox CaveOfOrigin_Relato_Texto_56 MSGBOX_AUTOCLOSE
applymovement 2, CaveOfOrigin_Relato_Move_18
waitmovement 0x0
msgbox CaveOfOrigin_Relato_Texto_57 MSGBOX_AUTOCLOSE
applymovement 1, CaveOfOrigin_Relato_Move_20
applymovement 2, CaveOfOrigin_Relato_Move_19
waitmovement 0x0
delay 15
setflag FLAG_HOENN_1
setvar VAR_UNUSED_0x40F7, 236
playse SE_EXIT
delay 15
warpsilent MAP_SLATEPORT_CITY, 18, 58
delay 120
release
end

CaveOfOrigin_Relato_Move_20:
delay_16
face_down
step_end

CaveOfOrigin_Relato_Move_19:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

CaveOfOrigin_Relato_Move_18:
walk_slow_down
step_end

CaveOfOrigin_Relato_Texto_1:
	.string "ANDRA: ¡Oh! Esta sala transmite un\n"
	.string "aura… solemne.$"

CaveOfOrigin_Relato_Texto_2:
	.string "GALANO: Fíjate en estas antiguas\n"
	.string "escrituras, su origen data de tiempos\l"
	.string "ancestrales. Nadie puede imaginar cómo\l"
	.string "sería HOENN en ese entonces. A pesar de\l"
	.string "ello, los protagonistas de esta historia\l"
	.string "han pasado a la eternidad.$"

CaveOfOrigin_Relato_Texto_3:
	.string "ANDRA: Hay algo grabado en letras más\n"
	.string "grandes, ¿es el título del relato?$"

CaveOfOrigin_Relato_Texto_3.1:
	.string "GALANO: Así es, léelo.$"

CaveOfOrigin_Relato_Texto_4:
	.string "{PAUSE 10}…{PAUSE 10}…{PAUSE 10}$"

CaveOfOrigin_Relato_Texto_5:
	.string "ANDRA: -Será quien desglose el\n"
	.string "funcionamiento del azar cósmico quién\l"
	.string "logre prosperar. Este relato narra cómo\l"
	.string "un mortal cruzó los límites aparentes.-$"

CaveOfOrigin_Relato_Texto_6:
	.string "{PAUSE 10}…{PAUSE 10}…{PAUSE 10}$"

CaveOfOrigin_Relato_Texto_7:
	.string "'…entonces el cielo se tiñó de negro.\n"
	.string "Rayos, truenos y una incesante\l"
	.string "tormenta como jamás habíamos visto,\l"
	.string "sacudían HOENN{PAUSE 10}…{PAUSE 10}$"

CaveOfOrigin_Relato_Texto_8:
	.string "…la potencia de KYOGRE era legendaria,\n"
	.string "pero verlo en directo causaba\l"
	.string "auténtico estupor. Bajo el diluvio\l"
	.string "constante, sus movimientos acuáticos\l"
	.string "no solo fulminaban a otros tipos de\l"
	.string "POKÉMON de un solo golpe{PAUSE 10}…{PAUSE 10}$"

CaveOfOrigin_Relato_Texto_9:
	.string "…también acababa con la mayoría de sus\n"
	.string "semejantes acuáticos al primer\l"
	.string "contacto, algo que nos hizo ver\l"
	.string "claramente la diferencia entre los\l"
	.string "POKÉMON que criábamos y una criatura\l"
	.string "de origen sagrado.$"

CaveOfOrigin_Relato_Texto_10:
	.string "La situación era cada vez peor, el nivel\n"
	.string "general del agua subía más y más, si la\l"
	.string "furia de KYOGRE continuaba, toda la\l"
	.string "tierra firme en HOENN quedaría\l"
	.string "engullida por siglos.$"

CaveOfOrigin_Relato_Texto_11:
	.string "Sin embargo… hubo un ENTRENADOR… que\n"
	.string "osó retar al POKÉMON LEGENDARIO. Lo\l"
	.string "retó además en el terreno en el que\l"
	.string "KYOGRE era imbatible: los movimientos\l"
	.string "acuáticos.$"

CaveOfOrigin_Relato_Texto_12:
	.string "Para ello se valió de un MILOTIC,\n"
	.string "conocido por ser el más extraordinario\l"
	.string "de los POKÉMON TIPO AGUA que nosotros\l"
	.string "conocíamos en HOENN.$"

CaveOfOrigin_Relato_Texto_13:
	.string "Sus virtudes especiales, aunque\n"
	.string "excepcionales a nuestros ojos, seguían\l"
	.string "siendo muy insuficientes comparadas\l"
	.string "con la brutalidad de un KYOGRE que se\l"
	.string "alejaba de todo lo que habíamos visto{PAUSE 10}…{PAUSE 10}$"

CaveOfOrigin_Relato_Texto_14:
	.string "…sin embargo, el POKÉMON había sido\n"
	.string "entrenado hasta tal extremo, que fue\l"
	.string "capaz de acortar la brecha genética de\l"
	.string "forma que, en ese momento…ese lugar\l"
	.string "concreto… ese MILOTIC parecía otro\l"
	.string "POKÉMON LEGENDARIO más y no un mero\l"
	.string "mortal como nosotros{PAUSE 10}…{PAUSE 10}$"

CaveOfOrigin_Relato_Texto_15:
	.string "…si antes ver cómo POKÉMON del propio\n"
	.string "TIPO AGUA caían de un solo golpe ante\l"
	.string "KYOGRE causaba un profundo respeto,\l"
	.string "que ese MILOTIC fuera capaz de encajar\l"
	.string "esos HYDROBOMBA y SALPICAR de KYOGRE\l"
	.string "con cierta solvencia, era igualmente\l"
	.string "digno de asombro y admiración.$"

CaveOfOrigin_Relato_Texto_16:
	.string "Así las cosas, el combate se sumió en un\n"
	.string "incesante intercambio de movimientos\l"
	.string "acuáticos, la resistencia de MILOTIC\l"
	.string "rivalizaba con la potencia de KYOGRE. El\l"
	.string "uno y el otro disponían de medios para\l"
	.string "recuperar su salud, convirtiendo el\l"
	.string "combate por el futuro de HOENN en una\l"
	.string "lucha épica hasta la extenuación.$"

CaveOfOrigin_Relato_Texto_17:
	.string "Con el paso de las horas, lo que para\n"
	.string "KYOGRE era sorpresa e incluso cierta\l"
	.string "curiosidad por la aparición de esta\l"
	.string "inesperada oposición, derivó en rabia y\l"
	.string "frustración.$"

CaveOfOrigin_Relato_Texto_18:
	.string "Que un MILOTIC fuera capaz de reducir\n"
	.string "el duelo a una cuestión de voluntades,\l"
	.string "tal y como ocurría con GROUDON,\l"
	.string "suponía una deshonra para KYOGRE y su\l"
	.string "estatus de rey de los mares.$"

CaveOfOrigin_Relato_Texto_19:
	.string "Llegado al límite de su paciencia,\n"
	.string "recurrió a algo que solo su gran rival le\l"
	.string "había obligado a hacer: volver a su\l"
	.string "FORMA PRIMIGENIA.$"

CaveOfOrigin_Relato_Texto_20:
	.string "Con aún más potencia y resistencia si\n"
	.string "cabía, la cosa pintaba cada vez peor, y\l"
	.string "la realidad superó el peor de los\l"
	.string "presagios… decidió romper el código no\l"
	.string "escrito entre ambos POKÉMON acuáticos\l"
	.string "y… usar TRUENO.$"

CaveOfOrigin_Relato_Texto_21:
	.string "Una tremenda sacudida iluminó el cielo,\n"
	.string "que se tornó blanco. La descarga\l"
	.string "eléctrica, que debió sentirse en\l"
	.string "kilómetros a la redonda, dejó sin\l"
	.string "sentidos a todos los allí presentes,\l"
	.string "yendo directamente a por su objetivo:\l"
	.string "ese MILOTIC que se había atrevido a\l"
	.string "tanto.$"

CaveOfOrigin_Relato_Texto_22:
	.string "El propio acto de no haber caído ipso\n"
	.string "facto era ya un milagro incluso para un\l"
	.string "POKÉMON excepcional y… aunque\l"
	.string "paralizado y en un estado en el que\l"
	.string "cualquier MAGIKARP salvaje podría\l"
	.string "rematarlo, ese MILOTIC aún seguía en\l"
	.string "pie{PAUSE 10}…{PAUSE 10}$"

CaveOfOrigin_Relato_Texto_23:
	.string "…pero…todo eso era ya irrelevante ante\n"
	.string "la situación. El combate estaba\l"
	.string "decidido, lo que primero fue sorpresa y\l"
	.string "luego rabia, ahora se había convertido\l"
	.string "en respeto: KYOGRE se dispondría a\l"
	.string "darle el final que merece.$"

CaveOfOrigin_Relato_Texto_24:
	.string "Fue entonces cuando ocurrió… algunos\n"
	.string "dicen que fue la descarga eléctrica,\l"
	.string "otros la incesante fe de su ENTRENADOR,\l"
	.string "lo cierto es que el cóctel que ahí se\l"
	.string "formó hizo posible que ese MILOTIC se\l"
	.string "transformara una última vez.$"

CaveOfOrigin_Relato_Texto_25:
	.string "Como si de una respuesta de la propia\n"
	.string "naturaleza se tratara, en sus deseos\l"
	.string "por mantener a toda costa ese estado\l"
	.string "de homeostasis…esta entregó sin\l"
	.string "vacilar lo mejor de sus recursos para\l"
	.string "ganar la batalla por HOENN.$"

CaveOfOrigin_Relato_Texto_26:
	.string "Viendo esto, KYOGRE se dispuso a\n"
	.string "asegurar la victoria, lanzando un\l"
	.string "TRUENO aún más potente si cabe, pero…\l"
	.string "no solo no afectó a MILOTIC, este\l"
	.string "absorbió toda su energía y se recuperó\l"
	.string "con ella: se había vuelto inmune a los\l"
	.string "movimientos eléctricos.$"

CaveOfOrigin_Relato_Texto_27:
	.string "De alguna forma la traumática\n"
	.string "experiencia que fue recibir ese primer\l"
	.string "relámpago divino, le había provocado\l"
	.string "una tremenda adaptación en tiempo\l"
	.string "récord. Ahora, el combate estaba en el\l"
	.string "mismo punto que horas atrás.$"

CaveOfOrigin_Relato_Texto_28:
	.string "Pero… algo había cambiado. El\n"
	.string "incremento de poder de MILOTIC, a\l"
	.string "diferencia del caótico derroche de\l"
	.string "recursos exhibidos por la FORMA\l"
	.string "PRIMIGENIA de KYOGRE, estaba\l"
	.string "cuidadosamente medido, respondía a una\l"
	.string "clara necesidad.$"

CaveOfOrigin_Relato_Texto_29:
	.string "La potencia de KYOGRE PRIMIGENIO era\n"
	.string "imbatible, a pesar de ello el renovado\l"
	.string "MILOTIC había logrado una parecida al\l"
	.string "KYOGRE anterior a su FORMA\l"
	.string "PRIMIGENIA{PAUSE 10}…{PAUSE 10}$"

CaveOfOrigin_Relato_Texto_30:
	.string "…pero lo más impresionante fue ver su\n"
	.string "resistencia: había excedido incluso la\l"
	.string "potencia del propio KYOGRE PRIMIGENIO.$"

CaveOfOrigin_Relato_Texto_31:
	.string "Parecía un engaño para nuestros\n"
	.string "sentidos, un PULSO PRIMIGENIO capaz de\l"
	.string "arrasar todo a su paso, que incluso\l"
	.string "abriría brecha en aquel MILOTIC al\l"
	.string "inicio del duelo, era ahora contenido\l"
	.string "por un POKÉMON que se hizo uno con el\l"
	.string "entorno.$"

CaveOfOrigin_Relato_Texto_32:
	.string "El duelo de voluntades ya no era tal:\n"
	.string "KYOGRE, falto de exposición ante la\l"
	.string "adversidad, había perdido la batalla, y\l"
	.string "regresó a las profundidades del mar{PAUSE 10}…{PAUSE 10}$"

CaveOfOrigin_Relato_Texto_33:
	.string "…con ello, HOENN volvió a su estado\n"
	.string "natural. Desde ese entonces,\l"
	.string "ARRECÍPOLIS mantiene una estrecha\l"
	.string "conexión con los POKÉMON TIPO AGUA,\l"
	.string "especialmente con FEEBAS y su línea\l"
	.string "evolutiva.$"

CaveOfOrigin_Relato_Texto_34:
	.string "En cuanto al singular MILOTIC y su\n"
	.string "LEGENDARIO ENTRENADOR… prosiguieron\l"
	.string "su viaje, en busca de nuevos retos,\l"
	.string "jamás se volvió a saber de ellos{PAUSE 10}…{PAUSE 10}$"

CaveOfOrigin_Relato_Texto_35:
	.string "GALANO: ¿Qué te ha parecido?$"

CaveOfOrigin_Relato_Texto_36:
	.string "ANDRA: {PAUSE 15}…{PAUSE 15}$"

CaveOfOrigin_Relato_Texto_37:
	.string "Aguantar ese TRUENO fue lo que marcó\n"
	.string "toda la diferencia. Aunque sin saberlo,\l"
	.string "ese POKÉMON se preparó toda una vida\l"
	.string "para ese momento, esa oportunidad… y\l"
	.string "estuvo a la altura.$"

CaveOfOrigin_Relato_Texto_38:
	.string "De algún modo, me ha recordado a la\n"
	.string "leyenda sobre el DRAGÓN SAGRADO de\l"
	.string "JOHTO.$"

CaveOfOrigin_Relato_Texto_39:
	.string "GALANO: Hmmm{PAUSE 15}…{PAUSE 15}$"

CaveOfOrigin_Relato_Texto_40:
	.string "ANDRA: Sí, pero… esta parece más\n"
	.string "cercana. No sabría cómo decirlo, sería\l"
	.string "más accesible, algo que a día de hoy\l"
	.string "podría darse.$"

CaveOfOrigin_Relato_Texto_41:
	.string "GALANO: ¡¿Has visto cosas similares a lo\n"
	.string "aquí descrito?!$"

CaveOfOrigin_Relato_Texto_42:
	.string "ANDRA: No en HOENN, pero lo que ahí\n"
	.string "está narrando coincide plenamente con\l"
	.string "lo que en JOHTO llaman FUERTE VÍNCULO.$"

CaveOfOrigin_Relato_Texto_43:
	.string "GALANO: ¡Oh! ¿Ese CROBAT tan especial\n"
	.string "es uno de ellos entonces?$"

CaveOfOrigin_Relato_Texto_44:
	.string "ANDRA: Así es, ese MILOTIC del que\n"
	.string "habla la leyenda pudo haber\l"
	.string "experimentado lo mismo que mi CROBAT.$"

CaveOfOrigin_Relato_Texto_45:
	.string "Le agradezco mucho que me haya\n"
	.string "enseñado esto, no ha hecho más que\l"
	.string "reafirmar mi punto de vista. Ahora sé\l"
	.string "que mi búsqueda no será en vano.$"

CaveOfOrigin_Relato_Texto_46:
	.string "{PAUSE 10}…{PAUSE 10}…{PAUSE 10}$"

CaveOfOrigin_Relato_Texto_47:
	.string "Una última cosa.$"

CaveOfOrigin_Relato_Texto_48:
	.string "GALANO: ¿Sí?$"

CaveOfOrigin_Relato_Texto_49:
	.string "ANDRA: Esta leyenda es extraordinaria,\n"
	.string "mucho más inspiradora que el clásico\l"
	.string "duelo entre GROUDON y KYOGRE. Podría\l"
	.string "servir de ejemplo para todos esos\l"
	.string "nuevos entrenadores que aspiran a\l"
	.string "llegar alto.$"

CaveOfOrigin_Relato_Texto_50:
	.string "¿No convendría que toda HOENN supiera\n"
	.string "de ella?$"

CaveOfOrigin_Relato_Texto_51:
	.string "GALANO: Tienes razón ANDRA, pero… tú\n"
	.string "estás muy alejada de la realidad actual.\l"
	.string "No solo de HOENN, hasta donde sé de\l"
	.string "todo el MUNDO POKÉMON.$"

CaveOfOrigin_Relato_Texto_52:
	.string "Actualmente vende lo LEGENDARIO, lo\n"
	.string "especial por gracia divina. Los valores\l"
	.string "que hicieron grande a ese MILOTIC no\l"
	.string "son tomados en serio hoy en día.$"

CaveOfOrigin_Relato_Texto_53:
	.string "Esta leyenda no pasaría de ser\n"
	.string "considerada un cuento para\l"
	.string "niños…demasiado pesado para ser\l"
	.string "contado, demasiado fantasioso incluso\l"
	.string "para ellos.$"

CaveOfOrigin_Relato_Texto_54:
	.string "Tu mentalidad de realmente creer que\n"
	.string "eso es posible es la que marca la\l"
	.string "diferencia, pero fuera no encontrarás\l"
	.string "eso.$"

CaveOfOrigin_Relato_Texto_55:
	.string "Incluso para mí, que soy el LÍDER más\n"
	.string "fuerte de HOENN, me es difícil de creer,\l"
	.string "¿qué podrías pedirle al ENTRENADOR de\l"
	.string "ruta promedio?$"

CaveOfOrigin_Relato_Texto_56:
	.string "ANDRA: Mmm… ya veo… tiene sentido. No\n"
	.string "es la primera región en la que ocurre\l"
	.string "esto, solo espero que esta visión no\l"
	.string "llegue también a JOHTO{PAUSE 10}…{PAUSE 10}$"

CaveOfOrigin_Relato_Texto_57:
	.string "Ha sido un placer poder visitar este\n"
	.string "lugar sagrado.$"