GimnasioAnciana_MapScripts::
	.byte 0



GimnasioAnciana_EventScript_Anciano::
	trainerbattle_single TRAINER_TRAINER_22, GimnasioAnciana_Text_AncianoIntro, GimnasioAnciana_Text_AncianoDefeated
	msgbox GimnasioAnciana_Text_AncianoPostBattle, MSGBOX_AUTOCLOSE
	end



GimnasioAnciana_EventScript_Anciana::
	trainerbattle_single TRAINER_TRAINER_23, GimnasioAnciana_Text_AncianaIntro, GimnasioAnciana_Text_AncianaDefeated
	msgbox GimnasioAnciana_Text_AncianaPostBattle, MSGBOX_AUTOCLOSE
	end



GimnasioAnciana_EventScript_Anciano2::
	trainerbattle_single TRAINER_TRAINER_24, GimnasioAnciana_Text_Anciano2Intro, GimnasioAnciana_Text_Anciano2Defeated
	msgbox GimnasioAnciana_Text_Anciano2PostBattle, MSGBOX_AUTOCLOSE
	end



GimnasioAnciana_EventScript_Anciano3::
	trainerbattle_single TRAINER_TRAINER_25, GimnasioAnciana_Text_Anciano3Intro, GimnasioAnciana_Text_Anciano3Defeated
	msgbox GimnasioAnciana_Text_Anciano3PostBattle, MSGBOX_AUTOCLOSE
	end


GimnasioAnciana_Combate_Gimnasio::
lock
faceplayer
compare VAR_ROUTE108_STATE, 5
goto_if_gt GimnasioAnciana_Combate_Gimnasio_2
msgbox GimnasioAnciana_Combate_Gimnasio_Texto_1 MSGBOX_NPC
delay 20
msgbox GimnasioAnciana_Combate_Gimnasio_Texto_2 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox GimnasioAnciana_Combate_Gimnasio_Texto_3 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_26, GimnasioAnciana_Combate_Gimnasio_Texto_4
msgbox GimnasioAnciana_Combate_Gimnasio_Texto_5 MSGBOX_AUTOCLOSE
msgbox GimnasioAnciana_Combate_Gimnasio_Texto_6 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox GimnasioAnciana_Combate_Gimnasio_Texto_7 MSGBOX_DEFAULT
givemon SPECIES_ZORUA, 50, ITEM_NORMAL_GEM
waitfanfare
msgbox GimnasioAnciana_Combate_Gimnasio_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox GimnasioAnciana_Combate_Gimnasio_Texto_11.1 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM81
msgbox GimnasioAnciana_Combate_Gimnasio_Texto_11.2 MSGBOX_DEFAULT
waitfanfare
msgbox GimnasioAnciana_Combate_Gimnasio_Texto_11.3 MSGBOX_NPC
setvar VAR_ROUTE108_STATE, 6
release
end

GimnasioAnciana_Combate_Gimnasio_Texto_11.3:
.string "Con DANZA ESPADA elevarás\n"
	.string "drásticamente el ATAQUE.\l"
	.string "Si tu POKÉMON ya es rápido de por sí\l"
	.string "o cuenta con buenos movimientos de\l"
	.string "prioridad, puede acabar rápido con el\l"
	.string "combate.$"

GimnasioAnciana_Combate_Gimnasio_Texto_11.2:
.string "¡¡{PLAYER} obtuvo la MT81 DANZA\n"
	.string "ESPADA de manos de ZINNIA!!$"

GimnasioAnciana_Combate_Gimnasio_Texto_11.1:
.string "¡Jah!\n"
	.string "¿Creías que eso era todo?\l"
	.string "¡Te daré algo más!$"

GimnasioAnciana_Combate_Gimnasio_2::
msgbox GimnasioAnciana_Combate_Gimnasio_Texto_9 MSGBOX_NPC
release
end

