Silph_11F_MapScripts::
	.byte 0

Silph11F_1::
end



Silph11F_2::
lock     
faceplayer     
msgbox Silph11F_Text_2, MSGBOX_DEFAULT
release     
end

Silph11F_Text_2:
.string "SECRETARIA: Gracias por poner al\n"
.string "tanto a nuestro PRESIDENTE de todo\l"
.string "lo que este gobierno ha hecho por\l"
.string "la región, aunque no podamos\l"
.string "agadecerte de forma pública, tal\l"
.string "vez llegue el día…$"



Silph11F_4::
end



Silph11F_5::
end



Silph11F_6::
end


Silph11F_EventScript_Policia::
	trainerbattle_single TRAINER_KATELYN_5, Silph11F_Text_PoliciaIntro, Silph11F_Text_PoliciaDefeated
	msgbox Silph11F_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



Silph11F_EventScript_Policia2::
	trainerbattle_single TRAINER_NICOLAS_1, Silph11F_Text_Policia2Intro, Silph11F_Text_Policia2Defeated
	msgbox Silph11F_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



Silph11FDocumento_100::
msgbox Silph11FDocumento_Text_100, MSGBOX_SIGN   
end

Silph11FDocumento_Text_100:
.string "OFICINA CENTRAL DE SILPH S.A.\n"
	.string "P10$"

Silph_11F_Bill_Presidente::
msgbox Silph_11F_Bill_Presidente_Texto_1 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_2 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_3 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_4 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_5 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_6 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_7 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_8 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_9 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_10 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_11 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_12 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_13 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_14 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_15 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_16 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_17 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_18 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_19 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_20 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_21 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_22 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_23 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_24 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_25 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_26 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_27 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_28 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_29 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_30 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_31 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_32 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_33 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_34 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_35 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_36 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_37 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_38 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_39 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_40 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_41 MSGBOX_AUTOCLOSE
release
end

Silph_11F_Bill_Presidente_Texto_1:
.string "????: ¿Quién anda ahí?$"

Silph_11F_Bill_Presidente_Texto_2:
.string "PRESIDENTE: ¿Pero cómo es posible?\n"
	.string "Mi seguridad derrotada por un\l"
	.string "miembro del TEAM ROCKET, ¿cómo te\l"
	.string "llamas chico?$"

Silph_11F_Bill_Presidente_Texto_3:
.string "Así que {PLAYER}, escucha {PLAYER},\n"
	.string "puedo olvidar todo esto y hacer\l"
	.string "que trabajes para SILPH, un\l"
	.string "ENTRENADOR de tu nivel no tiene\l"
	.string "porqué desperdiciar su potencial\l"
	.string "en una organización como el TEAM\l"
	.string "ROCKET, si solo...$"

Silph_11F_Bill_Presidente_Texto_4:
.string "????: Ahórrese sus técnicas\n"
	.string "persuasivas con {PLAYER}\l"
	.string "PRESIDENTE, es conmigo con quién\l"
	.string "tiene que hablar.$"

Silph_11F_Bill_Presidente_Texto_5:
.string "GIOVANNI: ¡Gran trabajo {PLAYER}!\n"
	.string "Todo va según lo planeado, lo\l"
	.string "único que ahora necesito es tiempo\l"
	.string "para hablar con el PRESIDENTE,\l"
	.string "ANDRA está justo abajo, se ha\l"
	.string "encargado de escoltarme\l"
	.string "personalmente hasta aquí, ambos\l"
	.string "haréis guardia hasta que esta\l"
	.string "pequeña reunión de negocios\l"
	.string "termine.$"

Silph_11F_Bill_Presidente_Texto_6:
.string "Y ahora, señor PRESIDENTE, digame,\n"
	.string "¿qué opina de la forma en que esta\l"
	.string "región se ha llevado en los\l"
	.string "últimos años?\l"
	.string "¿Y si le dijera que hay\l"
	.string "alternativa, un cambio por el cual\l"
	.string "todos podemos salir beneficiados,\l"
	.string "desde usted y su empresa, a\l"
	.string "nosotros, y toda la población?\l"
	.string "Verá...$"

