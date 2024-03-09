NeoLavandaCementerioS2_MapScripts::
	.byte 0

NeoLavandaCementerioS2_2::
lock     
faceplayer     
msgbox NeoLavandaCementerioS2_Text_2, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS2_Text_2:
.string "La religión no trata tanto de decir al\n"
.string "hombre que hay un Dios como de impedir\l"
.string "que el hombre piense que es Dios.$"





NeoLavandaCementerioS2_3::
lock     
faceplayer     
msgbox NeoLavandaCementerioS2_Text_3, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS2_Text_3:
.string "Los hombres se destruyen unos a otros\n"
.string "en la guerra; y se destruyen a sí\l"
.string "mismos en tiempo de paz.$"





NeoLavandaCementerioS2_4::
lock     
faceplayer     
msgbox NeoLavandaCementerioS2_Text_4, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS2_Text_4:
.string "La ira es un ácido que hace más daño al\n"
.string "recipiente que la almacena que al\l"
.string "objeto sobre el que se vierte.$"




NeoLavandaCementerioS2_14::
lock     
faceplayer     
msgbox NeoLavandaCementerioS2_Text_14, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS2_Text_14:
.string "Jamás pensé que viviría para ver caer\n"
.string "la TORRE POKÉMON. Pronto me uniré a\l"
.string "todas estas almas que antaño\l"
.string "caminaban, al igual que nosotros. Solo\l"
.string "espero disfrutar del tiempo que me\l"
.string "queda.$"





NeoLavandaCementerioS2_15::
lock     
faceplayer     
msgbox NeoLavandaCementerioS2_Text_15, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS2_Text_15:
.string "¿Crees que este lugar logrará\n"
.string "conservar la esencia original de TORRE\l"
.string "POKEMON?$"






NeoLavandaCementerioS2_18::
lock     
faceplayer     
msgbox NeoLavandaCementerioS2_Text_18, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS2_Text_18:
.string "No debemos esperar la felicidad, no es\n"
.string "algo que merezcamos. Cuando la vida va\l"
.string "bien, es un regalo inesperado, no puede\l"
.string "durar siempre.$"



NeoLavandaCementerioS2_EventScript_Exorcista::
	trainerbattle_single TRAINER_TRAINER_37, NeoLavandaCementerioS2_Text_ExorcistaIntro, NeoLavandaCementerioS2_Text_ExorcistaDefeated
	msgbox NeoLavandaCementerioS2_Text_ExorcistaPostBattle, MSGBOX_AUTOCLOSE
	end



NeoLavandaCementerioS2_EventScript_Exorcista2::
	trainerbattle_single TRAINER_TRAINER_36, NeoLavandaCementerioS2_Text_Exorcista2Intro, NeoLavandaCementerioS2_Text_Exorcista2Defeated
	msgbox NeoLavandaCementerioS2_Text_Exorcista2PostBattle, MSGBOX_AUTOCLOSE
	end



NeoLavandaCementerioS2_EventScript_Exorcista3::
	trainerbattle_single TRAINER_TRAINER_38, NeoLavandaCementerioS2_Text_Exorcista3Intro, NeoLavandaCementerioS2_Text_Exorcista3Defeated
	msgbox NeoLavandaCementerioS2_Text_Exorcista3PostBattle, MSGBOX_AUTOCLOSE
	end


