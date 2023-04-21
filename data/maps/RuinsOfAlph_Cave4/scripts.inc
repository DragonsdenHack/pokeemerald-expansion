RuinsOfAlph_Cave4_MapScripts::
	.byte 0

RuinsOfAlphCave4_1::
end

RuinsOfAlph_S4_Entrada_Unowns::
lock
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Entrada_Unowns_Move_1
waitmovement 0x0
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Entrada_Unowns_Move_2
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Entrada_Unowns_Move_3
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_1 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
addobject 6
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_4
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_2 MSGBOX_AUTOCLOSE
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_3
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_3 MSGBOX_AUTOCLOSE
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_5
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_4 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Entrada_Unowns_Move_2
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_2
waitmovement 0x0
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_3
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_5 MSGBOX_AUTOCLOSE
addobject 4
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Entrada_Unowns_Move_6
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_7
applymovement 4, RuinsOfAlph_S4_Entrada_Unowns_Move_4
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_6 MSGBOX_AUTOCLOSE
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_3
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_7 MSGBOX_AUTOCLOSE
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_8 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Entrada_Unowns_Move_2
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_2
applymovement 4, RuinsOfAlph_S4_Entrada_Unowns_Move_2
waitmovement 0x0
applymovement 4, RuinsOfAlph_S4_Entrada_Unowns_Move_3
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_9 MSGBOX_AUTOCLOSE
applymovement 4, RuinsOfAlph_S4_Entrada_Unowns_Move_8
applymovement 5, RuinsOfAlph_S4_Entrada_Unowns_Move_4
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_10 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Entrada_Unowns_Move_5
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_5
applymovement 4, RuinsOfAlph_S4_Entrada_Unowns_Move_5
applymovement 5, RuinsOfAlph_S4_Entrada_Unowns_Move_9
waitmovement 0x0
delay 15
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, RuinsOfAlph_S4_Entrada_Unowns_Move_10
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_12 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 4, RuinsOfAlph_S4_Entrada_Unowns_Move_2
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_13 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Entrada_Unowns_Move_2
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_2
applymovement 4, RuinsOfAlph_S4_Entrada_Unowns_Move_2
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Entrada_Unowns_Move_3
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_3
applymovement 4, RuinsOfAlph_S4_Entrada_Unowns_Move_3
waitmovement 0x0
addobject 2
applymovement 2, RuinsOfAlph_S4_Entrada_Unowns_Move_11
waitmovement 0x0
removeobject 2
playse SE_EXIT
waitse
addobject 2
applymovement 2, RuinsOfAlph_S4_Entrada_Unowns_Move_11
waitmovement 0x0
removeobject 2
playse SE_EXIT
waitse
addobject 2
applymovement 2, RuinsOfAlph_S4_Entrada_Unowns_Move_11
waitmovement 0x0
removeobject 2
playse SE_EXIT
waitse
addobject 2
applymovement 2, RuinsOfAlph_S4_Entrada_Unowns_Move_11
waitmovement 0x0
removeobject 2
playse SE_EXIT
waitse
addobject 2
applymovement 2, RuinsOfAlph_S4_Entrada_Unowns_Move_11
waitmovement 0x0
removeobject 2
playse SE_EXIT
waitse
addobject 2
applymovement 2, RuinsOfAlph_S4_Entrada_Unowns_Move_11
waitmovement 0x0
removeobject 2
playse SE_EXIT
waitse
addobject 2
applymovement 2, RuinsOfAlph_S4_Entrada_Unowns_Move_11
waitmovement 0x0
removeobject 2
playse SE_EXIT
waitse
addobject 2
applymovement 2, RuinsOfAlph_S4_Entrada_Unowns_Move_11
waitmovement 0x0
removeobject 2
playse SE_EXIT
waitse
addobject 2
applymovement 2, RuinsOfAlph_S4_Entrada_Unowns_Move_11
waitmovement 0x0
removeobject 2
playse SE_EXIT
waitse
addobject 2
applymovement 2, RuinsOfAlph_S4_Entrada_Unowns_Move_11
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Entrada_Unowns_Move_12
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_13
applymovement 4, RuinsOfAlph_S4_Entrada_Unowns_Move_12
waitmovement 0x0
removeobject 2
playse SE_EXIT
waitse
addobject 7
applymovement 7, RuinsOfAlph_S4_Entrada_Unowns_Move_11
waitmovement 0x0
applymovement 7, RuinsOfAlph_S4_Entrada_Unowns_Move_14
waitmovement 0x0
applymovement 4, RuinsOfAlph_S4_Entrada_Unowns_Move_15
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_14 MSGBOX_AUTOCLOSE
applymovement 5, RuinsOfAlph_S4_Entrada_Unowns_Move_3
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_16 MSGBOX_AUTOCLOSE
applymovement 5, RuinsOfAlph_S4_Entrada_Unowns_Move_13
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_17 MSGBOX_AUTOCLOSE
applymovement 7, RuinsOfAlph_S4_Entrada_Unowns_Move_16
waitmovement 0x0
applymovement 5, RuinsOfAlph_S4_Entrada_Unowns_Move_17
waitmovement 0x0
delay 15
applymovement 5, RuinsOfAlph_S4_Entrada_Unowns_Move_18
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_18 MSGBOX_AUTOCLOSE
applymovement 5, RuinsOfAlph_S4_Entrada_Unowns_Move_5
waitmovement 0x0
removeobject 5
playse SE_EXIT
waitse
applymovement 7, RuinsOfAlph_S4_Entrada_Unowns_Move_19
waitmovement 0x0
removeobject 7
playse SE_EXIT
waitse
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_19 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, RuinsOfAlph_S4_Entrada_Unowns_Move_1
waitmovement 0x0
removeobject 4
playse SE_EXIT
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_20
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_20 MSGBOX_AUTOCLOSE
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_21
waitmovement 0x0
msgbox RuinsOfAlph_S4_Entrada_Unowns_Texto_21 MSGBOX_AUTOCLOSE
applymovement 6, RuinsOfAlph_S4_Entrada_Unowns_Move_1
waitmovement 0x0
removeobject 6
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
setvar VAR_UNUSED_0x40F7, 176
release
end

