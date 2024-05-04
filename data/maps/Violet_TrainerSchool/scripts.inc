Violet_TrainerSchool_MapScripts::
	.byte 0

VioletTrainerSchool1::
end



VioletTrainerSchool2::
lock
msgbox VioletTrainerSchool2_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool2_Texto_1:
.string "Ya sabía yo que FEAROW no era para\n"
	.string "tanto{PAUSE 15}…{PAUSE 15}$"



VioletTrainerSchool3::
lock
msgbox VioletTrainerSchool3_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool3_Texto_1:
.string "{PAUSE 15}…{PAUSE 15}$"



VioletTrainerSchool4::
lock
msgbox VioletTrainerSchool4_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool4_Texto_1:
.string "Entonces…\n"
	.string "¿De verdad puede DODRIO hacer\l"
	.string "tanto daño?$"


VioletTrainerSchool5::
lock
msgbox VioletTrainerSchool5_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool5_Texto_1:
.string "Verás cuando pueda regresar a la\n"
	.string "RUTA 13 de KANTO, ningún\l"
	.string "ORNITÓLOGO de allí creerá que pude\l"
	.string "asistir a una clase del mismísimo\l"
	.string "PEGASO en persona…{PAUSE 5}$"


VioletTrainerSchool6::
lock
msgbox VioletTrainerSchool6_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool6_Texto_1:
.string "No sabía que NOCTOWL era TIPO\n"
	.string "PSÍQUICO también…{PAUSE 5}$"



VioletTrainerSchool7::
lock
msgbox VioletTrainerSchool7_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool7_Texto_1:
.string "No puede ser…\n"
	.string "El más débil de sus POKÉMON es\l"
	.string "mucho más fuerte que el mejor de\l"
	.string "mis POKÉMON…{PAUSE 5}$"



VioletTrainerSchool8::
lock
msgbox VioletTrainerSchool8_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool8_Texto_1:
.string "Todo eso está muy bien, pero…\n"
	.string "¿Dónde conseguiste a esa poderosa\l"
	.string "ave?\l"
	.string "Le da mil vueltas a PIDGEOT.$"



VioletTrainerSchool9::
end



VioletTrainerSchool10::
lock
msgbox VioletTrainerSchool10_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool10_Texto_1:
.string "Y recordad, para despertar a un\n"
	.string "POKÉMON solo necesitamos usar en\l"
	.string "él un DESPERTAR, o contar con una\l"
	.string "POKÉ FLAUTA.$"



VioletTrainerSchool11::
lock
msgbox VioletTrainerSchool11_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool11_Texto_1:
.string "Qué aburridas que son estas\n"
	.string "clases, PEGASO seguro que las\l"
	.string "haría más divertidas…{PAUSE 5}$"



VioletTrainerSchool12::
lock
msgbox VioletTrainerSchool12_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool12_Texto_1:
.string "Ya sé que necesito un ANTÍDOTO\n"
	.string "para curar el ENVENENAMIENTO.\l"
	.string "¿Podemos pasar a otra cosa?$"



VioletTrainerSchool_EventScript_ReceiveStarly::
    lock
    faceplayer
	checkmoncatch SPECIES_STARLY
	goto_if_eq VAR_RESULT, FALSE, VioletTrainerSchool_EventScript_TakeStarly 
	msgbox VioletTrainerSchool_Text_9, MSGBOX_DEFAULT
	release
	end



VioletTrainerSchool_EventScript_TakeStarly::
    msgbox VioletTrainerSchool_Text_TakeStarly MSGBOX_DEFAULT
	msgbox VioletTrainerSchool_Text_TakeStarly2 MSGBOX_DEFAULT
	msgbox VioletTrainerSchool_Text_TakeStarly3 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox VioletTrainerSchool_Text_MensajeStarly, MSGBOX_DEFAULT
	givemon SPECIES_STARLY, 10, ITEM_FLYING_GEM
	waitfanfare  
	release
	end 



