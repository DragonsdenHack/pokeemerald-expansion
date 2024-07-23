Cave_Regigigas_S5_2_MapScripts::
	.byte 0

Cave_Regigigas_S5_2_Esmeralda_Izq::
lock
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S5_2_Move_2
waitmovement 0x0
goto Cave_Regigigas_S5_2_Esmeralda
release
end

Cave_Regigigas_S5_2_Esmeralda_Der::
lock
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S5_2_Move_1
waitmovement 0x0
goto Cave_Regigigas_S5_2_Esmeralda
release
end

Cave_Regigigas_S5_2_Move_2:
walk_slow_right
walk_slow_up
step_end

Cave_Regigigas_S5_2_Move_1:
walk_slow_up
step_end

Cave_Regigigas_S5_2_Move_3:
emote_exclamation_mark
step_end

Cave_Regigigas_S5_2_Move_4:
face_down
step_end

Cave_Regigigas_S5_2_Move_5:
face_up
step_end

Cave_Regigigas_S5_2_Move_6:
walk_in_place_up
step_end

Cave_Regigigas_S5_2_Move_7:
face_down
step_end

Cave_Regigigas_S5_2_Move_8:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Cave_Regigigas_S5_2_Move_9:
walk_up
step_end

Cave_Regigigas_S5_2_Move_10:
walk_in_place_down
step_end

Cave_Regigigas_S5_2_Move_11:
delay_8
face_down
delay_16
walk_in_place_right
step_end

Cave_Regigigas_S5_2_Move_12:
delay_16
delay_8
walk_up
face_left
delay_16
step_end

Cave_Regigigas_S5_2_Move_13:
walk_in_place_right
step_end

Cave_Regigigas_S5_2_Esmeralda::
lock
playse SE_PIN
applymovement 2, Cave_Regigigas_S5_2_Move_3
applymovement 3, Cave_Regigigas_S5_2_Move_3
waitmovement 0x0
delay 10
applymovement 2, Cave_Regigigas_S5_2_Move_4
applymovement 3, Cave_Regigigas_S5_2_Move_4
waitmovement 0x0
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_2 MSGBOX_AUTOCLOSE
applymovement 3, Cave_Regigigas_S5_2_Move_5
waitmovement 0x0
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, Cave_Regigigas_S5_2_Move_6
waitmovement 0x0
delay 10
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, Cave_Regigigas_S5_2_Move_7
waitmovement 0x0
delay 10
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_6 MSGBOX_AUTOCLOSE
clearflag FLAG_HOENN_1
addobject 1
applymovement 1, Cave_Regigigas_S5_2_Move_8
waitmovement 0x0
delay 15
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S5_2_Move_9
waitmovement 0x0
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_11 MSGBOX_AUTOCLOSE
applymovement 2, Cave_Regigigas_S5_2_Move_10
waitmovement 0x0
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_13 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S5_2_Move_11
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S5_2_Move_12
waitmovement 0x0
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_14 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Cave_Regigigas_S5_2_Move_13
waitmovement 0x0
delay 10
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Cave_Regigigas_S5_2_Move_14
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S5_2_Move_14
waitmovement 0x0
delay 10
applymovement 1, Cave_Regigigas_S5_2_Move_15
waitmovement 0x0
delay 10
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_16 MSGBOX_AUTOCLOSE
choose_mons
multi_2_vs_2 1534, Cave_Regigigas_S5_2_Esmeralda_Texto_17, 1553, Cave_Regigigas_S5_2_Esmeralda_Texto_18, 1554, 6
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_19 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_20 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_21 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_22 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Cave_Regigigas_S5_2_Move_3
waitmovement 0x0
delay 10
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_23 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_24 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, Cave_Regigigas_S5_2_Move_15
waitmovement 0x0
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_25 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, Cave_Regigigas_S5_2_Move_16
applymovement 3, Cave_Regigigas_S5_2_Move_17
waitmovement 0x0
delay 15
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_25.1 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_26 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S5_2_Move_20
applymovement 1, Cave_Regigigas_S5_2_Move_18
waitmovement 0x0
applymovement 3, Cave_Regigigas_S5_2_Move_19
waitmovement 0x0
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_27 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S5_2_Move_21
waitmovement 0x0
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_28 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_29 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_30 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Cave_Regigigas_S5_2_Move_21
waitmovement 0x0
delay 15
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_31 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Cave_Regigigas_S5_2_Move_19
waitmovement 0x0
delay 15
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_32 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_33 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 3, Cave_Regigigas_S5_2_Move_23
waitmovement 0x0
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_34 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_35 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S5_2_Move_22
waitmovement 0x0
setflag FLAG_HOENN_61
setflag FLAG_HOENN_1
clearflag FLAG_HOENN_65
removeobject 7
removeobject 8
removeobject 6
removeobject 1
setvar VAR_UNUSED_0x40F8, 20
release
end

