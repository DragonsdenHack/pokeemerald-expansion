Violet_Gym_MapScripts::
	.byte 0

VioletGym1::
end



VioletGym2::
end



VioletGym3::
end



VioletGym4::
end



VioletGym5::
end



VioletGym_EventScript_Chico::
	trainerbattle_single TRAINER_MIKE_2, VioletGym_Text_ChicoIntro, VioletGym_Text_ChicoDefeated
	msgbox VioletGym_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



VioletGym_EventScript_Chico2::
	trainerbattle_single TRAINER_TRENT_2, VioletGym_Text_Chico2Intro, VioletGym_Text_Chico2Defeated
	msgbox VioletGym_Text_Chico2PostBattle, MSGBOX_AUTOCLOSE
	end

VioletGym_Frontera::
lock
compare VAR_UNUSED_0x40F7, 122
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
playse SE_PIN
applymovement 4, VioletGym_Frontera_Move_1
applymovement OBJ_EVENT_ID_PLAYER, VioletGym_Frontera_Move_2
waitmovement 0x0
msgbox VioletGym_Frontera_Texto_1 MSGBOX_AUTOCLOSE
applymovement 4, VioletGym_Frontera_Move_2
applymovement OBJ_EVENT_ID_PLAYER, VioletGym_Frontera_Move_3
waitmovement 0x0
release
end

VioletGym_Frontera_Texto_1:
.string "¡Oye!\p"
	.string "¿A dónde crees que vas?\p"
	.string "Nuestro LÍDER ya no acepta retos\n"
	.string "de aspirantes. Si quieres tener\l"
	.string "oportunidad de luchar,\l"
	.string "trata de convencerlo.$"

VioletGym_Frontera_Move_1:
face_up
emote_exclamation_mark
step_end

VioletGym_Frontera_Move_2:
walk_in_place_down
step_end

VioletGym_Frontera_Move_3:
walk_slow_down
step_end

VioletGym_Estatua::
lock
compare VAR_UNUSED_0x40F7, 124
goto_if_gt VioletGym_Estatua_2
msgbox VioletGym_Estatua_Texto_1 MSGBOX_AUTOCLOSE
release
end

VioletGym_Estatua_2::
msgbox VioletGym_Estatua_Texto_2 MSGBOX_AUTOCLOSE
release
end


VioletGym_Estatua_Texto_1:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de CIUDAD MALVA: PEGASO\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "(¡Está vacío!)$"

VioletGym_Estatua_Texto_2:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de CIUDAD MALVA: PEGASO\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "{PLAYER}$"

VioletGym_Gym_Dude::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 124
goto_if_gt VioletGym_Gym_Dude_2
compare VAR_UNUSED_0x40F7, 122
goto_if_gt VioletGym_Gym_Dude_3
msgbox VioletGym_Gym_Dude_Texto_1 MSGBOX_NPC
release
end

VioletGym_Gym_Dude_2::
msgbox VioletGym_Gym_Dude_Texto_2 MSGBOX_NPC
release
end

VioletGym_Gym_Dude_3::
msgbox VioletGym_Gym_Dude_Texto_3 MSGBOX_NPC
release
end

VioletGym_Gym_Dude_Texto_1:
.string "Lamento decepcionarte, chico, pero\n"
	.string "aunque PEGASO haya vuelto de su\l"
	.string "largo viaje, no luchará con\l"
	.string "nadie. Además, con la política\l"
	.string "actual que centra la LIGA POKÉMON\l"
	.string "en KANTO, los GIMNASIOS de JOHTO\l"
	.string "están obsoletos. Solo estamos aquí\l"
	.string "por respeto a este lugar y lo que\l"
	.string "fue.$"

VioletGym_Gym_Dude_Texto_2:
.string "¡Ha sido increíble!\p"
	.string "Jamás había visto perder a PEGASO.\p"
	.string "Este combate será recordado por\n"
	.string "siempre, ¡no te quepa duda!$"

