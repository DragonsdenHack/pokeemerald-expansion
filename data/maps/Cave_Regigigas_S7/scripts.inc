Cave_Regigigas_S7_MapScripts::
	.byte 0

Cave_Regigigas_S7_Doctor_Move_2:
emote_exclamation_mark
step_end

Cave_Regigigas_S7_Doctor_Move_3:
face_down
step_end

Cave_Regigigas_S7_Doctor_Move_4:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Cave_Regigigas_S7_Doctor_Move_5:
walk_in_place_down
step_end

Cave_Regigigas_S7_Doctor_Move_6:
walk_in_place_up
step_end

Cave_Regigigas_S7_Doctor_Move_7:
walk_left
walk_up
walk_up
step_end

Cave_Regigigas_S7_Doctor_Move_8:
walk_up
walk_up
walk_up
step_end

Cave_Regigigas_S7_Doctor_Move_9:
face_down
step_end

Cave_Regigigas_S7_Doctor_Move_10:
walk_slow_down
step_end

Cave_Regigigas_S7_Doctor_Move_11:
face_up
step_end

Cave_Regigigas_S7_Doctor_Move_12:
walk_in_place_left
step_end

Cave_Regigigas_S7_Doctor_Move_13:
walk_up
step_end

Cave_Regigigas_S7_Doctor_Move_14:
lock_facing_direction
walk_down
unlock_facing_direction
step_end

Cave_Regigigas_S7_Doctor_Move_15:
walk_down
face_right
step_end

Cave_Regigigas_S7_Doctor_Move_16:
walk_in_place_right
step_end

Cave_Regigigas_S7_Doctor_Move_17:
walk_up
step_end

Cave_Regigigas_S7_Doctor_Move_18:
face_left
step_end

Cave_Regigigas_S7_Doctor_Move_19:
lock_facing_direction
walk_up
unlock_facing_direction
step_end

Cave_Regigigas_S7_Doctor_Move_20:
face_right
step_end

Cave_Regigigas_S7_Doctor_Move_21:
walk_up
face_left
step_end

Cave_Regigigas_S7_Doctor_Move_22:
lock_facing_direction
walk_slow_left
unlock_facing_direction
step_end

Cave_Regigigas_S7_Doctor_Move_23:
walk_left
step_end

Cave_Regigigas_S7_Doctor_Move_24:
walk_fast_down
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_left
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

