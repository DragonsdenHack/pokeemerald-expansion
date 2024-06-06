Snowpoint_Templo_S5_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Snowpoint_Templo_S5_OnFrame
	.byte 0

Snowpoint_Templo_S5_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 252, Snowpoint_Templo_S5_Rasmus
	.2byte 0

Templo_S5_Rasmus_Move_1:
walk_left
walk_left
walk_down
walk_down
walk_left
walk_left
walk_left
walk_down
step_end

Templo_S5_Rasmus_Move_1.1:
walk_right
walk_right
walk_up
walk_up
walk_right
walk_right
walk_right
walk_up
step_end

Templo_S5_Rasmus_Move_2:
emote_exclamation_mark
step_end

Templo_S5_Rasmus_Move_3:
face_left
step_end

Templo_S5_Rasmus_Move_4:
walk_up
walk_up
walk_right
walk_right
step_end

Templo_S5_Rasmus_Move_5:
face_right
step_end

Templo_S5_Rasmus_Move_6:
face_down
step_end

Templo_S5_Rasmus_Move_7:
walk_left
walk_down
step_end

Templo_S5_Rasmus_Move_8:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
step_end

Templo_S5_Rasmus_Move_8.1:
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
step_end

Templo_S5_Rasmus_Move_9:
walk_in_place_right
step_end

Templo_S5_Rasmus_Move_10:
walk_right
walk_right
step_end

Snowpoint_Templo_S5_Rasmus::
lock
applymovement OBJ_EVENT_ID_PLAYER, Templo_S5_Rasmus_Move_3
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Templo_S5_Rasmus_Move_1
waitmovement 0x0
special RemoveCameraObject
msgbox Snowpoint_Templo_S5_Rasmus_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 3, Templo_S5_Rasmus_Move_2
waitmovement 0x0
applymovement 5, Templo_S5_Rasmus_Move_5
applymovement 3, Templo_S5_Rasmus_Move_4
applymovement 4, Templo_S5_Rasmus_Move_4
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Templo_S5_Rasmus_Move_1.1
waitmovement 0x0
special RemoveCameraObject
msgbox Snowpoint_Templo_S5_Rasmus_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox Snowpoint_Templo_S5_Rasmus_Texto_3 MSGBOX_AUTOCLOSE
applymovement 3, Templo_S5_Rasmus_Move_6
applymovement OBJ_EVENT_ID_PLAYER, Templo_S5_Rasmus_Move_7
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Templo_S5_Rasmus_Move_2
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Templo_S5_Rasmus_Move_8
waitmovement 0x0
special RemoveCameraObject
msgbox Snowpoint_Templo_S5_Rasmus_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox Snowpoint_Templo_S5_Rasmus_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox Snowpoint_Templo_S5_Rasmus_Texto_6 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Templo_S5_Rasmus_Move_8.1
waitmovement 0x0
special RemoveCameraObject
applymovement 3, Templo_S5_Rasmus_Move_5
applymovement OBJ_EVENT_ID_PLAYER, Templo_S5_Rasmus_Move_3
waitmovement 0x0
msgbox Snowpoint_Templo_S5_Rasmus_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox Snowpoint_Templo_S5_Rasmus_Texto_8 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 3, Templo_S5_Rasmus_Move_9
waitmovement 0x0
msgbox Snowpoint_Templo_S5_Rasmus_Texto_9 MSGBOX_AUTOCLOSE
applymovement 4, Templo_S5_Rasmus_Move_10
waitmovement 0x0
msgbox Snowpoint_Templo_S5_Rasmus_Texto_10 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_618, Snowpoint_Templo_S5_Rasmus_Texto_11
applymovement 5, Templo_S5_Rasmus_Move_10
waitmovement 0x0
msgbox Snowpoint_Templo_S5_Rasmus_Texto_12 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_615, Snowpoint_Templo_S5_Rasmus_Texto_13
applymovement 5, Templo_S5_Rasmus_Move_11
applymovement 4, Templo_S5_Rasmus_Move_11
waitmovement 0x0
msgbox Snowpoint_Templo_S5_Rasmus_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox Snowpoint_Templo_S5_Rasmus_Texto_15 MSGBOX_AUTOCLOSE
applymovement 3, Templo_S5_Rasmus_Move_12
waitmovement 0x0
msgbox Snowpoint_Templo_S5_Rasmus_Texto_16 MSGBOX_AUTOCLOSE
delay 15
msgbox Snowpoint_Templo_S5_Rasmus_Texto_17 MSGBOX_AUTOCLOSE
playse SE_EXIT
clearflag FLAG_HOENN_700
addobject 6
msgbox Snowpoint_Templo_S5_Rasmus_Texto_18 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, Templo_S5_Rasmus_Move_2
applymovement 4, Templo_S5_Rasmus_Move_2
waitmovement 0x0
msgbox Snowpoint_Templo_S5_Rasmus_Texto_19 MSGBOX_AUTOCLOSE
delay 15
msgbox Snowpoint_Templo_S5_Rasmus_Texto_20 MSGBOX_AUTOCLOSE
delay 15
msgbox Snowpoint_Templo_S5_Rasmus_Texto_21 MSGBOX_AUTOCLOSE
applymovement 6, Templo_S5_Rasmus_Move_13
waitmovement 0x0
msgbox Snowpoint_Templo_S5_Rasmus_Texto_22 MSGBOX_AUTOCLOSE
applymovement 3, Templo_S5_Rasmus_Move_3
waitmovement 0x0
msgbox Snowpoint_Templo_S5_Rasmus_Texto_23 MSGBOX_AUTOCLOSE
applymovement 6, Templo_S5_Rasmus_Move_13
waitmovement 0x0
msgbox Snowpoint_Templo_S5_Rasmus_Texto_24 MSGBOX_AUTOCLOSE
applymovement 3, Templo_S5_Rasmus_Move_5
applymovement OBJ_EVENT_ID_PLAYER, Templo_S5_Rasmus_Move_14
applymovement 6, Templo_S5_Rasmus_Move_15
waitmovement 0x0
setflag FLAG_HOENN_19
setflag FLAG_HOENN_700
setflag FLAG_HOENN_51
clearflag FLAG_HOENN_685
setvar VAR_UNUSED_0x40F7, 253
release
end

