Route52_MazeP1_MapScripts::
	.byte 0

Route52MazeP1_1::
end



Route52MazeP1_2::
lock     
faceplayer     
msgbox Route52_MazeP1_Text_2, MSGBOX_DEFAULT
release     
end

Route52_MazeP1_Text_2:
	.string "See, if everyone contributes a little,\n"
	.string "we can all reach an agreement, right?$"



Route52MazeP1_3::
end



Route52MazeP1_4::
lock     
faceplayer     
msgbox Route52_MazeP1_Text_4, MSGBOX_DEFAULT
release     
end

Route52_MazeP1_Text_4:
	.string "See, if everyone contributes a little,\n"
	.string "we can all reach an agreement, right?$"



Route52MazeP1_5::
end



Route52MazeP1_6:
end



Route52MazeP1_7::
end



Route52MazeP1_8::
end



Route52MazeP1_9:
end



Route52MazeP1_12::
lock     
faceplayer     
msgbox Route52_MazeP1_Text_12, MSGBOX_DEFAULT
release     
end

Route52_MazeP1_Text_12:
	.string "See, if everyone contributes a little,\n"
	.string "we can all reach an agreement, right?$"

Route52_MazeP1_Combate_Ladron::
applymovement OBJ_EVENT_ID_PLAYER, Route52_MazeP1_Combate_Ladron_Move_1
waitmovement 0x0
msgbox Route52_MazeP1_Combate_Ladron_Texto_1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 11, Route52_MazeP1_Combate_Ladron_Move_2
waitmovement 0x0
waitse
delay 10
applymovement 11, Route52_MazeP1_Combate_Ladron_Move_3
waitmovement 0x0
msgbox Route52_MazeP1_Combate_Ladron_Texto_2 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 11, Route52_MazeP1_Combate_Ladron_Move_4
waitmovement 0x0
waitse
delay 10
msgbox Route52_MazeP1_Combate_Ladron_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox Route52_MazeP1_Combate_Ladron_Texto_4 MSGBOX_AUTOCLOSE
applymovement 11, Route52_MazeP1_Combate_Ladron_Move_5
waitmovement 0x0
trainerbattle_no_intro TRAINER_LADRON_5, Route52_MazeP1_Combate_Ladron_Texto_5
msgbox Route52_MazeP1_Combate_Ladron_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 11, Route52_MazeP1_Combate_Ladron_Move_1
waitmovement 0x0
delay 10
msgbox Route52_MazeP1_Combate_Ladron_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 11, Route52_MazeP1_Combate_Ladron_Move_7
waitmovement 0x0
delay 10
setflag FLAG_HIDE_SKY_PILLAR_WALLACE
removeobject 11
setvar VAR_UNUSED_0x4091, 7
release
end

Route52_MazeP1_Combate_Ladron_Texto_1:
	.string "These programs are always the same. I\n"
	.string "reckon I'll spend some time in the pool…$"

Route52_MazeP1_Combate_Ladron_Texto_2:
.string "But what?!\n"
	.string "Who are you?$"

Route52_MazeP1_Combate_Ladron_Texto_3:
	.string "Hold on! You that ROCKET, right? The\n"
	.string "one who tried to stop us just before we\l"
	.string "moved onto JOHTO. Seems like you're very\l"
	.string "different since then, but we also aren't\l"
	.string "the same.$"

Route52_MazeP1_Combate_Ladron_Texto_4:
	.string "You won't escape this time. Several of\n"
	.string "the scientists we've hired have\l"
	.string "succeeded in developing technology\l"
	.string "that boosts the power of POKÉMON. Now\l"
	.string "you'll pay for what you did in KANTO!$"

Route52_MazeP1_Combate_Ladron_Texto_5:
.string "Once again!?$"

Route52_MazeP1_Combate_Ladron_Texto_6:
.string "Crap…\n"
	.string "I should have waited for my partners to\l"
	.string "attack all at once, but with those two,\l"
	.string "it's more than enough.$"

Route52_MazeP1_Combate_Ladron_Texto_7:
	.string "You won't ruin the business this time.$"

Route52_MazeP1_Combate_Ladron_Move_1:
walk_in_place_right
step_end

Route52_MazeP1_Combate_Ladron_Move_2:
emote_exclamation_mark
step_end

Route52_MazeP1_Combate_Ladron_Move_3:
face_left
step_end

