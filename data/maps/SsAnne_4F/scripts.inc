SsAnne_4F_MapScripts::
	.byte 0

SsAnne4F_1::
lock     
faceplayer     
msgbox SsAnne4F_Text_1, MSGBOX_DEFAULT
release     
end

SsAnne4F_Text_1:
.string "¡La fiesta está siendo todo un\n"
.string "éxito!$"



SsAnne4F_2::
lock     
faceplayer     
msgbox SsAnne4F_Text_2, MSGBOX_DEFAULT
release     
end

SsAnne4F_Text_2:
.string "¡La fiesta está siendo todo un\n"
.string "éxito!$"



SsAnne4F_3::
lock         
msgbox SsAnne4F_Text_3, MSGBOX_SIGN
release     
end

SsAnne4F_Text_3:
.string "Haremos del tiempo que se nos ha\n"
	.string "concedido algo único, ¿a quién le\l"
	.string "importa cuánto tiempo sea\l"
	.string "exactamente?$"



SsAnne4F_4::
lock         
msgbox SsAnne4F_Text_4, MSGBOX_SIGN
release     
end

SsAnne4F_Text_4:
.string "Brindemos por todo lo que hemos\n"
	.string "vivido en estos largos 70 años, y\l"
	.string "por todo lo que aún nos queda,\l"
	.string "quién diría que después de todo lo\l"
	.string "que hemos pasado estaríamos aquí\l"
	.string "sentados, a año 1996, con todo\l"
	.string "lujo y disposición a nuestro\l"
	.string "alcance, y lo más importante,\l"
	.string "siendo hábiles para seguir\l"
	.string "actuando y soñando.$"




SsAnne4F_5::
lock          
msgbox SsAnne4F_Text_5, MSGBOX_SIGN
release     
end

SsAnne4F_Text_5:
.string "Las experiencias no tienen precio,\n"
	.string "querida, no hay dinero en el mundo\l"
	.string "que pueda comprar el valor de este\l"
	.string "momento, así que aprovechémoslo.$"



SsAnne4F_6::
lock          
msgbox SsAnne4F_Text_6, MSGBOX_SIGN
release     
end

SsAnne4F_Text_6:
.string "Oh…\p"
	.string "¿Estás seguro de que podemos\n"
	.string "permitirnos esta cena?$"



SsAnne4F_7::
lock          
msgbox SsAnne4F_Text_7, MSGBOX_SIGN
release     
end

SsAnne4F_Text_7:
.string "De modo que le gusta apostar\n"
	.string "fuerte, señor FUJITA. Le haré una\l"
	.string "oferta que no podrá rechazar{PAUSE 5}…{PAUSE 5}$"



SsAnne4F_8::
lock          
msgbox SsAnne4F_Text_8, MSGBOX_SIGN
release     
end

SsAnne4F_Text_8:
.string "Hablemos claro, señor NOMURA; puedo\n"
	.string "comprarle el 20% de las acciones o\l"
	.string "puedo comprarle todo, o puedo\l"
	.string "entrar yo mismo en este negocio y\l"
	.string "enterrarle. Usted elige.$"




SsAnne4F_9::
lock     
faceplayer     
msgbox SsAnne4F_Text_9, MSGBOX_DEFAULT
release     
end

SsAnne4F_Text_9:
.string "¿Todo en orden, caballero?$"



SsAnne4F_10::
lock          
msgbox SsAnne4F_Text_10, MSGBOX_SIGN
release     
end

SsAnne4F_Text_10:
.string "Lo mejor de esta clase de fiestas\n"
	.string "es la comida.\p"
	.string "Te recomiendo el salazón de\n"
	.string "SHARPEDO, está exquisito y no\l"
	.string "podrás encontrarlo en ningún lugar\l"
	.string "de KANTO.$"



SsAnne4F_11::
lock          
msgbox SsAnne4F_Text_11, MSGBOX_SIGN
release     
end

SsAnne4F_Text_11:
.string "¡Date prisa o los mejores platos\n"
	.string "habrán desaparecido!\l"
	.string "¡Quien no corre vuela!$"



SsAnne4F_12::
end



SsAnne4F_13::
lock          
msgbox SsAnne4F_Text_13, MSGBOX_SIGN
release     
end

SsAnne4F_Text_13:
.string "En mi opinión, el rabo de TAUROS es\n"
	.string "el mejor plato que hay.$"



SsAnne4F_14::
lock          
msgbox SsAnne4F_Text_14, MSGBOX_SIGN
release     
end

SsAnne4F_Text_14:
.string "Oh, tu siempre igual. Ya comes eso\n"
	.string "todos los días en el restaurante\l"
	.string "de AZULONA, podrías aprovechar\l"
	.string "para probar nuevos platos.\p"
	.string "El HUNTAIL a la plancha que he\n"
	.string "pedido está delicioso, por ejemplo.\l"
	.string "La diversidad que hay en los mares\l"
	.string "de HOENN es incomparable.$"