GimnasioAnciana_Combate_Gimnasio_Texto_1:
.string "¡Ajá! ¡Veo que tienes corazón chico!$"

GimnasioAnciana_Combate_Gimnasio_Texto_2:
.string "En su día era una experta en POKÉMON\n"
	.string "TIPO NORMAL y BICHO, muchos de los\l"
	.string "cuales crecían aquí.$"

GimnasioAnciana_Combate_Gimnasio_Texto_3:
.string "No me andaré con rodeos, estoy ansiosa\n"
	.string "por verte combatir. Siempre digo que\l"
	.string "los nuevos ENTRENADORES son unos\l"
	.string "flojos que se rinden ante cualquier\l"
	.string "contratiempo. ¡Demuéstrame que no es\l"
	.string "así!$"

GimnasioAnciana_Combate_Gimnasio_Texto_4:
.string "Así que hay relevo, ya era hora…$"

GimnasioAnciana_Combate_Gimnasio_Texto_5:
.string "¡Jah! ¡Ese ATLAS! ¡Cómo se la tenía\n"
	.string "guardada contigo!$"

GimnasioAnciana_Combate_Gimnasio_Texto_6:
.string "Mi camino se está acabando, y el tuyo\n"
	.string "recién empieza. Esto es inevitable, es\l"
	.string "ley de vida, pero ello no nos impide\l"
	.string "reconocernos mutuamente. Ten, quiero\l"
	.string "que cuides de este pequeño.$"

GimnasioAnciana_Combate_Gimnasio_Texto_7:
.string "¡¡OBTUVISTE UN ZORUA-HISUI AL NV.50!$"

GimnasioAnciana_Combate_Gimnasio_Texto_8:
.string "Hace casi 4 décadas que no se ve este\n"
	.string "POKÉMON por las islas, acabo de darte\l"
	.string "uno nacido de un HUEVO de mi ZOROARK,\l"
	.string "espero que lo cuides bien.$"

GimnasioAnciana_Combate_Gimnasio_Texto_9:
.string "Cada misterio no abre más que una\n"
	.string "puerta hacia otro mayor. Lo oculto\l"
	.string "siempre tendrá lugar en este mundo, el\l"
	.string "día que sepamos todo estaremos\l"
	.string "desprovistos de propósito, será el fin\l"
	.string "del camino.$"

GimnasioAnciana_Anciano::
lock
faceplayer
compare VAR_ROUTE108_STATE, 5
goto_if_gt GimnasioAnciana_Anciano_2
msgbox GimnasioAnciana_Anciano_Texto_1 MSGBOX_NPC
msgbox GimnasioAnciana_Anciano_Texto_2 MSGBOX_NPC
release
end

GimnasioAnciana_Anciano_2::
msgbox GimnasioAnciana_Anciano_Texto_3 MSGBOX_NPC
release
end

GimnasioAnciana_Anciano_Texto_3:
.string "¡Dios mío! Queda claro que no eres un\n"
	.string "cualquiera, nadie había podido igualar\l"
	.string "la potencia física del URSALUNA de\l"
	.string "nuestra LÍDER. Al parecer, su URSARING\l"
	.string "evolucionó durante un viaje a un\l"
	.string "antiguo lugar de JOHTO.$"

GimnasioAnciana_Anciano_Texto_2:
.string "Nuestra LÍDER era y sigue siendo\n"
	.string "especialista en el TIPO NORMAL, si\l"
	.string "entras en el cuerpo a cuerpo con ella\l"
	.string "sin usar movimientos TIPO LUCHA lo\l"
	.string "pasarás muy mal, todos sus POKÉMON son\l"
	.string "muy sólidos y duros de vencer. ¡Suerte!$"

GimnasioAnciana_Anciano_Texto_1:
.string "Creí que jamás volvería a decir esto\n"
	.string "pero... ¡bienvenido al GIMNASIO de ISLA\l"
	.string "SÉTIMA!$"


