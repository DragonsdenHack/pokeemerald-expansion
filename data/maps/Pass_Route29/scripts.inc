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
.string "La verdad que todo el terreno que\n"
.string "hay desde aquí hasta la frontera\l"
.string "con KANTO es precioso, me extraña\l"
.string "que aún no hayan construido algo.$"



PassRoute29_3::
lock     
faceplayer     
msgbox Pass_Route29_Text_3, MSGBOX_DEFAULT
release     
end

Pass_Route29_Text_3:
.string "¡No hay nada como salir a recoger\n"
.string "bayas en medio de la naturaleza!$"



PassRoute29_4::
lock     
faceplayer     
msgbox Pass_Route29_Text_4, MSGBOX_DEFAULT
release     
end

Pass_Route29_Text_4:
.string "¡Ahh!\n"
.string "¡Qué bien sienta la comida después\l"
.string "de una buena caminata!$"

Pass_Route29_Encuentro_Elm::
lock
applymovement OBJ_EVENT_ID_PLAYER, Pass_Route29_Encuentro_Elm_Move_1
waitmovement 0x0
msgbox Pass_Route29_Encuentro_Elm_Texto_1 MSGBOX_AUTOCLOSE
applymovement 2, Pass_Route29_Encuentro_Elm_Move_2
waitmovement 0x0
msgbox Pass_Route29_Encuentro_Elm_Texto_2 MSGBOX_AUTOCLOSE
msgbox Pass_Route29_Encuentro_Elm_Texto_3 MSGBOX_AUTOCLOSE
msgbox Pass_Route29_Encuentro_Elm_Texto_4 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 2, Pass_Route29_Encuentro_Elm_Move_3
waitmovement 0x0
delay 15
applymovement 2, Pass_Route29_Encuentro_Elm_Move_4
waitmovement 0x0
msgbox Pass_Route29_Encuentro_Elm_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, Pass_Route29_Encuentro_Elm_Move_5
waitmovement 0x0
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox Pass_Route29_Encuentro_Elm_Texto_6 MSGBOX_DEFAULT
waitfanfare
additem ITEM_MEGA_RING
msgbox Pass_Route29_Encuentro_Elm_Texto_7 MSGBOX_AUTOCLOSE
msgbox Pass_Route29_Encuentro_Elm_Texto_8 MSGBOX_AUTOCLOSE
applymovement 2, Pass_Route29_Encuentro_Elm_Move_6
waitmovement 0x0
msgbox Pass_Route29_Encuentro_Elm_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, Pass_Route29_Encuentro_Elm_Move_7
waitmovement 0x0
msgbox Pass_Route29_Encuentro_Elm_Texto_10 MSGBOX_AUTOCLOSE
applymovement 2, Pass_Route29_Encuentro_Elm_Move_8
waitmovement 0x0
msgbox Pass_Route29_Encuentro_Elm_Texto_11 MSGBOX_AUTOCLOSE
applymovement 2, Pass_Route29_Encuentro_Elm_Move_1
waitmovement 0x0
msgbox Pass_Route29_Encuentro_Elm_Texto_12 MSGBOX_AUTOCLOSE
applymovement 2, Pass_Route29_Encuentro_Elm_Move_9
waitmovement 0x0
setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
removeobject 2
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 119
release
end

Pass_Route29_Encuentro_Elm_Texto_1:
.string "Pero, profesor, la frontera con\n"
	.string "KANTO está en la RUTA 26, no al\l"
	.string "finalizar la RUTA 29.$"

Pass_Route29_Encuentro_Elm_Texto_2:
.string "Lo sé, solo te pido que bloquees\n"
	.string "esa zona temporalmente, mis ayu-\l"
	.string "dantes y yo vamos a llevar a cabo\l"
	.string "una importante investigación allí,\l"
	.string "de todos modos no hay nada que ver\l"
	.string "al este de RUTA 29, puedes llegar\l"
	.string "a todos los pueblos y ciudades de\l"
	.string "JOHTO con esa ruta cortada.$"

