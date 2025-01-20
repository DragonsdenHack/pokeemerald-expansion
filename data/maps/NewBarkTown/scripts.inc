NewBarkTown_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, NewBarkTown_OnTransition
	.byte 0

NewBarkTown_OnTransition::
setflag FLAG_VISITED_NEW_BARK_TOWN
end

NewBarkTown1::
lock     
faceplayer     
msgbox NewBarkTown_Text_1, MSGBOX_DEFAULT
release     
end

NewBarkTown_Text_1:
.string "Ya hemos construido la base del\n"
.string "pueblo, ahora queda lo más\l"
.string "difícil. Confiamos en que OAK\l"
.string "nos ayude con la IA.$"


NewBarkTown2::
lock     
faceplayer     
msgbox NewBarkTown_Text_2, MSGBOX_DEFAULT
release     
end

NewBarkTown_Text_2:
.string "¡Y en menos de 3 años, todo listo\n"
.string "para iniciar el SHOW DE TRUMAN!\p"
.string "¡Oh, perdón!\p"
.string "¡No debí decir eso!$"

NewBarkTown3::
end

NewBarkTown_Encuentro_Elm_Arriba::
lock
applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_Encuentro_Elm_Move_1
waitmovement 0x0
goto NewBarkTown_Encuentro_Elm

NewBarkTown_Encuentro_Elm_Abajo::
lock
applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_Encuentro_Elm_Move_1.1
waitmovement 0x0
goto NewBarkTown_Encuentro_Elm

NewBarkTown_Encuentro_Elm::
playse SE_DOOR
opendoor 9, 5
waitdooranim
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 3
applymovement 3, VerdanturfTown_Move_9
waitmovement 0x0
closedoor 9, 5
waitdooranim
delay 20
playse SE_PIN
applymovement 3, NewBarkTown_Encuentro_Elm_Move_2
waitmovement 0x0
waitse
delay 10
msgbox NewBarkTown_Encuentro_Elm_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, NewBarkTown_Encuentro_Elm_Move_3
waitmovement 0x0
delay 10
msgbox NewBarkTown_Encuentro_Elm_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox NewBarkTown_Encuentro_Elm_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, NewBarkTown_Encuentro_Elm_Move_4
waitmovement 0x0
delay 10
msgbox NewBarkTown_Encuentro_Elm_Texto_4 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 3, NewBarkTown_Encuentro_Elm_Move_2
waitmovement 0x0
waitse
delay 10
applymovement 3, NewBarkTown_Encuentro_Elm_Move_5
waitmovement 0x0
msgbox NewBarkTown_Encuentro_Elm_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, NewBarkTown_Encuentro_Elm_Move_4
waitmovement 0x0
delay 10
msgbox NewBarkTown_Encuentro_Elm_Texto_6 MSGBOX_AUTOCLOSE
applymovement 3, NewBarkTown_Encuentro_Elm_Move_6
waitmovement 0x0
playse SE_DOOR
opendoor 9, 5
waitdooranim
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
removeobject 3
applymovement 3, VerdanturfTown_Move_9.9
waitmovement 0x0
closedoor 9, 5
waitdooranim
setvar VAR_UNUSED_0x40F7, 155
release
end

VerdanturfTown_Move_9.9:
walk_up
step_end

NewBarkTown_Encuentro_Elm_Texto_1:
.string "ELM: ¿Tú también, {PLAYER}?$"

NewBarkTown_Encuentro_Elm_Texto_2:
.string "Apenas han abierto las fronteras y\n"
	.string "esta zona se ha llenado de\l"
	.string "curiosos, buscando ser los primeros\l"
	.string "en visitar las rutas 26 y 27.\p"
	.string "Ambas se han mantenido lejos del\n"
	.string "contacto humano por años,\l"
	.string "exceptuando los pocos que\l"
	.string "ya vivían allí{PAUSE 5}…{PAUSE 5}$"

NewBarkTown_Encuentro_Elm_Texto_3:
.string "Aunque tú eres diferente, supongo\n"
	.string "que no vas a explorar RUTA 26 o\l"
	.string "27, sino hacia el MONTE PLATEADO,\l"
	.string "¿me equivoco?$"

NewBarkTown_Encuentro_Elm_Texto_4:
.string "Debo admitir que me has sorprendido,\n"
	.string "5 LÍDERES de JOHTO ya…{PAUSE 25}\p"
	.string "Cuando GIOVANNI me habló de ti,\n"
	.string "creí que estaba exagerando. Ahora\l"
	.string "veo que no hay alguien mejor que\l"
	.string "tú para recorrer JOHTO y enfrentar\l"
	.string "a sus LÍDERES del pasado, antes de\l"
	.string "que sus legados se pierdan para\l"
	.string "siempre.$"