Silph_11F_Bill_Presidente_Texto_7:
.string "ANDRA: ¡Hey, {PLAYER}!\n"
	.string "¡Esta vez te me has adelantado,\l"
	.string "los policías de SILPH tienen un\l"
	.string "nivel parecido a nuestros ALTOS\l"
	.string "RANGOS después de todo!\l"
	.string "No me ha sido fácil encontrar a un\l"
	.string "empleado con una LLAVE MAGNÉTICA,\l"
	.string "pero parece que tenemos hasta 3\l"
	.string "contando la tuya, de sobra para\l"
	.string "nuestro plan de evasión de ese\l"
	.string "ROJO...$"

Silph_11F_Bill_Presidente_Texto_8:
.string "Míranos, hemos pasado de buscar\n"
	.string "FÓSILES en el MT.MOON a ser\l"
	.string "EJECUTIVOS ROCKETS, con la plena\l"
	.string "confianza de GIOVANNI al punto de\l"
	.string "estar aquí, asegurándonos de que\l"
	.string "nadie interrumpa una reunión vital\l"
	.string "para el futuro de todo el TEAM\l"
	.string "ROCKET.$"

Silph_11F_Bill_Presidente_Texto_9:
.string "¿Sabes qué?\n"
	.string "Después de que esta misión acabe,\l"
	.string "creo que visitaré ISLA CANELA, es\l"
	.string "el único lugar, junto a la LIGA\l"
	.string "POKÉMON, que aún no he explorado\l"
	.string "de la región, supuestamente allí\l"
	.string "se encuentra esa MANSIÓN POKÉMON\l"
	.string "donde crearon a ese MEWTWO,\l"
	.string "supuestamente el POKÉMON más\l"
	.string "fuerte que existe, ¿crees que\l"
	.string "GIOVANNI tiene realmente idea de\l"
	.string "dónde está?$"

Silph_11F_Bill_Presidente_Texto_10:
.string "MIGUEL: Vaya vaya, así que\n"
	.string "EJECUTIVO ROCKET, ¿eh {PLAYER}?\l"
	.string "No te han ido mal las cosas desde\l"
	.string "entonces, como puedes ver a mi\l"
	.string "tampoco.$"

Silph_11F_Bill_Presidente_Texto_11:
.string "????: Buen trabajo, tendrás tu\n"
	.string "ÁMBAR VIEJO tal como te prometi.$"

Silph_11F_Bill_Presidente_Texto_12:
.string "BILL: Volvemos a vernos {PLAYER},\n"
	.string "admito que te subestimé la primera\l"
	.string "vez que entraste por la fuerza a\l"
	.string "mi casa en RUTA 25, pensé que eras\l"
	.string "otro pobre RECLUTA sin más...$"

Silph_11F_Bill_Presidente_Texto_13:
.string "Sin embargo, tu error es pensar\n"
	.string "que un ROCKET, sea quien sea,\l"
	.string "tiene posibilidades ante BILL, el\l"
	.string "mayor coleccionista de POKÉMON del\l"
	.string "mundo.$"

Silph_11F_Bill_Presidente_Texto_14:
.string "ANDRA: ¡Solo eres un niño mimado\n"
	.string "al que le han dado todo en\l"
	.string "herencia, puedes comprar las\l"
	.string "herramientas, pero no la mente y\l"
	.string "el corazón de un verdadero\l"
	.string "entrenador, sin eso jamás\l"
	.string "derrotarás a alguien como {PLAYER}!$"

Silph_11F_Bill_Presidente_Texto_15:
.string "BILL: Chica insolente, no he\n"
	.string "venido hasta aquí para\l"
	.string "intercambiar palabra con una\l"
	.string "ROCKET más del montón con POKÉMON\l"
	.string "de clase baja más del montón, he\l"
	.string "venido hasta aquí para exigirle al\l"
	.string "PRESIDENTE que me proporcione la\l"
	.string "MÁSTER BALL antes incluso de que\l"
	.string "salga al mercado.$"

Silph_11F_Bill_Presidente_Texto_16:
.string "Como uno de los principales\n"
	.string "accionistas de SILPH, os exijo que\l"
	.string "os apartéis, si no dáis problemas\l"
	.string "quizá os deje escapar de aquí\l"
	.string "para que extendáis un poco más\l"
	.string "vuestra miserable existencia.$"

