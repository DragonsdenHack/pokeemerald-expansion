Route52_MazeP1_MapScripts::
	.byte 0

Route52MazeP1_1::
end



Route52MazeP1_2::
lock     
faceplayer     
msgbox Route52_MazeP1_Text_2, MSGBOX_DEFAULT
release     
end

Route52_MazeP1_Text_2:
.string "¿Ves que si cada uno pone un poco\n"
.string "de su parte, todos podemos llegar a\l"
.string "un acuerdo?$"



Route52MazeP1_3::
end



Route52MazeP1_4::
lock     
faceplayer     
msgbox Route52_MazeP1_Text_4, MSGBOX_DEFAULT
release     
end

Route52_MazeP1_Text_4:
.string "¿Ves que si cada uno pone un poco\n"
.string "de su parte, todos podemos llegar a\l"
.string "un acuerdo?$"



Route52MazeP1_5::
end



Route52MazeP1_6:
end



Route52MazeP1_7::
end



Route52MazeP1_8::
end



Route52MazeP1_9:
end



Route52MazeP1_12::
lock     
faceplayer     
msgbox Route52_MazeP1_Text_12, MSGBOX_DEFAULT
release     
end

Route52_MazeP1_Text_12:
.string "¿Ves que si cada uno pone un poco\n"
.string "de su parte, todos podemos llegar a\l"
.string "un acuerdo?$"

Route52_MazeP1_Combate_Ladron::
applymovement OBJ_EVENT_ID_PLAYER, Route52_MazeP1_Combate_Ladron_Move_1
waitmovement 0x0
msgbox Route52_MazeP1_Combate_Ladron_Texto_1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 11, Route52_MazeP1_Combate_Ladron_Move_2
waitmovement 0x0
applymovement 11, Route52_MazeP1_Combate_Ladron_Move_3
waitmovement 0x0
msgbox Route52_MazeP1_Combate_Ladron_Texto_2 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 11, Route52_MazeP1_Combate_Ladron_Move_4
waitmovement 0x0
msgbox Route52_MazeP1_Combate_Ladron_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox Route52_MazeP1_Combate_Ladron_Texto_4 MSGBOX_AUTOCLOSE
applymovement 11, Route52_MazeP1_Combate_Ladron_Move_5
waitmovement 0x0
trainerbattle_no_intro TRAINER_LADRON_5, Route52_MazeP1_Combate_Ladron_Texto_5
msgbox Route52_MazeP1_Combate_Ladron_Texto_6 MSGBOX_AUTOCLOSE
applymovement 11, Route52_MazeP1_Combate_Ladron_Move_1
waitmovement 0x0
msgbox Route52_MazeP1_Combate_Ladron_Texto_7 MSGBOX_AUTOCLOSE
applymovement 11, Route52_MazeP1_Combate_Ladron_Move_7
waitmovement 0x0
setflag FLAG_HIDE_SKY_PILLAR_WALLACE
removeobject 11
setvar VAR_UNUSED_0x4091, 7
release
end

Route52_MazeP1_Combate_Ladron_Texto_1:
.string "Estos programas siempre son lo\n"
	.string "mismo, creo que me meteré un rato\l"
	.string "en la piscina.$"

Route52_MazeP1_Combate_Ladron_Texto_2:
.string "¡¿Pero qué?!\n"
	.string "¿Quién eres tú?$"

Route52_MazeP1_Combate_Ladron_Texto_3:
.string "¡Espera!\n"
	.string "Eres ese ROCKET, ¿verdad?, el que\l"
	.string "quiso detenernos justo antes de\l"
	.string "mudarnos a JOHTO, parece que has\l"
	.string "cambiado mucho desde ese entonces,\l"
	.string "pero nosotros también.$"

Route52_MazeP1_Combate_Ladron_Texto_4:
.string "Esta vez no podrás escapar, varios\n"
	.string "de los científicos que hemos\l"
	.string "contratado han logrado desarrollar\l"
	.string "una tecnología que aumenta el\l"
	.string "poder de los POKÉMON, ¡ahora\l"
	.string "pagarás por lo que hiciste en\l"
	.string "KANTO!$"

Route52_MazeP1_Combate_Ladron_Texto_5:
.string "¿¡Otra vez!?$"

Route52_MazeP1_Combate_Ladron_Texto_6:
.string "Maldición…\n"
	.string "Debí haber esperado a mis socios\l"
	.string "para atacar todos a la vez, pero\l"
	.string "con ellos dos es más que\l"
	.string "suficiente.$"

