CinnabarMansionS1_MapScripts::
	.byte 0

CinnabarMansionS1_EventScript_Cientifico::
	trainerbattle_single TRAINER_CINDY_1, CinnabarMansionS1_Text_CientificoIntro, CinnabarMansionS1_Text_CientificoDefeated
	msgbox CinnabarMansionS1_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarMansionS1_1::
lock     
faceplayer     
msgbox CinnabarMansionS1_Text_1, MSGBOX_DEFAULT
release     
end

CinnabarMansionS1_Text_1:
.string "Este lugar quedó reducido a añicos\n"
.string "después de que MEWTWO escapara,\l"
.string "muchas cosas se perdieron, pero\l"
.string "la grandeza de lo aquí acontecido\l"
.string "sigue viva en nuestras\l"
.string "mentes.$"



CinnabarMansionS1_3::
lock     
faceplayer     
msgbox CinnabarMansionS1_Text_3, MSGBOX_DEFAULT
release     
end

CinnabarMansionS1_Text_3:
.string "Nada soporta el paso del tiempo,\n"
.string "dentro de 3 años este lugar\l"
.string "probablemente no exista, aún más,\l"
.string "toda ISLA CANELA podría\l"
.string "desaparecer engullida por su\l"
.string "volcán, pero nada de eso podrá\l"
.string "deshacer lo que aquí ocurrió, ya\l"
.string "nos hemos ganado nuestro hueco en\l"
.string "la infinidad del tiempo y el\l"
.string "universo.$"



CinnabarMansionS1_4::
lock     
faceplayer     
msgbox CinnabarMansionS1_Text_4, MSGBOX_DEFAULT
release     
end

CinnabarMansionS1_Text_4:
.string "Si no acaban contigo, puedes\n"
.string "recuperarte de los más duros\l"
.string "golpes, y volver incluso más\l"
.string "fuerte que antes, la forma en que\l"
.string "hemos mantenido este lugar activo\l"
.string "y hemos por fin acabado nuestro\l"
.string "gran proyecto a pesar de todo lo\l"
.string "que ocurrió es prueba de ello,\l"
.string "nadie, siquiera tú, nos arrebatará\l"
.string "este hecho.$"

CinnabarMansionS1_Dalia_Move_1:
walk_in_place_right
step_end

CinnabarMansionS1_Dalia_Move_2:
face_down
step_end

CinnabarMansionS1_Dalia_Move_3:
walk_down
walk_down
face_left
step_end

CinnabarMansionS1_Dalia_Move_4:
face_up
step_end

CinnabarMansionS1_Dalia_Move_5:
face_left
step_end

CinnabarMansionS1_Dalia_Move_6:
walk_in_place_left
step_end

CinnabarMansionS1_Dalia_Move_7:
walk_left
step_end

CinnabarMansionS1_Dalia_Move_8:
lock_facing_direction
walk_slow_right
unlock_facing_direction
step_end

CinnabarMansionS1_Dalia_Move_9:
walk_in_place_up
step_end

CinnabarMansionS1_Dalia_Move_10:
emote_exclamation_mark
step_end

