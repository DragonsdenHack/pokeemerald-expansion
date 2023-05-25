MisionIrisLab_MapScripts::
	.byte 0



MisionIrisLab_EventScript_Ladron::
	trainerbattle_single TRAINER_TRAINER_131, MisionIrisLab_Text_LadronIntro, MisionIrisLab_Text_LadronDefeated
	msgbox MisionIrisLab_Text_LadronPostBattle, MSGBOX_AUTOCLOSE
	end


MisionIrisLab_Primer_Cientifico::
lock
applymovement OBJ_EVENT_ID_PLAYER, MisionIrisLab_Primer_Cientifico_Move_1
waitmovement 0x0
applymovement 4, MisionIrisLab_Primer_Cientifico_Move_3
applymovement OBJ_EVENT_ID_PLAYER, MisionIrisLab_Primer_Cientifico_Move_2
waitmovement 0x0
msgbox MisionIrisLab_Primer_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, MisionIrisLab_Primer_Cientifico_Move_4
waitmovement 0x0
msgbox MisionIrisLab_Primer_Cientifico_Texto_2 MSGBOX_AUTOCLOSE
applymovement 4, MisionIrisLab_Primer_Cientifico_Move_3
waitmovement 0x0
msgbox MisionIrisLab_Primer_Cientifico_Texto_3 MSGBOX_AUTOCLOSE
applymovement 4, MisionIrisLab_Primer_Cientifico_Move_5
waitmovement 0x0
msgbox MisionIrisLab_Primer_Cientifico_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox MisionIrisLab_Primer_Cientifico_Texto_5 MSGBOX_AUTOCLOSE
delay 20
applymovement 4, MisionIrisLab_Primer_Cientifico_Move_3
waitmovement 0x0
msgbox MisionIrisLab_Primer_Cientifico_Texto_6 MSGBOX_AUTOCLOSE
msgbox MisionIrisLab_Primer_Cientifico_Texto_7 MSGBOX_AUTOCLOSE
applymovement 4, MisionIrisLab_Primer_Cientifico_Move_6
waitmovement 0x0
trainerbattle_no_intro TRAINER_TRAINER_89, MisionIrisLab_Primer_Cientifico_Texto_8
playse SE_BREAKABLE_DOOR
applymovement 4, CuevaTesoro4_Jefe_Final_Move_9.1
waitmovement 0x0
msgbox MisionIrisLab_Primer_Cientifico_Texto_9 MSGBOX_AUTOCLOSE
msgbox MisionIrisLab_Primer_Cientifico_Texto_10 MSGBOX_AUTOCLOSE
applymovement 4, MisionIrisLab_Primer_Cientifico_Move_5
waitmovement 0x0
msgbox MisionIrisLab_Primer_Cientifico_Texto_11 MSGBOX_AUTOCLOSE
applymovement 4, MisionIrisLab_Primer_Cientifico_Move_7
waitmovement 0x0
msgbox MisionIrisLab_Primer_Cientifico_Texto_12 MSGBOX_AUTOCLOSE
applymovement 4, MisionIrisLab_Primer_Cientifico_Move_5
waitmovement 0x0
setvar VAR_ROUTE102_STATE, 2
release
end

MisionIrisLab_Primer_Cientifico_Move_7:
walk_left
walk_left
walk_left
walk_in_place_right
step_end

CuevaTesoro4_Jefe_Final_Move_9.1:
lock_facing_direction
walk_left
unlock_facing_direction
step_end

MisionIrisLab_Primer_Cientifico_Move_6:
walk_right
walk_right
walk_right
walk_right
step_end

MisionIrisLab_Primer_Cientifico_Move_5:
face_up
step_end

MisionIrisLab_Primer_Cientifico_Move_4:
emote_exclamation_mark
step_end

MisionIrisLab_Primer_Cientifico_Move_1:
walk_up
step_end

MisionIrisLab_Primer_Cientifico_Move_2:
walk_in_place_left
step_end

MisionIrisLab_Primer_Cientifico_Move_3:
walk_in_place_right
step_end

MisionIrisLab_Primer_Cientifico_Texto_1:
.string "¿Quién se atreve a interrumpirme en\n"
	.string "pleno proceso creativo?$"

