NeoLavandaPueblo_MapScripts::
	.byte 0

NeoLavandaPueblo_1::
lock     
faceplayer     
msgbox NeoLavandaPueblo_Text_1, MSGBOX_DEFAULT
release     
end

NeoLavandaPueblo_Text_1:
.string "Menudo edificio, ¿eh? Aún así, la SEDE\n"
.string "SILPH, y la antigua TORRE POKÉMON, son\l"
.string "más altos.$"




NeoLavandaPueblo_2::
lock     
faceplayer     
msgbox NeoLavandaPueblo_Text_2, MSGBOX_DEFAULT
release     
end

NeoLavandaPueblo_Text_2:
.string "JOHTO nos lleva la delantera, sus\n"
.string "programas de radio son muy buenos.\l"
.string "¿Podrá KANTO hacerlo tan bien?$"




NeoLavandaPueblo_3::
lock     
faceplayer     
msgbox NeoLavandaPueblo_Text_3, MSGBOX_DEFAULT
release     
end

NeoLavandaPueblo_Text_3:
.string "Los programas de radio que aquí se\n"
.string "emitirán nos tienen a todos\l"
.string "expectantes, ¿cómo lo harán en los\l"
.string "pisos de arriba?$"




NeoLavandaPueblo_4::
lock     
faceplayer     
msgbox NeoLavandaPueblo_Text_4, MSGBOX_DEFAULT
release     
end

NeoLavandaPueblo_Text_4:
.string "Viene gente de todas partes a rendir\n"
.string "homenaje a las almas que han partido.$"


NeoLavandaPueblo_Combate_Eusine::
lock
playse SE_SLIDING_DOOR
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaPueblo_Combate_Eusine_Move_1
waitmovement 0x0
clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
addobject 5
delay 20
playse SE_PIN
applymovement 5, NeoLavandaPueblo_Combate_Eusine_Move_2
waitmovement 0x0
msgbox NeoLavandaPueblo_Combate_Eusine_Texto_1 MSGBOX_AUTOCLOSE
applymovement 5, NeoLavandaPueblo_Combate_Eusine_Move_3
waitmovement 0x0
msgbox NeoLavandaPueblo_Combate_Eusine_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox NeoLavandaPueblo_Combate_Eusine_Texto_3 MSGBOX_AUTOCLOSE
applymovement 5, NeoLavandaPueblo_Combate_Eusine_Move_4
waitmovement 0x0
msgbox NeoLavandaPueblo_Combate_Eusine_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_118, NeoLavandaPueblo_Combate_Eusine_Texto_5
msgbox NeoLavandaPueblo_Combate_Eusine_Texto_6 MSGBOX_AUTOCLOSE
applymovement 5, NeoLavandaPueblo_Combate_Eusine_Move_6
waitmovement 0x0
msgbox NeoLavandaPueblo_Combate_Eusine_Texto_7 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaPueblo_Combate_Eusine_Move_1
waitmovement 0x0
delay 20
msgbox NeoLavandaPueblo_Combate_Eusine_Texto_8 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 5, NeoLavandaPueblo_Combate_Eusine_Move_2
waitmovement 0x0
msgbox NeoLavandaPueblo_Combate_Eusine_Texto_9 MSGBOX_AUTOCLOSE
applymovement 5, NeoLavandaPueblo_Combate_Eusine_Move_4
waitmovement 0x0
msgbox NeoLavandaPueblo_Combate_Eusine_Texto_10 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaPueblo_Combate_Eusine_Move_6
applymovement 5, NeoLavandaPueblo_Combate_Eusine_Move_6
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, NeoLavandaPueblo_Combate_Eusine_Move_7
waitmovement 0x0
special RemoveCameraObject
msgbox NeoLavandaPueblo_Combate_Eusine_Texto_11 MSGBOX_AUTOCLOSE
delay 20
msgbox NeoLavandaPueblo_Combate_Eusine_Texto_12 MSGBOX_AUTOCLOSE
delay 20
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, NeoLavandaPueblo_Combate_Eusine_Move_8
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaPueblo_Combate_Eusine_Move_9
applymovement 5, NeoLavandaPueblo_Combate_Eusine_Move_4
waitmovement 0x0
msgbox NeoLavandaPueblo_Combate_Eusine_Texto_13 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
fadescreen 1
delay 20
removeobject 5
playse SE_M_FLY
fadescreen 0
setvar VAR_UNUSED_0x40F7, 206
release
end

NeoLavandaPueblo_Combate_Eusine_Move_9:
face_right
step_end

NeoLavandaPueblo_Combate_Eusine_Move_8:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