RuinsOfAlph_S4_Entrada_Unowns_Texto_1:
.string "????: Por una vez llegas el\n"
	.string "primero, ¿eh, {PLAYER}?$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_2:
.string "ANDRA: Así es, esa puerta no\n"
	.string "estaba antes, ha ocurrido lo mismo\l"
	.string "de aquella vez en ISLA SÉTIMA,\l"
	.string "pero ahora parece que es más\l"
	.string "serio.$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_3:
.string "GIOVANNI, ATLAS y varios de los\n"
	.string "mejores ROCKETS están al caer, ya\l"
	.string "les he avisado.$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_4:
.string "Estos UNOWN...\n"
	.string "Hay algo en su apariencia...\l"
	.string "Parecen estar incompletos, formar\l"
	.string "parte de algo mayor, ¿no crees?$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_5:
.string "????: Son los guardianes de RUINAS\n"
	.string "ALFA.$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_6:
.string "M.ANCIANO: Y harán lo imposible\n"
	.string "para que nadie pueda descubrir sus\l"
	.string "secretos.$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_7:
.string "ANDRA: Entonces, ¿qué ocurrirá si\n"
	.string "cruzamos esta puerta?$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_8:
.string "M.ANCIANO: Todo el poder ancestral\n"
	.string "contenido en estas ruinas se\l"
	.string "abalanzará sobre vosotros.$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_9:
.string "????: Pero no tenemos opción.$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_10:
.string "M.ANCIANO: Así es, el DRAGÓN\n"
	.string "ORIGINAL no puede ser unido de\l"
	.string "nuevo.$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_11:
.string "...$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_12:
.string "GIOVANNI: Yo no estaba pensando\n"
	.string "precisamente en eso, MAESTRO\l"
	.string "ANCIANO.$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_13:
.string "¡Todos adentro!\n"
	.string "¡Vamos!$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_14:
.string "M.ANCIANO: ¿Qué quieres decir?$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_15:
.string "GIOVANNI: No vamos a perder la\n"
	.string "ocasión de analizar el poder de el\l"
	.string "quizás POKÉMON más grande de todos\l"
	.string "los tiempos.\l"
	.string "¿POKÉMON ESENCIA?\l"
	.string "¿DRAGÓN ORIGINAL?\l"
	.string "Tal vez sean términos diferentes\l"
	.string "para referirse a la misma cosa.\l"
	.string "Sea como sea, lo averiguaremos, y\l"
	.string "con la información aquí recopilada\l"
	.string "nuestros científicos estarán mucho\l"
	.string "más cerca de crear el POKÉMON más\l"
	.string "fuerte posible.$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_16:
.string "M.ANCIANO: No seas estúpido,\n"
	.string "GIOVANNI, ese POKÉMON está fuera\l"
	.string "de todas las estimaciones que\l"
	.string "podéis hacer, la prioridad debe\l"
	.string "estar en impedir que ese ZEUS\l"
	.string "logre formarlo.$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_17:
.string "GIOVANNI: Se verá, MAESTRO ANCIANO.\n"
	.string "¿Qué tal si dejamos de perder el\l"
	.string "tiempo y entramos ya?\l"
	.string "¡ATLAS!\l"
	.string "¡Conmigo!$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_18:
.string "Un DRAGONITE FUERTE VÍNCULO\n"
	.string "extraordinario, por cierto. Seguro\l"
	.string "que tiene algo que decir ante ese\l"
	.string "DRAGÓN ORIGINAL, si dejas de\l"
	.string "subestimar el entrenamiento que te\l"
	.string "ha llevado hasta él.$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_19:
.string "M.ANCIANO: ...$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_20:
.string "ANDRA: El eterno debate, ¿eh?\n"
	.string "Por eso decidí no entrenar\l"
	.string "LEGENDARIOS. Estoy con GIOVANNI,\l"
	.string "ningún DRAGÓN ORIGINAL va a\l"
	.string "decirme hasta dónde puedo o no\l"
	.string "llegar.$"

RuinsOfAlph_S4_Entrada_Unowns_Texto_21:
.string "No importa lo que nos encontremos\n"
	.string "detrás de esas puertas, {PLAYER},\l"
	.string "¡nuestros equipos están\l"
	.string "preparados!$"

RuinsOfAlph_S4_Entrada_Unowns_Move_1:
walk_up
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_2:
emote_exclamation_mark
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_3:
walk_in_place_down
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_4:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_5:
face_up
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_6:
walk_left
walk_in_place_down
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_7:
walk_up
walk_right
walk_in_place_down
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_8:
walk_slow_left
walk_in_place_right
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_9:
walk_up
walk_up
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_10:
walk_right
walk_in_place_left
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_11:
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_12:
face_right
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_13:
face_left
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_14:
walk_left
walk_in_place_right
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_15:
walk_right
walk_up
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_16:
walk_in_place_right
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_17:
walk_left
face_up
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_18:
face_down
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_19:
walk_right
face_up
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_20:
walk_left
step_end

RuinsOfAlph_S4_Entrada_Unowns_Move_21:
walk_in_place_left
step_end

Ruinas_Settile::
lock
compare VAR_UNUSED_0x40F7, 175
goto_if_lt LavenderTown_Barrera_Mision_Kangaskhan_2
compare VAR_UNUSED_0x40F7, 180
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
setvar VAR_UNUSED_0x40FE, 4
setmetatile 4, 1, 0x17F, FALSE
special DrawWholeMapView
release
end
