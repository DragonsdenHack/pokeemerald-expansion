MtMoon_3F_MapScripts::
	.byte 0

MtMoon3F_2::
end



MtMoon3F_3::
end



MtMoon3F_4::
end



MtMoon3F_5::
lock     
faceplayer     
msgbox MtMoon3F_Text_5, MSGBOX_DEFAULT
release     
end

MtMoon3F_Text_5:
.string "¡Nada por aquí camarada!$"



MtMoon3F_6::
lock     
faceplayer     
msgbox MtMoon3F_Text_6, MSGBOX_DEFAULT
release     
end

MtMoon3F_Text_6:
.string "ANDRA: Parece que aquí no hay nada\n"
.string "importante, tal vez en las\l"
.string "escaleras que llevan a otra\l"
.string "entrada…$"



MtMoon3F_7::
end



MtMoon3F_9::
lock     
faceplayer    
compare VAR_UNUSED_0x40F7, 12
goto_if_gt MtMoon3F_9_2
msgbox MtMoon3F_Text_9, MSGBOX_DEFAULT
end

MtMoon3F_9_2::
lock
faceplayer
msgbox MtMoon3F_Text_9_2, MSGBOX_DEFAULT
release
end

MtMoon3F_Text_9:
.string "Ahí está el tipo que nos ha\n"
	.string "causado tantos problemas. He\l"
	.string "tratado de pararle los pies pero\l"
	.string "mi equipo ha quedado hecho añicos.\l"
	.string "Solo puedo permanecer aquí parado\l"
	.string "mirando...$"


MtMoon3F_Text_9_2:
.string "¡Vaya!\n"
	.string "¡No sé qué le has dicho pero has\l"
	.string "conseguido que se largue sin el\l"
	.string "FÓSIL!\l"
	.string "¡PETREL nos recompensará aún más!$"

MtMoon3F_10::
end



MtMoon3F_11::
lock     
faceplayer  
compare VAR_UNUSED_0x40F7, 14
goto_if_gt MtMoon3F_11_3  
compare VAR_UNUSED_0x40F7, 13
goto_if_gt MtMoon3F_11_2
msgbox MtMoon3F_Text_11, MSGBOX_DEFAULT
end

MtMoon3F_11_2::
lock
faceplayer
delay 15
playse SE_PIN
applymovement 11, MtMoon3F_9_2_move1
playse MUS_OBTAIN_B_POINTS
msgbox MtMoon3F_Text_11_1, MSGBOX_DEFAULT
waitfanfare
msgbox MtMoon3F_Text_11_2, MSGBOX_DEFAULT
playse SE_POKENAV_ON
delay 20
msgbox MtMoon3F_Text_11_3, MSGBOX_DEFAULT
playse SE_POKENAV_OFF
delay 20
msgbox MtMoon3F_Text_11_4, MSGBOX_DEFAULT
setvar VAR_UNUSED_0x40F7, 15
release
end

MtMoon3F_11_3::
lock
faceplayer
msgbox MtMoon3F_Text_11_5, MSGBOX_DEFAULT
release
end


MtMoon3F_Text_11:
.string "No pierdas más el tiempo y sigue\n"
	.string "buscando, ¿no ves que yo estoy ya\l"
	.string "mirando por esta zona?$"

MtMoon3F_Text_11_1:
.string "¡{PLAYER} mostró el FÓSIL a ALTO\n"
	.string "RANGO FRANK!$"

MtMoon3F_Text_11_2:
.string "Mmm...\n"
	.string "Tal vez no seas tan incompetente\l"
	.string "como pensaba, con este tenemos 3\l"
	.string "FÓSILES en nuestro poder,\l"
	.string "suficiente como para dar por\l"
	.string "satisfactoria la misión.$"

MtMoon3F_Text_11_3:
.string "¡¡Llamando a todos los RECLUTAS de\n"
	.string "la misión MT.MOON!\l"
	.string "¡Hemos acabado, vuelvan al punto de\l"
	.string "encuentro!$"

MtMoon3F_Text_11_4:
.string "Perfecto, voy a apurar el tiempo\n"
	.string "de llegada de los otros para ver\l"
	.string "si encuentro un FÓSIL más, ve\l"
	.string "adelantándote RECLUTA, y cuidado\l"
	.string "con lo que llevas.$"

MtMoon3F_Text_11_5:
.string "¡Ve al punto de encuentro RECLUTA!\n"
	.string "¡Espero no tener que volver a\l"
	.string "repetírtelo!$"


MtMoon3F_9_2_move1:
emote_exclamation_mark
step_end