CinnabarMansionS1_Dalia::
lock
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS1_Dalia_Move_1
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS1_Dalia_Move_2
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_2 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS1_Dalia_Move_3
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_4 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS1_Dalia_Move_4
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_5 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS1_Dalia_Move_5
waitmovement 0x0
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_6 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS1_Dalia_Move_6
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_7 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS1_Dalia_Move_7
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_705, CinnabarMansionS1_Dalia_Texto_9
msgbox CinnabarMansionS1_Dalia_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS1_Dalia_Move_8
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_12 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS1_Dalia_Move_4
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_13 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS1_Dalia_Move_9
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_16 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_17 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS1_Dalia_Move_1
waitmovement 0x0
delay 10
msgbox CinnabarMansionS1_Dalia_Texto_18 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 5, CinnabarMansionS1_Dalia_Move_10
waitmovement 0x0
delay 10
applymovement 5, CinnabarMansionS1_Dalia_Move_5
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_19 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_20 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS1_Dalia_Move_11
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_21 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS1_Dalia_Move_6
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_22 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS1_Dalia_Move_4
waitmovement 0x0
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_23 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS1_Dalia_Move_13
applymovement 5, CinnabarMansionS1_Dalia_Move_12
waitmovement 0x0
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_24 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_25 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS1_Dalia_Move_2
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_26 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_27 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS1_Dalia_Move_14
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_28 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_29 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS1_Dalia_Move_2
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_30 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox CinnabarMansionS1_Dalia_Texto_31 MSGBOX_DEFAULT
waitfanfare
msgbox CinnabarMansionS1_Dalia_Texto_32 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS1_Dalia_Move_15
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_33 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_34 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS1_Dalia_Move_16
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_35 MSGBOX_AUTOCLOSE
release
end

CinnabarMansionS1_Dalia_Move_16:
walk_slow_right
walk_slow_up
step_end

CinnabarMansionS1_Dalia_Move_15:
walk_slow_right
step_end

CinnabarMansionS1_Dalia_Move_14:
walk_slow_left
step_end

CinnabarMansionS1_Dalia_Move_13:
delay_16
face_up
step_end

CinnabarMansionS1_Dalia_Move_12:
walk_slow_up
step_end

CinnabarMansionS1_Dalia_Move_11:
walk_left
step_end

CinnabarMansionS1_Dalia_Texto_1:
	.string "Así que fuiste tú.$"

CinnabarMansionS1_Dalia_Texto_2:
	.string "De no ser por ti, todo ahora sería\n"
	.string "diferente. El plan para recuperar KANTO\l"
	.string "era perfecto.$"

CinnabarMansionS1_Dalia_Texto_3:
	.string "Pero te empeñaste en hacer algo que\n"
	.string "nadie esperaba, en el peor momento\l"
	.string "posible.$"

CinnabarMansionS1_Dalia_Texto_4:
	.string "Ahora estamos aquí recluidos, huyendo\n"
	.string "de la misma región que íbamos a salvar.$"

CinnabarMansionS1_Dalia_Texto_5:
	.string "En esencia buscábamos exactamente lo\n"
	.string "mismo, pero solo uno puede ganar, ¿no?$"

CinnabarMansionS1_Dalia_Texto_6:
	.string "Si así debe ser, te haremos frente.$"

CinnabarMansionS1_Dalia_Texto_7:
	.string "Es en estos meses cuando mi abuelo ha\n"
	.string "recogido los frutos de años de trabajo.\l"
	.string "Una nueva era se avecina.$"

CinnabarMansionS1_Dalia_Texto_8:
	.string "¡Vas a verlo por ti mismo!$"

CinnabarMansionS1_Dalia_Texto_9:
	.string "¿TAUROS-X fue derrotado?$"

CinnabarMansionS1_Dalia_Texto_10:
	.string "Mmm… no en vano lograste lo que\n"
	.string "lograste. Un clon optimizado por sí solo\l"
	.string "no te hará caer.$"

CinnabarMansionS1_Dalia_Texto_11:
	.string "Hay algo en eso que me agrada, de algún\n"
	.string "modo reivindicas el pasado y lo viejo\l"
	.string "con ello.$"

CinnabarMansionS1_Dalia_Texto_12:
	.string "… …$"

CinnabarMansionS1_Dalia_Texto_13:
	.string "Mi hermano era demasiado joven, pero yo\n"
	.string "aún recuerdo los últimos duelos que tu\l"
	.string "JEFE y mi abuelo mantuvieron. Antes de\l"
	.string "que todo explotara.$"

CinnabarMansionS1_Dalia_Texto_14:
	.string "Fueron magníficos para la época,\n"
	.string "¿sabes? Exprimieron al máximo lo que los\l"
	.string "150 originales podían ofrecer.$"