Silph_11F_Bill_Presidente_Texto_17:
.string "Con esa BALL tendré todo cuanto\n"
	.string "quiero, imagináos, las AVES\l"
	.string "LEGENDARIAS, incluso esa leyenda\l"
	.string "de MEW, podrán ser atrapadas y\l"
	.string "admiradas dentro de mi gran\l"
	.string "colección, los únicos POKÉMON que\l"
	.string "me faltan para que sea completa.$"

Silph_11F_Bill_Presidente_Texto_18:
.string "Ahora mismo solo sois dos\n"
	.string "monigotes casuales que se han\l"
	.string "puesto de obstáculo entre el\l"
	.string "PRESIDENTE y yo, vuestra\l"
	.string "mediocridad no va a impedir que\l"
	.string "hable con él, ¡apartaos es el\l"
	.string "último aviso!$"

Silph_11F_Bill_Presidente_Texto_19:
.string "ANDRA: Ni tú ni tus POKÉMON\n"
	.string "comprados nos intimidáis, nuestro\l"
	.string "LÍDER está teniendo una reunión\l"
	.string "muy importante con el PRESIDENTE\l"
	.string "en estos momentos, no vas a ir a\l"
	.string "ningún lado, quieras o no.$"

Silph_11F_Bill_Presidente_Texto_20:
.string "BILL: No he tenido menor problema\n"
	.string "en derrotar a vuestro EJECUTIVO\l"
	.string "PETREL, y no lo voy a tener con\l"
	.string "vosotros, os he avisado.$"

Silph_11F_Bill_Presidente_Texto_21:
.string "Encárgate de la chica, {PLAYER} es\n"
	.string "mío, merece ser castigado por el\l"
	.string "numerito que montó en mi casa.$"

Silph_11F_Bill_Presidente_Texto_22:
.string "C.MIGUEL: A sus órdenes señor BILL.$"

Silph_11F_Bill_Presidente_Texto_23:
.string "BILL: ¿Sabes una cosa {PLAYER}?\n"
	.string "Existen varios tipos de POKÉMON\l"
	.string "raros, SLOWPOKE, CUBONE, son esos\l"
	.string "pobres POKÉMON con los que esos\l"
	.string "POKEMANÍACOS se contentan y tratan\l"
	.string "de imitarme, creen que así pueden\l"
	.string "autoproclamarse coleccionistas y\l"
	.string "compartir profesión conmigo.$"

Silph_11F_Bill_Presidente_Texto_24:
.string "Pobres ingenuos, te diré una cosa\n"
	.string "de los POKÉMON raros, los de\l"
	.string "verdad, la única realidad es que\l"
	.string "los POKÉMON más raros que existen\l"
	.string "son también los más fuertes, ¿no\l"
	.string "lo crees?\l"
	.string "¡Te mostraré la flor y nata de mi\l"
	.string "colección!$"

Silph_11F_Bill_Presidente_Texto_25:
.string "¿¡C-cómo!?\n"
	.string "¡Pero tengo a los mejores conmigo!$"

Silph_11F_Bill_Presidente_Texto_26:
.string "ANDRA: ¡Jah!\n"
	.string "¡Esos FÓSILES no son suficientes\l"
	.string "para tumbar a mi equipo\l"
	.string "científico, aunque te los haya\l"
	.string "dado BILL!$"

Silph_11F_Bill_Presidente_Texto_27:
.string "BILL: No es posible...\n"
	.string "Tengo a PORYGON2, lo último en\l"
	.string "tecnología desarrollada por la\l"
	.string "propia SILPH, y un equipo con los\l"
	.string "POKÉMON más fuertes y raros de\l"
	.string "esta región.$"

Silph_11F_Bill_Presidente_Texto_28:
.string "C.MIGUEL: ¡Señor BILL!\n"
	.string "¡Vámonos antes de que el resto de\l"
	.string "ROCKET se den cuenta de nuestro\l"
	.string "fracaso, podría ser peligroso, ya\l"
	.string "sabe las ganas que algunos ROCKET\l"
	.string "le tienen a usted!$"

