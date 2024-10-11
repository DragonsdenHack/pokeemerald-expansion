VermilionCity_Jardin_MapScripts::
	.byte 0

VermilionCity_Jardin_EventScript_Criador::
	trainerbattle_single TRAINER_TRAINER_709, VermilionCity_Jardin_Text_CriadorIntro, VermilionCity_Jardin_Text_CriadorDefeated
	msgbox VermilionCity_Jardin_Text_CriadorPostBattle, MSGBOX_AUTOCLOSE
	end

VermilionCity_Jardin_EventScript_Criadora::
	trainerbattle_single TRAINER_TRAINER_710, VermilionCity_Jardin_Text_CriadoraIntro, VermilionCity_Jardin_Text_CriadoraDefeated
	msgbox VermilionCity_Jardin_Text_CriadoraPostBattle, MSGBOX_AUTOCLOSE
	end

VermilionCity_Jardin_Cazabichos_Pelea::
lock
msgbox VermilionCity_Jardin_Cazabichos_Pelea_Texto_1 MSGBOX_DEFAULT
release
end

VermilionCity_Jardin_Cazabichos_Pelea_Texto_1:
	.string "¡Mirad lo que habéis hecho con mi jardín!\n"
	.string "¡No tenéis perdón!$"

VermilionCity_Jardin_Warp::
lock
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Warp_Move_1
waitmovement 0x0
warp MAP_VERMILION_CITY_SECUNDARIA, 9, 2
delay 150
release
end

VermilionCity_Jardin_Warp_Move_1:
face_down
step_end

VermilionCity_Jardin_Final_Move_2:
walk_in_place_up
step_end

VermilionCity_Jardin_Final_Move_1:
emote_exclamation_mark
step_end

VermilionCity_Jardin_Final_Move_3:
walk_in_place_down
step_end

VermilionCity_Jardin_Final_Move_3.1:
walk_in_place_fast_down
step_end

VermilionCity_Jardin_Final_Move_4:
delay_16
face_right
delay_16
face_down
delay_16
walk_in_place_fast_down
step_end

VermilionCity_Jardin_Final_Move_5:
delay_8
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

VermilionCity_Jardin_Final_Move_6:
face_left
lock_facing_direction
walk_right
unlock_facing_direction
delay_16
delay_8
face_down
step_end

VermilionCity_Jardin_Final_Move_7:
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_up
walk_up
walk_up
walk_up
step_end

