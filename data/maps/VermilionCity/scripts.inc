VermilionCity_MapScripts::
	.byte 0

VermilionCity1::
lock     
faceplayer     
msgbox VermilionCity_Text1, MSGBOX_DEFAULT
release     
end

VermilionCity_Text1:
.string "¡Toda esta contaminación que\n"
.string "últimamente se aprecia por la\l"
.string "región debe ser culpa vuestra!\l"
.string "¡Vuestros GRIMER y KOFFING acaban\l"
.string "con el medio ambiente!$"


VermilionCity2::
end


VermilionCity3::
end


VermilionCity4::
end


VermilionCity5::
end


VermilionCity6::
lock     
faceplayer     
msgbox VermilionCity_Text6, MSGBOX_DEFAULT
release     
end

VermilionCity_Text6:
.string "A vosotros los ROCKET pronto se\n"
.string "os va a acabar el privilegio de\l"
.string "poder usar nuestro transporte\l"
.string "marítimo. He oído que el COMITÉ DE\l"
.string "LA LIGA aprobará pronto una ley\l"
.string "que prohíba el transporte de\l"
.string "ROCKET en el trayecto CARMÍN-ISLA\l"
.string "INTA y viceversa.$"


VermilionCity7::
end


VermilionCity8::
end


VermilionCity9::
end


VermilionCity10::
end


VermilionCity11::
end



VermilionCityDocumento_100::
msgbox VermilionCityDocumento_Text_100, MSGBOX_SIGN   
end

VermilionCityDocumento_Text_100:
.string "CLUB DE FANS DE POKÉMON\n"
	.string "¡Todos los fans son bienvenidos!$"



VermilionCityDocumento_101::
msgbox VermilionCityDocumento_Text_101, MSGBOX_SIGN   
end

VermilionCityDocumento_Text_101:
	.string "LÍDER DE GIMNASIO DE CIUDAD\n"
	.string "CARMÍN: EL TENIENTE SURGE\l"
	.string "¡El rayo americano!$"



VermilionCityDocumento_102::
msgbox VermilionCityDocumento_Text_102, MSGBOX_SIGN   
end

VermilionCityDocumento_Text_102:
	.string "CIUDAD CARMÍN\n"
	.string "El puerto de las idílicas\l"
	.string "puestas de sol.$"



VermilionCityDocumento_103::
msgbox VermilionCityDocumento_Text_103, MSGBOX_SIGN   
end

VermilionCityDocumento_Text_103:
	.string "PUERTO DE CARMÍN$"



VermilionCityDocumento_104::
msgbox VermilionCityDocumento_Text_104, MSGBOX_SIGN   
end

VermilionCityDocumento_Text_104:
	.string "¡AVISO!\n"
	.string "La RUTA 12 está bloqueada por un\l"
	.string "POKÉMON durmiente.\l"
	.string "Se deberá de atravesar el TÚNEL\l"
	.string "ROCA para llegar a PUEBLO LAVANDA.\l"
	.string "POLICÍA DE CIUDAD CARMÍN$"

VermilionCityDerecha::     
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityDerechaMove1
waitmovement 0
msgbox VermilionCity_Text_Derecha, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityDerechaMove2
waitmovement 0
release     
end

VermilionCity_Text_Derecha:     
    .string "(Debería ir a curar a mi equipo\n"
	.string "antes por si las moscas).$"


VermilionCityDerechaMove1:
walk_in_place_slow_down
step_end

VermilionCityDerechaMove2:
walk_down
step_end


VermilionCityIzq::     
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityIzqMove1
waitmovement 0
msgbox VermilionCity_Text_Izq, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityIzqMove2
waitmovement 0
release     
end

VermilionCity_Text_Izq:     
    .string "(Debería ir a curar a mi equipo\n"
	.string "antes por si las moscas).$"


VermilionCityIzqMove1:
walk_in_place_slow_left
step_end

VermilionCityIzqMove2:
walk_left
step_end

VermilionCityFlag::     
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
removeobject 7
removeobject 12
release     
end

VermilionCitySurge:: 
playse SE_SLIDING_DOOR
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
addobject 12
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, VermilionCitySurge_move1
waitmovement 0x0
delay 20
msgbox VermilionCity_Text_Surge, MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
fadescreen 1
delay 20
removeobject 12
fadescreen 0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_4
setvar VAR_UNUSED_0x40F7, 7
release
end

VermilionCity_Text_Surge:
    .string "????: Ándate con cuidado chaval,\n"
	.string "más te vale respetar la\l"
	.string "tranquilidad de este lugar si no\l"
	.string "quieres problemas. Advertido\l"
	.string "quedas.$"

