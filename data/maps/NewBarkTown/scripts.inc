NewBarkTown_MapScripts::
	.byte 0

NewBarkTown1::
lock     
faceplayer     
msgbox NewBarkTown_Text_1, MSGBOX_DEFAULT
release     
end

NewBarkTown_Text_1:
.string "Ya hemos construido la base del\n"
.string "pueblo, ahora queda lo más\l"
.string "difícil. Confiamos en que OAK nos\l"
.string "ayude con la IA.$"


NewBarkTown2::
lock     
faceplayer     
msgbox NewBarkTown_Text_2, MSGBOX_DEFAULT
release     
end

NewBarkTown_Text_2:
.string "¡Y en menos de 3 años, todo listo\n"
.string "para iniciar el SHOW DE TRUMAN!\l"
.string "¡Oh, perdón!\l"
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
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 3
delay 20
playse SE_PIN
applymovement 3, NewBarkTown_Encuentro_Elm_Move_2
waitmovement 0x0
msgbox NewBarkTown_Encuentro_Elm_Texto_1 MSGBOX_AUTOCLOSE
applymovement 3, NewBarkTown_Encuentro_Elm_Move_3
waitmovement 0x0
msgbox NewBarkTown_Encuentro_Elm_Texto_2 MSGBOX_AUTOCLOSE
msgbox NewBarkTown_Encuentro_Elm_Texto_3 MSGBOX_AUTOCLOSE
applymovement 3, NewBarkTown_Encuentro_Elm_Move_4
waitmovement 0x0
msgbox NewBarkTown_Encuentro_Elm_Texto_4 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 3, NewBarkTown_Encuentro_Elm_Move_2
waitmovement 0x0
delay 10
applymovement 3, NewBarkTown_Encuentro_Elm_Move_5
waitmovement 0x0
msgbox NewBarkTown_Encuentro_Elm_Texto_5 MSGBOX_AUTOCLOSE
applymovement 3, NewBarkTown_Encuentro_Elm_Move_4
waitmovement 0x0
msgbox NewBarkTown_Encuentro_Elm_Texto_6 MSGBOX_AUTOCLOSE
applymovement 3, NewBarkTown_Encuentro_Elm_Move_6
waitmovement 0x0
playse SE_DOOR
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
removeobject 3
setvar VAR_UNUSED_0x40F7, 155
release
end

NewBarkTown_Encuentro_Elm_Texto_1:
.string "ELM: ¿Tú también, {PLAYER}?$"

NewBarkTown_Encuentro_Elm_Texto_2:
.string "Apenas han abierto las fronteras y\n"
	.string "esta zona se ha llenado de\l"
	.string "curiosos buscando ser los primeros\l"
	.string "en visitar unas rutas 26 y 27 que\l"
	.string "se han mantenido lejos del\l"
	.string "contacto humano por años,\l"
	.string "exceptuando los pocos que ya\l"
	.string "vivían allí...$"

NewBarkTown_Encuentro_Elm_Texto_3:
.string "Aunque tú eres diferente, supongo\n"
	.string "que no vas a explorar RUTA 26 o\l"
	.string "27, sino hacia el MONTE PLATEADO,\l"
	.string "¿me equivoco?$"

NewBarkTown_Encuentro_Elm_Texto_4:
.string "Debo admitir que me has\n"
	.string "sorprendido, 5 LÍDERES de JOHTO\l"
	.string "ya...\l"
	.string "Cuando GIOVANNI me habló de ti,\l"
	.string "creí que estaba exagerando. Ahora\l"
	.string "veo que no hay alguien mejor que\l"
	.string "tú para recorrer JOHTO y enfrentar\l"
	.string "a sus LÍDERES del pasado, antes de\l"
	.string "que sus legados se pierdan para\l"
	.string "siempre.$"

NewBarkTown_Encuentro_Elm_Texto_5:
.string "Ah, sí, esta zona será uno de los\n"
	.string "campos de investigación que\l"
	.string "montaremos y que será financiada\l"
	.string "con los recursos de los que\l"
	.string "GIOVANNI habló en la reunión de\l"
	.string "TRIGAL. Ahora mismo, vuestro LÍDER\l"
	.string "es reacio a que esta investigación\l"
	.string "siga adelante, pero OAK, que\l"
	.string "también está muy interesado en\l"
	.string "ella, y yo, acabaremos\l"
	.string "convenciéndolo, ya verás. Será muy\l"
	.string "divertido ver todo en acción si\l"
	.string "finalmente se da, como un juego,\l"
	.string "pero en la vida real.$"

NewBarkTown_Encuentro_Elm_Texto_6:
.string "No te entretengo más. Si quieres\n"
	.string "algo de mi, estaré en el\l"
	.string "laboratorio. Puedes curar a tus\l"
	.string "POKÉMON allí si lo deseas. Estaré\l"
	.string "siguiendo tus pasos muy de cerca.\l"
	.string "Si de verdad logras enfrentar a\l"
	.string "los LÍDERES que asistieron a la\l"
	.string "reunión de TRIGAL, no puedo\l"
	.string "esperar a ver los resultados que\l"
	.string "arrojen sus mejores POKÉMON.$"

NewBarkTown_Encuentro_Elm_Move_1:
walk_in_place_right
step_end

NewBarkTown_Encuentro_Elm_Move_1.1:
walk_up
walk_in_place_right
step_end

NewBarkTown_Encuentro_Elm_Move_2:
emote_exclamation_mark
face_left
step_end

NewBarkTown_Encuentro_Elm_Move_3:
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
walk_in_place_right
walk_in_place_left
step_end

NewBarkTown_Encuentro_Elm_Move_6:
walk_right
walk_right
walk_right
walk_right
walk_up
step_end