NewBarkTown_Encuentro_Elm_Texto_5:
.string "¡Ah, sí! Esta zona será uno de los\n"
	.string "campos de investigación que\l"
	.string "montaremos, y que será financiada\l"
	.string "con los recursos de los que\l"
	.string "GIOVANNI habló en la reunión de\l"
	.string "TRIGAL. Ahora mismo, vuestro LÍDER\l"
	.string "es reacio a que esta investigación\l"
	.string "siga adelante, pero OAK, que también\l"
	.string "está muy interesado en ella, y yo,\l"
	.string "acabaremos convenciéndole, ya verás.\p"
	.string "Será muy divertido ver todo en acción,\n"
	.string "si finalmente se da, aunque para eso\l"
	.string "aún quedan unos dos años, algo menos.$"

NewBarkTown_Encuentro_Elm_Texto_6:
.string "No te entretengo más. Si quieres\n"
	.string "algo de mí, estaré en el\l"
	.string "laboratorio. Puedes curar a tus\l"
	.string "POKÉMON allí si lo deseas.\l"
	.string "Seguiré tus pasos muy de cerca.\p"
	.string "Si de verdad logras enfrentar a\n"
	.string "los LÍDERES que asistieron a la\l"
	.string "reunión de TRIGAL, no puedo\l"
	.string "esperar a ver los resultados que\l"
	.string "arrojen sus mejores POKÉMON.$"

NewBarkTown_Encuentro_Elm_Move_1:
walk_in_place_right
step_end

NewBarkTown_Encuentro_Elm_Move_1.1:
walk_up
delay_16
walk_in_place_right
step_end

NewBarkTown_Encuentro_Elm_Move_2:
emote_exclamation_mark
face_left
step_end

NewBarkTown_Encuentro_Elm_Move_3:
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
step_end

NewBarkTown_Encuentro_Elm_Move_4:
walk_in_place_left
step_end

NewBarkTown_Encuentro_Elm_Move_5:
delay_8
walk_in_place_right
delay_16
walk_in_place_left
delay_8
step_end

NewBarkTown_Encuentro_Elm_Move_6:
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
step_end

NewBarkTown_Barrera::
compare VAR_UNUSED_0x40F8, 56
goto_if_gt NewBarkTown_Barrera_2
applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_Barrera_Move_1
waitmovement 0x0
msgbox NewBarkTown_Barrera_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_Barrera_Move_2
waitmovement 0x0
release
end

NewBarkTown_Barrera_2::
release
end

NewBarkTown_Barrera_Texto_1:
.string "La puerta está cerrada.$"

NewBarkTown_Barrera_Move_1:
walk_in_place_up
step_end

NewBarkTown_Barrera_Move_2:
walk_down
step_end

NewBarkTown_Cartel_Vacio::
lock
msgbox NewBarkTown_Cartel_Vacio_Texto_1 MSGBOX_AUTOCLOSE
release
end

NewBarkTown_Cartel_Vacio_Texto_1:
.string "-No hay nada escrito aquí.-$"

NewBarkTown_Cartel::
lock
compare VAR_UNUSED_0x40F8, 56
goto_if_lt NewBarkTown_Cartel_Vacio
msgbox NewBarkTown_Cartel_Texto_1 MSGBOX_SIGN
release
end

NewBarkTown_Cartel_Texto_1:
	.string "PUEBLO PRIMAVERA\p"
	.string "El pueblo donde soplan\n"
	.string "vientos de un nuevo amanecer.$"

NewBarkTown_NPC_Primer::
lock
faceplayer
msgbox NewBarkTown_NPC_Primer_Texto_1 MSGBOX_AUTOCLOSE
release
end


NewBarkTown_NPC_Primer_Texto_1:
	.string "El PROFESOR ELM parece muy interesado\n"
	.string "en el chico recién llegado. ¡Le ha dado\l"
	.string "hasta un POKEGEAR!$"

NewBarkTown_NPC_Segundo::
lock
faceplayer
msgbox NewBarkTown_NPC_Segundo_Texto_1 MSGBOX_AUTOCLOSE
release
end


NewBarkTown_NPC_Segundo_Texto_1:
	.string "Dicen que el PROFESOR ELM ha\n"
	.string "descubierto nuevos POKÉMON.$"

NewBarkTown_Cartel_Oro::
lock
compare VAR_UNUSED_0x40F8, 56
goto_if_lt NewBarkTown_Cartel_Vacio
msgbox NewBarkTown_Cartel_Oro_Texto_1 MSGBOX_SIGN
release
end

NewBarkTown_Cartel_Oro_Texto_1:
.string "Casa de ORO.$"

NewBarkTown_Cartel_Elm::
lock
compare VAR_UNUSED_0x40F8, 56
goto_if_lt NewBarkTown_Cartel_Vacio
msgbox NewBarkTown_Cartel_Elm_Texto_1 MSGBOX_SIGN
release
end

NewBarkTown_Cartel_Elm_Texto_1:
.string "Casa de ELM.$"

NewBarkTown_Cartel_Laboratorio::
lock
compare VAR_UNUSED_0x40F8, 56
goto_if_lt NewBarkTown_Cartel_Vacio
msgbox NewBarkTown_Cartel_Laboratorio_Texto_1 MSGBOX_SIGN
release
end

NewBarkTown_Cartel_Laboratorio_Texto_1:
.string "LABORATORIO del PROF.ELM.$"

