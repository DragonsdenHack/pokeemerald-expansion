SaffronCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_OnTransition
	.byte 0

SaffronCity_OnTransition::
setflag FLAG_VISITED_SAFFRON_CITY
end

SaffronCity1::
lock     
faceplayer     
msgbox SaffronCity_Text_1, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_1:
.string "¡Oh!\n"
.string "¿Pero no os habíais ido ya?$"


SaffronCity2::
lock     
faceplayer     
msgbox SaffronCity_Text_2, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_2:
.string "¡Todo listo para el abordaje, SIR!$"


SaffronCity3::
lock     
faceplayer     
msgbox SaffronCity_Text_3, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_3:
.string "¡Yeah!\n"
.string "¡Habéis fracasado, ROCKET!\l"
.string "¡La ciudad está a salvo de nuevo!$"


SaffronCity4::
lock     
faceplayer     
msgbox SaffronCity_Text_4, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_4:
.string "¡AZAFRÁN ahora es propiedad del\n"
.string "TEAM ROCKET!\l"
.string "¡Todo en orden, señor!$"


SaffronCity5::
lock     
faceplayer     
msgbox SaffronCity_Text_5, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_5:
.string "¡No se preocupe, EJECUTIVO {PLAYER}!\n"
.string "¡Nadie saldrá de este GIMNASIO a\l"
.string "ayudar a SILPH mientras yo esté\l"
.string "aquí!$"


SaffronCity6::
lock     
faceplayer     
msgbox SaffronCity_Text_6, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_6:
.string "Vi con mi PIDGEOT cómo tu JEFE\n"
.string "huía miserablemente de SILPH\l"
.string "después de vuestro fracaso.\l"
.string "¡Estáis acabados!$"


SaffronCity7::
end


SaffronCity8::
lock     
faceplayer     
msgbox SaffronCity_Text_8, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_8:
.string "¡Habéis fracasado, ROCKETS!\n"
.string "¡No puedo esperar a ver el momento\l"
.string "en que LANCE os dé la estocada\l"
.string "final!$"


SaffronCity9::
lock     
faceplayer     
msgbox SaffronCity_Text_9, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_9:
.string "¿De verdad derrotaste a BRUNO del\n"
.string "ALTO MANDO?\l"
.string "¡Un honor trabajar para usted,\l"
.string "señor!$"


SaffronCity10::
lock     
faceplayer     
msgbox SaffronCity_Text_10, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_10:
.string "¡A sus órdenes, EJECUTIVO {PLAYER}!\n"
.string "¡Todo controlado por aquí!$"


SaffronCity11::
lock     
faceplayer     
msgbox SaffronCity_Text_11, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_11:
.string "Vi a vuestro JEFE escapar\n"
.string "miserablemente de SILPH.\l"
.string "¡Estáis acabados!$"


SaffronCity12::
lock     
faceplayer     
msgbox SaffronCity_Text_12, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_12:
.string "¡El ALTO MANDO os pondrá a todos\n"
.string "vosotros en vuestro lugar!$"


SaffronCity13::
lock     
faceplayer     
msgbox SaffronCity_Text_13, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_13:
.string "¡Mi vida como criminal me hace\n"
.string "sentir tan vivo!$"


SaffronCity14::
lock     
faceplayer     
msgbox SaffronCity_Text_14, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_14:
.string "¡No se preocupe señor, la ciudad\n"
.string "nos pertenece, puede centrarse en\l"
.string "asaltar SILPH!$"


SaffronCity16::
lock     
faceplayer     
msgbox SaffronCity_Text_16, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_16:
.string "Le estábamos esperando señor, ¡con\n"
.string "usted como EJECUTIVO al mando no\l"
.string "podemos fallar!\l"
.string "Tengo órdenes directas de GIOVANNI\l"
.string "de bloquearle el paso a ese ROJO\l"
.string "fingiendo quedarme dormido, según\l"
.string "nuestro LÍDER, a ROJO le importa\l"
.string "un bledo lo que hagamos o no aquí,\l"
.string "solo entrará si ve que físicamente\l"
.string "tiene vía libre a la puerta, y la\l"
.string "tendrá…\l"
.string "¡Cuando nosotros queramos!\l"
.string "¡Uajajaja!\l"
.string "¡VIVA EL TEAM ROCKET!\l"
.string "¡HAIL EJECUTIVO {PLAYER}!\l"
.string "¡SALVE GIOVANNI!$"


