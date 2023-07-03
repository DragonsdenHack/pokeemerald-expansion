RocketHideoutViridian_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideoutViridian_OnFrame
    .byte 0

RocketHideoutViridian_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 83, RocketHideoutViridian_Escena_8
	.2byte 0

RocketHideoutViridian4::
end



RocketHideoutViridian5::
end



RocketHideoutViridian6::
end



RocketHideoutViridian7::
end



RocketHideoutViridian8::
end



RocketHideoutViridian9::
end



RocketHideoutViridian10::
end



RocketHideoutViridian11::
end



RocketHideoutViridian12::
end



RocketHideoutViridian13::
end



RocketHideoutViridian14::
end



RocketHideoutViridian15::
end



RocketHideoutViridian_EventScript_Rocket::
	trainerbattle_single TRAINER_ANTHONY, RocketHideoutViridian_Text_RocketIntro, RocketHideoutViridian_Text_RocketDefeated
	msgbox RocketHideoutViridian_Text_RocketPostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Rocket2::
	trainerbattle_single TRAINER_BENJAMIN_1, RocketHideoutViridian_Text_Rocket2Intro, RocketHideoutViridian_Text_Rocket2Defeated
	msgbox RocketHideoutViridian_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Rocket3::
	trainerbattle_single TRAINER_BENJAMIN_2, RocketHideoutViridian_Text_Rocket3Intro, RocketHideoutViridian_Text_Rocket3Defeated
	msgbox RocketHideoutViridian_Text_Rocket3PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Rocket4::
	trainerbattle_single TRAINER_BENJAMIN_4, RocketHideoutViridian_Text_Rocket4Intro, RocketHideoutViridian_Text_Rocket4Defeated
	msgbox RocketHideoutViridian_Text_Rocket4PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Rocket5::
	trainerbattle_single TRAINER_BENJAMIN_3, RocketHideoutViridian_Text_Rocket5Intro, RocketHideoutViridian_Text_Rocket5Defeated
	msgbox RocketHideoutViridian_Text_Rocket5PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Rocket6::
	trainerbattle_single TRAINER_BENJAMIN_5, RocketHideoutViridian_Text_Rocket6Intro, RocketHideoutViridian_Text_Rocket6Defeated
	msgbox RocketHideoutViridian_Text_Rocket6PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Rocket7::
	trainerbattle_single TRAINER_ABIGAIL_4, RocketHideoutViridian_Text_Rocket7Intro, RocketHideoutViridian_Text_Rocket7Defeated
	msgbox RocketHideoutViridian_Text_Rocket7PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Rocket8::
	trainerbattle_single TRAINER_ABIGAIL_5, RocketHideoutViridian_Text_Rocket8Intro, RocketHideoutViridian_Text_Rocket8Defeated
	msgbox RocketHideoutViridian_Text_Rocket8PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Cientifico::
	trainerbattle_single TRAINER_ABIGAIL_1, RocketHideoutViridian_Text_CientificoIntro, RocketHideoutViridian_Text_CientificoDefeated
	msgbox RocketHideoutViridian_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Cientifico2::
	trainerbattle_single TRAINER_JASMINE, RocketHideoutViridian_Text_Cientifico2Intro, RocketHideoutViridian_Text_Cientifico2Defeated
	msgbox RocketHideoutViridian_Text_Cientifico2PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Cientifico3::
	trainerbattle_single TRAINER_ABIGAIL_3, RocketHideoutViridian_Text_Cientifico3Intro, RocketHideoutViridian_Text_Cientifico3Defeated
	msgbox RocketHideoutViridian_Text_Cientifico3PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Cientifico4::
	trainerbattle_single TRAINER_ABIGAIL_2, RocketHideoutViridian_Text_Cientifico4Intro, RocketHideoutViridian_Text_Cientifico4Defeated
	msgbox RocketHideoutViridian_Text_Cientifico4PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideoutViridian_Combate_Proton_Izq::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideoutViridian_Combate_Proton_Move_1
waitmovement 0x0
goto RocketHideoutViridian_Combate_Proton

