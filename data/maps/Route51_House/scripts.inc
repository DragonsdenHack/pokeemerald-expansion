Route51_House_MapScripts::
	.byte 0

Route51House1::
lock     
faceplayer     
msgbox Route51_House1_Text_1, MSGBOX_DEFAULT
release     
end

Route51_House1_Text_1:
.string "Ah, el tiempo…\n"
.string "Nunca se ha detenido, y nunca lo\l"
.string "hará, pronto el siglo XX morirá\l"
.string "para dar paso al XXI, y todo lo\l"
.string "acontecido en este período, ahora\l"
.string "vivo y presente, irá alejándose\l"
.string "para dar paso a nuevos eventos,\l"
.string "cada vez más, primero para ser\l"
.string "visto de igual forma que nosotros\l"
.string "vemos ahora los años 60s, y de\l"
.string "ahí, a difuminarse cada vez más en\l"
.string "un océano de eventos que engorda\l"
.string "sin cesar.\l"
.string "Sin embargo, en el pasado nada se\l"
.string "pierde, para bien o para mal, todo\l"
.string "lo acontecido se vuelve\l"
.string "imborrable, inmortal…\l"
.string "La cuestión es, ¿podrás tú influir\l"
.string "en lo que aún hay por escribir en\l"
.string "ese cuaderno?$"



Route51House2::
lock     
faceplayer     
msgbox Route51_House1_Text_2, MSGBOX_DEFAULT
release     
end

Route51_House1_Text_2:
.string "¡He visto el futuro!\n"
.string "¡En octubre de 1996 ese ENTRENADOR\l"
.string "inició su aventura!\l"
.string "¡En noviembre de 1999 otro\l"
.string "ENTRENADOR, de características\l"
.string "similares, aunque mejoradas, dará\l"
.string "también comienzo a su aventura,\l"
.string "que, al igual que ocurrió con el\l"
.string "primero, no será más que una\l"
.string "sucesión de causas y efectos\l"
.string "orquestados!$"



Route51HouseDocumento_100::
lock     
msgbox Route51HouseDocumento_Text_100, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes2, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes3, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes4, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes5, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes6, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes7, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes8, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes9, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes10, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes11, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes12, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes13, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes14, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes15, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes16, MSGBOX_DEFAULT
compare VAR_UNUSED_0x40F7, 152
goto_if_gt Route51House_Post_Reunion
release
end

Route51House_Post_Reunion::
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes17, MSGBOX_DEFAULT
compare VAR_UNUSED_0x40F7, 176
goto_if_gt Route51House_Post_Esencia
release
end

Route51House_Post_Esencia::
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes18, MSGBOX_DEFAULT
release
end



Route51HouseDocumento_Text_100:
    .string "RECOPILACIÓN DE LOS PRINCIPALES\n"
	.string "EVENTOS DE KANTO-JOHTO EN SU\l"
	.string "HISTORIA RECIENTE:$"

Route51HouseDocumento_Text_100YesNo:
.string "¿Quieres leerla?$"

Route51HouseDocumento_Text_100YesNo2:
.string "¿Seguir leyendo?$"

Route51HouseDocumento_100No::
release
end

Route51HouseDocumento_Text_100Yes:
    .string "15 de Enero de 1992: JOHTO declara\n"
	.string "la guerra a KANTO, LANCE desea\l"
	.string "hacerse con el control de las dos\l"
	.string "regiones y demostrar su poder como\l"
	.string "ENTRENADOR, los efectivos de\l"
	.string "JOHTO, sin embargo, son\l"
	.string "insuficientes como para dañar a\l"
	.string "KANTO, más avanzada\l"
	.string "tecnológicamente, e igualmente con\l"
	.string "ENTRENADORES experimentados, entre\l"
	.string "los que se destacan OAK y\l"
	.string "GIOVANNI.$"

Route51HouseDocumento_Text_100Yes2:
    .string "6 de Mayo de 1992: LANCE realiza\n"
	.string "una nueva ofensiva, esta vez con\l"
	.string "las BESTIAS de JOHTO y el LT.SURGE\l"
	.string "en sus filas, el caos que provocan\l"
	.string "los LEGENDARIOS, y el orden de los\l"
	.string "efectivos de JOHTO debido al\l"
	.string "liderazgo del LT.SURGE equilibran\l"
	.string "la balanza.$"