SaffronCity17::
end



SaffronCityDocumento_100::
msgbox SaffronCityDocumento_Text_100, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_100:
.string "¡Último producto de SILPH!\n"
	.string "Lanzamiento indeterminado…{PAUSE 5}$"



SaffronCityDocumento_101::
msgbox SaffronCityDocumento_Text_101, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_101:
	.string "Consejos de entrenador:\n"
	.string "La nueva Super Ball ofrece un\l"
	.string "doble de posibilidades de atrapar\l"
	.string "a un Pokémon que la convencional\l"
	.string "Poké Ball.$"



SaffronCityDocumento_102::
msgbox SaffronCityDocumento_Text_102, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_102:
	.string "SILPH SA\n"
	.string "Sede financiera$"



SaffronCityDocumento_103::
msgbox SaffronCityDocumento_Text_103, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_103:
	.string "CIUDAD AZAFRÁN\n"
	.string "La brillante y dorada tierra del\l"
	.string "comercio.$"



SaffronCityDocumento_104::
msgbox SaffronCityDocumento_Text_104, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_104:
	.string "Casa del Sr.Psíquico$"



SaffronCityDocumento_105::
msgbox SaffronCityDocumento_Text_105, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_105:
	.string "DOJO KARATE$"



SaffronCityDocumento_106::
msgbox SaffronCityDocumento_Text_106, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_106:
	.string "GIMNASIO de CIUDAD AZAFRÁN\n"
	.string "LÍDER: SABRINA\l"
	.string "¡La maestra de los POKÉMON\l"
	.string "PSÍQUICOS!$"



SaffronCityDocumento_107::
msgbox SaffronCityDocumento_Text_107, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_107:
	.string "Club de Fans de Entrenadores\n"
	.string "Muchos entrenadores han inscrito\l"
	.string "sus nombres en este cartel.$"



SaffronCityDocumento_108::
msgbox SaffronCityDocumento_Text_108, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_108:
	.string "CONSEJOS, APTITUDES Y\n"
	.string "REQUERIMIENTOS PARA SOBREVIVIR\l"
	.string "EN LA CIUDAD:\l"
	.string "-Mínimo de horas de trabajo\l"
	.string "diarias requeridas: 10 horas 5\l"
	.string "días por semana.\l"
	.string "-Inversión de 1500 dólares al mes\l"
	.string "por habitante en I+D\l"
	.string "- Ser un entrenador muy superior a\l"
	.string "la media (en el 20% bueno)\l"
	.string "- Actitud permanente de mejora,\l"
	.string "autorealización, optimización del\l"
	.string "rendimiento y fidelidad hacia\l"
	.string "SILPH$"

SaffronCity_Combate_Andra_Izq_Arriba::
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Combate_Andra_Move_1
waitmovement 0x0
goto SaffronCity_Combate_Andra

SaffronCity_Combate_Andra_Izq_Centro::
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Combate_Andra_Move_1.1
waitmovement 0x0
goto SaffronCity_Combate_Andra

SaffronCity_Combate_Andra_Izq_Abajo::
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Combate_Andra_Move_1.2
waitmovement 0x0
goto SaffronCity_Combate_Andra

SaffronCity_Combate_Andra_Der_Arriba::
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Combate_Andra_Move_1.3
waitmovement 0x0
goto SaffronCity_Combate_Andra

SaffronCity_Combate_Andra_Der_Centro::
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Combate_Andra_Move_1.4
waitmovement 0x0
goto SaffronCity_Combate_Andra

SaffronCity_Combate_Andra_Der_Abajo::
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Combate_Andra_Move_1.5
waitmovement 0x0
goto SaffronCity_Combate_Andra

