Route44_MapScripts::
	.byte 0

Route44_1::
lock     
faceplayer     
msgbox Route44_Text_1, MSGBOX_DEFAULT
release     
end

Route44_Text_1:
.string "La RUTA HELADA está cortada hasta\n"
.string "nuevo aviso, lo siento, han sido\l"
.string "órdenes de última hora venidas\l"
.string "desde CIUDAD IRIS.$"



Route44_2::
end



Route44_4::
end



Route44_5::
end



Route44_6::
lock     
faceplayer     
msgbox Route44_Text_6, MSGBOX_DEFAULT
release     
end

Route44_Text_6:
.string "La CUEVA HELADA ha mantenido al\n"
.string "santuario del TIPO DRAGÓN, CIUDAD\l"
.string "ENDRINO, alejada del resto de\l"
.string "zonas de JOHTO.$"



Route44_7::
end



Route44_8::
end



Route44_9::
end



Route44_10::
end



Route44_11::
end



Route44_EventScript_Domador::
	trainerbattle_single TRAINER_NICOLAS_5, Route44_Text_DomadorIntro, Route44_Text_DomadorDefeated
	msgbox Route44_Text_DomadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route44_EventScript_Guay::
	trainerbattle_single TRAINER_PERRY, Route44_Text_GuayIntro, Route44_Text_GuayDefeated
	msgbox Route44_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end



Route44_EventScript_Pescador::
	trainerbattle_single TRAINER_PHIL, Route44_Text_PescadorIntro, Route44_Text_PescadorDefeated
	msgbox Route44_Text_PescadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route44_EventScript_Necio::
	trainerbattle_single TRAINER_HUGH, Route44_Text_NecioIntro, Route44_Text_NecioDefeated
	msgbox Route44_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



Route44_EventScript_Ornitologo::
	trainerbattle_single TRAINER_ROBERT_1, Route44_Text_OrnitologoIntro, Route44_Text_OrnitologoDefeated
	msgbox Route44_Text_OrnitologoPostBattle, MSGBOX_AUTOCLOSE
	end



Route44Documento_100::
msgbox Route44Documento_Text_100, MSGBOX_SIGN   
end

Route44Documento_Text_100:
	.string "RUTA 44\n"
	.string "PUEBLO CAOBA - CIUDAD ENDRINO$"



Route44Documento_101::
msgbox Route44Documento_Text_101, MSGBOX_SIGN   
end

Route44Documento_Text_101:
	.string "RUTA 44\n"
	.string "Hacia RUTA HELADA$"

Route44_Combate_Mirto::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route44_Combate_Mirto_Move_1
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_1 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
addobject 3
applymovement 3, Route44_Combate_Mirto_Move_2
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_2 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_3
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_3 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_4
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_4 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_3
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox Route44_Combate_Mirto_Texto_5.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Route44_Combate_Mirto_Move_3.1
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_5.2 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_3
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_5.3 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_5
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_5.4 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_6
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_5.5 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_6.1
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_5.6 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, Route44_Combate_Mirto_Move_3.1
waitmovement 0x0
delay 10
msgbox Route44_Combate_Mirto_Texto_5.7 MSGBOX_AUTOCLOSE
delay 15
msgbox Route44_Combate_Mirto_Texto_5.8 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_6.2
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_5.9 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_6.3
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_5.10 MSGBOX_AUTOCLOSE
msgbox Route44_Combate_Mirto_Texto_6 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_3
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_7 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
trainerbattle_no_intro TRAINER_MIRTO, Route44_Combate_Mirto_Texto_8
applymovement OBJ_EVENT_ID_PLAYER, Route44_Combate_Mirto_Move_5
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_9 MSGBOX_AUTOCLOSE
msgbox Route44_Combate_Mirto_Texto_10 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox Route44_Combate_Mirto_Texto_11 MSGBOX_DEFAULT
givemon SPECIES_NOIBAT, 25, ITEM_NOIVERNITA
waitfanfare
msgbox Route44_Combate_Mirto_Texto_11.1 MSGBOX_DEFAULT
delay 10
applymovement 3, Route44_Combate_Mirto_Move_3
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_12 MSGBOX_AUTOCLOSE
fadescreen 1
playmoncry SPECIES_NOIVERN, CRY_MODE_ENCOUNTER
waitmoncry
removeobject 3
setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
playse SE_M_FLY
delay 15
fadescreen 0
setvar VAR_UNUSED_0x40F7, 166
release
end

Route44_Combate_Mirto_Move_6.3:
delay_8
walk_right
delay_8
step_end

Route44_Combate_Mirto_Move_6.2:
delay_8
face_right
delay_8
step_end

Route44_Combate_Mirto_Move_6.1:
delay_8
walk_in_place_left
delay_8
step_end

Route44_Combate_Mirto_Move_3.1:
face_up
delay_8
step_end

Route44_Combate_Mirto_Texto_1:
.string "????: ¡{PLAYER}!\n"
	.string "¡Espera!$"

Route44_Combate_Mirto_Texto_2:
.string "Sabía que te alcanzaría por aquí,\n"
	.string "has derrotado a 7 de lo 8 mejores\l"
	.string "ENTRENADORES de JOHTO, ¿verdad?\l"
	.string "Solo te queda el último y más\l"
	.string "difícil: el MAESTRO DRAGÓN de\l"
	.string "ENDRINO. Por eso vas hacia la RUTA\l"
	.string "HELADA.$"

Route44_Combate_Mirto_Texto_3:
.string "Vengo a despedirme, {PLAYER}. Así\n"
	.string "es, en breve volveré a TESELIA, mi\l"
	.string "región de origen.$"