VioletGym_Gym_Dude_Texto_3:
.string "¡No puedo creerlo!\p"
	.string "¡Un aspirante!\p"
	.string "¡El GIMNASIO volverá a contar con\n"
	.string "un combate de altos vuelos después\l"
	.string "de tanto!\p"
	.string "Déjame aconsejarte, escucha:\n"
	.string "PEGASO lo sabe todo sobre el TIPO\l"
	.string "VOLADOR. Sabe como defenderse de\l"
	.string "sus debilidades, pero aún con\l"
	.string "esas, todo su equipo es débil al\l"
	.string "TIPO ROCA. Podrás hacerle mucho\l"
	.string "daño con esos movimientos, eso si\l"
	.string "logras golpearle antes, porque sus\l"
	.string "aves, elegidas minuciosamente de\l"
	.string "entre todas las regiones en las\l"
	.string "que ha estado, cuentan con una\l"
	.string "VELOCIDAD y ofensiva en general\l"
	.string "que pueden hacerte perder antes de\l"
	.string "que te des cuenta.\p"
	.string "Un buen TIPO ROCA con el CHALECO\n"
	.string "ASALTO, así como POKÉMON TIPO\l"
	.string "ELÉCTRICO muy rápidos, diría que\l"
	.string "son tus mejores opciones.\p"
	.string "¡Buena suerte!$"

Violet_Gym_Conversacion_Pegaso::
lock
applymovement OBJ_EVENT_ID_PLAYER, Violet_Gym_Conversacion_Pegaso_Move_1
waitmovement 0x0
delay 10
msgbox Violet_Gym_Conversacion_Pegaso_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, Violet_Gym_Conversacion_Pegaso_Move_2
waitmovement 0x0
delay 10
msgbox Violet_Gym_Conversacion_Pegaso_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, Violet_Gym_Conversacion_Pegaso_Move_3
waitmovement 0x0
delay 10
msgbox Violet_Gym_Conversacion_Pegaso_Texto_3 MSGBOX_AUTOCLOSE
delay 10
msgbox Violet_Gym_Conversacion_Pegaso_Texto_4 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, Violet_Gym_Conversacion_Pegaso_Move_4
waitmovement 0x0
waitse
delay 20
applymovement 5, Violet_Gym_Conversacion_Pegaso_Move_1
waitmovement 0x0
delay 10
msgbox Violet_Gym_Conversacion_Pegaso_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox Violet_Gym_Conversacion_Pegaso_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox Violet_Gym_Conversacion_Pegaso_Texto_7 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Violet_Gym_Conversacion_Pegaso_Move_1.1
applymovement 5, Violet_Gym_Conversacion_Pegaso_Move_1.2
waitmovement 0x0
setflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY
delay 20
removeobject 5
delay 15
clearflag FLAG_HIDE_PETALBURG_GYM_GREETER
clearflag FLAG_HIDE_ROUTE_128_STEVEN
clearflag FLAG_HOENN_74
clearflag FLAG_HOENN_75
clearflag FLAG_HOENN_76
clearflag FLAG_HOENN_77
clearflag FLAG_HOENN_78
clearflag FLAG_HOENN_79
setflag FLAG_HOENN_90
setflag FLAG_HOENN_91
setflag FLAG_HOENN_92
setflag FLAG_HOENN_93
setflag FLAG_HOENN_94
setflag FLAG_HOENN_95
setflag FLAG_HOENN_96
setflag FLAG_HOENN_97
setflag FLAG_HOENN_98
setflag FLAG_HOENN_99
clearflag FLAG_HOENN_640
clearflag FLAG_HOENN_641
clearflag FLAG_HOENN_642
clearflag FLAG_HOENN_643
clearflag FLAG_HOENN_644
clearflag FLAG_HOENN_645
clearflag FLAG_HOENN_646
clearflag FLAG_HOENN_647
clearflag FLAG_HOENN_648
clearflag FLAG_HOENN_649
clearflag FLAG_NUEVA_165
clearflag FLAG_NUEVA_136
clearflag FLAG_NUEVA_133
clearflag FLAG_NUEVA_137
setvar VAR_UNUSED_0x40F7, 124
release
end

Violet_Gym_Conversacion_Pegaso_Move_1.2:
delay_16
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_down
walk_fast_down
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_down
walk_fast_down
step_end

Violet_Gym_Conversacion_Pegaso_Move_1.1:
walk_up
walk_right
face_down
delay_16
delay_8
face_down
step_end

Violet_Gym_Conversacion_Pegaso_Texto_1:
.string "PEGASO: ¡Vamos, padre!\p"
	.string "¡Quiero saber cómo has llegado al\n"
	.string "punto de poder contar con ese\l"
	.string "POKÉMON en tu equipo!\p"
	.string "No estaba destinado a ser un TIPO\n"
	.string "VOLADOR y, sin embargo, bajo tu\l"
	.string "cuidado ha acabado siendo el\l"
	.string "VOLADOR más puro que conozco.$"

