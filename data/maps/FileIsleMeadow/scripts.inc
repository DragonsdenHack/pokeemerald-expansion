FileIsleMeadow_MapScripts::
	.byte 0


FileIsleMeadow1::
end


FileIsleMeadow2::
end


FileIsleMeadow3::
end


FileIsleMeadow4::
end


FileIsleMeadow5::
end


FileIsleMeadow8::
end


FileIsleMeadow9::
end

FileIsleMeadow_EventScript_Grunt::
	trainerbattle_single TRAINER_GRUNT_UNUSED, FileIsleMeadow_Text_GruntIntro, FileIsleMeadow_Text_GruntDefeated
	msgbox FileIsleMeadow_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end



FileIsleMeadow7::
lock     
faceplayer     
msgbox FileIsleMeadow7_Text_7, MSGBOX_DEFAULT
release     
end

FileIsleMeadow7_Text_7:
	.string "'Goldeen need log' and 'Yes, nah,\n"
	.string "Chansey'. The cleverness of our\l"
	.string "passwords lies in their palindromic\l"
	.string "nature.$"



FileIsleMeadow6::
lock
faceplayer
msgbox FileIsleMeadow6_Text_6YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq FileIsleMeadow6_6No
msgbox FileIsleMeadow6_Text_6Yes, MSGBOX_DEFAULT
release
end



FileIsleMeadow6_Text_6YesNo:
	.string "Some say that our WAREHOUSE destroys\n"
	.string "and contaminates the island's\l"
	.string "landscape, but I believe it adds a\l"
	.string "unique touch and certain personality.\l"
	.string "Are you with me?$"



FileIsleMeadow6_6No::
msgbox FileIsleMeadow6_Text_6No, MSGBOX_DEFAULT
release
end


FileIsleMeadow6_Text_6Yes:
	.string "Well said! TEAM ROCKET rules!$"



FileIsleMeadow6_Text_6No:
	.string "Any self-respecting ROCKET knows that\n"
	.string "industrial landscapes are the best in\l"
	.string "the world! You're a disgrace!$"


FileIsleMeadow_Recluta_Balls::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 4
goto_if_lt FileIsleMeadow_Recluta_Balls_Debil
msgbox FileIsleMeadow_Recluta_Balls_Text_1, MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Recluta_Balls_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq FileIsleMeadow_Recluta_Balls_No
msgbox FileIsleMeadow_Recluta_Balls_Text_Yes, MSGBOX_DEFAULT
trainerbattle_no_intro TRAINER_RECLUTA_BALL_1, FileIsleMeadow_Recluta_Balls_Text_2
msgbox FileIsleMeadow_Recluta_Balls_Text_3, MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
additem ITEM_POKE_BALL, 5
msgbox FileIsleMeadow_Recluta_Balls_Text_3.1, MSGBOX_DEFAULT
waitfanfare
release
end

FileIsleMeadow_Recluta_Balls_Text_3.1:
.string "¡¡{PLAYER} obtained 5 POKÉ BALL\n"
	.string "from ROCKET GRUNT!!$"

FileIsleMeadow_Recluta_Balls_Ejecutivo::
lock
faceplayer
compare VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
goto_if_gt FileIsleMeadow_Recluta_Balls_Ejecutivo_2
setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_1 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_3 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_4 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_5 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq FileIsleMeadow_Recluta_Balls_Ejecutivo_No
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_257, FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_8
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_10 MSGBOX_DEFAULT
additem ITEM_ULTRA_BALL, 5
waitfanfare
release
end

FileIsleMeadow_Recluta_Balls_Ejecutivo_No::
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_6 MSGBOX_AUTOCLOSE
release
end

FileIsleMeadow_Recluta_Balls_Ejecutivo_2::
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_4 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_5 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq FileIsleMeadow_Recluta_Balls_Ejecutivo_No
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_257, FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_8
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_10 MSGBOX_DEFAULT
giveitem ITEM_ULTRA_BALL, 5
waitfanfare
release
end

FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_10:
.string "¡¡{PLAYER} obtuvo 5 ULTRA BALL\n"
	.string "de manos de Ejecutivo Rocket!!$"

FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_1:
.string "¡ADMIN.JEFE {PLAYER}!$"

FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_2:
.string "Ha pasado mucho tiempo, pero se ha\n"
	.string "convertido usted en la mayor leyenda\l"
	.string "del TEAM ROCKET. Aquí en ISLA INTA es\l"
	.string "un ídolo.$"

FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_3:
.string "Como puede ver, yo he podido escalar\n"
	.string "también, ahora mismo soy EJECUTIVO\l"
	.string "ROCKET y mano derecha de ATLAS en\l"
	.string "SEVII.$"

FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_4:
.string "Perdone mi indiscrección, señor, pero\n"
	.string "sería todo un honor poder combatir\l"
	.string "contra usted, y así fortalecer aún más\l"
	.string "mis POKÉMON.$"

FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_5:
.string "¿Le gustaría combatir?$"

FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_6:
.string "Entiendo, alguien como usted debe\n"
	.string "tener asuntos de gran importancia\l"
	.string "esperándole.$"

FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_7:
.string "¡No le decepcionaré, SIR!$"

FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_8:
.string "Entonces, este es el poder de la élite\n"
	.string "del TEAM ROCKET.$"

FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_9:
.string "No olvidaré esta lección, señor. Tome en\n"
	.string "agradecimiento por su tiempo, alguien\l"
	.string "de su categoría lo mínimo que debería\l"
	.string "usar son ULTRA BALL.$"

FileIsleMeadow_Recluta_Balls_AltoRango::
lock
faceplayer
compare VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 0
goto_if_gt FileIsleMeadow_Recluta_Balls_AltoRango_2
setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_1 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_3 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_4 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_5 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq FileIsleMeadow_Recluta_Balls_AltoRango_No
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_RECLUTA_BALL_2, FileIsleMeadow_Recluta_Balls_AltoRango_texto_8
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_10 MSGBOX_DEFAULT
additem ITEM_GREAT_BALL, 5
waitfanfare
release
end

FileIsleMeadow_Recluta_Balls_AltoRango_No::
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_6 MSGBOX_AUTOCLOSE
release
end


FileIsleMeadow_Recluta_Balls_AltoRango_2::
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_4 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_5 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq FileIsleMeadow_Recluta_Balls_AltoRango_No
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_RECLUTA_BALL_2, FileIsleMeadow_Recluta_Balls_AltoRango_texto_8
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_10 MSGBOX_DEFAULT
giveitem ITEM_GREAT_BALL, 5
waitfanfare
release
end

FileIsleMeadow_Recluta_Balls_AltoRango_texto_10:
.string "¡¡{PLAYER} obtuvo 5 SUPER BALL\n"
	.string "de manos de Alto Rango Rocket!!$"

FileIsleMeadow_Recluta_Balls_AltoRango_texto_1:
.string "¡{PLAYER}!$"

FileIsleMeadow_Recluta_Balls_AltoRango_texto_2:
.string "¡Te has convertido en una leyenda\n"
	.string "desde que abandonaste la isla! ¡Quién\l"
	.string "diría que llegarías a ADMINISTRADOR\l"
	.string "ROCKET tumbando el gobierno de LANCE!$"

FileIsleMeadow_Recluta_Balls_AltoRango_texto_3:
.string "Yo también he logrado subir en la\n"
	.string "organización, ¡ahora soy ALTO RANGO!$"

FileIsleMeadow_Recluta_Balls_AltoRango_texto_4:
.string "Perdone mi indiscrección, señor, pero\n"
	.string "sería todo un honor poder combatir\l"
	.string "contra usted, y así fortalecer aún más\l"
	.string "mis POKÉMON.$"

FileIsleMeadow_Recluta_Balls_AltoRango_texto_5:
.string "¿Le gustaría combatir?$"

FileIsleMeadow_Recluta_Balls_AltoRango_texto_6:
.string "Entiendo, alguien como usted debe\n"
	.string "tener asuntos de gran importancia\l"
	.string "esperándole.$"

FileIsleMeadow_Recluta_Balls_AltoRango_texto_7:
.string "¡No le decepcionaré, SIR!$"

FileIsleMeadow_Recluta_Balls_AltoRango_texto_8:
.string "Entonces, este es el poder de la élite\n"
	.string "del TEAM ROCKET.$"

FileIsleMeadow_Recluta_Balls_AltoRango_texto_9:
.string "¡Gracias por la lección, señor! Tome\n"
	.string "esto, puede que no sea la mejor BALL\l"
	.string "para alguien de su categoría, ¡pero al\l"
	.string "menos le ahorrará tener que usar ULTRA\l"
	.string "BALL o MASTER BALL con POKÉMON que no\l"
	.string "lo merecen!$"

