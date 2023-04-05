Ecruteak_DanceTheater_MapScripts::
	.byte 0

DanceTheater1::
lock     
faceplayer     
msgbox Ecruteak_DanceTheater_Text_1, MSGBOX_DEFAULT
release     
end

Ecruteak_DanceTheater_Text_1:
.string "Solo una persona noble cuyo\n"
.string "vínculo con sus POKÉMON sea\l"
.string "inquebrantable podrá hacer\l"
.string "regresar al LEGENDARIO HO-OH a\l"
.string "TORRE CAMPANA una vez más.$"



DanceTheater2::
lock     
faceplayer     
msgbox Ecruteak_DanceTheater_Text_2, MSGBOX_DEFAULT
release     
end

Ecruteak_DanceTheater_Text_2:
.string "Los monjes de TORRE CAMPANA son\n"
.string "fascinantes. Desde el momento en\l"
.string "que se levantan, se entregan a la\l"
.string "perfección sea cual fuere el\l"
.string "propósito que persigan. No\l"
.string "encontrarás esa disciplina en\l"
.string "ningún otro lugar.$"



DanceTheater3::
lock     
faceplayer     
msgbox Ecruteak_DanceTheater_Text_3, MSGBOX_DEFAULT
release     
end

Ecruteak_DanceTheater_Text_3:
.string "¿Cómo?\n"
.string "¡Ah, si!\l"
.string "Tenemos varias evoluciones de\l"
.string "EEVEE, según el rival usamos las\l"
.string "mejor o peor entrenadas, ademas\l"
.string "algunos se enfadan si pierden, esa\l"
.string "gente no nos interesa así que les\l"
.string "damos lo que buscan, y a otra\l"
.string "cosa.$"



DanceTheater4::
lock     
faceplayer     
msgbox Ecruteak_DanceTheater_Text_4, MSGBOX_DEFAULT
release     
end

Ecruteak_DanceTheater_Text_4:
.string "Todos los EEVEE tienen su origen\n"
.string "en uno solo.\l"
.string "¿Cuál es?\l"
.string "Solo nuestro LÍDER DE GIMNASIO\l"
.string "tiene la respuesta a eso.$"



DanceTheater5::
lock     
faceplayer     
msgbox Ecruteak_DanceTheater_Text_5, MSGBOX_DEFAULT
release     
end

Ecruteak_DanceTheater_Text_5:
.string "Dicen que cada evolución de los 7\n"
.string "EEVEE representa cada uno los\l"
.string "7 colores del arco iris de HO-OH,\l"
.string "aunque creo que hay más de 7\l"
.string "evoluciones diferentes de EEVEE…$"



DanceTheater6::
lock     
faceplayer     
msgbox Ecruteak_DanceTheater_Text_6, MSGBOX_DEFAULT
release     
end

Ecruteak_DanceTheater_Text_6:
.string "Las CHICAS KIMONO no solo bailan,\n"
.string "también son extraordinarias con\l"
.string "los POKÉMON.\l"
.string "Yo siempre las desafio pero nunca\l"
.string "les he hecho ni un rasguño…\l"
.string "Ojalá mis POKÉMON fueran tan\l"
.string "elegantes como las CHICAS KIMONO…$"



DanceTheater7::
lock     
faceplayer     
msgbox Ecruteak_DanceTheater_Text_7, MSGBOX_DEFAULT
release     
end

Ecruteak_DanceTheater_Text_7:
.string "Cada CHICA KIMONO representa una\n"
.string "forma de EEVEE, pero también a su\l"
.string "TIPO concreto. Eso se ve reflejado\l"
.string "en el estilo de baile.$"



DanceTheater8::
lock     
faceplayer     
msgbox Ecruteak_DanceTheater_Text_8, MSGBOX_DEFAULT
release     
end

Ecruteak_DanceTheater_Text_8:
.string "Estas chicas llevan el arte de la\n"
.string "danza en las venas.\l"
.string "¡Las inmortalizaré en mi próximo\l"
.string "lienzo!$"



