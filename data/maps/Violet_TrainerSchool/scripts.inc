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
	.string "I knew that FEAROW wasn't that good…$"



VioletTrainerSchool3::
lock
msgbox VioletTrainerSchool3_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool3_Texto_1:
.string "…$"



VioletTrainerSchool4::
lock
msgbox VioletTrainerSchool4_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool4_Texto_1:
	.string "So… Can DODRIO really do that much\n"
	.string "damage?$"


VioletTrainerSchool5::
lock
msgbox VioletTrainerSchool5_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool5_Texto_1:
	.string "You'll see. Once I'm back on ROUTE 13 in\n"
	.string "KANTO, no BIRDKEEPER there will believe\l"
	.string "I managed to attend a class led by\l"
	.string "FALKNER himself…$"


VioletTrainerSchool6::
lock
msgbox VioletTrainerSchool6_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool6_Texto_1:
	.string "I didn't know that NOCTOWL is a PSYCHIC\n"
	.string "TYPE too…$"



VioletTrainerSchool7::
lock
msgbox VioletTrainerSchool7_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool7_Texto_1:
	.string "This can't be… The weakest of his\n"
	.string "POKÉMON is much stronger than the best\l"
	.string "of my POKÉMON…$"



VioletTrainerSchool8::
lock
msgbox VioletTrainerSchool8_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool8_Texto_1:
	.string "Everything is great, but… Where did you\n"
	.string "find such bird? PIDGEOT doesn't compare\l"
	.string "with it.$"



VioletTrainerSchool9::
end



VioletTrainerSchool10::
lock
msgbox VioletTrainerSchool10_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool10_Texto_1:
	.string "And keep this in mind. To awaken a\n"
	.string "POKÉMON, we only need to use an\l"
	.string "AWAKENING on it or have a POKÉ FLUTE.$"



VioletTrainerSchool11::
lock
msgbox VioletTrainerSchool11_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool11_Texto_1:
	.string "These classes are so boring. I'm sure\n"
	.string "that FALKNER could make it more\l"
	.string "interesting…$"



VioletTrainerSchool12::
lock
msgbox VioletTrainerSchool12_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool12_Texto_1:
	.string "I know that I need an ANTIDOTE to heal\n"
	.string "POISON. Can you teach something else?$"



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
	.string "You were in FALKNER's class too, weren't\n"
	.string "you?$"

VioletTrainerSchool_Text_TakeStarly2:
	.string "It's pretty rad how much he knows about\n"
	.string "FLYING TYPEs. Plus, he always solves\l"
	.string "questions in a practical way.$"

VioletTrainerSchool_Text_TakeStarly3:
	.string "Heck, he even gave me a bird from some\n"
	.string "far-off region when he saw me\l"
	.string "interested in them. You know what? I've\l"
	.string "still got some chicks that hatched from\l"
	.string "when I paired it with my PIDGEOT. I'll\l"
	.string "give you one!$"

VioletTrainerSchool_Text_MensajeStarly:
.string "YOU OBTAINED A LV.10 STARLY!$"

VioletTrainerSchool_Text_9:
	.string "Be careful with STARLY when it grows.\n"
	.string "Its final evolution is more aggressive\l"
	.string "and offensive than PIDGEOT!$"

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
delay 10
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_1.1
waitmovement 0x0
delay 10
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
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
waitse
delay 10
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_18 MSGBOX_AUTOCLOSE
delay 10
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_19 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_14.1
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_19.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_4
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_11
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_21 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_17
waitmovement 0x0
delay 10
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_21.1 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_17.1
waitmovement 0x0
removeobject 1
removeobject 3
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 121
release
end

Violet_TrainerSchool_Discurso_Pegaso_Move_14.1:
delay_8
face_up
delay_16
delay_8
walk_in_place_up
delay_16
face_up
step_end

Violet_TrainerSchool_Discurso_Pegaso_Texto_1:
.string "PEGASO: Bien. Con esto damos por\n"
	.string "finalizada la breve explicación de\l"
	.string "todas y cada una de las aves que\l"
	.string "habitan en KANTO y JOHTO.\p"
	.string "Quedaos con que FEAROW representa\n"
	.string "la variedad, DODRIO la ofensiva,\l"
	.string "NOCTOWL el aguante y PIDGEOT el\l"
	.string "equilibrio.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_2:
.string "Ahora, pasaremos al apartado de\n"
	.string "estrategia, y aquí me gustaría\l"
	.string "hacer especial hincapié en dos de\l"
	.string "las mayores debilidades del TIPO\l"
	.string "VOLADOR: el ROCA y el ELÉCTRICO.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_3:
.string "¿Alguien de los aquí presentes tiene\n"
	.string "idea de cómo un ave puede lidiar\l"
	.string "con el TIPO ELÉCTRICO o el ROCA?$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_4:
.string "????: Existe un movimiento, llamado\n"
	.string "BOFETÓN LODO, que la mayoría de\l"
	.string "aves pueden aprender.\p"
	.string "Golpea superefectivo a ambos.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_5:
.string "PEGASO: Ya hablamos de esto, hijo.\p"
	.string "La potencia de BOFETÓN LODO es muy\n"
	.string "pobre, y la bajada de precisión\l"
	.string "que ofrece nos hace caer en las\l"
	.string "trampas del azar, quitándonos el\l"
	.string "control del combate.$"
	
Violet_TrainerSchool_Discurso_Pegaso_Texto_5.1:
	.string "No hablo de volver esto una ruleta,\n"
	.string "y ver si logramos sobrevivir por\l"
	.string "puro azar: hablo de tumbar a estos\l"
	.string "tipos de forma contundente con\l"
	.string "POKÉMON TIPO VOLADOR.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_6:
.string "En este caso, la mejor defensa es\n"
	.string "un buen ataque.\p"
	.string "DODRIO entrenado y equipado con la\n"
	.string "VIDASFERA tumbará de un solo\l"
	.string "PATALETA al 100% de los TIPO\l"
	.string "ELÉCTRICO a los que golpee\l"
	.string "efectivo, solo superado en\l"
	.string "VELOCIDAD por unos pocos como\l"
	.string "JOLTEON o ELECTRODE, para los cuales\l"
	.string "tenemos el PAÑUELO ELEGIDO.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_7:
.string "FEAROW con TALADRADORA o PIDGEOT\n"
	.string "con A BOCAJARRO, igualmente\l"
	.string "golpearán superefectivo.\l"
	.string "Aprovechándose de la baja VELOCIDAD\l"
	.string "de los ROCA para atacar antes, o\l"
	.string "de las bajas DEFENSAS del ELÉCTRICO\l"
	.string "para tumbarlos de un golpe.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_8:
.string "La lección que debéis sacar de\n"
	.string "esto es que, en un combate, hay\l"
	.string "infinidad de variables que influyen.\p"
	.string "Cualquier POKÉMON, con movimientos,\n"
	.string "objetos y entrenamiento adecuados,\l"
	.string "es capaz de tumbar a cualquier otro.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_9:
.string "Observad que apenas hemos tocado\n"
	.string "una fracción de los recursos que\l"
	.string "tenemos a nuestra disposición para\l"
	.string "combatir desventajas por tipos.\p"
	.string "Un GLIGAR, o GLISCOR, será\n"
	.string "directamente inmune al TIPO\l"
	.string "ELÉCTRICO, y resistirá neutral el\l"
	.string "ROCA. Mientras, golpeará efectivo\l"
	.string "y por STAB a ambos con TERREMOTO.\p"
	.string "Esto gracias a que, aparte de ser\n"
	.string "VOLADOR, es también TIPO TIERRA.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_10:
.string "Y eso es todo por hoy.\p"
	.string "En la próxima clase hablaremos de\n"
	.string "cómo el movimiento RESPIRO puede,\l"
	.string "literalmente, anular todas las\l"
	.string "debilidades del TIPO VOLADOR, y\l"
	.string "permitirnos incluso jugar a la\l"
	.string "defensiva con los tipos mencionados.\p"
	.string "Aunque también veréis el porqué\n"
	.string "puede ser un arma de doble filo.\p"
	.string "Gracias a todos por asistir.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_11:
	.string "FALKNER SR.: FALKNER, return to SPROUT\n"
	.string "TOWER immediately to continue your\l"
	.string "training.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_12:
	.string "But… Dad… I wanna start training a\n"
	.string "PIDGEY!$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_13:
	.string "FALKNER: You're not ready yet. Before\n"
	.string "you start, you need to polish your\l"
	.string "skills to the fullest. You're still very\l"
	.string "young. If you prepare well in these\l"
	.string "couple of years, I assure you that once\l"
	.string "you take flight, you'll touch the sky.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_14:
	.string "Hmph! I'm so tired of seeing\n"
	.string "BELLSPROUT!$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_15:
	.string "FALKNER: Someday, the VIOLET CITY GYM\n"
	.string "will be yours, son…$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_16:
	.string "Well, we have a curious student. Do you\n"
	.string "wanna ask me something? I'll be more\l"
	.string "than happy to answer.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_17:
.string "¿Combatir?\p"
	.string "Lo siento, chico. Pareces buen\n"
	.string "ENTRENADOR, pero hace ya tiempo\l"
	.string "que decidí apartarme de el combate\l"
	.string "POKÉMON, tal y como es concebido\l"
	.string "hoy en día. Además, las MEDALLAS\l"
	.string "de JOHTO actualmente no tienen\l"
	.string "validez. Según lo poco que he\l"
	.string "visto, la LIGA POKÉMON regresó,\l"
	.string "pero solo para KANTO.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_18:
.string "¿Son las ganas de mejorar como\n"
	.string "ENTRENADOR, conocer nuevos\l"
	.string "POKÉMON y proseguir con tu propio\l"
	.string "viaje lo que te llevan a pedirme\l"
	.string "este combate?\p"
	.string "¿No el colgarte una MEDALLA para\n"
	.string "exponerla ante todos?$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_19:
.string "Interesante{PAUSE 15}…{PAUSE 15}\p"
	.string "¿Eres {PLAYER}?$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_19.1:
	.string "Si cumples el reto que voy a\n"
	.string "proponerte, te concederé ese\l"
	.string "combate.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_20:
	.string "Climb to the top of the SPROUT TOWER\n"
	.string "and speak with the ELDER MASTER. Tell\l"
	.string "him I sent you.$"


Violet_TrainerSchool_Discurso_Pegaso_Texto_21:
.string "Si le derrotas, lucharé contigo, y\n"
	.string "usaré a mis mejores POKÉMON.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_21.1:
	.string "Pase lo que pase, espero que te\n"
	.string "enriquezca la experiencia de\l"
	.string "visitar un lugar tan sagrado como\l"
	.string "ese. Eso también es parte de tu\l"
	.string "viaje, ¿no?$"

Violet_TrainerSchool_Discurso_Pegaso_Move_1.1:
face_left
delay_16
delay_8
face_up
delay_16
delay_8
walk_in_place_down
step_end

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
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_17.1:
walk_down
walk_down
walk_right
walk_right
walk_right
walk_down
walk_down
step_end