FileIsleMeadow_Recluta_Balls_Debil::
msgbox FileIsleMeadow_Recluta_Balls_Debil_Texto_1 MSGBOX_AUTOCLOSE
release
end

FileIsleMeadow_Recluta_Balls_Debil_Texto_1:
	.string "You appear to be another ordinary\n"
	.string "ROCKET among the crowd. If you succeed\l"
	.string "in securing a special mission from\l"
	.string "ARCHER, come back and speak with me.$"

FileIsleMeadow_Recluta_Balls_No::
msgbox FileIsleMeadow_Recluta_Balls_Text_4, MSGBOX_AUTOCLOSE
release
end



FileIsleMeadow_Recluta_Balls_Text_1:
	.string "Hey, comrade! Running low on items? I\n"
	.string "want to become a HIGH-RANK RECRUIT as\l"
	.string "soon as possible. If you help me train,\l"
	.string "I'll give you some POKÉ BALLS so you can\l"
	.string "improve too.$"

FileIsleMeadow_Recluta_Balls_Text_YesNo:
	.string "Then, wanna fight?$"

FileIsleMeadow_Recluta_Balls_Text_Yes:
	.string "That's the expected response. Prepare\n"
	.string "to witness the power of a future\l"
	.string "HIGH-RANK!$"

FileIsleMeadow_Recluta_Balls_Text_2:
	.string "You've got talent...$"

FileIsleMeadow_Recluta_Balls_Text_3:
	.string "You have great potential, comrade. If\n"
	.string "you stay on track, you'll go far in TEAM\l"
	.string "ROCKET. Take this!$"

FileIsleMeadow_Recluta_Balls_Text_4:
	.string "By avoiding battles, you can only aspire\n"
	.string "to be a poor GRUNT, trust me!$"

FileIsleMeadow_Combate_Azul_Der::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, FileIsleMeadow_Combate_Azul_Move_1
waitmovement 0x0
goto FileIsleMeadow_Combate_Azul

FileIsleMeadow_Combate_Azul_Izq::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, FileIsleMeadow_Combate_Azul_Move_1.1
waitmovement 0x0
goto FileIsleMeadow_Combate_Azul

FileIsleMeadow_Combate_Azul::
playse SE_DOOR
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
addobject 8
msgbox FileIsleMeadow_Combate_Azul_Texto_1 MSGBOX_AUTOCLOSE
applymovement 8, FileIsleMeadow_Combate_Azul_Move_2
waitmovement 0x0
msgbox FileIsleMeadow_Combate_Azul_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox FileIsleMeadow_Combate_Azul_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox FileIsleMeadow_Combate_Azul_Texto_4 MSGBOX_AUTOCLOSE
applymovement 8, FileIsleMeadow_Combate_Azul_Move_3
waitmovement 0x0
msgbox FileIsleMeadow_Combate_Azul_Texto_5 MSGBOX_AUTOCLOSE
applymovement 8, FileIsleMeadow_Combate_Azul_Move_4
waitmovement 0x0
msgbox FileIsleMeadow_Combate_Azul_Texto_6 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Combate_Azul_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox FileIsleMeadow_Combate_Azul_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox FileIsleMeadow_Combate_Azul_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox FileIsleMeadow_Combate_Azul_Texto_9 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_AZUL_4, FileIsleMeadow_Combate_Azul_Texto_10
msgbox FileIsleMeadow_Combate_Azul_Texto_11 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Combate_Azul_Texto_12 MSGBOX_AUTOCLOSE
applymovement 8, FileIsleMeadow_Combate_Azul_Move_6
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
removeobject 8
setvar VAR_ROUTE107_STATE, 4
release
end

FileIsleMeadow_Combate_Azul_Texto_1:
.string "AZUL: Ah, {PLAYER}.\n"
	.string "Volviendo a los orígenes, ¿eh?$"

FileIsleMeadow_Combate_Azul_Texto_2:
.string "ATLAS me ha estado informando de\n"
	.string "todo cuanto puedo explorar por\l"
	.string "estas islas, este lugar es ideal\l"
	.string "para tomarse un respiro de todo lo\l"
	.string "ocurrido en la LIGA POKÉMON.$"

FileIsleMeadow_Combate_Azul_Texto_3:
.string "... ...$"

