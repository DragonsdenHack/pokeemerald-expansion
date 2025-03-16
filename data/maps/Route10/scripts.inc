Route10_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, Route10_OnTransition
	.byte 0
	
Route10_OnTransition::
setflag FLAG_VISITED_ROUTE_10_FLY
end

Route10_1::
end



Route10_2::
end


Route10_3::
end


Route10_4::
end


Route10_5::
lock         
msgbox Route5_Text_5, MSGBOX_SIGN
release     
end

Route5_Text_5:
	.string "Do you even know what you're saying?\n"
	.string "There's no KANGASKHAN in this place! Do\l"
	.string "you realize what that would mean? The\l"
	.string "SAFARI ZONE would close forever, and\l"
	.string "not only that, people would start\l"
	.string "investigating where it came from; a\l"
	.string "POKÉMON like that doesn't just appear\l"
	.string "out of nowhere!$"



Route10_6::
lock          
msgbox Route5_Text_6, MSGBOX_SIGN
release     
end

Route5_Text_6:
	.string "It's true! I saw a KANGASKHAN inside!$"


Route10_7::
lock     
faceplayer     
msgbox Route5_Text_7, MSGBOX_DEFAULT
release     
end

Route5_Text_7:
	.string "The POWER PLANT has been considered\n"
	.string "our region's patrimony, since now it will\l"
	.string "be protected by police and won't be\l"
	.string "opened for exploration.Better you\l"
	.string "don't try any foolishness or justice\l"
	.string "will pursue you.$"



Route10_8::
lock     
faceplayer     
msgbox Route5_Text_8, MSGBOX_DEFAULT
release     
end

Route5_Text_8:
	.string "The POWER PLANT has been considered\n"
	.string "our region's patrimony, since now it will\l"
	.string "be protected by police and won't be\l"
	.string "opened for exploration.Better you\l"
	.string "don't try any foolishness or justice\l"
	.string "will pursue you.$"


Route10_9::
end


Route10_10::
end


Route10_11::
end


Route10_12::
end


Route10_13::
end



Route10_EventScript_Chica::
	trainerbattle_single TRAINER_MATTHEW, Route10_Text_ChicaIntro, Route10_Text_ChicaDefeated
	msgbox Route10_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Hiker::
	trainerbattle_single TRAINER_BARRY, Route10_Text_HikerIntro, Route10_Text_HikerDefeated
	msgbox Route10_Text_HikerPostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Necio::
	trainerbattle_single TRAINER_DEAN, Route10_Text_NecioIntro, Route10_Text_NecioDefeated
	msgbox Route10_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Hiker2::
	trainerbattle_single TRAINER_DAISUKE, Route10_Text_Hiker2Intro, Route10_Text_Hiker2Defeated
	msgbox Route10_Text_Hiker2PostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Hiker3::
	trainerbattle_single TRAINER_YUJI, Route10_Text_Hiker3Intro, Route10_Text_Hiker3Defeated
	msgbox Route10_Text_Hiker3PostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Chica2::
	trainerbattle_single TRAINER_DAVID, Route10_Text_Chica2Intro, Route10_Text_Chica2Defeated
	msgbox Route10_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



Route10Documento_100::
msgbox Route10Documento_Text_100, MSGBOX_SIGN   
end

Route10Documento_Text_100:
.string "ROCK TUNNEL\n"
    .string "Detour to LAVENDER TOWN$"



Route10Documento_101::
msgbox Route10Documento_Text_101, MSGBOX_SIGN   
end

Route10Documento_Text_101:
.string "POWER PLANT$"



Route10Documento_102::
msgbox Route10Documento_Text_102, MSGBOX_SIGN   
end

Route10Documento_Text_102:
.string "ROCK TUNNEL$"