Route52_MazeP1_Combate_Ladron_Move_4:
walk_fast_up
delay_8
walk_fast_left
step_end

Route52_MazeP1_Combate_Ladron_Move_5:
walk_left
walk_left
step_end


Route52_MazeP1_Combate_Ladron_Move_6:
face_right
step_end

Route52_MazeP1_Combate_Ladron_Move_7:
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Route52_MazeP1_Combates_Finales::
lock
applymovement OBJ_EVENT_ID_PLAYER, Route52_MazeP1_Combates_Finales_Move_1
waitmovement 0x0
msgbox Route52_MazeP1_Combates_Finales_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 12, Route52_MazeP1_Combates_Finales_Move_2
waitmovement 0x0
delay 10
msgbox Route52_MazeP1_Combates_Finales_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 12, Route52_MazeP1_Combates_Finales_Move_3
applymovement OBJ_EVENT_ID_PLAYER, Route52_MazeP1_Combates_Finales_Move_4
waitmovement 0x0
delay 10
msgbox Route52_MazeP1_Combates_Finales_Texto_3 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route52_MazeP1_Combates_Finales_Move_5
waitmovement 0x0
waitse
delay 10
msgbox Route52_MazeP1_Combates_Finales_Texto_3.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route52_MazeP1_Combates_Finales_Texto_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 12, Route52_MazeP1_Combates_Finales_Move_1
waitmovement 0x0
msgbox Route52_MazeP1_Combates_Finales_Texto_5 MSGBOX_AUTOCLOSE
applymovement 12, Route52_MazeP1_Combates_Finales_Move_3
waitmovement 0x0
msgbox Route52_MazeP1_Combates_Finales_Texto_6 MSGBOX_AUTOCLOSE
delay 20
msgbox Route52_MazeP1_Combates_Finales_Texto_4 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 12, Route52_MazeP1_Combates_Finales_Move_5
waitmovement 0x0
waitse
delay 15
playse MUS_RG_ENCOUNTER_ROCKET
msgbox Route52_MazeP1_Combates_Finales_Texto_7 MSGBOX_AUTOCLOSE
applymovement 12, Route52_MazeP1_Combates_Finales_Move_6
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Route52_MazeP1_Combates_Finales_Move_1
applymovement 4, Route52_MazeP1_Combates_Finales_Move_7
waitmovement 0x0
msgbox Route52_MazeP1_Combates_Finales_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LADRON_6, Route52_MazeP1_Combates_Finales_Texto_9
applymovement OBJ_EVENT_ID_PLAYER, Route52_MazeP1_Combates_Finales_Move_8
waitmovement 0x0
msgbox Route52_MazeP1_Combates_Finales_Texto_10 MSGBOX_AUTOCLOSE
applymovement 12, Route52_MazeP1_Combates_Finales_Move_9
waitmovement 0x0
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox Route52_MazeP1_Combates_Finales_Texto_11 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LADRON_4, Route52_MazeP1_Combates_Finales_Texto_12
applymovement OBJ_EVENT_ID_PLAYER, Route52_MazeP1_Combates_Finales_Move_8
waitmovement 0x0
playse SE_PIN
applymovement 12, Route52_MazeP1_Combates_Finales_Move_5
waitmovement 0x0
waitse
delay 10
msgbox Route52_MazeP1_Combates_Finales_Texto_13 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 12, Route52_MazeP1_Combates_Finales_Move_10
waitmovement 0x0
waitse
delay 10
msgbox Route52_MazeP1_Combates_Finales_Texto_14 MSGBOX_AUTOCLOSE
delay 20
msgbox Route52_MazeP1_Combates_Finales_Texto_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 12, Route52_MazeP1_Combates_Finales_Move_11
waitmovement 0x0
msgbox Route52_MazeP1_Combates_Finales_Texto_15 MSGBOX_AUTOCLOSE
applymovement 12, Route52_MazeP1_Combates_Finales_Move_9
waitmovement 0x0
msgbox Route52_MazeP1_Combates_Finales_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 12, Route52_MazeP1_Combates_Finales_Move_9.1
waitmovement 0x0
msgbox Route52_MazeP1_Combates_Finales_Texto_16.1 MSGBOX_AUTOCLOSE
delay 10
setvar VAR_UNUSED_0x4091, 8
msgbox Route52_MazeP1_Combates_Finales_Texto_17 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route52_MazeP1_Combates_Finales_No
showmoneybox 0, 0
delay 15
msgbox Route52_MazeP1_Combates_Finales_Texto_18 MSGBOX_AUTOCLOSE
applymovement 12, Route52_MazeP1_Combates_Finales_Move_3
waitmovement 0x0
delay 15
playse SE_SHOP
addmoney 2000000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox Route52_MazeP1_Combates_Finales_Texto_19 MSGBOX_DEFAULT
waitfanfare
delay 50
hidemoneybox
msgbox Route52_MazeP1_Combates_Finales_Texto_20 MSGBOX_AUTOCLOSE
applymovement 12, Route52_MazeP1_Combates_Finales_Move_12
applymovement 4, Route52_MazeP1_Combates_Finales_Move_13
waitmovement 0x0
release
end