VermilionCity_Jardin_Final::
lock
faceplayer
delay 10
playse SE_PIN
applymovement 3, VermilionCity_Jardin_Final_Move_1
waitmovement 0x0
delay 10
msgbox VermilionCity_Jardin_Final_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_2
waitmovement 0x0
delay 20
msgbox VermilionCity_Jardin_Final_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilionCity_Jardin_Final_Texto_3 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 3, VermilionCity_Jardin_Final_Move_3
waitmovement 0x0
delay 10
msgbox VermilionCity_Jardin_Final_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_2
waitmovement 0x0
delay 40
playse SE_PIN
applymovement 3, VermilionCity_Jardin_Final_Move_1
waitmovement 0x0
delay 10
msgbox VermilionCity_Jardin_Final_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilionCity_Jardin_Final_Texto_6 MSGBOX_AUTOCLOSE
playse 597
delay 10
applymovement 3, VermilionCity_Jardin_Final_Move_3
waitmovement 0x0
delay 10
msgbox VermilionCity_Jardin_Final_Texto_7 MSGBOX_AUTOCLOSE
delay 10
trainerbattle_no_intro TRAINER_TRAINER_708, VermilionCity_Jardin_Final_Texto_8
delay 10
msgbox VermilionCity_Jardin_Final_Texto_9 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_2
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_10 MSGBOX_AUTOCLOSE
delay 15
delay 10
playse SE_PIN
applymovement 3, VermilionCity_Jardin_Final_Move_1
waitmovement 0x0
delay 10
msgbox VermilionCity_Jardin_Final_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_2
waitmovement 0x0
delay 15
msgbox VermilionCity_Jardin_Final_Texto_12 MSGBOX_AUTOCLOSE
delay 35
playse SE_PIN
applymovement 3, VermilionCity_Jardin_Final_Move_1
waitmovement 0x0
delay 10
msgbox VermilionCity_Jardin_Final_Texto_13 MSGBOX_AUTOCLOSE
applymovement 3, VermilionCity_Jardin_Final_Move_3.1
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_14 MSGBOX_AUTOCLOSE
applymovement 3, VermilionCity_Jardin_Final_Move_3.1
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, VermilionCity_Jardin_Final_Move_4
waitmovement 0x0
delay 10
msgbox VermilionCity_Jardin_Final_Texto_16 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_2
waitmovement 0x0
delay 30
playse SE_PIN
applymovement 3, VermilionCity_Jardin_Final_Move_1
waitmovement 0x0
delay 20
applymovement 3, VermilionCity_Jardin_Final_Move_3.1
waitmovement 0x0
delay 10
msgbox VermilionCity_Jardin_Final_Texto_17 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
setflag FLAG_HOENN_84
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_6
applymovement 3, VermilionCity_Jardin_Final_Move_5
waitmovement 0x0
removeobject 3
removeobject 1
removeobject 2
removeobject 5
delay 40
addobject 4
applymovement 4, VermilionCity_Jardin_Final_Move_7
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_18 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_9
applymovement 4, VermilionCity_Jardin_Final_Move_8
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_19 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, VermilionCity_Jardin_Final_Move_10
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_20 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_10
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_21 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilionCity_Jardin_Final_Texto_22 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 4, VermilionCity_Jardin_Final_Move_11
waitmovement 0x0
delay 15
msgbox VermilionCity_Jardin_Final_Texto_23 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_13
applymovement 4, VermilionCity_Jardin_Final_Move_12
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_24 MSGBOX_AUTOCLOSE
applymovement 4, VermilionCity_Jardin_Final_Move_10
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_25 MSGBOX_AUTOCLOSE
applymovement 4, VermilionCity_Jardin_Final_Move_12
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_26 MSGBOX_AUTOCLOSE
applymovement 4, VermilionCity_Jardin_Final_Move_10
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_27 MSGBOX_AUTOCLOSE
applymovement 4, VermilionCity_Jardin_Final_Move_12
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_28 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_15
applymovement 4, VermilionCity_Jardin_Final_Move_14
waitmovement 0x0
removeobject 4
clearflag FLAG_HOENN_74
clearflag FLAG_HOENN_75
clearflag FLAG_HOENN_76
clearflag FLAG_HOENN_77
clearflag FLAG_HOENN_78
clearflag FLAG_HOENN_79
clearflag FLAG_HOENN_90
clearflag FLAG_HOENN_91
clearflag FLAG_HOENN_92
clearflag FLAG_HOENN_93
clearflag FLAG_HOENN_94
clearflag FLAG_HOENN_95
clearflag FLAG_HOENN_96
clearflag FLAG_HOENN_97
clearflag FLAG_HOENN_98
clearflag FLAG_HOENN_99
setflag FLAG_HOENN_640
setflag FLAG_HOENN_641
setflag FLAG_HOENN_642
setflag FLAG_HOENN_643
setflag FLAG_HOENN_644
setflag FLAG_HOENN_645
setflag FLAG_HOENN_646
setflag FLAG_HOENN_647
setflag FLAG_HOENN_648
setflag FLAG_HOENN_649
setvar VAR_SCOTT_STATE, 4
release
end

VermilionCity_Jardin_Final_Move_15:
delay_16
face_down
step_end

VermilionCity_Jardin_Final_Move_14:
walk_down
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

VermilionCity_Jardin_Final_Move_13:
delay_8
face_left
step_end

VermilionCity_Jardin_Final_Move_12:
walk_in_place_right
step_end

VermilionCity_Jardin_Final_Move_11:
emote_exclamation_mark
delay_16
delay_8
face_right
delay_16
face_up
delay_16
face_up
delay_16
face_right
step_end

VermilionCity_Jardin_Final_Move_10:
delay_8
face_up
delay_16
step_end

VermilionCity_Jardin_Final_Move_9:
delay_16
delay_16
face_left
step_end

VermilionCity_Jardin_Final_Move_8:
walk_up
walk_up
walk_up
face_right
step_end

VermilionCity_Jardin_Final_Texto_1:
	.string "¿Y tú de dónde has salido?$"

VermilionCity_Jardin_Final_Texto_2:
	.string "La explotación de estas tierras a\n"
	.string "nuestro cargo está avalada y aprobada\l"
	.string "por el mismísimo LANCE.$"

VermilionCity_Jardin_Final_Texto_3:
	.string "Prestamos un gran servicio a JOHTO. El\n"
	.string "COMITÉ de la LIGA POKÉMON determinó\l"
	.string "que los ciudadanos de KANTO no eran\l"
	.string "aptos para el uso y disfrute de los\l"
	.string "frutos que aquí se producen.$"

VermilionCity_Jardin_Final_Texto_4:
	.string "¡¿Tienes algún problema con eso o qué?!$"

VermilionCity_Jardin_Final_Texto_5:
	.string "Así que… ¿se acabó el privar de\n"
	.string "recursos a esta región? ¿Vas a\l"
	.string "devolverle lo que le pertenece por\l"
	.string "derecho propio?$"

