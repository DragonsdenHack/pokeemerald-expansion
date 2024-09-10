VermilionCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, VermillionCity_OnTransition
	.byte 0

VermillionCity_OnTransition::
setflag FLAG_VISITED_VERMILION_CITY
end

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
lock
faceplayer
compare VAR_UNUSED_0x40F7, 32
goto_if_gt VermilionCity2_2
msgbox VermilionCity2_Texto_1 MSGBOX_AUTOCLOSE
release
end

VermilionCity2_2::
msgbox VermilionCity2_Texto_2 MSGBOX_AUTOCLOSE
release
end

VermilionCity2_Texto_2:
.string "El barco zarpó, volverá a CARMÍN\n"
	.string "dentro de un año.$"

VermilionCity2_Texto_1:
.string "¿Has visto al SS.ANNE amarrado en\n"
	.string "el puerto?$"


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
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
addobject 12
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, VermilionCitySurge_move1
waitmovement 0x0
fadeoutbgm 0
playse 507
delay 20
msgbox VermilionCity_Text_Surge, MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
fadescreen 1
delay 20
removeobject 12
fadescreen 0
delay 10
fadeoutbgm 0
playse 525
setflag FLAG_HIDE_UNION_ROOM_PLAYER_4
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
setflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
setflag FLAG_HOENN_700
setflag FLAG_HOENN_699
setflag FLAG_HOENN_698
setflag FLAG_HOENN_697
setflag FLAG_HOENN_696
setflag FLAG_HOENN_695
setflag FLAG_HOENN_694
setflag FLAG_HOENN_693
setflag FLAG_HOENN_692
setflag FLAG_HOENN_691
setflag FLAG_HOENN_690
setflag FLAG_HOENN_689
setflag FLAG_HOENN_688
setflag FLAG_HOENN_687
setflag FLAG_HOENN_686
setflag FLAG_HOENN_685
setflag FLAG_HOENN_684
setflag FLAG_HOENN_683
setflag FLAG_HOENN_682
setflag FLAG_HOENN_681
setflag FLAG_HOENN_680
setflag FLAG_HOENN_679
setflag FLAG_HOENN_678
setflag FLAG_HOENN_677
setflag FLAG_HOENN_676
setflag FLAG_HOENN_675
setflag FLAG_HOENN_674
setflag FLAG_HOENN_673
setflag FLAG_HOENN_672
setflag FLAG_HOENN_671
setflag FLAG_HOENN_670
setflag FLAG_HOENN_669
setflag FLAG_HOENN_668
setflag FLAG_HOENN_667
setflag FLAG_HOENN_666
setflag FLAG_HOENN_665
setflag FLAG_HOENN_664
setflag FLAG_HOENN_663
setflag FLAG_HOENN_662
setflag FLAG_HOENN_661
setflag FLAG_HOENN_660
setflag FLAG_HOENN_659
setflag FLAG_HOENN_658
setflag FLAG_HOENN_657
setflag FLAG_HOENN_656
setflag FLAG_HOENN_655
setflag FLAG_HOENN_654
setflag FLAG_HOENN_653
setflag FLAG_HOENN_652
setflag FLAG_HOENN_651
setflag FLAG_HOENN_650
setflag FLAG_HOENN_649
setflag FLAG_HOENN_648
setflag FLAG_HOENN_647
setflag FLAG_HOENN_646
setflag FLAG_HOENN_645
setflag FLAG_HOENN_644
setflag FLAG_HOENN_643
setflag FLAG_HOENN_642
setflag FLAG_HOENN_641
setflag FLAG_HOENN_640
setflag FLAG_EXPAND_MAX_LEVEL
setvar VAR_UNUSED_0x40F7, 7
release
end

VermilionCity_Text_Surge:
    .string "????: Ándate con cuidado chaval,\n"
	.string "más te vale respetar la\l"
	.string "tranquilidad de este lugar\l"
	.string "si no quieres problemas.\l"
	.string "Advertido quedas.$"

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
	.string "{PAUSE 15}…{PAUSE 15}\l"
	.string "{PAUSE 15}…{PAUSE 15}\l"
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
	.string "encontraremos{PAUSE 15}…{PAUSE 15}\l"
	.string "Me pregunto si podremos llegar a\l"
	.string "ver a GIOVANNI en pers…{PAUSE 5}$"

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
	.string "barco, el resto dejádmelo a mí…{PAUSE 5}$"

