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
msgbox MtMoon3F_Text_9, MSGBOX_AUTOCLOSE
end

MtMoon3F_9_2::
lock
faceplayer
msgbox MtMoon3F_Text_9_2, MSGBOX_AUTOCLOSE
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
msgbox MtMoon3F_Text_11, MSGBOX_AUTOCLOSE
end

MtMoon3F_11_2::
lock
faceplayer
delay 15
playse SE_PIN
applymovement 11, MtMoon3F_9_2_move1
playse MUS_OBTAIN_ITEM
msgbox MtMoon3F_Text_11_1, MSGBOX_AUTOCLOSE
waitfanfare
msgbox MtMoon3F_Text_11_2, MSGBOX_AUTOCLOSE
playse SE_POKENAV_ON
delay 20
msgbox MtMoon3F_Text_11_3, MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
delay 20
msgbox MtMoon3F_Text_11_4, MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 15
release
end

MtMoon3F_11_3::
lock
faceplayer
msgbox MtMoon3F_Text_11_5, MSGBOX_AUTOCLOSE
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
playse 527
msgbox MtMoon_3F_Azul_Text_4, MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Azul_Text_5, MSGBOX_AUTOCLOSE
delay 20
playse 528
applymovement 8, MtMoon_3F_Azul_move7
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
removeobject 8
fadeoutbgm 0
playse 500
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
fadeoutbgm 0
playse 500
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
fadeoutbgm 0
playse 500
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
fadeoutbgm 0
playse 500
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
.string "¿Qué?\n"
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
msgbox MtMoon_3F_Miguel_Rojo_text_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 13, MtMoon_3F_Miguel_Rojo_move3
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, MtMoon_3F_Miguel_Rojo_move4
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, MtMoon_3F_Miguel_Rojo_move5
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_4 MSGBOX_AUTOCLOSE
applymovement 13, MtMoon_3F_Miguel_Rojo_move6
waitmovement 0
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
addobject 12
delay 10
applymovement 13, MtMoon_3F_Miguel_Rojo_move7
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_5 MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Miguel_Rojo_text_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq MtMoon_3F_Miguel_Rojo_2
goto MtMoon_3F_Miguel_Rojo_3

MtMoon_3F_Miguel_Rojo_3::
msgbox MtMoon_3F_Miguel_Rojo_text_7 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move8
waitmovement 0
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
addobject 1
delay 10
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move9
applymovement 13, MtMoon_3F_Miguel_Rojo_move10
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_8 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_2
trainerbattle_no_intro TRAINER_KEVIN, MtMoon_3F_Miguel_Rojo_text_9
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move11
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_10 MSGBOX_AUTOCLOSE
playse SE_POKENAV_ON
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move7
waitmovement 0
playse SE_PIN
applymovement 13, MtMoon_3F_Miguel_Rojo_move3
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_11 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move12
waitmovement 0
delay 40
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_3
addobject 20
applymovement 20, MtMoon_3F_Miguel_Rojo_move13
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 16
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
trainerbattle_no_intro TRAINER_ROJO_1, MtMoon_3F_Miguel_Rojo_text_13
goto MtMoon_3F_Miguel_Rojo_3
end

MtMoon_3F_Miguel_Rojo_2::
msgbox MtMoon_3F_Miguel_Rojo_text_14 MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Miguel_Rojo_text_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq MtMoon_3F_Miguel_Rojo_2
goto MtMoon_3F_Miguel_Rojo_3
release
end

MtMoon_3F_Miguel_Rojo_4::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move1.1
waitmovement 0
goto MtMoon_3F_Miguel_Rojo
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
.string "Te propongo algo, ROCKET.$"

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
.string "Grrr...\n"
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

MtMoon_3F_Miguel_Rojo_move1.1:
walk_left
face_up
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

MtMoon_3F_Pelea_Frank::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Pelea_Frank_move1
waitmovement 0
delay 10
playse SE_PIN
applymovement 14, MtMoon_3F_Pelea_Frank_move2
waitmovement 0
playse MUS_RG_ROCKET_HIDEOUT
waitfanfare
goto MtMoon_3F_Pelea_Frank_5

MtMoon_3F_Pelea_Frank_2::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Pelea_Frank_move1.1
waitmovement 0
delay 10
playse SE_PIN
applymovement 14, MtMoon_3F_Pelea_Frank_move2
waitmovement 0
playse MUS_RG_ROCKET_HIDEOUT
waitfanfare
goto MtMoon_3F_Pelea_Frank_5