VioletTrainerSchool_Text_TakeStarly:
    .string "¿Tú estuviste también en la clase\n"
	.string "de PEGASO, verdad?$"




VioletTrainerSchool_Text_TakeStarly2:
	.string "Es increíble lo que sabe acerca\n"
	.string "del TIPO VOLADOR. Además, trata\l"
	.string "siempre de resolver dudas de\l"
	.string "la forma más práctica.$"



VioletTrainerSchool_Text_TakeStarly3:
	.string "Me llegó incluso a dar un ave de\n"
	.string "no sé qué región lejana, al ver mi\l"
	.string "interés por ellas.\l"
	.string "¿Sabes qué?\l"
	.string "Estuve emparejándola con mi\l"
	.string "PIDGEOT y puso varios huevos que\l"
	.string "dieron a luz.\l"
	.string "¡Te daré uno de los que salieron!$"



VioletTrainerSchool_Text_MensajeStarly:
.string "¡OBTUVISTE UN STARLY AL NV.10!$"


VioletTrainerSchool_Text_9:
    .string "Ten cuidado con STARLY cuando\n"
	.string "crezca.\l"
	.string "¡Su evolución final es más\l"
	.string "agresiva y brava que PIDGEOT!$"

Violet_TrainerSchool_Discurso_Pegaso::
applymovement OBJ_EVENT_ID_PLAYER, Violet_TrainerSchool_Discurso_Pegaso_Move_1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Violet_TrainerSchool_Discurso_Pegaso_Move_2
waitmovement 0x0
special RemoveCameraObject
delay 15
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_3
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_1 MSGBOX_AUTOCLOSE
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_3
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_3 MSGBOX_AUTOCLOSE
delay 40
applymovement 4, Violet_TrainerSchool_Discurso_Pegaso_Move_4
applymovement 3, Violet_TrainerSchool_Discurso_Pegaso_Move_5
applymovement 5, Violet_TrainerSchool_Discurso_Pegaso_Move_6
applymovement 2, Violet_TrainerSchool_Discurso_Pegaso_Move_6
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, Violet_TrainerSchool_Discurso_Pegaso_Move_8
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_7
applymovement 5, Violet_TrainerSchool_Discurso_Pegaso_Move_8
applymovement 2, Violet_TrainerSchool_Discurso_Pegaso_Move_8
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_9
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_3
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_10
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_11
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_3
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_10 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER
fadescreen 1
removeobject 2
removeobject 4
removeobject 6
removeobject 7
removeobject 8
delay 20
fadescreen 0
delay 10
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_7
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_11 MSGBOX_AUTOCLOSE
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_8
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_13 MSGBOX_AUTOCLOSE
applymovement 3, Violet_TrainerSchool_Discurso_Pegaso_Move_3
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_14 MSGBOX_AUTOCLOSE
applymovement 3, Violet_TrainerSchool_Discurso_Pegaso_Move_3.1
waitmovement 0x0
removeobject 3
playse SE_EXIT
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Violet_TrainerSchool_Discurso_Pegaso_Move_13
waitmovement 0x0
special RemoveCameraObject
delay 20
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_11
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_15 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_14
waitmovement 0x0
delay 15
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_15
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_16
applymovement OBJ_EVENT_ID_PLAYER, Violet_TrainerSchool_Discurso_Pegaso_Move_11
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Violet_TrainerSchool_Discurso_Pegaso_Move_3
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_17 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Violet_TrainerSchool_Discurso_Pegaso_Move_3
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_14
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_18 MSGBOX_AUTOCLOSE
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_19 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_4
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_11
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_21 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_17
waitmovement 0x0
removeobject 1
removeobject 3
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 121
release
end

Violet_TrainerSchool_Discurso_Pegaso_Texto_1:
.string "PEGASO: Bien, con esto damos por\n"
	.string "finalizada la breve explicación de\l"
	.string "todas y cada una de las aves que\l"
	.string "habitan en KANTO y JOHTO.\l"
	.string "Quedaos con que FEAROW representa\l"
	.string "la variedad, DODRIO la ofensiva,\l"
	.string "NOCTOWL el aguante y PIDGEOT el\l"
	.string "equilibrio.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_2:
.string "Ahora pasaremos al apartado de\n"
	.string "estrategia, y aquí me gustaría\l"
	.string "hacer especial hincapié en dos de\l"
	.string "las mayores debilidades del TIPO\l"
	.string "VOLADOR: el ROCA y el ELÉCTRICO.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_3:
.string "¿Alguien de los aquí presentes\n"
	.string "tiene idea de cómo un ave puede\l"
	.string "lidiar con el TIPO ELÉCTRICO o el\l"
	.string "ROCA?$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_4:
.string "????: Existe un movimiento llamado\n"
	.string "BOFETÓN LODO, que la mayoría de\l"
	.string "aves pueden aprender, y es\l"
	.string "superefectivo contra estos tipos.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_5:
.string "PEGASO: Ya hablamos de esto, hijo,\n"
	.string "la potencia de BOFETÓN LODO es muy\l"
	.string "pobre, y la bajada de precisión\l"
	.string "que ofrece nos hace caer en las\l"
	.string "trampas del azar, quitándonos el\l"
	.string "control del combate. No hablo\l"
	.string "de volver esto una ruleta y ver si\l"
	.string "logramos sobrevivir por pura\l"
	.string "suerte, hablo de tumbar a estos\l"
	.string "tipos de forma contundente con\l"
	.string "POKÉMON TIPO VOLADOR.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_6:
.string "En este caso, la mejor defensa es\n"
	.string "un buen ataque.\l"
	.string "DODRIO entrenado y equipado con la\l"
	.string "VIDASFERA tumbará de un solo\l"
	.string "PATALETA al 100% de los TIPO\l"
	.string "ELÉCTRICO a los que golpee\l"
	.string "efectivo, solo superado en\l"
	.string "VELOCIDAD por unos pocos como\l"
	.string "JOLTEON o ELECTRODE, para los cuales\l"
	.string "tenemos el PAÑUELO ELEGIDO.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_7:
.string "FEAROW con TALADRADORA o PIDGEOT\n"
	.string "con A BOCAJARRO igualmente\l"
	.string "golpearán superefectivo,\l"
	.string "aprovechándose de la baja\l"
	.string "VELOCIDAD de los ROCA para atacar\l"
	.string "antes, o de las bajas DEFENSAS del\l"
	.string "ELÉCTRICO para tumbarlos de un\l"
	.string "golpe.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_8:
.string "La lección que debéis sacar de\n"
	.string "esto es que en un combate POKÉMON\l"
	.string "hay infinidad de variables que\l"
	.string "influyen, y cualquier\l"
	.string "POKÉMON, con los movimientos,\l"
	.string "objetos y entrenamiento adecuados,\l"
	.string "es capaz de tumbar a cualquier\l"
	.string "otro.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_9:
.string "Observad que apenas hemos tocado\n"
	.string "una fracción de los recursos que\l"
	.string "tenemos a nuestra disposición para\l"
	.string "combatir desventajas por tipos. Un\l"
	.string "GLIGAR o GLISCOR será\l"
	.string "directamente inmune al TIPO\l"
	.string "ELÉCTRICO y resistirá neutral el\l"
	.string "ROCA, mientras que golpeará\l"
	.string "superefectivo por STAB a ambos\l"
	.string "tipos con TERREMOTO, todo gracias\l"
	.string "a que, aparte de ser VOLADOR, es\l"
	.string "también TIPO TIERRA.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_10:
.string "Y eso es todo por hoy. En la\n"
	.string "próxima clase hablaremos de cómo\l"
	.string "el movimiento RESPIRO puede\l"
	.string "literalmente anular todas las\l"
	.string "debilidades del TIPO VOLADOR, y\l"
	.string "permitirnos incluso jugar a la\l"
	.string "defensiva con los tipos\l"
	.string "mencionados, aunque también veréis\l"
	.string "por qué puede ser un arma de\l"
	.string "doble filo.\l"
	.string "Gracias a todos por asistir.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_11:
.string "PEGASO: PEGASO, regresa a la TORRE\n"
	.string "BELLSPROUT inmediatamente para\l"
	.string "continuar con tu entrenamiento.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_12:
.string "Pero{PAUSE 25}…{PAUSE 25} padre{PAUSE 15}…{PAUSE 15}\n"
	.string "¡Quiero empezar ya a entrenar\l"
	.string "un PIDGEY!$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_13:
.string "PEGASO: Aún no estás preparado,\n"
	.string "antes de empezar debes pulir al\l"
	.string "máximo tu base. Eres muy joven\l"
	.string "aún. Si te preparas bien en este\l"
	.string "par de años, te aseguro que una\l"
	.string "vez emprendas el vuelo, tocarás el\l"
	.string "cielo.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_14:
.string "¡Mphf!\n"
	.string "¡Estoy harto de ver BELLSPROUTS!$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_15:
.string "PEGASO: Algún día el GIMNASIO de\n"
	.string "MALVA será tuyo{PAUSE 5}…{PAUSE 5}$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_16:
.string "Vaya, tenemos un alumno curioso.\n"
	.string "¿Querías hacerme alguna pregunta?\l"
	.string "Estaré encantado de responderte.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_17:
.string "¿Combatir?\n"
	.string "Lo siento chico, pareces buen\l"
	.string "entrenador, pero hace ya tiempo\l"
	.string "que decidí apartarme de el combate\l"
	.string "POKÉMON tal y como es concebido\l"
	.string "hoy en día, además, las MEDALLAS\l"
	.string "de JOHTO actualmente no tienen\l"
	.string "validez. Según lo poco que he\l"
	.string "visto, la LIGA POKÉMON regresó,\l"
	.string "pero solo para KANTO.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_18:
.string "¿Son las ganas de mejorar como\n"
	.string "ENTRENADOR, conocer nuevos\l"
	.string "POKÉMON y proseguir con tu propio\l"
	.string "viaje lo que te llevan a pedirme\l"
	.string "este combate?\l"
	.string "¿Y no el colgarte una MEDALLA para\l"
	.string "exponerla ante todos?$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_19:
.string "Interesante{PAUSE 15}…{PAUSE 15}\n"
	.string "¿Eres {PLAYER}?\l"
	.string "Si cumples el reto que voy a\l"
	.string "proponerte te concederé ese\l"
	.string "combate.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_20:
.string "Sube a la cima de la TORRE\n"
	.string "BELLSPROUT y habla con el maestro\l"
	.string "anciano. Dile que te envío yo.$"


Violet_TrainerSchool_Discurso_Pegaso_Texto_21:
.string "Si le derrotas, lucharé contigo, y\n"
	.string "usaré a mis mejores POKÉMON.\l"
	.string "Pase lo que pase, espero que te\l"
	.string "enriquezca la experiencia de\l"
	.string "visitar un lugar tan sagrado como\l"
	.string "ese. Eso también es parte de tu\l"
	.string "viaje, ¿no?$"

Violet_TrainerSchool_Discurso_Pegaso_Move_1:
walk_in_place_right
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_2:
walk_right
walk_right
walk_down
walk_down
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_3:
walk_in_place_down
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_3.1:
walk_in_place_down
walk_down
walk_down
walk_down
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_4:
face_right
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_5:
walk_in_place_up
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_6:
face_left
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_7:
walk_left
walk_down
walk_left
face_down
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_8:
face_up
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_9:
walk_right
walk_up
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_10:
walk_right
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_11:
face_down
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_12:
walk_down
walk_down
walk_down
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_13:
walk_left
walk_left
walk_up
walk_up
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_14:
emote_exclamation_mark
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_15:
face_left
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_16:
walk_left
walk_left
walk_left
face_up
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_17:
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_down
walk_down
step_end