VermilioCity_Motorista_Text_9:
.string "TETSUO: ¡EH, TÚ!$"

VermilioCity_Motorista_Text_10:
.string "Sí tú, no sé que haces perdiendo\n"
	.string "el tiempo en un lugar así\l"
	.string "dedicando tu vida a POKÉMON tipo\l"
	.string "AGUA que de nada sirven y solo\l"
	.string "estorban.\l"
	.string "¡Malditos TENTACOOL, solo están\l"
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
	.string "WEEZING!\l"
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

VermilionCity_Rojo::
lockall
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Rojo_move1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, VermilionCity_Rojo_move2
waitmovement 0x0
special RemoveCameraObject
delay 15
playse SE_SLIDING_DOOR
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
addobject 7
delay 30
applymovement 7, VermilionCity_Rojo_move3
waitmovement 0x0
delay 20
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
removeobject 7
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, VermilionCity_Rojo_move4
waitmovement 0x0
special RemoveCameraObject
clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
setvar VAR_UNUSED_0x40F7, 29
release
end

VermilionCity_Rojo_move1:
emote_exclamation_mark
walk_in_place_down
step_end

VermilionCity_Rojo_move2:
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
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end


VermilionCity_Rojo_move3:
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end


VermilionCity_Rojo_move4:
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
walk_up
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

VermilionCity_Secundaria_AncianoMachop::
lock
faceplayer
compare VAR_UNUSED_0x409B, 2
goto_if_gt VermilionCity_Secundaria_AncianoMachop_6
compare VAR_UNUSED_0x409B, 2
goto_if_eq VermilionCity_Secundaria_AncianoMachop_5
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_2 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x409B, 1
goto_if_eq VermilionCity_Secundaria_AncianoMachop_4
compare VAR_UNUSED_0x40F7, 22
goto_if_gt VermilionCity_Secundaria_AncianoMachop_2
delay 20
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_3 MSGBOX_AUTOCLOSE
release
end





VermilionCity_Secundaria_AncianoMachop_2::
playse SE_PIN
applymovement 4, VermilionCity_Secundaria_AncianoMachop_Move_1
waitmovement 0x0
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_9 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq VermilionCity_Secundaria_AncianoMachop_3
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_10 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_11 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x409B, 1
release
end


VermilionCity_Secundaria_AncianoMachop_3::
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_13 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Secundaria_AncianoMachop_4::
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_8 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Secundaria_AncianoMachop_5:
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, VermilionCity_Secundaria_AncianoMachop_Move_1
waitmovement 0x0
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_5 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_6 MSGBOX_DEFAULT
givemon SPECIES_HITMONLEE, 20, ITEM_SCOPE_LENS
waitfanfare
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_7 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x409B, 3
release
end

VermilionCity_Secundaria_AncianoMachop_6:
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_4 MSGBOX_AUTOCLOSE
release
end



VermilionCity_Secundaria_AncianoMachop_Texto_1:
.string "Esos pijos del CLUB DE FANS, no\n"
	.string "paran de burlarse de mi proyecto,\l"
	.string "se creen los más guays e\l"
	.string "intocables solo por tener POKÉMON\l"
	.string "raros. Si tuviera algún POKÉMON\l"
	.string "más a parte de mi fiel MACHOP me\l"
	.string "encargaría personalmente de darles\l"
	.string "una lección.$"

VermilionCity_Secundaria_AncianoMachop_Texto_2:
.string "…\n"
	.string "…{PAUSE 5}$"

VermilionCity_Secundaria_AncianoMachop_Texto_3:
.string "Tú no pareces tener tampoco la\n"
	.string "suficiente experiencia como para\l"
	.string "enfrentar al PRESIDENTE de ese\l"
	.string "lugar. Vuelve cuando seas más\l"
	.string "fuerte si quieres hacer un buen\l"
	.string "negocio.$"

