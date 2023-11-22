NeoLavandaCementerioS1_MapScripts::
	.byte 0

NeoLavandaCementerioS1_2::
lock     
faceplayer     
msgbox NeoLavandaCementerioS1_Text_2, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS1_Text_2:
.string "El CEMENTERIO se ha construido en\n"
.string "tiempo récord… Algo me dice que FUJI ya\l"
.string "sabía lo que iba a ocurrirle a TORRE\l"
.string "POKÉMON mucho antes que cualquiera de\l"
.string "nosotros. Sea como sea, esperemos que\l"
.string "con ello se alcance la paz definitiva\l"
.string "aquí.$"




NeoLavandaCementerioS1_3::
lock     
faceplayer     
msgbox NeoLavandaCementerioS1_Text_3, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS1_Text_3:
.string "La TORRE RADIO es la nueva imagen del\n"
.string "pueblo, por contra, ahora las tumbas\l"
.string "permanecen ocultas. Tal vez esa fue la\l"
.string "verdadera intención desde el principio.$"






NeoLavandaCementerioS1_4::
lock     
faceplayer     
msgbox NeoLavandaCementerioS1_Text_4, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS1_Text_4:
.string "La mayoría de tumbas trasladadas\n"
.string "pertenecen ya a almas olvidadas, que\l"
.string "dejaron de ser visitadas hace tiempo.\l"
.string "Sin embargo, FUJI trasladó todas sin\l"
.string "excepción, se siente en deuda con el\l"
.string "pueblo, pero… la realidad es que este\l"
.string "CEMENTERIO será visitado por muy\l"
.string "pocos a partir de ahora, su destino es\l"
.string "permanecer en las sombras.$"





NeoLavandaCementerioS1_6::
lock     
faceplayer     
msgbox NeoLavandaCementerioS1_Text_6, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS1_Text_6:
.string "Algunas exorcistas han seguido el mismo\n"
.string "camino que AGATHA: el retiro hacia una\l"
.string "vida contemplativa. Gracias a FUJI,\l"
.string "muchas de nosotras permaneceremos en\l"
.string "PUEBLO LAVANDA.$"






NeoLavandaCementerioS1_10::
lock     
faceplayer     
msgbox NeoLavandaCementerioS1_Text_10, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS1_Text_10:
.string "Solo visitas expresas serán permitidas\n"
.string "a partir de ahora. La gran mayoría de\l"
.string "transeúntes no sabrán de la existencia\l"
.string "de este lugar, creerán que todas esas\l"
.string "tumbas han sido removidas de la nada.\l"
.string "¡Pues están aquí!$"





NeoLavandaCementerioS1_14::
lock     
faceplayer     
msgbox NeoLavandaCementerioS1_Text_14, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS1_Text_14:
.string "Tú eras ese ROCKET del que FUJI tanto\n"
.string "hablaba. Así es, yo te recuerdo.$"






NeoLavandaCementerioS1_15::
lock     
faceplayer     
msgbox NeoLavandaCementerioS1_Text_15, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS1_Text_15:
.string "¡Bienvenido, {PLAYER}, al nuevo\n"
.string "CEMENTERIO de PUEBLO LAVANDA! FUJI ya\l"
.string "me avisó de que vendrías, eres toda\l"
.string "una leyenda aquí.$"



NeoLavandaCementerioS1_EventScript_Exorcista::
	trainerbattle_single TRAINER_TRAINER_35, NeoLavandaCementerioS1_Text_ExorcistaIntro, NeoLavandaCementerioS1_Text_ExorcistaDefeated
	msgbox NeoLavandaCementerioS1_Text_ExorcistaPostBattle, MSGBOX_AUTOCLOSE
	end



NeoLavandaCementerioS1_EventScript_Exorcista2::
	trainerbattle_single TRAINER_TRAINER_34, NeoLavandaCementerioS1_Text_Exorcista2Intro, NeoLavandaCementerioS1_Text_Exorcista2Defeated
	msgbox NeoLavandaCementerioS1_Text_Exorcista2PostBattle, MSGBOX_AUTOCLOSE
	end



NeoLavandaCementerioS1_EventScript_Exorcista3::
	trainerbattle_single TRAINER_TRAINER_32, NeoLavandaCementerioS1_Text_Exorcista3Intro, NeoLavandaCementerioS1_Text_Exorcista3Defeated
	msgbox NeoLavandaCementerioS1_Text_Exorcista3PostBattle, MSGBOX_AUTOCLOSE
	end



NeoLavandaCementerioS1_EventScript_Exorcista4::
	trainerbattle_single TRAINER_TRAINER_33, NeoLavandaCementerioS1_Text_Exorcista4Intro, NeoLavandaCementerioS1_Text_Exorcista4Defeated
	msgbox NeoLavandaCementerioS1_Text_Exorcista4PostBattle, MSGBOX_AUTOCLOSE
	end