SaffronCity_Combate_Andra::
playse SE_PIN
applymovement 15, SaffronCity_Combate_Andra_Move_2
applymovement 18, SaffronCity_Combate_Andra_Move_2
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_1 MSGBOX_AUTOCLOSE
msgbox SaffronCity_Combate_Andra_Texto_2 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_3
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_3 MSGBOX_AUTOCLOSE
applymovement 18, SaffronCity_Combate_Andra_Move_4
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_4 MSGBOX_AUTOCLOSE
msgbox SaffronCity_Combate_Andra_Texto_5 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_5
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_6 MSGBOX_AUTOCLOSE
msgbox SaffronCity_Combate_Andra_Texto_7 MSGBOX_AUTOCLOSE
delay 20
applymovement 18, SaffronCity_Combate_Andra_Move_6
waitmovement 0x0
setflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
removeobject 18
playse SE_SLIDING_DOOR
delay 20
applymovement 15, SaffronCity_Combate_Andra_Move_7
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_8 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_4
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_9 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_8
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_10 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_6
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_11 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_8
waitmovement 0x0
playse 559
msgbox SaffronCity_Combate_Andra_Texto_12 MSGBOX_AUTOCLOSE
msgbox SaffronCity_Combate_Andra_Texto_13 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_9
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_14 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
trainerbattle_no_intro TRAINER_ANDRA_5, SaffronCity_Combate_Andra_Texto_15
msgbox SaffronCity_Combate_Andra_Texto_16 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_6
waitmovement 0x0
setflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
removeobject 15
playse SE_SLIDING_DOOR
setvar VAR_UNUSED_0x40F7, 73
release
end

SaffronCity_Combate_Andra_Texto_1:
.string "PETREL: Bien, ya estamos todos, la\n"
	.string "invasión a SILPH puede dar\l"
	.string "comienzo.$"

SaffronCity_Combate_Andra_Texto_2:
.string "Por lo que hemos podido averiguar,\n"
	.string "el PRESIDENTE se encuentra en el\l"
	.string "despacho del 11F,\l"
	.string "protegido por su guardia personal,\l"
	.string "siendo además imposible acceder\l"
	.string "únicamente subiendo por el\l"
	.string "ascensor, hemos de usar las\l"
	.string "baldosas de teletransporte. Y aún\l"
	.string "más, solo podremos entrar en\l"
	.string "su despacho si obtenemos la LLAVE\l"
	.string "MAGNÉTICA necesaria para abrir su\l"
	.string "puerta.$"

SaffronCity_Combate_Andra_Texto_3:
.string "ANDRA: Tenemos entonces que\n"
	.string "encontrar primero esa llave,\l"
	.string "¿alguna idea de dónde puede estar?$"

SaffronCity_Combate_Andra_Texto_4:
.string "PETREL: Un objeto así solo debe de\n"
	.string "estar al acceso de miembros\l"
	.string "importantes dentro de la empresa,\l"
	.string "no nos quedará otra que registrar\l"
	.string "a cada uno de los trabajadores.$"

SaffronCity_Combate_Andra_Texto_5:
.string "SILPH y el gobierno de LANCE no se\n"
	.string "llevan muy bien, de modo que es de\l"
	.string "esperar que parte de la ÉLITE 4 no\l"
	.string "se presente de nuevo como en la\l"
	.string "CENTRAL ENERGÍA, aún así, hay que\l"
	.string "estar preparados para todo lo que\l"
	.string "pueda pasar, una vez encontremos\l"
	.string "esa LLAVE MAGNÉTICA, avisaremos a\l"
	.string "GIOVANNI inmediatamente, y\l"
	.string "vosotros dos, os quedaréis al pie\l"
	.string "del cañón haciendo de escudo para\l"
	.string "que GIOVANNI pueda negociar\l"
	.string "tranquilamente con el PRESIDENTE\l"
	.string "sin ningún tipo de interferencias,\l"
	.string "¿ha quedado claro?$"

SaffronCity_Combate_Andra_Texto_6:
.string "ANDRA: ¡No puedo esperar más,\n"
	.string "pasemos ya a la acción!$"

SaffronCity_Combate_Andra_Texto_7:
.string "PETREL: Esa es la actitud, vamos a\n"
	.string "ello, SILPH es nuestra.$"

SaffronCity_Combate_Andra_Texto_8:
.string "ANDRA: Una cosa {PLAYER}, aún no te\n"
	.string "he dado las gracias por lo de la\l"
	.string "CENTRAL ENERGÍA, con esta son ya 2\l"
	.string "veces las que has tenido que\l"
	.string "intervenir debido a mi incapacidad\l"
	.string "para cumplir la misión yo sola,\l"
	.string "contando esa primera vez en ISLA\l"
	.string "INTA con la CÓNSUL.$"