VermilionCity_Secundaria_AncianoMachop_Texto_4:
.string "¡Mi proyecto va como la seda\n"
	.string "ROCKET!\l"
	.string "¡En 3 años este solar contará con\l"
	.string "un edificio aún mayor que la SEDE\l"
	.string "SILPH de AZAFRÁN!\l"
	.string "¡Ya lo verás!$"

VermilionCity_Secundaria_AncianoMachop_Texto_5:
.string "¡Así que lo derrotaste!\n"
	.string "¡Honestamente dudaba de que\l"
	.string "pudieras tener oportunidad!\l"
	.string "¡No voy a negar que sus POKÉMON\l"
	.string "son una rareza en esta ciudad!\l"
	.string "¡Seguro que se le han bajado esos\l"
	.string "humos después de perder ante todos\l"
	.string "sus seguidores!\l"
	.string "¡Alguien como tú seguro que sabe\l"
	.string "exprimir el potencial de mi\l"
	.string "HITMONLEE!$"

VermilionCity_Secundaria_AncianoMachop_Texto_6:
.string "¡¡OBTUVISTE UN HITMONLEE AL\n"
	.string "NV:20!!$"

VermilionCity_Secundaria_AncianoMachop_Texto_7:
.string "Es uno de los POKÉMON LUCHA más\n"
	.string "raros y preciados de esta región,\l"
	.string "la fuerza de sus patadas es\l"
	.string "inigualable, conmigo estaba\l"
	.string "desaprovechado, seguro que tú\l"
	.string "puedes darle un mejor uso.$"

VermilionCity_Secundaria_AncianoMachop_Texto_8:
.string "¿Cómo va la misión?$"

VermilionCity_Secundaria_AncianoMachop_Texto_9:
.string "¡Oh!\n"
	.string "¿ALTO RANGO ROCKET dices?\l"
	.string "Sí, tus POKÉMON parecen tener\l"
	.string "cierto desarrollo, dime, ¿te\l"
	.string "interesaría hacer un pequeño\l"
	.string "trabajo?$"

VermilionCity_Secundaria_AncianoMachop_Texto_10:
.string "¡Genial!\n"
	.string "Escucha, el PRESIDENTE del CLUB DE\l"
	.string "FANS de esta ciudad es un señor\l"
	.string "con una gran reputación, que no ha\l"
	.string "hecho más que boicotear mi\l"
	.string "proyecto y burlarse de mis\l"
	.string "aspiraciones, cree que dentro de\l"
	.string "tres años esta parcela de tierra\l"
	.string "seguirá como un solar y yo me\l"
	.string "habré ido.$"

VermilionCity_Secundaria_AncianoMachop_Texto_11:
.string "Lo que quiero que hagas es que le\n"
	.string "des una lección delante de todos\l"
	.string "sus seguidores, siempre se jacta\l"
	.string "de ser un gran ENTRENADOR, haber\l"
	.string "capturado a más de 100 POKÉMON y\l"
	.string "tener el nivel de un LÍDER DE\l"
	.string "GIMNASIO, si le derrotas ahí toda\l"
	.string "su reputación se irá al garete y\l"
	.string "perderá toda su credibilidad.$"

VermilionCity_Secundaria_AncianoMachop_Texto_12:
.string "Yo no me moveré de aquí, te estaré\n"
	.string "esperando con una gran recompensa\l"
	.string "si haces lo que te he pedido.$"

VermilionCity_Secundaria_AncianoMachop_Texto_13:
.string "¿No?\n"
	.string "Vaya…\l"
	.string "Si cambias de opinión aquí estaré.$"

VermilionCity_Secundaria_AncianoMachop_Move_1:
emote_exclamation_mark
step_end


VermilionCity_Primer_NPC::
lock
faceplayer
msgbox VermilionCity_Primer_NPC_Texto_1 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Primer_NPC_Texto_1:
.string "¡Toda esta contaminación que\n"
	.string "últimamente se aprecia por la\l"
	.string "región debe ser culpa vuestra!\l"
	.string "¡Vuestros GRIMER y KOFFING acaban\l"
	.string "con el medio ambiente!$"