Route52_MazeP1_Combate_Ladron_Texto_7:
.string "Esta vez no nos tumbarás el\n"
	.string "negocio.$"

Route52_MazeP1_Combate_Ladron_Move_1:
walk_in_place_right
step_end

Route52_MazeP1_Combate_Ladron_Move_2:
emote_exclamation_mark
step_end

Route52_MazeP1_Combate_Ladron_Move_3:
face_left
step_end

Route52_MazeP1_Combate_Ladron_Move_4:
walk_fast_up
walk_fast_left
step_end

Route52_MazeP1_Combate_Ladron_Move_5:
walk_left
walk_left
step_end


Route52_MazeP1_Combate_Ladron_Move_6:
face_right
step_end

Route52_MazeP1_Combate_Ladron_Move_7:
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Route52_MazeP1_Combates_Finales::
lock
applymovement OBJ_EVENT_ID_PLAYER, Route52_MazeP1_Combates_Finales_Move_1
waitmovement 0x0
msgbox Route52_MazeP1_Combates_Finales_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 12, Route52_MazeP1_Combates_Finales_Move_2
waitmovement 0x0
msgbox Route52_MazeP1_Combates_Finales_Texto_2 MSGBOX_AUTOCLOSE
applymovement 12, Route52_MazeP1_Combates_Finales_Move_3
applymovement OBJ_EVENT_ID_PLAYER, Route52_MazeP1_Combates_Finales_Move_4
waitmovement 0x0
msgbox Route52_MazeP1_Combates_Finales_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox Route52_MazeP1_Combates_Finales_Texto_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 12, Route52_MazeP1_Combates_Finales_Move_1
waitmovement 0x0
msgbox Route52_MazeP1_Combates_Finales_Texto_5 MSGBOX_AUTOCLOSE
applymovement 12, Route52_MazeP1_Combates_Finales_Move_3
waitmovement 0x0
msgbox Route52_MazeP1_Combates_Finales_Texto_6 MSGBOX_AUTOCLOSE
delay 20
msgbox Route52_MazeP1_Combates_Finales_Texto_4 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 12, Route52_MazeP1_Combates_Finales_Move_5
waitmovement 0x0
delay 15
playse MUS_RG_ENCOUNTER_ROCKET
msgbox Route52_MazeP1_Combates_Finales_Texto_7 MSGBOX_AUTOCLOSE
applymovement 12, Route52_MazeP1_Combates_Finales_Move_6
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Route52_MazeP1_Combates_Finales_Move_1
applymovement 4, Route52_MazeP1_Combates_Finales_Move_7
waitmovement 0x0
msgbox Route52_MazeP1_Combates_Finales_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LADRON_6, Route52_MazeP1_Combates_Finales_Texto_9
applymovement OBJ_EVENT_ID_PLAYER, Route52_MazeP1_Combates_Finales_Move_8
waitmovement 0x0
msgbox Route52_MazeP1_Combates_Finales_Texto_10 MSGBOX_AUTOCLOSE
applymovement 12, Route52_MazeP1_Combates_Finales_Move_9
waitmovement 0x0
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox Route52_MazeP1_Combates_Finales_Texto_11 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LADRON_4, Route52_MazeP1_Combates_Finales_Texto_12
applymovement OBJ_EVENT_ID_PLAYER, Route52_MazeP1_Combates_Finales_Move_8
waitmovement 0x0
playse SE_PIN
applymovement 12, Route52_MazeP1_Combates_Finales_Move_5
waitmovement 0x0
msgbox Route52_MazeP1_Combates_Finales_Texto_13 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 12, Route52_MazeP1_Combates_Finales_Move_10
waitmovement 0x0
msgbox Route52_MazeP1_Combates_Finales_Texto_14 MSGBOX_AUTOCLOSE
delay 20
msgbox Route52_MazeP1_Combates_Finales_Texto_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 12, Route52_MazeP1_Combates_Finales_Move_11
waitmovement 0x0
msgbox Route52_MazeP1_Combates_Finales_Texto_15 MSGBOX_AUTOCLOSE
applymovement 12, Route52_MazeP1_Combates_Finales_Move_9
waitmovement 0x0
msgbox Route52_MazeP1_Combates_Finales_Texto_16 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x4091, 8
msgbox Route52_MazeP1_Combates_Finales_Texto_17 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route52_MazeP1_Combates_Finales_No
showmoneybox 0, 0
delay 15
msgbox Route52_MazeP1_Combates_Finales_Texto_18 MSGBOX_AUTOCLOSE
applymovement 12, Route52_MazeP1_Combates_Finales_Move_3
waitmovement 0x0
delay 15
playse SE_SHOP
addmoney 2000000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox Route52_MazeP1_Combates_Finales_Texto_19 MSGBOX_DEFAULT
waitfanfare
delay 40
hidemoneybox
delay 40
msgbox Route52_MazeP1_Combates_Finales_Texto_20 MSGBOX_AUTOCLOSE
applymovement 12, Route52_MazeP1_Combates_Finales_Move_12
applymovement 4, Route52_MazeP1_Combates_Finales_Move_13
waitmovement 0x0
release
end

