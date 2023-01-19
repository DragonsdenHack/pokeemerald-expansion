Route4_MapScripts::
	.byte 0


Route4_1::
lock     
faceplayer     
msgbox Route4_Text_1, MSGBOX_DEFAULT
release     
end

Route4_Text_1:
.string "¡Ouch!\n"
.string "¡Me tropecé con un POKÉMON rocoso,\l"
.string "GEODUDE!$"


Route4_2::
lock     
faceplayer     
msgbox Route4_Text_2, MSGBOX_DEFAULT
release     
end

Route4_Text_2:
.string "Si no fuera por la imposibilidad\n"
.string "de entrar a los GIMNASIOS POKÉMON,\l"
.string "quizás me plantearía incluso ser\l"
.string "RECLUTA ROCKET. Esa vida de\l"
.string "criminal al margen de la ley\l"
.string "siempre me llamó la atención,\l"
.string "¡pero prefiero retar a BROCK!$"


Route4_3::
end


Route4_4::
end


Route4_5::
lock     
faceplayer     
msgbox Route4_Text_5, MSGBOX_DEFAULT
release     
end

Route4_Text_5:
.string "¡Recuerda!\n"
.string "¡Más vale potencia sostenida,\l"
.string "constante y controlada que\l"
.string "desgaste permanentemente al rival\l"
.string "que el poder sin control!$"


Route4_6::
lock     
faceplayer     
msgbox Route4_Text_6, MSGBOX_DEFAULT
release     
end

Route4_Text_6:
.string "Las medias tintas no sirven de\n"
	.string "nada, si quieres tumbar al rival\l"
	.string "debes hacerlo con un poder bruto y\l"
	.string "descontrolado, es la única forma\l"
	.string "de sorprender y resquebrajar su\l"
	.string "defensa, no darle tiempo a\l"
	.string "recuperarse.$"
end



Route4_EventScript_Chica::
	trainerbattle_single TRAINER_CINDY_3, Route4_Text_ChicaIntro, Route4_Text_ChicaDefeated
	msgbox Route4_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end


Route4Documento_100::
msgbox Route4Documento_Text_100, MSGBOX_SIGN   
end

Route4Documento_Text_100:
	.string "MT. MOON\n"
	.string "Entrada al túnel$"



Route4Documento_101::
msgbox Route4Documento_Text_101, MSGBOX_SIGN   
end

Route4Documento_Text_101:
.string "RUTA 4\n"
	.string "MT. MOON - CIUDAD CELESTE$"

Route4_Evento_Karatekas::
applymovement OBJ_EVENT_ID_PLAYER, Route4_Evento_Karatekas_move1
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 5, Route4_Evento_Karatekas_move2
applymovement 6, Route4_Evento_Karatekas_move2
waitmovement 0x0
applymovement 6, Route4_Evento_Karatekas_move3
waitmovement 0x0
msgbox Route4_Evento_Karatekas_Text_1, MSGBOX_AUTOCLOSE
delay 10
applymovement 5, Route4_Evento_Karatekas_move4
waitmovement 0x0
msgbox Route4_Evento_Karatekas_Text_2, MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_MEGAPATADA, Route4_Evento_Karatekas_Text_3
msgbox Route4_Evento_Karatekas_Text_4, MSGBOX_AUTOCLOSE
delay 10
applymovement 6, Route4_Evento_Karatekas_move5
applymovement 5, Route4_Evento_Karatekas_move6
waitmovement 0x0
msgbox Route4_Evento_Karatekas_Text_5, MSGBOX_AUTOCLOSE
applymovement 6, Route4_Evento_Karatekas_move7
waitmovement 0x0
msgbox Route4_Evento_Karatekas_Text_6, MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_MEGAPUNO, Route4_Evento_Karatekas_Text_7
applymovement 5, Route4_Evento_Karatekas_move6
waitmovement 0x0
msgbox Route4_Evento_Karatekas_Text_8, MSGBOX_AUTOCLOSE
applymovement 6, Route4_Evento_Karatekas_move8
waitmovement 0x0
msgbox Route4_Evento_Karatekas_Text_9, MSGBOX_AUTOCLOSE
msgbox Route4_Evento_Karatekas_Text_10, MSGBOX_AUTOCLOSE
applymovement 5, Route4_Evento_Karatekas_move3
applymovement 6, Route4_Evento_Karatekas_move3
waitmovement 0x0
msgbox Route4_Evento_Karatekas_Text_11, MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_SILK_SCARF
waitfanfare
delay 10
msgbox Route4_Evento_Karatekas_Text_12, MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40FB, 1
release
end

