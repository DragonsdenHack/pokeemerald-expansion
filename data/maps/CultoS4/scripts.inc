CultoS4_MapScripts::
	.byte 0

CultoS4_2::
lock     
faceplayer     
msgbox CultoS4_Text_2, MSGBOX_DEFAULT
release     
end

CultoS4_Text_2:
.string "Las formas nacen y mueren, pero tú eres\n"
.string "consciente de lo eterno que está\l"
.string "detrás de esas formas. Nada real puede\l"
.string "ser amenazado.$"

CultoS4_3::
lock     
faceplayer     
msgbox CultoS4_Text_3, MSGBOX_DEFAULT
release     
end

CultoS4_Text_3:
.string "Se nos confina en una parcela que\n"
	.string "delimita una inmensidad ya de por sí\l"
	.string "inabarcable.$"


CultoS4_5::
lock     
faceplayer     
msgbox CultoS4_Text_5, MSGBOX_DEFAULT
release     
end

CultoS4_Text_5:
.string "Tu principal tarea no es buscar la\n"
.string "salvación mediante la creación de un\l"
.string "mundo mejor, sino despertar de la\l"
.string "identificación con la forma.$"



CultoS4_6::
lock     
faceplayer     
msgbox CultoS4_Text_6, MSGBOX_DEFAULT
release     
end

CultoS4_Text_6:
.string "El POKÉMON ESENCIA… ¿Tendrá un tipo\n"
.string "definido? Algunos dicen que por\l"
.string "definición debe ser FANTASMA, tal vez\l"
.string "sea una combinación de este y otro\l"
.string "más…$"



CultoS4_7::
lock     
faceplayer     
msgbox CultoS4_Text_7, MSGBOX_DEFAULT
release     
end

CultoS4_Text_7:
.string "El proceso de cambio es inminente, las\n"
.string "regiones de JOHTO y KANTO jamás\l"
.string "volverán a ser las mismas. ¿Estás\l"
.string "preparado?$"



CultoS4_8::
lock     
faceplayer     
msgbox CultoS4_Text_8, MSGBOX_DEFAULT
release     
end

CultoS4_Text_8:
.string "El declive empieza con la sustitución de\n"
.string "sueños por recuerdos y acaba con la\l"
.string "sustitución de recuerdos por otros\l"
.string "recuerdos.$"



CultoS4_EventScript_Cultista::
	trainerbattle_single TRAINER_PABLO_5, CultoS4_Text_CultistaIntro, CultoS4_Text_CultistaDefeated
	msgbox CultoS4_Text_CultistaPostBattle, MSGBOX_AUTOCLOSE
	end



CultoS4_EventScript_Cultista2::
	trainerbattle_single TRAINER_KOJI_2, CultoS4_Text_Cultista2Intro, CultoS4_Text_Cultista2Defeated
	msgbox CultoS4_Text_Cultista2PostBattle, MSGBOX_AUTOCLOSE
	end



CultoS4_EventScript_Cultista3::
	trainerbattle_single TRAINER_KOJI_3, CultoS4_Text_Cultista3Intro, CultoS4_Text_Cultista3Defeated
	msgbox CultoS4_Text_Cultista3PostBattle, MSGBOX_AUTOCLOSE
	end

CultoS4_Rezando_Esencia::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CultoS4_Rezando_Esencia_Move_1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, CultoS4_Rezando_Esencia_Move_2
waitmovement 0x0
special RemoveCameraObject
applymovement 2, CultoS4_Rezando_Esencia_Move_4
waitmovement 0x0
delay 10
msgbox CultoS4_Rezando_Esencia_Texto_1 MSGBOX_AUTOCLOSE
applymovement 2, CultoS4_Rezando_Esencia_Move_4
waitmovement 0x0
delay 10
msgbox CultoS4_Rezando_Esencia_Texto_2 MSGBOX_AUTOCLOSE
applymovement 2, CultoS4_Rezando_Esencia_Move_4
waitmovement 0x0
delay 10
msgbox CultoS4_Rezando_Esencia_Texto_3 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, CultoS4_Rezando_Esencia_Move_3
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40F7, 169
release
end

CultoS4_Rezando_Esencia_Move_4:
walk_in_place_up
step_end

CultoS4_Rezando_Esencia_Move_3:
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

CultoS4_Rezando_Esencia_Move_2:
walk_slow_left
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

CultoS4_Rezando_Esencia_Move_1:
emote_exclamation_mark
face_up
step_end

CultoS4_Rezando_Esencia_Texto_1:
.string "Nuestra esencia es carecer de esencia\n"
	.string "y, al mismo tiempo, poder construirla en\l"
	.string "potencia. Somos pura posibilidad, esto\l"
	.string "es, una nada que es potencialmente\l"
	.string "todo.$"

CultoS4_Rezando_Esencia_Texto_2:
.string "Mientras que otros solo aspiran a\n"
	.string "alargar la vista o subyugar los\l"
	.string "sentidos, aquí nos apoyamos en un\l"
	.string "pensamiento superior, verdadero y\l"
	.string "concreto, piedra angular de este\l"
	.string "mundo: El POKÉMON ESENCIA.$"

CultoS4_Rezando_Esencia_Texto_3:
.string "La palabra POKÉMON resulta limitante\n"
	.string "para referirse a ÉL, no solo por los\l"
	.string "milenios de percepción errónea y mal\l"
	.string "uso del término, sino también porque\l"
	.string "implica que es una entidad distinta a\l"
	.string "nosotros. El POKÉMON ESENCIA no es un\l"
	.string "ser, es EL SER mismo.$"

CultoS4_Huevo::
lock
faceplayer
goto_if_set FLAG_NUEVA_862, CultoS4_Huevo_2
msgbox CultoS4_Huevo_Texto_1 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas12 MSGBOX_DEFAULT
giveegg SPECIES_SPECTRIER
setflag FLAG_NUEVA_862
waitfanfare
release
end

CultoS4_Huevo_2::
msgbox CultoS4_Huevo_Texto_2 MSGBOX_NPC
release
end

CultoS4_Huevo_Texto_1:
.string "El otro día sentí una poderosa\n"
	.string "presencia en este lugar, cuando quise\l"
	.string "darme cuenta, ese aura espectral\l"
	.string "desapareció, y encontré esto.$"

CultoS4_Huevo_Texto_2:
.string "Este lugar es el más antiguo de KANTO,\n"
	.string "no me extraña que esa espectral\l"
	.string "presencia haya venido para rendir\l"
	.string "tributo a alguna alma, ya olvidada por\l"
	.string "todos. La energía que sentí era\l"
	.string "imponente, pero también aterradora, no\l"
	.string "me extrañaría que perteneciera a algún\l"
	.string "POKÉMON LEGENDARIO.$"