VermilionCitySurge_move1:
emote_exclamation_mark
jump_special_down
face_up
step_end

VermilioCity_Motorista::
lockall
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_1
waitmovement 0x0
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_2
waitmovement 0x0
goto VermilioCity_Motorista_4

VermilioCity_Motorista_2::
lockall
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_1
waitmovement 0x0
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_2.1
waitmovement 0x0
goto VermilioCity_Motorista_4

VermilioCity_Motorista_3::
lockall
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_1
waitmovement 0x0
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_2.2
waitmovement 0x0
goto VermilioCity_Motorista_4


VermilioCity_Motorista_4::
delay 5
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
addobject 9
applymovement 9, VermilioCity_Motorista_move_3
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_1 MSGBOX_AUTOCLOSE
applymovement 9, VermilioCity_Motorista_move_4
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_2 MSGBOX_AUTOCLOSE
applymovement 9, VermilioCity_Motorista_move_1
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_5
applymovement 9, VermilioCity_Motorista_move_5
waitmovement 0x0
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_2
addobject 10
applymovement 10, VermilioCity_Motorista_move_6
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_7
applymovement 9, VermilioCity_Motorista_move_7
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_4 MSGBOX_AUTOCLOSE
applymovement 9, VermilioCity_Motorista_move_8
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_5 MSGBOX_AUTOCLOSE
applymovement 10, VermilioCity_Motorista_move_9
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_6 MSGBOX_AUTOCLOSE
applymovement 10, VermilioCity_Motorista_move_10
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_7 MSGBOX_AUTOCLOSE
msgbox VermilioCity_Motorista_Text_8 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_1
applymovement 9, VermilioCity_Motorista_move_1
waitmovement 0x0
applymovement 10, VermilioCity_Motorista_move_11
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_9 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, VermilioCity_Motorista_move_12
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_10 MSGBOX_AUTOCLOSE
applymovement 5, VermilioCity_Motorista_move_13
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_11 MSGBOX_AUTOCLOSE
applymovement 10, VermilioCity_Motorista_move_14
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_12 MSGBOX_AUTOCLOSE
applymovement 5, VermilioCity_Motorista_move_8
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_13 MSGBOX_AUTOCLOSE
applymovement 10, VermilioCity_Motorista_move_15
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_16
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_14 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_17
applymovement 9, VermilioCity_Motorista_move_17
waitmovement 0x0
delay 10
applymovement 9, VermilioCity_Motorista_move_18
waitmovement 0x0
removeobject 9
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
setflag FLAG_HIDE_UNION_ROOM_PLAYER_2
playse SE_EXIT
addobject 11
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
setvar VAR_UNUSED_0x40DC, 1
setvar VAR_UNUSED_0x40F7, 24
release
end

VermilioCity_Motorista_Text_1:
.string "ANDRA: ¿Alguna noticia de nuestro\n"
	.string "supuesto comodín para entrar al\l"
	.string "SS.ANNE?\l"
	.string "...\l"
	.string "...\l"
	.string "Ya veo.$"

VermilioCity_Motorista_Text_2:
.string "Las cosas parecen haber mejorado\n"
	.string "mucho para nosotros desde el\l"
	.string "fiasco del MT.MOON, solo era\l"
	.string "cuestión de tiempo para que\l"
	.string "reconocieran tu nivel, ahora somos\l"
	.string "RECLUTAS DE ALTO RANGO.\l"
	.string "¿Sabes lo que eso significa no?\l"
	.string "Nos concederán misiones de cada\l"
	.string "vez más importancia, y podremos\l"
	.string "empezar a movernos entre los peces\l"
	.string "gordos de la organización, esta ya\l"
	.string "no parece una misión convencional,\l"
	.string "¿vistes nuestras caras cuando nos\l"
	.string "enteramos de que el mismo GIOVANNI\l"
	.string "en persona había ordenado esta\l"
	.string "misión?$"

VermilioCity_Motorista_Text_3:
.string "Sea lo que sea que contenga ese\n"
	.string "frasco del CAPITÁN, lo\l"
	.string "encontraremos...\l"
	.string "Me pregunto si podremos llegar a\l"
	.string "ver a GIOVANNI en pers...$"

VermilioCity_Motorista_Text_4:
.string "Vosotros debéis de ser los ALTOS\n"
	.string "RANGOS enviados por PETREL,\l"
	.string "¿cierto?$"

VermilioCity_Motorista_Text_5:
.string "ANDRA: Exacto, ¿y tu eres?$"