Route51HouseDocumento_Text_100Yes3:
    .string "1 de Junio de 1992: Viendo el\n"
	.string "panorama, los mejores ENTRENADORES\l"
	.string "de KANTO deciden tomar medidas,\l"
	.string "GIOVANNI, junto con OAK y todo un\l"
	.string "equipo de investigación deciden\l"
	.string "responer con tecnología al impulso\l"
	.string "de los LEGENDARIOS de JOHTO,\l"
	.string "concluyen que el ADN de MEW,\l"
	.string "descubierto en un inicio por\l"
	.string "MADAMME BOSS, es el más indicado\l"
	.string "para manipular el poder de un\l"
	.string "POKÉMON.$"

Route51HouseDocumento_Text_100Yes4:
    .string "5 de Julio de 1992: Después de una\n"
	.string "exhaustiva búsqueda, GIOVANNI y su\l"
	.string "equipo logran avistar a MEW y\l"
	.string "obtener su ADN, la victoria en la\l"
	.string "guerra comienza a decantarse a\l"
	.string "favor de JOHTO.$"

Route51HouseDocumento_Text_100Yes5:
    .string "6 de Febrero de 1993: Miles de\n"
	.string "pruebas y experimentos fallidos\l"
	.string "después, MEWTWO nace, la gran\l"
	.string "esperanza de KANTO, quién con sus\l"
	.string "poderes PSÍQUICOS mantendrá a\l"
	.string "raya a los LEGENDARIOS de JOHTO,\l"
	.string "inferiores en poder base.\l"
	.string "No obstante, aún está lejos de ser\l"
	.string "viable para el combate.$"

Route51HouseDocumento_Text_100Yes6:
    .string "1 de Septiembre de 1993: Después\n"
	.string "de 20 meses de guerra, el\l"
	.string "deterioro de KANTO se hace cada\l"
	.string "vez más notorio, por otro lado,\l"
	.string "GIOVANNI y OAK prolongan la\l"
	.string "rendición, con la esperanza puesta\l"
	.string "en MEWTWO como punto de inflexión,\l"
	.string "no obstante, ultimando los\l"
	.string "preparativos para su entrada en la\l"
	.string "guerra, su inmenso poder sale de\l"
	.string "control, destrozando el\l"
	.string "laboratorio y desapareciendo para\l"
	.string "siempre.$"

Route51HouseDocumento_Text_100Yes7:
    .string "17 de Septiembre de 1993: A KANTO\n"
	.string "no le queda más remedio que\l"
	.string "rendirse, cargando GIOVANNI con\l"
	.string "toda la culpa del bando perdedor,\l"
	.string "mientras OAK ofrece sus servicios\l"
	.string "como científico a las órdenes del\l"
	.string "nuevo gobierno de LANCE.\l"
	.string "GIOVANNI desaparece antes de ser\l"
	.string "detenido.$"

Route51HouseDocumento_Text_100Yes8:
    .string "12 de Marzo de 1994: Primeras\n"
	.string "actuaciones del TEAM ROCKET como\l"
	.string "organización criminal, aunque a\l"
	.string "escala muy pequeña, insuficientes\l"
	.string "como para llegar a oídos del nuevo\l"
	.string "gobierno.$"

Route51HouseDocumento_Text_100Yes9:
    .string "26 de Septiembre de 1996: Casi 3 años\n"
	.string "después del fin de la guerra,\l"
	.string "KANTO se ha recuperado en tiempo\l"
	.string "récord de todo el daño humano y\l"
	.string "material causado por la guerra,\l"
	.string "hasta el punto de que, a ojos de\l"
	.string "cualquier habitante que fuere\l"
	.string "colocado en este momento\l"
	.string "histórico sin darle información\l"
	.string "alguna del pasado, pareciere que\l"
	.string "tal guerra jamás hubiere ocurrido.$"

