SSTidal_Submarino_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, SSTidal_Submarino_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, SSTidal_Submarino_OnFrame
	.byte 0

SSTidal_Submarino_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 247, SSTidal_Submarino_Primera_Escena
map_script_2 VAR_UNUSED_0x40F7, 248, SSTidal_Submarino_Segunda_Escena
	.2byte 0


Submarino_Primera_Escena_Move_1:
face_down
step_end

Submarino_Primera_Escena_Move_2:
face_up
step_end

Submarino_Primera_Escena_Move_3:
walk_fast_left
walk_fast_left
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_right
walk_fast_right
walk_fast_down
walk_fast_right
step_end

Submarino_Primera_Escena_Move_4:
delay_16
delay_16
face_left
step_end

Submarino_Primera_Escena_Move_5:
walk_in_place_left
step_end

Submarino_Primera_Escena_Move_6:
walk_in_place_right
step_end

Submarino_Primera_Escena_Move_7:
face_down
step_end

Submarino_Primera_Escena_Move_8:
face_right
step_end

Submarino_Primera_Escena_Move_9:
face_left
step_end


SSTidal_Submarino_Primera_Escena::
lock
playse SE_LAVARIDGE_FALL_WARP
waitse
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Submarino_Primera_Escena_Move_1
applymovement 10, Submarino_Primera_Escena_Move_2
waitmovement 0x0
msgbox SSTidal_Submarino_Primera_Escena_Texto_1 MSGBOX_AUTOCLOSE
applymovement 10, Submarino_Primera_Escena_Move_4
applymovement OBJ_EVENT_ID_PLAYER, Submarino_Primera_Escena_Move_3
waitmovement 0x0
applymovement 10, Submarino_Primera_Escena_Move_5
waitmovement 0x0
playse SE_LAVARIDGE_FALL_WARP
applymovement 10, Submarino_Primera_Escena_Move_2
applymovement OBJ_EVENT_ID_PLAYER, Submarino_Primera_Escena_Move_2
waitmovement 0x0
delay 170
applymovement 10, Submarino_Primera_Escena_Move_9
applymovement OBJ_EVENT_ID_PLAYER, Submarino_Primera_Escena_Move_8
waitmovement 0x0
msgbox SSTidal_Submarino_Primera_Escena_Texto_1.1 MSGBOX_AUTOCLOSE
delay 20
msgbox SSTidal_Submarino_Primera_Escena_Texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Submarino_Primera_Escena_Move_6
waitmovement 0x0
delay 15
applymovement 10, Submarino_Primera_Escena_Move_7
waitmovement 0x0
msgbox SSTidal_Submarino_Primera_Escena_Texto_3 MSGBOX_AUTOCLOSE
applymovement 10, Submarino_Primera_Escena_Move_9
applymovement OBJ_EVENT_ID_PLAYER, Submarino_Primera_Escena_Move_9
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Submarino_Primera_Escena_Move_10
waitmovement 0x0
special RemoveCameraObject
applymovement 1, Submarino_Primera_Escena_Move_5
waitmovement 0x0
msgbox SSTidal_Submarino_Primera_Escena_Texto_4 MSGBOX_AUTOCLOSE
delay 20
playse SE_M_DIVE
waitse
delay 20
playse SE_SHIP
waitse
delay 20
msgbox SSTidal_Submarino_Primera_Escena_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox SSTidal_Submarino_Primera_Escena_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox SSTidal_Submarino_Primera_Escena_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox SSTidal_Submarino_Primera_Escena_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox SSTidal_Submarino_Primera_Escena_Texto_9 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Submarino_Primera_Escena_Move_7
waitmovement 0x0
msgbox SSTidal_Submarino_Primera_Escena_Texto_10 MSGBOX_AUTOCLOSE
applymovement 2, Submarino_Primera_Escena_Move_2
waitmovement 0x0
msgbox SSTidal_Submarino_Primera_Escena_Texto_11 MSGBOX_AUTOCLOSE
applymovement 2, Submarino_Primera_Escena_Move_7
applymovement 3, Submarino_Primera_Escena_Move_11
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Submarino_Primera_Escena_Move_12
waitmovement 0x0
special RemoveCameraObject
applymovement 10, Submarino_Primera_Escena_Move_9
applymovement OBJ_EVENT_ID_PLAYER, Submarino_Primera_Escena_Move_8
waitmovement 0x0
msgbox SSTidal_Submarino_Primera_Escena_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox SSTidal_Submarino_Primera_Escena_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox SSTidal_Submarino_Primera_Escena_Texto_14 MSGBOX_AUTOCLOSE
delay 15
applymovement 10, Submarino_Primera_Escena_Move_7
waitmovement 0x0
msgbox SSTidal_Submarino_Primera_Escena_Texto_15 MSGBOX_AUTOCLOSE
applymovement 10, Submarino_Primera_Escena_Move_13
waitmovement 0x0
msgbox SSTidal_Submarino_Primera_Escena_Texto_16 MSGBOX_AUTOCLOSE
delay 15
msgbox SSTidal_Submarino_Primera_Escena_Texto_17 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Submarino_Primera_Escena_Move_16
waitmovement 0x0
playse SE_M_THUNDERBOLT2
waitse
delay 15
playse SE_PIN
applymovement 10, Submarino_Primera_Escena_Move_14
waitmovement 0x0
applymovement 10, Submarino_Primera_Escena_Move_9
waitmovement 0x0
msgbox SSTidal_Submarino_Primera_Escena_Texto_18 MSGBOX_AUTOCLOSE
applymovement 10, Submarino_Primera_Escena_Move_5
waitmovement 0x0
msgbox SSTidal_Submarino_Primera_Escena_Texto_19 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Submarino_Primera_Escena_Move_15
waitmovement 0x0
warpsilent MAP_MOSSDEEP_CITY, 76, 13
delay 100
release
end

