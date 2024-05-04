Route49_Pagoda_P7_MapScripts::
	.byte 0

Route49_Pagoda_P7_Primer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P7_Primer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P7_Primer_Pensador_Texto_1:
.string "Interpretamos el compromiso como una\n"
	.string "falta de libertad, cuando es todo lo\l"
	.string "contrario: es una oportunidad única\l"
	.string "para poner a prueba y ejercer nuestra\l"
	.string "voluntad.$"

Route49_Pagoda_P7_Segundo_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P7_Segundo_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P7_Segundo_Pensador_Texto_1:
.string "La maestría requiere práctica. Pero\n"
	.string "cuanto más practicas algo, más\l"
	.string "aburrido y rutinario se vuelve. Una vez\l"
	.string "las ganancias de principiante se han\l"
	.string "logrado y hemos aprendido qué esperar,\l"
	.string "nuestro interés comienza a\l"
	.string "desvanecerse.$"

Route49_Pagoda_P7_Tercer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P7_Tercer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P7_Tercer_Pensador_Texto_1:
.string "Es muy difícil someter a la obediencia a\n"
	.string "aquel que no busca mandar.$"

Route49_Pagoda_P7_Cuarto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P7_Cuarto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P7_Cuarto_Pensador_Texto_1:
.string "En sus tratos con el hombre, el Destino\n"
	.string "nunca cancela sus cuentas.$"

Route49_Pagoda_P7_Quinto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P7_Quinto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P7_Quinto_Pensador_Texto_1:
.string "Gracias a la PIEDRA DORADA del DRAGÓN\n"
	.string "SAGRADO, los antiguos POKÉMON de\l"
	.string "JOHTO no se han perdido para siempre.\l"
	.string "Además, reacciona ante ciertos\l"
	.string "POKÉMON, convirtiéndolos en formas\l"
	.string "exóticas.$"

Route49_Pagoda_P7_Sexto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P7_Sexto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P7_Sexto_Pensador_Texto_1:
.string "La PIEDRA DORADA reacciona con\n"
	.string "DUNSPARCE, pero el POKÉMON resultante\l"
	.string "puede evolucionar una vez más, solo\l"
	.string "que muy pocos saben como.$"

Route49_Pagoda_P7_EventScript_Pensador_1::
	trainerbattle_single TRAINER_TRAINER_229, Route49_Pagoda_P7_Text_Pensador1Intro, Route49_Pagoda_P7_Text_Pensador1Defeated
	msgbox Route49_Pagoda_P7_Text_Pensador1PostBattle, MSGBOX_AUTOCLOSE
	end

Route49_Pagoda_P7_Encuentro_Maestro::
lock
playse SE_PIN
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, Route49_Pagoda_P7_Encuentro_Maestro_Move_13
applymovement OBJ_EVENT_ID_CAMERA, Route49_Pagoda_P7_Encuentro_Maestro_Move_2
waitmovement 0x0
special RemoveCameraObject
fadenewbgm 386
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_3
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_2 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_4
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_4 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_5
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_6
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_6 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_1
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_7 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_7
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_3
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_9 MSGBOX_AUTOCLOSE
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_10 MSGBOX_AUTOCLOSE
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_11 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_8
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_12 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_1
waitmovement 0x0
delay 10
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_13 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_9
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_10
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_15 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_8
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_16 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_1
waitmovement 0x0
delay 10
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_12
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_11
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_17 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_13
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_7
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_14
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_19 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_3
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_20 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_15
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_21 MSGBOX_AUTOCLOSE
delay 10
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_7
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_23 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_1
waitmovement 0x0
delay 10
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_24 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_16
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_25 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_16
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_26 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_17
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_27 MSGBOX_AUTOCLOSE
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_28 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_8
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_29 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_16
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_30 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_18
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_31 MSGBOX_AUTOCLOSE
fadedefaultbgm
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, Route49_Pagoda_P7_Encuentro_Maestro_Move_19
applymovement OBJ_EVENT_ID_CAMERA, Route49_Pagoda_P7_Encuentro_Maestro_Move_20
waitmovement 0x0
special RemoveCameraObject
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_10
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_10
waitmovement 0x0
delay 5
playse SE_PIN
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_1
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_1
waitmovement 0x0
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_9
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_32 MSGBOX_AUTOCLOSE
delay 10
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_33 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_17
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_34 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_7
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_35 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_21
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_36 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_1
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_2
waitmovement 0x0
setflag FLAG_UNUSED_0x26A
removeobject 2
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_22
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_37 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_10
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_38 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_23
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_39 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_17
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_40 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_2
waitmovement 0x0
removeobject 1
setvar VAR_VERDANTURF_TOWN_STATE, 11
release
end