Cave_Regigigas_S7_Doctor::
lock
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S7_Doctor_Move_1
waitmovement 0x0
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S7_Doctor_Move_2
waitmovement 0x0
delay 15
clearflag FLAG_HOENN_1
addobject 3
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S7_Doctor_Move_3
applymovement 3, Cave_Regigigas_S7_Doctor_Move_4
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S7_Doctor_Move_5
applymovement 3, Cave_Regigigas_S7_Doctor_Move_6
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S7_Doctor_Move_7
applymovement 3, Cave_Regigigas_S7_Doctor_Move_8
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 1, Cave_Regigigas_S7_Doctor_Move_2
waitmovement 0x0
delay 15
applymovement 1, Cave_Regigigas_S7_Doctor_Move_9
applymovement 2, Cave_Regigigas_S7_Doctor_Move_9
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Cave_Regigigas_S7_Doctor_Move_10
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_4 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Cave_Regigigas_S7_Doctor_Move_11
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_6 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Cave_Regigigas_S7_Doctor_Move_9
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_7 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Cave_Regigigas_S7_Doctor_Move_12
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_9 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Cave_Regigigas_S7_Doctor_Move_13
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Cave_Regigigas_S7_Doctor_Move_1
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_11 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 2, Cave_Regigigas_S7_Doctor_Move_5
applymovement 3, Cave_Regigigas_S7_Doctor_Move_14
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_14 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 2, Cave_Regigigas_S7_Doctor_Move_6
waitmovement 0x0
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_16 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 2, Cave_Regigigas_S7_Doctor_Move_6
waitmovement 0x0
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_17 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S7_Doctor_Move_15
applymovement 2, Cave_Regigigas_S7_Doctor_Move_12
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_19 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S7_Doctor_Move_16
waitmovement 0x0
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_20 MSGBOX_AUTOCLOSE
applymovement 2, Cave_Regigigas_S7_Doctor_Move_3
applymovement 1, Cave_Regigigas_S7_Doctor_Move_3
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_21 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S7_Doctor_Move_11
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_22 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_23 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_24 MSGBOX_AUTOCLOSE
delay 15
playse SE_BREAKABLE_DOOR
applymovement 1, Cave_Regigigas_S7_Doctor_Move_5
waitmovement 0x0
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_25 MSGBOX_AUTOCLOSE
applymovement 3, Cave_Regigigas_S7_Doctor_Move_17
waitmovement 0x0
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_26 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_27 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S7_Doctor_Move_11
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_28 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S7_Doctor_Move_6
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_29 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S7_Doctor_Move_9
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_30 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, Cave_Regigigas_S7_Doctor_Move_5
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_31 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Cave_Regigigas_S7_Doctor_Move_9
waitmovement 0x0
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_32 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_33 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Cave_Regigigas_S7_Doctor_Move_11
waitmovement 0x0
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_34 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, Cave_Regigigas_S7_Doctor_Move_5
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_35 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_36 MSGBOX_AUTOCLOSE
applymovement 2, Cave_Regigigas_S7_Doctor_Move_18
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_37 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_38 MSGBOX_AUTOCLOSE
delay 15
playse SE_BREAKABLE_DOOR
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S7_Doctor_Move_13
applymovement 2, Cave_Regigigas_S7_Doctor_Move_3
applymovement 1, Cave_Regigigas_S7_Doctor_Move_5
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_39 MSGBOX_AUTOCLOSE
choose_mons
multi_2_vs_2 1535, Cave_Regigigas_S7_Doctor_Texto_40, 1556, Cave_Regigigas_S7_Doctor_Texto_41, 1555, 6
applymovement 1, Cave_Regigigas_S7_Doctor_Move_19
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_42 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Cave_Regigigas_S7_Doctor_Move_11
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_43 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Cave_Regigigas_S7_Doctor_Move_2
applymovement 3, Cave_Regigigas_S7_Doctor_Move_2
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S7_Doctor_Move_2
waitmovement 0x0
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_44 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S7_Doctor_Move_20
applymovement 2, Cave_Regigigas_S7_Doctor_Move_21
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_45 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_46 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Cave_Regigigas_S7_Doctor_Move_2
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_47 MSGBOX_AUTOCLOSE
applymovement 1, Cave_Regigigas_S7_Doctor_Move_22
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_48 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_49 MSGBOX_AUTOCLOSE
applymovement 2, Cave_Regigigas_S7_Doctor_Move_11
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_50 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_51 MSGBOX_AUTOCLOSE
applymovement 2, Cave_Regigigas_S7_Doctor_Move_18
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_52 MSGBOX_AUTOCLOSE
applymovement 2, Cave_Regigigas_S7_Doctor_Move_23
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_53 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, Cave_Regigigas_S7_Doctor_Move_22
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_54 MSGBOX_AUTOCLOSE
applymovement 2, Cave_Regigigas_S7_Doctor_Move_23
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_55 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_56 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_57 MSGBOX_AUTOCLOSE
delay 25
applymovement 1, Cave_Regigigas_S7_Doctor_Move_11
waitmovement 0x0
delay 25
msgbox Cave_Regigigas_S7_Doctor_Texto_58 MSGBOX_AUTOCLOSE
delay 35
msgbox Cave_Regigigas_S7_Doctor_Texto_59 MSGBOX_AUTOCLOSE
delay 35
playse SE_BREAKABLE_DOOR
applymovement 1, Cave_Regigigas_S7_Doctor_Move_5
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_60 MSGBOX_AUTOCLOSE
applymovement 2, Cave_Regigigas_S7_Doctor_Move_25
applymovement 3, Cave_Regigigas_S7_Doctor_Move_26
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S7_Doctor_Move_26
applymovement 1, Cave_Regigigas_S7_Doctor_Move_24
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_61 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Cave_Regigigas_S7_Doctor_Move_27
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_62 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 2, Cave_Regigigas_S7_Doctor_Move_28
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_63 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_64 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Cave_Regigigas_S7_Doctor_Move_5
waitmovement 0x0
applymovement 3, Cave_Regigigas_S7_Doctor_Move_11
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S7_Doctor_Move_11
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_65 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Cave_Regigigas_S7_Doctor_Move_29
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_66 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Cave_Regigigas_S7_Doctor_Move_30
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_67 MSGBOX_AUTOCLOSE
applymovement 3, Cave_Regigigas_S7_Doctor_Move_1
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_68 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Cave_Regigigas_S7_Doctor_Move_9
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_69 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Cave_Regigigas_S7_Doctor_Move_11
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_70 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_71 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_62
fadescreen 1
delay 20
removeobject 2
fadescreen 0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S7_Doctor_Move_30
applymovement 3, Cave_Regigigas_S7_Doctor_Move_18
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_72 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Cave_Regigigas_S7_Doctor_Move_11
applymovement 3, Cave_Regigigas_S7_Doctor_Move_31
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_73 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_74 MSGBOX_AUTOCLOSE
delay 15
msgbox Cave_Regigigas_S7_Doctor_Texto_75 MSGBOX_AUTOCLOSE
applymovement 3, Cave_Regigigas_S7_Doctor_Move_5
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_76 MSGBOX_AUTOCLOSE
applymovement 3, Cave_Regigigas_S7_Doctor_Move_11
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_77 MSGBOX_AUTOCLOSE
applymovement 3, Cave_Regigigas_S7_Doctor_Move_1
waitmovement 0x0
msgbox Cave_Regigigas_S7_Doctor_Texto_78 MSGBOX_AUTOCLOSE
applymovement 3, Cave_Regigigas_S7_Doctor_Move_31.1
waitmovement 0x0
special HealPlayerParty
playse SE_EXIT
setflag FLAG_HOENN_1
removeobject 1
removeobject 3
setvar VAR_UNUSED_0x40F8, 22
release
end