Route51HouseDocumento_Text_100Yes10:
    .string "15 de Octubre de 1996: Un joven\n"
	.string "ENTRENADOR inicia su aventura en\l"
	.string "PUEBLO PALETA, con el objetivo de\l"
	.string "ganar las 8 MEDALLAS y desafiar a\l"
	.string "un ALTO MANDO que hasta ahora se\l"
	.string "ha mantenido intocable.\l"
	.string "En paralelo, otro joven ENTRENADOR\l"
	.string "se enrola en el TEAM ROCKET,\l"
	.string "organización que en los últimos\l"
	.string "meses ha ido creciendo de forma\l"
	.string "exponencial, sin mayor pretensión\l"
	.string "que ascender en la organización y\l"
	.string "ser el mejor ENTRENADOR posible.\l"
	.string "Esta fecha, 16 de Octubre de 1996,\l"
	.string "es tenida como el -Año 0-, el\l"
	.string "punto de referencia a partir del\l"
	.string "cual se mira hacia el futuro, y se\l"
	.string "inician las primeras acciones que,\l"
	.string "de forma indirecta, irán siendo\l"
	.string "vitales para la paz verdadera\l"
	.string "entre KANTO y JOHTO.$"

Route51HouseDocumento_Text_100Yes11:
    .string "20 de Enero de 1996: El TEAM\n"
	.string "ROCKET invade SILPH, en un\l"
	.string "movimiento estratégico clave en\l"
	.string "contra del Gobierno de LANCE, pues\l"
	.string "finge su derrota definitiva al\l"
	.string "tiempo que convence a SILPH de\l"
	.string "actuar para cambiar la situación\l"
	.string "actual de KANTO, vuelven las\l"
	.string "esperanzas de recuperar a MEWTWO\l"
	.string "por parte del TEAM ROCKET, y el\l"
	.string "Golpe de Estado a la LIGA POKÉMON\l"
	.string "comienza a planearse.$"

Route51HouseDocumento_Text_100Yes12:
    .string "25 de Enero de 1996: BLAINE\n"
	.string "alerta al Gobierno de LANCE acerca\l"
	.string "de la verdadera situación del TEAM\l"
	.string "ROCKET, este impone restricciones\l"
	.string "hechas a medida para impedir un\l"
	.string "posible Golpe de Estado a la LIGA\l"
	.string "POKÉMON, el TEAM ROCKET, en un\l"
	.string "intento desesperado, confía en dos\l"
	.string "de sus EJECUTIVOS, los cuales\l"
	.string "cuentan con habilidades\l"
	.string "excepcionales para el combate\l"
	.string "POKÉMON, para hacerse con el\l"
	.string "título de la LIGA POKÉMON de forma\l"
	.string "clandestina.$"

Route51HouseDocumento_Text_100Yes13:
    .string "9 de Marzo de 1997: Apenas 5 meses\n"
	.string "después del inicio en paralelo de\l"
	.string "sus aventuras, los dos\l"
	.string "ENTRENADORES, el uno limitado en\l"
	.string "libertad y voluntad propias, y el\l"
	.string "otro siendo testigo de toda\l"
	.string "realidad, pero ambos igualmente\l"
	.string "representantes de la esencia que\l"
	.string "envuelve el combate POKÉMON, se\l"
	.string "baten en duelo por el título de\l"
	.string "CAMPEÓN, triunfando la combinación\l"
	.string "de acciones producto del libre\l"
	.string "albedrío del joven recluta del\l"
	.string "TEAM ROCKET, por sobre la perfecta\l"
	.string "ruta preestablecida del prodigio\l"
	.string "de PUEBLO PALETA.\l"
	.string "LANCE, viendo que su Gobierno\l"
	.string "peligraba, decide tomarse la\l"
	.string "justicia por su mano una vez más,\l"
	.string "retando también al joven recluta,\l"
	.string "pero igualmente perdiendo a pesar\l"
	.string "de la brutalidad de su equipo, la\l"
	.string "cual se vio frenada por el ingenio\l"
	.string "del joven ENTRENADOR, obligando\l"
	.string "con ello a la cesión de ciertos\l"
	.string "poderes por parte de LANCE.$"