Route44_Combate_Mirto_Texto_4:
.string "Quiero que mi POKÉMON vuelva a ver\n"
	.string "por última vez la región que le\l"
	.string "vio crecer.$"

Route44_Combate_Mirto_Texto_5:
.string "Todos los intentos por recuperar\n"
	.string "la salud de mi POKÉMON han\l"
	.string "fracasado, pero este viaje no ha\l"
	.string "sido en vano, he aprendido mucho\l"
	.string "de los mejores maestros de JOHTO.\l"
	.string "Me han hecho ver que la situación\l"
	.string "de mi POKÉMON es privilegiada,\l"
	.string "tiene un don para el combate, y\l"
	.string "sería un pecado no explorar los\l"
	.string "límites de un POKÉMON tan\l"
	.string "singular.$"

Route44_Combate_Mirto_Texto_5.1:
	.string "…$"

Route44_Combate_Mirto_Texto_5.2:
	.string "El CAMPEÓN de una región es el\n"
	.string "entrenador más fuerte de esta, sabes lo\l"
	.string "que quiero decir, ¿no?$"

Route44_Combate_Mirto_Texto_5.3:
	.string "Representamos también el límite a lo\n"
	.string "que un ENTRENADOR ha podido llegar, lo\l"
	.string "más cercano a fuerzas mayores que solo\l"
	.string "los LEGENDARIOS más antiguos alcanzan.$"

Route44_Combate_Mirto_Texto_5.4:
	.string "Esto sin embargo lo logramos gracias a\n"
	.string "nuestro esfuerzo, desarrollo e\l"
	.string "interacciones que mantenemos con\l"
	.string "otros POKÉMON, mortales como nosotros,\l"
	.string "durante toda una vida.$"

Route44_Combate_Mirto_Texto_5.5:
	.string "No me cabe duda, ese tipo de actos dejan\n"
	.string "huella. Su potencial es ilimitado,\l"
	.string "sagrado.$"

Route44_Combate_Mirto_Texto_5.6:
	.string "En cambio, los dioses del MUNDO\n"
	.string "POKÉMON{PAUSE 35}…{PAUSE 35} ¿Sabes lo que creo?$"

Route44_Combate_Mirto_Texto_5.7:
	.string "Nos envidian, {PLAYER}.$"

Route44_Combate_Mirto_Texto_5.8:
	.string "Jamás sabrán lo que es empezar desde 0\n"
	.string "e ir subiendo poco a poco, escalar\l"
	.string "peldaños, pasar dificultades y aprender\l"
	.string "de las derrotas.$"

Route44_Combate_Mirto_Texto_5.9:
	.string "Nos envidian porque, a fin de cuentas,\n"
	.string "somos mortales. Cada combate nuestro\l"
	.string "podría ser el último. Jamás volveremos a\l"
	.string "tener esta conversación, ni a estar\l"
	.string "aquí, {PLAYER}.$"

Route44_Combate_Mirto_Texto_5.10:
	.string "¿Te das cuenta? Es en lo efímero\n"
	.string "de nuestra existencia donde reside\l"
	.string "su valor.$"

Route44_Combate_Mirto_Texto_6:
.string "Es por ello por lo que he venido\n"
	.string "hasta aquí, {PLAYER}, no veo mejor\l"
	.string "forma de honrar a mi POKÉMON que\l"
	.string "proporcionarle este combate, aún\l"
	.string "cuando su luz brilla con total\l"
	.string "intensidad, para que todos\l"
	.string "recuerden cómo era en su apogeo.$"

Route44_Combate_Mirto_Texto_7:
.string "No importa que pasen 5 o 50 años.\n"
	.string "¡Nadie nos podrá arrebatar lo\l"
	.string "vivido aquí hoy, ni el nivel\l"
	.string "LEGENDARIO alcanzado!$"

Route44_Combate_Mirto_Texto_8:
.string "Jamás olvidaré este combate.$"

Route44_Combate_Mirto_Texto_9:
.string "Eres un ENTRENADOR de época,\n"
	.string "{PLAYER}. Creo que con este combate\l"
	.string "daré por concluida una etapa en\l"
	.string "mi camino.$"

Route44_Combate_Mirto_Texto_10:
.string "Soltaré a mi actual equipo y\n"
	.string "empezaré de 0 con el huevo de\l"
	.string "LARVESTA de mi VOLCARONA. Quiero\l"
	.string "que tú te quedes con este POKÉMON.$"

Route44_Combate_Mirto_Texto_11:
.string "¡¡OBTUVISTE UN NOIBAT AL Nv.25!!$"

Route44_Combate_Mirto_Texto_11.1:
	.string "Con este combate, mi cénit como\n"
	.string "ENTRENADOR ha concluído. Pero tú{PAUSE 25}…{PAUSE 25} tú\l"
	.string "aún puedes hacer sangrar a los dioses.$"

Route44_Combate_Mirto_Texto_12:
.string "Hasta la vista, {PLAYER}. Saluda al\n"
	.string "MAESTRO DRAGÓN de mi parte, seguro\l"
	.string "que él puede llevarte a cotas aún\l"
	.string "más altas.$"

Route44_Combate_Mirto_Move_1:
emote_exclamation_mark
walk_in_place_left
step_end

Route44_Combate_Mirto_Move_2:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_right
walk_right
step_end

Route44_Combate_Mirto_Move_3:
walk_in_place_right
step_end

Route44_Combate_Mirto_Move_4:
face_down
step_end

Route44_Combate_Mirto_Move_5:
face_left
step_end

Route44_Combate_Mirto_Move_6:
walk_slow_left
step_end