Templo_S5_Rasmus_Move_15:
walk_left
walk_down
face_left
step_end

Templo_S5_Rasmus_Move_14:
lock_facing_direction
walk_right
unlock_facing_direction
step_end

Templo_S5_Rasmus_Move_13:
walk_in_place_left
step_end

Templo_S5_Rasmus_Move_12:
walk_right
step_end

Templo_S5_Rasmus_Move_11:
lock_facing_direction
walk_left
unlock_facing_direction
step_end

Snowpoint_Templo_S5_Rasmus_Texto_1:
	.string "DR.RASMUS: Todo está saliendo según el\n"
	.string "plan. En breve, el rey de los regis será\l"
	.string "nuestro.$"

Snowpoint_Templo_S5_Rasmus_Texto_2:
	.string "{PLAYER}… Estoy impresionado. Si\n"
	.string "estás aquí es porque sigues\l"
	.string "obsesionado en ir tras nuestros\l"
	.string "movimientos.$"

Snowpoint_Templo_S5_Rasmus_Texto_3:
	.string "Déjame complacerte, observa.$"

Snowpoint_Templo_S5_Rasmus_Texto_4:
	.string "Nuestro principal ADMIN. va a despertar\n"
	.string "y capturar a REGIGIGAS.$"

Snowpoint_Templo_S5_Rasmus_Texto_5:
	.string "Ese POKÉMON tan impresionante es el\n"
	.string "creador de los REGIS: a día de hoy\l"
	.string "conocemos 5 tipos diferentes.$"

Snowpoint_Templo_S5_Rasmus_Texto_6:
	.string "A diferencia de esos ULTRAENTES, los\n"
	.string "REGIS sí que han demostrado tener un\l"
	.string "potencial de alcanzar estadísticas\l"
	.string "extremas y, como consecuencia de ello,\l"
	.string "poder ser sumamente eficientes en\l"
	.string "combate.$"