Route4_Evento_Karatekas_Text_1:
.string "¿Qué quieres, ROCKET?\n"
	.string "...\l"
	.string "...\l"
	.string "¿MEGAPUÑO Y MEGAPATADA?\l"
	.string "Claro, somos expertos en esos\l"
	.string "movimientos, nada como una buena\l"
	.string "patada para dar OKKO al rival, ¿no\l"
	.string "crees?$"

Route4_Evento_Karatekas_Text_2:
.string "No le hagas caso, MEGAPUÑO es el\n"
	.string "mejor movimiento que existe,\l"
	.string "tenemos prohibido ofrecer nuestros\l"
	.string "servicios de tutor de movimientos\l"
	.string "a los ROCKET, ¡pero podemos\l"
	.string "hacerte una demostración!$"

Route4_Evento_Karatekas_Text_3:
.string "¿Mi ofensiva no fue suficiente?$"

Route4_Evento_Karatekas_Text_4:
.string "¡No puede ser!\n"
	.string "¡Solo los POKÉMON rocosos resisten\l"
	.string "mi MEGAPUÑO!$"

Route4_Evento_Karatekas_Text_5:
.string "¡JA!\n"
	.string "¡Ya te dije que tu movimiento no\l"
	.string "tiene la potencia suficiente como\l"
	.string "para desbordar!$"

Route4_Evento_Karatekas_Text_6:
.string "Vas a aprender lo que es un\n"
	.string "movimiento de verdad, ¡todos tus\l"
	.string "POKÉMON caerán de un solo golpe!$"

Route4_Evento_Karatekas_Text_7:
.string "¿También fallé?$"

Route4_Evento_Karatekas_Text_8:
.string "¡Te lo dije!\n"
	.string "¡Tu MEGAPATADA no hace más que\l"
	.string "fallar!\l"
	.string "¿Para qué quieres tanta potencia\l"
	.string "si después no das en el blanco la\l"
	.string "mitad de las veces?$"

Route4_Evento_Karatekas_Text_9:
.string "Prefiero caer por haber fallado yo\n"
	.string "que hundirme en la pésima potencia\l"
	.string "de MEGAPUÑO, con eso no vas a\l"
	.string "tumbar ni a un METAPOD.$"

Route4_Evento_Karatekas_Text_10:
.string "...\n"
	.string "...$"

Route4_Evento_Karatekas_Text_11:
.string "Gracias por ayudarnos a poner en\n"
	.string "práctica nuestros nuevos\l"
	.string "movimientos, no podemos por ley\l"
	.string "enseñártelos, pero podemos darte\l"
	.string "esto.$"

Route4_Evento_Karatekas_Text_12:
.string "Es nuestro pequeño secreto para\n"
	.string "pegar aún más duro con nuestros\l"
	.string "movimientos, aumentará en un 20%\l"
	.string "la potencia de los movimientos\l"
	.string "tipo normal. Si alguna vez llegas\l"
	.string "a contar con un TAUROS o un\l"
	.string "KANGASKHAN, no dudes en equiparles\l"
	.string "con esto, ¡embestirán con mucha más\l"
	.string "fuerza!$"


Route4_Evento_Karatekas_move1:
walk_in_place_up
step_end

Route4_Evento_Karatekas_move2:
delay_1
face_down
emote_exclamation_mark
step_end

Route4_Evento_Karatekas_move3:
walk_in_place_down
step_end

Route4_Evento_Karatekas_move4:
walk_right
walk_down
step_end

Route4_Evento_Karatekas_move5:
walk_down
walk_left
step_end

Route4_Evento_Karatekas_move6:
face_right
step_end

Route4_Evento_Karatekas_move7:
face_down
step_end

Route4_Evento_Karatekas_move8:
face_left
step_end