VermilionCity_Barco::
lock
compare VAR_UNUSED_0x40F7, 24
goto_if_eq VermilionCity_Barco_3
compare VAR_UNUSED_0x40F7, 25
goto_if_eq VermilionCity_Barco_3
compare VAR_UNUSED_0x40F7, 26
goto_if_eq VermilionCity_Barco_3
compare VAR_UNUSED_0x40F7, 27
goto_if_eq VermilionCity_Barco_3
compare VAR_UNUSED_0x40F7, 95
goto_if_lt VermilionCity_Barco_2
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLAS, 0
switch VAR_RESULT
case 0, EventScript_Prima
case 1, EventScript_Secunda
case 2, EventScript_Tera
case 3, EventScript_Mas
release
end

VermilionCity_Marinero::
compare VAR_UNUSED_0x40F7, 24
goto_if_eq VermilionCity_Marinero_3
compare VAR_UNUSED_0x40F7, 25
goto_if_eq VermilionCity_Marinero_3
compare VAR_UNUSED_0x40F7, 26
goto_if_eq VermilionCity_Marinero_3
compare VAR_UNUSED_0x40F7, 27
lock
faceplayer
goto_if_eq VermilionCity_Marinero_3
compare VAR_UNUSED_0x40F7, 95
goto_if_lt VermilionCity_Marinero_2
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLAS, 0
switch VAR_RESULT
case 0, EventScript_Prima
case 1, EventScript_Secunda
case 2, EventScript_Tera
case 3, EventScript_Mas
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Barco_Move_4
waitmovement 0x0
release
end

VermilionCity_Marinero_2::
lock
faceplayer
msgbox VermilionCity_Barco_Texto_1 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Marinero_3::
msgbox VermilionCity_Marinero_Texto_1 MSGBOX_DEFAULT
release
end

VermilionCity_Marinero_Texto_1:
.string "¡Insolente motorista!\n"
	.string "¡Que una manada de WAILORDS se\l"
	.string "abalance con su SALPICAR sobre\l"
	.string "vuestro CAMINO BICIS y quede\l"
	.string "inundado, me dirás ahí si los\l"
	.string "POKÉMON marinos sirven o no\l"
	.string "sirven!$"

VermilionCity_Barco_3::
release
end

VermilionCity_Barco_2::
applymovement 5, VermilionCity_Barco_Move_1
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Barco_Move_2
waitmovement 0x0
msgbox VermilionCity_Barco_Texto_1 MSGBOX_AUTOCLOSE
applymovement 5, VermilionCity_Barco_Move_3
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Barco_Move_4
waitmovement 0x0
release
end

VermilionCity_Barco_Move_1:
face_left
step_end

VermilionCity_Barco_Move_2:
face_right
step_end

VermilionCity_Barco_Move_3:
face_up
step_end

VermilionCity_Barco_Move_4:
walk_slow_up
walk_slow_up
step_end

EventScript_Mas::
multichoice 22, 0, MULTI_ISLAS2, 0
switch VAR_RESULT
case 0, EventScript_Cuarta
case 1, EventScript_Inta
case 2, EventScript_Exta
case 3, EventScript_Setima
release
end

VermilionCity_Barco_Texto_1:
.string "¡Nadie entra al muelle sin mi\n"
	.string "permiso ROCKET!\l"
	.string "¡Largo de aquí!$"

VermilionCity_Barco_Texto_2:
.string "Ah, tienes el IRIS-TICKET.\p"
	.string "¿Quieres subir a bordo del\n"
	.string "SURCAMAR?$"

VermilionCity_Barco_Texto_3:
.string "Estupendo, todo en regla.\p"
	.string "El SURCAMAR VELOCE 7\n"
	.string "va a zarpar en breve.$"

VermilionCity_Barco_Texto_4:
.string "¡Muy bien!\n"
	.string "¡Todos a bordo del SURCAMAR\l"
	.string "VELOCE 7!$"