NeoLavandaCementerioS2_Combate_Azul::
lock
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaCementerioS2_Combate_Azul_Move_1
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaCementerioS2_Combate_Azul_Move_2
waitmovement 0x0
applymovement 19, NeoLavandaCementerioS2_Combate_Azul_Move_3
waitmovement 0x0
playse SE_PIN
applymovement 19, NeoLavandaCementerioS2_Combate_Azul_Move_4
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_2 MSGBOX_AUTOCLOSE
applymovement 19, NeoLavandaCementerioS2_Combate_Azul_Move_5
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 19, NeoLavandaCementerioS2_Combate_Azul_Move_3
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_5 MSGBOX_AUTOCLOSE
applymovement 19, NeoLavandaCementerioS2_Combate_Azul_Move_6
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_6 MSGBOX_AUTOCLOSE
applymovement 19, NeoLavandaCementerioS2_Combate_Azul_Move_7
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_39, NeoLavandaCementerioS2_Combate_Azul_Texto_8
applymovement 19, NeoLavandaCementerioS2_Combate_Azul_Move_8
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_9 MSGBOX_AUTOCLOSE
applymovement 19, NeoLavandaCementerioS2_Combate_Azul_Move_5
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_10 MSGBOX_AUTOCLOSE
applymovement 19, NeoLavandaCementerioS2_Combate_Azul_Move_7
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_11 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_12 MSGBOX_AUTOCLOSE
applymovement 19, NeoLavandaCementerioS2_Combate_Azul_Move_6
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_13 MSGBOX_AUTOCLOSE
applymovement 19, NeoLavandaCementerioS2_Combate_Azul_Move_5
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_14 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
fadescreen 1
delay 20
removeobject 19
fadescreen 0
setvar VAR_UNUSED_0x40F7, 209
release
end

NeoLavandaCementerioS2_Combate_Azul_Move_8:
lock_facing_direction
walk_slow_left
unlock_facing_direction
step_end

NeoLavandaCementerioS2_Combate_Azul_Move_7:
walk_in_place_right
step_end

NeoLavandaCementerioS2_Combate_Azul_Move_6:
walk_slow_right
step_end

NeoLavandaCementerioS2_Combate_Azul_Move_5:
face_up
step_end

NeoLavandaCementerioS2_Combate_Azul_Move_4:
emote_exclamation_mark
step_end

NeoLavandaCementerioS2_Combate_Azul_Move_3:
face_right
step_end

NeoLavandaCementerioS2_Combate_Azul_Move_2:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
face_left
step_end

NeoLavandaCementerioS2_Combate_Azul_Move_1:
walk_in_place_down
step_end

NeoLavandaCementerioS2_Combate_Azul_Texto_1:
.string "????: Como si fuera TORRE POKÉMON…$"

NeoLavandaCementerioS2_Combate_Azul_Texto_2:
.string "AZUL: {PLAYER}. Que estés en PUEBLO\n"
	.string "LAVANDA no me sorprende, sí que lo\l"
	.string "estés en este lugar en concreto.$"

NeoLavandaCementerioS2_Combate_Azul_Texto_3:
.string "Lo importante ahora ocurre en la nueva\n"
	.string "TORRE RADIO, ¿no es así? ¿Qué puede\l"
	.string "aportar este lugar a alguien cómo tú?\l"
	.string "¿No tienes reuniones y eventos por\l"
	.string "hacer allí?$"

NeoLavandaCementerioS2_Combate_Azul_Texto_4:
.string "…$"

NeoLavandaCementerioS2_Combate_Azul_Texto_5:
.string "Ya veo, hace un año hubiera ido contigo\n"
	.string "sin dudarlo, ahora mis prioridades son\l"
	.string "otras, aunque…$"

NeoLavandaCementerioS2_Combate_Azul_Texto_6:
.string "Hace mucho que no nos encontramos así,\n"
	.string "cara a cara. Tus viajes por JOHTO han\l"
	.string "debido fortalecerte mucho.$"

NeoLavandaCementerioS2_Combate_Azul_Texto_7:
.string "Siento curiosidad{PAUSE 25}…{PAUSE 25} por ver hasta dónde\n"
	.string "has llegado. ¡Muéstrame a tu equipo!$"

NeoLavandaCementerioS2_Combate_Azul_Texto_8:
.string "¡Ja! ¡Tal y como temía!$"

NeoLavandaCementerioS2_Combate_Azul_Texto_9:
.string "Apenas puedo reconocer a ese enérgico\n"
	.string "y vivaz GOLBAT. Tan escurridizo y lleno\l"
	.string "de potencial ya en ese entonces,\l"
	.string "cuando ambos iniciábamos nuestro\l"
	.string "viaje. Nadie creería que este CROBAT-&\l"
	.string "tan imponente fue una vez ese ZUBAT.$"