Submarino_Primera_Escena_Move_16:
walk_in_place_fast_right
walk_in_place_fast_right
step_end

Submarino_Primera_Escena_Move_15:
walk_slow_down
walk_slow_right
walk_slow_right
face_left
step_end

Submarino_Primera_Escena_Move_14:
emote_exclamation_mark
step_end

Submarino_Primera_Escena_Move_13:
walk_in_place_down
step_end

Submarino_Primera_Escena_Move_12:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
step_end


Submarino_Primera_Escena_Move_11:
walk_down
walk_down
walk_down
walk_right
walk_down
walk_down
face_left
step_end

Submarino_Primera_Escena_Move_10:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
step_end

SSTidal_Submarino_Primera_Escena_Texto_1:
	.string "ARIANA: ¡Por aquí, {PLAYER}!$"

SSTidal_Submarino_Primera_Escena_Texto_1.1:
	.string "Por unos segundos. Parece que al final\n"
	.string "sí pondremos nuestra vida en juego.$"

SSTidal_Submarino_Primera_Escena_Texto_2:
	.string "Este lugar parece ser ajeno al SS.MAREA.\n"
	.string "¿Sabes lo que creo, no?$"

SSTidal_Submarino_Primera_Escena_Texto_3:
	.string "Así es, estamos dentro de un submarino.\n"
	.string "Mira.$"

SSTidal_Submarino_Primera_Escena_Texto_4:
	.string "????: Iniciando protocolo de inmersión.$"

SSTidal_Submarino_Primera_Escena_Texto_5:
	.string "Listo, estamos en rumbo.$"

SSTidal_Submarino_Primera_Escena_Texto_6:
	.string "ADMIN.AMATISTA: Magnífico. ¿Cuánto\n"
	.string "tiempo estima que nos tomará llegar?$"

SSTidal_Submarino_Primera_Escena_Texto_7:
	.string "????: Unas 12 horas a ritmo constante.$"

SSTidal_Submarino_Primera_Escena_Texto_8:
	.string "DR.RASMUS: Un privilegio poder llegar\n"
	.string "tan lejos en tan poco tiempo.$"

SSTidal_Submarino_Primera_Escena_Texto_9:
	.string "????: Así es, antaño esto era\n"
	.string "impensable. Los avances tecnológicos\l"
	.string "de vuestra empresa lo han hecho\l"
	.string "posible.$"