Route52_MazeP1_Combates_Finales_No::
msgbox Route52_MazeP1_Combates_Finales_Texto_21 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
fadescreen 1
delay 20
removeobject 12
removeobject 4
removeobject 2
removeobject 3
removeobject 8
removeobject 9
removeobject 5
removeobject 1
fadescreen 0
release
end


Route52_MazeP1_Combates_Finales_Texto_1:
.string "Así que ADMIN.JEFE {PLAYER}, ¿no?$"

Route52_MazeP1_Combates_Finales_Texto_2:
.string "Vamos pasa, después de todo los\n"
	.string "dos somos hombres de negocios, no\l"
	.string "me guardas rencor por esos 500\l"
	.string "pokés que te estafé ahora que\l"
	.string "tienes millones, ¿verdad?$"

Route52_MazeP1_Combates_Finales_Texto_3:
.string "Debo darte las gracias {PLAYER},\n"
	.string "sin todos los esfuerzos del TEAM\l"
	.string "ROCKET por modernizar JOHTO en\l"
	.string "estos últimos meses, nunca\l"
	.string "hubiéramos llegado a tener tanto\l"
	.string "éxito, no te imaginas la cantidad\l"
	.string "de POKÉMON raros que hemos vendido\l"
	.string "a esos EJECUTIVOS de TRIGAL.$"

Route52_MazeP1_Combates_Finales_Texto_4:
.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

Route52_MazeP1_Combates_Finales_Texto_5:
.string "¿Cómo sé que el TEAM ROCKET está\n"
	.string "detrás de todo?\l"
	.string "Yo también tengo mis contactos, y\l"
	.string "también contrato a científicos que\l"
	.string "trabajaron para vosotros, varios\l"
	.string "de ellos nos han introducido en la\l"
	.string "MEGA-EVOLUCIÓN.\l"
	.string "Cuando tienes dinero, puedes\l"
	.string "comprar cualquier cosa, ¿no es así\l"
	.string "{PLAYER}?$"

Route52_MazeP1_Combates_Finales_Texto_6:
.string "Ahora es cuando ambos hacemos las\n"
	.string "paces, a los dos nos va bien\l"
	.string "{PLAYER}, no hay necesidad de\l"
	.string "confrontar nuestros intereses, ¿no\l"
	.string "crees?$"

Route52_MazeP1_Combates_Finales_Texto_7:
.string "¿No negocias con estafadores?\n"
	.string "¿Por quién nos tomas?\l"
	.string "¡Ahora aprenderas modales, no\l"
	.string "sigues siendo más que un vulgar\l"
	.string "ROCKET por mucho que vayas\l"
	.string "trajeado!$"

Route52_MazeP1_Combates_Finales_Texto_8:
.string "Respuesta equivocada, {PLAYER}.\n"
	.string "Ahora accederás a nuestras\l"
	.string "condiciones por las malas.$"

Route52_MazeP1_Combates_Finales_Texto_9:
.string "Esto entraba en nuestros planes.$"

Route52_MazeP1_Combates_Finales_Texto_10:
.string "Muy bien {PLAYER}, veo que no has\n"
	.string "perdido facultades, pero hemos\l"
	.string "sido nosotros los que más han\l"
	.string "mejorado, aunque sea a puro golpe\l"
	.string "de talonario.$"

Route52_MazeP1_Combates_Finales_Texto_11:
.string "Ahora llegó la hora de verdad, te\n"
	.string "ofrecí educadamente negociar\l"
	.string "condiciones para la convivencia de\l"
	.string "nuestras dos empresas.\l"
	.string "¡Ahora por negarte aceptarás\l"
	.string "cualquier condición después de\l"
	.string "acabar con tu equipo!$"