DanceTheater9::
lock     
faceplayer     
msgbox Ecruteak_DanceTheater_Text_9, MSGBOX_DEFAULT
release     
end

Ecruteak_DanceTheater_Text_9:
.string "Las CHICAS KIMONO son tan guapas…\n"
.string "Pero tienen que entrenar mucho.\l"
.string "Y deben de aprender los distintos\l"
.string "bailes antes de actuar.\l"
.string "Pero si te gusta algo, todo es\l"
.string "posible.$"



DanceTheater11::
lock     
faceplayer     
msgbox Ecruteak_DanceTheater_Text_11, MSGBOX_DEFAULT
release     
end

Ecruteak_DanceTheater_Text_11:
.string "¡Espectáculos como este mantienen\n"
.string "a JOHTO viva en su esencia!$"


Ecruteak_DanceTheater_Batallas::
lock
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_1
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 5, Ecruteak_DanceTheater_Batallas_Move_2
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_1 MSGBOX_AUTOCLOSE
applymovement 5, Ecruteak_DanceTheater_Batallas_Move_3
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Ecruteak_DanceTheater_Batallas_No
delay 15
playse SE_PIN
applymovement 5, Ecruteak_DanceTheater_Batallas_Move_4
waitmovement 0x0
applymovement 5, Ecruteak_DanceTheater_Batallas_Move_5
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_6
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_3 MSGBOX_AUTOCLOSE
delay 15
playse SE_M_TWISTER
applymovement 5, Ecruteak_DanceTheater_Batallas_Move_7
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BRYANT, Ecruteak_DanceTheater_Batallas_Texto_5
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_8
msgbox Ecruteak_DanceTheater_Batallas_Texto_6 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, Ecruteak_DanceTheater_Batallas_Move_3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_9
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_7 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_10
waitmovement 0x0
delay 15
playse SE_M_TWISTER
applymovement 4, Ecruteak_DanceTheater_Batallas_Move_7
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_SHAYLA, Ecruteak_DanceTheater_Batallas_Texto_9 
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_8
msgbox Ecruteak_DanceTheater_Batallas_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Ecruteak_DanceTheater_Batallas_Move_3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_9
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_11 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_11
waitmovement 0x0
delay 15
playse SE_M_TWISTER
applymovement 3, Ecruteak_DanceTheater_Batallas_Move_7
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_12 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_KYRA, Ecruteak_DanceTheater_Batallas_Texto_13
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_8
msgbox Ecruteak_DanceTheater_Batallas_Texto_14 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Ecruteak_DanceTheater_Batallas_Move_3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_9
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_15 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_10
waitmovement 0x0
delay 15
playse SE_M_TWISTER
applymovement 2, Ecruteak_DanceTheater_Batallas_Move_7
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_16 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_JAIDEN, Ecruteak_DanceTheater_Batallas_Texto_17 
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_8
msgbox Ecruteak_DanceTheater_Batallas_Texto_18 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Ecruteak_DanceTheater_Batallas_Move_3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_9
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_19 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_11
waitmovement 0x0
delay 15
playse SE_M_TWISTER
applymovement 1, Ecruteak_DanceTheater_Batallas_Move_7
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_20 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ALIX, Ecruteak_DanceTheater_Batallas_Texto_21
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_8
msgbox Ecruteak_DanceTheater_Batallas_Texto_22 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Ecruteak_DanceTheater_Batallas_Move_3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_12
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_23 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_13
waitmovement 0x0
delay 15
applymovement 3, Ecruteak_DanceTheater_Batallas_Move_3
waitmovement 0x0
delay 15
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_SACRED_ASH
msgbox Ecruteak_DanceTheater_Batallas_Texto_24.1 MSGBOX_DEFAULT
waitfanfare
msgbox Ecruteak_DanceTheater_Batallas_Texto_24 MSGBOX_AUTOCLOSE
delay 15
playse SE_EXIT
clearflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
addobject 10
applymovement 10, Ecruteak_DanceTheater_Batallas_Move_14
waitmovement 0x0
playse SE_PIN
applymovement 5, Ecruteak_DanceTheater_Batallas_Move_4
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_12
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_25 MSGBOX_AUTOCLOSE
applymovement 5, Ecruteak_DanceTheater_Batallas_Move_3
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_26 MSGBOX_AUTOCLOSE
msgbox Ecruteak_DanceTheater_Batallas_Texto_27 MSGBOX_AUTOCLOSE
delay 15
msgbox Ecruteak_DanceTheater_Batallas_Texto_28 MSGBOX_AUTOCLOSE
delay 15
msgbox Ecruteak_DanceTheater_Batallas_Texto_29 MSGBOX_AUTOCLOSE
msgbox Ecruteak_DanceTheater_Batallas_Texto_30 MSGBOX_AUTOCLOSE
msgbox Ecruteak_DanceTheater_Batallas_Texto_31 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_15
waitmovement 0x0
playse SE_PIN
applymovement 10, Ecruteak_DanceTheater_Batallas_Move_4
waitmovement 0x0
applymovement 10, Ecruteak_DanceTheater_Batallas_Move_9
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_32 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, Ecruteak_DanceTheater_Batallas_Move_4
applymovement 4, Ecruteak_DanceTheater_Batallas_Move_4
applymovement 3, Ecruteak_DanceTheater_Batallas_Move_4
applymovement 2, Ecruteak_DanceTheater_Batallas_Move_4
applymovement 1, Ecruteak_DanceTheater_Batallas_Move_4
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_33 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_15
waitmovement 0x0
delay 10
msgbox Ecruteak_DanceTheater_Batallas_Texto_34 MSGBOX_AUTOCLOSE
applymovement 10, Ecruteak_DanceTheater_Batallas_Move_16
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_35 MSGBOX_AUTOCLOSE
applymovement 10, Ecruteak_DanceTheater_Batallas_Move_17
waitmovement 0x0
setflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
clearflag FLAG_HIDE_LILYCOVE_HARBOR_EVENT_TICKET_TAKER
removeobject 10
setvar VAR_UNUSED_0x40F7, 139
release
end