MtMoon_3F_Azul::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Azul_move1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 8, MtMoon_3F_Azul_move2
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_2, MSGBOX_AUTOCLOSE
applymovement 8, MtMoon_3F_Azul_move3
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_3, MSGBOX_AUTOCLOSE
applymovement 8, MtMoon_3F_Azul_move4
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 8, MtMoon_3F_Azul_move5
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Azul_move6
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_4, MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Azul_Text_5, MSGBOX_AUTOCLOSE
delay 20
applymovement 8, MtMoon_3F_Azul_move7
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
removeobject 8
setvar VAR_UNUSED_0x40F7, 13
release
end

MtMoon_3F_Azul_2::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Azul_move1.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 8, MtMoon_3F_Azul_move2.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_2, MSGBOX_AUTOCLOSE
applymovement 8, MtMoon_3F_Azul_move3.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_3, MSGBOX_AUTOCLOSE
applymovement 8, MtMoon_3F_Azul_move4.1
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 8, MtMoon_3F_Azul_move5
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Azul_move6
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_4, MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Azul_Text_5, MSGBOX_AUTOCLOSE
delay 20
applymovement 8, MtMoon_3F_Azul_move7
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
removeobject 8
setvar VAR_UNUSED_0x40F7, 13
release
end

MtMoon_3F_Azul_3::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Azul_move1.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 8, MtMoon_3F_Azul_move2.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_2, MSGBOX_AUTOCLOSE
applymovement 8, MtMoon_3F_Azul_move3.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_3, MSGBOX_AUTOCLOSE
applymovement 8, MtMoon_3F_Azul_move4
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 8, MtMoon_3F_Azul_move5
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Azul_move6
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_4, MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Azul_Text_5, MSGBOX_AUTOCLOSE
delay 20
applymovement 8, MtMoon_3F_Azul_move7
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
removeobject 8
setvar VAR_UNUSED_0x40F7, 13
release
end

MtMoon_3F_Azul_4::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Azul_move1.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 8, MtMoon_3F_Azul_move2.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_2, MSGBOX_AUTOCLOSE
applymovement 8, MtMoon_3F_Azul_move3.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_3, MSGBOX_AUTOCLOSE
applymovement 8, MtMoon_3F_Azul_move4.1
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 8, MtMoon_3F_Azul_move5
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Azul_move6
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_4, MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Azul_Text_5, MSGBOX_AUTOCLOSE
delay 20
applymovement 8, MtMoon_3F_Azul_move7
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
removeobject 8
setvar VAR_UNUSED_0x40F7, 13
release
end

MtMoon_3F_Azul_Text_1:
.string "????: Vaya, parece que este\n"
	.string "tampoco es un ÁMBAR VIEJO, voy a\l"
	.string "tener que conformarme solo con los\l"
	.string "FÓSILES DOMO Y HELIX. Qué pena,\l"
	.string "AERODACTYL no sería mal POKÉMON\l"
	.string "para mi equipo.$"

MtMoon_3F_Azul_Text_2:
.string "¿Otro ROCKET más?\n"
	.string "Parece que salís de las\l"
	.string "alcantarillas, no quiero perder\l"
	.string "más el tiempo derrotándote a ti\l"
	.string "también. Con vuestro nivel no\l"
	.string "tengo ni para empezar.$"

MtMoon_3F_Azul_Text_3:
.string "Hoy estás de suerte, ya tengo un\n"
	.string "ejemplar del FÓSIL DOMO que ves\l"
	.string "aquí y no voy a ocupar más espacio\l"
	.string "en mi mochila con otro igual.\l"
	.string "Cógelo si así lo deseas, además,\l"
	.string "quién quiere un OMASTAR o un\l"
	.string "KABUTOPS pudiendo tener un\l"
	.string "BLASTOISE.$"

MtMoon_3F_Azul_Text_4:
.string "¿Cómo?\n"
	.string "¿Soy un arrogante y peco de exceso\l"
	.string "de confianza por dejar viva a la\l"
	.string "competencia?$"

MtMoon_3F_Azul_Text_5:
.string "A mí no me importa el dinero que\n"
	.string "puedas hacer con esos FÓSILES\l"
	.string "ROCKET, lo único importante es\l"
	.string "contar con un equipo fuerte,\l"
	.string "balanceado y poderoso. Eso no\l"
	.string "tiene precio.$"

MtMoon_3F_Azul_move1:
walk_in_place_right
step_end

MtMoon_3F_Azul_move1.1:
walk_in_place_up
step_end

MtMoon_3F_Azul_move2:
face_left
emote_exclamation_mark
step_end