Route52_MazeP1_Combates_Finales_Texto_12:
.string "¿Cómo es posible?\n"
	.string "¿¡Puedes seguir derrotándonos a la\l"
	.string "vez?!$"

Route52_MazeP1_Combates_Finales_Texto_13:
.string "¡NO!$"

Route52_MazeP1_Combates_Finales_Texto_14:
.string "Nos ha costado millones reproducir\n"
	.string "la MEGA-EVOLUCIÓN, ¿cómo no es\l"
	.string "suficiente para tumbarte después\l"
	.string "de 2 combates?$"

Route52_MazeP1_Combates_Finales_Texto_15:
.string "Muy bien {PLAYER}, tú ganas.$"

Route52_MazeP1_Combates_Finales_Texto_16:
.string "Entiendo que el TEAM ROCKET quiera\n"
	.string "tener el monopolio y control\l"
	.string "absoluto de las dos regiones, no\l"
	.string "me opondré, es por ello que mi\l"
	.string "oferta es la siguiente: 2 MILLONES\l"
	.string "DE POKÉS, en efectivo para ti en\l"
	.string "este momento, y el 10% de nuestros\l"
	.string "beneficios irán para vuestra\l"
	.string "sucursal en JOHTO.$"

Route52_MazeP1_Combates_Finales_Texto_17:
.string "¿Aceptas el trato?$"

Route52_MazeP1_Combates_Finales_Texto_18:
.string "¡Bien!\n"
	.string "¿¡Ves que si cada uno pone un poco\l"
	.string "de su parte puede llegarse a un\l"
	.string "acuerdo?!\l"
	.string "¡Aquí tienes!$"

Route52_MazeP1_Combates_Finales_Texto_19:
.string "¡Acabas de facturar 2 MILLONES DE\n"
	.string "POKÉS!$"

Route52_MazeP1_Combates_Finales_Texto_20:
.string "Ahora, si nos disculpas, tenemos\n"
	.string "que seguir llevando nuestro\l"
	.string "negocio, ¿o no querrás perder\l"
	.string "potenciales beneficios para ti\l"
	.string "también?$"

Route52_MazeP1_Combates_Finales_Texto_21:
.string "Así que no cedes ni un ápice, ¿eh?\n"
	.string "Está bien, nos iremos,\l"
	.string "¡pero recuerda esto {PLAYER}!\l"
	.string "Con tus acciones el TEAM ROCKET\l"
	.string "acaba de ganar un enemigo, ¡me\l"
	.string "encargaré de que todos sepan\l"
	.string "quienes son los que manejan los\l"
	.string "hilos desde las sombras!$"

Route52_MazeP1_Combates_Finales_Move_1:
face_right
step_end

Route52_MazeP1_Combates_Finales_Move_2:
face_left
step_end

Route52_MazeP1_Combates_Finales_Move_3:
walk_in_place_down
step_end

Route52_MazeP1_Combates_Finales_Move_4:
walk_slow_down
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_down
walk_slow_right
walk_in_place_up
step_end

Route52_MazeP1_Combates_Finales_Move_5:
emote_exclamation_mark
step_end

Route52_MazeP1_Combates_Finales_Move_6:
walk_in_place_right
face_down
step_end

Route52_MazeP1_Combates_Finales_Move_7:
walk_left
step_end

Route52_MazeP1_Combates_Finales_Move_8:
face_up
step_end

Route52_MazeP1_Combates_Finales_Move_9:
walk_down
step_end

Route52_MazeP1_Combates_Finales_Move_10:
walk_fast_up
step_end

Route52_MazeP1_Combates_Finales_Move_11:
face_down
step_end

Route52_MazeP1_Combates_Finales_Move_12:
walk_up
walk_in_place_down
step_end

Route52_MazeP1_Combates_Finales_Move_13:
walk_right
walk_in_place_left
step_end

Route52_MazeP1_Combate_Primer_Cientifico::
applymovement OBJ_EVENT_ID_PLAYER, Route52_MazeP1_Combate_Primer_Cientifico_Move_1
waitmovement 0x0
msgbox Route52_MazeP1_Combate_Primer_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 3, Route52_MazeP1_Combate_Primer_Cientifico_Move_2
waitmovement 0x0
applymovement 3, Route52_MazeP1_Combate_Primer_Cientifico_Move_3
waitmovement 0x0
playse MUS_RG_ENCOUNTER_ROCKET
msgbox Route52_MazeP1_Combate_Primer_Cientifico_Texto_2 MSGBOX_AUTOCLOSE
applymovement 3, Route52_MazeP1_Combate_Primer_Cientifico_Move_4
waitmovement 0x0
trainerbattle_no_intro TRAINER_STEVEN, Route52_MazeP1_Combate_Primer_Cientifico_Texto_3
setvar VAR_UNUSED_0x4091, 5
release
end