Route51HouseDocumento_Text_100Yes14:
    .string "12 de Marzo de 1997: Se ratifica\n"
	.string "la cesión de poderes por parte de\l"
	.string "LANCE, así como se hacen públicas\l"
	.string "las nuevas leyes y condiciones\l"
	.string "bajo las que se gobernarán KANTO,\l"
	.string "mucho menos asfixiantes que las\l"
	.string "antiguas, todo gracias a un\l"
	.string "acuerdo que, en las sombras, el\l"
	.string "TEAM ROCKET obligó a LANCE\l"
	.string "a aceptar.$"

Route51HouseDocumento_Text_100Yes15:
    .string "1 de Mayo de 1997: OAK y BLAINE\n"
	.string "hallan la ubicación de MEWTWO, lo\l"
	.string "que, unido a varios experimentos\l"
	.string "que realizaron a espaldas del\l"
	.string "Gobierno de LANCE, les lleva a\l"
	.string "desaparecer, y, ante la incierta\l"
	.string "etapa de transición de KANTO,\l"
	.string "hacerse con el poder para\l"
	.string "instaurar un despotismo\l"
	.string "científico.$"

Route51HouseDocumento_Text_100Yes16:
    .string "30 de Junio de 1997: OAK es\n"
	.string "derrotado por el joven recluta,\l"
	.string "ahora ADMINISTRADOR JEFE, del TEAM\l"
	.string "ROCKET.\l"
	.string "Con ello el TEAM ROCKET establece\l"
	.string "contacto con JOHTO, en busca de\l"
	.string "recuperar las relaciones\l"
	.string "pre-guerra con KANTO, y\l"
	.string "expandirlas vía telecomunicaciones\l"
	.string "y medios de transporte.$"

Route51HouseDocumento_Text_100Yes17:
    .string "12 de Octubre de 1997: I\n"
	.string "CONFERENCIA KANTO-JOHTO, en TRIGAL\l"
	.string "y a puerta cerrada, donde se\l"
	.string "establece el protocolo a seguir\l"
	.string "para la unión entre regiones, casi\l"
	.string "un año después del -Año 0-, y con\l"
	.string "dos años vista para la consecución\l"
	.string "de todos los objetivos planteados.\l"
	.string "Entretanto, el joven ENTRENADOR se\l"
	.string "enriquece de la historia y cultura\l"
	.string "de JOHTO, alcanzando poco a poco\l"
	.string "ese punto de equilibrio y estado\l"
	.string "de flujo con sus POKÉMON.$"

Route51HouseDocumento_Text_100Yes18:
    .string "17 de Noviembre de 1997: El\n"
	.string "POKÉMON ESENCIA, junto con los 2\l"
	.string "creadores de todo lo conocido y\l"
	.string "por conocer, son despertdos por\l"
	.string "el actual LÍDER del CULTO LAVANDA.\l"
	.string "Los 3 POKÉMON, representantes del\l"
	.string "límite absoluto a lo que un\l"
	.string "POKÉMON puede alcanzar, se vuelven\l"
	.string "terrenales en el momento en el que\l"
	.string "son manejados por la imperfección\l"
	.string "de un humano, siendo omnipotentes\l"
	.string "en estado salvaje, ahora como 3\l"
	.string "POKÉMON más dentro de un combate\l"
	.string "reglado, le da la oportunidad al\l"
	.string "joven ENTRENADOR de poder\l"
	.string "competir, quién con sus POKÉMON en\l"
	.string "total armonía y pico máximo de sus\l"
	.string "posibilidades, logra el imposible\l"
	.string "de imponerse por sobre los 3\l"
	.string "POKÉMON, que vuelven a su eterno\l"
	.string "letargo.$"


Route51House_NPC3_Exorcista::
lock     
faceplayer     
msgbox Route51House_NPC3_Exorcista_Text_1, MSGBOX_DEFAULT
release     
end

Route51House_NPC3_Exorcista_Text_1:
	.string "Considera un grano de arena apilado\n"
	.string "sobre otros granos de arena, que\l"
	.string "enseguida serán cubiertos por nuevos\l"
	.string "granos de arena. Así ocurre en la vida,\l"
	.string "unos eventos apilados sobre otros que\l"
	.string "en breve serán cubiertos por eventos\l"
	.string "nuevos.$"