Route52_MazeP1_Combates_Finales_No::
msgbox Route52_MazeP1_Combates_Finales_Texto_21 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 12, Route52_MazeP1_Combates_Finales_Move_10
waitmovement 0x0
waitse
delay 10
msgbox Route52_MazeP1_Combates_Finales_Texto_21.1 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
fadescreen 1
delay 20
removeobject 12
removeobject 4
removeobject 2
removeobject 3
removeobject 8
removeobject 9
removeobject 5
removeobject 1
fadescreen 0
release
end

Route52_MazeP1_Combates_Finales_Move_9.1:
delay_8
face_left
delay_16
delay_8
face_right
delay_16
delay_8
face_down
delay_8
step_end


Route52_MazeP1_Combates_Finales_Texto_1:
.string "So, CHIEF ADMIN. {PLAYER}, aren't you?$"

Route52_MazeP1_Combates_Finales_Texto_2:
.string "Vamos, pasa. Después de todo, los\n"
	.string "dos somos hombres de negocios.\p"
	.string "No me guardas rencor por esos\n"
	.string "500¥ que te estafé, ahora que\l"
	.string "tienes millones, ¿verdad?$"

Route52_MazeP1_Combates_Finales_Texto_3:
.string "Debo darte las gracias, {PLAYER}.$"

Route52_MazeP1_Combates_Finales_Texto_3.1:
	.string "Sin todos los esfuerzos del TEAM\n"
	.string "ROCKET por modernizar JOHTO en\l"
	.string "estos últimos meses, no hubiéramos\l"
	.string "tenido todo este éxito.\p"
	.string "No te imaginas la cantidad de\n"
	.string "POKÉMON raros que hemos vendido\l"
	.string "a esos EJECUTIVOS de TRIGAL.$"

Route52_MazeP1_Combates_Finales_Texto_4:
.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

Route52_MazeP1_Combates_Finales_Texto_5:
.string "¿Cómo sé que el TEAM ROCKET\n"
	.string "está detrás de todo?\p"
	.string "Yo también tengo mis contactos, y\n"
	.string "también contrato a científicos que\l"
	.string "trabajaron para vosotros, varios\l"
	.string "de ellos nos han introducido en la\l"
	.string "MEGA-EVOLUCIÓN.\p"
	.string "Cuando tienes dinero, puedes comprar\n"
	.string "cualquier cosa, incluso lealtad.\p"
	.string "Tú lo sabes bien.$"

Route52_MazeP1_Combates_Finales_Texto_6:
.string "Ahora es cuando ambos hacemos las\n"
	.string "paces, a los dos nos va bien,\l"
	.string "{PLAYER}. No hay necesidad de\l"
	.string "confrontar nuestros intereses.\p"
	.string "¿Verdad?$"

Route52_MazeP1_Combates_Finales_Texto_7:
.string "¿No negocias con estafadores?\p"
	.string "¿Por quién nos tomas?\p"
	.string "¡Ahora aprenderás modales!\p"
	.string "¡No sigues siendo más que un\n"
	.string "vulgar ROCKET, por mucho que\l"
	.string "ahora vayas trajeado!$"

Route52_MazeP1_Combates_Finales_Texto_8:
.string "Respuesta equivocada, {PLAYER}.\p"
	.string "¡Ahora accederás a nuestras\n"
	.string "condiciones por las malas!$"

Route52_MazeP1_Combates_Finales_Texto_9:
.string "We already considered this could happen.$"

Route52_MazeP1_Combates_Finales_Texto_10:
	.string "Well done, {PLAYER}. I see you haven't\n"
	.string "lost your skills, but it's us who have\l"
	.string "improved the most, even if it's just by\l"
	.string "throwing money around.$"

