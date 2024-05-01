Snowpoint_Gimnasio_MapScripts::
	.byte 0


Snowpoint_Gimnasio_EventScript_Primer_Entrenador::
	trainerbattle_single TRAINER_TRAINER_619, Snowpoint_Gimnasio_Text_PrimeroIntro, Snowpoint_Gimnasio_Text_PrimeroDefeated
	msgbox Snowpoint_Gimnasio_Text_PrimeroPostBattle, MSGBOX_AUTOCLOSE
	end

Snowpoint_Gimnasio_EventScript_Segundo_Entrenador::
	trainerbattle_single TRAINER_TRAINER_620, Snowpoint_Gimnasio_Text_SegundoIntro, Snowpoint_Gimnasio_Text_SegundoDefeated
	msgbox Snowpoint_Gimnasio_Text_SegundoPostBattle, MSGBOX_AUTOCLOSE
	end

Snowpoint_Gimnasio_EventScript_Tercer_Entrenador::
	trainerbattle_single TRAINER_TRAINER_621, Snowpoint_Gimnasio_Text_TercerIntro, Snowpoint_Gimnasio_Text_TercerDefeated
	msgbox Snowpoint_Gimnasio_Text_TercerPostBattle, MSGBOX_AUTOCLOSE
	end

Snowpoint_Gimnasio_EventScript_Cuarto_Entrenador::
	trainerbattle_single TRAINER_TRAINER_622, Snowpoint_Gimnasio_Text_CuartoIntro, Snowpoint_Gimnasio_Text_CuartoDefeated
	msgbox Snowpoint_Gimnasio_Text_CuartoPostBattle, MSGBOX_AUTOCLOSE
	end

Snowpoint_Gimnasio_EventScript_Quinto_Entrenador::
	trainerbattle_single TRAINER_TRAINER_623, Snowpoint_Gimnasio_Text_QuintoIntro, Snowpoint_Gimnasio_Text_QuintoDefeated
	msgbox Snowpoint_Gimnasio_Text_QuintoPostBattle, MSGBOX_AUTOCLOSE
	end

Snowpoint_Gimnasio_EventScript_Sexto_Entrenador::
	trainerbattle_single TRAINER_TRAINER_624, Snowpoint_Gimnasio_Text_SextoIntro, Snowpoint_Gimnasio_Text_SextoDefeated
	msgbox Snowpoint_Gimnasio_Text_SextoPostBattle, MSGBOX_AUTOCLOSE
	end

Snowpoint_Gimnasio_Lider::
lock
faceplayer
msgbox Snowpoint_Gimnasio_Lider_Texto_1 MSGBOX_NPC
msgbox Snowpoint_Gimnasio_Lider_Texto_2 MSGBOX_NPC
msgbox Snowpoint_Gimnasio_Lider_Texto_3 MSGBOX_NPC
msgbox Snowpoint_Gimnasio_Lider_Texto_4 MSGBOX_NPC
msgbox Snowpoint_Gimnasio_Lider_Texto_5 MSGBOX_NPC
msgbox Snowpoint_Gimnasio_Lider_Texto_6 MSGBOX_NPC
msgbox Snowpoint_Gimnasio_Lider_Texto_7 MSGBOX_NPC
msgbox Snowpoint_Gimnasio_Lider_Texto_8 MSGBOX_NPC
msgbox Snowpoint_Gimnasio_Lider_Texto_9 MSGBOX_NPC
msgbox Snowpoint_Gimnasio_Lider_Texto_10 MSGBOX_NPC
release
end

Snowpoint_Gimnasio_Lider_Texto_1:
	.string "¿Quieres desafiarme? ¡Será un placer!$"

Snowpoint_Gimnasio_Lider_Texto_2:
	.string "¡Estaba esperando a alguien digno de\n"
	.string "mí! Pero deja que te diga que soy dura\l"
	.string "de pelar porque sé centrarme.$"

Snowpoint_Gimnasio_Lider_Texto_3:
	.string "Pokémon, moda, amor... ¡Todo es cuestión\n"
	.string "de concentración!$"

Snowpoint_Gimnasio_Lider_Texto_4:
	.string "Ahora lo verás. ¡Prepárate para perder!$"

Snowpoint_Gimnasio_Lider_Texto_5:
	.string "Ha sido realmente interesante. Incluso\n"
	.string "te admiro un poco.$"

Snowpoint_Gimnasio_Lider_Texto_6:
	.string "¡Vaya! ¡Eres Increíble! ¡Te has ganado\n"
	.string "mi respeto! Tu concentración y tu\l"
	.string "voluntad nos han doblegado.$"

Snowpoint_Gimnasio_Lider_Texto_7:
	.string "¡Espera, que casi me olvido! ¡Tengo que\n"
	.string "darte una cosa!...$"

Snowpoint_Gimnasio_Lider_Texto_8:
	.string "¿Crees que debería actuar un poco más\n"
	.string "como un líder de gimnasio de tipo Hielo?$"

Snowpoint_Gimnasio_Lider_Texto_9:
	.string "O sea. ¿Crees que debería intentar ser\n"
	.string "más... fría y distante? Es que eso no se\l"
	.string "me da muy bien...$"

Snowpoint_Gimnasio_Lider_Texto_10:
	.string "GIOVANNI: Hemos llegado {PLAYER}, te\n"
	.string "esperamos en el PUERTO de PUNTANEVA.$"

Snowpoint_Gimnasio_Dude::
lock
faceplayer
msgbox Snowpoint_Gimnasio_Dude_Texto_1 MSGBOX_NPC
msgbox Snowpoint_Gimnasio_Dude_Texto_2 MSGBOX_NPC
release
end

Snowpoint_Gimnasio_Dude_Texto_1:
	.string "No pareces ser de aquí. ¿Solo estás de\n"
	.string "paso? ¡Pues más vale que te prepares!\l"
	.string "nuestra LÍDER es de las más fuertes de\l"
	.string "SINNOH, sus POKÉMON están\l"
	.string "acostumbrados a entrenar en\l"
	.string "condiciones muy adversas.$"

Snowpoint_Gimnasio_Dude_Texto_2:
	.string "¿Qué ha sido eso? ¡Has ganado en un\n"
	.string "abrir y cerrar de ojos! ¿Eres el CAMPEÓN\l"
	.string "de una región lejana? ... ... ¿Mejor aún\l"
	.string "dices? ... ¿El LÍDER de la organización\l"
	.string "criminal más importante del mundo? ... ...\l"
	.string "Oh...$"