SsAnne_4F_Combate_Azul::
msgbox SsAnne_4F_Combate_Azul_text_1 MSGBOX_DEFAULT
delay 10
msgbox SsAnne_4F_Combate_Azul_text_1.1 MSGBOX_DEFAULT
delay 15
playse SE_PIN
applymovement 12, SsAnne_4F_Combate_Azul_move1
waitmovement 0x0
waitse
msgbox SsAnne_4F_Combate_Azul_text_2 MSGBOX_DEFAULT
delay 10
msgbox SsAnne_4F_Combate_Azul_text_2.1 MSGBOX_DEFAULT
delay 10
applymovement 12, SsAnne_4F_Combate_Azul_move2
waitmovement 0x0
playse 527
msgbox SsAnne_4F_Combate_Azul_text_3 MSGBOX_DEFAULT
delay 10
applymovement 12, SsAnne_4F_Combate_Azul_move1.1
waitmovement 0x0
msgbox SsAnne_4F_Combate_Azul_text_3.1 MSGBOX_DEFAULT
delay 10
trainerbattle_no_intro TRAINER_AZUL_1, SsAnne_4F_Combate_Azul_text_4
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_4F_Combate_Azul_move3
waitmovement 0x0
msgbox SsAnne_4F_Combate_Azul_text_5 MSGBOX_AUTOCLOSE
applymovement 12, SsAnne_4F_Combate_Azul_move3
waitmovement 0x0
msgbox SsAnne_4F_Combate_Azul_text_6 MSGBOX_AUTOCLOSE
playbgm 528, FALSE
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_4F_Combate_Azul_move4
waitmovement 0x0
applymovement 12, SsAnne_4F_Combate_Azul_move5
waitmovement 0x0
playse SE_EXIT
waitse
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
setflag FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE
removeobject 12
fadedefaultbgm
release
end

SsAnne_4F_Combate_Azul_text_1:
.string "????: Estas fiestas siempre acaban\n"
	.string "siendo un rollo. He venido aquí\l"
	.string "para combatir contra POKÉMON de\l"
	.string "todo el mundo y me encuentro los\l"
	.string "mismos PIDGEY, RATATTA y\l"
	.string "NIDORAN de siempre.$"

SsAnne_4F_Combate_Azul_text_1.1:
	.string "Incluso los marineros del SS.ANNE no\n"
	.string "sacan más que TENTACOOL.\p"
	.string "Menudo fraude.$"

SsAnne_4F_Combate_Azul_text_2:
.string "¿Eres ese ROCKET al que cedí\n"
	.string "un FÓSIL en el MT.MOON?$"
	
SsAnne_4F_Combate_Azul_text_2.1:
 .string "No voy a preguntarte cómo\n"
	.string "es que alguien como tú está en\l"
	.string "en un lugar así, ya imagino que\l"
	.string "has entrado de forma ilegítima.\p"
	.string "Sinceramente, me da exactamente\n"
	.string "igual.$"

SsAnne_4F_Combate_Azul_text_3:
.string "En el MT.MOON hice la vista gorda,\n"
	.string "viendo la mediocridad de todos los\l"
	.string "ROCKET. Pero te atreviste a darme\l"
	.string "a mí lecciones morales, ¿sabes lo\l"
	.string "que eso significa, no?$"

SsAnne_4F_Combate_Azul_text_3.1:
	.string "¡Es hora de ver si eres uno más\n"
	.string "del montón, o en cambio tienes\l"
	.string "algo que decir!\p"
	.string "¡En guardia, ROCKET!$"

SsAnne_4F_Combate_Azul_text_4:
.string "¿En serio acabo de perder con un\n"
	.string "ROCKET?$"

SsAnne_4F_Combate_Azul_text_5:
.string "…\n"
	.string "…\l"
	.string "Entonces no eres un ROCKET\l"
	.string "cualquiera{PAUSE 15}…{PAUSE 15} ¿ALTO RANGO?\p"
	.string "¡Para mí todos lucís iguales!\p"
	.string "De todos modos, eres el único que\n"
	.string "ha podido derrotarme después de\l"
	.string "ese palurdo de ROJO, te tendré en\l"
	.string "cuenta a partir de ahora.$"

SsAnne_4F_Combate_Azul_text_6:
.string "????: Bah. Voy a darme una vuelta\n"
	.string "por los camarotes, a ver si alguien\l"
	.string "más puede darme algún combate\l"
	.string "interesante, aunque lo dudo.$"

SsAnne_4F_Combate_Azul_move1:
emote_exclamation_mark
face_down
step_end

SsAnne_4F_Combate_Azul_move1.1:
walk_in_place_down
step_end

SsAnne_4F_Combate_Azul_move2:
walk_in_place_right
walk_in_place_down
step_end

SsAnne_4F_Combate_Azul_move3:
face_up
step_end

SsAnne_4F_Combate_Azul_move4:
walk_left
walk_in_place_right
step_end

SsAnne_4F_Combate_Azul_move5:
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end
