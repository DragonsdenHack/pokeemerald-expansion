Goldenrod_Gym_MapScripts::
	.byte 0

GoldenrodGym_EventScript_Chica::
	trainerbattle_single TRAINER_ALEXA, GoldenrodGym_Text_ChicaIntro, GoldenrodGym_Text_ChicaDefeated
	msgbox GoldenrodGym_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



GoldenrodGym_EventScript_Chica2::
	trainerbattle_single TRAINER_AIDAN, GoldenrodGym_Text_Chica2Intro, GoldenrodGym_Text_Chica2Defeated
	msgbox GoldenrodGym_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



GoldenrodGym_EventScript_Chica3::
	trainerbattle_single TRAINER_RUBEN, GoldenrodGym_Text_Chica3Intro, GoldenrodGym_Text_Chica3Defeated
	msgbox GoldenrodGym_Text_Chica3PostBattle, MSGBOX_AUTOCLOSE
	end

GoldenrodGym_Encuentro_Valeria::
lock
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodGym_Encuentro_Valeria_Move_1
waitmovement 0x0
msgbox GoldenrodGym_Encuentro_Valeria_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodGym_Encuentro_Valeria_Move_2
waitmovement 0x0
applymovement 4, GoldenrodGym_Encuentro_Valeria_Move_3
waitmovement 0x0
msgbox GoldenrodGym_Encuentro_Valeria_Texto_2 MSGBOX_AUTOCLOSE
msgbox GoldenrodGym_Encuentro_Valeria_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox GoldenrodGym_Encuentro_Valeria_Texto_4 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodGym_Encuentro_Valeria_Move_4
waitmovement 0x0
msgbox GoldenrodGym_Encuentro_Valeria_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodGym_Encuentro_Valeria_Move_5
waitmovement 0x0
msgbox GoldenrodGym_Encuentro_Valeria_Texto_6 MSGBOX_AUTOCLOSE
msgbox GoldenrodGym_Encuentro_Valeria_Texto_7 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodGym_Encuentro_Valeria_Move_6
applymovement OBJ_EVENT_ID_PLAYER, GoldenrodGym_Encuentro_Valeria_Move_7
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 2, GoldenrodGym_Encuentro_Valeria_Move_8
waitmovement 0x0
applymovement 2, GoldenrodGym_Encuentro_Valeria_Move_9
waitmovement 0x0
msgbox GoldenrodGym_Encuentro_Valeria_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox GoldenrodGym_Encuentro_Valeria_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, GoldenrodGym_Encuentro_Valeria_Move_10
waitmovement 0x0
msgbox GoldenrodGym_Encuentro_Valeria_Texto_10 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY
fadescreen 1
delay 2
removeobject 2
fadescreen 0
setvar VAR_UNUSED_0x40F7, 135
release
end

GoldenrodGym_Encuentro_Valeria_Texto_1:
.string "????: No hará falta que me echéis,\n"
	.string "ya renuncio yo.$"

GoldenrodGym_Encuentro_Valeria_Texto_2:
.string "Pero tampoco hace falta que te\n"
	.string "pongas así, no conocemos una\l"
	.string "ENTRENADORA de tu nivel. Podrías\l"
	.string "seguir siendo la LÍDER, solo que\l"
	.string "adaptándote a los nuevos tiempos.$"

GoldenrodGym_Encuentro_Valeria_Texto_3:
.string "????: Eso no es posible, toda\n"
	.string "causa conlleva una consecuencia, y\l"
	.string "mis POKÉMON SINIESTRO requieren\l"
	.string "del ambiente adecuado para seguir\l"
	.string "creciendo. Sin eso, perderán parte\l"
	.string "de lo que son, y no admitiré la\l"
	.string "degradación de mi equipo solo por\l"
	.string "una moda pasajera urbana hacia el\l"
	.string "TIPO NORMAL. Que os vaya bien.$"

GoldenrodGym_Encuentro_Valeria_Texto_4:
.string "V-vale...\n"
	.string "Como quieras...$"

GoldenrodGym_Encuentro_Valeria_Texto_5:
.string "????: ¿Un aspirante?\n"
	.string "Lo siento, pero llegas en mal\l"
	.string "momento.$"

