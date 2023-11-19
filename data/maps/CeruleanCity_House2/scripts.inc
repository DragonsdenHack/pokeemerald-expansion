CeruleanCity_House2_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, CeruleanCity_House2_OnFrame
	.byte 0

CeruleanCity_House2_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 10, CeruleanCityHouse2_Montanero
	.2byte 0

CeruleanCityHouse2_1::
lock     
faceplayer     
msgbox CeruleanCity_House2_Text_1, MSGBOX_DEFAULT
release     
end

CeruleanCity_House2_Text_1:
.string "…$"



CeruleanCityHouse2_2::
lock     
faceplayer     
msgbox CeruleanCity_House2_Text_2, MSGBOX_DEFAULT
release     
end

CeruleanCity_House2_Text_2:
.string "¡Mira lo que has hecho!\n"
.string "¡Nos va a costar meses\l"
.string "recuperarnos de esto!$"

CeruleanCityHouse2_Montanero::
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCity_House2_Batalla_Montañero_move1
waitmovement 0x0
applymovement 3, CeruleanCity_House2_Batalla_Montañero_move1
applymovement 4, CeruleanCity_House2_Batalla_Montañero_move1
waitmovement 0x0
msgbox CeruleanCity_House2_Batalla_Montañero_Text_1, MSGBOX_AUTOCLOSE
applymovement 1, CeruleanCity_House2_Batalla_Montañero_move2
waitmovement 0x0
msgbox CeruleanCity_House2_Batalla_Montañero_Text_2, MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCity_House2_Batalla_Montañero_move3
waitmovement 0x0
msgbox CeruleanCity_House2_Batalla_Montañero_Text_3, MSGBOX_AUTOCLOSE
applymovement 1, CeruleanCity_House2_Batalla_Montañero_move4
waitmovement 0x0
trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_4, CeruleanCity_House2_Batalla_Montañero_Text_4
msgbox CeruleanCity_House2_Batalla_Montañero_Text_5, MSGBOX_AUTOCLOSE
applymovement 4, CeruleanCity_House2_Batalla_Montañero_move5
applymovement 1, CeruleanCity_House2_Batalla_Montañero_move6
waitmovement 0x0
delay 10
playse SE_SHOP
delay 10
playse SE_SHOP
delay 20
applymovement 4, CeruleanCity_House2_Batalla_Montañero_move7
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCity_House2_Batalla_Montañero_move6
waitmovement 0x0
msgbox CeruleanCity_House2_Batalla_Montañero_Text_6, MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
giveitem ITEM_TM28
waitfanfare
msgbox CeruleanCity_House2_Batalla_Montañero_Text_7, MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_SOFT_SAND
waitfanfare
delay 10
msgbox CeruleanCity_House2_Batalla_Montañero_Text_8, MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
fadescreen 1
delay 20
removeobject 3
removeobject 4
fadescreen 0
setvar VAR_UNUSED_0x40F7, 11
release
end

CeruleanCity_House2_Batalla_Montañero_Text_1:
.string "Se acabó MONTAÑERO, esto es lo que\n"
	.string "pasa cuando vas fardando por ahí\l"
	.string "de contar con MTs exclusivas, por\l"
	.string "desgracia para ti esa MT EXCAVAR\l"
	.string "puede sernos de gran ayuda, si\l"
	.string "hubieras colaborado y nos la\l"
	.string "hubieras entregado por las buenas\l"
	.string "no hubiéramos puesto tu casa patas\l"
	.string "arriba. Ahora por tu actitud te\l"
	.string "robaremos todas, sabemos que\l"
	.string "tienes decenas de esas MTs y eres\l"
	.string "tan posesivo que no eres capaz de\l"
	.string "darnos unas cuantas cuando te lo\l"
	.string "pedimos por las buenas.$"

CeruleanCity_House2_Batalla_Montañero_Text_2:
.string "MONTAÑERO: No os daré ni una sola MT.\n"
	.string "Si os damos la mano nos\l"
	.string "tomáis el brazo entero, ya sabemos\l"
	.string "cómo os las gastáis. No váis a\l"
	.string "encontrar las MTs porque las tengo\l"
	.string "yo, deberéis de vencerme en un\l"
	.string "combate. Qué pena que seáis tan\l"
	.string "debiluchos, mi EXCAVAR hará\l"
	.string "papilla a vuestros miserables\l"
	.string "EKANS y RATTATA. ¡Vamos, venid!$"

CeruleanCity_House2_Batalla_Montañero_Text_3:
.string "¿Y este de dónde ha salido?\n"
	.string "¿Quieres retarme?\l"
	.string "¡Vas a arrepentirte!$"

CeruleanCity_House2_Batalla_Montañero_Text_4:
.string "Oh... No... Por favor...$"

CeruleanCity_House2_Batalla_Montañero_Text_5:
.string "Eso es lo que pasa cuando\n"
	.string "subestimas a los ROCKET. Pagarás\l"
	.string "tu arrogancia como es debido.$"

CeruleanCity_House2_Batalla_Montañero_Text_6:
.string "¿Cómo era tu nombre?\n"
	.string "¿{PLAYER}?\l"
	.string "¡Fíjate!\l"
	.string "¡Este MONTAÑERO tenía nada más y\l"
	.string "nada menos que 20 MTs EXCAVAR!\l"
	.string "¡Y las quería todas para él!\l"
	.string "Gracias a ti hemos podido\l"
	.string "sacárselas. Ten por seguro que\l"
	.string "hablaré de ti a PETREL.\l"
	.string "Toma esto, lo mereces.$"

CeruleanCity_House2_Batalla_Montañero_Text_7:
.string "Tenía también este otro objeto, al\n"
	.string "parecer potencia los movimientos\l"
	.string "tipo TIERRA, el muy granuja seguro\l"
	.string "que lo usaba para hacer más daño\l"
	.string "con su EXCAVAR, quédatelo.$"

CeruleanCity_House2_Batalla_Montañero_Text_8:
.string "Nada más camarada, con estas MTs\n"
	.string "podremos abastecer y agilizar\l"
	.string "nuestras investigaciones en\l"
	.string "lugares cerrados y salir de cuevas\l"
	.string "más facilmente, has colaborado en\l"
	.string "aprovisionar de recursos a nuestra\l"
	.string "organización. Buen trabajo. Nos\l"
	.string "vemos en el CUARTEL, donde tú ya\l"
	.string "sabes.$"

CeruleanCity_House2_Batalla_Montañero_move1:
walk_in_place_right
step_end

CeruleanCity_House2_Batalla_Montañero_move2:
walk_in_place_left
step_end

CeruleanCity_House2_Batalla_Montañero_move3:
walk_right
step_end

CeruleanCity_House2_Batalla_Montañero_move4:
walk_left
step_end

CeruleanCity_House2_Batalla_Montañero_move5:
walk_right
walk_right
face_up
step_end

CeruleanCity_House2_Batalla_Montañero_move6:
face_down
step_end

CeruleanCity_House2_Batalla_Montañero_move7:
walk_left
face_up
step_end