MtMoon_3F_Pelea_Frank_3::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Pelea_Frank_move1.2
waitmovement 0
delay 10
playse SE_PIN
applymovement 14, MtMoon_3F_Pelea_Frank_move2.1
waitmovement 0
playse MUS_RG_ROCKET_HIDEOUT
waitfanfare
goto MtMoon_3F_Pelea_Frank_5

MtMoon_3F_Pelea_Frank_4::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Pelea_Frank_move1.3
waitmovement 0
delay 10
playse SE_PIN
applymovement 14, MtMoon_3F_Pelea_Frank_move2.1
waitmovement 0
playse MUS_RG_ROCKET_HIDEOUT
waitfanfare
goto MtMoon_3F_Pelea_Frank_5



MtMoon_3F_Pelea_Frank_5::
msgbox MtMoon_3F_Pelea_Frank_texto1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Pelea_Frank_move3
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 14, MtMoon_3F_Pelea_Frank_move4
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto3 MSGBOX_AUTOCLOSE
applymovement 17, MtMoon_3F_Pelea_Frank_move5
playse SE_PIN
applymovement 14, MtMoon_3F_Pelea_Frank_move6
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto4 MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Pelea_Frank_texto5 MSGBOX_AUTOCLOSE
delay 15
applymovement 14, MtMoon_3F_Pelea_Frank_move7
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto6 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Pelea_Frank_move3
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 14, MtMoon_3F_Pelea_Frank_move4
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto7 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 14, MtMoon_3F_Pelea_Frank_move8
waitmovement 0
playse 500
msgbox MtMoon_3F_Pelea_Frank_texto8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ALTORANGO, MtMoon_3F_Pelea_Frank_texto9
msgbox MtMoon_3F_Pelea_Frank_texto10 MSGBOX_AUTOCLOSE
applymovement 14, MtMoon_3F_Pelea_Frank_move9
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto11 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
fadescreen 1
delay 20
removeobject 16
removeobject 15
removeobject 14
removeobject 19
removeobject 18
fadescreen 0
delay 20
applymovement 17, MtMoon_3F_Pelea_Frank_move10
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto12 MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Pelea_Frank_texto13 MSGBOX_AUTOCLOSE
playse SE_POKENAV_ON
applymovement 17, MtMoon_3F_Pelea_Frank_move11
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto14 MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Pelea_Frank_texto15 MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Pelea_Frank_texto16 MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Pelea_Frank_texto17 MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Pelea_Frank_texto18 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
delay 20
applymovement 17, MtMoon_3F_Pelea_Frank_move12
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto19 MSGBOX_AUTOCLOSE
applymovement 17, MtMoon_3F_Pelea_Frank_move13
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto20 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
removeobject 17
fadescreen 0
setvar VAR_UNUSED_0x40F7, 18
setvar VAR_UNUSED_0x40FC, 1
release
end

MtMoon_3F_Pelea_Frank_texto1:
.string "A.R FRANK: Así que al menos tienes\n"
	.string "el valor de venir. Se te encomendó\l"
	.string "una misión {PLAYER}: proteger el\l"
	.string "FÓSIL con tu vida, y has fracasado\l"
	.string "miserablemente, ¿tienes algo que\l"
	.string "decir al respecto?$"

MtMoon_3F_Pelea_Frank_texto2:
.string "...\n"
	.string "...\l"
	.string "...\l"
	.string "...$"

MtMoon_3F_Pelea_Frank_texto3:
.string "¡¡TUVISTE 2 FÓSILES EN TU MANO!!\n"
	.string "¡¡Y te has dejado engañar por un\l"
	.string "estúpido aprendiz de científico,\l"
	.string "solo para después perder contra el\l"
	.string "entrenador misterioso!!\l"
	.string "¡Tu ineptitud es desesperante, voy\l"
	.string "a recomendar a PETREL tu despido\l"
	.string "inmediato, alguien tan\l"
	.string "incompetente no merece formar\l"
	.string "parte de esta organización!$"

