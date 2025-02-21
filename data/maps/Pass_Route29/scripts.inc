Pass_Route29_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Pass_Route29_OnFrame
.byte 0

Pass_Route29_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 118, Pass_Route29_Encuentro_Elm
	.2byte 0

PassRoute29_1::
lock     
faceplayer     
msgbox Pass_Route29_Text_1, MSGBOX_DEFAULT
release     
end

Pass_Route29_Text_1:
	.string "I must be honest. The whole land from\n"
	.string "here to KANTO is precious. I wonder why\l"
	.string "nothing's been built here yet.$"



PassRoute29_3::
lock     
faceplayer     
msgbox Pass_Route29_Text_3, MSGBOX_DEFAULT
release     
end

Pass_Route29_Text_3:
	.string "There's nothing better than going out\n"
	.string "to gather berries in nature!$"



PassRoute29_4::
lock     
faceplayer     
msgbox Pass_Route29_Text_4, MSGBOX_DEFAULT
release     
end

Pass_Route29_Text_4:
.string "Ahh!\n"
.string "Food feels so delicious\l"
.string "after a good walk!$"

Pass_Route29_Encuentro_Elm_Move_1.01:
walk_slow_down
step_end

Pass_Route29_Encuentro_Elm_Move_1.02:
walk_slow_up
delay_16
delay_16
step_end

Pass_Route29_Encuentro_Elm_Move_2.1:
walk_in_place_right
step_end


Pass_Route29_Encuentro_Elm::
lock
applymovement OBJ_EVENT_ID_PLAYER, Pass_Route29_Encuentro_Elm_Move_1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Pass_Route29_Encuentro_Elm_Move_1.01
waitmovement 0x0
special RemoveCameraObject
delay 10
applymovement 1, Pass_Route29_Encuentro_Elm_Move_2.1
waitmovement 0x0
delay 10
msgbox Pass_Route29_Encuentro_Elm_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Pass_Route29_Encuentro_Elm_Move_2
waitmovement 0x0
delay 10
msgbox Pass_Route29_Encuentro_Elm_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Pass_Route29_Encuentro_Elm_Move_2.1
waitmovement 0x0
delay 10
msgbox Pass_Route29_Encuentro_Elm_Texto_3 MSGBOX_AUTOCLOSE
delay 10
msgbox Pass_Route29_Encuentro_Elm_Texto_4 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 2, Pass_Route29_Encuentro_Elm_Move_3
waitmovement 0x0
waitse
delay 15
applymovement 2, Pass_Route29_Encuentro_Elm_Move_4
waitmovement 0x0
delay 10
msgbox Pass_Route29_Encuentro_Elm_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, Pass_Route29_Encuentro_Elm_Move_5
waitmovement 0x0
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox Pass_Route29_Encuentro_Elm_Texto_6 MSGBOX_DEFAULT
waitfanfare
additem ITEM_MEGA_RING
msgbox Pass_Route29_Encuentro_Elm_Texto_7 MSGBOX_AUTOCLOSE
delay 10
msgbox Pass_Route29_Encuentro_Elm_Texto_8 MSGBOX_AUTOCLOSE
applymovement 2, Pass_Route29_Encuentro_Elm_Move_6
waitmovement 0x0
msgbox Pass_Route29_Encuentro_Elm_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, Pass_Route29_Encuentro_Elm_Move_7
waitmovement 0x0
msgbox Pass_Route29_Encuentro_Elm_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Pass_Route29_Encuentro_Elm_Move_8.1
waitmovement 0x0
delay 10
msgbox Pass_Route29_Encuentro_Elm_Texto_10.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Pass_Route29_Encuentro_Elm_Move_8
waitmovement 0x0
msgbox Pass_Route29_Encuentro_Elm_Texto_11 MSGBOX_AUTOCLOSE
applymovement 2, Pass_Route29_Encuentro_Elm_Move_1
waitmovement 0x0
msgbox Pass_Route29_Encuentro_Elm_Texto_12 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Pass_Route29_Encuentro_Elm_Move_8
waitmovement 0x0
delay 10
msgbox Pass_Route29_Encuentro_Elm_Texto_12.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Pass_Route29_Encuentro_Elm_Move_9
delay 20
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Pass_Route29_Encuentro_Elm_Move_1.02
waitmovement 0x0
special RemoveCameraObject
setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
removeobject 2
setflag FLAG_NUEVA_292
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 119
release
end

Pass_Route29_Encuentro_Elm_Move_8.1:
delay_8
face_down
delay_16
delay_8
face_right
delay_16
delay_8
face_player
delay_8
step_end

Pass_Route29_Encuentro_Elm_Texto_1:
	.string "But professor, the frontier with KANTO\n"
	.string "is on the ROUTE 26, not at the ROUTE 29\l"
	.string "end.$"