Snowpoint_Templo_S5_Rasmus_Texto_7:
	.string "Las defensas de REGICE y REGIROCK, la\n"
	.string "VELOCIDAD de REGIELEKI{PAUSE 15}…{PAUSE 15} Comprenderás\l"
	.string "que espero con especial entusiasmo el\l"
	.string "poder estudiar al POKÉMON que creó\l"
	.string "estos prodigios de la naturaleza.$"

Snowpoint_Templo_S5_Rasmus_Texto_8:
	.string "Y por ello, nadie debe interferir\n"
	.string "mientras nos hacemos con REGIGIGAS.$"

Snowpoint_Templo_S5_Rasmus_Texto_9:
	.string "¡Encargáos de él!$"

Snowpoint_Templo_S5_Rasmus_Texto_10:
	.string "Cuando analizemos al rey de los REGIS,\n"
	.string "seremos invencibles.$"

Snowpoint_Templo_S5_Rasmus_Texto_11:
	.string "¡Esto entraba en nuestros planes!$"

Snowpoint_Templo_S5_Rasmus_Texto_12:
	.string "Nuestro ADMIN. lleva tiempo esperando\n"
	.string "este momento, ¡nadie va a interponerse\l"
	.string "ahora que estamos tan cerca!$"

Snowpoint_Templo_S5_Rasmus_Texto_13:
	.string "¡He logrado ganar tiempo!$"

Snowpoint_Templo_S5_Rasmus_Texto_14:
	.string "DR.RASMUS: Fantástico. La dosis justa\n"
	.string "de estrés sobre tu equipo POKÉMON, que\l"
	.string "reducen a 0 tus opciones de derrotarme.$"

Snowpoint_Templo_S5_Rasmus_Texto_15:
	.string "Lo siento, {PLAYER}. Me hubiera\n"
	.string "gustado repetir nuestro encuentro de\l"
	.string "MALVALANOVA, pero no estamos para\l"
	.string "juegos.$"

Snowpoint_Templo_S5_Rasmus_Texto_16:
	.string "Ya no puedes evitar el renacer de\n"
	.string "REGIGIGAS. Pero no te preocupes, no\l"
	.string "llegarás a verlo siquiera.$"

Snowpoint_Templo_S5_Rasmus_Texto_17:
	.string "¡Voy a derrotarte aquí mismo!$"

Snowpoint_Templo_S5_Rasmus_Texto_18:
	.string "ARIANA: Permitidme que me una a la\n"
	.string "fiesta.$"

Snowpoint_Templo_S5_Rasmus_Texto_19:
	.string "¿3 contra 1? Ni siquiera en el TEAM\n"
	.string "ROCKET hacíamos eso.$"

Snowpoint_Templo_S5_Rasmus_Texto_20:
	.string "DR.RASMUS: Esto sí que no me lo\n"
	.string "esperaba. La dueña del CASINO\l"
	.string "MALVALONA.$"

Snowpoint_Templo_S5_Rasmus_Texto_21:
	.string "¿Cómo está mi XURKITREE?$"

Snowpoint_Templo_S5_Rasmus_Texto_22:
	.string "ARIANA: Estará mucho mejor cuando te\n"
	.string "haya derrotado, doctor.$"

Snowpoint_Templo_S5_Rasmus_Texto_23:
	.string "DR.RASMUS: Ya veo. Si ese POKÉMON es\n"
	.string "digno de pertenecer a tu equipo, tus\l"
	.string "opciones de victoria son nulas.$"

Snowpoint_Templo_S5_Rasmus_Texto_24:
	.string "ARIANA: ¡Eso lo veremos!$"

Templo_S5_Amatista_Move_1:
walk_in_place_up
step_end

Templo_S5_Amatista_Move_2:
face_down
step_end

Templo_S5_Amatista_Move_3:
walk_slow_up
step_end

Templo_S5_Amatista_Move_4:
emote_exclamation_mark
step_end

Templo_S5_Amatista_Move_5:
face_right
step_end

Templo_S5_Amatista_Move_6:
walk_in_place_right
step_end

