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
.string "No se preocupe, señor.\n"
.string "La ciudad nos pertenece, ¡puede\l"
.string "centrarse en asaltar SILPH!$"


SaffronCity16::
lock     
faceplayer     
msgbox SaffronCity_Text_16, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_16:
.string "Le estábamos esperando, señor.\n"
.string "¡Con usted como EJECUTIVO al\l"
.string "mando no podemos fallar!\p"
.string "Tengo órdenes directas de GIOVANNI\n"
.string "de bloquearle el paso a ese ROJO\l"
.string "fingiendo quedarme dormido, según\l"
.string "nuestro LÍDER, a ROJO le importa\l"
.string "un bledo lo que hagamos o no aquí,\l"
.string "solo entrará si ve que físicamente\l"
.string "tiene vía libre a la puerta, y la\l"
.string "tendrá…\p"
.string "¡Cuando nosotros queramos!\n"
.string "¡Jo, jo, jo!\p"
.string "¡VIVA EL TEAM ROCKET!\p"
.string "¡HAIL EJECUTIVO {PLAYER}!\p"
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
	.string "a un POKÉMON que la convencional\l"
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
	.string "diarias requeridas: 10 horas, 5\l"
	.string "días por semana.\l"
	.string "-Inversión de 1500 dólares al mes\l"
	.string "por habitante en I+D\l"
	.string "- Ser un entrenador muy superior a\l"
	.string "la media (en el percentil 10%)\l"
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
delay 10
msgbox SaffronCity_Combate_Andra_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox SaffronCity_Combate_Andra_Texto_2.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, SaffronCity_Combate_Andra_Move_3
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_3 MSGBOX_AUTOCLOSE
applymovement 18, SaffronCity_Combate_Andra_Move_4
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox SaffronCity_Combate_Andra_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 18, SaffronCity_Combate_Andra_Move_5.1
waitmovement 0x0
delay 10
msgbox SaffronCity_Combate_Andra_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, SaffronCity_Combate_Andra_Move_5
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_6 MSGBOX_AUTOCLOSE
msgbox SaffronCity_Combate_Andra_Texto_7 MSGBOX_AUTOCLOSE
delay 20
applymovement 18, SaffronCity_Combate_Andra_Move_6
waitmovement 0x0
setflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
playse SE_SLIDING_DOOR
opendoor 33, 30
waitdooranim
applymovement 18, VerdanturfTown_Move_22
waitmovement 0x0
removeobject 18
closedoor 33, 30
waitdooranim
applymovement 15, SaffronCity_Combate_Andra_Move_7
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_8 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 15, SaffronCity_Combate_Andra_Move_9
waitmovement 0x0
waitse
delay 10
msgbox SaffronCity_Combate_Andra_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, SaffronCity_Combate_Andra_Move_4.1
waitmovement 0x0
delay 10
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
delay 10
playse SE_BREAKABLE_DOOR
applymovement 15, SaffronCity_Combate_Andra_Move_9
waitmovement 0x0
waitse
delay 10
msgbox SaffronCity_Combate_Andra_Texto_14.1 MSGBOX_AUTOCLOSE
delay 10
clearflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
trainerbattle_no_intro TRAINER_ANDRA_5, SaffronCity_Combate_Andra_Texto_15
msgbox SaffronCity_Combate_Andra_Texto_16 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_6
waitmovement 0x0
setflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
playse SE_SLIDING_DOOR
opendoor 33, 30
waitdooranim
applymovement 15, VerdanturfTown_Move_22
waitmovement 0x0
removeobject 15
closedoor 33, 30
waitdooranim
setvar VAR_UNUSED_0x40F7, 73
release
end

SaffronCity_Combate_Andra_Move_5.1:
delay_8
face_up
delay_16
delay_8
face_down
delay_8
step_end

SaffronCity_Combate_Andra_Texto_1:
.string "PETREL: Bien, ya estamos todos, la\n"
	.string "invasión a SILPH puede dar comienzo.$"

SaffronCity_Combate_Andra_Texto_2:
.string "Por lo que hemos podido averiguar, el\n"
	.string "PRESIDENTE se encuentra en el despacho\l"
	.string "del 11F, protegido por su guardia\l"
	.string "personal. Es además imposible acceder\l"
	.string "únicamente subiendo por el ascensor,\l"
	.string "hemos de usar las baldosas.$"

SaffronCity_Combate_Andra_Texto_2.1:
	.string "Y aún más, solo podremos entrar en\n"
	.string "su despacho si obtenemos la LLAVE\l"
	.string "MAGNÉTICA, necesaria para abrir su\l"
	.string "puerta.$"

SaffronCity_Combate_Andra_Texto_3:
.string "ANDRA: Tenemos entonces que encontrar\n"
	.string "primero esa llave.\l"
	.string "¿Alguna idea de dónde puede estar?$"

SaffronCity_Combate_Andra_Texto_4:
.string "PETREL: Un objeto así solo debe de\n"
	.string "estar al acceso de miembros importantes\l"
	.string "dentro de la empresa.\l"
	.string "No nos quedará otra que registrar\l"
	.string "a cada uno de los trabajadores.$"