EventScript_Setima::
msgbox VermilionCity_Barco_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 33 @BANCO DE MAPA
setvar VAR_0x8001 4 @NUMERO DE MAPA
setvar VAR_0x8002 8 @POSICION X
setvar VAR_0x8003 5 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end

EventScript_Exta::
msgbox VermilionCity_Barco_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 32 @BANCO DE MAPA
setvar VAR_0x8001 1 @NUMERO DE MAPA
setvar VAR_0x8002 8 @POSICION X
setvar VAR_0x8003 5 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end

EventScript_Inta::
msgbox VermilionCity_Barco_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 31 @BANCO DE MAPA
setvar VAR_0x8001 1 @NUMERO DE MAPA
setvar VAR_0x8002 8 @POSICION X
setvar VAR_0x8003 5 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end

EventScript_Cuarta::
msgbox VermilionCity_Barco_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 30 @BANCO DE MAPA
setvar VAR_0x8001 4 @NUMERO DE MAPA
setvar VAR_0x8002 8 @POSICION X
setvar VAR_0x8003 5 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end


EventScript_Prima::
msgbox VermilionCity_Barco_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 27 @BANCO DE MAPA
setvar VAR_0x8001 3 @NUMERO DE MAPA
setvar VAR_0x8002 8 @POSICION X
setvar VAR_0x8003 5 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end

EventScript_Secunda::
msgbox VermilionCity_Barco_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 28 @BANCO DE MAPA
setvar VAR_0x8001 3 @NUMERO DE MAPA
setvar VAR_0x8002 8 @POSICION X
setvar VAR_0x8003 5 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end

EventScript_Tera::
msgbox VermilionCity_Barco_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 34 @BANCO DE MAPA
setvar VAR_0x8001 0 @NUMERO DE MAPA
setvar VAR_0x8002 8 @POSICION X
setvar VAR_0x8003 5 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end


IslaPrima_Barco::
lock
faceplayer
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLAPRIMA, 0
switch VAR_RESULT
case 0, EventScript_Carmin
case 1, EventScript_Secunda
case 2, EventScript_Tera
case 3, EventScript_Mas
release
end

EventScript_Carmin::
msgbox VermilionCity_Barco_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 1 @BANCO DE MAPA
setvar VAR_0x8001 5 @NUMERO DE MAPA
setvar VAR_0x8002 23 @POSICION X
setvar VAR_0x8003 31 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end

IslaPrima_Secunda::
lock
faceplayer
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLASECUNDA, 0
switch VAR_RESULT
case 0, EventScript_Carmin
case 1, EventScript_Prima
case 2, EventScript_Tera
case 3, EventScript_Mas
release
end

IslaTera_Barco::
lock
faceplayer
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLATERA, 0
switch VAR_RESULT
case 0, EventScript_Carmin
case 1, EventScript_Prima
case 2, EventScript_Secunda
case 3, EventScript_Mas
release
end

IslaCuarta_Barco::
lock
faceplayer
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLACUARTA, 0
switch VAR_RESULT
case 0, EventScript_Inta
case 1, EventScript_Exta
case 2, EventScript_Setima
case 3, EventScript_Mas2
release
end

EventScript_Mas2::
multichoice 22, 0, MULTI_ISLASCLASIC, 0	
switch VAR_RESULT
case 0, EventScript_Carmin
case 1, EventScript_Prima
case 2, EventScript_Secunda
case 3, EventScript_Tera
release
end

IslaInta_Barco::
lock
faceplayer
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLAINTA, 0
switch VAR_RESULT
case 0, EventScript_Cuarta
case 1, EventScript_Exta
case 2, EventScript_Setima
case 3, EventScript_Mas2
release
end

IslaExta_Barco::
lock
faceplayer
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLAEXTA, 0
switch VAR_RESULT
case 0, EventScript_Cuarta
case 1, EventScript_Inta
case 2, EventScript_Setima
case 3, EventScript_Mas2
release
end

IslaSetima_Barco::
lock
faceplayer
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLASETIMA, 0
switch VAR_RESULT
case 0, EventScript_Cuarta
case 1, EventScript_Inta
case 2, EventScript_Exta
case 3, EventScript_Mas2
release
end