Ecruteak_DanceTheater_Batallas_Texto_24.1:
.string "¡¡Obtuviste una CEN.SAGRADA de\n"
	.string "manos de CHICA KIMONO!!$"

Ecruteak_DanceTheater_Batallas_No::
msgbox Ecruteak_DanceTheater_Batallas_Texto_36 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_18
waitmovement 0x0
release
end

Ecruteak_DanceTheater_Batallas_Texto_1:
.string "¡Oh!\n"
	.string "¡Pero qué descaro!\l"
	.string "Nadie sube a nuestro escenario sin\l"
	.string "más.$"

Ecruteak_DanceTheater_Batallas_Texto_2:
.string "Si sube al escenario tendrá que\n"
	.string "bailar con todas nosotras y\l"
	.string "nuestros POKÉMON. ¿Tiene el valor\l"
	.string "para hacerlo?$"

Ecruteak_DanceTheater_Batallas_Texto_3:
.string "...$"

Ecruteak_DanceTheater_Batallas_Texto_4:
.string "Debéis saber que nadie ha podido\n"
	.string "seguirnos el ritmo de forma\l"
	.string "consecutiva, ¿seréis vos el\l"
	.string "primero?$"

Ecruteak_DanceTheater_Batallas_Texto_5:
.string "¡Pero qué ritmo!$"

Ecruteak_DanceTheater_Batallas_Texto_6:
.string "¿De KANTO, decís que sois?\n"
	.string "Disfrutad de CIUDAD IRIS, pues. En\l"
	.string "KANTO no veréis lugar así.$"

Ecruteak_DanceTheater_Batallas_Texto_7:
.string "Es mi turno, amable señor.$"

Ecruteak_DanceTheater_Batallas_Texto_8:
.string "¿Le ha fatigado mi hermana KOUME?\n"
	.string "De buen grado le daría una\l"
	.string "CEN.SAGRADA a su equipo, pero\l"
	.string "tenemos por norma bailar hasta la\l"
	.string "extenuación.$"