RocketHideoutViridian_Combate_Proton_Der::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideoutViridian_Combate_Proton_Move_1.1
waitmovement 0x0
goto RocketHideoutViridian_Combate_Proton

RocketHideoutViridian_Combate_Proton::
applymovement 3, RocketHideoutViridian_Combate_Proton_Move_2
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Proton_Texto_1 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Combate_Proton_Texto_2 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Combate_Proton_Texto_3 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
applymovement 3, RocketHideoutViridian_Combate_Proton_Move_3
waitmovement 0x0
delay 15
trainerbattle_no_intro TRAINER_PROTON, RocketHideoutViridian_Combate_Proton_Texto_4 
msgbox RocketHideoutViridian_Combate_Proton_Texto_5 MSGBOX_AUTOCLOSE
delay 10
setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDAS_BOYFRIEND
fadescreen 1
delay 20
removeobject 3
fadescreen 0
setvar VAR_UNUSED_0x40F7, 87
release
end

RocketHideoutViridian_Combate_Proton_Texto_1:
.string "PROTÓN: Estás aquí {PLAYER}, viendo\n"
	.string "tu trayectoria, era de esperar que\l"
	.string "no tardarías mucho en vencer a los\l"
	.string "LÍDERES DE GIMNASIO y llegar hasta\l"
	.string "aquí, nuestra BASE SECRETA con la\l"
	.string "mejor tapadera de todas.$"

RocketHideoutViridian_Combate_Proton_Texto_2:
.string "Como ya sabrás, en esta\n"
	.string "organización hay que demostrar que\l"
	.string "se está a la altura y se es merecedor\l"
	.string "de las misiones que se le confían,\l"
	.string "en este caso la tuya es la más\l"
	.string "complicada de todas, y eso\l"
	.string "requiere medidas de prueba\l"
	.string "extremas...$"

RocketHideoutViridian_Combate_Proton_Texto_3:
.string "Los LÍDERES DE GIMNASIO son una\n"
	.string "buena vara de medir, pero debes de\l"
	.string "demostrar que eres el ROCKET más\l"
	.string "cualificado para tan importante\l"
	.string "misión, los EJECUTIVOS y\l"
	.string "ADMINISTRADORES más fuertes\l"
	.string "tenemos un poder igual o superior\l"
	.string "al de cualquier LÍDER DE GIMNASIO,\l"
	.string "¿no me crees?\l"
	.string "¡Te lo demostraré!$"

RocketHideoutViridian_Combate_Proton_Texto_4:
.string "No nos equivocamos contigo\n"
	.string "{PLAYER}.$"

RocketHideoutViridian_Combate_Proton_Texto_5:
.string "Fue un acierto trasladarte a\n"
	.string "nuestra base de AZULONA en su\l"
	.string "momento, tienes más que merecido\l"
	.string "ese puesto de ADMINISTRADOR ROCKET\l"
	.string "{PLAYER}, te recomiendo curar a tu\l"
	.string "equipo antes de seguir, los\l"
	.string "ADMINISTRADORES que quedan son más\l"
	.string "poderosos que yo, apuesto que\l"
	.string "saltarán chispas en esos\l"
	.string "combates...$"

RocketHideoutViridian_Combate_Proton_Move_1:
walk_up
walk_up
step_end

RocketHideoutViridian_Combate_Proton_Move_1.1:
walk_up
walk_left
walk_up
step_end

RocketHideoutViridian_Combate_Proton_Move_2:
face_down
step_end

RocketHideoutViridian_Combate_Proton_Move_3:
walk_slow_down
walk_in_place_down
step_end

RocketHideoutViridian_Combate_Proton_Move_4:
face_up
step_end

RocketHideoutViridian_Combate_Petrel_Izq::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideoutViridian_Combate_Petrel_Move_1
waitmovement 0x0
goto RocketHideoutViridian_Combate_Petrel

RocketHideoutViridian_Combate_Petrel_Der::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideoutViridian_Combate_Petrel_Move_1.1
waitmovement 0x0
goto RocketHideoutViridian_Combate_Petrel