NeoLavandaCementerioS2_Combate_Azul_Texto_10:
.string "Me siento afortunado de haber\n"
	.string "compartido generación contigo,\l"
	.string "{PLAYER}. ANDRA y tú sois grandes\l"
	.string "ENTRENADORES, insaciables.$"

NeoLavandaCementerioS2_Combate_Azul_Texto_11:
.string "Mi ambición por ser el mejor acabó en el\n"
	.string "momento en que demostraste que ROJO\l"
	.string "no lo era, ya lo sabes.$"

NeoLavandaCementerioS2_Combate_Azul_Texto_12:
.string "Como mi abuelo, el estudio de los\n"
	.string "POKÉMON me atrae más que el combate en\l"
	.string "sí, si mientras puedo ayudaros a\l"
	.string "controlar el GIMNASIO de CIUDAD VERDE,\l"
	.string "será lo mejor para todos.$"

NeoLavandaCementerioS2_Combate_Azul_Texto_13:
.string "Ándate con cuidado, {PLAYER}. Algo me\n"
	.string "dice que en los tiempos modernos no\l"
	.string "vale únicamente con sentir pasión por\l"
	.string "el combate POKÉMON para destacar.$"

NeoLavandaCementerioS2_Combate_Azul_Texto_14:
.string "A mi manera, seguiré viviendo momentos\n"
	.string "como este, al igual que tú, aunque tal\l"
	.string "vez con menor intensidad.$"

NeoLavandaCementerioS2_Evento_Fuji::
lock
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaCementerioS2_Evento_Fuji_Move_1
waitmovement 0x0
applymovement 20, NeoLavandaCementerioS2_Evento_Fuji_Move_2
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Evento_Fuji_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox NeoLavandaCementerioS2_Evento_Fuji_Texto_2 MSGBOX_AUTOCLOSE
applymovement 20, NeoLavandaCementerioS2_Evento_Fuji_Move_3
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Evento_Fuji_Texto_3 MSGBOX_AUTOCLOSE
applymovement 20, NeoLavandaCementerioS2_Evento_Fuji_Move_4
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaCementerioS2_Evento_Fuji_Move_4
applymovement 5, NeoLavandaCementerioS2_Evento_Fuji_Move_5
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Evento_Fuji_Texto_4 MSGBOX_AUTOCLOSE
applymovement 5, NeoLavandaCementerioS2_Evento_Fuji_Move_6
waitmovement 0x0
playfanfare MUS_RG_OBTAIN_KEY_ITEM
waitfanfare
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaCementerioS2_Evento_Fuji_Move_7
applymovement 20, NeoLavandaCementerioS2_Evento_Fuji_Move_2
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Evento_Fuji_Texto_5 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 210
release
end

NeoLavandaCementerioS2_Evento_Fuji_Move_7:
face_left
step_end

NeoLavandaCementerioS2_Evento_Fuji_Move_6:
walk_in_place_up
step_end

NeoLavandaCementerioS2_Evento_Fuji_Move_5:
walk_right
face_up
step_end

NeoLavandaCementerioS2_Evento_Fuji_Move_4:
face_down
step_end

NeoLavandaCementerioS2_Evento_Fuji_Move_3:
face_up
step_end

NeoLavandaCementerioS2_Evento_Fuji_Move_1:
walk_down
walk_down
walk_down
face_left
step_end

NeoLavandaCementerioS2_Evento_Fuji_Move_2:
face_right
step_end

NeoLavandaCementerioS2_Evento_Fuji_Texto_1:
.string "FUJI: Ah, {PLAYER}. ¿Qué te parece?\n"
	.string "¿Crees que este lugar es un digno\l"
	.string "reemplazo de TORRE POKÉMON? No ha sido\l"
	.string "fácil construirlo.$"