VermilioCity_Motorista_Text_6:
.string "TETSUO, uno de los jefes de la\n"
	.string "ASOCIACIÓN DE MOTORISTAS DE KANTO,\l"
	.string "pero eso poco importa.$"

VermilioCity_Motorista_Text_7:
.string "TETSUO: Mirad, os diré lo que\n"
	.string "vamos a hacer, he investigado a\l"
	.string "este tipo y es un apasionado de\l"
	.string "los POKÉMON marinos, si soy capaz\l"
	.string "de darle donde más le duele\l"
	.string "captaré su atención lo suficiente\l"
	.string "como para que desatienda su\l"
	.string "puesto.$"

VermilioCity_Motorista_Text_8:
.string "TETSUO: Cuando os dé la orden\n"
	.string "avanzad y entrad rápidamente al\l"
	.string "barco, el resto dejádmelo a mi...$"

VermilioCity_Motorista_Text_9:
.string "TETSUO: ¡EH, TÚ!$"

VermilioCity_Motorista_Text_10:
.string "Sí tú, no sé que haces perdiendo\n"
	.string "el tiempo en un lugar así\l"
	.string "dedicando tu vida a POKÉMON tipo\l"
	.string "AGUA que de nada sirven y solo\l"
	.string "estorban.\l"
	.string "¡Malditos TENTACOOLS, solo están\l"
	.string "para arruinarnos los veranos!$"

VermilioCity_Motorista_Text_11:
.string "MARINERO: ¿Como dices?\n"
	.string "¡Insolente MOTORISTA amante de los\l"
	.string "POKÉMON tipo VENENO!\l"
	.string "¡Por si no lo sabías TENTACOOL es\l"
	.string "también de ese tipo!$"

VermilioCity_Motorista_Text_12:
.string "TETSUO: Y así le va, los POKÉMON\n"
	.string "tipo VENENO de verdad, como\l"
	.string "WEEZING, GENGAR o GOLBAT, saben\l"
	.string "lidiar con su mejor enemigo: el\l"
	.string "tipo TIERRA, TENTACOOL y\l"
	.string "TENTACRUEL en cambio no tienen\l"
	.string "remedio, se han visto contaminados\l"
	.string "por el tipo más nefasto de todos:\l"
	.string "el AGUA, lo que les ha privado de\l"
	.string "todas las virtudes que un VENENO\l"
	.string "de verdad tendría.\l"
	.string "¡El tipo AGUA intoxica al resto de\l"
	.string "tipos!$"

VermilioCity_Motorista_Text_13:
.string "MARINERO: ¡No voy a consentir que\n"
	.string "hables de los POKÉMON acuáticos en\l"
	.string "ese tono sucio motorista\l"
	.string "corrompido por el hedor de sus\l"
	.string "WEEZINGS!\l"
	.string "¡Te voy a demostrar lo equivocado\l"
	.string "que estás!$"

VermilioCity_Motorista_Text_14:
.string "ANDRA: ¡Ahora {PLAYER}!$"

VermilioCity_Motorista_move_1:
walk_in_place_left
step_end

VermilioCity_Motorista_move_2:
emote_exclamation_mark
walk_down
walk_down
walk_in_place_right
step_end

VermilioCity_Motorista_move_2.1:
emote_exclamation_mark
walk_down
walk_in_place_right
step_end

VermilioCity_Motorista_move_2.2:
emote_exclamation_mark
walk_in_place_right
step_end

VermilioCity_Motorista_move_3:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

VermilioCity_Motorista_move_4:
walk_in_place_up
walk_in_place_left
step_end

VermilioCity_Motorista_move_5:
emote_exclamation_mark
walk_in_place_right
step_end

VermilioCity_Motorista_move_6:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

VermilioCity_Motorista_move_7:
face_up
step_end

VermilioCity_Motorista_move_8:
walk_in_place_up
step_end

VermilioCity_Motorista_move_9:
walk_in_place_down
step_end

VermilioCity_Motorista_move_10:
walk_in_place_left
walk_in_place_down
step_end

VermilioCity_Motorista_move_11:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
step_end

VermilioCity_Motorista_move_12:
emote_exclamation_mark
step_end

VermilioCity_Motorista_move_13:
emote_exclamation_mark
walk_in_place_up
step_end

VermilioCity_Motorista_move_14:
walk_down
step_end

VermilioCity_Motorista_move_15:
walk_in_place_up
walk_in_place_down
step_end

VermilioCity_Motorista_move_16:
walk_in_place_right
step_end

VermilioCity_Motorista_move_17:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
step_end

VermilioCity_Motorista_move_18:
walk_in_place_left
walk_in_place_down
walk_slow_down
walk_slow_down
step_end