MtMoon_3F_Azul_move2.1:
face_down
emote_exclamation_mark
step_end

MtMoon_3F_Azul_move3:
walk_in_place_right
walk_in_place_left
step_end

MtMoon_3F_Azul_move3.1:
walk_in_place_right
walk_in_place_down
step_end

MtMoon_3F_Azul_move4:
walk_left
walk_down
walk_down
walk_down
step_end

MtMoon_3F_Azul_move4.1:
walk_down
walk_down
walk_down
step_end

MtMoon_3F_Azul_move5:
emote_exclamation_mark
walk_in_place_down
face_up
step_end

MtMoon_3F_Azul_move6:
face_down
step_end

MtMoon_3F_Azul_move7:
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

MtMoon_3F_Fosil::
removeobject 10
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
playfanfare MUS_OBTAIN_ITEM
msgbox MtMoon_3F_Fosil_text_1 MSGBOX_DEFAULT
waitfanfare
msgbox MtMoon_3F_Fosil_text_2 MSGBOX_DEFAULT
setvar VAR_UNUSED_0x40F7, 14
release
end

MtMoon_3F_Fosil_text_1:
.string "¡¡RECOGISTE UN FÓSIL DOMO!!$"

MtMoon_3F_Fosil_text_2:
.string "(El FÓSIL DOMO es mío, debería de\n"
	.string "informar al jefe al mando).$"



MtMoon_3F_Miguel_Rojo::
lockall
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move1
waitmovement 0
addobject 13
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_2
applymovement 13, MtMoon_3F_Miguel_Rojo_move2
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_1 MSGBOX_DEFAULT
playse SE_PIN
applymovement 13, MtMoon_3F_Miguel_Rojo_move3
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_2 MSGBOX_DEFAULT
delay 10
applymovement 13, MtMoon_3F_Miguel_Rojo_move4
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_3 MSGBOX_DEFAULT
delay 10
applymovement 13, MtMoon_3F_Miguel_Rojo_move5
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_4 MSGBOX_DEFAULT
applymovement 13, MtMoon_3F_Miguel_Rojo_move6
waitmovement 0
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
addobject 12
delay 10
applymovement 13, MtMoon_3F_Miguel_Rojo_move7
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_5 MSGBOX_DEFAULT
msgbox MtMoon_3F_Miguel_Rojo_text_6 MSGBOX_YES_NO
compare VAR_RESULT, 0
goto_if_eq MtMoon_3F_Miguel_Rojo_2
goto MtMoon_3F_Miguel_Rojo_3

MtMoon_3F_Miguel_Rojo_3::
msgbox MtMoon_3F_Miguel_Rojo_text_7 MSGBOX_DEFAULT
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move8
waitmovement 0
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
addobject 1
delay 10
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move9
applymovement 13, MtMoon_3F_Miguel_Rojo_move10
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_8 MSGBOX_DEFAULT
setflag FLAG_HIDE_UNION_ROOM_PLAYER_2
trainerbattle_no_intro TRAINER_KEVIN, MtMoon_3F_Miguel_Rojo_text_9
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move11
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_10 MSGBOX_DEFAULT
playse SE_POKENAV_ON
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move7
waitmovement 0
playse SE_PIN
applymovement 13, MtMoon_3F_Miguel_Rojo_move3
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_11 MSGBOX_DEFAULT
playse SE_POKENAV_OFF
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move12
waitmovement 0
delay 40
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_3
addobject 20
applymovement 20, MtMoon_3F_Miguel_Rojo_move13
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_12 MSGBOX_DEFAULT
setvar VAR_UNUSED_0x40F7, 16
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
trainerbattle_no_intro TRAINER_ROJO_1, MtMoon_3F_Miguel_Rojo_text_13
goto MtMoon_3F_Miguel_Rojo_3
end

MtMoon_3F_Miguel_Rojo_2::
msgbox MtMoon_3F_Miguel_Rojo_text_14 MSGBOX_DEFAULT
msgbox MtMoon_3F_Miguel_Rojo_text_6 MSGBOX_YES_NO
compare VAR_RESULT, 0
goto_if_eq MtMoon_3F_Miguel_Rojo_2
goto MtMoon_3F_Miguel_Rojo_3
release
end

MtMoon_3F_Miguel_Rojo_text_1:
.string "¿Qué se te ha perdido por aquí\n"
	.string "ROCKET?\l"
	.string "...\l"
	.string "...$"

MtMoon_3F_Miguel_Rojo_text_2:
.string "¿En serio?\n"
	.string "¿Estáis recolectando FÓSILES y\l"
	.string "tienes ya uno aquí mismo?$"