CinnabarMansionS1_Dalia_Texto_15:
	.string "… …$"

CinnabarMansionS1_Dalia_Texto_16:
	.string "Y al final, cada uno intentó\n"
	.string "salvar la región a su modo.$"

CinnabarMansionS1_Dalia_Texto_17:
	.string "Mi abuelo desde dentro,\n"
	.string "y GIOVANNI desde fuera.$"

CinnabarMansionS1_Dalia_Texto_18:
	.string "… …$"

CinnabarMansionS1_Dalia_Texto_19:
	.string "¿Crees que le traicionó?$"

CinnabarMansionS1_Dalia_Texto_20:
	.string "No sabes nada, {PLAYER}.$"

CinnabarMansionS1_Dalia_Texto_21:
	.string "Señalar a GIOVANNI como el culpable era\n"
	.string "la única salida posible, ¿no lo\l"
	.string "entiendes?$"

CinnabarMansionS1_Dalia_Texto_22:
	.string "Solo así LANCE podría confiar en uno de\n"
	.string "los dos: los únicos con una opción real\l"
	.string "de recuperar KANTO.$"

CinnabarMansionS1_Dalia_Texto_23:
	.string "Además.$"

CinnabarMansionS1_Dalia_Texto_24:
	.string "Mi abuelo conocía a GIOVANNI mejor que\n"
	.string "nadie; sabía que tendría la fortaleza\l"
	.string "para seguir y la inteligencia para\l"
	.string "trazar un nuevo plan, alternativo al\l"
	.string "suyo.$"

CinnabarMansionS1_Dalia_Texto_25:
	.string "Hizo lo que había que hacer para seguir\n"
	.string "manteniendo vivas las esperanzas de\l"
	.string "KANTO, nada más.$"

CinnabarMansionS1_Dalia_Texto_26:
	.string "Y en el fondo, tu LÍDER sabe que es así.\n"
	.string "Sabe los verdaderos motivos.$"

CinnabarMansionS1_Dalia_Texto_27:
	.string "Lo cierto es que su rivalidad nunca\n"
	.string "acabó. OAK la salvó, solo que…$"

CinnabarMansionS1_Dalia_Texto_28:
	.string "…la competición era ahora por algo\n"
	.string "mucho más grande que un título: el\l"
	.string "futuro de una región.$"

CinnabarMansionS1_Dalia_Texto_29:
	.string "Ahora que ya lo han logrado,\n"
	.string "el resto no importa.$"

CinnabarMansionS1_Dalia_Texto_30:
	.string "Todo vuelve a reducirse a saber quién\n"
	.string "es el mejor ENTRENADOR. ¿Crees serlo?$"

CinnabarMansionS1_Dalia_Texto_31:
	.string "¡Obtuviste LLAVE S1 MANSIÓN!$"

CinnabarMansionS1_Dalia_Texto_32:
	.string "En ese caso, sigue avanzando.$"

CinnabarMansionS1_Dalia_Texto_33:
	.string "Con su actual equipo, ningún CAMPEÓN en\n"
	.string "la historia de KANTO o JOHTO podría\l"
	.string "derrotar a mi abuelo.$"

CinnabarMansionS1_Dalia_Texto_34:
	.string "Ese fue su sueño de niño. Ahora que lo\n"
	.string "ha cumplido, querrá medir sus fuerzas\l"
	.string "con el actual CAMPEÓN.$"

CinnabarMansionS1_Dalia_Texto_35:
	.string "Cuando os derrote a todos, las cosas\n"
	.string "volverán a su cauce… por fin.$"

CinnabarMansionS1_Dalia_Derrotada::
lock
faceplayer
msgbox CinnabarMansionS1_Dalia_Texto_33 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS1_Dalia_Texto_34 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS1_Dalia_Texto_35 MSGBOX_AUTOCLOSE
release
end

CinnabarMansionS1_Activador::
lock
release
end