FileIsleMeadow_Combate_Azul_Texto_4:
.string "Técnicamente soy el CAMPEÓN de la\n"
	.string "LIGA POKÉMON, pero ambos sabemos\l"
	.string "que lo que ocurrió allí fue\l"
	.string "totalmente distinto, fuiste tú\l"
	.string "quien derrotó a los mejores\l"
	.string "entrenadores...y a ROJO.$"

FileIsleMeadow_Combate_Azul_Texto_5:
.string "Ahí me di cuenta que quería ser\n"
	.string "CAMPEÓN más para demostrar a los\l"
	.string "otros mi valía, para estar por\l"
	.string "encima de ROJO y quedar como el\l"
	.string "mejor de entre los dos, que por\l"
	.string "pura iniciativa mía.$"

FileIsleMeadow_Combate_Azul_Texto_6:
.string "Ahora que soy el CAMPEÓN, me doy\n"
	.string "cuenta de que este título no vale\l"
	.string "nada, solo soy el mejor a ojos de\l"
	.string "las masas, pero la realidad es\l"
	.string "bien distinta.$"

FileIsleMeadow_Combate_Azul_Texto_7:
.string "Me he propuesto tomarme las cosas\n"
	.string "con más calma a partir de ahora,\l"
	.string "disfrutar de lugares como este y\l"
	.string "su naturaleza, GIOVANNI me ha\l"
	.string "ofrecido también su GIMNASIO de\l"
	.string "CIUDAD VERDE, después de todo creo\l"
	.string "que ese será mi lugar.$"

FileIsleMeadow_Combate_Azul_Texto_8:
.string "Tú en cambio quieres ir más allá\n"
	.string "de donde nadie ha llegado, ¿no?\l"
	.string "Explorar otras regiones, saltarte\l"
	.string "los límites que te rodean.$"

FileIsleMeadow_Combate_Azul_Texto_9:
.string "ATLAS me recomendó un par de\n"
	.string "lugares para capturar buenos\l"
	.string "POKÉMON, tal vez no te impresione\l"
	.string "después de haber combatido a LANCE\l"
	.string "pero...\l"
	.string "¡Concédeme este combate!$"

FileIsleMeadow_Combate_Azul_Texto_10:
.string "Bueno, al menos he competido.$"

FileIsleMeadow_Combate_Azul_Texto_11:
.string "Tal y como esperaba, has mejorado\n"
	.string "aún más desde entonces, aunque me\l"
	.string "doy por satisfecho, creo que he\l"
	.string "alcanzado el nivel de ROJO cuando\l"
	.string "me enfrenté a él por última vez, y\l"
	.string "con algo más de entreno podré\l"
	.string "sobrepasarlo, ese será el objetivo\l"
	.string "tras el que humildemente iré\l"
	.string "mientras sigo mi camino.$"

FileIsleMeadow_Combate_Azul_Texto_12:
.string "¡{PLAYER}!\n"
	.string "¡Disfruta de tus merecidas\l"
	.string "vacaciones!\l"
	.string "¡No tengo duda de que GIOVANNI te\l"
	.string "solicitará para ser participe de\l"
	.string "los más grandes proyectos del TEAM\l"
	.string "ROCKET!\l"
	.string "Tal vez algún día tus hazañas sean\l"
	.string "reconocidas ante la sociedad, pero\l"
	.string "ya te digo que no te hace falta,\l"
	.string "lo que ocurrió, ocurrió\l"
	.string "independientemente de que sepan la\l"
	.string "verdad 10 o 100000 personas.$"

FileIsleMeadow_Combate_Azul_Move_1:
emote_exclamation_mark
walk_in_place_up
step_end

FileIsleMeadow_Combate_Azul_Move_1.1:
emote_exclamation_mark
walk_right
walk_in_place_up
step_end

FileIsleMeadow_Combate_Azul_Move_2:
walk_down
step_end

FileIsleMeadow_Combate_Azul_Move_3:
face_right
step_end

FileIsleMeadow_Combate_Azul_Move_4:
walk_in_place_down
step_end

FileIsleMeadow_Combate_Azul_Move_5:
face_up
step_end

FileIsleMeadow_Combate_Azul_Move_6:
walk_left
walk_down
walk_down
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_down
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

FileIsleMeadow_Curacion::
setrespawn HEAL_LOCATION_FIVE_ISLAND
setflag FLAG_SYS_B_DASH
release
end