MisionIrisLab_Primer_Cientifico_Texto_2:
.string "¿De dónde sales? No pareces de DEVON.\n"
	.string "Serás uno de esos EJECUTIVOS de\l"
	.string "TRIGAL a los que solo les importa el\l"
	.string "dinero.$"

MisionIrisLab_Primer_Cientifico_Texto_3:
.string "Aquí tratamos con cosas serias, dime,\n"
	.string "¿has oído hablar de la ley de\l"
	.string "rendimientos decrecientes? ¿De la\l"
	.string "optimización de los STATS BASE?$"

MisionIrisLab_Primer_Cientifico_Texto_4:
.string "Tenéis en vuestra región un POKÉMON\n"
	.string "como MEGA-BEEDRILL, con solo 15\l"
	.string "puntos en ATAQUE ESPECIAL. Pero\l"
	.string "pasáis por alto un hecho físico de tal\l"
	.string "magnitud y eficiencia.$"

MisionIrisLab_Primer_Cientifico_Texto_5:
.string "Por eso estáis condenados al fracaso.$"

MisionIrisLab_Primer_Cientifico_Texto_6:
.string "Ya has oído bastante, de todos modos,\n"
	.string "alguien como tú no habrá entendido una\l"
	.string "sola palabra de lo que acabo de decir.$"

MisionIrisLab_Primer_Cientifico_Texto_7:
.string "Ahora, mi equipo POKÉMON optimizado se\n"
	.string "encargará de borrar tu presencia de mi\l"
	.string "vista.$"

MisionIrisLab_Primer_Cientifico_Texto_8:
.string "¿¡Q..Qué!? ¡¿Por qué tu equipo es\n"
	.string "eficiente y eficaz al mismo tiempo?!$"

MisionIrisLab_Primer_Cientifico_Texto_9:
.string "Esto no tiene ningún sentido, he oído\n"
	.string "que los LÍDERES DE JOHTO cuentan con\l"
	.string "un poder excepcional, más bien por su\l"
	.string "dilatada experiencia que por realmente\l"
	.string "entrenar de forma eficiente.$"

MisionIrisLab_Primer_Cientifico_Texto_10:
.string "Pero tú… no eres uno de ellos, tal vez\n"
	.string "tampoco seas un simple EJECUTIVO de\l"
	.string "TRIGAL.$"

MisionIrisLab_Primer_Cientifico_Texto_11:
.string "Sea como sea, no importa. Nuestra labor\n"
	.string "en esta tosca región ha concluído.$"

MisionIrisLab_Primer_Cientifico_Texto_12:
.string "Quédate con los FÓSILES si lo deseas,\n"
	.string "ya tenemos copias y clones de sobra.\l"
	.string "Tómalo como una recompensa por tu\l"
	.string "menos malo hacer que el resto de\l"
	.string "mediocres.$"


MisionIrisLab_Segundo_Cientifico_Der::
applymovement OBJ_EVENT_ID_PLAYER, MisionIrisLab_Primer_Cientifico_Move_3
applymovement 3, MisionIrisLab_Segundo_Cientifico_Move_1
waitmovement 0x0
goto MisionIrisLab_Segundo_Cientifico

MisionIrisLab_Segundo_Cientifico_Izq::
applymovement OBJ_EVENT_ID_PLAYER, MisionIrisLab_Segundo_Cientifico_Move_2
applymovement 3, MisionIrisLab_Segundo_Cientifico_Move_1
waitmovement 0x0
goto MisionIrisLab_Segundo_Cientifico