Route52_MazeP1_Combates_Finales_Texto_11:
	.string "It's time for the truth. I politely\n"
	.string "offered to negotiate terms for the\l"
	.string "coexistence of our two companies. By\l"
	.string "refusing, you'll now accept any\l"
	.string "condition after I'm done with your\l"
	.string "team!$"

Route52_MazeP1_Combates_Finales_Texto_12:
	.string "How is this possible? You can still\n"
	.string "defeat us all at once?!$"

Route52_MazeP1_Combates_Finales_Texto_13:
.string "NO!$"

Route52_MazeP1_Combates_Finales_Texto_14:
.string "¡Nos ha costado millones reproducir\n"
	.string "la MEGA-EVOLUCIÓN!\p"
	.string "¿Cómo no es suficiente para\n"
	.string "tumbarte después de 2 combates?$"

Route52_MazeP1_Combates_Finales_Texto_15:
.string "Muy bien, {PLAYER}. Tú ganas.$"

Route52_MazeP1_Combates_Finales_Texto_16:
.string "Entiendo que el TEAM ROCKET quiera\n"
	.string "tener el monopolio y control\l"
	.string "absoluto de las dos regiones.$"

Route52_MazeP1_Combates_Finales_Texto_16.1:
	.string "No me opondré, es por ello que\n"
	.string "mi oferta es la siguiente:\p"
	.string "2.000.000¥ en efectivo para ti, en\n"
	.string "este mismo momento, y el 10% de\l"
	.string "nuestros beneficios futuros irán\l"
	.string "para vuestra sucursal en JOHTO.$"

Route52_MazeP1_Combates_Finales_Texto_17:
.string "Do you accept the deal?$"

Route52_MazeP1_Combates_Finales_Texto_18:
.string "¡Bien!\p"
	.string "¿¡Ves que si cada uno pone un poco\n"
	.string "de su parte, puede llegarse a un\l"
	.string "buen acuerdo?!\p"
	.string "¡Aquí tienes!$"

Route52_MazeP1_Combates_Finales_Texto_19:
	.string "¡Te has embolsado 2.000.000¥!$"

Route52_MazeP1_Combates_Finales_Texto_20:
.string "Ahora, si nos disculpas, tenemos\n"
	.string "que seguir llevando el negocio.\p"
	.string "¿O no querrás perder potenciales\n"
	.string "beneficios para ti también?$"

Route52_MazeP1_Combates_Finales_Texto_21:
.string "Así que no cedes ni un ápice, ¿eh?\p"
	.string "Está bien, nos iremos.$"

Route52_MazeP1_Combates_Finales_Texto_21.1:
	.string "¡Pero recuerda esto, {PLAYER}!\p"
	.string "Con tus acciones, el TEAM ROCKET\n"
	.string "acaba de ganar un enemigo.\p"
	.string "¡Me encargaré de que todos sepan\n"
	.string "quienes son los que manejan los\l"
	.string "hilos desde las sombras!$"

Route52_MazeP1_Combates_Finales_Move_1:
face_right
step_end

Route52_MazeP1_Combates_Finales_Move_2:
face_left
step_end

Route52_MazeP1_Combates_Finales_Move_3:
walk_in_place_down
step_end

Route52_MazeP1_Combates_Finales_Move_4:
walk_slow_down
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_down
walk_slow_right
walk_in_place_up
step_end

Route52_MazeP1_Combates_Finales_Move_5:
emote_exclamation_mark
step_end

Route52_MazeP1_Combates_Finales_Move_6:
walk_in_place_right
delay_16
face_down
step_end

Route52_MazeP1_Combates_Finales_Move_7:
walk_left
step_end

Route52_MazeP1_Combates_Finales_Move_8:
face_up
step_end

Route52_MazeP1_Combates_Finales_Move_9:
walk_down
step_end

Route52_MazeP1_Combates_Finales_Move_10:
lock_facing_direction
walk_fast_up
unlock_facing_direction
step_end

Route52_MazeP1_Combates_Finales_Move_11:
face_down
step_end

Route52_MazeP1_Combates_Finales_Move_12:
walk_up
delay_16
walk_in_place_down
step_end

Route52_MazeP1_Combates_Finales_Move_13:
walk_right
delay_16
walk_in_place_left
step_end