Templo_S5_Amatista_Move_7:
walk_slow_left
step_end

Templo_S5_Amatista_Move_8:
walk_right
face_down
step_end

Templo_S5_Amatista_Move_9:
walk_down
step_end

Snowpoint_Templo_S5_Amatista::
lock
applymovement OBJ_EVENT_ID_PLAYER, Templo_S5_Amatista_Move_1
waitmovement 0x0
playmoncry SPECIES_REGIGIGAS, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
removeobject 1
delay 15
msgbox Snowpoint_Templo_S5_Amatista_Texto_1 MSGBOX_AUTOCLOSE
delay 25
msgbox Snowpoint_Templo_S5_Amatista_Texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Templo_S5_Amatista_Move_2
waitmovement 0x0
msgbox Snowpoint_Templo_S5_Amatista_Texto_3 MSGBOX_AUTOCLOSE
applymovement 2, Templo_S5_Amatista_Move_3
waitmovement 0x0
msgbox Snowpoint_Templo_S5_Amatista_Texto_4 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Templo_S5_Amatista_Move_4
waitmovement 0x0
delay 10
msgbox Snowpoint_Templo_S5_Amatista_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, Templo_S5_Amatista_Move_5
waitmovement 0x0
msgbox Snowpoint_Templo_S5_Amatista_Texto_6 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 2, Templo_S5_Amatista_Move_6
waitmovement 0x0
msgbox Snowpoint_Templo_S5_Amatista_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox Snowpoint_Templo_S5_Amatista_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox Snowpoint_Templo_S5_Amatista_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, Templo_S5_Amatista_Move_2
waitmovement 0x0
msgbox Snowpoint_Templo_S5_Amatista_Texto_10 MSGBOX_AUTOCLOSE
applymovement 2, Templo_S5_Amatista_Move_7
waitmovement 0x0
msgbox Snowpoint_Templo_S5_Amatista_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox Snowpoint_Templo_S5_Amatista_Texto_12 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Templo_S5_Amatista_Move_4
waitmovement 0x0
delay 10
msgbox Snowpoint_Templo_S5_Amatista_Texto_13 MSGBOX_AUTOCLOSE
applymovement 2, Templo_S5_Amatista_Move_8
waitmovement 0x0
msgbox Snowpoint_Templo_S5_Amatista_Texto_14 MSGBOX_AUTOCLOSE
applymovement 2, Templo_S5_Amatista_Move_9
waitmovement 0x0
msgbox Snowpoint_Templo_S5_Amatista_Texto_15 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_609, Snowpoint_Templo_S5_Amatista_Texto_16
msgbox Snowpoint_Templo_S5_Amatista_Texto_17 MSGBOX_AUTOCLOSE
msgbox Snowpoint_Templo_S5_Amatista_Texto_18 MSGBOX_AUTOCLOSE
msgbox Snowpoint_Templo_S5_Amatista_Texto_19 MSGBOX_AUTOCLOSE
msgbox Snowpoint_Templo_S5_Amatista_Texto_20 MSGBOX_AUTOCLOSE
msgbox Snowpoint_Templo_S5_Amatista_Texto_21 MSGBOX_AUTOCLOSE
msgbox Snowpoint_Templo_S5_Amatista_Texto_22 MSGBOX_AUTOCLOSE
msgbox Snowpoint_Templo_S5_Amatista_Texto_23 MSGBOX_AUTOCLOSE
msgbox Snowpoint_Templo_S5_Amatista_Texto_24 MSGBOX_AUTOCLOSE
msgbox Snowpoint_Templo_S5_Amatista_Texto_25 MSGBOX_AUTOCLOSE
msgbox Snowpoint_Templo_S5_Amatista_Texto_26 MSGBOX_AUTOCLOSE
msgbox Snowpoint_Templo_S5_Amatista_Texto_27 MSGBOX_AUTOCLOSE
msgbox Snowpoint_Templo_S5_Amatista_Texto_28 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 254
release
end