MtMoon_3F_Pelea_Frank_texto4:
.string "ANDRA: Perdone mi interrupción\n"
	.string "superior FRANK, pero he tenido\l"
	.string "oportunidad de ver combatir a\l"
	.string "{PLAYER} y no es precisamente un\l"
	.string "ENTRENADOR débil e incompetente.\l"
	.string "Todos los que se han cruzado con\l"
	.string "ese ENTRENADOR misterioso han\l"
	.string "perdido en un abrir y cerrar de\l"
	.string "ojos, no sería justo condenar a\l"
	.string "uno cuando todos han caído de\l"
	.string "igual forma, ¿no cree?\l"
	.string "Además, finalmente tenemos 2\l"
	.string "FÓSILES, no ha sido tan malo si\l"
	.string "miramos en perspectiva.$"

MtMoon_3F_Pelea_Frank_texto5:
.string "A.R FRANK: No le estamos juzgando\n"
	.string "por su nivel como ENTRENADOR\l"
	.string "ANDRA, sino por su pésima astucia\l"
	.string "e inteligencia a la hora de\l"
	.string "afrontar esta situación.$"

MtMoon_3F_Pelea_Frank_texto6:
.string "Debiste de haber recogido los\n"
	.string "FÓSILES rápidamente y haber\l"
	.string "desaparecido de escena usando una\l"
	.string "CUERDA HUIDA nada más recibir mi\l"
	.string "mensaje, en lugar de eso te\l"
	.string "quedaste como un estúpido\l"
	.string "inconsciente a pelear de tú a tú\l"
	.string "contra un ENTRENADOR del que ya\l"
	.string "estabas avisado estaba a otro\l"
	.string "nivel, y no solo eso, descuidaste\l"
	.string "a ese científico y acabó\l"
	.string "jugándotela también. El muy\l"
	.string "canalla debió de largarse\l"
	.string "rápidamente con uno de esos dos\l"
	.string "FÓSILES. Has quedado como el más\l"
	.string "tonto de la clase {PLAYER}. Tu\l"
	.string "negligencia va a costarle cientos\l"
	.string "de miles de POKÉS a nuestra\l"
	.string "organización, ¿tienes idea de\l"
	.string "cuántos años de tu sueldo son eso?$"

MtMoon_3F_Pelea_Frank_texto7:
.string "A.R FRANK: ¿Cómo?\n"
	.string "¿Que el código de honor del TEAM\l"
	.string "ROCKET dice que nunca debe de\l"
	.string "darse la espalda a un enemigo,\l"
	.string "huir de la situación mostraría\l"
	.string "debilidad y falta de valores por\l"
	.string "nuestra parte, lo que debió de\l"
	.string "hacerse en esta situación era\l"
	.string "someter a ese ENTRENADOR entre\l"
	.string "todos?$"

MtMoon_3F_Pelea_Frank_texto8:
.string "A.R FRANK: Esto es el colmo, no\n"
	.string "necesito que un novato venido de\l"
	.string "una perdida isla me hable del\l"
	.string "código de honor ROCKET.\l"
	.string "Vas a arrepentirte de haberlo\l"
	.string "mencionado, ¡la gente como tú\l"
	.string "necesita ser instruida por las\l"
	.string "malas!\l"
	.string "¡No me hago responsable de lo que\l"
	.string "le ocurra a tu EQUIPO POKÉMON\l"
	.string "después de esto!$"

MtMoon_3F_Pelea_Frank_texto9:
.string "¿Un ALTO RANGO como yo derrotado\n"
	.string "por un novato?$"

MtMoon_3F_Pelea_Frank_texto10:
.string "Esto es inadmisible...$"

MtMoon_3F_Pelea_Frank_texto11:
.string "Suficiente. Esta misión se da por\n"
	.string "terminada. El balance total ha\l"
	.string "sido de 2 FÓSILES encontrados,\l"
	.string "presentaos en la BASE de RUTA 5\l"
	.string "para rendir cuentas a PETREL y\l"
	.string "conocer vuestra próxima misión.\l"
	.string "¡Bomba de humo!$"

MtMoon_3F_Pelea_Frank_texto12:
.string "ANDRA: ¡Guau, viste eso!\n"
	.string "¡Se han quedado todos atónitos, el\l"
	.string "SUB.ADMIN FRANK tiene fama de ser\l"
	.string "muy sanguinario y poco paciente\l"
	.string "con los nuevos, pero tú no te has\l"
	.string "amedrentado y has mantenido firme\l"
	.string "tu versión!$"