Pass_Route29_Encuentro_Elm_Texto_2:
	.string "I know. I'm asking you to blockade that\n"
	.string "zone for a while. My aides and I will\l"
	.string "have an important investigation there.\l"
	.string "There's nothing to see east of ROUTE 29\l"
	.string "anyway. Anyone could still make it to\l"
	.string "any town or city, even with that route\l"
	.string "closed.$"

Pass_Route29_Encuentro_Elm_Texto_3:
	.string "O-okay, professor. I'll send over two\n"
	.string "cops immediately to block off that\l"
	.string "route.$"

Pass_Route29_Encuentro_Elm_Texto_4:
.string "All right.$"

Pass_Route29_Encuentro_Elm_Texto_5:
	.string "????: You're {PLAYER}, aren't you?\n"
	.string "GIOVANNI's already told me of your\l"
	.string "arrival. My name is ELM. I've dedicated\l"
	.string "my entire life to understanding the\l"
	.string "workings of POKÉMON evolution, and\l"
	.string "right now, thanks to TEAM ROCKET's\l"
	.string "investments, I'm finally achieving\l"
	.string "results. The proof is in the object I'll\l"
	.string "give you.$"

Pass_Route29_Encuentro_Elm_Texto_6:
	.string "{PLAYER} received a MEGA RING from\n"
	.string "PROF.ELM.$"

Pass_Route29_Encuentro_Elm_Texto_7:
.string "Le prometí a GIOVANNI que le daría\n"
	.string "uno a cada ADMINISTRADOR ROCKET.\p"
	.string "Espero que seas consciente de la\n"
	.string "tecnología que vas a manejar: con\l"
	.string "el MEGA-ARO podrás controlar un\l"
	.string "proceso tan inestable y caótico\l"
	.string "como lo es la MEGAEVOLUCIÓN,\l"
	.string "siempre y cuando cuentes con la\l"
	.string "MEGA-PIEDRA adecuada.$"

Pass_Route29_Encuentro_Elm_Texto_8:
.string "ELM: {PAUSE 15}…{PAUSE 15}$"

Pass_Route29_Encuentro_Elm_Texto_9:
.string "Si no me equivoco, estás aquí para\n"
	.string "recopilar información acerca de\l"
	.string "los POKÉMON{PAUSE 15}…{PAUSE 15} de los mejores\l"
	.string "entrenadores de esta región.\p"
	.string "También para saber más acerca de ese\n"
	.string "fenómeno, el FUERTE VÍNCULO, ¿no?$"

Pass_Route29_Encuentro_Elm_Texto_10:
.string "Déjame darte un consejo.\p"
	.string "Los GIMNASIOS de JOHTO no funcionan\n"
	.string "como los de KANTO, no están obligados\l"
	.string "a luchar contra nadie. La mayoría de\l"
	.string "LÍDERES están ya al borde del retiro,\l"
	.string "o demasiado ocupados en otros asuntos.$"

Pass_Route29_Encuentro_Elm_Texto_10.1:
	.string "Son entrenadores muy poderosos,\n"
	.string "y sabios; para ellos el tema de la\l"
	.string "guerra es un asunto trivial, que\l"
	.string "no les incumbe. Viven al margen de\l"
	.string "ello, centrándose en sus POKÉMON,\l"
	.string "y en depurar su ya de por sí\l"
	.string "exquisita técnica.$"

Pass_Route29_Encuentro_Elm_Texto_11:
.string "Con esto lo que quiero decirte es\n"
	.string "que deberás de captar su atención\l"
	.string "lo suficiente como para que te\l"
	.string "concedan un combate. Pero por algo\l"
	.string "GIOVANNI te ha enviado a ti y no a\l"
	.string "otro, después de todo, eres el\l"
	.string "verdadero CAMPEÓN de KANTO.$"

Pass_Route29_Encuentro_Elm_Texto_12:
.string "Si logras tener éxito, y recopilas\n"
	.string "en primicia datos de los POKÉMON\l"
	.string "característicos de cada LÍDER,\l"
	.string "dispondremos de una información\l"
	.string "valiosísima, que podrá expandir\l"
	.string "hasta límites insospechados el\l"
	.string "potencial de un POKÉMON.$"

Pass_Route29_Encuentro_Elm_Texto_12.1:
	.string "Mucha suerte, {PLAYER}.\n"
	.string "La región de JOHTO te espera.$"

Pass_Route29_Encuentro_Elm_Move_1:
walk_down
step_end

Pass_Route29_Encuentro_Elm_Move_2:
walk_in_place_left
step_end

Pass_Route29_Encuentro_Elm_Move_3:
emote_exclamation_mark
step_end

Pass_Route29_Encuentro_Elm_Move_4:
walk_right
face_up
step_end

Pass_Route29_Encuentro_Elm_Move_5:
walk_up
step_end

Pass_Route29_Encuentro_Elm_Move_6:
face_down
step_end

Pass_Route29_Encuentro_Elm_Move_7:
face_up
step_end

Pass_Route29_Encuentro_Elm_Move_8:
walk_in_place_up
step_end

Pass_Route29_Encuentro_Elm_Move_9:
walk_down
walk_down
walk_down
step_end
