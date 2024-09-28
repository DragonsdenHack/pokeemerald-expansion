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

VermilionCity_Jardin_Final::
lock
msgbox VermilionCity_Jardin_Final_Texto_1 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_2 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_3 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_4 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_5 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_6 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_7 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_8 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_9 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_10 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_11 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_12 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_13 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_14 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_15 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_16 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_17 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_18 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_19 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_20 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_21 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_22 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_23 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_24 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_25 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_26 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_27 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Jardin_Final_Texto_28 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Jardin_Final_Texto_1:
	.string "¿Quién eres tú?$"

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
