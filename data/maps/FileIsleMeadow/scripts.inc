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
.string "-ARON ama a NORA-\n"
	.string "-HO-OH es ese HO-OH-\l"
	.string "La gracia de nuestras contraseñas\l"
	.string "es que se leen igual al revés,\l"
	.string "aunque también he oído que ese\l"
	.string "HO-OH es un poderoso POKÉMON de\l"
	.string "JOHTO, la región de donde proviene\l"
	.string "ATLAS.$"



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
.string "Algunos dicen que nuestro ALMACÉN\n"
	.string "destruye y contamina el paisaje de\l"
	.string "la isla, yo pienso que le da un\l"
	.string "toque único y cierta personalidad.\l"
	.string "¿Estás conmigo?$"



FileIsleMeadow6_6No::
msgbox FileIsleMeadow6_Text_6No, MSGBOX_DEFAULT
release
end


FileIsleMeadow6_Text_6Yes:
.string "¡Así se habla!\n"
	.string "¡TEAM ROCKET al poder!$"



FileIsleMeadow6_Text_6No:
.string "¡Todo ROCKET que se precie sabe\n"
	.string "que los paisajes industriales son\l"
	.string "lo mejor del mundo!\l"
	.string "¡Eres una deshonra!$"


FileIsleMeadow_Recluta_Balls::
lock
faceplayer
msgbox FileIsleMeadow_Recluta_Balls_Text_1, MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Recluta_Balls_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq FileIsleMeadow_Recluta_Balls_No
msgbox FileIsleMeadow_Recluta_Balls_Text_Yes, MSGBOX_DEFAULT
trainerbattle_no_intro TRAINER_RECLUTA_BALL_1, FileIsleMeadow_Recluta_Balls_Text_2
msgbox FileIsleMeadow_Recluta_Balls_Text_3, MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
giveitem ITEM_POKE_BALL, 5
waitfanfare
release
end

FileIsleMeadow_Recluta_Balls_No::
msgbox FileIsleMeadow_Recluta_Balls_Text_4, MSGBOX_AUTOCLOSE
release
end



FileIsleMeadow_Recluta_Balls_Text_1:
    .string "¡Heyy, camarada!\n"
	.string "¿Vas justo de objetos?\l"
	.string "Quiero convertirme en un RECLUTA\l"
	.string "de ALTO RANGO cuanto antes, si me\l"
	.string "ayudas a entrenar te daré\l"
	.string "algunas POKÉ BALL, para que tú\l"
	.string "también puedas mejorar.$"

FileIsleMeadow_Recluta_Balls_Text_YesNo:
.string "Entonces, ¿echamos un combate?$"

FileIsleMeadow_Recluta_Balls_Text_Yes:
.string "Esa es la respuesta que esperaba,\n"
	.string "¡prepárate para ver el poder de un\l"
	.string "futuro ALTO RANGO!$"

FileIsleMeadow_Recluta_Balls_Text_2:
    .string "Tienes madera...$"


FileIsleMeadow_Recluta_Balls_Text_3:
	.string "Tienes un gran potencial camarada,\n"
	.string "si te mantienes en el camino\l"
	.string "llegarás lejos en el TEAM ROCKET,\l"
	.string "¡toma esto!$"

FileIsleMeadow_Recluta_Balls_Text_4:
    .string "Huyendo de los combates solo\n"
	.string "puedes aspirar a ser un pobre\l"
	.string "RECLUTA, ¡créeme!$"

FileIsleMeadow_Combate_Azul::
msgbox FileIsleMeadow_Combate_Azul_Texto_1 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Combate_Azul_Texto_2 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Combate_Azul_Texto_3 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Combate_Azul_Texto_4 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Combate_Azul_Texto_5 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Combate_Azul_Texto_6 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Combate_Azul_Texto_7 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Combate_Azul_Texto_8 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Combate_Azul_Texto_9 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Combate_Azul_Texto_10 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Combate_Azul_Texto_11 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Combate_Azul_Texto_12 MSGBOX_AUTOCLOSE
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