Ecruteak_DanceTheater_Batallas_Texto_9:
.string "No me queda ningún POKÉMON...$"

Ecruteak_DanceTheater_Batallas_Texto_10:
.string "Sois formidable. ¿{PLAYER}?\n"
	.string "No olvidaré su nombre.$"


Ecruteak_DanceTheater_Batallas_Texto_11:
.string "Ejem, ejem...\n"
	.string "Me toca...$"

Ecruteak_DanceTheater_Batallas_Texto_12:
.string "Está ofreciendo un gran\n"
	.string "espectáculo, ¿ve al público?\l"
	.string "¡No es hora de bajar los brazos!$"

Ecruteak_DanceTheater_Batallas_Texto_13:
.string "¡Bravo! ¡Ha sido un combate\n"
	.string "excelente!$"

Ecruteak_DanceTheater_Batallas_Texto_14:
.string "Alguien como vos es digno de poder\n"
	.string "entrar a TORRE CAMPANA, no hay\l"
	.string "duda.$"

Ecruteak_DanceTheater_Batallas_Texto_15:
.string "El baile aún no ha acabado.$"

Ecruteak_DanceTheater_Batallas_Texto_16:
.string "¡Estáis exhausto!\n"
	.string "¿Podréis otro asalto más?$"

Ecruteak_DanceTheater_Batallas_Texto_17:
.string "Os admiro. Vos habéis demostrado\n"
	.string "mucha pericia con vuestros\l"
	.string "POKÉMON.$"

Ecruteak_DanceTheater_Batallas_Texto_18:
.string "Habéis marchitado a mis POKÉMON\n"
	.string "cual árbol otoñal de SENDA\l"
	.string "DINDÓN...$"

Ecruteak_DanceTheater_Batallas_Texto_19:
.string "Aguardad, valeroso caballero.\n"
	.string "¡Aún os queda un último baile!$"

Ecruteak_DanceTheater_Batallas_Texto_20:
.string "Después de bailar con todas mis\n"
	.string "hermanas, más dulce será la\l"
	.string "victoria, ¡o más amarga la\l"
	.string "derrota!$"

Ecruteak_DanceTheater_Batallas_Texto_21:
.string "Tiene usted un talento especial.$"

Ecruteak_DanceTheater_Batallas_Texto_22:
.string "¡Nos ha dejado a todas\n"
	.string "impresionadas con su coraje y\l"
	.string "gallardía!$"

Ecruteak_DanceTheater_Batallas_Texto_23:
.string "Venga, buen hombre, déjenos\n"
	.string "obsequiarle con este objeto, así\l"
	.string "podrá recuperar rápidamente a\l"
	.string "todo su equipo POKÉMON.$"

Ecruteak_DanceTheater_Batallas_Texto_24:
.string "Una CENIZA SAGRADA, una vez\n"
	.string "formaron parte del cuerpo del\l"
	.string "LEGENDARIO HO-OH, antes de arder\l"
	.string "en llamas para así poder resurgir\l"
	.string "de sus cenizas. Siempre pudieron\l"
	.string "encontrarse por toda la región de\l"
	.string "JOHTO, aunque cada vez es más\l"
	.string "difícil.$"

Ecruteak_DanceTheater_Batallas_Texto_25:
.string "MIRTO: Disculpad la irrupción,\n"
	.string "señoritas, pero quisiera hacerles\l"
	.string "una pregunta.$"

Ecruteak_DanceTheater_Batallas_Texto_26:
.string "Diga, caballero.$"

Ecruteak_DanceTheater_Batallas_Texto_27:
.string "MIRTO: Tengo entendido que ustedes\n"
	.string "tienen acceso a la TORRE CAMPANA\l"
	.string "y al gran maestro de CIUDAD IRIS.$"

Ecruteak_DanceTheater_Batallas_Texto_28:
.string "Así es.$"

Ecruteak_DanceTheater_Batallas_Texto_29:
.string "MIRTO: ¿Y podrían... llevar\n"
	.string "acompañantes dentro del lugar?$"