SSTidal_Submarino_Primera_Escena_Texto_10:
	.string "ADMIN.AMATISTA: Aún así, 12 horas es\n"
	.string "mucho tiempo. Revisemos mientras todos\l"
	.string "los detalles de esta expedición. ¿Qué\l"
	.string "me dice, DOCTOR?$"

SSTidal_Submarino_Primera_Escena_Texto_11:
	.string "DR.RASMUS: Será un placer.$"

SSTidal_Submarino_Primera_Escena_Texto_12:
	.string "ARIANA: Parece que nos hemos metido de\n"
	.string "lleno en uno de los planes de DEVON.$"

SSTidal_Submarino_Primera_Escena_Texto_13:
	.string "Ese DOCTOR{PAUSE 25}…{PAUSE 25} jamás lo había visto. Pero\n"
	.string "al piloto del submarino sí lo conozco.$"

SSTidal_Submarino_Primera_Escena_Texto_14:
	.string "Es el miembro más antiguo y poderoso\n"
	.string "del ALTO MANDO de HOENN. La red de\l"
	.string "influencias de DEVON es mayor de lo que\l"
	.string "pensaba.$"

SSTidal_Submarino_Primera_Escena_Texto_15:
	.string "Por otro lado, no tenemos ni idea de\n"
	.string "hacia dónde vamos. Podría ser cualquier\l"
	.string "parte.$"

SSTidal_Submarino_Primera_Escena_Texto_16:
	.string "Solo nos queda esperar aquí. Aún con\n"
	.string "imprevistos, hemos cumplido el objetivo\l"
	.string "de la misión: espiar a DEVON.$"

SSTidal_Submarino_Primera_Escena_Texto_17:
	.string "Ahora es cuando debemos estar atentos\n"
	.string "a lo que puedan decir en privado.$"

SSTidal_Submarino_Primera_Escena_Texto_18:
	.string "ARIANA: Hmm{PAUSE 15}…{PAUSE 15} ¿Te sientes algo\n"
	.string "paralizado? Puede que el DESLUMBRAR de\l"
	.string "mi ARBOK te rozara un poco.$"

SSTidal_Submarino_Primera_Escena_Texto_19:
	.string "Descansando unas horas se te pasará.\n"
	.string "No te preocupes, {PLAYER}, yo\l"
	.string "mientras estaré atenta a lo que puedan\l"
	.string "decir.$"

Submarino_Segunda_Escena_Move_1:
face_right
step_end

Submarino_Segunda_Escena_Move_2:
emote_exclamation_mark
step_end

Submarino_Segunda_Escena_Move_3:
delay_16
face_down
delay_16
delay_16
face_up
delay_16
delay_16
face_right
delay_16
delay_16
face_left
delay_16
step_end

SSTidal_Submarino_Segunda_Escena::
lock
applymovement 10, Submarino_Segunda_Escena_Move_1
waitmovement 0x0
msgbox SSTidal_Submarino_Segunda_Escena_Texto_1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Submarino_Segunda_Escena_Move_2
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Submarino_Segunda_Escena_Move_3
waitmovement 0x0
msgbox SSTidal_Submarino_Segunda_Escena_Texto_2 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Segunda_Escena_Texto_3 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Segunda_Escena_Texto_4 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Segunda_Escena_Texto_5 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Segunda_Escena_Texto_6 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Segunda_Escena_Texto_7 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Segunda_Escena_Texto_8 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Segunda_Escena_Texto_9 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Segunda_Escena_Texto_10 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Segunda_Escena_Texto_11 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Segunda_Escena_Texto_12 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Segunda_Escena_Texto_13 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Segunda_Escena_Texto_14 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Segunda_Escena_Texto_15 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Segunda_Escena_Texto_16 MSGBOX_AUTOCLOSE
release
end

SSTidal_Submarino_Segunda_Escena_Texto_1:
	.string "ARIANA: {PAUSE 35}…{PAUSE 35} ¿{PLAYER}? {PAUSE 25}…{PAUSE 25} …{PAUSE 25} Vuelve a la\n"
	.string "realidad.$"