SaffronCity_Combate_Andra_Texto_5:
.string "SILPH y el gobierno de LANCE no se\n"
	.string "llevan muy bien, de modo que es de\l"
	.string "esperar que parte de la ÉLITE 4 no\l"
	.string "se presente, tal y como ocurrió en la\l"
	.string "CENTRAL ENERGÍA.$"
	
SaffronCity_Combate_Andra_Texto_5.1:
	.string "Aun así, debemos estar preparados para\n"
	.string "todo lo que pueda pasar.\l"
	.string "Una vez encontremos esa LLAVE MAGNÉTICA,\l"
	.string "avisaremos a GIOVANNI inmediatamente, y\l"
	.string "vosotros dos os quedaréis al pie del\l"
	.string "del cañón haciendo de escudo para\l"
	.string "que GIOVANNI pueda negociar\l"
	.string "tranquilamente con el PRESIDENTE\l"
	.string "sin ningún tipo de interferencias,\l"
	.string "¿ha quedado claro?$"

SaffronCity_Combate_Andra_Texto_6:
.string "ANDRA: ¡No puedo esperar más,\n"
	.string "pasemos ya a la acción!$"

SaffronCity_Combate_Andra_Texto_7:
.string "PETREL: Esa es la actitud.\n"
	.string "Vamos a ello, SILPH es nuestra.$"

SaffronCity_Combate_Andra_Texto_8:
.string "ANDRA: Una cosa, {PLAYER}.\n"
	.string "Aún no te he dado las gracias por lo de\l"
	.string "la CENTRAL ENERGÍA, con esta son ya 2\l"
	.string "veces las que has tenido que intervenir\l"
	.string "debido a mi incapacidad para cumplir la\l"
	.string "misión yo sola. Aunque me tendieran una\l"
	.string "emboscada, eso no es excusa.$"
	
SaffronCity_Combate_Andra_Texto_8.1:
    .string "¡Debí haber podido con toda la policía,\n"
	.string "y después haber batido a ZAPDOS yo sola!$"

SaffronCity_Combate_Andra_Texto_9:
.string "Esta región es idónea para progresar y\n"
	.string "mejorar como ENTRENADOR, me sorprende el\l"
	.string "contraste que hay entre lugares como\l"
	.string "este y PUEBLO LAVANDA.\l"
	.string "Todos al fin y al cabo con un ambiente\l"
	.string "único que les caracteriza.$"

SaffronCity_Combate_Andra_Texto_10:
.string "Ahora mismo mi equipo está en\n"
	.string "óptimas condiciones.\l"
	.string "¿Recuerdas el discurso de ATLAS\l"
	.string "nuestro primer día?\l"
	.string "La verdad es que he llegado ya más\l"
	.string "lejos de lo que podría imaginar, y\l"
	.string "aun así, sigo viendo margen para\l"
	.string "seguir mejorando.$"

SaffronCity_Combate_Andra_Texto_11:
.string "Espero que este lugar y toda su\n"
	.string "tecnología estén a la altura de lo\l"
	.string "que puedo esperar, sin embargo{PAUSE 15}…{PAUSE 15}$"

SaffronCity_Combate_Andra_Texto_12:
.string "No veo ahora mismo mayor reto que\n"
	.string "enfrentarme a ti, {PLAYER}.\l"
	.string "Tú eres la verdadera vara de medir para\l"
	.string "mí, el único al que aún no he podido\l"
	.string "derrotar en igualdad de condiciones.$"

SaffronCity_Combate_Andra_Texto_13:
.string "Desde nuestro combate en la BASE ROCKET,\n"
	.string "he estado entrenando más duro que nunca,\l"
	.string "informándome acerca de los mejores\l"
	.string "POKÉMON de esta región, y de cómo\l"
	.string "mejorar a los que ya tengo{PAUSE 5}…{PAUSE 5}$"

SaffronCity_Combate_Andra_Texto_14:
.string "De EJECUTIVO a EJECUTIVO{PAUSE 15}…{PAUSE 15}$"

SaffronCity_Combate_Andra_Texto_14.1:
	.string "¡Quiero que veas la arrolladora\n"
	.string "fuerza de mi equipo!$"

SaffronCity_Combate_Andra_Texto_15:
.string "No puedo creerlo, ¿qué más puedo\n"
	.string "hacer?$"

SaffronCity_Combate_Andra_Texto_16:
.string "Esta vez estaba convencida de que\n"
	.string "podría derrotarte, que estúpida\l"
	.string "por mi parte: derrotaste a BRUNO y\l"
	.string "a 2 POKÉMON LEGENDARIOS.\l"
	.string "Quizás sea demasiado pronto, pero ten\l"
	.string "esto por cierto, {PLAYER}: ¡mi límite\l"
	.string "está lejos de lo que has visto aquí hoy!$"

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

SaffronCity_Combate_Andra_Move_4.1:
delay_16
face_left
delay_16
face_up
delay_16
face_right
delay_16
face_down
delay_16
walk_in_place_down
delay_8
step_end

SaffronCity_Combate_Andra_Move_5:
walk_in_place_right
step_end