Vermilion_Motorista::
lock
msgbox Vermilion_Motorista_Texto_1 MSGBOX_DEFAULT
release
end

Vermilion_Motorista_Texto_1:
.string "¿Sabías que WEEZING puede aprender\n"
	.string "RAYO?\l"
	.string "¡Voy a fundir a todos tus POKÉMON\l"
	.string "acuáticos solo con ese bendito\l"
	.string "movimiento!$"

Vermilion_Anciano_Bill::
lock
msgbox Vermilion_Anciano_Bill_Texto_1 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_2 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_3 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_4 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_5 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_6 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_7 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_8 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_9 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_10 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_11 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_12 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_13 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_14 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_15 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_16 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_17 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_18 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_19 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_20 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_21 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_22 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_23 MSGBOX_AUTOCLOSE
release
end

Vermilion_Anciano_Bill_Texto_1:
	.string "Ha sido duro, MACHOP, pero ya tenemos\n"
	.string "todo listo para iniciar la construcción.$"

Vermilion_Anciano_Bill_Texto_2:
	.string "¡Vamos a honrar la región de KANTO y el\n"
	.string "ARCHI7 como ningún otro lugar lo hizo\l"
	.string "antes!$"

Vermilion_Anciano_Bill_Texto_3:
	.string "¡Chop!$"

Vermilion_Anciano_Bill_Texto_4:
	.string "POLICÍA de MESETA AÑIL.$"

Vermilion_Anciano_Bill_Texto_5:
	.string "¿Q-qué ocurre?$"

Vermilion_Anciano_Bill_Texto_6:
	.string "Hemos identificado irregularidades en\n"
	.string "este terreno. No es apto para la\l"
	.string "construcción, y está usted incurriendo\l"
	.string "en un delito.$"

Vermilion_Anciano_Bill_Texto_7:
	.string "Eso… ¡eso es imposible! Me dijeron que\n"
	.string "todo estaba en regla, íbamos a empezar\l"
	.string "a construir mañana.$"

Vermilion_Anciano_Bill_Texto_8:
	.string "La legislatura ha cambiado.$"

Vermilion_Anciano_Bill_Texto_9:
	.string "No… ¡no podéis hacerme esto!$"

Vermilion_Anciano_Bill_Texto_10:
	.string "¿Tenéis idea de todo lo que he pasado\n"
	.string "para llegar hasta aquí? ¿La cantidad de\l"
	.string "trabajo y dinero que he invertido para\l"
	.string "ello?$"

Vermilion_Anciano_Bill_Texto_11:
	.string "¡Llevo toda la vida trabajando por este\n"
	.string "sueño!$"

Vermilion_Anciano_Bill_Texto_12:
	.string "Los sueños a veces no se cumplen,\n"
	.string "anciano. De hecho, lo normal, es que no\l"
	.string "lo hagan. Bienvenido al mundo real.$"

Vermilion_Anciano_Bill_Texto_13:
	.string "¡No! ¡No tenéis derecho!$"

Vermilion_Anciano_Bill_Texto_14:
	.string "¡Lleváoslo de aquí!$"

Vermilion_Anciano_Bill_Texto_15:
	.string "¡Chop!$"

Vermilion_Anciano_Bill_Texto_16:
	.string "El COMITÉ de la LIGA POKÉMON se\n"
	.string "encargará de ti.$"

Vermilion_Anciano_Bill_Texto_17:
	.string "????: ¿Y bien?$"

Vermilion_Anciano_Bill_Texto_18:
	.string "SR.BILL. Misión cumplida, el ANCIANO y\n"
	.string "su MACHOP no interferirán en su\l"
	.string "proyecto.$"

Vermilion_Anciano_Bill_Texto_19:
	.string "BILL: Perfecto.$"

Vermilion_Anciano_Bill_Texto_20:
	.string "¿Quiere que eliminemos también el claro\n"
	.string "de tierra?$"

Vermilion_Anciano_Bill_Texto_21:
	.string "BILL: No, es irrelevante. Jamás hizo\n"
	.string "pública la naturaleza de su proyecto.$"

