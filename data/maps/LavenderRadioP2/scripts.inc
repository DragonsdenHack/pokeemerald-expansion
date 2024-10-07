LavenderRadioP2_MapScripts::
	.byte 0



LavenderRadioP2_1::
lock     
faceplayer     
msgbox LavenderRadioP2_Text_1, MSGBOX_DEFAULT
release     
end

LavenderRadioP2_Text_1:
.string "La RADIO POKÉMON es solo la fachada,\n"
.string "pero debo admitir que es divertida,\l"
.string "entretendrá mucho a todos los\l"
.string "ciudadanos a partir de ahora.$"



LavenderRadioP2_2::
lock     
faceplayer     
msgbox LavenderRadioP2_Text_2, MSGBOX_DEFAULT
release     
end

LavenderRadioP2_Text_2:
.string "¿Crees que seremos capaces de\n"
.string "controlar el poder que estamos\l"
.string "creando? Si ese tal MEWTWO escapó hace\l"
.string "años, en la actualidad, con un poder\l"
.string "mayor, no sé{PAUSE 5}…{PAUSE 5}$"





LavenderRadioP2_3::
lock     
faceplayer     
msgbox LavenderRadioP2_Text_3, MSGBOX_DEFAULT
release     
end

LavenderRadioP2_Text_3:
.string "A veces la realidad supera a la ficción.\n"
.string "Ni en las más locas teorías de algunos\l"
.string "podrían imaginar que el TEAM ROCKET\l"
.string "está trabajando en la TORRE RADIO de\l"
.string "PUEBLO LAVANDA. ¡Lo mejor es que\l"
.string "usamos como excusa nuestra propia\l"
.string "invasión a SILPH para que nadie meta\l"
.string "sus narices en los pisos superiores!$"





LavenderRadioP2_4::
lock     
faceplayer     
msgbox LavenderRadioP2_Text_4, MSGBOX_DEFAULT
release     
end

LavenderRadioP2_Text_4:
.string "Vamos a crear un POKÉMON tan poderoso\n"
.string "que todas las regiones nos temerán, sé\l"
.string "que es para defendernos ante un\l"
.string "ataque pero{PAUSE 25}…{PAUSE 25} ¡con semejante arma\l"
.string "podríamos invadir cualquier región!$"





LavenderRadioP2_5::
lock     
faceplayer     
msgbox LavenderRadioP2_Text_5, MSGBOX_DEFAULT
release     
end

LavenderRadioP2_Text_5:
.string "Las desventajas de un cambio pesan más\n"
.string "que las ventajas, induciendo un sesgo\l"
.string "que favorece el statu quo. Esto no ha\l"
.string "impedido que la fantástica obra de\l"
.string "ingeniería sobre la que estás haya\l"
.string "sido posible.$"





LavenderRadioP2_6::
lock     
faceplayer     
msgbox LavenderRadioP2_Text_6, MSGBOX_DEFAULT
release     
end

LavenderRadioP2_Text_6:
.string "Todo el mundo quiere vivir a expensas\n"
.string "del estado, lo que olvidan es que el\l"
.string "estado vive a expensas de todo el\l"
.string "mundo.$"




LavenderRadioP2_7::
lock     
faceplayer     
msgbox LavenderRadioP2_Text_7, MSGBOX_DEFAULT
release     
end

LavenderRadioP2_Text_7:
.string "Los peor parados en todo este proceso\n"
.string "han sido los CUBONE que habitaban la\l"
.string "antigua torre. Por suerte tienen el\l"
.string "TÚNEL ROCA al norte, un buen hábitat\l"
.string "para que puedan empezar de 0.$"


LavenderRadioP2Documento_100::
msgbox LavenderRadioP2Documento_Text_100, MSGBOX_SIGN   
end

LavenderRadioP2Documento_Text_100:
.string "3ro Eficiencia & Rendimiento$"



LavenderRadioP2Documento_101::
msgbox LavenderRadioP2Documento_Text_101, MSGBOX_SIGN   
end

LavenderRadioP2Documento_Text_101:
.string "-Una vez que te acostumbras, es difícil\n"
	.string "rendirse. Mejor permanecer\l"
	.string "hambriento-.$"