RocketHideoutViridian_Combate_Petrel::
applymovement 2, RocketHideoutViridian_Combate_Petrel_Move_2
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Petrel_Texto_1 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideoutViridian_Combate_Petrel_Move_3
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Petrel_Texto_2 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideoutViridian_Combate_Petrel_Move_4
waitmovement 0x0
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox RocketHideoutViridian_Combate_Petrel_Texto_3 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_PETREL, RocketHideoutViridian_Combate_Petrel_Texto_4
msgbox RocketHideoutViridian_Combate_Petrel_Texto_5 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
fadescreen 1
delay 20
removeobject 2
fadescreen 0
setvar VAR_UNUSED_0x40F7, 88
release
end

RocketHideoutViridian_Combate_Petrel_Texto_1:
.string "PETREL: Jamás pensé que pudieras\n"
	.string "llegar tan lejos, cuando\l"
	.string "fracasaste en tu primera misión en\l"
	.string "KANTO y a pesar de ello derrotaste\l"
	.string "a un ALTO RANGO, vi que tenías\l"
	.string "potencial y por ello te asigné la\l"
	.string "peligrosa misión de la CASA DE\l"
	.string "BILL.$"

RocketHideoutViridian_Combate_Petrel_Texto_2:
.string "Sin embargo has sobrepasado toda\n"
	.string "expectativa, a los ADMINISTRADORES\l"
	.string "ROCKETS se les exigen muchas\l"
	.string "habilidades, entre ellas está el\l"
	.string "contar con un equipo POKÉMON digno\l"
	.string "de la ÉLITE 4, hecho a base de\l"
	.string "POKÉMON fuertes, bien entrenados y\l"
	.string "que no encontrarás únicamente\l"
	.string "merodeando por ahí sin un rumbo\l"
	.string "fijo como hacen el 95% de los\l"
	.string "entrenadores.$"

RocketHideoutViridian_Combate_Petrel_Texto_3:
.string "Tenemos también el deber de usar\n"
	.string "todo nuestro poder únicamente\l"
	.string "cuando sea totalmente necesario,\l"
	.string "el futuro de la región, y del TEAM\l"
	.string "ROCKET, está en tus manos, ¡me\l"
	.string "aseguraré personalmente de que\l"
	.string "irás a la LIGA POKÉMON con todas\l"
	.string "las garantías!$"

RocketHideoutViridian_Combate_Petrel_Texto_4:
.string "Gran combate {PLAYER}, eres un\n"
	.string "ADMIN ROCKET con todas las de la\l"
	.string "ley.$"

RocketHideoutViridian_Combate_Petrel_Texto_5:
.string "¡JAH!\n"
	.string "¡Espléndido!\l"
	.string "¡No esperaba menos de aquel que\l"
	.string "derrotó a BRUNO y salvó a mis\l"
	.string "colegas MOTORISTAS!\l"
	.string "Me alegra que estés de nuestro\l"
	.string "lado {PLAYER}. Hazme un favor si te\l"
	.string "llegas a cruzar con ese chico\l"
	.string "llamado ROJO, sí, ese que cree\l"
	.string "estar una dimensión por encima\l"
	.string "nuestra, y piensa que es imbatible\l"
	.string "e intocable, ¡dale una buena dosis\l"
	.string "de realidad de parte del TEAM\l"
	.string "ROCKET!$"

RocketHideoutViridian_Combate_Petrel_Move_1:
walk_up
walk_right
walk_up
step_end

RocketHideoutViridian_Combate_Petrel_Move_1.1:
walk_up
walk_up
step_end

RocketHideoutViridian_Combate_Petrel_Move_2:
face_down
step_end

RocketHideoutViridian_Combate_Petrel_Move_3:
walk_slow_down
walk_in_place_down
step_end

RocketHideoutViridian_Combate_Petrel_Move_4:
walk_in_place_down
step_end

RocketHideoutViridian_Combate_Petrel_Move_5:
face_up
step_end

