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
msgbox Route52_MazeP1_Combate_Ladron_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combate_Ladron_Texto_2 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combate_Ladron_Texto_3 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combate_Ladron_Texto_4 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combate_Ladron_Texto_5 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combate_Ladron_Texto_6 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combate_Ladron_Texto_7 MSGBOX_AUTOCLOSE
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
.string "Maldición...\n"
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
msgbox Route52_MazeP1_Combates_Finales_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combates_Finales_Texto_2 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combates_Finales_Texto_3 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combates_Finales_Texto_4 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combates_Finales_Texto_5 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combates_Finales_Texto_6 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combates_Finales_Texto_7 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combates_Finales_Texto_8 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combates_Finales_Texto_9 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combates_Finales_Texto_10 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combates_Finales_Texto_11 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combates_Finales_Texto_12 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combates_Finales_Texto_13 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combates_Finales_Texto_14 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combates_Finales_Texto_15 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combates_Finales_Texto_16 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combates_Finales_Texto_17 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combates_Finales_Texto_18 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combates_Finales_Texto_19 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combates_Finales_Texto_20 MSGBOX_AUTOCLOSE
msgbox Route52_MazeP1_Combates_Finales_Texto_21 MSGBOX_AUTOCLOSE
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
.string "... ...$"

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