SaffronCity_Combate_Andra_Texto_9:
.string "Esta región es idónea para\n"
	.string "progresar y mejorar como\l"
	.string "entrenador, me sorprende el\l"
	.string "contraste que hay entre lugares\l"
	.string "como este y PUEBLO LAVANDA, pero\l"
	.string "todos al fin y al cabo con un\l"
	.string "ambiente único que les\l"
	.string "caracteriza.$"

SaffronCity_Combate_Andra_Texto_10:
.string "Ahora mismo mi equipo está en\n"
	.string "óptimas condiciones, ¿recuerdas el\l"
	.string "discurso de ATLAS nuestro primer\l"
	.string "día?\l"
	.string "La verdad es que he llegado ya más\l"
	.string "lejos de lo que podría imaginar, y\l"
	.string "aún así sigo viendo margen para\l"
	.string "seguir mejorando.$"

SaffronCity_Combate_Andra_Texto_11:
.string "Espero que este lugar y toda su\n"
	.string "tecnología estén a la altura de lo\l"
	.string "que puedo esperar, sin embargo{PAUSE 5}…{PAUSE 5}$"

SaffronCity_Combate_Andra_Texto_12:
.string "No veo ahora mismo mayor reto que\n"
	.string "enfrentarme a ti {PLAYER}, tú eres\l"
	.string "la verdadera vara de medir para mi\l"
	.string "equipo POKÉMON, el único al que\l"
	.string "aún no he podido derrotar en\l"
	.string "igualdad de condiciones.$"

SaffronCity_Combate_Andra_Texto_13:
.string "Desde nuestro combate en la BASE\n"
	.string "ROCKET he estado entrenando más\l"
	.string "duro que nunca, informándome\l"
	.string "acerca de los mejores POKÉMON de\l"
	.string "esta región, y de cómo mejorar a\l"
	.string "los que ya tengo{PAUSE 5}…{PAUSE 5}$"

SaffronCity_Combate_Andra_Texto_14:
.string "De EJECUTIVO ROCKET a EJECUTIVO\n"
	.string "ROCKET, ¡quiero que veas la fuerza\l"
	.string "incontenible de mi equipo!$"

SaffronCity_Combate_Andra_Texto_15:
.string "No puedo creerlo, ¿qué más puedo\n"
	.string "hacer?$"

SaffronCity_Combate_Andra_Texto_16:
.string "Esta vez estaba convencida de que\n"
	.string "podría derrotarte, que estúpida\l"
	.string "por mi parte, derrotaste a BRUNO y\l"
	.string "a 2 POKÉMON LEGENDARIOS, tal vez\l"
	.string "sea demasiado pronto, pero ten\l"
	.string "esto por cierto {PLAYER}, ¡mi\l"
	.string "límite está lejos de lo que has\l"
	.string "visto aquí hoy!$"

SaffronCity_Combate_Andra_Move_1:
walk_right
walk_right
walk_right
face_up
step_end

SaffronCity_Combate_Andra_Move_1.1:
walk_right
walk_right
walk_up
walk_right
face_up
step_end

SaffronCity_Combate_Andra_Move_1.2:
walk_right
walk_right
walk_up
walk_up
walk_right
face_up
step_end

SaffronCity_Combate_Andra_Move_1.3:
walk_left
walk_left
walk_left
walk_left
face_up
step_end

SaffronCity_Combate_Andra_Move_1.4:
walk_left
walk_left
walk_left
walk_up
walk_left
face_up
step_end

SaffronCity_Combate_Andra_Move_1.5:
walk_left
walk_left
walk_up
walk_left
walk_up
walk_left
face_up
step_end

SaffronCity_Combate_Andra_Move_2:
emote_exclamation_mark
walk_in_place_down
step_end

SaffronCity_Combate_Andra_Move_3:
face_right
step_end

SaffronCity_Combate_Andra_Move_4:
face_left
step_end

SaffronCity_Combate_Andra_Move_5:
walk_in_place_right
step_end

SaffronCity_Combate_Andra_Move_6:
face_up
step_end

SaffronCity_Combate_Andra_Move_7:
walk_right
face_up
walk_in_place_down
step_end

SaffronCity_Combate_Andra_Move_8:
face_down
step_end

SaffronCity_Combate_Andra_Move_9:
walk_in_place_down
step_end