VermilionCity_Jardin_Final_Texto_6:
	.string "¿Tú quién te has creído?\n"
	.string "¿El salvador de KANTO?$"

VermilionCity_Jardin_Final_Texto_7:
	.string "Si aquí se va a privar de algo va a ser a\n"
	.string "ti de tus POKÉMON, ¡después de\l"
	.string "aplastarte los usaremos como abono!$"

VermilionCity_Jardin_Final_Texto_8:
	.string "¡Es imposible!$"

VermilionCity_Jardin_Final_Texto_9:
	.string "¡¿De dónde sales tú?! ¡Pondré a LANCE al\n"
	.string "tanto de esto!$"

VermilionCity_Jardin_Final_Texto_10:
	.string "… …$"

VermilionCity_Jardin_Final_Texto_11:
	.string "¡¿TEAM ROCKET?! ¿Eres un alto cargo y\n"
	.string "conoces al LÍDER en persona?$"

VermilionCity_Jardin_Final_Texto_12:
	.string "… …$"

VermilionCity_Jardin_Final_Texto_13:
	.string "¡Eh, espera!$"

VermilionCity_Jardin_Final_Texto_14:
	.string "¡Ha sido un malentendido! ¡No hace falta\n"
	.string "que le digas nada a tu JEFE! ¡Nos iremos\l"
	.string "de aquí!$"

VermilionCity_Jardin_Final_Texto_15:
	.string "Le diré a LANCE que estas tierras se\n"
	.string "han echado a perder, ¿vale?$"

VermilionCity_Jardin_Final_Texto_16:
	.string "Ese estúpido CAZABICHOS puede\n"
	.string "quedarse con ellas si quiere, ¿todo\l"
	.string "bien?$"

VermilionCity_Jardin_Final_Texto_17:
	.string "¡Entonces me vuelvo a JOHTO! ¡Prefiero\n"
	.string "alistarme como MARINERO en CIUDAD\l"
	.string "OLIVO a ser el más rico de TORRE\l"
	.string "POKÉMON!$"

VermilionCity_Jardin_Final_Texto_18:
	.string "¡No puedo creerlo, lo has logrado!$"

VermilionCity_Jardin_Final_Texto_19:
	.string "He visto a ese HOUNDOOM. Mis bichos\n"
	.string "jamás hubieran tenido oportunidad; si\l"
	.string "he podido recuperar mi jardín es\l"
	.string "gracias a ti.$"

VermilionCity_Jardin_Final_Texto_20:
	.string "Fíjate… Esas bayas de arriba no\n"
	.string "estaban antes.$"

VermilionCity_Jardin_Final_Texto_21:
	.string "Han plantado muchas más; todo por\n"
	.string "avaricia y querer ganar lo máximo\l"
	.string "posible.$"

VermilionCity_Jardin_Final_Texto_22:
	.string "… …$"

VermilionCity_Jardin_Final_Texto_23:
	.string "¡Espera! Se me ocurre una forma de\n"
	.string "recompensarte.$"

VermilionCity_Jardin_Final_Texto_24:
	.string "Yo volveré aquí y seguiré trabajando\n"
	.string "esta tierra. Con las bayas de siempre\l"
	.string "tengo más que suficiente para volver al\l"
	.string "negocio: esta vez lo haré de forma\l"
	.string "discreta.$"

VermilionCity_Jardin_Final_Texto_25:
	.string "Pero tú puedes venir cuando quieras, y\n"
	.string "quedarte con los frutos que salgan de\l"
	.string "la zona norte.$"

VermilionCity_Jardin_Final_Texto_26:
	.string "Son objetos muy preciados por los\n"
	.string "entrenadores: hay tanto bayas\l"
	.string "reductoras de EVs como mentas que\l"
	.string "cambian la naturaleza de los POKÉMON.$"

VermilionCity_Jardin_Final_Texto_27:
	.string "Según la temporada, saldrán unas\n"
	.string "mentas u otras. Te recomiendo pasarte\l"
	.string "por aquí de vez en cuando, ya que se\l"
	.string "irán regenerando con el tiempo.$"

VermilionCity_Jardin_Final_Texto_28:
	.string "Ahora sí, ¡vuelvo al trabajo de verdad!$"

VermilionCity_Jardin_Cazabichos_Despues::
lock
faceplayer
msgbox VermilionCity_Jardin_Cazabichos_Despues_Texto_1 MSGBOX_NPC
release
end

VermilionCity_Jardin_Cazabichos_Despues_Texto_1:
	.string "¡Hey! ¿Qué tal?\n"
	.string "¿Te están siendo útiles mis mentas?$"