Snowpoint_Templo_S5_Amatista_Texto_1:
	.string "ADM.AMATISTA: Ya era hora, REGIGIGAS.\n"
	.string "HOENN te espera con los brazos\l"
	.string "abiertos.$"

Snowpoint_Templo_S5_Amatista_Texto_2:
	.string "Es poco honorable espiar a\n"
	.string "espaldas de tus enemigos,\l"
	.string "{PLAYER}.$"

Snowpoint_Templo_S5_Amatista_Texto_3:
	.string "Ya he visto el numerito que habéis\n"
	.string "montado desde aquí. Deberías estar\l"
	.string "avergonzado, armar semejante ruido en\l"
	.string "este solemne lugar.$"

Snowpoint_Templo_S5_Amatista_Texto_4:
	.string "Por suerte para ti, nuestro objetivo\n"
	.string "principal ya se ha cumplido: traer de\l"
	.string "vuelta a REGIGIGAS.$"

Snowpoint_Templo_S5_Amatista_Texto_5:
	.string "Así es, su región de origen es HOENN.$"

Snowpoint_Templo_S5_Amatista_Texto_6:
	.string "Este templo se levantó en tiempos\n"
	.string "ancestrales, con el único objetivo de\l"
	.string "confinar al colosal POKÉMON, y así\l"
	.string "impedir que vuelva a desarrollar todo su\l"
	.string "potencial.$"

Snowpoint_Templo_S5_Amatista_Texto_7:
	.string "Aquel que era capaz de arrastrar\n"
	.string "continentes con cuerdas, aquel cuyo\l"
	.string "poderío físico era imbatible.$"

Snowpoint_Templo_S5_Amatista_Texto_8:
	.string "Aprovechando su letargo tras ese\n"
	.string "inmenso despliegue de energía,\l"
	.string "pudieron contenerlo.$"

Snowpoint_Templo_S5_Amatista_Texto_9:
	.string "Anularon sus habilidades especiales, y\n"
	.string "después lo sellaron aquí. Solo la\l"
	.string "presencia de los 3 REGIS podrá hacer\l"
	.string "que reaccione… aún en una muy limitada\l"
	.string "forma.$"

Snowpoint_Templo_S5_Amatista_Texto_10:
	.string "No leerás esto en ningún libro de SINNOH,\n"
	.string "pero es la realidad. Lo confinaron aquí\l"
	.string "por miedo a ese poder, y lo hicieron muy\l"
	.string "bien.$"

Snowpoint_Templo_S5_Amatista_Texto_11:
	.string "SINNOH, una región donde es imposible\n"
	.string "hallar a los 3 REGIS necesarios para\l"
	.string "despertarlo, y donde para entrar a este\l"
	.string "TEMPLO es necesario ser ALTO MANDO,\l"
	.string "CAMPEÓN o{PAUSE 5}…{PAUSE 5}$"

Snowpoint_Templo_S5_Amatista_Texto_12:
	.string "Traer un permiso especial con fines\n"
	.string "arqueológicos, como DEVON.$"

Snowpoint_Templo_S5_Amatista_Texto_13:
	.string "No es de extrañar que, con el paso del\n"
	.string "tiempo, las propias personas que\l"
	.string "guardan este lugar desconozcan su\l"
	.string "propia naturaleza: se ha convertido ya\l"
	.string "en un mito.$"

Snowpoint_Templo_S5_Amatista_Texto_14:
	.string "Pero DEVON, su PRESIDENTE, yo{PAUSE 15}…{PAUSE 15} antes\n"
	.string "de ser lo que somos, esta clase de\l"
	.string "POKÉMON antiguos eran nuestra\l"
	.string "especialidad y también nuestro anhelo.\l"
	.string "Ahora, con toda la tecnología que hemos\l"
	.string "adquirido, estamos preparados.$"

Snowpoint_Templo_S5_Amatista_Texto_15:
	.string "No te irás de aquí con las manos vacías,\n"
	.string "{PLAYER}. Déjame darte una pequeña\l"
	.string "muestra de esa tecnología.$"

Snowpoint_Templo_S5_Amatista_Texto_16:
	.string "Esperable.$"