Cave_Regigigas_S7_Doctor_Move_31.1:
walk_up
walk_up
walk_up
step_end

Cave_Regigigas_S7_Doctor_Move_31:
walk_slow_up
walk_slow_up
step_end

Cave_Regigigas_S7_Doctor_Move_30:
face_right
step_end

Cave_Regigigas_S7_Doctor_Move_29:
walk_slow_down
step_end

Cave_Regigigas_S7_Doctor_Move_28:
walk_down
step_end

Cave_Regigigas_S7_Doctor_Move_27:
walk_right
walk_right
face_down
step_end

Cave_Regigigas_S7_Doctor_Move_26:
delay_16
delay_16
face_right
delay_16
delay_16
face_down
step_end



Cave_Regigigas_S7_Doctor_Move_25:
delay_16
delay_16
face_down
delay_16
face_right
delay_16
face_down
step_end

Cave_Regigigas_S7_Doctor_Move_1:
walk_in_place_up
step_end

Cave_Regigigas_S7_Doctor_Texto_1:
	.string "C.MIGUEL: ¡Vosotros! ¡¿Cómo…?!$"

Cave_Regigigas_S7_Doctor_Texto_2:
	.string "DR.RASMUS: {PLAYER}, {PLAYER}...$"

Cave_Regigigas_S7_Doctor_Texto_3:
	.string "DR.RASMUS: Te has vuelto todo un\n"
	.string "experto en hacer de lo improbable algo\l"
	.string "de lo más común.$"

Cave_Regigigas_S7_Doctor_Texto_4:
	.string "Y a su lado tenemos a ANDRA, quién si no.$"

Cave_Regigigas_S7_Doctor_Texto_5:
	.string "Alguien que precisamente aborrece que\n"
	.string "lo extraordinario se normalice, y sin\l"
	.string "embargo no ha dudado en dejar todo\l"
	.string "atrás para ir tras su búsqueda.$"

Cave_Regigigas_S7_Doctor_Texto_6:
	.string "ANDRA: No has entendido nada.$"

Cave_Regigigas_S7_Doctor_Texto_7:
	.string "DR.RASMUS: Puede que si se lo explicas a\n"
	.string "tu antiguo socio, todos podamos\l"
	.string "entenderlo.$"

Cave_Regigigas_S7_Doctor_Texto_8:
	.string "¿Qué me dices, MIGUEL? Es tu\n"
	.string "oportunidad.$"

Cave_Regigigas_S7_Doctor_Texto_9:
	.string "C.MIGUEL: … …$"

Cave_Regigigas_S7_Doctor_Texto_10:
	.string "ANDRA: MIGUEL… pude ver a ese POKÉMON\n"
	.string "en PUEBLO LAVANDA.$"

Cave_Regigigas_S7_Doctor_Texto_11:
	.string "Créeme, si estás intentando lo que creo\n"
	.string "que estás intentando, este no es el\l"
	.string "camin…$"