Route52_MazeP1_Combate_Primer_Cientifico::
applymovement OBJ_EVENT_ID_PLAYER, Route52_MazeP1_Combate_Primer_Cientifico_Move_1
waitmovement 0x0
msgbox Route52_MazeP1_Combate_Primer_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 3, Route52_MazeP1_Combate_Primer_Cientifico_Move_2
waitmovement 0x0
waitse
delay 10
applymovement 3, Route52_MazeP1_Combate_Primer_Cientifico_Move_3
waitmovement 0x0
playse MUS_RG_ENCOUNTER_ROCKET
msgbox Route52_MazeP1_Combate_Primer_Cientifico_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, Route52_MazeP1_Combate_Primer_Cientifico_Move_4
waitmovement 0x0
delay 10
trainerbattle_no_intro TRAINER_STEVEN, Route52_MazeP1_Combate_Primer_Cientifico_Texto_3
setvar VAR_UNUSED_0x4091, 5
release
end

Route52_MazeP1_Combate_Primer_Cientifico_Texto_1:
.string "Okay…\n"
	.string "With this machine, we'll be able to\l"
	.string "continue laundering money easier…$"

Route52_MazeP1_Combate_Primer_Cientifico_Texto_2:
	.string "Who are you? I already handle the\n"
	.string "audits for this place. We don't need\l"
	.string "anyone in a suit to do them.$"

Route52_MazeP1_Combate_Primer_Cientifico_Texto_3:
.string "What a mess!$"


Route52_MazeP1_Combate_Primer_Cientifico_Move_1:
face_left
step_end

Route52_MazeP1_Combate_Primer_Cientifico_Move_2:
emote_exclamation_mark
step_end

Route52_MazeP1_Combate_Primer_Cientifico_Move_3:
face_right
step_end

Route52_MazeP1_Combate_Primer_Cientifico_Move_4:
walk_right
walk_right
walk_right
step_end

Route52_Maze_Maquina_1::
lock
msgbox Route52_Maze_Combate_1_Texto_7 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route52_Maze_Combate_1_2_No
delay 40
playse SE_PC_ON
delay 40
playse SE_WALL_HIT
setmetatile 12, 7, 0x2A8, FALSE
special DrawWholeMapView
delay 20
release
end


Route52_MazeP1_Combate_Segundo_Cientifico::
applymovement OBJ_EVENT_ID_PLAYER, Route52_MazeP1_Combate_Segundo_Cientifico_Move_1
waitmovement 0x0
msgbox Route52_MazeP1_Combate_Segundo_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route52_MazeP1_Combate_Segundo_Cientifico_Move_2
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 8, Route52_MazeP1_Combate_Segundo_Cientifico_Move_3
waitmovement 0x0
waitse
delay 10
applymovement 8, Route52_MazeP1_Combate_Segundo_Cientifico_Move_4
waitmovement 0x0
playse MUS_RG_ENCOUNTER_ROCKET
msgbox Route52_MazeP1_Combate_Segundo_Cientifico_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Route52_MazeP1_Combate_Segundo_Cientifico_Move_5
waitmovement 0x0
delay 10
trainerbattle_no_intro TRAINER_ANABEL, Route52_MazeP1_Combate_Segundo_Cientifico_Texto_3
setvar VAR_UNUSED_0x4091, 6
release
end

Route52_MazeP1_Combate_Segundo_Cientifico_Move_1:
walk_in_place_down
step_end

Route52_MazeP1_Combate_Segundo_Cientifico_Move_2:
walk_left
walk_down
step_end

Route52_MazeP1_Combate_Segundo_Cientifico_Move_3:
emote_exclamation_mark
step_end

Route52_MazeP1_Combate_Segundo_Cientifico_Move_4:
face_up
step_end

Route52_MazeP1_Combate_Segundo_Cientifico_Move_5:
walk_up
step_end


Route52_MazeP1_Combate_Segundo_Cientifico_Texto_1:
	.string "A ¥4,000,000 transaction for the\n"
	.string "CHARMANDER, done.\p"
	.string "This is going smoothly…$"

Route52_MazeP1_Combate_Segundo_Cientifico_Texto_2:
	.string "How did you manage to reach this point?\n"
	.string "Anyone who threatens our business will\l"
	.string "be erased from existence.$"

Route52_MazeP1_Combate_Segundo_Cientifico_Texto_3:
.string "No, wait!$"