RocketHideoutViridian_Combate_Atlas::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideoutViridian_Combate_Atlas_Move_1
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideoutViridian_Combate_Atlas_Move_2
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RocketHideoutViridian_Combate_Atlas_Move_3
waitmovement 0x0
special RemoveCameraObject
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_4
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_2 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RocketHideoutViridian_Combate_Atlas_Move_5
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, RocketHideoutViridian_Combate_Atlas_Move_6
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_7
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_11
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_12
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_6 MSGBOX_AUTOCLOSE
playse MUS_ENCOUNTER_CHAMPION
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_11
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_7 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Combate_Atlas_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_9
applymovement OBJ_EVENT_ID_PLAYER, RocketHideoutViridian_Combate_Atlas_Move_8
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_9 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ATLAS_3, RocketHideoutViridian_Combate_Atlas_Texto_10
msgbox RocketHideoutViridian_Combate_Atlas_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_12
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_13
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_13 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_11
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_14 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideoutViridian_Escena_9_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideoutViridian_Combate_Atlas_Texto_15 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
setflag FLAG_HIDE_SS_TIDAL_CORRIDOR_SCOTT
fadescreen 1
delay 20
removeobject 1
addobject 18
fadescreen 0
setvar VAR_UNUSED_0x40F7, 89
release
end

RocketHideoutViridian_Combate_Atlas_Texto_1:
.string "????: Te estaba esperando, ADMIN\n"
	.string "{PLAYER}.$"

RocketHideoutViridian_Combate_Atlas_Texto_2:
.string "ATLAS: Vamos pasa, no te quedes\n"
	.string "ahí, ponte cómodo.$"

RocketHideoutViridian_Combate_Atlas_Texto_3:
.string "Curioso contraste este pequeño\n"
	.string "espacio con respecto al resto de\l"
	.string "la BASE, ¿verdad?\l"
	.string "No fui partidario de construirlo\l"
	.string "así, dijeron que era una muestra\l"
	.string "de jerarquía, un reflejo del poder\l"
	.string "de aquel merecedor de ocuparlo.$"

RocketHideoutViridian_Combate_Atlas_Texto_4:
.string "Pero lejos de ello, un espacio así\n"
	.string "en manos de alguien débil lejos de\l"
	.string "darle un plus le hará dormirse en\l"
	.string "los laureles y lo debilitará, le\l"
	.string "hará creer que lo tiene todo\l"
	.string "hecho, que nadie puede tocarle ni\l"
	.string "hacerle sombra.$"

RocketHideoutViridian_Combate_Atlas_Texto_5:
.string "Esto aplica también por supuesto\n"
	.string "para niños ingenuos e inocentes,\l"
	.string "como ese ROJO, cree que con 10\l"
	.string "años tiene el mundo a sus pies y\l"
	.string "puede comerle la tostada a toda\l"
	.string "una organización solo por ganar un\l"
	.string "par de combates amañados.$"

RocketHideoutViridian_Combate_Atlas_Texto_6:
.string "Espero, {PLAYER}, que no seas como\n"
	.string "ese ENTRENADOR, ni que te\l"
	.string "conviertas en él, preferiría 1000\l"
	.string "veces seguir tu camino escogiendo\l"
	.string "a un débil ZUBAT como inicial, y\l"
	.string "verme obligado a aprender a\l"
	.string "hacerlo fuerte, que comenzar con\l"
	.string "unos starters que nadie más tiene,\l"
	.string "con el camino ya preestablecido\l"
	.string "por OAK y unos LÍDERES usando\l"
	.string "equipos devaluados.$"

RocketHideoutViridian_Combate_Atlas_Texto_7:
.string "Esa dificultad a la que te has\n"
	.string "expuesto es la que de verdad te\l"
	.string "hace crecer, menos placentera pero\l"
	.string "donde se dan las cosas más\l"
	.string "importantes, por eso estás aquí\l"
	.string "hoy {PLAYER}.$"

RocketHideoutViridian_Combate_Atlas_Texto_8:
.string "No esperes un trato justo e igual\n"
	.string "al de ROJO, o incluso AZUL, en la\l"
	.string "LIGA POKÉMON, el ALTO MANDO usará\l"
	.string "todos los POKÉMON a su disposición\l"
	.string "para derrotar a cualquiera que\l"
	.string "considere un peligro para el\l"
	.string "gobierno de LANCE.$"