Silph_11F_Bill_Presidente_Texto_29:
.string "BILL: De modo que tú ganas, ¿eh?\n"
	.string "Nadie nunca me ha negado algo\l"
	.string "{PLAYER}, si quiero esa MÁSTER BALL\l"
	.string "la obtendré de un modo u otro, lo\l"
	.string "único que has conseguido hoy aquí\l"
	.string "es cavar tu propia tumba, nadie se\l"
	.string "mete con BILL, el mayor\l"
	.string "coleccionista del mundo, la\l"
	.string "próxima vez que nos encontremos te\l"
	.string "aplastaré con un poder con el que\l"
	.string "no podrás siquiera soñar.$"

Silph_11F_Bill_Presidente_Texto_30:
.string "GIOVANNI: ¡ANDRA!¡{PLAYER}!\n"
	.string "Todo ha acabado, la negociación ha\l"
	.string "sido todo un éxito, no sólo he\l"
	.string "logrado que SILPH nos proporcione\l"
	.string "la MÁSTER BALL, sino que la retire\l"
	.string "del mercado para evitar que\l"
	.string "cualquier otro pueda adquirirla, a\l"
	.string "partir de hoy hemos ganado un\l"
	.string "nuevo aliado muy poderoso, que\l"
	.string "será visto por los medios como\l"
	.string "víctima de nuestra codicia, ahora\l"
	.string "sólo queda la parte más fácil:\l"
	.string "actuar ante ese egocéntrico de\l"
	.string "ROJO para que crea que es él el\l"
	.string "que sabe de qué va la cosa y el\l"
	.string "único que sabe entrenar a sus\l"
	.string "POKÉMON, no usaré POKÉMON de más\l"
	.string "del nivel 40-41 para su combate,\l"
	.string "con eso será suficiente, ya hemos\l"
	.string "ganado la lealtad de SILPH siempre\l"
	.string "y cuando cumplamos nuestra parte\l"
	.string "del trato.$"

Silph_11F_Bill_Presidente_Texto_31:
.string "ANDRA: ¿Qué parte del trato señor?$"

Silph_11F_Bill_Presidente_Texto_32:
.string "GIOVANNI: A su debido tiempo\n"
	.string "ANDRA, tendremos ocasión de hablar\l"
	.string "de ello cuando finiquitemos esto,\l"
	.string "por el momento ambos quedáis\l"
	.string "retirados de esta misión, ya\l"
	.string "habéis cumplido con creces y no\l"
	.string "quiero que ese ROJO se tope por\l"
	.string "error con dos EJECUTIVOS de\l"
	.string "vuestra categoría, tenéis unas\l"
	.string "merecidas vacaciones para hacer lo\l"
	.string "que os plazca y visitar lo que os\l"
	.string "quede por ver de esta bella\l"
	.string "región.$"

Silph_11F_Bill_Presidente_Texto_33:
.string "Aquí tenéis vuestra recompensa, a\n"
	.string "pesar de que la lealtad de una\l"
	.string "empresa como SILPH no se pueda\l"
	.string "comprar, aceptadla.$"

Silph_11F_Bill_Presidente_Texto_34:
.string "¡¡Acabas de facturar 400000\n"
	.string "POKÉS!!$"

Silph_11F_Bill_Presidente_Texto_35:
.string "Y esto es de parte del PRESIDENTE,\n"
	.string "en muestra de agradecimiento por\l"
	.string "ambos garantizar la privacidad de\l"
	.string "nuestra conversación.$"

Silph_11F_Bill_Presidente_Texto_36:
.string "¡HAS RECIBIDO UN PORYGON AL NV:35!$"

Silph_11F_Bill_Presidente_Texto_37:
.string "Es un PORYGON, el primer POKÉMON\n"
	.string "creado por el hombre, que se vende\l"
	.string "a precio de oro en nuestro CASINO,\l"
	.string "el PRESIDENTE ha tenido el detalle\l"
	.string "de equiparle con la MEJORA a los\l"
	.string "vuestros, una actualización que\l"
	.string "llevan años desarrollando para\l"
	.string "mejorarlo, sólo tendréis que usar\l"
	.string "este objeto sobre el PORYGON como\l"
	.string "si de una piedra se tratara y\l"
	.string "evolucionará en PORYGON2, según el\l"
	.string "PRESIDENTE, sólo una persona ha\l"
	.string "tenido el honor de contar con ese\l"
	.string "POKÉMON antes que vosotros.$"