GoldenrodGym_Encuentro_Valeria_Texto_6:
.string "En condiciones normales te diría\n"
	.string "que mi nombre es VALERIA, soy\l"
	.string "especialista en el TIPO SINIESTRO,\l"
	.string "y demás, pero hace ya tiempo que\l"
	.string "este GIMNASIO no se dedica a su\l"
	.string "función principal: el combate\l"
	.string "POKÉMON.$"

GoldenrodGym_Encuentro_Valeria_Texto_7:
.string "VALERIA: Por el momento, me\n"
	.string "retiraré a un lugar apartado a\l"
	.string "seguir entrenando antes de\l"
	.string "decidir mi próximo destino.$"

GoldenrodGym_Encuentro_Valeria_Texto_8:
.string "¿Quieres combatir, a pesar de\n"
	.string "todo, únicamente para poner a\l"
	.string "prueba a tus POKÉMON frente a los\l"
	.string "míos?$"

GoldenrodGym_Encuentro_Valeria_Texto_9:
.string "Interesante, pero insuficiente.\n"
	.string "Tendrás que demostrar lo que\l"
	.string "dices.$"

GoldenrodGym_Encuentro_Valeria_Texto_10:
.string "Si tienes lo que hay que tener,\n"
	.string "ten el valor de ir más allá de las\l"
	.string "vías de tren. Ahí me encontrarás.$"

GoldenrodGym_Encuentro_Valeria_Move_1:
walk_in_place_right
step_end

GoldenrodGym_Encuentro_Valeria_Move_2:
walk_right
walk_right
walk_right
face_up
step_end

GoldenrodGym_Encuentro_Valeria_Move_3:
walk_in_place_up
step_end

GoldenrodGym_Encuentro_Valeria_Move_4:
walk_left
walk_left
walk_down
walk_down
walk_down
step_end

GoldenrodGym_Encuentro_Valeria_Move_5:
walk_in_place_down
step_end

GoldenrodGym_Encuentro_Valeria_Move_6:
walk_left
walk_down
walk_left
walk_left
step_end

GoldenrodGym_Encuentro_Valeria_Move_7:
walk_in_place_left
step_end

GoldenrodGym_Encuentro_Valeria_Move_8:
emote_exclamation_mark
walk_in_place_right
step_end

GoldenrodGym_Encuentro_Valeria_Move_9:
emote_exclamation_mark
face_right
step_end

GoldenrodGym_Encuentro_Valeria_Move_10:
walk_right
walk_right
step_end


Goldenrod_Gym_Chicas::
lock
msgbox Goldenrod_Gym_Chicas_Texto_1 MSGBOX_AUTOCLOSE
release
end

Goldenrod_Gym_Chicas_Texto_1:
.string "...$"


TrigalGym_Gym_Dude::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 136
goto_if_gt TrigalGym_Gym_Dude_2
msgbox TrigalGym_Gym_Dude_Texto_1 MSGBOX_NPC
release
end

TrigalGym_Gym_Dude_2::
msgbox TrigalGym_Gym_Dude_Texto_2 MSGBOX_NPC
release
end

TrigalGym_Gym_Dude_Texto_1:
.string "Estas chicas...\n"
	.string "Están armando una buena por el\l"
	.string "TIPO de este GIMNASIO, parece que\l"
	.string "el SINIESTRO no gusta a la\l"
	.string "mayoría.\l"
	.string "¡Yo solo quiero ver buenos\l"
	.string "combates!$"


TrigalGym_Gym_Dude_Texto_2:
.string "¡No creas que me lo perdí!\n"
	.string "¡Vi como derrotabas a VALERIA!\l"
	.string "¡Las chicas que vienen tendrán que\l"
	.string "mejorar mucho para llegar a\l"
	.string "vuestro nivel!$"




TrigalGym_Estatua::
lock
compare VAR_UNUSED_0x40F7, 136
goto_if_gt TrigalGym_Estatua_2
msgbox TrigalGym_Estatua_Texto_1 MSGBOX_AUTOCLOSE
release
end

TrigalGym_Estatua_2::
msgbox TrigalGym_Estatua_Texto_2 MSGBOX_AUTOCLOSE
release
end


TrigalGym_Estatua_Texto_1:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de CIUDAD TRIGAL: VALERIA\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "(¡Está vacío!)$"

TrigalGym_Estatua_Texto_2:
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de CIUDAD TRIGAL: VALERIA\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "{PLAYER}$"