SSTidal_Submarino_Segunda_Escena_Texto_2:
	.string "ARIANA: Llevas más de 10 horas\n"
	.string "durmiendo. Tú y tus POKÉMON\l"
	.string "necesitábais un descanso, está claro.$"

SSTidal_Submarino_Segunda_Escena_Texto_3:
	.string "Habrás notado que hace más frío,\n"
	.string "definitivamente nos hemos alejado de\l"
	.string "HOENN.$"

SSTidal_Submarino_Segunda_Escena_Texto_4:
	.string "Al parecer, están siguiendo el rumbo que\n"
	.string "les marca un ESCÁNER.$"

SSTidal_Submarino_Segunda_Escena_Texto_5:
	.string "Diría que{PAUSE 25}…{PAUSE 25} no te has perdido mucho más\n"
	.string "mientras dormías, al menos nada que tú\l"
	.string "no supieras.$"

SSTidal_Submarino_Segunda_Escena_Texto_6:
	.string "Pero ahora, yo he quedado convencida:\n"
	.string "DEVON es mucho más grande de lo que\l"
	.string "aparenta ser.$"

SSTidal_Submarino_Segunda_Escena_Texto_7:
	.string "Cuando me regalaron ese POKÉMON\n"
	.string "sospeché, pero ahora{PAUSE 15}…{PAUSE 15} ellos mismos han\l"
	.string "dicho que ese ESCÁNER lo han\l"
	.string "recuperado de la NAO ABANDONADA. Esa\l"
	.string "nave naufragó por un experimento suyo\l"
	.string "que salió de control.$"

SSTidal_Submarino_Segunda_Escena_Texto_8:
	.string "Me pregunto cuántos cadáveres en el\n"
	.string "armario más tienen. Puede que en esta\l"
	.string "expedición descubramos alguno más.$"

SSTidal_Submarino_Segunda_Escena_Texto_9:
	.string "????: ¡Tierra a la vista! ¡Prepárense\n"
	.string "para desembarcar!$"

SSTidal_Submarino_Segunda_Escena_Texto_10:
	.string "DR.RASMUS: Veremos ahora si ese\n"
	.string "POKÉMON es digno de todo este viaje.$"

SSTidal_Submarino_Segunda_Escena_Texto_11:
	.string "ADM.AMATISTA: Lo hará, DOCTOR. Jamás\n"
	.string "debió salir de HOENN, y es ahí donde\l"
	.string "alcanzará su plenitud.$"

SSTidal_Submarino_Segunda_Escena_Texto_12:
	.string "????: Atraque en el PUERTO completado.$"

SSTidal_Submarino_Segunda_Escena_Texto_13:
	.string "ADM.AMATISTA: Excelente. ¡Todos fuera,\n"
	.string "vamos!$"

SSTidal_Submarino_Segunda_Escena_Texto_14:
	.string "Ha prestado usted un gran servicio a\n"
	.string "DEVON. Sin sus conocimientos náuticos\l"
	.string "no hubiéramos podido llegar hasta aquí\l"
	.string "tan facilmente.$"

SSTidal_Submarino_Segunda_Escena_Texto_15:
	.string "????: Me quedaré guardando la nave. No\n"
	.string "se preocupen por nada.$"

SSTidal_Submarino_Segunda_Escena_Texto_16:
	.string "ARIANA: Parece que ya hemos llegado. Se\n"
	.string "han ido todos excepto el miembro del\l"
	.string "ALTO MANDO. Es nuestro momento de\l"
	.string "salir.$"

SSTidal_Submarino_Dracon::
lock
msgbox SSTidal_Submarino_Dracon_Texto_1 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Dracon_Texto_2 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Dracon_Texto_3 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Dracon_Texto_4 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Dracon_Texto_5 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Dracon_Texto_6 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Dracon_Texto_7 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Dracon_Texto_8 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Dracon_Texto_9 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Dracon_Texto_10 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Dracon_Texto_11 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Dracon_Texto_12 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Dracon_Texto_13 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Dracon_Texto_14 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Dracon_Texto_15 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Dracon_Texto_16 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Dracon_Texto_17 MSGBOX_AUTOCLOSE
msgbox SSTidal_Submarino_Dracon_Texto_18 MSGBOX_AUTOCLOSE
release
end