Cave_Regigigas_S7_Doctor_Texto_12:
	.string "DR.RASMUS: ¡Suficiente!$"

Cave_Regigigas_S7_Doctor_Texto_13:
	.string "Alguien bendecida tratando de dar\n"
	.string "consejos que aplicados a otros jamás\l"
	.string "servirán para tocar el mismo cielo.$"

Cave_Regigigas_S7_Doctor_Texto_14:
	.string "Te creía más inteligente\n"
	.string "que todo eso, ANDRA.$"

Cave_Regigigas_S7_Doctor_Texto_15:
	.string "¡MIGUEL! ¡Sabes que no hay otra manera!$"

Cave_Regigigas_S7_Doctor_Texto_16:
	.string "¡Tienes que humillar a aquellos que\n"
	.string "estuvieron por encima tuya por\l"
	.string "trivialidades del destino, aplastarlos\l"
	.string "en un combate para dejar claro que te\l"
	.string "sobre pusiste con todo en contra!$"

Cave_Regigigas_S7_Doctor_Texto_17:
	.string "¡Ellos no merecen más que tú, solo te\n"
	.string "queda un último paso para alcanzar lo\l"
	.string "que tanto tiempo llevas buscando!$"

Cave_Regigigas_S7_Doctor_Texto_18:
	.string "Y para eso yo estoy aquí, ¡para\n"
	.string "ayudarte a lograrlo!$"

Cave_Regigigas_S7_Doctor_Texto_19:
	.string "Conmigo y con la tecnología que DEVON\n"
	.string "te ha proporcionado, ¡lo conseguirás!$"

Cave_Regigigas_S7_Doctor_Texto_20:
	.string "MIGUEL: S… ¡Sí! ¡Tienes razón!$"

Cave_Regigigas_S7_Doctor_Texto_21:
	.string "Te confesaré algo, {PLAYER}. Cuando\n"
	.string "ese ROJO nos destrozó en el MT.MOON\l"
	.string "sentí una profunda rabia.$"

Cave_Regigigas_S7_Doctor_Texto_22:
	.string "Que alguien de cualidades innatas tan\n"
	.string "excepcionales existiera me causaba un\l"
	.string "enorme sentimiento de inferioridad e\l"
	.string "impotencia. ¡Por pura injusticia!$"

Cave_Regigigas_S7_Doctor_Texto_23:
	.string "Ese tipo apenas sabía hablar, era nulo\n"
	.string "en el trato social y… sin embargo…\l"
	.string "dominaba con absoluta maestría a sus\l"
	.string "POKÉMON. No porque hubiera hecho algo\l"
	.string "diferente al resto, solo por… mero\l"
	.string "capricho del destino.$"

Cave_Regigigas_S7_Doctor_Texto_24:
	.string "Aún así… con el tiempo… tú has llegado a\n"
	.string "convertirte en algo incluso más odioso.$"

Cave_Regigigas_S7_Doctor_Texto_25:
	.string "Tenías también esas cualidades y…\n"
	.string "además… las has explotado al máximo…\l"
	.string "haciendo imposible alcanzarte por\l"
	.string "medios naturales, ¡hiciera lo que\l"
	.string "hiciera!$"

Cave_Regigigas_S7_Doctor_Texto_26:
	.string "ANDRA: ¡Te equivocas! ¡Siempre\n"
	.string "hay formas de seguir progresando!$"

Cave_Regigigas_S7_Doctor_Texto_27:
	.string "¡Cada uno debe seguir su camino, no\n"
	.string "todos tienen la misma progresión!$"

Cave_Regigigas_S7_Doctor_Texto_28:
	.string "MIGUEL: ¿Progresión? Hace ya tiempo\n"
	.string "que advertí mis propios límites.$"

Cave_Regigigas_S7_Doctor_Texto_29:
	.string "Hubiera dado cualquier cosa por\n"
	.string "equivocarme, pero no: vi con\l"
	.string "resignación cómo se cumplían todas y\l"
	.string "cada una de las predicciones que\l"
	.string "marcaban el fin de mi propio progreso,\l"
	.string "cómo era insuficiente para cumplir mis\l"
	.string "expectativas.$"

Cave_Regigigas_S7_Doctor_Texto_30:
	.string "Sí… veía esa asquerosa línea que\n"
	.string "marcaba una tendencia tan injusta como\l"
	.string "inexorable.$"