LavenderRadioP2_Evento_Fuji::
lock
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP2_Evento_Fuji_Move_2
applymovement 9, LavenderRadioP2_Evento_Fuji_Move_1
waitmovement 0x0
msgbox LavenderRadioP2_Evento_Fuji_Texto_1 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP2_Evento_Fuji_Texto_2 MSGBOX_AUTOCLOSE
applymovement 9, LavenderRadioP2_Evento_Fuji_Move_3
waitmovement 0x0
msgbox LavenderRadioP2_Evento_Fuji_Texto_3 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP2_Evento_Fuji_Texto_4 MSGBOX_AUTOCLOSE
applymovement 9, LavenderRadioP2_Evento_Fuji_Move_4
waitmovement 0x0
msgbox LavenderRadioP2_Evento_Fuji_Texto_5 MSGBOX_AUTOCLOSE
applymovement 9, LavenderRadioP2_Evento_Fuji_Move_5
waitmovement 0x0
msgbox LavenderRadioP2_Evento_Fuji_Texto_6 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderRadioP2_Evento_Fuji_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderRadioP2_Evento_Fuji_Texto_8 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP2_Evento_Fuji_Texto_9 MSGBOX_AUTOCLOSE
applymovement 9, LavenderRadioP2_Evento_Fuji_Move_6
waitmovement 0x0
msgbox LavenderRadioP2_Evento_Fuji_Texto_10 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
fadescreen 1
delay 20
removeobject 9
fadescreen 0
clearflag FLAG_HOENN_74
clearflag FLAG_HOENN_75
clearflag FLAG_HOENN_76
clearflag FLAG_HOENN_77
clearflag FLAG_HOENN_78
clearflag FLAG_HOENN_79
clearflag FLAG_HOENN_90
clearflag FLAG_HOENN_91
clearflag FLAG_HOENN_92
clearflag FLAG_HOENN_93
clearflag FLAG_HOENN_94
clearflag FLAG_HOENN_95
clearflag FLAG_HOENN_96
clearflag FLAG_HOENN_97
clearflag FLAG_HOENN_98
clearflag FLAG_HOENN_99
setflag FLAG_HOENN_640
setflag FLAG_HOENN_641
setflag FLAG_HOENN_642
setflag FLAG_HOENN_643
setflag FLAG_HOENN_644
setflag FLAG_HOENN_645
setflag FLAG_HOENN_646
setflag FLAG_HOENN_647
setflag FLAG_HOENN_648
setflag FLAG_HOENN_649
clearflag FLAG_NUEVA_165
clearflag FLAG_NUEVA_136
clearflag FLAG_NUEVA_133
clearflag FLAG_NUEVA_137
clearflag FLAG_NUEVA_144
clearflag FLAG_NUEVA_147
clearflag FLAG_NUEVA_152
clearflag FLAG_NUEVA_153
clearflag FLAG_NUEVA_154
clearflag FLAG_NUEVA_155
clearflag FLAG_NUEVA_156
clearflag FLAG_NUEVA_159
clearflag FLAG_NUEVA_511
clearflag FLAG_NUEVA_512
clearflag FLAG_NUEVA_513
clearflag FLAG_NUEVA_514
clearflag FLAG_NUEVA_632
setvar VAR_UNUSED_0x40F7, 208
release
end

LavenderRadioP2_Evento_Fuji_Move_6:
walk_slow_right
step_end

LavenderRadioP2_Evento_Fuji_Move_5:
walk_in_place_right
step_end

LavenderRadioP2_Evento_Fuji_Move_4:
face_right
step_end

LavenderRadioP2_Evento_Fuji_Move_3:
face_up
step_end

LavenderRadioP2_Evento_Fuji_Move_1:
walk_slow_down
walk_slow_right
step_end

LavenderRadioP2_Evento_Fuji_Move_2:
face_left
step_end

LavenderRadioP2_Evento_Fuji_Texto_1:
.string "FUJI: ¡Oh! Qué pronto has llegado,\n"
	.string "{PLAYER}, ANDRA aún no ha llegado.$"

LavenderRadioP2_Evento_Fuji_Texto_2:
.string "Yo debería estar en el nuevo\n"
	.string "CEMENTERIO, tengo que recolocar todas\l"
	.string "las tumbas. Quería dar una vuelta por\l"
	.string "aquí, y comparar el nuevo lugar con el\l"
	.string "antiguo.$"