Route10_Combate_Andra::
lock
faceplayer
applymovement OBJ_EVENT_ID_PLAYER, Route10_Combate_Andra_move_1
waitmovement 0x0
playse SE_PIN
applymovement 14, Route10_Combate_Andra_move_2
waitmovement 0x0
applymovement 14, Route10_Combate_Andra_move_3
waitmovement 0x0
playse 559
msgbox Route10_Combate_Andra_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route10_Combate_Andra_Texto_2 MSGBOX_AUTOCLOSE
applymovement 14, Route10_Combate_Andra_move_3
waitmovement 0x0
delay 10
msgbox Route10_Combate_Andra_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, Route10_Combate_Andra_move_4
applymovement OBJ_EVENT_ID_PLAYER, Route10_Combate_Andra_move_4
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route10_Combate_Andra_move_5
waitmovement 0x0
special RemoveCameraObject
delay 30
msgbox Route10_Combate_Andra_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox Route10_Combate_Andra_Texto_4.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route10_Combate_Andra_Texto_4.2 MSGBOX_AUTOCLOSE
delay 10
msgbox Route10_Combate_Andra_Texto_4.3 MSGBOX_AUTOCLOSE
delay 20
msgbox Route10_Combate_Andra_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox Route10_Combate_Andra_Texto_6 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route10_Combate_Andra_move_6
waitmovement 0x0
special RemoveCameraObject
msgbox Route10_Combate_Andra_Texto_7 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 14, Route10_Combate_Andra_move_2
waitmovement 0x0
applymovement 14, Route10_Combate_Andra_move_3
applymovement OBJ_EVENT_ID_PLAYER, Route10_Combate_Andra_move_1
waitmovement 0
playse 559
msgbox Route10_Combate_Andra_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox Route10_Combate_Andra_Texto_8.1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_3, Route10_Combate_Andra_Texto_9
msgbox Route10_Combate_Andra_Texto_10 MSGBOX_AUTOCLOSE
applymovement 14, Route10_Combate_Andra_move_3
waitmovement 0x0
msgbox Route10_Combate_Andra_Texto_11 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 14, Route10_Combate_Andra_move_3.1
waitmovement 0x0
waitse
delay 10
msgbox Route10_Combate_Andra_Texto_11.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, Route10_Combate_Andra_move_7
waitmovement 0x0
msgbox Route10_Combate_Andra_Texto_12 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, Route10_Combate_Andra_move_7.2
applymovement 14, Route10_Combate_Andra_move_7.1
waitmovement 0x0
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
removeobject 14
setvar VAR_UNUSED_0x40F7, 34
release
end

Route10_Combate_Andra_move_7.2:
delay_16
face_up
delay_16
delay_16
face_right
delay_16
delay_16
delay_16
face_up
step_end

Route10_Combate_Andra_move_7.1:
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Route10_Combate_Andra_move_3.1:
walk_in_place_down
face_player
step_end

Route10_Combate_Andra_Texto_1:
	.string "ANDRA: Hey {PLAYER}! Taking\n"
	.string "advantage of your well-deserved free\l"
	.string "time after an excellent job?$"

Route10_Combate_Andra_Texto_2:
	.string "Apparently, further at the south of\n"
	.string "this route, across ROCK TUNNEL, you will\l"
	.string "find LAVENDER TOWN, famous for its vast\l"
	.string "GRAVEYARD and supposed evil spirits,\l"
	.string "could the legend be true?$"

Route10_Combate_Andra_Texto_3:
	.string "The fact is that KANTO is more\n"
	.string "interesting than I thought, not going\l"
	.string "further than this, look at that place.$"

Route10_Combate_Andra_Texto_4:
.string "ANDRA: Se hace llamar CENTRAL ENERGÍA.$"

Route10_Combate_Andra_Texto_4.1:
	.string "Está repleta de POKÉMON ELÉCTRICO,\n"
	.string "estuve entrenando un buen rato allí\l"
	.string "hasta hace poco, es un lugar\l"
	.string "completamente abandonado, con\l"
	.string "VOLTORB que explotan en tu cara,\l"
	.string "recipientes de acero con toda la\l"
	.string "pinta de ser radiactivos,\l"
	.string "MAGNEMITES y MAGNETON pululando\l"
	.string "alrededor de ellos{PAUSE 25}…{PAUSE 25}$"

Route10_Combate_Andra_Texto_4.2:
	.string "Todo apunta a que ciertas prácticas\n"
	.string "poco éticas se llevaron a cabo en este\l"
	.string "lugar.\p"
	.string "Sea como sea, no he podido averiguar\n"
	.string "más; la policía llegó hace poco con una\l"
	.string "orden oficial de protección, guarda y\l"
	.string "custodia firmada por el COMITÉ de la\l"
	.string "LIGA POKÉMON.$"
	
Route10_Combate_Andra_Texto_4.3:
	.string "Según ellos,'con el fin de proteger los\n"
	.string "lugares más icónicos y la diversidad de\l"
	.string "especies de la región'. Tiene gracia,\l"
	.string "seguro que después dejan campar a sus\l"
	.string "anchas a cualquier crío de 10 años.$"

Route10_Combate_Andra_Texto_5:
.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

Route10_Combate_Andra_Texto_6:
.string "ANDRA: El caso es que ese lugar\n"
	.string "esconde algo, he notado una\l"
	.string "presencia muy potente en su\l"
	.string "interior, un ser capaz de generar\l"
	.string "energía casi infinita, ¿existirá\l"
	.string "un POKÉMON ELÉCTRICO de esas\l"
	.string "características?\p"
	.string "Si tan solo hubiera podido\n"
	.string "adentrarme un poco más{PAUSE 5}…{PAUSE 5}$"