MtMoon_3F_Miguel_Rojo_text_3:
.string "(Estos ROCKET tienen fama de ser\n"
	.string "débiles y poco inteligentes. Si\l"
	.string "juego bien mis cartas puedo salir\l"
	.string "de aquí con dos FÓSILES).$"

MtMoon_3F_Miguel_Rojo_text_4:
Te propongo algo, ROCKET.

MtMoon_3F_Miguel_Rojo_text_5:
.string "Lo que ves ahí es un FÓSIL HELIX,\n"
	.string "contiene un OMANYTE, un POKÉMON\l"
	.string "ancestral que vivió hace más de\l"
	.string "300 millones de años. Estoy\l"
	.string "dispuesto a apostar en un combate\l"
	.string "mi FÓSIL contra el tuyo.\l"
	.string "Quien gane se quedará con los dos.\l"
	.string "...\l"
	.string "...$"

MtMoon_3F_Miguel_Rojo_text_6:
.string "¿Qué dices entonces?$"

MtMoon_3F_Miguel_Rojo_text_7:
.string "No esperaba menos de un ROCKET, la\n"
	.string "suerte está echada. Quien gane se\l"
	.string "queda con los dos FÓSILES, deja el\l"
	.string "tuyo al lado de mi FÓSIL HÉLIX en\l"
	.string "señal de este pacto.$"

MtMoon_3F_Miguel_Rojo_text_8:
.string "Has cometido un gran error, mis\n"
	.string "POKÉMON nunca caerían ante un\l"
	.string "mediocre RECLUTA como tú.\l"
	.string "Prepárate para perder el FÓSIL\l"
	.string "DOMO, que oportuno, ¡gracias a ti\l"
	.string "tendré a los dos FÓSILES!\l"
	.string "¡DOMO y HÉLIX!$"

MtMoon_3F_Miguel_Rojo_text_9:
.string "Se suponía que esto estaba\n"
	.string "controlado.$"

MtMoon_3F_Miguel_Rojo_text_10:
.string "Grrr[.]\n"
	.string "Tú no eres un ROCKET normal, no me\l"
	.string "gusta nada la gente que se sale de\l"
	.string "las estadísticas. En cuanto los\l"
	.string "FÓSILES...$"

MtMoon_3F_Miguel_Rojo_text_11:
.string "¡¡Llamando a {PLAYER}!!\n"
	.string "¡Ha aparecido un entrenador aún\l"
	.string "más fuerte que el anterior!\l"
	.string "Acaba de derrotarnos a todos sin\l"
	.string "ningún esfuerzo y ahora mismo se\l"
	.string "dirije hacia donde tú estás.\l"
	.string "Protege el FÓSIL con tu vida.\l"
	.string "Repito. Protege el FÓSIL con tu\l"
	.string "vida.\l"
	.string "¡Es una orden!$"

MtMoon_3F_Miguel_Rojo_text_12:
.string "????: ...$"

MtMoon_3F_Miguel_Rojo_text_13:
.string "...$"

MtMoon_3F_Miguel_Rojo_text_14:
.string "Pensaba que los ROCKET no le\n"
	.string "tenían miedo al riesgo y a las\l"
	.string "apuestas, ¿vas a traicionar tu\l"
	.string "naturaleza delictiva?\l"
	.string "Vamos piénsatelo una vez más.$"

MtMoon_3F_Miguel_Rojo_move1:
walk_in_place_up
step_end

MtMoon_3F_Miguel_Rojo_move2:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_in_place_down
emote_exclamation_mark
step_end

MtMoon_3F_Miguel_Rojo_move3:
emote_exclamation_mark
step_end

MtMoon_3F_Miguel_Rojo_move4:
face_up
step_end

MtMoon_3F_Miguel_Rojo_move5:
face_down
walk_in_place_down
step_end

MtMoon_3F_Miguel_Rojo_move6:
walk_right
walk_up
walk_in_place_up
step_end

MtMoon_3F_Miguel_Rojo_move7:
walk_down
step_end

MtMoon_3F_Miguel_Rojo_move8:
walk_up
walk_up
walk_up
walk_up
walk_in_place_up
step_end

MtMoon_3F_Miguel_Rojo_move9:
walk_down
walk_in_place_right
step_end

MtMoon_3F_Miguel_Rojo_move10:
face_left
step_end

MtMoon_3F_Miguel_Rojo_move11:
face_right
step_end

MtMoon_3F_Miguel_Rojo_move12:
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_left
walk_left
walk_in_place_down
step_end

MtMoon_3F_Miguel_Rojo_move13:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_in_place_up
step_end