NeoLavandaCementerioS2_Evento_Fuji_Texto_2:
.string "Como habrás podido comprobar, el lugar\n"
	.string "es un tanto inestable. No parece ser el\l"
	.string "espíritu de MAROWAK, ya lo\l"
	.string "ahuyentaste. Debe tratarse de algo\l"
	.string "más antiguo{PAUSE 25}…{PAUSE 25} tal vez vinculado a la\l"
	.string "creación misma de TORRE POKÉMON{PAUSE 25}…{PAUSE 25} es\l"
	.string "muy probable que haya visto su\l"
	.string "destrucción como un agravio a su\l"
	.string "descanso.$"

NeoLavandaCementerioS2_Evento_Fuji_Texto_3:
.string "Ahora mismo la zona norte es\n"
	.string "incontenible. La hemos cerrado por\l"
	.string "precaución, pero me temo que no hay\l"
	.string "otra opción que entrar ahí por la\l"
	.string "fuerza, y derrotar al espíritu en un\l"
	.string "combate POKÉMON.$"

NeoLavandaCementerioS2_Evento_Fuji_Texto_4:
.string "SECRETARIA: Aquí tienes la LLAVE.\n"
	.string "Mucha suerte.$"

NeoLavandaCementerioS2_Evento_Fuji_Texto_5:
.string "FUJI: Me mantendré cerca tuya,\n"
	.string "{PLAYER}.$"


NeoLavandaCementerioS2_Dialogo_Fuji::
lock
faceplayer
msgbox NeoLavandaCementerioS2_Evento_Fuji_Texto_5 MSGBOX_AUTOCLOSE
release
end


NeoLavandaCementerioS2_Evento_Ghost::
lock
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaCementerioS2_Evento_Ghost_Move_6
waitmovement 0x0
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaCementerioS2_Evento_Ghost_Move_1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, NeoLavandaCementerioS2_Evento_Ghost_Move_2
waitmovement 0x0
special RemoveCameraObject
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
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
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, NeoLavandaCementerioS2_Evento_Ghost_Move_3
waitmovement 0x0
special RemoveCameraObject
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaCementerioS2_Evento_Ghost_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaCementerioS2_Evento_Ghost_Move_4
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
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_145, NeoLavandaCementerioS2_Evento_Ghost_Texto_2
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
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
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_3 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_LILYCOVE_HARBOR_EVENT_TICKET_TAKER
addobject 22
applymovement 22, NeoLavandaCementerioS2_Evento_Ghost_Move_5
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_4 MSGBOX_AUTOCLOSE
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
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
	msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_5 MSGBOX_AUTOCLOSE
delay 20
playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement 22, NeoLavandaCementerioS2_Evento_Ghost_Move_1
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaCementerioS2_Evento_Ghost_Move_1
waitmovement 0x0
clearflag FLAG_HIDE_ROUTE_101_ZIGZAGOON
addobject 21
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, NeoLavandaCementerioS2_Evento_Ghost_Move_2
waitmovement 0x0
special RemoveCameraObject
playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_6 MSGBOX_DEFAULT
waitmoncry
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_M_MOONLIGHT
delay 40
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_7 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement 21, NeoLavandaCementerioS2_Evento_Ghost_Move_7.1
applymovement OBJ_EVENT_ID_CAMERA, NeoLavandaCementerioS2_Evento_Ghost_Move_7
waitmovement 0x0
special RemoveCameraObject
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_8 MSGBOX_AUTOCLOSE
playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_9 MSGBOX_DEFAULT
waitmoncry
delay 20
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_10 MSGBOX_AUTOCLOSE
delay 20
playse SE_M_DETECT
fadescreen 1
playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
setflag FLAG_HIDE_ROUTE_101_ZIGZAGOON
removeobject 21
waitmoncry
fadescreen 0
delay 40
applymovement 22, NeoLavandaCementerioS2_Evento_Ghost_Move_8
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaCementerioS2_Evento_Ghost_Move_9
waitmovement 0x0
delay 15
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_12 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LILYCOVE_HARBOR_EVENT_TICKET_TAKER
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
setflag FLAG_UNUSED_0x273
fadescreen 1
delay 20
removeobject 22
fadescreen 0
setvar VAR_UNUSED_0x40F7, 211
release
end


NeoLavandaCementerioS2_Evento_Ghost_Move_9:
face_left
step_end