SaffronCity_Combate_Andra_Move_6:
face_up
step_end

SaffronCity_Combate_Andra_Move_7:
walk_right
delay_16
face_up
delay_16
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
	.string "Va lograr que toda KANTO odie a\l"
	.string "los MOTORISTAS{PAUSE 5}…{PAUSE 5}$"

SaffronCity_Secundaria_Motorista_Texto_2:
.string "…\n"
	.string "{PAUSE 5}…{PAUSE 5}$"

SaffronCity_Secundaria_Motorista_Texto_3:
.string "¡EJECUTIVO {PLAYER}!\n"
	.string "¿No te has enterado?\l"
	.string "¡Quieren quitar los SUBTERRÁNEOS\l"
	.string "como punto de conexión entre CELESTE y\l"
	.string "CARMÍN, también entre AZULONA y LAVANDA!\l"
	.string "¡Lo peor es que van a echarnos la\l"
	.string "culpa a nosotros, los MOTORISTAS, por\l"
	.string "causar supuestos disturbios allí!\l"
	.string "¡Y todo lo que quieren es que la\l"
	.string "gente pase por CIUDAD AZAFRÁN,\l"
	.string "justo donde estará la nueva empresa\l"
	.string "que van a crear, a costa de nuestra\l"
	.string "reputación!$"

SaffronCity_Secundaria_Motorista_Texto_4:
.string "¡Guau!\n"
	.string "¡Eres increíble, {PLAYER}!\l"
	.string "Entonces, por ahora ha abandonado su\l"
	.string "idea de quitar las VÍAS SUBTERRÁNEAS!\l"
	.string "¡Espera a ver cuando se lo\l"
	.string "cuente a los demás!$"

SaffronCity_Secundaria_Motorista_Texto_5:
.string "Ahora entiendo el porqué de tu\n"
	.string "fama como ENTRENADOR excepcional, aquí\l"
	.string "tienes el POKÉMON del que te hablé.$"

SaffronCity_Secundaria_Motorista_Texto_6:
.string "¡¡OBTUVISTE UN HITMONCHAN AL NV.37!!$"

SaffronCity_Secundaria_Motorista_Texto_7:
.string "Lo cierto es que fue un regalo de\n"
	.string "mi amigo, el MAESTRO KÁRATE.\l"
	.string "Pero un MOTORISTA como yo no pinta\l"
	.string "nada con un POKÉMON como HITMONCHAN,\l"
	.string "espero que tú sepas usarlo mejor.\l"
	.string "Ahora si me voy, {PLAYER}, sabes que\l"
	.string "el TEAM ROCKET siempre contará con\l"
	.string "nuestro apoyo.$"

SaffronCity_Secundaria_Motorista_Texto_8:
.string "¿Cómo va la misión?\n"
	.string "Recuerda, la persona que buscas\l"
	.string "suele pasar horas en el MUSEO DE\l"
	.string "CIUDAD PLATEADA, allí deberías de\l"
	.string "poder encontrarlo.$"

SaffronCity_Secundaria_Motorista_Texto_9:
.string "Solo alguien de tu poder e influencia\n"
	.string "puede poner en su lugar al empresario\l"
	.string "que está detrás de todo esto.\l"
	.string "Si nos ayudas con este problema,\l"
	.string "te daré un fuerte y raro POKÉMON.\l"
	.string "¿Qué dices?$"

SaffronCity_Secundaria_Motorista_Texto_10:
.string "¡Sabía que no nos fallarías!\n"
	.string "¡Ese es el espíritu de cooperación\l"
	.string "entre compatriotas!\l"
	.string "¡Escucha, {PLAYER}!\l"
	.string "El hombre responsable de todo esto\l"
	.string "es un aficionado a los FÓSILES, y\l"
	.string "pasa horas en el MUSEO DE CIUDAD\l"
	.string "PLATEADA.$"

SaffronCity_Secundaria_Motorista_Texto_11:
.string "En realidad, es el dueño de una\n"
	.string "empresa ferroviaria, que quiere\l"
	.string "conectar JOHTO con KANTO.\l"
	.string "Él cree que las VÍAS SUBTERRÁNEAS de\l"
	.string "KANTO afectarían a su negocio.\l"
	.string "Por ello quiere deshacerse de ellas,\l"
	.string "sea como sea.$"

SaffronCity_Secundaria_Motorista_Texto_12:
.string "Si alguien como tú le deja claro\n"
	.string "como funcionan aquí las cosas,\l"
	.string "mantendremos las VÍAS SUBTERRÁNEAS\l"
	.string "y nuestra reputación.\l"
	.string "Confiamos en ti, {PLAYER}.$"

SaffronCity_Secundaria_Motorista_Texto_13:
.string "Vaya, lo entiendo, camarada.\n"
	.string "Debes de estar ya muy\l"
	.string "solicitado por GIOVANNI.$"


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
.string "-Si entro ahora aquí puedo echar a\n"
	.string "perder toda la misión.-$"

Silph_Barrera_Move_1:
walk_in_place_down
step_end

Silph_Barrera_Move_2:
walk_slow_down
step_end