Cave_Regigigas_S5_2_Move_23:
walk_in_place_down
step_end

Cave_Regigigas_S5_2_Move_22:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

Cave_Regigigas_S5_2_Move_21:
face_up
step_end

Cave_Regigigas_S5_2_Move_20:
delay_16
face_left
step_end

Cave_Regigigas_S5_2_Move_19:
face_down
step_end

Cave_Regigigas_S5_2_Move_18:
walk_down
walk_down
walk_down
step_end

Cave_Regigigas_S5_2_Move_17:
face_right
lock_facing_direction
walk_left
unlock_facing_direction
step_end

Cave_Regigigas_S5_2_Move_16:
walk_fast_up
step_end

Cave_Regigigas_S5_2_Move_15:
walk_in_place_up
step_end

Cave_Regigigas_S5_2_Move_14:
face_up
delay_8
step_end

Cave_Regigigas_S5_2_Esmeralda_Texto_1:
	.string "ADM.ESMERALDA: {PLAYER}...\n"
	.string "Volvemos a vernos.$"

Cave_Regigigas_S5_2_Esmeralda_Texto_2:
	.string "Veo que nuestro encuentro en CUEVA\n"
	.string "GRANITO no te hizo entrar en razón.$"

Cave_Regigigas_S5_2_Esmeralda_Texto_3:
	.string "Es más, te has empeñado en\n"
	.string "perseguirnos hasta los confines del\l"
	.string "abismo más profundo de HOENN.$"

Cave_Regigigas_S5_2_Esmeralda_Texto_4:
	.string "Y aún así, DEVON ya contempló la\n"
	.string "minúscula posibilidad de que el TEAM\l"
	.string "ROCKET planeara algún burdo intento de\l"
	.string "truncar nuestros planes aquí.$"

Cave_Regigigas_S5_2_Esmeralda_Texto_5:
	.string "ADM.ZAFIRO: Lo que no contemplamos es…$"

Cave_Regigigas_S5_2_Esmeralda_Texto_6:
	.string "ADM.ESMERALDA: Es que vinieras\n"
	.string "acompañado.$"

Cave_Regigigas_S5_2_Esmeralda_Texto_7:
	.string "ADM.ZAFIRO: ANDRA 'la exploradora',\n"
	.string "desaparecida desde su derrota a manos\l"
	.string "de nuestro ADMIN.JEFE AMATISTA.$"

Cave_Regigigas_S5_2_Esmeralda_Texto_8:
	.string "Y ahora, después una larga búsqueda\n"
	.string "con el objeto de encontrarse a sí\l"
	.string "misma, regresa triunfal al TEAM ROCKET.$"

Cave_Regigigas_S5_2_Esmeralda_Texto_9:
	.string "ANDRA: No, no lo he hecho. Puede que os\n"
	.string "resulte difícil entenderlo, pero\l"
	.string "algunos aún tenemos un interés genuino\l"
	.string "por el misterio.$"

Cave_Regigigas_S5_2_Esmeralda_Texto_10:
	.string "Y mi intuición me dice que estáis\n"
	.string "delante de lo que necesitamos saber\l"
	.string "para adentrarnos más en este lugar. De\l"
	.string "modo que apartaos: solo os lo diré una\l"
	.string "vez.$"

Cave_Regigigas_S5_2_Esmeralda_Texto_11:
	.string "ADM.ESMERALDA: Estás en lo cierto. Esos\n"
	.string "jeroglíficos indican cómo pasar el lago\l"
	.string "que os adentrará aún más en este\l"
	.string "abismo.$"

Cave_Regigigas_S5_2_Esmeralda_Texto_12:
	.string "ADM.ZAFIRO: Y nadie debe pasar de aquí.$"

Cave_Regigigas_S5_2_Esmeralda_Texto_13:
	.string "ANDRA: Muy bien.$"

Cave_Regigigas_S5_2_Esmeralda_Texto_14:
	.string "{PLAYER}, ¿listo para combatir?$"

Cave_Regigigas_S5_2_Esmeralda_Texto_15:
	.string "Quiero ver tu evolución como\n"
	.string "ENTRENADOR… desde una nueva\l"
	.string "perspectiva.$"

Cave_Regigigas_S5_2_Esmeralda_Texto_16:
	.string "¡Vamos, luchemos juntos!$"

Cave_Regigigas_S5_2_Esmeralda_Texto_17:
	.string "Entonces, este es el poder de dos\n"
	.string "FUERTE VÍNCULO en acción…$"

Cave_Regigigas_S5_2_Esmeralda_Texto_18:
	.string "Estáis al borde del abismo…$"