LavenderRadioP2_Evento_Fuji_Texto_3:
.string "La TORRE RADIO ha conservado las\n"
	.string "medidas y pisos originales de TORRE\l"
	.string "LAVANDA. Aunque solo será perceptible\l"
	.string "para los que trabajemos aquí, el resto\l"
	.string "no podrá pasar de la primera planta, y\l"
	.string "con motivo{PAUSE 5}…{PAUSE 5}$"

LavenderRadioP2_Evento_Fuji_Texto_4:
.string "BILL y ELM conocen mejor su\n"
	.string "funcionamiento. Al parecer estas ondas\l"
	.string "de radio rastrean posibles mutaciones,\l"
	.string "el 99,9% perjudiciales para un POKÉMON\l"
	.string "y su rendimiento. Aquí nos\l"
	.string "encargaremos de seleccionar ese 0,1%\l"
	.string "restante, el que nos puede ser útil\l"
	.string "para producir incrementos en el poder\l"
	.string "de un POKÉMON{PAUSE 5}…{PAUSE 5}$"

LavenderRadioP2_Evento_Fuji_Texto_5:
.string "Este tipo de cuestiones a mí ya no me\n"
	.string "incumben, tuve suficiente con MEWTWO.$"

LavenderRadioP2_Evento_Fuji_Texto_6:
.string "Solo espero poder ocuparme de las almas\n"
	.string "desplazadas. Al fin veo atisbos de paz\l"
	.string "y tranquilidad en PUEBLO LAVANDA,\l"
	.string "puede que esta torre traiga una\l"
	.string "inesperada estabilidad, aunque la\l"
	.string "mayoría desconozca su propósito.$"

LavenderRadioP2_Evento_Fuji_Texto_7:
.string "{PAUSE 5}…{PAUSE 5}$"

LavenderRadioP2_Evento_Fuji_Texto_8:
.string "Me haría especial ilusión que visitases\n"
	.string "el nuevo CEMENTERIO, al sur del pueblo.$"

LavenderRadioP2_Evento_Fuji_Texto_9:
.string "Según me ha dicho BILL, aún queda para\n"
	.string "la inauguración. Lo cierto es que me\l"
	.string "gustaría que hicieras algo por mi, creo\l"
	.string "que eres el más indicado.$"

LavenderRadioP2_Evento_Fuji_Texto_10:
.string "Te espero en el CEMENTERIO, al sur del\n"
	.string "pueblo, no tiene pérdida, {PLAYER}.$"


Radio_P2_Barrera::
compare VAR_UNUSED_0x40F7, 210
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, Radio_P2_Barrera_Move_1
waitmovement 0x0
msgbox Radio_P2_Barrera_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Radio_P2_Barrera_Move_2
waitmovement 0x0
release
end

Radio_P2_Barrera_Move_1:
walk_in_place_up
step_end

Radio_P2_Barrera_Move_2:
walk_slow_up
step_end

Radio_P2_Barrera_Texto_1:
.string "(Debería ver antes a FUJI\n"
	.string "y el CEMENTERIO del pueblo)$"

LavenderRadioP2_Policia_Cartel::
lock
faceplayer
msgbox LavenderRadioP2_Policia_Cartel_Texto_1 MSGBOX_AUTOCLOSE
release
end

LavenderRadioP2_Policia_Cartel_Texto_1:
.string "Hay un cartel orientativo en la planta\n"
	.string "baja, ahí se indica lo que\l"
	.string "supuestamente hacemos en cada piso.\l"
	.string "Por supuesto, ese cartel es pura\l"
	.string "fachada, si quieres ver lo que\l"
	.string "verdaderamente se hace en cada piso,\l"
	.string "observa los carteles a partir del P1.$"

LavenderRadioP2_11::
lock     
faceplayer     
msgbox LavenderRadioP2_Text_11, MSGBOX_DEFAULT
release     
end

LavenderRadioP2_Text_11:
.string "Ningún RECLUTA común tiene acceso a\n"
	.string "los pisos superiores, como mínimo\l"
	.string "debes ser ALTO RANGO.$"

LavenderRadioP2_Evento_Elm_Move_1:
walk_in_place_up
step_end