MtMoon_3F_Pelea_Frank_texto13:
.string "Yo no me he cruzado con ese\n"
	.string "misterioso ENTRENADOR, ¿llevaba un\l"
	.string "CHARMELEON? Parece que aquí hay\l"
	.string "gente verdaderamente fuerte,\l"
	.string "debemos de mejorar más y\l"
	.string "prepararnos para que ese tipo no\l"
	.string "vuelva a derrotarnos tan\l"
	.string "facilmente.\l"
	.string "¿Qué dirá PETREL de todo esto?\l"
	.string "No creo que FRANK hable muy bien\l"
	.string "de ti en su informe de la misión,\l"
	.string "deberías de ir rápidamente al\l"
	.string "CUARTEL y explicar tu versión de\l"
	.string "los hechos.$"

MtMoon_3F_Pelea_Frank_texto14:
.string "PETREL: Llamando a la RECLUTA\n"
	.string "ANDRA.$"

MtMoon_3F_Pelea_Frank_texto15:
.string "ANDRA: ¡Presente, ADM.PETREL!\n"
	.string "¿Qué desea?$"

MtMoon_3F_Pelea_Frank_texto16:
.string "PETREL: Se te ha encomendado una\n"
	.string "misión junto con otros 6 RECLUTAS,\l"
	.string "quiero que partas inmediatamente\l"
	.string "hacia CIUDAD CARMÍN, los detalles\l"
	.string "de la misión se te irán dando\l"
	.string "sobre la marcha.\l"
	.string "¿Está {PLAYER} ahí?$"

MtMoon_3F_Pelea_Frank_texto17:
.string "ANDRA: A la orden, {PLAYER} está\n"
	.string "aquí, sir.$"

MtMoon_3F_Pelea_Frank_texto18:
.string "PETREL: Dile que lo quiero en mi\n"
	.string "despacho inmediatamente. Eso es\l"
	.string "todo por ahora.$"

MtMoon_3F_Pelea_Frank_texto19:
.string "ANDRA: Ya lo has oído, parece que\n"
	.string "esta vez nos adjudicarán misiones\l"
	.string "diferentes.$"

MtMoon_3F_Pelea_Frank_texto20:
.string "La próxima vez que nos veamos,\n"
	.string "cuento con que tu equipo esté\l"
	.string "irreconocible. Da por hecho que el\l"
	.string "mío será mucho más fuerte, hasta\l"
	.string "la próxima -compatriota- de ISLA\l"
	.string "INTA.$"

MtMoon_3F_Pelea_Frank_move1:
walk_down
walk_down
walk_right
walk_down
walk_down
walk_in_place_left
step_end

MtMoon_3F_Pelea_Frank_move1.1:
walk_down
walk_down
walk_down
walk_down
walk_in_place_left
step_end

MtMoon_3F_Pelea_Frank_move1.2:
walk_up
walk_right
walk_up
walk_up
walk_in_place_left
step_end

MtMoon_3F_Pelea_Frank_move1.3:
walk_up
walk_up
walk_up
walk_in_place_left
step_end

MtMoon_3F_Pelea_Frank_move2:
walk_in_place_up
emote_exclamation_mark
walk_in_place_right
step_end

MtMoon_3F_Pelea_Frank_move2.1:
walk_in_place_down
emote_exclamation_mark
walk_in_place_right
step_end

MtMoon_3F_Pelea_Frank_move3:
walk_in_place_left
step_end

MtMoon_3F_Pelea_Frank_move4:
emote_exclamation_mark
step_end

MtMoon_3F_Pelea_Frank_move5:
walk_right
step_end

MtMoon_3F_Pelea_Frank_move6:
emote_exclamation_mark
walk_in_place_left
step_end

MtMoon_3F_Pelea_Frank_move7:
walk_in_place_right
step_end

MtMoon_3F_Pelea_Frank_move8:
emote_exclamation_mark
walk_in_place_right
step_end

MtMoon_3F_Pelea_Frank_move9:
walk_in_place_up
walk_in_place_down
walk_in_place_left
walk_in_place_right
step_end

MtMoon_3F_Pelea_Frank_move10:
walk_right
walk_right
step_end

MtMoon_3F_Pelea_Frank_move11:
emote_exclamation_mark
walk_fast_down
step_end

MtMoon_3F_Pelea_Frank_move12:
walk_slow_up
walk_in_place_right
step_end

MtMoon_3F_Pelea_Frank_move13:
walk_in_place_left
walk_in_place_right
step_end
