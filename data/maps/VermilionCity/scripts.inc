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