Route52_MazeP1_Combate_Primer_Cientifico_Texto_1:
.string "Bien…\n"
	.string "Con esta máquina podremos seguir\l"
	.string "lavando dinero más fácilmente{PAUSE 5}…{PAUSE 5}$"

Route52_MazeP1_Combate_Primer_Cientifico_Texto_2:
.string "¿Quién eres tú?\n"
	.string "Las auditorías de este lugar ya\l"
	.string "las hago yo, no necesitamos a\l"
	.string "nadie vestido de traje para\l"
	.string "hacerlas.$"

Route52_MazeP1_Combate_Primer_Cientifico_Texto_3:
.string "¡Qué desastre!$"


Route52_MazeP1_Combate_Primer_Cientifico_Move_1:
face_left
step_end

Route52_MazeP1_Combate_Primer_Cientifico_Move_2:
emote_exclamation_mark
step_end

Route52_MazeP1_Combate_Primer_Cientifico_Move_3:
face_right
step_end

Route52_MazeP1_Combate_Primer_Cientifico_Move_4:
walk_right
walk_right
walk_right
step_end

Route52_Maze_Maquina_1::
lock
msgbox Route52_Maze_Combate_1_Texto_7 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route52_Maze_Combate_1_2_No
delay 40
playse SE_PC_ON
delay 40
playse SE_WALL_HIT
setmetatile 12, 7, 0x2A8, FALSE
special DrawWholeMapView
delay 20
release
end


Route52_MazeP1_Combate_Segundo_Cientifico::
applymovement OBJ_EVENT_ID_PLAYER, Route52_MazeP1_Combate_Segundo_Cientifico_Move_1
waitmovement 0x0
msgbox Route52_MazeP1_Combate_Segundo_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route52_MazeP1_Combate_Segundo_Cientifico_Move_2
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 8, Route52_MazeP1_Combate_Segundo_Cientifico_Move_3
waitmovement 0x0
applymovement 8, Route52_MazeP1_Combate_Segundo_Cientifico_Move_4
waitmovement 0x0
playse MUS_RG_ENCOUNTER_ROCKET
msgbox Route52_MazeP1_Combate_Segundo_Cientifico_Texto_2 MSGBOX_AUTOCLOSE
applymovement 8, Route52_MazeP1_Combate_Segundo_Cientifico_Move_5
waitmovement 0x0
trainerbattle_no_intro TRAINER_ANABEL, Route52_MazeP1_Combate_Segundo_Cientifico_Texto_3
setvar VAR_UNUSED_0x4091, 6
release
end

Route52_MazeP1_Combate_Segundo_Cientifico_Move_1:
walk_in_place_down
step_end

Route52_MazeP1_Combate_Segundo_Cientifico_Move_2:
walk_left
walk_down
step_end

Route52_MazeP1_Combate_Segundo_Cientifico_Move_3:
emote_exclamation_mark
step_end

Route52_MazeP1_Combate_Segundo_Cientifico_Move_4:
face_up
step_end

Route52_MazeP1_Combate_Segundo_Cientifico_Move_5:
walk_up
step_end


Route52_MazeP1_Combate_Segundo_Cientifico_Texto_1:
.string "Transacción de 4 millones de pokés\n"
	.string "por un CHARMANDER cerrada, esto va\l"
	.string "como la seda{PAUSE 5}…{PAUSE 5}$"

Route52_MazeP1_Combate_Segundo_Cientifico_Texto_2:
.string "¿Cómo has llegado hasta aquí?\n"
	.string "Todo el que ponga en peligro la\l"
	.string "salud de nuestro negocio será\l"
	.string "borrado del mapa.$"

Route52_MazeP1_Combate_Segundo_Cientifico_Texto_3:
.string "¡No, espera!$"

Route52_Maze_Maquina_2::
lock
msgbox Route52_Maze_Combate_1_Texto_7 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route52_Maze_Combate_1_2_No
delay 40
playse SE_PC_ON
delay 40
playse SE_WALL_HIT
setmetatile 8, 3, 0x2A1, FALSE
special DrawWholeMapView
delay 20
release
end