Route49_Pagoda_P7_Encuentro_Maestro_Move_23:
walk_slow_down
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_22:
face_up
delay_4
walk_fast_up
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_21:
walk_up
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_20:
walk_down
walk_down
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_19:
walk_up
walk_up
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_18:
walk_slow_left
delay_8
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_17:
delay_8
face_up
delay_8
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_16:
walk_in_place_left
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_15:
walk_down
walk_left
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_14:
walk_slow_right
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_13:
walk_in_place_up
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_12:
delay_8
face_right
delay_8
face_up
step_end


Route49_Pagoda_P7_Encuentro_Maestro_Move_11:
walk_up
walk_up
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_10:
face_down
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_9:
walk_down
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_8:
face_left
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_7:
face_right
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_6:
walk_down
face_left
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_5:
walk_in_place_down
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_4:
delay_8
walk_slow_up
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_3:
walk_in_place_right
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_2:
walk_up
walk_up
walk_up
walk_up
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_1:
emote_exclamation_mark
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Texto_1:
.string "EUSINE: Vaya{PAUSE 25}…{PAUSE 25} Entonces, cuando\n"
	.string "{PLAYER} derrotó a LANCE, con ello\l"
	.string "liberó a ENTEI, RAIKOU y SUICUNE.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_2:
.string "ANDRA: Es lo que ocurre cuando\n"
	.string "permanecéis recluidos durante\l"
	.string "décadas, LANCE se hizo con KANTO y usó\l"
	.string "a vuestras queridas BESTIAS SAGRADAS,\l"
	.string "todo sin que os diérais cuenta.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_3:
.string "EUSINE: Ese es el camino del antiguo\n"
	.string "ENTRENADOR de JOHTO, nunca se está lo\l"
	.string "suficientemente preparado como para\l"
	.string "mostrarse al mundo, siempre cabe lugar\l"
	.string "para la mejora.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_4:
.string "Pero{PAUSE 5}…{PAUSE 5}$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_5:
.string "Yo daría todo para preservar las\n"
	.string "BESTIAS SAGRADAS, LANCE cometió esa\l"
	.string "atrocidad en la sombra. Mientras, yo\l"
	.string "creí que era SUICUNE el que nos había\l"
	.string "abandonado.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_6:
.string "Me has hecho ver que en los tiempos que\n"
	.string "corren, más que nunca debemos vigilar\l"
	.string "lo que nos rodea. Todo lo que conocemos\l"
	.string "podría ser amenazado, incluso este\l"
	.string "lugar. ¿Qué nos asegura que vuestras\l"
	.string "intenciones son puras?$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_7:
.string "ANDRA: ¿De verdad? Hemos pasado\n"
	.string "vuestra prueba, contamos con un\l"
	.string "FUERTE VÍNCULO cada uno, ¿qué más\l"
	.string "necesitas?$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_8:
.string "EUSINE: El GRAN MAESTRO determinará\n"
	.string "eso, chica.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_9:
.string "ANDRA: Tengo preguntas.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_10:
.string "EUSINE: Puede que no estés preparada\n"
	.string "para oír las respuestas.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_11:
.string "ANDRA: ¿Qué era ese POKÉMON\n"
	.string "LEGENDARIO?$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_12:
.string "EUSINE: No es ningún LEGENDARIO, es un\n"
	.string "POKÉMON mortal, de carne y hueso. En\l"
	.string "esencia igual a todos los que tú\l"
	.string "tienes.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_13:
.string "ANDRA: Eso{PAUSE 25}…{PAUSE 15} ¡no es posible!$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_14:
.string "EUSINE: Creí que eras de esas personas\n"
	.string "que no usaban ese tipo de palabras. El\l"
	.string "mero hecho de definir algo ya lo limita.\l"
	.string "Si ese POKÉMON llegó hasta ese punto,\l"
	.string "no fue por pararse a pensar en si era o\l"
	.string "no posible, simplemente lo hizo.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_15:
.string "ANDRA: Pero{PAUSE 25}…{PAUSE 25} ¿qué era?$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_16:
.string "EUSINE: Un DUNSPARCE.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_17:
.string "Así es, uno cuya voluntad por\n"
	.string "trascender a su limitada forma le dotó,\l"
	.string "tras mucho tiempo y un esfuerzo\l"
	.string "inenarrable, de un virtuosismo sin\l"
	.string "precedentes.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_18:
.string "Nuestras escrituras hacen referencia a\n"
	.string "su cambio así: “-…como si una suerte\l"
	.string "de ingeniería cósmica obrara sobre él,\l"
	.string "y sus actos estuvieran al margen de\l"
	.string "todo LEGENDARIO. Por una vez, las leyes\l"
	.string "de equilibrio y homeostasis que rigen\l"
	.string "este mundo hicieron una excepción…-.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_19:
.string "Según la leyenda, primero logró\n"
	.string "evolucionar una vez, para después\l"
	.string "evolucionar de nuevo, alcanzando en\l"
	.string "esta última una categoría similar a la\l"
	.string "de un PSEUDOLEGENDARIO.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_20:
.string "Varios documentos antiguos afirman que\n"
	.string "fue, de hecho, el primer\l"
	.string "PSEUDOLEGENDARIO. Aquel que introdujo\l"
	.string "la posibilidad de que POKÉMON NO\l"
	.string "LEGENDARIOS alcanzaran un poder\l"
	.string "equiparable al de los que sí lo eran.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_21:
.string "En TORRE DUN esa forma de DUNSPARCE ha\n"
	.string "podido ser alcanzada por nuestros más\l"
	.string "duchos entrenadores.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_22:
.string "ANDRA: ¿Cómo?$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_23:
.string "EUSINE: Gracias a la PIEDRA DORADA.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_24:
.string "ANDRA: ¿La misma que convirtió mi\n"
	.string "URSARING en URSALUNA?$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_25:
.string "EUSINE: Así es, ese objeto forma parte\n"
	.string "del DRAGÓN SAGRADO, y a él reaccionan\l"
	.string "muchos de los actuales POKÉMON de\l"
	.string "JOHTO, cuyo potencial en el pasado fue\l"
	.string "mayor, permitiéndoles alcanzar sus\l"
	.string "formas antiguas.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_26:
.string "En el caso de DUNSPARCE, la piedra\n"
	.string "dorada nos da acceso a la primera\l"
	.string "evolución mencionada. A este POKÉMON\l"
	.string "lo bautizamos como BLESSPARCE, ya que\l"
	.string "ha sido bendecido por la PIEDRA\l"
	.string "DORADA.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_27:
.string "Ello lo diferencia del resto de\n"
	.string "DUNSPARCE, condenados como\l"
	.string "DUDUNSPARCE a permanecer en sus\l"
	.string "formas limitadas, sin mayor techo que\l"
	.string "permanecer anclados a la tierra.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_28:
.string "ANDRA: Oh{PAUSE 5}…{PAUSE 5}$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_29:
.string "En cuanto a la forma\n"
	.string "PSEUDOLEGENDARIA{PAUSE 25}…{PAUSE 25} me temo que su\l"
	.string "obtención escapa a mis conocimientos,\l"
	.string "deberéis preguntarle a nuestro gran\l"
	.string "maestro, ya que muy contados monjes\l"
	.string "han podido evolucionar a un\l"
	.string "BLESSPARCE.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_30:
.string "Pero{PAUSE 25}…{PAUSE 25} algo es seguro: el DRAGÓN\n"
	.string "SAGRADO que enfrentásteis es único e\l"
	.string "irrepetible. Las escrituras hablan de\l"
	.string "un fenómeno similar al FUERTE VÍNCULO,\l"
	.string "que obró sobre este primer DUNSPARCE,\l"
	.string "cuando ya se hallaba en su fase de\l"
	.string "PSEUDOLEGENDARIO.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_31:
.string "ANDRA: Estoy{PAUSE 25}…{PAUSE 25} impresionada.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_32:
.string "ANDRA: ¡{PLAYER}! ¿Has oído nuestra\n"
	.string "conversación?$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_33:
.string "EUSINE: No creo que {PLAYER} sea tan\n"
	.string "lento o tan mal entrenador, ¿verdad?$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_34:
.string "Sea como sea, solo estáis en el P7, aún\n"
	.string "os queda para llegar hasta arriba.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_35:
.string "ANDRA: ¡Jah! ¡Hasta ahora ha sido pan\n"
	.string "comido!$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_36:
.string "EUSINE: No creo que siga así, nuestro\n"
	.string "ALTO MANDO no os pondrá las cosas tan\l"
	.string "fáciles.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_37:
.string "ANDRA: ¿Qué? ¡Espera!$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_38:
.string "¿Ha dicho ALTO MANDO? En esta PAGODA\n"
	.string "parece que hay muchas cosas que nos\l"
	.string "son familiares, ¿eh {PLAYER}?$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_39:
.string "Después de esta historia, mi decisión de\n"
	.string "no usar LEGENDARIOS solo se ve\l"
	.string "reforzada. ¿Crees que ese DRAGÓN\l"
	.string "SAGRADO se habrá visto reflejado en\l"
	.string "nosotros y nuestros CROBAT?$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_40:
.string "Me gustaría pensar que sí, y que esa es\n"
	.string "la razón por la que se dejó ver.$"