Route10_Combate_Andra_Texto_7:
.string "Podríamos proponerle a GIOVANNI un\n"
	.string "asalto a la CENTRAL, a su debido\l"
	.string "tiempo claro, primero deberemos de\l"
	.string "demostrarle lo que valemos.\p"
	.string "Pero{PAUSE 15}…{PAUSE 15} un POKÉMON con esa presencia\n"
	.string "debe ser muy fuerte, quizás nuestros\l"
	.string "superiores de KANTO sepan algo más.$"

Route10_Combate_Andra_Texto_8:
.string "Ahora que lo pienso, ya ha pasado\n"
	.string "bastante desde la última vez que\l"
	.string "combatimos, no hay duda de que has\l"
	.string "superado expectativas, derrotando a\l"
	.string "nuestro superior en el MT.MOON, a\l"
	.string "BILL y después a un CAPITÁN con\l"
	.string "experiencia como el del SS.ANNE.$"

Route10_Combate_Andra_Texto_8.1:
	.string "Pero{PAUSE 25}…{PAUSE 25} ¿sabes qué?\n"
	.string "Yo no me he quedado atrás, {PLAYER}.\p"
	.string "Te dije que sería la ROCKET más\n"
	.string "fuerte de toda la organización y\l"
	.string "lo mantengo; ya somos RECLUTAS DE\l"
	.string "ALTO RANGO, la cuestión es{PAUSE 15}…{PAUSE 15}\p"
	.string "¿¡Qué ALTO RANGO es\n"
	.string "mejor ENTRENADOR?!$"

Route10_Combate_Andra_Texto_9:
.string "Entonces, aún no es suficiente.\n"
	.string "Jejeje, gracias por elevar más\l"
	.string "el nivel.$"

Route10_Combate_Andra_Texto_10:
.string "ANDRA: No me gustaría tenerte como\n"
	.string "enemigo, {PLAYER}. Sigo sin entender\l"
	.string "cómo ese misterioso ENTRENADOR\l"
	.string "vestido de rojo pudo derrotarte en\l"
	.string "el MT.MOON, debe ser un auténtico\l"
	.string "superdotado para el combate.$"

Route10_Combate_Andra_Texto_11:
.string "Sea como sea, no importa, ese tipo\n"
	.string "no sabe con quién se mete, ahora\l"
	.string "que nos trasladan a AZULONA, nos\l"
	.string "haremos un lugar entre la élite.$"

Route10_Combate_Andra_Texto_11.1:
	.string "¡Ese pobre chico deseará no\n"
	.string "haberse metido con nosotros\l"
	.string "en el MT.MOON!$"

Route10_Combate_Andra_Texto_12:
.string "ANDRA: Bah, me vuelvo al cuartel.\p"
	.string "La máquina teletransportadora debe\n"
	.string "estar casi lista, ultima tus\l"
	.string "preparativos y no tardes:\p"
	.string "¡CIUDAD AZULONA ESPERA!$"

Route10_Combate_Andra_move_1:
walk_in_place_left
step_end

Route10_Combate_Andra_move_2:
emote_exclamation_mark
step_end

Route10_Combate_Andra_move_3:
walk_in_place_right
step_end

Route10_Combate_Andra_move_4:
walk_in_place_down
step_end

Route10_Combate_Andra_move_5:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
step_end

Route10_Combate_Andra_move_6:
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
walk_right
step_end

Route10_Combate_Andra_move_7:
walk_in_place_up
walk_in_place_right
face_player
step_end

Route10_Combate_Andra_move_8:
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Route10Documento_Andra_Parada::
msgbox Route10Documento_Andra_Parada_text_1, MSGBOX_SIGN   
end

Route10Documento_Andra_Parada_text_1:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

Route10_Entrenadores_Guays::
lockall
applymovement OBJ_EVENT_ID_PLAYER, Route10_Entrenadores_Guays_Move_1
waitmovement 0x0
msgbox Route10_Entrenadores_Guays_Texto_1 MSGBOX_AUTOCLOSE
applymovement 15, Route10_Entrenadores_Guays_Move_2
applymovement 16, Route10_Entrenadores_Guays_Move_2
waitmovement 0x0
removeobject 15
removeobject 16
setflag FLAG_HIDE_ROUTE_101_ZIGZAGOON
setvar VAR_UNUSED_0x40F7, 40
release
end

Route10_Entrenadores_Guays_Texto_1:
	.string "Apparently there are already people\n"
	.string "who are exploring the cave in search of\l"
	.string "that KANGASKHAN, that rumor has spread\l"
	.string "quickly, let's hurry up before someone\l"
	.string "else catches it!$"

Route10_Entrenadores_Guays_Move_1:
walk_in_place_up
step_end

Route10_Entrenadores_Guays_Move_2:
walk_up
walk_up
walk_up
step_end