SSTidal_Submarino_Dracon_Texto_1:
	.string "ARIANA: ¡Manos arriba anciano!$"

SSTidal_Submarino_Dracon_Texto_2:
	.string "????: Pero{PAUSE 25}…{PAUSE 25} ¿¡De dónde habéis salido!?$"

SSTidal_Submarino_Dracon_Texto_3:
	.string "ARIANA: Solo queremos seguir a DEVON.\n"
	.string "No le haremos nada si no se resiste.$"

SSTidal_Submarino_Dracon_Texto_4:
	.string "????: ¿Sabes con quién hablas? Soy\n"
	.string "DRACÓN, del ALTO MANDO. Este viaje no es\l"
	.string "nada comparado con los que he recorrido\l"
	.string "junto a mis dragones.$"

SSTidal_Submarino_Dracon_Texto_5:
	.string "ARIANA: Nosotros también sabemos\n"
	.string "combatir, y somos dos.$"

SSTidal_Submarino_Dracon_Texto_6:
	.string "Por muy fuerte que sea, no tiene\n"
	.string "ninguna posibilidad con nosotros dos al\l"
	.string "mismo tiempo.$"

SSTidal_Submarino_Dracon_Texto_7:
	.string "Ju, ju, ju, ju.$"

SSTidal_Submarino_Dracon_Texto_8:
	.string "Lo siento mucho, ¡pero vete preparando!$"

SSTidal_Submarino_Dracon_Texto_9:
	.string "{PLAYER}: {PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

SSTidal_Submarino_Dracon_Texto_10:
	.string "ARIANA: ¿En serio? ¿Quieres combatir\n"
	.string "tú solo contra un ALTO MANDO?$"

SSTidal_Submarino_Dracon_Texto_11:
	.string "De verdad{PAUSE 25}…{PAUSE 25} estas nuevas generaciones\n"
	.string "del TEAM ROCKET{PAUSE 25}…{PAUSE 25} qué poco pragmáticas.$"

SSTidal_Submarino_Dracon_Texto_12:
	.string "Si acabas perdiendo y te hacen preso,\n"
	.string "no vendré a rescatarte.$"

SSTidal_Submarino_Dracon_Texto_13:
	.string "DRACÓN: Muy noble por tu parte, pero te\n"
	.string "arrepentirás de haber tomado esa\l"
	.string "decisión.$"

SSTidal_Submarino_Dracon_Texto_14:
	.string "Alguien como tú nunca sabrá lo que se\n"
	.string "necesita para luchar con la ayuda de\l"
	.string "los POKÉMON, y sin eso{PAUSE 15}…{PAUSE 15} ¡jamás podrás\l"
	.string "derrotarme!$"

SSTidal_Submarino_Dracon_Texto_15:
	.string "¿Perdí ante un simple polizón?$"

SSTidal_Submarino_Dracon_Texto_16:
	.string "Aunque estés aquí por cuestiones\n"
	.string "contrarias a mis intereses, mereces mi\l"
	.string "reconocimiento.$"

SSTidal_Submarino_Dracon_Texto_17:
	.string "Sin duda has llevado muy lejos tu\n"
	.string "entrenamiento, pero déjame darte un\l"
	.string "consejo: no te conviene meterte con\l"
	.string "DEVON, no podrás con ella ni recurriendo\l"
	.string "a la fuerza ni recurriendo a la justicia.$"

SSTidal_Submarino_Dracon_Texto_18:
	.string "DEVON es lo mejor para HOENN, alguien\n"
	.string "como tú que viene de fuera jamás lo\l"
	.string "entendería.$"

SSTidal_Submarino_Dialogo_Dracon::
lock
faceplayer
msgbox SSTidal_Submarino_Dracon_Texto_18 MSGBOX_NPC
release
end