NeoLavandaCementerioS1_Rocket_Redencion::
lock
applymovement 18, NeoLavandaCementerioS1_Rocket_Redencion_Move_1
waitmovement 0x0
msgbox NeoLavandaCementerioS1_Rocket_Redencion_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox NeoLavandaCementerioS1_Rocket_Redencion_Texto_2 MSGBOX_AUTOCLOSE
delay 20
applymovement 18, NeoLavandaCementerioS1_Rocket_Redencion_Move_2
waitmovement 0x0
playse SE_PIN
applymovement 18, NeoLavandaCementerioS1_Rocket_Redencion_Move_3
waitmovement 0x0
msgbox NeoLavandaCementerioS1_Rocket_Redencion_Texto_3 MSGBOX_AUTOCLOSE
applymovement 18, NeoLavandaCementerioS1_Rocket_Redencion_Move_4
waitmovement 0x0
msgbox NeoLavandaCementerioS1_Rocket_Redencion_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox NeoLavandaCementerioS1_Rocket_Redencion_Texto_5 MSGBOX_AUTOCLOSE
applymovement 18, NeoLavandaCementerioS1_Rocket_Redencion_Move_5
waitmovement 0x0
msgbox NeoLavandaCementerioS1_Rocket_Redencion_Texto_6 MSGBOX_AUTOCLOSE
applymovement 18, NeoLavandaCementerioS1_Rocket_Redencion_Move_6
waitmovement 0x0
msgbox NeoLavandaCementerioS1_Rocket_Redencion_Texto_7 MSGBOX_AUTOCLOSE
applymovement 18, NeoLavandaCementerioS1_Rocket_Redencion_Move_4
waitmovement 0x0
msgbox NeoLavandaCementerioS1_Rocket_Redencion_Texto_8 MSGBOX_AUTOCLOSE
applymovement 18, NeoLavandaCementerioS1_Rocket_Redencion_Move_5
waitmovement 0x0
msgbox NeoLavandaCementerioS1_Rocket_Redencion_Texto_9 MSGBOX_AUTOCLOSE
applymovement 18, NeoLavandaCementerioS1_Rocket_Redencion_Move_7
waitmovement 0x0
msgbox NeoLavandaCementerioS1_Rocket_Redencion_Texto_10 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM105_SNARL
msgbox NeoLavandaCementerioS1_Rocket_Redencion_Texto_11 MSGBOX_DEFAULT
waitfanfare
msgbox NeoLavandaCementerioS1_Rocket_Redencion_Texto_12 MSGBOX_AUTOCLOSE
setflag FLAG_NUEVA_830
fadescreen 1
delay 20
removeobject 18
fadescreen 0
release
end

NeoLavandaCementerioS1_Rocket_Redencion_Move_7:
delay_8
face_player
delay_8
step_end

NeoLavandaCementerioS1_Rocket_Redencion_Move_6:
walk_in_place_down
step_end

NeoLavandaCementerioS1_Rocket_Redencion_Move_5:
face_down
step_end

NeoLavandaCementerioS1_Rocket_Redencion_Move_4:
face_up
delay_8
face_player
step_end

NeoLavandaCementerioS1_Rocket_Redencion_Move_3:
emote_exclamation_mark
step_end

NeoLavandaCementerioS1_Rocket_Redencion_Move_2:
face_player
delay_8
delay_8
step_end

NeoLavandaCementerioS1_Rocket_Redencion_Move_1:
walk_in_place_up
step_end

NeoLavandaCementerioS1_Rocket_Redencion_Texto_1:
.string "No se preocupe, me encargaré de ello.$"

NeoLavandaCementerioS1_Rocket_Redencion_Texto_2:
.string "… …$"

NeoLavandaCementerioS1_Rocket_Redencion_Texto_3:
.string "¡Oh, señor! No esperaba verle por aquí.$"

NeoLavandaCementerioS1_Rocket_Redencion_Texto_4:
.string "Dudo que me recuerde, estuve presente\n"
	.string "en su misión de TORRE LAVANDA. De no\l"
	.string "ser por usted, FUJI nos lo hubiera\l"
	.string "hecho pasar realmente mal.$"

NeoLavandaCementerioS1_Rocket_Redencion_Texto_5:
.string "Lo cierto es que hicimos algo horrible\n"
	.string "allí, en aquel momento no éramos\l"
	.string "conscientes, todo valía porque éramos\l"
	.string "el -TEAM ROCKET- y adoptamos el rol\l"
	.string "que la sociedad esperaba de nosotros,\l"
	.string "pero no el que la propia organización\l"
	.string "inculcaba desde dentro.$"

NeoLavandaCementerioS1_Rocket_Redencion_Texto_6:
.string "Poco después GIOVANNI nos destinó\n"
	.string "aquí como castigo.$"

NeoLavandaCementerioS1_Rocket_Redencion_Texto_7:
.string "Nos vimos obligados a colaborar en la\n"
	.string "construcción de este gran CEMENTERIO,\l"
	.string "despojados de nuestro sueldo y\l"
	.string "viviendo de la caridad. Sin nada a\l"
	.string "cambio, solo una vaga promesa de\l"
	.string "redención sostenía nuestra voluntad.$"

NeoLavandaCementerioS1_Rocket_Redencion_Texto_8:
.string "Mis otros dos compañeros abandonaron\n"
	.string "al poco, yo fui el único que logró\l"
	.string "mantenerse, y ahora puedo decir con\l"
	.string "orgullo que mi papel en la construcción\l"
	.string "de este CEMENTERIO ha sido clave, y\l"
	.string "GIOVANNI me ascendió a ALTO RANGO por\l"
	.string "ello.$"

NeoLavandaCementerioS1_Rocket_Redencion_Texto_9:
.string "De no ser por esa segunda oportunidad,\n"
	.string "¿quién sabe dónde estaría ahora?$"

NeoLavandaCementerioS1_Rocket_Redencion_Texto_10:
.string "A usted también le estoy agradecido, me\n"
	.string "gustaría darle esta MT que encontré\l"
	.string "durante la construcción.$"

NeoLavandaCementerioS1_Rocket_Redencion_Texto_11:
.string "¡¡{PLAYER} obtuvo la MT105 ALARIDO\n"
	.string "de manos de Alto Rango Rocket!!$"


NeoLavandaCementerioS1_Rocket_Redencion_Texto_12:
.string "Es un honor contar con su presencia\n"
	.string "aquí, espero verle más a menudo ahora\l"
	.string "que PUEBLO LAVANDA se ha vuelto uno de\l"
	.string "nuestros centros de operaciones. Ya\l"
	.string "sabe a lo que me refiero.$"
