PokemonTower_2F_MapScripts::
	.byte 0

PokemonTower2F_2::
lock     
faceplayer     
msgbox PokemonTower2F_Text_2, MSGBOX_DEFAULT
release     
end

PokemonTower2F_Text_2:
.string "Ni siquiera pudimos identificar a\n"
.string "los GHOST.\l"
.string "Quizás un SCOPE SILPH pueda\l"
.string "desenmascararlos.$"

PokemonTower2F_1::
lock     
faceplayer     
msgbox PokemonTower2F_Text_1, MSGBOX_DEFAULT
release     
end

PokemonTower2F_Text_1:
.string "Ocúpate de tu parte, {PLAYER}.\n"
	.string "¡Nadie debe acceder al último piso!$"

PokemonTower2F_Azul::
lock
faceplayer
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_1.1
applymovement 1, PokemonTower2F_Azul_Move_1
waitmovement 0x0
applymovement 1, PokemonTower2F_Azul_Move_2
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_3
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_1 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_2 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower2F_Azul_Move_2
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower2F_Azul_Move_4
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_5 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower2F_Azul_Move_2
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower2F_Azul_Texto_7.1 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower2F_Azul_Texto_7.2 MSGBOX_AUTOCLOSE
delay 15
playse SE_EXIT
clearflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
addobject 3
delay 20
playse SE_PIN
applymovement 1, PokemonTower2F_Azul_Move_1
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_1
waitmovement 0x0
applymovement 3, PokemonTower2F_Azul_Move_5
waitmovement 0x0
applymovement 1, PokemonTower2F_Azul_Move_6
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_6
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_8 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_9 MSGBOX_AUTOCLOSE
applymovement 3, PokemonTower2F_Azul_Move_2
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_10 MSGBOX_AUTOCLOSE
applymovement 3, PokemonTower2F_Azul_Move_7
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
removeobject 3
delay 20
applymovement 1, PokemonTower2F_Azul_Move_8
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_3
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_11 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 46
release
end

PokemonTower2F_Azul_2::
lock
faceplayer
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_1.2
applymovement 1, PokemonTower2F_Azul_Move_1
waitmovement 0x0
applymovement 1, PokemonTower2F_Azul_Move_2.1
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_3.1
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_1 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_2 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower2F_Azul_Move_2.1
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower2F_Azul_Move_4.1
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_5 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower2F_Azul_Move_2.1
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower2F_Azul_Texto_7.1 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower2F_Azul_Texto_7.2 MSGBOX_AUTOCLOSE
delay 10
playse SE_EXIT
clearflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
addobject 3
delay 20
playse SE_PIN
applymovement 1, PokemonTower2F_Azul_Move_1
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_1
waitmovement 0x0
applymovement 1, PokemonTower2F_Azul_Move_5.1
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_5.1
waitmovement 0x0
applymovement 3, PokemonTower2F_Azul_Move_6.1
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_8 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_9 MSGBOX_AUTOCLOSE
applymovement 3, PokemonTower2F_Azul_Move_2.1
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_10 MSGBOX_AUTOCLOSE
applymovement 3, PokemonTower2F_Azul_Move_7.1
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
removeobject 3
delay 20
applymovement 1, PokemonTower2F_Azul_Move_4.1
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_3.1
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_11 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 46
release
end

PokemonTower2F_Azul_Texto_1:
.string "AZUL: Así que ya estás aquí.$"

PokemonTower2F_Azul_Texto_2:
.string "Los otros ROCKET se encuentran en\n"
	.string "los pisos superiores, causando\l"
	.string "disturbios y atrapando CUBONES.\l"
	.string "Si ese tal FUJI adora tanto este\l"
	.string "lugar, no debería tardar en venir.$"

PokemonTower2F_Azul_Texto_3:
.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

PokemonTower2F_Azul_Texto_4:
.string "Oye, no te confundas.\n"
	.string "No formo parte de vuestra organización,\l"
	.string "solo soy una especie de colaborador,\l"
	.string "que puede hacer trabajos y favores\l"
	.string "puntuales, ¿ha quedado claro?$"

PokemonTower2F_Azul_Texto_5:
.string "Todo lo que quiero es obtener más\n"
	.string "poder para algún día proclamarme\l"
	.string "campeón de KANTO. El TEAM ROCKET\l"
	.string "puede ayudarme a descubrir muchos\l"
	.string "de los secretos que esta región\l"
	.string "esconde y proporcionarme recursos,\l"
	.string "dos cosas que nadie parece estar\l"
	.string "dispuesto a dar.$"

