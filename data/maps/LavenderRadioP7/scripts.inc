LavenderRadioP7_MapScripts::
	.byte 0

LavenderRadioP7_EventScript_ReceiveDarumaka::
    lock
    faceplayer
	checkmoncatch SPECIES_SALANDIT
	goto_if_eq VAR_RESULT, FALSE, LavenderRadioP7_EventScript_TakeDarumaka 
	msgbox LavenderRadioP7_Text_1, MSGBOX_DEFAULT
	release
	end



LavenderRadioP7_EventScript_TakeDarumaka::
    msgbox LavenderRadioP7_Text_TakeDarumaka MSGBOX_DEFAULT
	msgbox LavenderRadioP7_Text_TakeDarumaka2 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox LavenderRadioP7_Text_MensajeDarumaka, MSGBOX_DEFAULT
	givemon SPECIES_SALANDIT, 30, ITEM_FIRE_GEM
	waitfanfare  
	release
	end 



LavenderRadioP7_Text_TakeDarumaka:
    .string "Hace poco descubrimos un POKÉMON\n"
	.string "capaz de corromper al TIPO ACERO, y\l"
	.string "envenenar incluso al porpio TIPO\l"
	.string "VENENO.$"



LavenderRadioP7_Text_TakeDarumaka2:
	.string "Dada tu elevada posición, sin duda\n"
	.string "mereces contar con ejemplar. Toma.$"



LavenderRadioP7_Text_MensajeDarumaka:
.string "¡OBTUVISTE UN SALANDIT AL NV.30!$"


LavenderRadioP7_Text_1:
   .string "Todo puede corromperse, incluso aquello\n"
	.string "que pueda parecer más bello y puro. Que\l"
	.string "estemos ahora sentados aquí es prueba\l"
	.string "de ello.$"

LavenderRadioP7_Primer_Rocket::
lock
faceplayer
msgbox LavenderRadioP7_Primer_Rocket_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP7_Primer_Rocket_Texto_1:
.string "Entre tanta oficina y productividad,\n"
	.string "viene bien un espacio de descanso\l"
	.string "como este, ¿no crees?$"

LavenderRadioP7_Primer_Cientifico::
lock
faceplayer
msgbox LavenderRadioP7_Primer_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP7_Primer_Cientifico_Texto_1:
.string "Hace poco apareció por aquí un\n"
	.string "anciano que jamás había visto.\l"
	.string "Debe ser alguien muy importante, de\l"
	.string "lo contrario la seguridad jamás le\l"
	.string "habría dejado llegar hasta aquí.$"

LavenderRadioP7_Segundo_Cientifico::
lock
faceplayer
msgbox LavenderRadioP7_Segundo_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP7_Segundo_Cientifico_Texto_1:
.string "Lo cierto es que la nueva TORRE RADIO\n"
	.string "impone más que la antigua TORRE\l"
	.string "POKEMON, que solo tenía 6 pisos.\l"
	.string "Ahora contamos con 10 pisos, como\l"
	.string "SILPH, además de la azotea.\l"
	.string "¡Hemos batido récords de altura en\l"
	.string "KANTO!$"

LavenderRadioP7_Segundo_Rocket::
lock
faceplayer
msgbox LavenderRadioP7_Segundo_Rocket_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP7_Segundo_Rocket_Texto_1:
.string "Algunos incluso dicen que NIDOKING y\n"
	.string "NIDOQUEEN dejarán de ser útiles\l"
	.string "después de todo lo que se está\l"
	.string "montando aquí con las ondas.\l"
	.string "¿Llegaremos a ese punto?$"

LavenderRadioP7_Policia::
lock
faceplayer
msgbox LavenderRadioP7_Policia_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP7_Policia_Texto_1:
.string "Fuiste la pieza clave en el asalto\n"
	.string "SILPH, derrotando a toda la\l"
	.string "seguridad, al PRESIDENTE y a BILL.\l"
	.string "Pero ahora, bastaría solo conmigo y\l"
	.string "mi equipo de POKÉMON al nivel 90 para\l"
	.string "dejar en ridículo a ese joven talento\l"
	.string "que eras tú.\l"
	.string "Todo avanza muy rápido.$"