Cave_Regigigas_S5_2_Esmeralda_Texto_19:
	.string "ADM.ESMERALDA: Esa forma de combatir,\n"
	.string "esa sincronicidad…$"

Cave_Regigigas_S5_2_Esmeralda_Texto_20:
	.string "No has venido solo por motivos\n"
	.string "arqueológicos, ¿verdad, ANDRA?$"

Cave_Regigigas_S5_2_Esmeralda_Texto_21:
	.string "ADM.ZAFIRO: Después de todo, te queda\n"
	.string "algo de lealtad hacia el TEAM ROCKET o…$"

Cave_Regigigas_S5_2_Esmeralda_Texto_22:
	.string "ADM.ESMERALDA: Más bien, lealtad hacia\n"
	.string "{PLAYER}. ¿No es así?$"

Cave_Regigigas_S5_2_Esmeralda_Texto_23:
	.string "ADM.ZAFIRO: Esa pareja de CROBAT-& es\n"
	.string "digna de estudio, desde luego. El\l"
	.string "DR.RASMUS estaría encantado de\l"
	.string "analizar el fenómeno.$"

Cave_Regigigas_S5_2_Esmeralda_Texto_24:
	.string "ANDRA: Ese 'DOCTOR' jamás tocará a\n"
	.string "nuestros CROBAT, ¡ni con un dedo!$"

Cave_Regigigas_S5_2_Esmeralda_Texto_25:
	.string "Ahora, ¡fuera de mi camino!$"

Cave_Regigigas_S5_2_Esmeralda_Texto_25.1:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15} …{PAUSE 15} …{PAUSE 15} …{PAUSE 15} …{PAUSE 15} …{PAUSE 15} …{PAUSE 15} …{PAUSE 15} …{PAUSE 15} …{PAUSE 15}$"

Cave_Regigigas_S5_2_Esmeralda_Texto_26:
	.string "Muy bien… {PLAYER}, te espero en la\n"
	.string "zona del lago.$"

Cave_Regigigas_S5_2_Esmeralda_Texto_27:
	.string "ADM.ESMERALDA: Sabed que… no importa.$"

Cave_Regigigas_S5_2_Esmeralda_Texto_28:
	.string "ANDRA: ¿No importa?$"

Cave_Regigigas_S5_2_Esmeralda_Texto_29:
	.string "ADM.ESMERALDA: No importa lo que\n"
	.string "hagáis, la naturaleza de nuestros\l"
	.string "planes es demasiado compleja como para\l"
	.string "que podáis actuar en su contra.$"

Cave_Regigigas_S5_2_Esmeralda_Texto_30:
	.string "Seguid avanzando, os lo habéis ganado y\n"
	.string "conozco esa sensación. Como grandes\l"
	.string "ENTRENADORES que sois, creéis que\l"
	.string "podéis con todo.$"

Cave_Regigigas_S5_2_Esmeralda_Texto_31:
	.string "Pero… acabaréis chocando contra\n"
	.string "un muro. Antes o después.$"

Cave_Regigigas_S5_2_Esmeralda_Texto_32:
	.string "Has mejorado ANDRA, pero ten en cuenta\n"
	.string "una cosa: nuestro ADMIN.AMATISTA solo\l"
	.string "estaba jugando contigo en PUEBLO\l"
	.string "LAVANDA, al igual que con {PLAYER} en\l"
	.string "SINNOH.$"

Cave_Regigigas_S5_2_Esmeralda_Texto_33:
	.string "A la hora de la verdad, ninguno de\n"
	.string "vosotros tiene una sola oportunidad.$"

Cave_Regigigas_S5_2_Esmeralda_Texto_34:
	.string "Si ya caíste frente a un equipo\n"
	.string "mediocre para sus estándares, ¡esta\l"
	.string "vez te aplastará sin piedad, no tenéis\l"
	.string "ninguna oportunidad!$"

Cave_Regigigas_S5_2_Esmeralda_Texto_35:
	.string "ANDRA: Eso no lo decidirás tú.$"

Cave_Regigigas_S5_2_Post_Esmeralda::
lock
faceplayer
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_30 MSGBOX_AUTOCLOSE
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_31 MSGBOX_AUTOCLOSE
release
end

Cave_Regigigas_S5_2_Post_Zafiro::
lock
faceplayer
msgbox Cave_Regigigas_S5_2_Esmeralda_Texto_23 MSGBOX_AUTOCLOSE
release
end

Cave_Regigigas_S5_2_NPC_Sexto::
lock
msgbox Cave_Regigigas_S5_2_NPC_Sexto_Texto_1 MSGBOX_AUTOCLOSE
release
end

Cave_Regigigas_S5_2_NPC_Sexto_Texto_1:
	.string "¿¡Por qué pareces conocer tan\n"
	.string "bien nuestra propia región!?$"