NeoLavandaPueblo_Combate_Eusine_Move_7:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

NeoLavandaPueblo_Combate_Eusine_Move_6:
face_up
step_end

NeoLavandaPueblo_Combate_Eusine_Move_4:
walk_in_place_left
step_end

NeoLavandaPueblo_Combate_Eusine_Move_3:
walk_slow_left
step_end

NeoLavandaPueblo_Combate_Eusine_Move_2:
face_left
emote_exclamation_mark
step_end

NeoLavandaPueblo_Combate_Eusine_Move_1:
walk_in_place_right
step_end

NeoLavandaPueblo_Combate_Eusine_Texto_1:
.string "EUSINE: Oh, {PLAYER}... Qué alegría\n"
	.string "verte por aquí.$"

NeoLavandaPueblo_Combate_Eusine_Texto_2:
.string "Vuestra organización es fascinante, en\n"
	.string "serio… ya contábáis con clones de las\l"
	.string "mismísimas BESTIAS SAGRADAS, el\l"
	.string "trabajar con esa base, junto a mis\l"
	.string "conocimientos, ha acelerado muchísimo\l"
	.string "los márgenes.$"

NeoLavandaPueblo_Combate_Eusine_Texto_3:
.string "Me alegra haberos encontrado, estamos\n"
	.string "cruzando fronteras que parecían\l"
	.string "imposibles.$"

NeoLavandaPueblo_Combate_Eusine_Texto_4:
.string "Sé que no estás al tanto respecto a\n"
	.string "estos avances. Lo tuyo es encargarte\l"
	.string "de la pura acción, pero… ¡te pondré al\l"
	.string "día!$"

NeoLavandaPueblo_Combate_Eusine_Texto_5:
.string "No en vano derrotaste al GRAN MAESTRO…$"

NeoLavandaPueblo_Combate_Eusine_Texto_6:
.string "EUSINE: Así es, ya hemos logrado\n"
	.string "extraer el potencial máximo a una de\l"
	.string "las 3 BESTIAS SAGRADAS, y lo que es más\l"
	.string "sorprendente: simular el fenómeno del\l"
	.string "FUERTE VÍNCULO de forma artificial.\l"
	.string "¿No es genial?$"

NeoLavandaPueblo_Combate_Eusine_Texto_7:
.string "Aún así, no he podido derrotarte. Está\n"
	.string "claro que hay algo sagrado, espiritual…\l"
	.string "un halo que os rodea a ti y tu equipo,\l"
	.string "creando un vínculo extremadamente\l"
	.string "difícil de romper. Esa suerte de\l"
	.string "esencia te protege, pero me pregunto\l"
	.string "si es solo por la leyenda que te\l"
	.string "alimenta, o si realmente caerías una\l"
	.string "vez que nuestras mayores creaciones\l"
	.string "estén completas…$"

NeoLavandaPueblo_Combate_Eusine_Texto_8:
.string "…$"

NeoLavandaPueblo_Combate_Eusine_Texto_9:
.string "Entonces… ¿crees que he abandonado\n"
	.string "mis orígenes? ¿Ya no hay rastro de\l"
	.string "esos antiguos POKÉMON que usé en mi\l"
	.string "primer combate?$"

NeoLavandaPueblo_Combate_Eusine_Texto_10:
.string "Mira a tu alrededor, {PLAYER}.$"

NeoLavandaPueblo_Combate_Eusine_Texto_11:
.string "¿Qué había aquí hace apenas unos\n"
	.string "meses? Exacto, la TORRE POKÉMON.$"

NeoLavandaPueblo_Combate_Eusine_Texto_12:
.string "Ese lugar ya no existe, ni existirá más.\n"
	.string "Todo cambia, ahora está la TORRE RADIO.$"

NeoLavandaPueblo_Combate_Eusine_Texto_13:
.string "¿Quién no querría una súper BESTIA\n"
	.string "SAGRADA de 690 STATS BASE, que deja en\l"
	.string "pañales a los originales LUGIA y HO-OH?$"


NeoLavandaPueblo_Primer_Cartel::
msgbox NeoLavandaPueblo_Primer_Cartel_Texto_1 MSGBOX_SIGN
release
end

NeoLavandaPueblo_Primer_Cartel_Texto_1:
.string "CEMENTERIO de PUEBLO LAVANDA$"


NeoLavandaPueblo_Segundo_Cartel::
msgbox NeoLavandaPueblo_Segundo_Cartel_Texto_1 MSGBOX_SIGN
release
end

NeoLavandaPueblo_Segundo_Cartel_Texto_1:
.string "TORRE RADIO LAVANDA$"