Violet_Gym_Conversacion_Pegaso_Texto_2:
.string "PEGASO.P: No puedes poner en\n"
	.string "palabras un proceso así.\p"
	.string "Necesitas estar ahí para\n"
	.string "experimentarlo por ti mismo.$"

Violet_Gym_Conversacion_Pegaso_Texto_3:
.string "Sabía que en ese ejemplar latía\n"
	.string "la inquebrantable voluntad por\l"
	.string "volar. Ambos compartíamos esa\l"
	.string "pasión por el cielo, y gracias a\l"
	.string "ello pudimos alcanzar juntos cotas\l"
	.string "mayores de lo que hubiéramos\l"
	.string "logrado por separado.$"

Violet_Gym_Conversacion_Pegaso_Texto_4:
.string "Ahora, vuelve a TORRE BELLSPROUT,\n"
	.string "tengo un combate pendiente.$"

Violet_Gym_Conversacion_Pegaso_Texto_5:
.string "PEGASO: ¡Pero, padre!\p"
	.string "¡Yo quiero ver el combate!$"

Violet_Gym_Conversacion_Pegaso_Texto_6:
.string "PEGASO.P: No estás preparado, y no\n"
	.string "discutiré esto contigo.$"

Violet_Gym_Conversacion_Pegaso_Texto_7:
.string "PEGASO: {PAUSE 15}…{PAUSE 15}$"

Violet_Gym_Conversacion_Pegaso_Move_1:
walk_in_place_up
step_end

Violet_Gym_Conversacion_Pegaso_Move_2:
face_up
step_end

Violet_Gym_Conversacion_Pegaso_Move_3:
face_down
step_end

Violet_Gym_Conversacion_Pegaso_Move_4:
emote_exclamation_mark
face_down
step_end

Violet_Gym_Combate_Pegaso::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 124
goto_if_gt Violet_Gym_Combate_Pegaso_2
msgbox Violet_Gym_Combate_Pegaso_Texto_1 MSGBOX_NPC
msgbox Violet_Gym_Combate_Pegaso_Texto_2 MSGBOX_NPC
msgbox Violet_Gym_Combate_Pegaso_Texto_3 MSGBOX_NPC
delay 20
msgbox Violet_Gym_Combate_Pegaso_Texto_4 MSGBOX_NPC
playse 414
delay 40
msgbox Violet_Gym_Combate_Pegaso_Texto_5 MSGBOX_NPC
delay 20
msgbox Violet_Gym_Combate_Pegaso_Texto_6 MSGBOX_NPC
trainerbattle_no_intro TRAINER_PEGASO, Violet_Gym_Combate_Pegaso_Texto_7
msgbox Violet_Gym_Combate_Pegaso_Texto_8 MSGBOX_NPC
msgbox Violet_Gym_Combate_Pegaso_Texto_9 MSGBOX_NPC
delay 10
playfanfare MUS_OBTAIN_BADGE
msgbox Violet_Gym_Combate_Pegaso_Texto_9.1 MSGBOX_DEFAULT
waitfanfare
msgbox Violet_Gym_Combate_Pegaso_Texto_9.2 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
msgbox Violet_Gym_Combate_Pegaso_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_RUFFLET, 25, ITEM_NONE
waitfanfare
msgbox Violet_Gym_Combate_Pegaso_Texto_11 MSGBOX_NPC
delay 10
msgbox Violet_Gym_Combate_Pegaso_Texto_11.1 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM61
msgbox Violet_Gym_Combate_Pegaso_Texto_11.2 MSGBOX_DEFAULT
waitfanfare
msgbox Violet_Gym_Combate_Pegaso_Texto_11.3 MSGBOX_NPC
setflag FLAG_BADGE09_GET
clearflag FLAG_HIDE_BATTLE_FRONTIER_RECEPTION_GATE_SCOTT
setflag FLAG_HIDE_BATTLE_FRONTIER_RECEPTION_GATE_SCOTT
setvar VAR_UNUSED_0x40F7, 125
release
end

Violet_Gym_Combate_Pegaso_Texto_11.3:
.string "Con RESPIRO, los POKÉMON voladores\n"
	.string "podrán recuperar salud durante el\l"
	.string "combate. Durante ese turno perderán\l"
	.string "todas sus resistencias y debilidades\l"
	.string "de su TIPO VOLADOR, úsalo sabiamente\l"
	.string "para aprovecharte de ello.$"