NeoLavandaCementerioS2_Evento_Ghost_Move_8:
face_right
step_end

NeoLavandaCementerioS2_Evento_Ghost_Move_7.1:
walk_down
walk_down
walk_down
walk_down
step_end

NeoLavandaCementerioS2_Evento_Ghost_Move_7:
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

NeoLavandaCementerioS2_Evento_Ghost_Move_6:
walk_slow_up
step_end

NeoLavandaCementerioS2_Evento_Ghost_Move_5:
walk_up
walk_up
walk_up
walk_up
walk_left
walk_up
step_end


NeoLavandaCementerioS2_Evento_Ghost_Move_4:
walk_in_place_up
walk_in_place_right
walk_in_place_left
walk_in_place_down
walk_in_place_up
step_end

NeoLavandaCementerioS2_Evento_Ghost_Move_3:
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

NeoLavandaCementerioS2_Evento_Ghost_Move_2:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

NeoLavandaCementerioS2_Evento_Ghost_Move_1:
emote_exclamation_mark
step_end

NeoLavandaCementerioS2_Evento_Ghost_Texto_1:
.string "(Una energía extremadamente fuerte te\n"
	.string "ataca)$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_2:
.string "…$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_3:
.string "(¡La energía parece haberse alterado\n"
	.string "aún más!)$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_4:
.string "FUJI: ¡Ya es suficiente! ¡No fue\n"
	.string "nuestra decisión que esto acabara así!\l"
	.string "¡Ningún lugar es eterno, ni este\l"
	.string "CEMENTERIO, ni TORRE POKÉMON!$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_5:
.string "GHOST: …$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_6:
.string "MEW: …$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_7:
.string "(MEW apaciguó al espíritu)$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_8:
.string "FUJI: Después de tanto tiempo.$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_9:
.string "MEW: …$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_10:
.string "FUJI: …$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_11:
.string "¿Crees que MEW es también\n"
	.string "omnipresente? ¿Habrá visto todas y\l"
	.string "cada una de mis acciones desde lo de\l"
	.string "MEWTWO? ¿Todo lo que he luchado por\l"
	.string "mitigar los efectos de la TORRE RADIO\l"
	.string "en la esencia de PUEBLO LAVANDA?$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_12:
.string "FUJI: C-creo{PAUSE 45}…{PAUSE 45} que me ha perdonado.$"


NeoLavandaCementerioS2_Novena_Exorciasta::
lock
faceplayer
msgbox NeoLavandaCementerioS2_Novena_Exorciasta_Texto_1 MSGBOX_AUTOCLOSE
release
end

NeoLavandaCementerioS2_Novena_Exorciasta_Texto_1:
.string "No podemos evitar lo inevitable, pero sí\n"
	.string "prepararnos para que lo inevitable no\l"
	.string "nos destruya.$"

Llave_Cementerio_Warp::
lock
compare VAR_UNUSED_0x40F7, 209
goto_if_gt Llave_Cementerio_Warp_2
msgbox Llave_Cementerio_Warp_Texto_1 MSGBOX_AUTOCLOSE
release
end

Llave_Cementerio_Warp_Texto_1:
.string "(Detrás de esta puerta hay una energía\n"
	.string "muy fuerte)$"


Llave_Cementerio_Warp_2::
playse SE_CLICK
delay 20
playse SE_UNLOCK
setmetatile 28, 31, 0x285, FALSE
setmetatile 28, 30, 0x285, FALSE
setmetatile 29, 31, 0x282, FALSE
setmetatile 29, 30, 0x282, FALSE
special DrawWholeMapView
delay 60
release
end


NeoLavandaCementerioS2_14_NPC::
lock
faceplayer
msgbox NeoLavandaCementerioS2_14_NPC_Texto_1 MSGBOX_AUTOCLOSE
release
end

NeoLavandaCementerioS2_14_NPC_Texto_1:
.string "Tenéis miedo a todo como mortales que\n"
	.string "sois, y deseáis todo como si fuerais\l"
	.string "inmortales.$"