LavenderRadioP7_Tercer_Cientifico::
lock
faceplayer
msgbox LavenderRadioP7_Tercer_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP7_Tercer_Cientifico_Texto_1:
	.string "Hemos alegado una y mil veces la\n"
	.string "seguridad como principal motivo para\l"
	.string "impedir la entrada más allá del P1.\l"
	.string "Una manera segura de hacer que la\l"
	.string "gente se crea falsedades es la\l"
	.string "repetición frecuente, porque la\l"
	.string "familiaridad no es fácilmente\l"
	.string "distinguible de la verdad.$"

LavenderRadioP7_Cuarto_Cientifico::
lock
faceplayer
msgbox LavenderRadioP7_Cuarto_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP7_Cuarto_Cientifico_Texto_1:
.string "Una vez conocí a alguien, alguien que\n"
	.string "llegó a tal punto de productividad y\l"
	.string "obsesión que concebía al descanso\l"
	.string "únicamente como el trámite por el que\l"
	.string "tenía que pasar para volver a\l"
	.string "rellenar su barra de energía.\l"
	.string "Acabó obteniendo lo que quería, pero\l"
	.string "a un alto precio.$"

LavenderRadioP7_Quinto_Cientifico::
lock
faceplayer
msgbox LavenderRadioP7_Quinto_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP7_Quinto_Cientifico_Texto_1:
.string "Mirar fijamente la fuente te hace\n"
	.string "olvidar la ingente cantidad de cosas\l"
	.string "que aún tienes que hacer.\l"
	.string "Pero si logras recordarlas durante el\l"
	.string "proceso, te darás cuenta de que son\l"
	.string "en su mayoría una ilusión: sufrimos\l"
	.string "más en nuestra imaginación que en la\l"
	.string "realidad.$"

LavenderRadioP7_Tercer_Rocket::
lock
faceplayer
msgbox LavenderRadioP7_Tercer_Rocket_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP7_Tercer_Rocket_Texto_1:
.string "¡Uajajaja!\n"
	.string "¡Desde aquí se ve la SEDE SILPH!\l"
	.string "¡Ellos seguro que también pueden\l"
	.string "vernos a nosotros!\l"
	.string "¡Al menos a los que ahora dejen\l"
	.string "entrar a los pisos superiores por\l"
	.string "- seguridad -!\l"
	.string "¡Uajajaja!$"

LavenderRadioP7_Cuarto_Rocket::
lock
faceplayer
msgbox LavenderRadioP7_Cuarto_Rocket_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP7_Cuarto_Rocket_Texto_1:
.string "Hace poco cerraron las vías\n"
	.string "subterráneas, a nuestros colegas\l"
	.string "motoristas no les hizo ninguna\l"
	.string "gracia.\l"
	.string "Pero qué más da, hemos logrado todo\l"
	.string "el poder que queríamos, ya no los\l"
	.string "necesitamos.$"

LavenderRadioP7_Quinto_Rocket::
lock
faceplayer
msgbox LavenderRadioP7_Quinto_Rocket_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP7_Quinto_Rocket_Texto_1:
.string "Oí hablar a algunos EJECUTIVOS con\n"
	.string "ATLAS, al parecer existen objetos que\l"
	.string "incrementan el rendimiento de ciertos\l"
	.string "POKÉMON.\l"
	.string "Hablaron del RHYPERIOR de GIOVANNI, y\l"
	.string "cómo con un PROTECTOR incrementaba\l"
	.string "sus defensas.$"

LavenderRadioP7Documento_100::
msgbox LavenderRadioP7Documento_Text_100, MSGBOX_SIGN   
end

LavenderRadioP7Documento_Text_100:
.string "7mo Sala de descanso$"

LavenderRadioP7Documento_101::
msgbox LavenderRadioP7Documento_Text_101, MSGBOX_SIGN   
end

LavenderRadioP7Documento_Text_101:
.string "-Lo mejor es enemigo de lo bueno-.$"