Ecruteak_DanceTheater_Batallas_Texto_30:
.string "Me temo que no. CIUDAD IRIS se\n"
	.string "ciñe fielmente a su historia y\l"
	.string "tradición. Algunas leyes y\l"
	.string "costumbres son inamovibles.\l"
	.string "Nosotras, como descendientes de la\l"
	.string "familia que construyó el TEATRO DE\l"
	.string "LA DANZA, podemos visitar la TORRE\l"
	.string "CAMPANA, pero el privilegio de\l"
	.string "poder llevar acompañantes solo\l"
	.string "está reservado para el LÍDER DE\l"
	.string "GIMNASIO de CIUDAD IRIS y el\l"
	.string "CAMPEÓN de JOHTO-KANTO.\l"
	.string "El resto de LÍDERES y la ÉLITE 4\l"
	.string "puede entrar también, pero sin\l"
	.string "llevar a acompañantes.$"

Ecruteak_DanceTheater_Batallas_Texto_31:
.string "MIRTO: Oh, pero entonces es\n"
	.string "imposible...\l"
	.string "El LÍDER de CIUDAD IRIS no sale de\l"
	.string "TORRE CAMPANA, y tengo entendido\l"
	.string "que el actual CAMP...$"

Ecruteak_DanceTheater_Batallas_Texto_32:
.string "MIRTO: ¿¡Tú eres el verdadero\n"
	.string "CAMPEÓN!?$"

Ecruteak_DanceTheater_Batallas_Texto_33:
.string "MIRTO: No puede ser cierto. En ese\n"
	.string "caso, ¿estarías dispuesto a\l"
	.string "ayudarme y convencer a los\l"
	.string "PENSADORES del lugar?$"

Ecruteak_DanceTheater_Batallas_Texto_34:
.string "MIRTO: No tengo palabras de\n"
	.string "agradecimiento, de verdad {PLAYER}.\l"
	.string "No olvidaré esto.$"

Ecruteak_DanceTheater_Batallas_Texto_35:
.string "MIRTO: Te espero en el acceso a\n"
	.string "SENDA DINDÓN, entonces. Gracias por\l"
	.string "su atención, señoritas.$"

Ecruteak_DanceTheater_Batallas_Texto_36:
.string "Le entendemos, pues la mayoría\n"
	.string "prefiere ser espectador antes que\l"
	.string "protagonista, tenga un buen día.$"

Ecruteak_DanceTheater_Batallas_Move_1:
walk_in_place_up
step_end

Ecruteak_DanceTheater_Batallas_Move_2:
emote_exclamation_mark
walk_in_place_left
step_end

Ecruteak_DanceTheater_Batallas_Move_3:
walk_in_place_down
step_end

Ecruteak_DanceTheater_Batallas_Move_4:
emote_exclamation_mark
step_end

Ecruteak_DanceTheater_Batallas_Move_5:
face_down
step_end

Ecruteak_DanceTheater_Batallas_Move_6:
walk_up
walk_right
face_up
step_end

Ecruteak_DanceTheater_Batallas_Move_7:
step_end

Ecruteak_DanceTheater_Batallas_Move_8:
face_up
step_end

Ecruteak_DanceTheater_Batallas_Move_9:
face_right
step_end

Ecruteak_DanceTheater_Batallas_Move_10:
walk_right
walk_right
walk_up
step_end

Ecruteak_DanceTheater_Batallas_Move_11:
walk_down
walk_right
walk_right
face_up
step_end

Ecruteak_DanceTheater_Batallas_Move_12:
face_left
step_end

Ecruteak_DanceTheater_Batallas_Move_13:
walk_left
walk_left
walk_left
walk_left
face_up
step_end

Ecruteak_DanceTheater_Batallas_Move_14:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Ecruteak_DanceTheater_Batallas_Move_15:
walk_in_place_left
step_end

Ecruteak_DanceTheater_Batallas_Move_16:
walk_in_place_right
step_end

Ecruteak_DanceTheater_Batallas_Move_17:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end


Ecruteak_DanceTheater_Batallas_Move_18:
walk_down
step_end