MisionIrisLab_Segundo_Cientifico::
msgbox MisionIrisLab_Segundo_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
delay 30
msgbox MisionIrisLab_Segundo_Cientifico_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, MisionIrisLab_Primer_Cientifico_Move_5
waitmovement 0x0
msgbox MisionIrisLab_Segundo_Cientifico_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, MisionIrisLab_Primer_Cientifico_Move_3
waitmovement 0x0
delay 10
msgbox MisionIrisLab_Segundo_Cientifico_Texto_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 3, MisionIrisLab_Segundo_Cientifico_Move_1
waitmovement 0x0
msgbox MisionIrisLab_Segundo_Cientifico_Texto_5 MSGBOX_AUTOCLOSE
msgbox MisionIrisLab_Segundo_Cientifico_Texto_6 MSGBOX_AUTOCLOSE
applymovement 3, MisionIrisLab_Segundo_Cientifico_Move_3
waitmovement 0x0
trainerbattle_no_intro TRAINER_TRAINER_88, MisionIrisLab_Segundo_Cientifico_Texto_7
msgbox MisionIrisLab_Segundo_Cientifico_Texto_8 MSGBOX_AUTOCLOSE
applymovement 3, MisionIrisLab_Primer_Cientifico_Move_5
waitmovement 0x0
msgbox MisionIrisLab_Segundo_Cientifico_Texto_9 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
fadescreen 1
delay 20
removeobject 1
removeobject 3
removeobject 4
fadescreen 0
setvar VAR_ROUTE102_STATE, 3
release
end

MisionIrisLab_Segundo_Cientifico_Move_3:
walk_left
walk_left
step_end

MisionIrisLab_Segundo_Cientifico_Move_2:
walk_right
step_end

MisionIrisLab_Segundo_Cientifico_Move_1:
face_left
step_end

MisionIrisLab_Segundo_Cientifico_Texto_1:
.string "¿Eh? ¿Quién eres tú? ¿Algún paquete\n"
	.string "especial de DEVON? Ya le dijimos al\l"
	.string "PRESIDENTE que pronto le enviaremos\l"
	.string "todos los datos de los nuevos FÓSILES\l"
	.string "descubiertos.$"

MisionIrisLab_Segundo_Cientifico_Texto_2:
.string "Mmm… ya veo, te han enviado esos\n"
	.string "incompetentes de las RUINAS ALFA.$"

MisionIrisLab_Segundo_Cientifico_Texto_3:
.string "Entre nosotros, ¿en qué manos crees\n"
	.string "que están mejor estos FÓSILES ahora?\l"
	.string "¿En la mejor empresa de HOENN? ¿O en\l"
	.string "unos CIENTÍFICOS que ni en 10 años\l"
	.string "harían el menor avance en ese lugar?$"

MisionIrisLab_Segundo_Cientifico_Texto_4:
.string "… …$"

MisionIrisLab_Segundo_Cientifico_Texto_5:
.string "Así que eso es irrelevante… ¿la forma\n"
	.string "es lo que cuenta?$"

MisionIrisLab_Segundo_Cientifico_Texto_6:
.string "¿No serás tú tan necio como ellos? Los\n"
	.string "ENTRENADORES de calle sois todos unos\l"
	.string "mediocres. ¿¡Por qué ibas tú a ser\l"
	.string "diferente!?$"

MisionIrisLab_Segundo_Cientifico_Texto_7:
.string "Así que superior a la media… tal vez\n"
	.string "excelente.$"

MisionIrisLab_Segundo_Cientifico_Texto_8:
.string "Si supieras la magnitud de nuestros\n"
	.string "recursos, jamás te atreverías a entrar\l"
	.string "aquí de forma tan descarada.$"

MisionIrisLab_Segundo_Cientifico_Texto_9:
.string "Quien avisa no es traidor. Por tu bien,\n"
	.string "confío en que esto haya sido un error,\l"
	.string "y rápidamente experimentes la\l"
	.string "regresión a la media.$"


MisionIrisLab_Cientifico_Primero::
lock
faceplayer
msgbox MisionIrisLab_Primer_Cientifico_Texto_12 MSGBOX_AUTOCLOSE
release
end

MisionIrisLab_Tirtouga::
setflag FLAG_NUEVA_702
removeobject 5
playfanfare MUS_OBTAIN_TMHM
msgbox MisionIrisLab_Tirtouga_Texto_1, MSGBOX_DEFAULT
givemon SPECIES_TIRTOUGA, 30, ITEM_NONE
waitfanfare
release
end

MisionIrisLab_Tirtouga_Texto_1:
.string "¡{PLAYER} obtuvo un TIRTOUGA al Nv.30!$"
