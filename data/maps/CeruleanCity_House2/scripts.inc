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
.string "{PAUSE 5}…{PAUSE 5}$"



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

CeruleanCity_House2_Batalla_Montañero_move3.1:
emote_exclamation_mark
step_end

CeruleanCityHouse2_Montanero::
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCity_House2_Batalla_Montañero_move1
waitmovement 0x0
applymovement 3, CeruleanCity_House2_Batalla_Montañero_move1
applymovement 4, CeruleanCity_House2_Batalla_Montañero_move1
waitmovement 0x0
msgbox CeruleanCity_House2_Batalla_Montañero_Text_1, MSGBOX_AUTOCLOSE
delay 15
msgbox CeruleanCity_House2_Batalla_Montañero_Text_1.1, MSGBOX_AUTOCLOSE
delay 15
msgbox CeruleanCity_House2_Batalla_Montañero_Text_1.2, MSGBOX_AUTOCLOSE
applymovement 1, CeruleanCity_House2_Batalla_Montañero_move2
waitmovement 0x0
msgbox CeruleanCity_House2_Batalla_Montañero_Text_2, MSGBOX_AUTOCLOSE
delay 10
msgbox CeruleanCity_House2_Batalla_Montañero_Text_2.01, MSGBOX_AUTOCLOSE
delay 10
msgbox CeruleanCity_House2_Batalla_Montañero_Text_2.1, MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, CeruleanCity_House2_Batalla_Montañero_move2
waitmovement 0x0
delay 10
msgbox CeruleanCity_House2_Batalla_Montañero_Text_2.2, MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCity_House2_Batalla_Montañero_move3
waitmovement 0x0
playse SE_PIN
applymovement 1, CeruleanCity_House2_Batalla_Montañero_move3.1
waitmovement 0x0
waitse
delay 10
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
waitse
delay 10
playse SE_SHOP
waitse
delay 10
playse SE_SHOP
waitse
delay 10
applymovement 4, CeruleanCity_House2_Batalla_Montañero_move7
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCity_House2_Batalla_Montañero_move6
waitmovement 0x0
msgbox CeruleanCity_House2_Batalla_Montañero_Text_6, MSGBOX_AUTOCLOSE
delay 15
msgbox CeruleanCity_House2_Batalla_Montañero_Text_6.1, MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
giveitem ITEM_TM28
waitfanfare
msgbox CeruleanCity_House2_Batalla_Montañero_Text_7, MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_SOFT_SAND
waitfanfare
delay 10
msgbox CeruleanCity_House2_Batalla_Montañero_Text_8, MSGBOX_AUTOCLOSE
delay 15
msgbox CeruleanCity_House2_Batalla_Montañero_Text_8.1, MSGBOX_AUTOCLOSE
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
.string "Se acabó, MONTAÑERO.\n"
	.string "Esto te pasa por ir fardando de\l"
	.string "esas MTs exclusivas.$"

CeruleanCity_House2_Batalla_Montañero_Text_1.1:
	.string "Por desgracia para ti, EXCAVAR\n"
	.string "puede sernos de gran ayuda, si\l"
	.string "hubieras colaborado y nos la\l"
	.string "hubieras entregado por las buenas\l"
	.string "no hubiéramos puesto tu casa patas\l"
	.string "arriba.$"
	
CeruleanCity_House2_Batalla_Montañero_Text_1.2:
	.string "Ahora, por tu actitud te\n"
	.string "robaremos todas, sabemos que\l"
	.string "tienes decenas de esas MTs y eres\l"
	.string "tan egoísta que no eres capaz de\l"
	.string "darnos unas cuantas cuando te lo\l"
	.string "pedimos por las buenas.$"

CeruleanCity_House2_Batalla_Montañero_Text_2:
.string "MONTAÑERO: No os daré ni una sola MT.\n"
	.string "Si os damos la mano nos tomáis\l"
	.string "el brazo entero, ya sabemos cómo\l"
	.string "os las gastáis.$"
	
CeruleanCity_House2_Batalla_Montañero_Text_2.01:
	.string "No vais a encontrar las MTs\n"
	.string "porque las tengo yo, deberéis\l"
	.string "vencerme en un combate.$"

CeruleanCity_House2_Batalla_Montañero_Text_2.1:
	.string "Qué pena que seáis tan\n"
	.string "debiluchos, mi EXCAVAR hará\l"
	.string "papilla a vuestros miserables\l"
	.string "EKANS y RATTATA.$"

CeruleanCity_House2_Batalla_Montañero_Text_2.2:
	.string "¡Vamos, venid a por mí!$"

CeruleanCity_House2_Batalla_Montañero_Text_3:
.string "¿Y este de dónde ha salido?\n"
	.string "¿Quieres retarme tú solo?\l"
	.string "¡Te arrepentirás!$"

CeruleanCity_House2_Batalla_Montañero_Text_4:
.string "Oh{PAUSE 10}…{PAUSE 10} No{PAUSE 10}…{PAUSE 10} Por favor{PAUSE 10}…{PAUSE 10}$"

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
	.string "hablaré de ti a PETREL.$"

CeruleanCity_House2_Batalla_Montañero_Text_6.1:
	.string "Toma esto, lo mereces.$"

CeruleanCity_House2_Batalla_Montañero_Text_7:
.string "Tenía también este otro objeto, al\n"
	.string "parecer potencia los movimientos\l"
	.string "TIPO TIERRA. El muy granuja seguro\l"
	.string "que lo usaba para hacer más daño\l"
	.string "con su EXCAVAR, quédatelo.$"

CeruleanCity_House2_Batalla_Montañero_Text_8:
.string "Nada más camarada, con estas MTs\n"
	.string "podremos abastecer y agilizar\l"
	.string "nuestras investigaciones en\l"
	.string "lugares cerrados y salir de cuevas\l"
	.string "más fácilmente, has colaborado en\l"
	.string "aprovisionar de recursos a nuestra\l"
	.string "organización.$"

CeruleanCity_House2_Batalla_Montañero_Text_8.1:
	.string "Buen trabajo. Nos vemos en la\n"
	.string "BASE, donde tú ya sabes.$"

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