NeoLavandaPueblo_Policia::
compare VAR_ROUTE105_STATE, 6
goto_if_eq NeoLavandaPueblo_Policia_2
compare VAR_ROUTE105_STATE, 13
goto_if_lt NeoLavandaPueblo_Policia_3
release
end

NeoLavandaPueblo_Policia_3:
applymovement 6, NeoLavandaPueblo_Policia_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaPueblo_Policia_Move_2
waitmovement 0x0
msgbox NeoLavandaPueblo_Policía_Texto_1.1 MSGBOX_AUTOCLOSE
release
end

NeoLavandaPueblo_Policia_2::
applymovement 6, NeoLavandaPueblo_Policia_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaPueblo_Policia_Move_2
waitmovement 0x0
msgbox NeoLavandaPueblo_Policía_Texto_1 MSGBOX_AUTOCLOSE
msgbox NeoLavandaPueblo_Policía_Texto_2 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 7
playse SE_PIN
applymovement 6, NeoLavandaPueblo_Policia_Move_3
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaPueblo_Policia_Move_3
waitmovement 0x0
delay 10
applymovement 7, NeoLavandaPueblo_Policia_Move_4
waitmovement 0x0
delay 15
applymovement 6, NeoLavandaPueblo_Policia_Move_5
waitmovement 0x0
msgbox NeoLavandaPueblo_Policía_Texto_3 MSGBOX_AUTOCLOSE
applymovement 7, NeoLavandaPueblo_Policia_Move_6
waitmovement 0x0
msgbox NeoLavandaPueblo_Policía_Texto_4 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 6, NeoLavandaPueblo_Policia_Move_3
waitmovement 0x0
msgbox NeoLavandaPueblo_Policía_Texto_5 MSGBOX_AUTOCLOSE
applymovement 7, NeoLavandaPueblo_Policia_Move_6
waitmovement 0x0
msgbox NeoLavandaPueblo_Policía_Texto_6 MSGBOX_AUTOCLOSE
applymovement 6, NeoLavandaPueblo_Policia_Move_5
waitmovement 0x0
msgbox NeoLavandaPueblo_Policía_Texto_7 MSGBOX_AUTOCLOSE
applymovement 6, NeoLavandaPueblo_Policia_Move_5
waitmovement 0x0
msgbox NeoLavandaPueblo_Policía_Texto_8 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaPueblo_Policia_Move_7
waitmovement 0x0
delay 10
applymovement 6, NeoLavandaPueblo_Policia_Move_8
waitmovement 0x0
delay 10
msgbox NeoLavandaPueblo_Policía_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaPueblo_Policia_Move_9
waitmovement 0x0
delay 10
msgbox NeoLavandaPueblo_Policía_Texto_12 MSGBOX_AUTOCLOSE
delay 10
msgbox NeoLavandaPueblo_Policía_Texto_11 MSGBOX_AUTOCLOSE
applymovement 6, NeoLavandaPueblo_Policia_Move_1
waitmovement 0x0
delay 10
msgbox NeoLavandaPueblo_Policía_Texto_13 MSGBOX_AUTOCLOSE
applymovement 6, NeoLavandaPueblo_Policia_Move_1
waitmovement 0x0
msgbox NeoLavandaPueblo_Policía_Texto_14 MSGBOX_AUTOCLOSE
applymovement 7, NeoLavandaPueblo_Policia_Move_6
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaPueblo_Policia_Move_11
waitmovement 0x0
msgbox NeoLavandaPueblo_Policía_Texto_15 MSGBOX_AUTOCLOSE
applymovement 7, NeoLavandaPueblo_Policia_Move_12
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaPueblo_Policia_Move_13
waitmovement 0x0
applymovement 7, NeoLavandaPueblo_Policia_Move_14
waitmovement 0x0
msgbox NeoLavandaPueblo_Policía_Texto_16 MSGBOX_AUTOCLOSE
applymovement 7, NeoLavandaPueblo_Policia_Move_15
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
clearflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2
removeobject 7
setvar VAR_ROUTE105_STATE, 7
release
end

NeoLavandaPueblo_Policía_Texto_1.1:
.string "¿Cómo va el asalto a la VÍA\n"
	.string "SUBTERRÁNEA, señor? Cuente con\l"
	.string "nosotros para todo lo que necesite.$"

NeoLavandaPueblo_Policia_Move_15:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

NeoLavandaPueblo_Policia_Move_14:
face_right
delay_8
delay_8
face_left
step_end

NeoLavandaPueblo_Policia_Move_13:
walk_left
walk_left
walk_left
walk_up
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
step_end

NeoLavandaPueblo_Policia_Move_12:
walk_left
walk_up
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
step_end

