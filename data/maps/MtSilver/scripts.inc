MtSilver_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, MtSilver_OnTransition
	.byte 0
	
MtSilver_OnTransition::
setflag FLAG_VISITED_MT_SILVER
end


MtSilverDocumento_100::
msgbox MtSilverDocumento_Text_100, MSGBOX_SIGN   
end

MtSilverDocumento_Text_100:
	.string "MONTE PLATEADO$"

MtSilver_Combate_Andra_Izq::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MtSilver_Combate_Andra_Move_1
waitmovement 0x0
goto MtSilver_Combate_Andra

MtSilver_Combate_Andra_Der::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MtSilver_Combate_Andra_Move_1.1
waitmovement 0x0
goto MtSilver_Combate_Andra

MtSilver_Combate_Andra::
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 1
applymovement 1, MtSilver_Combate_Andra_Move_2
waitmovement 0x0
delay 10
msgbox MtSilver_Combate_Andra_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox MtSilver_Combate_Andra_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, MtSilver_Combate_Andra_Move_3
applymovement OBJ_EVENT_ID_PLAYER, MtSilver_Combate_Andra_Move_3
waitmovement 0x0
delay 10
msgbox MtSilver_Combate_Andra_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox MtSilver_Combate_Andra_Texto_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, MtSilver_Combate_Andra_Move_4
applymovement OBJ_EVENT_ID_PLAYER, MtSilver_Combate_Andra_Move_5
waitmovement 0x0
delay 10
msgbox MtSilver_Combate_Andra_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox MtSilver_Combate_Andra_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, MtSilver_Combate_Andra_Move_3
waitmovement 0x0
delay 10
msgbox MtSilver_Combate_Andra_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, MtSilver_Combate_Andra_Move_3
waitmovement 0x0
delay 10
msgbox MtSilver_Combate_Andra_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox MtSilver_Combate_Andra_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, MtSilver_Combate_Andra_Move_6
waitmovement 0x0
msgbox MtSilver_Combate_Andra_Texto_10 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_8, MtSilver_Combate_Andra_Texto_11
applymovement OBJ_EVENT_ID_PLAYER, MtSilver_Combate_Andra_Move_7
waitmovement 0x0
msgbox MtSilver_Combate_Andra_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, MtSilver_Combate_Andra_Move_8
waitmovement 0x0
msgbox MtSilver_Combate_Andra_Texto_13 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Indigo_Johto_Atlas_Move_8.1
applymovement 1, MtSilver_Combate_Andra_Move_9
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
setflag FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT
removeobject 1
setvar VAR_UNUSED_0x40F7, 157
release
end

MtSilver_Combate_Andra_Texto_1:
.string "ANDRA: No esperaba menos de ti,\n"
	.string "{PLAYER}.$"

MtSilver_Combate_Andra_Texto_2:
.string "Sabía que tú tampoco podrías\n"
	.string "resistirte a visitar este lugar.\p"
	.string "Observa.$"

MtSilver_Combate_Andra_Texto_3:
.string "Es como{PAUSE 25}…{PAUSE 25} si este fuera el lugar\n"
	.string "donde el combate POKÉMON hubiera\l"
	.string "nacido, tal y como lo conocemos hoy\l"
	.string "en día. Aquí es donde los grandes\l"
	.string "campeones de KANTO y JOHTO han\l"
	.string "venido a retirarse, después de una\l"
	.string "vida entregada al combate.\p"
	.string "Parece que esa costumbre también\n"
	.string "se está perdiendo.$"

MtSilver_Combate_Andra_Texto_4:
.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

MtSilver_Combate_Andra_Texto_5:
.string "He subido a la cima del MT.PLATEADO.\p"
	.string "Adivina a quién me he encontrado.$"

MtSilver_Combate_Andra_Texto_6:
.string "Así es, me he sorprendido a mí\n"
	.string "misma, al ver cómo pude derrotar a\l"
	.string "aquel que en la LIGA POKÉMON\l"
	.string "parecía invencible. De nuevo, los\l"
	.string "límites aún estaban mucho más\l"
	.string "lejos de lo que imaginaba.$"

MtSilver_Combate_Andra_Texto_7:
.string "ROJO sigue, y seguirá siendo, un\n"
	.string "ENTRENADOR extraordinario, pero\l"
	.string "está limitado por su realidad.\p"
	.string "Técnicamente, ha alcanzado la\n"
	.string "perfección con lo que tiene.$"

MtSilver_Combate_Andra_Texto_8:
.string "Pero para gente como nosotros,\n"
	.string "que ha visto lo que hemos visto,\l"
	.string "ese poder ya no tiene ningún\l"
	.string "misterio.\p"
	.string "Enrolarnos en el TEAM ROCKET fue lo\n"
	.string "mejor que pudimos hacer para conocer\l"
	.string "la verdadera historia.$"

MtSilver_Combate_Andra_Texto_9:
.string "He aprendido y mejorado mucho\n"
	.string "desde que estoy en HOENN, {PLAYER},\l"
	.string "dije que no usaría LEGENDARIOS en\l"
	.string "mi equipo, y lo mantengo.$"

MtSilver_Combate_Andra_Texto_10:
.string "Vine aquí, al MONTE PLATEADO, en\n"
	.string "busca de un gran reto.\l"
	.string "ROJO no ha estado mal, pero{PAUSE 25}…{PAUSE 25}\p"
	.string "¡Sabía que el verdadero\n"
	.string "reto ibas a ser tú!$"

MtSilver_Combate_Andra_Texto_11:
.string "Pse, algunas cosas nunca cambian.$"

MtSilver_Combate_Andra_Texto_12:
.string "Aún poniéndotelo más difícil que\n"
	.string "nunca, has logrado derrotarme de\l"
	.string "nuevo. Que sepas que jamás dejaré\l"
	.string "de empujar, cada vez con más\l"
	.string "fuerza y experiencia. Después de\l"
	.string "todo, somos la ÉLITE del TEAM\l"
	.string "ROCKET, no hay tiempo para\l"
	.string "lamentos o -y sis-, solo queda mirar\l"
	.string "hacia delante y seguir.$"

MtSilver_Combate_Andra_Texto_13:
.string "Me quedaré un tiempo en JOHTO.\p"
	.string "GIOVANNI me quiere aquí por ahora,\n"
	.string "creo que presiente{PAUSE 15} …{PAUSE 15} que algo muy\l"
	.string "gordo se avecina. Yo también estoy\l"
	.string "intrigada, desde ese terremoto en\l"
	.string "ISLA SÉTIMA, todo son incógnitas.\p"
	.string "No hemos vuelto a ver a LUGIA o a\n"
	.string "HO-OH.\p"
	.string "Mucho menos a ese 'POKÉMON ESENCIA'{PAUSE 5}…{PAUSE 5}$"

MtSilver_Combate_Andra_Move_1:
emote_exclamation_mark
walk_in_place_up
step_end

MtSilver_Combate_Andra_Move_1.1:
emote_exclamation_mark
walk_left
walk_in_place_up
step_end

MtSilver_Combate_Andra_Move_2:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

MtSilver_Combate_Andra_Move_3:
walk_in_place_right
step_end

MtSilver_Combate_Andra_Move_4:
face_down
step_end

MtSilver_Combate_Andra_Move_5:
face_up
step_end

MtSilver_Combate_Andra_Move_6:
walk_in_place_down
step_end

MtSilver_Combate_Andra_Move_7:
walk_in_place_up
step_end

MtSilver_Combate_Andra_Move_8:
walk_right
walk_down
step_end

MtSilver_Combate_Andra_Move_9:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end