PokemonTower2F_Azul_Texto_6:
.string "Esa es la única manera de\n"
	.string "demostrar de una vez por todas que\l"
	.string "soy mejor que ROJO, ese ROJO{PAUSE 5}…{PAUSE 5}$"

PokemonTower2F_Azul_Texto_7:
.string "Mi abuelo OAK siempre ha tenido\n"
	.string "predilección por él. A mí, sin\l"
	.string "embargo, me da mala espina.$"
	
	
PokemonTower2F_Azul_Texto_7.1:
	.string "Nadie puede ser tan rematademente\n"
	.string "perfecto; parece llevar siempre\l"
	.string "todo al día, tener en cuenta todas\l"
	.string "las posibles opciones al combatir,\l"
	.string "y ese silencio{PAUSE 15}…{PAUSE 15}\l"
	.string "Eso es lo que más me irrita,\l"
	.string "siquiera se digna a entablar\l"
	.string "conversación: llega, te vence y te\l"
	.string "deja ahí tirado, como si fueras un\l"
	.string "mero trámite para él, antes de\l"
	.string "continuar con su próximo destino,\l"
	.string "la naturalidad con la que lo hace\l"
	.string "me repugna.$"
	
PokemonTower2F_Azul_Texto_7.2:
	.string "Parece{PAUSE 15}…{PAUSE 15} dar por hecho que\n"
	.string "va a derrotar a todos y ya está, pero\l"
	.string "no{PAUSE 15}…{PAUSE 15} me niego a formar parte de\l"
	.string "su ruta preestablecida, ningún\l"
	.string "ENTRENADORes invencible, y el no\l"
	.string "es la excepción, lo demostraré.$"

PokemonTower2F_Azul_Texto_8:
.string "FUJI: Las exorcistas me han\n"
	.string "avisado de que el TEAM ROCKET está\l"
	.string "coleccionando cráneos de CUBONE,\l"
	.string "¿sabes algo chaval?$"

PokemonTower2F_Azul_Texto_9:
.string "AZUL: He oído que están más\n"
	.string "arriba, sobre el piso 4 anciano.$"

PokemonTower2F_Azul_Texto_10:
.string "FUJI: Espero que no cometas la\n"
	.string "estupidez de subir y unirte a tus\l"
	.string "compañeros, joven. No tengo nada en\l"
	.string "contra vuestra, pero no voy a permitir\l"
	.string "que perturbéis la tranquilidad de\l"
	.string "este lugar.$"

PokemonTower2F_Azul_Texto_11:
.string "AZUL: Genial. Primera parte de la\n"
	.string "misión conseguida, {PLAYER}.\l"
	.string "FUJI ha mordido el anzuelo, lo único\l"
	.string "que tienes que hacer es asegurarte de\l"
	.string "que no salga de aquí hasta que PROTÓN\l"
	.string "llegue.$"

PokemonTower2F_Azul_Texto_12:
.string "Por mi parte, seguiré aquí.\n"
	.string "Como dijo GIOVANNI, os avisaré si\l"
	.string "ROJO aparece. No te preocupes, ¡lo\l"
	.string "entretendré durante un buen rato!$"

PokemonTower2F_Azul_Move_1:
emote_exclamation_mark
step_end

PokemonTower2F_Azul_Move_1.1:
walk_in_place_up
step_end

PokemonTower2F_Azul_Move_1.2:
walk_in_place_left
step_end

PokemonTower2F_Azul_Move_2:
walk_in_place_down
step_end

PokemonTower2F_Azul_Move_2.1:
face_right
step_end

PokemonTower2F_Azul_Move_3:
face_up
step_end

PokemonTower2F_Azul_Move_3.1:
walk_in_place_left
step_end

PokemonTower2F_Azul_Move_4:
walk_in_place_left
step_end

PokemonTower2F_Azul_Move_4.1:
walk_in_place_right
step_end


PokemonTower2F_Azul_Move_5:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_left
step_end

PokemonTower2F_Azul_Move_5.1:
face_down
step_end

PokemonTower2F_Azul_Move_6:
face_right
step_end

PokemonTower2F_Azul_Move_6.1:
walk_slow_up
walk_slow_up
walk_slow_left
walk_slow_left
walk_slow_up
walk_slow_up
step_end

PokemonTower2F_Azul_Move_7:
walk_slow_up
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
step_end

PokemonTower2F_Azul_Move_7.1:
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
step_end


PokemonTower2F_Azul_Move_8:
face_down
step_end