NeoLavandaPueblo_Policia_Move_11:
face_left
step_end

NeoLavandaPueblo_Policia_Move_10:
walk_in_place_down
step_end

NeoLavandaPueblo_Policia_Move_9:
walk_in_place_up
step_end

NeoLavandaPueblo_Policia_Move_8:
face_down
step_end

NeoLavandaPueblo_Policia_Move_7:
face_up
step_end

NeoLavandaPueblo_Policia_Move_6:
walk_in_place_right
step_end

NeoLavandaPueblo_Policia_Move_5:
walk_in_place_left
step_end

NeoLavandaPueblo_Policia_Move_4:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_right
step_end

NeoLavandaPueblo_Policia_Move_3:
emote_exclamation_mark
delay_8
delay_8
face_left
step_end

NeoLavandaPueblo_Policia_Move_1:
walk_in_place_down
step_end

NeoLavandaPueblo_Policia_Move_2:
delay_8
face_up
step_end

NeoLavandaPueblo_Policía_Texto_1:
.string "Lo sentimos, señor. A la torre radio le\n"
	.string "quedan unos últimos retoques antes de\l"
	.string "ser abierta de forma definitiva, ¿por\l"
	.string "qué no visita el CEM…?$"

NeoLavandaPueblo_Policía_Texto_2:
.string "????: ¡Necesitamos refuerzos!$"

NeoLavandaPueblo_Policía_Texto_3:
.string "¡¿Qué ocurre?!$"

NeoLavandaPueblo_Policía_Texto_4:
.string "El desalojo de la VIA SUBTERRANEA, todo\n"
	.string "ha salido mal.$"

NeoLavandaPueblo_Policía_Texto_5:
.string "¡Eso no puede ser!$"

NeoLavandaPueblo_Policía_Texto_6:
.string "Los MOTORISTAS… se han atrincherado\n"
	.string "dentro, han reabierto los extensos\l"
	.string "túneles que sirvieron de refugio\l"
	.string "durante la guerra… ¡y no hay forma de\l"
	.string "sacarles de ahí!$"

NeoLavandaPueblo_Policía_Texto_7:
.string "Acordamos con los altos cargos de\n"
	.string "JOHTO tener todo cerrado antes de la\l"
	.string "inauguración de la TORRE RADIO\l"
	.string "LAVANDA. Esto es inadmisible.$"

NeoLavandaPueblo_Policía_Texto_8:
.string "¡Llama a la SEDE SILPH! ¡Qué te pongan\n"
	.string "con el PRESIDENTE, exigimos refuerz…!$"

NeoLavandaPueblo_Policía_Texto_9:
.string "… …$"

NeoLavandaPueblo_Policía_Texto_11:
.string "… …$"

NeoLavandaPueblo_Policía_Texto_12:
.string "Oh… Usted… Señor…$"

NeoLavandaPueblo_Policía_Texto_13:
.string "Ya veo, quiere encargarse\n"
	.string "personalmente de ello, después de todo\l"
	.string "los MOTORISTAS han sido aliados del\l"
	.string "TEAM ROCKET desde sus inicios.$"

NeoLavandaPueblo_Policía_Texto_14:
.string "Confiamos en usted para que resuelva\n"
	.string "esto de la mejor manera posible.$"

NeoLavandaPueblo_Policía_Texto_15:
.string "Venga conmigo, ADMIN.JEFE {PLAYER}.$"

NeoLavandaPueblo_Policía_Texto_16:
.string "No tiene pérdida, debe haber pasado por\n"
	.string "ahí varias veces en sus inicios como\l"
	.string "ROCKET, la VÍA SUBTERRÁNEA está un\l"
	.string "poco más al oeste, le espero allí.$"

NeoLavandaPueblo_Segundo_Policia::
lock
faceplayer
msgbox NeoLavandaPueblo_Segundo_Policia_Texto_1 MSGBOX_NPC
release
end

NeoLavandaPueblo_Segundo_Policia_Texto_1:
.string "Perdone señor, la TORRE RADIO LAVANDA\n"
	.string "se encuentra aún en etapas tempranas\l"
	.string "de construcción. No tardaremos mucho,\l"
	.string "puesto que se hará en tiempo récord,\l"
	.string "pero tendrá que esperar un poco para\l"
	.string "entrar.$"

NeoLavandaPueblo_Prueba::
lock
msgbox NeoLavandaPueblo_Segundo_Policia_Texto_111 MSGBOX_NPC
setdisguise [240]
setvar VAR_UNUSED_0x40F7, 217
release
end

NeoLavandaPueblo_Segundo_Policia_Texto_111::
.string "seteado.$"

