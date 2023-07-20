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
.string "mayor, no sé...$"





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
.string "ataque pero… ¡con semejante arma\l"
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
	.string "con motivo…$"

LavenderRadioP2_Evento_Fuji_Texto_4:
.string "BILL y ELM conocen mejor su\n"
	.string "funcionamiento. Al parecer estas ondas\l"
	.string "de radio rastrean posibles mutaciones,\l"
	.string "el 99,9% perjudiciales para un POKÉMON\l"
	.string "y su rendimiento. Aquí nos\l"
	.string "encargaremos de seleccionar ese 0,1%\l"
	.string "restante, el que nos puede ser útil\l"
	.string "para producir incrementos en el poder\l"
	.string "de un POKÉMON…$"

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
.string "…$"

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
