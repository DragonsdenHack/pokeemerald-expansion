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
	