LavenderRadioP2_Evento_Elm_Move_2:
walk_slow_up
step_end

LavenderRadioP2_Evento_Elm_Move_2.1:
walk_slow_down
step_end

LavenderRadioP2_Evento_Elm_Move_3:
walk_slow_left
walk_slow_up
step_end

LavenderRadioP2_Evento_Elm_Move_4:
face_down
step_end

LavenderRadioP2_Evento_Elm_Move_5:
emote_exclamation_mark
step_end

LavenderRadioP2_Evento_Elm_Move_6:
walk_down
step_end

LavenderRadioP2_Evento_Elm_Izq::
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP2_Evento_Elm_Move_1
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP2_Evento_Elm_Move_2
waitmovement 0x0
goto LavenderRadioP2_Evento_Elm

LavenderRadioP2_Evento_Elm_Der::
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP2_Evento_Elm_Move_1
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP2_Evento_Elm_Move_3
waitmovement 0x0
goto LavenderRadioP2_Evento_Elm

LavenderRadioP2_Evento_Elm::
lock
delay 10
applymovement 13, LavenderRadioP2_Evento_Elm_Move_4
applymovement 12, LavenderRadioP2_Evento_Elm_Move_4
waitmovement 0x0
playse SE_PIN
applymovement 13, LavenderRadioP2_Evento_Elm_Move_5
waitmovement 0x0
waitse
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_2 MSGBOX_AUTOCLOSE
applymovement 12, LavenderRadioP2_Evento_Elm_Move_6
waitmovement 0x0
msgbox LavenderRadioP2_Evento_Elm_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderRadioP2_Evento_Elm_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 12, LavenderRadioP2_Evento_Elm_Move_7
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 12, LavenderRadioP2_Evento_Elm_Move_8
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP2_Evento_Elm_Move_10
applymovement 12, LavenderRadioP2_Evento_Elm_Move_9
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderRadioP2_Evento_Elm_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 12, LavenderRadioP2_Evento_Elm_Move_8
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 12, LavenderRadioP2_Evento_Elm_Move_7
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderRadioP2_Evento_Elm_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderRadioP2_Evento_Elm_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderRadioP2_Evento_Elm_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderRadioP2_Evento_Elm_Texto_14 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP2_Evento_Elm_Move_11
applymovement 12, LavenderRadioP2_Evento_Elm_Move_12
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_15 MSGBOX_AUTOCLOSE
delay 30
msgbox LavenderRadioP2_Evento_Elm_Texto_16 MSGBOX_AUTOCLOSE
delay 30
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP2_Evento_Elm_Move_14
applymovement 12, LavenderRadioP2_Evento_Elm_Move_13
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP2_Evento_Elm_Move_11
waitmovement 0x0
msgbox LavenderRadioP2_Evento_Elm_Texto_17 MSGBOX_AUTOCLOSE
applymovement 13, LavenderRadioP2_Evento_Elm_Move_2.1
waitmovement 0x0
delay 15
msgbox LavenderRadioP2_Evento_Elm_Texto_18 MSGBOX_AUTOCLOSE
applymovement 13, LavenderRadioP2_Evento_Elm_Move_10
waitmovement 0x0
msgbox LavenderRadioP2_Evento_Elm_Texto_19 MSGBOX_AUTOCLOSE
delay 15
applymovement 13, LavenderRadioP2_Evento_Elm_Move_4
waitmovement 0x0
delay 15
msgbox LavenderRadioP2_Evento_Elm_Texto_20 MSGBOX_AUTOCLOSE
delay 15
applymovement 13, LavenderRadioP2_Evento_Elm_Move_15
waitmovement 0x0
delay 15
msgbox LavenderRadioP2_Evento_Elm_Texto_21 MSGBOX_AUTOCLOSE
applymovement 13, LavenderRadioP2_Evento_Elm_Move_16
waitmovement 0x0
msgbox LavenderRadioP2_Evento_Elm_Texto_22 MSGBOX_AUTOCLOSE
applymovement 13, LavenderRadioP2_Evento_Elm_Move_6
waitmovement 0x0
msgbox LavenderRadioP2_Evento_Elm_Texto_23 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox LavenderRadioP2_Evento_Elm_Texto_24 MSGBOX_DEFAULT
waitfanfare
additem ITEM_Z_POWER_RING
msgbox LavenderRadioP2_Evento_Elm_Texto_25 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, LavenderRadioP2_Evento_Elm_Move_14
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_26 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, LavenderRadioP2_Evento_Elm_Move_16
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_27 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, LavenderRadioP2_Evento_Elm_Move_11
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_28 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, LavenderRadioP2_Evento_Elm_Move_17
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_29 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderRadioP2_Evento_Elm_Texto_30 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, LavenderRadioP2_Evento_Elm_Move_18
waitmovement 0x0
delay 25
msgbox LavenderRadioP2_Evento_Elm_Texto_31 MSGBOX_AUTOCLOSE
applymovement 13, LavenderRadioP2_Evento_Elm_Move_19
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HOENN_102
removeobject 12
removeobject 13
setvar VAR_UNUSED_0x40FF, 33
waitse
release
end