Violet_Gym_Combate_Pegaso_Texto_11.1:
.string "Toma, quiero que también te lleves esto.$"

Violet_Gym_Combate_Pegaso_Texto_11.2:
.string "¡¡{PLAYER} obtuvo la MT61 RESPIRO de\n"
	.string "manos de PEGASO!!$"



Violet_Gym_Combate_Pegaso_2::
lock
faceplayer
msgbox Violet_Gym_Combate_Pegaso_Texto_12 MSGBOX_NPC
release
end

Violet_Gym_Combate_Pegaso_Texto_1:
.string "PEGASO: Debes disculparme, pero me\n"
	.string "tomo muy en serio la educación de\l"
	.string "mi hijo, algún día él será quien\l"
	.string "dirija este GIMNASIO, y quiero que\l"
	.string "esté preparado.$"

Violet_Gym_Combate_Pegaso_Texto_2:
.string "Sin embargo, debe seguir su propio\n"
	.string "camino, conocer las bases del\l"
	.string "entrenamiento POKÉMON y a partir\l"
	.string "de ahí escribir su historia, por\l"
	.string "ello no quiero que vea un combate\l"
	.string "como este, de un nivel tal que más\l"
	.string "que aprendizaje le causará\l"
	.string "confusión, y una lluvia de\l"
	.string "preguntas innecesarias.$"

Violet_Gym_Combate_Pegaso_Texto_3:
.string "Pero hablemos de ti.\p"
	.string "Admito que siento curiosidad por ver\n"
	.string "de lo que eres capaz, no pensé que a\l"
	.string "mi regreso a MALVA encontría a un\l"
	.string "ENTRENADOR como tú.$"

Violet_Gym_Combate_Pegaso_Texto_4:
.string "{PAUSE 15}…{PAUSE 15}$"

Violet_Gym_Combate_Pegaso_Texto_5:
.string "El arte de entrenar y combatir con\n"
	.string "POKÉMON es un privilegio, un\l"
	.string "regalo tanto para ti como para tu\l"
	.string "equipo.$"

Violet_Gym_Combate_Pegaso_Texto_6:
.string "¡Usaré los POKÉMON más fieles que\n"
	.string "me han ido acompañando a lo largo\l"
	.string "de innumerables viajes y regiones!\p"
	.string "¡Muéstrame el grado de excelencia\n"
	.string "que has alcanzado con los tuyos!$"

Violet_Gym_Combate_Pegaso_Texto_7:
.string "Extraordinario{PAUSE 15}…{PAUSE 15}\n"
	.string "Más aún a tu corta edad.$"

Violet_Gym_Combate_Pegaso_Texto_8:
.string "Nadie había podido tumbar a mi\n"
	.string "querido RAPIDASH, solo un\l"
	.string "verdadero ENTRENADOR podría romper\l"
	.string "el vínculo que nos une.$"

Violet_Gym_Combate_Pegaso_Texto_9:
.string "Como ya sabes, actualmente los\n"
	.string "GIMNASIOS de JOHTO no tienen\l"
	.string "validez alguna para la LIGA\l"
	.string "POKÉMON, aunque sí conservamos\l"
	.string "nuestras antiguas medallas.$"

Violet_Gym_Combate_Pegaso_Texto_9.1:
	.string "Toma, aquí tienes la\n"
	.string "MEDALLA CÉFIRO.$"

Violet_Gym_Combate_Pegaso_Texto_9.2:
	.string "Además, te daré algo mucho\n"
	.string "más práctico, quiero que te\l"
	.string "lleves este POKÉMON.$"

Violet_Gym_Combate_Pegaso_Texto_10:
.string "¡¡OBTUVISTE UN RUFFLET AL NV.25!!$"

Violet_Gym_Combate_Pegaso_Texto_11:
.string "La línea evolutiva de RUFFLET es\n"
	.string "considerada la de mayor potencial\l"
	.string "de entre las aves regionales\l"
	.string "conocidas. Así es, los clásicos\l"
	.string "NORMAL-VOLADOR, lo obtuve en uno\l"
	.string "de mis tantos viajes a TESELIA.$"

Violet_Gym_Combate_Pegaso_Texto_12:
.string "Esta vez me quedaré un poco más en\n"
	.string "JOHTO, antes de emprender un nuevo\l"
	.string "viaje. Aprovecharé para ver cómo\l"
	.string "ha cambiado la región donde crecí\l"
	.string "y visitar a mis viejos amigos.$"