RocketHideoutViridian_Combate_Atlas_Texto_9:
.string "Por ello yo, ATLAS, ADMINISTRADOR\n"
	.string "JEFE y mano derecha de GIOVANNI,\l"
	.string "seré tu prueba final antes de\l"
	.string "partir a tu misión más importante,\l"
	.string "¡muéstrame todo lo que has\l"
	.string "aprendido!$"

RocketHideoutViridian_Combate_Atlas_Texto_10:
.string "Ah, me siento orgulloso de haber\n"
	.string "formado a ROCKETS como tú, aquí\l"
	.string "tienes la MEDALLA TIERRA.$"

RocketHideoutViridian_Combate_Atlas_Texto_11:
.string "Impresionante, en muy poco tiempo\n"
	.string "has logrado un extraordinario\l"
	.string "nivel, y lo mejor es que aún no\l"
	.string "has tocado techo.$"

RocketHideoutViridian_Combate_Atlas_Texto_12:
.string "Ni GIOVANNI ni yo podemos poner un\n"
	.string "pie en la LIGA POKÉMON, nuestras\l"
	.string "caras son demasiado mediáticas, y\l"
	.string "nuestra imagen ha sido demasiado\l"
	.string "maltratada por los medios como\l"
	.string "para dejarnos ver, solo serviría\l"
	.string "para quedar detenidos en el acto,\l"
	.string "sin embargo, después de lo que\l"
	.string "acabo de ver, puedo decir que\l"
	.string "contigo estamos bien representados\l"
	.string "para esta misión.$"

RocketHideoutViridian_Combate_Atlas_Texto_13:
.string "Hacerse con el campeonato de la\n"
	.string "LIGA dota a su CAMPEÓN de un poder\l"
	.string "que ni LANCE y su gobierno podrán\l"
	.string "cuestionar, es por ello que debes\l"
	.string "esperar lo peor una vez entres en\l"
	.string "la LIGA POKÉMON, no dejarán que un\l"
	.string "extraño se alze con el título tan\l"
	.string "facilmente...$"

RocketHideoutViridian_Combate_Atlas_Texto_14:
.string "Vuelvo a ISLA INTA {PLAYER}, tal\n"
	.string "vez tengas oportunidad de volver\l"
	.string "por allí tu también algún día,\l"
	.string "informaré a GIOVANNI de tu\l"
	.string "victoria aquí.$"

RocketHideoutViridian_Combate_Atlas_Texto_15:
.string "Juega bien tus cartas.$"

RocketHideoutViridian_Combate_Atlas_Move_1:
walk_in_place_up
step_end

RocketHideoutViridian_Combate_Atlas_Move_2:
emote_exclamation_mark
step_end

RocketHideoutViridian_Combate_Atlas_Move_3:
walk_up
walk_up
walk_right
walk_right
walk_up
step_end

RocketHideoutViridian_Combate_Atlas_Move_4:
face_down
step_end

RocketHideoutViridian_Combate_Atlas_Move_5:
walk_down
walk_down
walk_left
walk_left
walk_down
step_end

RocketHideoutViridian_Combate_Atlas_Move_6:
walk_up
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_right
walk_in_place_left
step_end

RocketHideoutViridian_Combate_Atlas_Move_7:
walk_down
walk_down
walk_left
walk_in_place_right
step_end

RocketHideoutViridian_Combate_Atlas_Move_8:
walk_left
step_end

RocketHideoutViridian_Combate_Atlas_Move_9:
walk_right
step_end

RocketHideoutViridian_Combate_Atlas_Move_10:
face_left
step_end

RocketHideoutViridian_Combate_Atlas_Move_11:
walk_in_place_right
step_end

RocketHideoutViridian_Combate_Atlas_Move_12:
face_up
step_end

RocketHideoutViridian_Combate_Atlas_Move_13:
face_right
step_end

