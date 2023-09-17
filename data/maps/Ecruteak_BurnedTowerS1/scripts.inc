Ecruteak_BurnedTowerS1_MapScripts::
	.byte 0

BurnedTowerS1_2::
lock     
faceplayer     
msgbox Ecruteak_BurnedTower_Text_2, MSGBOX_DEFAULT
release     
end

Ecruteak_BurnedTower_Text_2:
.string "No pudimos hacer nada…$"



BurnedTowerS1_3::
lock     
faceplayer     
msgbox Ecruteak_BurnedTower_Text_3, MSGBOX_DEFAULT
release     
end

Ecruteak_BurnedTower_Text_3:
.string "Como esto siga así, terminará\n"
.string "por derrumbar lo que queda de TORRE\l"
.string "QUEMADA…$"



BurnedTowerS1_6::
lock     
faceplayer     
msgbox Ecruteak_BurnedTower_Text_6, MSGBOX_DEFAULT
release     
end

Ecruteak_BurnedTower_Text_6:
.string "Ese tipo…\n"
.string "Ha arrasado con todos nuestros\l"
.string "POKÉMON sin ningún esfuerzo…$"



BurnedTowerS1_7::
lock     
faceplayer     
msgbox Ecruteak_BurnedTower_Text_7, MSGBOX_DEFAULT
release     
end

Ecruteak_BurnedTower_Text_7:
.string "Jamás he visto tamaña fuerza\n"
.string "bruta, ¿será un LEGENDARIO de\l"
.string "alguna región lejana?$"

Ecruteak_BurnedTower_S1_Zeus_Combate::
lockall
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA
addobject 4
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_1
waitmovement 0x0
playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_2
waitmovement 0x0
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_1 MSGBOX_AUTOCLOSE
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_3
waitmovement 0x0
special RemoveCameraObject
playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_2 MSGBOX_DEFAULT
waitmoncry
delay 28
delay 15
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA
removeobject 4
playse SE_BALL_OPEN
clearflag FLAG_HIDE_ROUTE_110_BIRCH
addobject 1
waitse
delay 15
playse SE_RG_BALL_CLICK
waitse
playse SE_BALL_TRADE
delay 15
setflag FLAG_HIDE_ROUTE_110_BIRCH
removeobject 1
delay 15
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_3 MSGBOX_AUTOCLOSE
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_4 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_4
waitmovement 0x0
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_5 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_5
waitmovement 0x0
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_6 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_4
waitmovement 0x0
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_7 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_6
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_7
waitmovement 0x0
special RemoveCameraObject
waitmovement 0x0
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_8 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_4
waitmovement 0x0
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_9 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ZEUS_2, Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_10
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_11 MSGBOX_AUTOCLOSE
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_12 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_8
waitmovement 0x0
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_13 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
removeobject 8
playse SE_WARP_OUT
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_14 MSGBOX_AUTOCLOSE
waitse
delay 10
fadescreen 0
playse SE_EXIT
clearflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
addobject 9
applymovement 9, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_9
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_10
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_7.2
waitmovement 0x0
special RemoveCameraObject
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_15 MSGBOX_AUTOCLOSE
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_16 MSGBOX_AUTOCLOSE
applymovement 9, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_11
waitmovement 0x0
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_17 MSGBOX_AUTOCLOSE
applymovement 9, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_1
waitmovement 0x0
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_18 MSGBOX_AUTOCLOSE
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_19 MSGBOX_AUTOCLOSE
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_20 MSGBOX_AUTOCLOSE
applymovement 9, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_10
waitmovement 0x0
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_21 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
setflag FLAG_HIDE_ROUTE_109_MR_BRINEY
setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
setflag FLAG_HIDE_VICTORY_ROAD_EXIT_WALLY
fadescreen 1
delay 20
removeobject 3
removeobject 2
removeobject 6
removeobject 7
removeobject 9
fadescreen 0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_7.1
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40F7, 141
release
end

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_7.1:
walk_up
walk_up
walk_up
step_end

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_7.2:
walk_down
walk_down
walk_down
step_end

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_1:
.string "????: ¿Tú otra vez?$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_2:
.string "¡Don!$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_3:
.string "ZEUS: Esperaba encontrar algo\n"
	.string "interesante aquí, pero hace tiempo\l"
	.string "que el LEGENDARIO LUGIA abandonó\l"
	.string "este lugar para nunca regresar.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_4:
.string "Fue aquí donde HO-OH salvó a 3\n"
	.string "POKÉMON de un destino cruel,\l"
	.string "convirtiéndolos en las 3 bestias\l"
	.string "errantes.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_5:
.string "Nada más lejos de la realidad, el\n"
	.string "poder de esos 3 POKÉMON es\l"
	.string "mediocre. No llegan a tocar en sus\l"
	.string "mejores estadísticas siquiera lo\l"
	.string "más bajo del creador de todo.\l"
	.string "LANCE creía ser poderoso con ellos\l"
	.string "bajo control, y no era más que\l"
	.string "otro iluso más.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_6:
.string "En cambio, HO-OH...\n"
	.string "TORRE CAMPANA...\l"
	.string "Presiento que volverá a aparecer.\l"
	.string "Podría quitar de en medio a todos\l"
	.string "esos PENSADORES que impiden cruzar\l"
	.string "la SENDA DINDÓN, pero aún es\l"
	.string "pronto para armar todo ese ruido,\l"
	.string "mi destino ahora es otro.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_7:
.string "Consideré como una casualidad\n"
	.string "nuestro pequeño encuentro en TORRE\l"
	.string "BELLSPROUT. Sin embargo, vuelves a\l"
	.string "aparecer por aquí. De nuevo,\l"
	.string "casualmente, cuando trataba\l"
	.string "de ver si este lugar escondía algo\l"
	.string "interesante.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_8:
.string "Ya te advertí que no tendría\n"
	.string "reparo en acabar contigo si te\l"
	.string "ponías en medio. Parece que\l"
	.string "necesitas que te recuerde el vasto\l"
	.string "poder que controlo. Un 50% no fue\l"
	.string "suficiente, ¿cierto?$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_9:
.string "Veamos, pues, qué puedes hacer\n"
	.string "ante un 65% de mi poder.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_10:
.string "Entonces 3 LEGENDARIOS MAYORES no\n"
	.string "son suficiente, qué interesante.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_11:
.string "Debo aplaudirte {PLAYER}, eres de\n"
	.string "esos que sacan lo mejor de cada uno\l"
	.string "de sus 6 POKÉMON y se agarra al\l"
	.string "combate como sea hasta terminar\l"
	.string "ganando. A gente como tú hay que\l"
	.string "aplastarla de un solo golpe antes\l"
	.string "de que os de tiempo a reaccionar.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_12:
.string "Lamentablemente para ti y tus\n"
	.string "POKÉMON, habéis llegado a vuestro\l"
	.string "límite. Mi equipo, en cambio, no\l"
	.string "llega a ser un burdo boceto de lo\l"
	.string "que será cuando logre mi objetivo.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_13:
.string "Espero por tu bien que no vuelvan\n"
	.string "a darse más casualidades como\l"
	.string "esta, o me obligarás a subir aún\l"
	.string "más el nivel.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_14:
.string "(ZEUS usó CUERDA HUIDA).$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_15:
.string "????: ¿Es él quién estaba causando\n"
	.string "todo este alboroto?$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_16:
.string "MAESTRO JAREN, al contrario, este\n"
	.string "ENTRENADOR acaba de derrotar en un\l"
	.string "combate al agitador.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_17:
.string "JAREN: Mmm...\n"
	.string "Debes de ser {PLAYER}, AGATHA ya me\l"
	.string "ha hablado de ti. En nombre de\l"
	.string "CIUDAD IRIS te doy las gracias por\l"
	.string "lo que has hecho.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_18:
.string "Tu presencia será más que\n"
	.string "bienvenida en TORRE CAMPANA, pero\l"
	.string "tendrá que prolongarse un poco\l"
	.string "más.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_19:
.string "He quedado fascinado con el\n"
	.string "POKÉMON FUERTE VÍNCULO de tu\l"
	.string "amigo, MIRTO, y estaré muy ocupado\l"
	.string "estudiándolo detenidamente.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_20:
.string "Además, el otro GRAN MAESTRO de\n"
	.string "JOHTO vendrá pronto a visitarme,\l"
	.string "te prometo, {PLAYER}, que a su\l"
	.string "debido tiempo podrás ver TORRE\l"
	.string "CAMPANA. Te lo haré saber.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_21:
.string "No se hable más.\n"
	.string "¡TORRE QUEMADA sigue en pie, y la\l"
	.string "energía de las 3 bestias errantes,\l"
	.string "que puedo percibir en esta sala,\l"
	.string "intacta!\l"
	.string "Volvamos a TORRE CAMPANA.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_1:
walk_in_place_up
step_end

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_2:
emote_exclamation_mark
step_end

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_3:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_4:
walk_in_place_down
step_end

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_5:
face_right
step_end

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_6:
walk_down
walk_down
walk_down
walk_down
step_end

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_7:
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_8:
face_up
step_end

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_9:
walk_slow_right
walk_slow_up
walk_slow_right
walk_slow_up
walk_slow_up
walk_in_place_up
face_right
step_end

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_10:
face_down
step_end

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_11:
walk_slow_up
walk_in_place_up
step_end