Cave_Regigigas_S7_Doctor_Texto_31:
	.string "¡Antes incluso de que vosotros os\n"
	.string "planteárais su existencia!$"

Cave_Regigigas_S7_Doctor_Texto_32:
	.string "ANDRA: Puede que esa sea precisamente\n"
	.string "la razón de tu estancamiento.$"

Cave_Regigigas_S7_Doctor_Texto_33:
	.string "MIGUEL: ¿Razón? ¿A qué quieres que\n"
	.string "espere? ¿¡A un milagro!?$"

Cave_Regigigas_S7_Doctor_Texto_34:
	.string "ANDRA: En ocasiones ocurren. Pero… solo\n"
	.string "si esperas hasta el final, cuando todos\l"
	.string "ya se han ido.$"

Cave_Regigigas_S7_Doctor_Texto_35:
	.string "MIGUEL: ¡Silencio! ¡No eres más que otra\n"
	.string "privilegiada! ¡Ya os he oído suficiente!$"

Cave_Regigigas_S7_Doctor_Texto_36:
	.string "Siendo las condiciones de partida tan\n"
	.string "dispares, ¡no queda otra que tomarnos\l"
	.string "la justicia por nuestra mano!$"

Cave_Regigigas_S7_Doctor_Texto_37:
	.string "DR.RASMUS: Bien dicho. Destruir a estos\n"
	.string "dos 'elegidos' haciendo uso de POKÉMON\l"
	.string "injustos a ojos de la naturaleza…$"

Cave_Regigigas_S7_Doctor_Texto_38:
	.string "…es un acto de justicia en sí mismo.$"

Cave_Regigigas_S7_Doctor_Texto_39:
	.string "MIGUEL: ¡Un acto que al fin\n"
	.string "me dará lo que ansío!$"

Cave_Regigigas_S7_Doctor_Texto_40:
	.string "¿¡Qué tengo que hacer\n"
	.string "para derrotarte!?$"

Cave_Regigigas_S7_Doctor_Texto_41:
	.string "Ya veo, aún falta para romper tu límite.$"

Cave_Regigigas_S7_Doctor_Texto_42:
	.string "MIGUEL: No… esto no debería ser así…\n"
	.string "se suponía que…$"

Cave_Regigigas_S7_Doctor_Texto_43:
	.string "DR.RASMUS: MIGUEL…estoy harto de ti.\n"
	.string "Eres un fraude, además de un traidor\l"
	.string "incompente.$"

Cave_Regigigas_S7_Doctor_Texto_44:
	.string "MIGUEL: ¿Q-qué?$"

Cave_Regigigas_S7_Doctor_Texto_45:
	.string "Con tu gran habilidad para pertenecer a\n"
	.string "cualquier bando, al final has\l"
	.string "demostrado no ser nadie en realidad.$"

Cave_Regigigas_S7_Doctor_Texto_46:
	.string "La esencia de tu personalidad no\n"
	.string "existe. Estás vacío, no tienes una cara\l"
	.string "propia.$"

Cave_Regigigas_S7_Doctor_Texto_47:
	.string "Eres capaz de trabajar para SILPH, el\n"
	.string "TEAM ROCKET o DEVON porque ningún\l"
	.string "rasgo propio te define.$"

Cave_Regigigas_S7_Doctor_Texto_48:
	.string "MIGUEL: ¡¿Qué quieres decir con eso?!$"

Cave_Regigigas_S7_Doctor_Texto_49:
	.string "DR.RASMUS: Ya te he dado innumerables\n"
	.string "oportunidades a lo largo de estos\l"
	.string "meses.$"

Cave_Regigigas_S7_Doctor_Texto_50:
	.string "He reducido mi poder en este combate,\n"
	.string "con la esperanza de que al fin dieses un\l"
	.string "paso al frente respecto a WRONGSPARCE.\l"
	.string "Y has vuelto a fracasar.$"

Cave_Regigigas_S7_Doctor_Texto_51:
	.string "Ahora veo que de donde no hay, es\n"
	.string "imposible sacar algo: Esperaba poco de\l"
	.string "ti y aún así me has decepcionado.$"

Cave_Regigigas_S7_Doctor_Texto_52:
	.string "Has demostrado no ser digno de nuestra\n"
	.string "confianza, tampoco de las expectativas\l"
	.string "que habíamos depositado en ti. ¿Sabes\l"
	.string "lo que eso significa?$"