RocketHideoutViridian_Escena_8::
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RocketHideoutViridian_Escena_8_Move_5
waitmovement 0x0
delay 50
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
fadescreen 1
delay 20
addobject 16
fadescreen 0
delay 30
msgbox RocketHideoutViridian_Escena_8_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideoutViridian_Escena_8_Texto_2 MSGBOX_AUTOCLOSE
applymovement 17, RocketHideoutViridian_Escena_8_Move_1
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_8_Texto_3 MSGBOX_AUTOCLOSE
applymovement 16, RocketHideoutViridian_Escena_8_Move_2
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_8_Texto_4 MSGBOX_AUTOCLOSE
applymovement 16, RocketHideoutViridian_Escena_8_Move_4
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_8_Texto_5 MSGBOX_AUTOCLOSE
applymovement 16, RocketHideoutViridian_Escena_8_Move_3
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_8_Texto_6 MSGBOX_AUTOCLOSE
applymovement 17, RocketHideoutViridian_Escena_8_Move_1
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_8_Texto_7 MSGBOX_AUTOCLOSE
applymovement 16, RocketHideoutViridian_Escena_8_Move_1
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_8_Texto_8 MSGBOX_AUTOCLOSE
delay 10
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
clearflag FLAG_HIDE_PLAYERS_HOUSE_DAD
fadescreen 1
delay 20
removeobject 16
fadescreen 0
delay 40
warpsilent MAP_CINNABAR_ISLAND, 20, 5
release
end

RocketHideoutViridian_Escena_8_Move_1:
walk_in_place_down
step_end

RocketHideoutViridian_Escena_8_Move_2:
face_right
step_end

RocketHideoutViridian_Escena_8_Move_3:
walk_in_place_up
step_end

RocketHideoutViridian_Escena_8_Move_4:
face_up
step_end

RocketHideoutViridian_Escena_8_Move_5:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideoutViridian_Escena_8_Texto_1:
.string "PROTÓN: ¿Se ha acabado?$"

RocketHideoutViridian_Escena_8_Texto_2:
.string "GIOVANNI: Efectivamente PROTÓN.\n"
	.string "Oficialmente, para KANTO ya no\l"
	.string "existimos.$"

RocketHideoutViridian_Escena_8_Texto_3:
.string "PROTÓN: Se lo ha puesto demasiado\n"
	.string "fácil, ¿no cree? Siquiera se ha dignado\l"
	.string "a usar un RHYDON, mucho menos a su\l"
	.string "RHYPER…$"

RocketHideoutViridian_Escena_8_Texto_4:
.string "GIOVANNI: No merece ver el menor atisbo\n"
	.string "de poder físico en esta región. Le han\l"
	.string "regalado el camino hasta aquí, y yo les\l"
	.string "devolveré el favor con intereses. Mi\l"
	.string "hipocresía respecto a ROJO será aún\l"
	.string "mayor.$"

RocketHideoutViridian_Escena_8_Texto_5:
.string "Esta región se ha vuelto tan mediocre,\n"
	.string "que a nadie le chirría ni sorprende que\l"
	.string "el último LÍDER use a un vulgar RHYHORN\l"
	.string "sin evolucionar como POKÉMON insignia.\l"
	.string "Que así sea pues, que se ahogue en las 0\l"
	.string "exigencias, que se aburra de ganar\l"
	.string "sabiendo el resultado de antemano.$"

RocketHideoutViridian_Escena_8_Texto_6:
.string "¡PROTÓN! ¡Quiero todo listo para que el\n"
	.string "verdadero GIMNASIO de CIUDAD VERDE\l"
	.string "abra sus puertas a ANDRA y {PLAYER}!$"

RocketHideoutViridian_Escena_8_Texto_7:
.string "PROTÓN: Está todo dispuesto señor. En\n"
	.string "cuanto a lo de su…$"

RocketHideoutViridian_Escena_8_Texto_8:
.string "GIOVANNI: Lo sé, debo salir\n"
	.string "inmediatamente. El hacer pública mi\l"
	.string "disolución le ha agitado, necesita ser\l"
	.string "calmado.$"



RocketHideoutViridian_Warp_Escena_9::
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
setvar VAR_UNUSED_0x40F7, 85
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_6
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_1F_Escena_3_Move_1
warpsilent MAP_ROUTE22, 12, 5
waitmovement 0x0
release
end