LavenderRadioP2_Evento_Elm_Move_19:
walk_up
walk_right
walk_up
face_right
delay_8
step_end

LavenderRadioP2_Evento_Elm_Move_18:
walk_up
walk_up
step_end

LavenderRadioP2_Evento_Elm_Move_17:
delay_8
face_down
delay_16
delay_8
face_left
step_end

LavenderRadioP2_Evento_Elm_Move_16:
walk_in_place_down
step_end

LavenderRadioP2_Evento_Elm_Move_15:
face_left
delay_16
delay_8
face_down
step_end

LavenderRadioP2_Evento_Elm_Move_13:
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

LavenderRadioP2_Evento_Elm_Move_14:
delay_16
delay_8
face_right
step_end

LavenderRadioP2_Evento_Elm_Move_12:
walk_right
face_down
step_end

LavenderRadioP2_Evento_Elm_Move_11:
delay_16
face_up
step_end

LavenderRadioP2_Evento_Elm_Move_10:
delay_16
delay_16
face_left
step_end

LavenderRadioP2_Evento_Elm_Move_9:
walk_down
walk_left
walk_left
step_end

LavenderRadioP2_Evento_Elm_Move_8:
face_down
step_end

LavenderRadioP2_Evento_Elm_Move_7:
face_left
step_end

LavenderRadioP2_Evento_Elm_Texto_1:
	.string "ATLAS: Será algo revolucionario,\n"
	.string "no hay duda.$"

LavenderRadioP2_Evento_Elm_Texto_2:
	.string "ELM: ¡Ah, {PLAYER}!\n"
	.string "Ya has llegado.$"

LavenderRadioP2_Evento_Elm_Texto_3:
	.string "ATLAS: Me alegra verte por aquí,\n"
	.string "{PLAYER}.$"

LavenderRadioP2_Evento_Elm_Texto_4:
	.string "Tal vez tu cabeza no terminaba de\n"
	.string "creerlo, pero ahora tus ojos los ven y lo\l"
	.string "confirman: la TORRE RADIO ha llegado a\l"
	.string "PUEBLO LAVANDA.$"

LavenderRadioP2_Evento_Elm_Texto_5:
	.string "Una nueva era en el entendimiento de\n"
	.string "cómo funciona un POKÉMON se avecina.$"

LavenderRadioP2_Evento_Elm_Texto_6:
	.string "Íbamos a celebrar su inauguración en la\n"
	.string "azotea, con una pequeña demostración\l"
	.string "de nuestra tecnología de ondas de\l"
	.string "radio más puntera.$"

LavenderRadioP2_Evento_Elm_Texto_7:
	.string "Pero el incidente con los MOTORISTAS ha\n"
	.string "trastocado estos planes.$"

LavenderRadioP2_Evento_Elm_Texto_8:
	.string "La ceremonia se mantendrá, pero solo\n"
	.string "para unos pocos.$"

LavenderRadioP2_Evento_Elm_Texto_9:
	.string "ANDRA y tú aún no habéis visto este\n"
	.string "lugar al completo, de modo que\l"
	.string "asistiréis a su inauguración.$"

LavenderRadioP2_Evento_Elm_Texto_10:
	.string "GIOVANNI, PETREL, KOGA y yo estaremos\n"
	.string "ocupados; nos reuniremos con los\l"
	.string "MOTORISTAS en ZONA SAFARI.$"