Snowpoint_Templo_S5_Amatista_Texto_17:
	.string "Este equipo ganaría facilmente la LIGA\n"
	.string "POKÉMON de HOENN, sin embargo esperaba\l"
	.string "perder contra ti.$"

Snowpoint_Templo_S5_Amatista_Texto_18:
	.string "Así es la brecha actual que separa\n"
	.string "ambos mundos: el real y el de los niños\l"
	.string "de 10 años que inician su aventura.$"

Snowpoint_Templo_S5_Amatista_Texto_19:
	.string "En SINNOH no parecen aún haberse dado\n"
	.string "cuenta de la diferencia.$"

Snowpoint_Templo_S5_Amatista_Texto_20:
	.string "Y ahora, nosotros les hemos ganado la\n"
	.string "partida.$"

Snowpoint_Templo_S5_Amatista_Texto_21:
	.string "Tus sospechas son ciertas, {PLAYER}.\n"
	.string "Este no es el verdadero REGIGIGAS.$"

Snowpoint_Templo_S5_Amatista_Texto_22:
	.string "Es una copia exacta, un clon que\n"
	.string "teníamos preparado.$"

Snowpoint_Templo_S5_Amatista_Texto_23:
	.string "La única diferencia entre este\n"
	.string "REGIGIGAS y el verdadero{PAUSE 15}…{PAUSE 15} es la\l"
	.string "capacidad para desarrollar ese\l"
	.string "potencial intrínseco, ancestral. Nadie\l"
	.string "lo notará.$"

Snowpoint_Templo_S5_Amatista_Texto_24:
	.string "El falso REGIGIGAS será totalmente\n"
	.string "inofensivo, por lo que, en el fondo, les\l"
	.string "estamos haciendo un favor.$"

Snowpoint_Templo_S5_Amatista_Texto_25:
	.string "{PAUSE 25}…{PAUSE 25} …{PAUSE 25}$"

Snowpoint_Templo_S5_Amatista_Texto_26:
	.string "GIOVANNI: ¿{PLAYER}? {PAUSE 25}…{PAUSE 25} …{PAUSE 25} Cuéntame\n"
	.string "todo.$"

Snowpoint_Templo_S5_Amatista_Texto_27:
	.string "Lo que ha ocurrido en SINNOH merece ser\n"
	.string "hablado inmediatamente. Iré en persona\l"
	.string "a por vosotros.$"

Snowpoint_Templo_S5_Amatista_Texto_28:
	.string "Estaré ahí en unas horas.$"

Templo_S5_Cientifico::
lock
msgbox Templo_S5_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
release
end

Templo_S5_Cientifico_Texto_1:
	.string "Cuando analizemos al rey de los REGIS,\n"
	.string "seremos invencibles.$"

Templo_S5_Policia::
lock
msgbox Templo_S5_Policia_Texto_1 MSGBOX_AUTOCLOSE
release
end

Templo_S5_Policia_Texto_1:
	.string "Nuestro ADMIN. lleva tiempo esperando\n"
	.string "este momento, ¡nadie va a interponerse\l"
	.string "ahora que estamos tan cerca!$"

Templo_S5_Doctor::
lock
msgbox Templo_S5_Doctor_Texto_1 MSGBOX_AUTOCLOSE
release
end

Templo_S5_Doctor_Texto_1:
	.string "Si un POKÉMON así es digno\n"
	.string "de pertenecer a tu equipo, tus\l"
	.string "opciones de victoria son nulas.$"

Templo_S5_Ariana::
lock
msgbox Templo_S5_Ariana_Texto_1 MSGBOX_AUTOCLOSE
release
end

Templo_S5_Ariana_Texto_1:
	.string "ARIANA: ¡Eso lo veremos!$"

Snowpoint_Templo_S5_Regigigas::
lock
msgbox Snowpoint_Templo_S5_Regigigas_Texto_1 MSGBOX_AUTOCLOSE
release
end

Snowpoint_Templo_S5_Regigigas_Texto_1:
	.string "Es el clon de REGIGIGAS que DEVON dejó\n"
	.string "en el lugar del auténtico.$"