Pass_Route29_Encuentro_Elm_Texto_3:
.string "E-está bien profesor, enviaré a\n"
	.string "dos policías inmediatamente para\l"
	.string "que guarden la zona.$"

Pass_Route29_Encuentro_Elm_Texto_4:
.string "Perfecto.$"

Pass_Route29_Encuentro_Elm_Texto_5:
.string "????: Tú debes de ser {PLAYER}, ¿me\n"
	.string "equivoco?\l"
	.string "GIOVANNI ya me informó de tu\l"
	.string "llegada, mi nombre es ELM, he\l"
	.string "dedicado mi vida a cómo funciona\l"
	.string "el mecanismo de evolución en los\l"
	.string "POKÉMON, y justo ahora, gracias a\l"
	.string "las inversiones del TEAM ROCKET,\l"
	.string "es cuando estoy obteniendo los\l"
	.string "frutos de mi trabajo, prueba de\l"
	.string "ello es el objeto que estás a\l"
	.string "punto de recibir.$"

Pass_Route29_Encuentro_Elm_Texto_6:
.string "{PLAYER} recibió un MEGA-ARO\n"
	.string "del PROF.ELM.$"

Pass_Route29_Encuentro_Elm_Texto_7:
.string "Le prometí a GIOVANNI que le daría\n"
	.string "uno a cada ADMINISTRADOR ROCKET,\l"
	.string "espero que seas consciente de la\l"
	.string "tecnología que vas a manejar, con\l"
	.string "el MEGA-ARO podrás controlar un\l"
	.string "proceso tan inestable y\l"
	.string "descontrolado como lo es la\l"
	.string "MEGAEVOLUCIÓN, siempre y cuando\l"
	.string "cuentes con la MEGA-PIEDRA\l"
	.string "adecuada.$"

Pass_Route29_Encuentro_Elm_Texto_8:
.string "ELM: ...$"

Pass_Route29_Encuentro_Elm_Texto_9:
.string "Si no me equivoco, estás aquí para\n"
	.string "recopilar información acerca de\l"
	.string "los POKÉMON de los mejores\l"
	.string "entrenadores de esta región, y\l"
	.string "para saber más acerca de ese\l"
	.string "fenómeno, el FUERTE VÍNCULO, ¿no?$"

Pass_Route29_Encuentro_Elm_Texto_10:
.string "Déjame darte un consejo, los\n"
	.string "GIMNASIOS de JOHTO no funcionan\l"
	.string "como los de KANTO, no están\l"
	.string "obligados a luchar contra nadie,\l"
	.string "la mayoría de LÍDERES a día de hoy\l"
	.string "en JOHTO están al borde del\l"
	.string "retiro, o demasiado ocupados en\l"
	.string "otros asuntos, son entrenadores\l"
	.string "muy poderosos, desde luego, y\l"
	.string "sabios, para ellos el tema de la\l"
	.string "guerra es un asunto trivial, que\l"
	.string "no les incumbe, viven al margen de\l"
	.string "ello, centrándose en sus POKÉMON,\l"
	.string "y en depurar su ya de por si\l"
	.string "exquisita técnica.$"

Pass_Route29_Encuentro_Elm_Texto_11:
.string "Con esto lo que quiero decirte es\n"
	.string "que deberás de captar su atención\l"
	.string "lo suficiente como para que te\l"
	.string "concedan un combate, pero por algo\l"
	.string "GIOVANNI te ha enviado a ti y no a\l"
	.string "otro, después de todo, eres el\l"
	.string "verdadero CAMPEÓN de KANTO.$"

Pass_Route29_Encuentro_Elm_Texto_12:
.string "Si logras tener éxito, y recopilar\n"
	.string "datos de los POKÉMON\l"
	.string "característicos de cada LÍDER,\l"
	.string "dispondremos de una información\l"
	.string "valiosísima que podrá expandir\l"
	.string "hasta límites insospechados el\l"
	.string "potencial de un POKÉMON, mucha\l"
	.string "suerte {PLAYER}, la región de JOHTO\l"
	.string "te espera.$"

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