Silph_11F_Bill_Presidente_Texto_38:
.string "Bien, podéis retiraros, os avisaré\n"
	.string "cuando pongamos en marcha nuestro\l"
	.string "siguiente gran golpe, disfrutad de\l"
	.string "vuestras pequeñas vacaciones...y\l"
	.string "seguid mejorando.$"

Silph_11F_Bill_Presidente_Texto_39:
.string "Así que PORYGON2, de no ser porque\n"
	.string "se lo he visto usar a BILL en\l"
	.string "contra tuya, lo incluiría en mi\l"
	.string "equipo, pero jamás compartiré los\l"
	.string "mismos POKÉMON que ese prepotente\l"
	.string "con aires elitistas de BILL, me\l"
	.string "pensaré mejor cuál será el último\l"
	.string "POKÉMON que incluya en mi equipo...$"

Silph_11F_Bill_Presidente_Texto_40:
.string "ANDRA: ¡Ah, sí!\n"
	.string "¡La LLAVE MAGNÉTICA!\l"
	.string "¡Tenemos que dejarla en algún\l"
	.string "lugar accesible para ROJO!\l"
	.string "¡No te preocupes {PLAYER}, yo me\l"
	.string "encargaré de hacerlo, creo que\l"
	.string "tengo un lugar perfecto para\l"
	.string "-esconderla- de forma que pueda\l"
	.string "encontrarla, déjamelo a mi!$"

Silph_11F_Bill_Presidente_Texto_41:
.string "Le diré a AZUL que se quede\n"
	.string "haciendo guardia y así avise a\l"
	.string "GIOVANNI en cuanto ROJO llegue a\l"
	.string "su zona, no hay nada de que\l"
	.string "preocuparse {PLAYER}, está todo\l"
	.string "controlado...$"

Silph_11F_Bill_Presidente_Move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
walk_in_place_up
step_end

Silph_11F_Bill_Presidente_Move_2:
walk_right
step_end

Silph_11F_Bill_Presidente_Move_3:
emote_exclamation_mark
step_end

Silph_11F_Bill_Presidente_Move_4:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_in_place_right
step_end

Silph_11F_Bill_Presidente_Move_5:
face_left
step_end

Silph_11F_Bill_Presidente_Move_6:
walk_left
walk_left
walk_left
walk_down
walk_in_place_up
step_end

Silph_11F_Bill_Presidente_Move_7:
walk_right
walk_right
walk_right
walk_right
walk_in_place_up
step_end

Silph_11F_Bill_Presidente_Move_8:
walk_left
step_end

Silph_11F_Bill_Presidente_Move_9:
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
face_up
step_end

Silph_11F_Bill_Presidente_Move_10:
emote_exclamation_mark
walk_in_place_down
step_end

Silph_11F_Bill_Presidente_Move_11:
face_left
walk_in_place_down
step_end

Silph_11F_Bill_Presidente_Move_12:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
step_end

Silph_11F_Bill_Presidente_Move_13:
face_left
step_end

Silph_11F_Bill_Presidente_Move_14:
walk_in_place_left
step_end

Silph_11F_Bill_Presidente_Move_15:
face_right
step_end

Silph_11F_Bill_Presidente_Move_16:
face_up
step_end

Silph_11F_Bill_Presidente_Move_17:
face_down
step_end

Silph_11F_Bill_Presidente_Move_18:
walk_right
step_end

Silph_11F_Bill_Presidente_Move_19:
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
step_end

Silph_11F_Bill_Presidente_Move_20:
emote_exclamation_mark
walk_in_place_right
step_end

Silph_11F_Bill_Presidente_Move_21:
walk_down
walk_in_place_left
step_end

Silph_11F_Bill_Presidente_Move_22:
walk_up
walk_in_place_left
step_end

Silph_11F_Bill_Presidente_Move_23:
walk_up
walk_in_place_down
step_end

Silph_11F_Bill_Presidente_Move_24:
walk_in_place_down
step_end

Silph_11F_Bill_Presidente_Move_25:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Silph_11F_Bill_Presidente_Move_26:
walk_in_place_left
walk_in_place_down
step_end