Vermilion_Anciano_Bill_Texto_22:
	.string "BILL: Quedará como un vestigio de lo\n"
	.string "que una vez pudo ser. La gente\l"
	.string "inventará divertidas historias,\l"
	.string "elucubrará teorías… y yo me reiré de\l"
	.string "todas ellas desde arriba.$"

Vermilion_Anciano_Bill_Texto_23:
	.string "Como usted guste, SR.BILL.$"

Vermilion_Cazabichos::
lock
delay 15
msgbox Vermilion_Cazabichos_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 13, Vermilion_Cazabichos_Move_2
waitmovement 0x0
msgbox Vermilion_Cazabichos_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, Vermilion_Cazabichos_Move_3
waitmovement 0x0
msgbox Vermilion_Cazabichos_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Vermilion_Cazabichos_Move_5
applymovement 13, Vermilion_Cazabichos_Move_4
waitmovement 0x0
delay 15
msgbox Vermilion_Cazabichos_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox Vermilion_Cazabichos_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox Vermilion_Cazabichos_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox Vermilion_Cazabichos_Texto_7 MSGBOX_AUTOCLOSE
applymovement 13, Vermilion_Cazabichos_Move_6
waitmovement 0x0
msgbox Vermilion_Cazabichos_Texto_8 MSGBOX_AUTOCLOSE
applymovement 13, Vermilion_Cazabichos_Move_1
waitmovement 0x0
setflag FLAG_HOENN_673
removeobject 13
playse SE_EXIT
setvar VAR_SCOTT_STATE, 2
release
end

Vermilion_Cazabichos_Move_6:
face_down
step_end

Vermilion_Cazabichos_Move_5:
walk_down
walk_left
walk_left
face_up
step_end

Vermilion_Cazabichos_Move_4:
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
face_right
step_end

Vermilion_Cazabichos_Move_3:
face_left
step_end

Vermilion_Cazabichos_Move_2:
face_player
step_end

Vermilion_Cazabichos_Move_1:
face_right
delay_16
walk_in_place_right
step_end

Vermilion_Cazabichos_Texto_1:
	.string "Fíjate, malditos…$"

Vermilion_Cazabichos_Texto_2:
	.string "Han ocultado la puerta para que todos\n"
	.string "se olviden de este lugar, y nadie haga\l"
	.string "preguntas.$"

Vermilion_Cazabichos_Texto_3:
	.string "Pero conozco mi casa mejor que ellos.\n"
	.string "Seguro que la otra entrada…$"

Vermilion_Cazabichos_Texto_4:
	.string "Como imaginé. Esos gorilas son tan\n"
	.string "descuidados que la han olvidado.$"

Vermilion_Cazabichos_Texto_5:
	.string "… …$"

Vermilion_Cazabichos_Texto_6:
	.string "No soy el mejor ENTRENADOR, pero\n"
	.string "ayudaré en todo lo que pueda, si con\l"
	.string "ello nuestras posibilidades aumentan.$"

Vermilion_Cazabichos_Texto_7:
	.string "Los últimos anuncios de LANCE hicieron\n"
	.string "que me hicieron perder la fe.$"

Vermilion_Cazabichos_Texto_8:
	.string "Pero ahora, al verte, me he dado cuenta\n"
	.string "de que queda una última opción: usar la\l"
	.string "fuerza.$"


Vermilion_Activador_Entrada::
compare VAR_SCOTT_STATE, 1
goto_if_gt Vermilion_Activador_Entrada_Pasa
release
end

Vermilion_Activador_Entrada_Pasa::
delay 15
msgbox Vermilion_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox Vermilion_Activador_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Vermilion_Activador_Entrada_Pasa_No
warp MAP_VERMILION_CITY_SECUNDARIA, 0, 2
release
end

Vermilion_Activador_Entrada_Texto_1:
.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

Vermilion_Activador_Entrada_Pasa_Text_YesNo:
.string "Hay una pequeña endidura entre las\n"
	.string "rocas, parece que se alarga varios\l"
	.string "metros. ¿Quieres cruzarla?$"

Vermilion_Activador_Entrada_Pasa_No::
release
end