Route52_Maze_Dialogo_Primer_Cientifico::
lock
faceplayer
compare VAR_UNUSED_0x4091, 7
goto_if_gt Route52_Maze_Dialogo_Primer_Cientifico_2
msgbox Route52_Maze_Dialogo_Primer_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Dialogo_Primer_Cientifico_2::
msgbox Route52_Maze_Dialogo_Primer_Cientifico_Texto_2 MSGBOX_AUTOCLOSE
release
end


Route52_Maze_Dialogo_Primer_Cientifico_Texto_1:
.string "Solo satisfacemos de forma privada\n"
	.string "una demanda de la población,\l"
	.string "¿tienes algún problema con eso?$"

Route52_Maze_Dialogo_Primer_Cientifico_Texto_2:
.string "Todos tienen un precio, ¡incluso\n"
	.string "tú!$"


Route52_Maze_Dialogo_Segundo_Cientifico::
lock
faceplayer
compare VAR_UNUSED_0x4091, 7
goto_if_gt Route52_Maze_Dialogo_Segundo_Cientifico_2
msgbox Route52_Maze_Dialogo_Segundo_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Dialogo_Segundo_Cientifico_2::
msgbox Route52_Maze_Dialogo_Segundo_Cientifico_Texto_2 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Dialogo_Segundo_Cientifico_Texto_1:
.string "Este lugar no existe sobre el\n"
	.string "papel, ¡pero los ingresos que\l"
	.string "genera sí que existen!$"

Route52_Maze_Dialogo_Segundo_Cientifico_Texto_2:
.string "Así que ahora eres uno de nuestros\n"
	.string "principales accionistas, supongo\l"
	.string "entonces que ahora también trabajo\l"
	.string "para ti.$"


Route52_Maze_Dialogo_Primer_Trabajador::
lock
faceplayer
compare VAR_UNUSED_0x4091, 7
goto_if_gt Route52_Maze_Dialogo_Primer_Trabajador_2
msgbox Route52_Maze_Dialogo_Primer_Trabajador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Dialogo_Primer_Trabajador_2::
msgbox Route52_Maze_Dialogo_Primer_Trabajador_Texto_2 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Dialogo_Primer_Trabajador_Texto_1:
.string "¡Mira todos estos POKÉMON!\n"
	.string "¡Mi trabajo es mantenerlos en\l"
	.string "plena forma para cuando sean\l"
	.string "vendidos!$"

Route52_Maze_Dialogo_Primer_Trabajador_Texto_2:
.string "El otro día vendimos a nuestro\n"
	.string "TYRANITAR más poderoso a un tipo\l"
	.string "que al parecer está subiendo\l"
	.string "rápido en el TEAM ROCKET, pagó\l"
	.string "1,25 millones de pokés por él.$"

Route52_Maze_Dialogo_Segundo_Trabajador::
lock
faceplayer
compare VAR_UNUSED_0x4091, 7
goto_if_gt Route52_Maze_Dialogo_Segundo_Trabajador_2
msgbox Route52_Maze_Dialogo_Segundo_Trabajador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Dialogo_Segundo_Trabajador_2::
msgbox Route52_Maze_Dialogo_Segundo_Trabajador_Texto_2 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Dialogo_Segundo_Trabajador_Texto_1:
.string "Si usaran un par de MACHAMP yo y\n"
	.string "mis colegas perderíamos nuestro\l"
	.string "trabajo aquí, pero con todos los\l"
	.string "POKÉMON que tienen da la\l"
	.string "casualidad de que no tienen uno.\l"
	.string "¡Mejor para nosotros!$"

Route52_Maze_Dialogo_Segundo_Trabajador_Texto_2:
.string "¿Entonces eres accionista de la\n"
	.string "empresa?\l"
	.string "¡Espero que no propongas invertir\l"
	.string "en MACHAMP para la logística!$"

Route52_Maze_Dialogo_Tercer_Trabajador::
lock
compare VAR_UNUSED_0x4091, 7
goto_if_gt Route52_Maze_Dialogo_Tercer_Trabajador_2
msgbox Route52_Maze_Dialogo_Tercer_Trabajador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Dialogo_Tercer_Trabajador_2::
faceplayer
msgbox Route52_Maze_Dialogo_Tercer_Trabajador_Texto_2 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Dialogo_Tercer_Trabajador_Texto_1:
.string "…\n"
	.string "…\l"
	.string "(¡Está dormido!)$"

Route52_Maze_Dialogo_Tercer_Trabajador_Texto_2:
.string "¿De dónde sales tú?\n"
	.string "¿Me he perdido algo?$"