Cave_Regigigas_S7_Doctor_Texto_53:
	.string "Que eres un perdedor. Siempre lo fuiste.$"

Cave_Regigigas_S7_Doctor_Texto_54:
	.string "MIGUEL: ¡NO!$"

Cave_Regigigas_S7_Doctor_Texto_55:
	.string "DR.RASMUS: Tu contrato con nosotros ha\n"
	.string "expirado. Ya no nos eres útil.$"

Cave_Regigigas_S7_Doctor_Texto_56:
	.string "MIGUEL: … …$"

Cave_Regigigas_S7_Doctor_Texto_57:
	.string "DR.RASMUS: Ahora, entrégame a\n"
	.string "WRONGSPARCE. Si has llegado a tener a\l"
	.string "ese POKÉMON es por nosotros y solo\l"
	.string "gracias a nosotros.$"

Cave_Regigigas_S7_Doctor_Texto_58:
	.string "MIGUEL: Entonces… así va a ser… ¿no?$"

Cave_Regigigas_S7_Doctor_Texto_59:
	.string "En ese caso…$"

Cave_Regigigas_S7_Doctor_Texto_60:
	.string "¡Lo lograré yo solo! ¡Tampoco os\n"
	.string "necesito yo a vosotros!$"

Cave_Regigigas_S7_Doctor_Texto_61:
	.string "ANDRA: ¡MIGUEL esper…!$"

Cave_Regigigas_S7_Doctor_Texto_62:
	.string "DR.RASMUS: ¡No puedes huir, MIGUEL!$"

Cave_Regigigas_S7_Doctor_Texto_63:
	.string "¡Tu destino está sellado! ¡Te\n"
	.string "encontraremos y entonces…!$"

Cave_Regigigas_S7_Doctor_Texto_64:
	.string "…obtendremos lo que queremos sin\n"
	.string "importar la forma.$"

Cave_Regigigas_S7_Doctor_Texto_65:
	.string "En cuanto vosotros, no tengo nada que\n"
	.string "deciros.$"

Cave_Regigigas_S7_Doctor_Texto_66:
	.string "Seréis grandes entrenadores. Puede que\n"
	.string "creáis estar realizando algún tipo de\l"
	.string "acto heróico llegando hasta aquí con\l"
	.string "POKÉMON mortales.$"

Cave_Regigigas_S7_Doctor_Texto_67:
	.string "Pero, al final del día, solo formáis\n"
	.string "parte de una estadística. Una variable\l"
	.string "más cuyos rangos están sobradamente\l"
	.string "controlados.$"

Cave_Regigigas_S7_Doctor_Texto_68:
	.string "ANDRA: No dirás lo mismo cuando hayamos\n"
	.string "acabado con aquello por lo que habéis\l"
	.string "venido.$"

Cave_Regigigas_S7_Doctor_Texto_69:
	.string "DR.RASMUS: Cuanta ignorancia, chiquilla.\n"
	.string "Si supieras lo que te espera…$"

Cave_Regigigas_S7_Doctor_Texto_70:
	.string "Tu error es pensar que REGIGIGAS es el\n"
	.string "final cuando…$"

Cave_Regigigas_S7_Doctor_Texto_71:
	.string "…es solo el comienzo.$"

Cave_Regigigas_S7_Doctor_Texto_72:
	.string "ANDRA: ¿Qué habrá querido decir?$"

Cave_Regigigas_S7_Doctor_Texto_73:
	.string "Ese DOCTOR… No apruebo lo que ha hecho\n"
	.string "MIGUEL, pero esos niveles de crueldad\l"
	.string "son demasiado.$"

Cave_Regigigas_S7_Doctor_Texto_74:
	.string "Crueldad… parece ser lo único válido\n"
	.string "para mejorar en estos días.$"

Cave_Regigigas_S7_Doctor_Texto_75:
	.string "Mmm… no importa.$"

Cave_Regigigas_S7_Doctor_Texto_76:
	.string "Hicimos un trato, {PLAYER}.\n"
	.string "¿Recuerdas?$"

Cave_Regigigas_S7_Doctor_Texto_77:
	.string "Y presiento que nos acercamos al final.$"

Cave_Regigigas_S7_Doctor_Texto_78:
	.string "No importa lo que haya detrás de esta\n"
	.string "cueva, estamos preparados.$"