SaffronCity_Secundaria_Motorista::
compare VAR_ROUTE133_STATE, 2
goto_if_eq SaffronCity_Secundaria_Motorista_3
compare VAR_ROUTE133_STATE, 1
goto_if_eq SaffronCity_Secundaria_Motorista_2
msgbox SaffronCity_Secundaria_Motorista_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox SaffronCity_Secundaria_Motorista_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 17, SaffronCity_Secundaria_Motorista_Move_1
waitmovement 0x0
applymovement 17, SaffronCity_Secundaria_Motorista_Move_3
waitmovement 0x0
msgbox SaffronCity_Secundaria_Motorista_Texto_3 MSGBOX_AUTOCLOSE
msgbox SaffronCity_Secundaria_Motorista_Texto_9 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq SaffronCity_Secundaria_Motorista_No
msgbox SaffronCity_Secundaria_Motorista_Texto_10 MSGBOX_AUTOCLOSE
applymovement 17, SaffronCity_Secundaria_Motorista_Move_2
waitmovement 0x0
msgbox SaffronCity_Secundaria_Motorista_Texto_11 MSGBOX_AUTOCLOSE
applymovement 17, SaffronCity_Secundaria_Motorista_Move_3
waitmovement 0x0
msgbox SaffronCity_Secundaria_Motorista_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE133_STATE, 1
release
end

SaffronCity_Secundaria_Motorista_2::
lock
faceplayer
msgbox SaffronCity_Secundaria_Motorista_Texto_8 MSGBOX_AUTOCLOSE
release
end

SaffronCity_Secundaria_Motorista_3::
delay 20
msgbox SaffronCity_Secundaria_Motorista_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 17, SaffronCity_Secundaria_Motorista_Move_1
waitmovement 0x0
applymovement 17, SaffronCity_Secundaria_Motorista_Move_3
waitmovement 0x0
msgbox SaffronCity_Secundaria_Motorista_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox SaffronCity_Secundaria_Motorista_Texto_5 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_OBTAIN_TMHM
msgbox SaffronCity_Secundaria_Motorista_Texto_6 MSGBOX_DEFAULT
givemon SPECIES_HITMONCHAN, 37, ITEM_MUSCLE_BAND
waitfanfare
msgbox SaffronCity_Secundaria_Motorista_Texto_7 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_BEDROOM_MOM
fadescreen 1
delay 20
removeobject 17
fadescreen 0
release
end


SaffronCity_Secundaria_Motorista_No::
msgbox SaffronCity_Secundaria_Motorista_Texto_13 MSGBOX_AUTOCLOSE
release
end

SaffronCity_Secundaria_Motorista_Move_1:
emote_exclamation_mark
step_end

SaffronCity_Secundaria_Motorista_Move_2:
walk_in_place_right
step_end

SaffronCity_Secundaria_Motorista_Move_3:
face_player
step_end

SaffronCity_Secundaria_Motorista_Texto_1:
.string "Ese vejestorio…\n"
	.string "Va lograr que todo KANTO odie a\l"
	.string "los MOTORISTAS{PAUSE 5}…{PAUSE 5}$"

SaffronCity_Secundaria_Motorista_Texto_2:
.string "…\n"
	.string "{PAUSE 5}…{PAUSE 5}$"

SaffronCity_Secundaria_Motorista_Texto_3:
.string "¡EJECUTIVO ROCKET {PLAYER}!\n"
	.string "¿No te has enterado?\l"
	.string "¡Quieren quitar los SUBTERRÁNEOS\l"
	.string "como punto de conexión entre\l"
	.string "CELESTE y CARMÍN, también entre\l"
	.string "AZULONA y LAVANDA!\l"
	.string "¡Lo peor es que van a echarnos la\l"
	.string "culpa a nosotros, los MOTORISTAS,\l"
	.string "por causar supuestos disturbios\l"
	.string "allí!\l"
	.string "¡Y todo lo que quieren es que la\l"
	.string "gente pase por CIUDAD AZAFRÁN,\l"
	.string "justo donde estará la nueva\l"
	.string "empresa que van a crear, a costa\l"
	.string "de nuestra reputación!$"