Route52_Maze_Maquina_2::
lock
msgbox Route52_Maze_Combate_1_Texto_7 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route52_Maze_Combate_1_2_No
delay 40
playse SE_PC_ON
delay 40
playse SE_WALL_HIT
setmetatile 8, 3, 0x2A1, FALSE
special DrawWholeMapView
delay 20
release
end

Route52_Maze_Dialogo_Primer_Cientifico::
lock
faceplayer
compare VAR_UNUSED_0x4091, 7
goto_if_gt Route52_Maze_Dialogo_Primer_Cientifico_2
msgbox Route52_Maze_Dialogo_Primer_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Dialogo_Primer_Cientifico_2::
msgbox Route52_Maze_Dialogo_Primer_Cientifico_Texto_2 MSGBOX_AUTOCLOSE
release
end


Route52_Maze_Dialogo_Primer_Cientifico_Texto_1:
	.string "We only privately satisfy a demand from\n"
	.string "the population. Do you have a problem\l"
	.string "with that?$"

Route52_Maze_Dialogo_Primer_Cientifico_Texto_2:
	.string "Everyone has a price, even you!$"


Route52_Maze_Dialogo_Segundo_Cientifico::
lock
faceplayer
compare VAR_UNUSED_0x4091, 7
goto_if_gt Route52_Maze_Dialogo_Segundo_Cientifico_2
msgbox Route52_Maze_Dialogo_Segundo_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Dialogo_Segundo_Cientifico_2::
msgbox Route52_Maze_Dialogo_Segundo_Cientifico_Texto_2 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Dialogo_Segundo_Cientifico_Texto_1:
	.string "This place doesn't exist on the paper,\n"
	.string "but the income it generates certainly\l"
	.string "is!$"

Route52_Maze_Dialogo_Segundo_Cientifico_Texto_2:
	.string "So you're now one of our primary\n"
	.string "shareholders. I guess that means I'm\l"
	.string "working for you as well.$"


Route52_Maze_Dialogo_Primer_Trabajador::
lock
faceplayer
compare VAR_UNUSED_0x4091, 7
goto_if_gt Route52_Maze_Dialogo_Primer_Trabajador_2
msgbox Route52_Maze_Dialogo_Primer_Trabajador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Dialogo_Primer_Trabajador_2::
msgbox Route52_Maze_Dialogo_Primer_Trabajador_Texto_2 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Dialogo_Primer_Trabajador_Texto_1:
	.string "Look at all these POKÉMON! My job is to\n"
	.string "keep them healthy when they get sold!$"

Route52_Maze_Dialogo_Primer_Trabajador_Texto_2:
	.string "Recently, we sold our most powerful\n"
	.string "TYRANITAR to someone who appears to\l"
	.string "be a top TEAM ROCKET EXECUTIVE.\p"
	.string "He paid ¥1,250,000 for it.$"

Route52_Maze_Dialogo_Segundo_Trabajador::
lock
faceplayer
compare VAR_UNUSED_0x4091, 7
goto_if_gt Route52_Maze_Dialogo_Segundo_Trabajador_2
msgbox Route52_Maze_Dialogo_Segundo_Trabajador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Dialogo_Segundo_Trabajador_2::
msgbox Route52_Maze_Dialogo_Segundo_Trabajador_Texto_2 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Dialogo_Segundo_Trabajador_Texto_1:
	.string "If they used a couple of MACHAMP, me\n"
	.string "and my colleagues would lose our jobs\l"
	.string "here, but with all the POKÉMON they\l"
	.string "have, it just so happens they don't\l"
	.string "have one. Better for us!$"

Route52_Maze_Dialogo_Segundo_Trabajador_Texto_2:
	.string "So are you a shareholder of the\n"
	.string "business now? I hope you're not\l"
	.string "suggesting investing in MACHAMP for\l"
	.string "logistics!$"

Route52_Maze_Dialogo_Tercer_Trabajador::
lock
compare VAR_UNUSED_0x4091, 7
goto_if_gt Route52_Maze_Dialogo_Tercer_Trabajador_2
msgbox Route52_Maze_Dialogo_Tercer_Trabajador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Dialogo_Tercer_Trabajador_2::
faceplayer
msgbox Route52_Maze_Dialogo_Tercer_Trabajador_Texto_2 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Dialogo_Tercer_Trabajador_Texto_1:
.string "…\n"
	.string "…\l"
	.string "-He is asleep!-$"

Route52_Maze_Dialogo_Tercer_Trabajador_Texto_2:
.string "Where the heck did you come from?\n"
	.string "Did I miss something?$"