LavenderRadioP2_Evento_Elm_Texto_11:
	.string "Hemos acordado adaptar el lugar a las\n"
	.string "nuevas condiciones que aún están por\l"
	.string "negociar.$"

LavenderRadioP2_Evento_Elm_Texto_12:
	.string "… …$"

LavenderRadioP2_Evento_Elm_Texto_13:
	.string "Tal vez… dimos por sentado que esta era\n"
	.string "la KANTO perfecta, la que todos\l"
	.string "querían.$"

LavenderRadioP2_Evento_Elm_Texto_14:
	.string "Puede que, desde lo alto de esta torre,\n"
	.string "o a decenas de metros bajo tierra, nos\l"
	.string "sea más difícil ver la realidad a pie de\l"
	.string "calle.$"

LavenderRadioP2_Evento_Elm_Texto_15:
	.string "No obstante, nada de lo dicho anula una\n"
	.string "verdad elemental, más poderosa que\l"
	.string "cualquier conjetura.$"

LavenderRadioP2_Evento_Elm_Texto_16:
	.string "El progreso es imposible sin cambio.$"

LavenderRadioP2_Evento_Elm_Texto_17:
	.string "ELM: ATLAS tiene razón. Todo lo que\n"
	.string "aquí hemos logrado no hubiera sido\l"
	.string "posible sin sacrificios.$"

LavenderRadioP2_Evento_Elm_Texto_18:
	.string "¿Recuerdas el día que nos conocimos?\n"
	.string "Acababas de pisar JOHTO por primera\l"
	.string "vez.$"

LavenderRadioP2_Evento_Elm_Texto_19:
	.string "Ya tenías muchas vivencias y\n"
	.string "experiencias a tus espaldas.$"

LavenderRadioP2_Evento_Elm_Texto_20:
	.string "A pesar de ello, has seguido creciendo\n"
	.string "más y más.$"

LavenderRadioP2_Evento_Elm_Texto_21:
	.string "Es sorprendente, pero… tu progreso\n"
	.string "como ENTRENADOR ha sido proporcional\l"
	.string "al de todos nuestros avances.$"

LavenderRadioP2_Evento_Elm_Texto_22:
	.string "Ese día te di la MEGAPULSERA,\n"
	.string "¿recuerdas? En ese entonces, era lo\l"
	.string "último en tecnología.$"

LavenderRadioP2_Evento_Elm_Texto_23:
	.string "Ahora, poco más de un año después, me\n"
	.string "complace volver a hacerte entrega de lo\l"
	.string "más puntero del momento.$"

LavenderRadioP2_Evento_Elm_Texto_24:
	.string "¡Has obtenido una PULSERA Z!$"

LavenderRadioP2_Evento_Elm_Texto_25:
	.string "Imita los efectos de un poderoso\n"
	.string "artefacto, característico de una\l"
	.string "lejana región. Con él podrás ejecutar\l"
	.string "una fabulosa mecánica en combate.$"

LavenderRadioP2_Evento_Elm_Texto_26:
	.string "Me consta que DEVON ya había logrado\n"
	.string "sintetizarla antes.$"

LavenderRadioP2_Evento_Elm_Texto_27:
	.string "Gracias a la PULSERA Z, y llevando el\n"
	.string "respectivo CRISTAL Z equipado en tu\l"
	.string "POKÉMON, podrás ejecutar un movimiento\l"
	.string "de una potencia excepcional.$"

LavenderRadioP2_Evento_Elm_Texto_28:
	.string "En el piso de arriba podrás comprar\n"
	.string "todos los movimientos Z elementales.$"

LavenderRadioP2_Evento_Elm_Texto_29:
	.string "A partir de ahora, será una nueva\n"
	.string "variable a tener en cuenta.$"

LavenderRadioP2_Evento_Elm_Texto_30:
	.string "Algo… peligroso e impredecible, capaz de\n"
	.string "abrir huecos en muchos equipos que\l"
	.string "hasta ahora considerábamos sólidos.$"

LavenderRadioP2_Evento_Elm_Texto_31:
	.string "Solo espero que… tal y como has hecho\n"
	.string "hasta ahora, no te quedes atrás, que\l"
	.string "seas capaz de adaptarte. Me entiendes,\l"
	.string "¿verdad?$"