SaffronCity_Secundaria_Motorista_Texto_4:
.string "¡Guau!\n"
	.string "¡Eres increíble {PLAYER}!\l"
	.string "Entonces ha abandonado por el\l"
	.string "momento su idea de quitar las VÍAS\l"
	.string "SUBTERRÁNEAS!\l"
	.string "¡Espera a ver cuando se lo cuente\l"
	.string "a los demás!$"

SaffronCity_Secundaria_Motorista_Texto_5:
.string "Ahora entiendo el porqué de tu\n"
	.string "fama como ENTRENADOR excepcional,\l"
	.string "aquí tienes el POKÉMON del que te\l"
	.string "hablé.$"

SaffronCity_Secundaria_Motorista_Texto_6:
.string "¡¡OBTUVISTE UN HITMONCHAN AL\n"
	.string "NV.37!!$"

SaffronCity_Secundaria_Motorista_Texto_7:
.string "Lo cierto es que fue un regalo de\n"
	.string "mi amigo el MAESTRO KÁRATE, pero\l"
	.string "un MOTORISTA como yo no pinta nada\l"
	.string "con un POKÉMON como HITMONCHAN,\l"
	.string "espero que tú sepas usarlo mejor.\l"
	.string "Ahora si me voy {PLAYER}, sabes que\l"
	.string "el TEAM ROCKET siempre contará con\l"
	.string "nuestro apoyo.$"

SaffronCity_Secundaria_Motorista_Texto_8:
.string "¿Cómo va la misión?\n"
	.string "Recuerda, la persona que buscas\l"
	.string "suele pasar horas en el MUSEO DE\l"
	.string "CIUDAD PLATEADA, allí deberías de\l"
	.string "poder encontrarlo.$"

SaffronCity_Secundaria_Motorista_Texto_9:
.string "Solo alguien de tu poder e\n"
	.string "influencia puede poner en su lugar\l"
	.string "al empresario que está detrás de\l"
	.string "todo esto.\l"
	.string "Si nos ayudas con este problema,\l"
	.string "te daré un fuerte y raro POKÉMON.\l"
	.string "¿Qué dices?$"

SaffronCity_Secundaria_Motorista_Texto_10:
.string "¡Sabía que no nos fallarías!\n"
	.string "¡Ese es el espíritu de cooperación\l"
	.string "entre compatriotas!\l"
	.string "¡Escucha {PLAYER}!\l"
	.string "El hombre responsable de todo esto\l"
	.string "es un aficionado a los FÓSILES, y\l"
	.string "pasa horas en el MUSEO DE CIUDAD\l"
	.string "PLATEADA.$"

SaffronCity_Secundaria_Motorista_Texto_11:
.string "En realidad es el dueño de una\n"
	.string "empresa ferroviaria, que quiere\l"
	.string "conectar JOHTO con KANTO, pero\l"
	.string "cree que las VÍAS SUBTERRÁNEAS de\l"
	.string "la región afectarían a su negocio\l"
	.string "de seguir activas, es por ello por\l"
	.string "lo que quiere deshacerse de ellas\l"
	.string "alegando cualquier motivo.$"

SaffronCity_Secundaria_Motorista_Texto_12:
.string "Si alguien como tú le deja claro\n"
	.string "como funcionan aquí las cosas,\l"
	.string "mantendremos las VÍAS SUBTERRÁNEAS\l"
	.string "y nuestra reputación, confiamos en\l"
	.string "ti {PLAYER}.$"

SaffronCity_Secundaria_Motorista_Texto_13:
.string "Vaya, lo entiendo camarada, debes\n"
	.string "de estar ya muy solicitado por\l"
	.string "GIOVANNI.$"


Silph_Barrera::
compare VAR_UNUSED_0x40F7, 80
goto_if_gt Silph_Barrera_3
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Silph_Barrera_2
release
end

Silph_Barrera_2::
lock
applymovement OBJ_EVENT_ID_PLAYER, Silph_Barrera_Move_1
waitmovement 0x0
msgbox Silph_Barrera_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Silph_Barrera_Move_2
waitmovement 0x0
release
end

Silph_Barrera_3::
release
end

Silph_Barrera_Texto_1:
.string "(Si entro ahora aquí puedo echar a\n"
	.string "perder toda la misión).$"

Silph_Barrera_Move_1:
walk_in_place_down
step_end

Silph_Barrera_Move_2:
walk_slow_down
step_end
