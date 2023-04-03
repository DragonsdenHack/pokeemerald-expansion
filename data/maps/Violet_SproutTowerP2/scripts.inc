Violet_SproutTowerP2_MapScripts::
	.byte 0

VioletSproutTowerP2_1::
end



VioletSproutTowerP2_2::
end



VioletSproutTowerP2_3::
end



VioletSproutTowerP2_4::
end



VioletSproutTowerP2_5::
end



VioletSproutTowerP2_6::
end



VioletSproutTowerP2_7::
end



VioletSprotTowerP2_EventScript_Pensador::
	trainerbattle_single TRAINER_LUCAS_2, VioletSprotTowerP2_Text_PensadorIntro, VioletSprotTowerP2_Text_PensadorDefeated
	msgbox VioletSprotTowerP2_Text_PensadorPostBattle, MSGBOX_AUTOCLOSE
	end



VioletSprotTowerP2_EventScript_Pensador2::
	trainerbattle_single TRAINER_TRENT_3, VioletSprotTowerP2_Text_Pensador2Intro, VioletSprotTowerP2_Text_Pensador2Defeated
	msgbox VioletSprotTowerP2_Text_Pensador2PostBattle, MSGBOX_AUTOCLOSE
	end



VioletSprotTowerP2Documento_100::
msgbox VioletSprotTowerP2Documento_Text_100, MSGBOX_SIGN   
end

VioletSprotTowerP2Documento_Text_100:
	.string "Es la solemne estatua de un\n"
	.string "BELLSPROUT. Tiene grabado algo en\l"
	.string "letras de oro: - Todos partimos de\l"
	.string "puntos diferentes... pero todos\l"
	.string "podemos tocar el mismo cielo-.$"

Violet_SproutTower_P2_Encuentro_Zeus::
applymovement OBJ_EVENT_ID_PLAYER, Violet_SproutTower_P2_Encuentro_Zeus_Move_1
msgbox Violet_SproutTower_P2_Encuentro_Zeus_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 7, Violet_SproutTower_P2_Encuentro_Zeus_Move_2
applymovement OBJ_EVENT_ID_PLAYER, Violet_SproutTower_P2_Encuentro_Zeus_Move_3
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Violet_SproutTower_P2_Encuentro_Zeus_Move_4
waitmovement 0x0
msgbox Violet_SproutTower_P2_Encuentro_Zeus_Texto_2 MSGBOX_AUTOCLOSE
msgbox Violet_SproutTower_P2_Encuentro_Zeus_Texto_3 MSGBOX_AUTOCLOSE
msgbox Violet_SproutTower_P2_Encuentro_Zeus_Texto_4 MSGBOX_AUTOCLOSE
applymovement 6, Violet_SproutTower_P2_Encuentro_Zeus_Move_5
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Violet_SproutTower_P2_Encuentro_Zeus_Move_6
waitmovement 0x0
msgbox Violet_SproutTower_P2_Encuentro_Zeus_Texto_5 MSGBOX_AUTOCLOSE
msgbox Violet_SproutTower_P2_Encuentro_Zeus_Texto_6 MSGBOX_AUTOCLOSE
applymovement 6, Violet_SproutTower_P2_Encuentro_Zeus_Move_7
waitmovement 0x0
msgbox Violet_SproutTower_P2_Encuentro_Zeus_Texto_7 MSGBOX_AUTOCLOSE
applymovement 6, Violet_SproutTower_P2_Encuentro_Zeus_Move_2
waitmovement 0x0
msgbox Violet_SproutTower_P2_Encuentro_Zeus_Texto_8 MSGBOX_AUTOCLOSE
applymovement 6, Violet_SproutTower_P2_Encuentro_Zeus_Move_8
waitmovement 0x0
msgbox Violet_SproutTower_P2_Encuentro_Zeus_Texto_9 MSGBOX_AUTOCLOSE
applymovement 6, Violet_SproutTower_P2_Encuentro_Zeus_Move_7
waitmovement 0x0
msgbox Violet_SproutTower_P2_Encuentro_Zeus_Texto_10 MSGBOX_AUTOCLOSE
applymovement 6, Violet_SproutTower_P2_Encuentro_Zeus_Move_2
waitmovement 0x0
msgbox Violet_SproutTower_P2_Encuentro_Zeus_Texto_11 MSGBOX_AUTOCLOSE
applymovement 6, Violet_SproutTower_P2_Encuentro_Zeus_Move_9
waitmovement 0x0
msgbox Violet_SproutTower_P2_Encuentro_Zeus_Texto_12 MSGBOX_AUTOCLOSE
applymovement 6, Violet_SproutTower_P2_Encuentro_Zeus_Move_10
waitmovement 0x0
setflag FLAG_HIDE_GRANITE_CAVE_STEVEN
removeobject 6
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 122
release
end

Violet_SproutTower_P2_Encuentro_Zeus_Texto_1:
.string "????: Me has decepcionado, anciano.$"

Violet_SproutTower_P2_Encuentro_Zeus_Texto_2:
.string "ZEUS: Vine aquí pensando que este\n"
	.string "lugar contaba con algún tipo de\l"
	.string "información valiosa sobre los 2\l"
	.string "LEGENDARIOS de JOHTO, que me\l"
	.string "ayudara a indagar más en la\l"
	.string "historia de esta región.\l"
	.string "Y lo único que encuentro es un\l"
	.string "grupo de pensadores que no hacen\l"
	.string "más que honrar la mediocridad de\l"
	.string "BELLSPROUT.$"

Violet_SproutTower_P2_Encuentro_Zeus_Texto_3:
.string "¿Para qué desperdiciar tu vida\n"
	.string "entregándote a algo así,\l"
	.string "cuando a lo máximo que puedes\l"
	.string "aspirar es a ser menos malo que el\l"
	.string "resto de BELLSPROUT?$"

Violet_SproutTower_P2_Encuentro_Zeus_Texto_4:
.string "Confio en que la TORRE CAMPANA de\n"
	.string "CIUDAD IRIS tenga algo más\l"
	.string "interesante que decir. Ya he visto\l"
	.string "suficiente de este lugar.$"

Violet_SproutTower_P2_Encuentro_Zeus_Texto_5:
.string "{PLAYER}, no esperaba volver a\n"
	.string "verte, y menos en un lugar como\l"
	.string "este. Creía que solo operabas por\l"
	.string "KANTO e ISLAS SETE.$"

Violet_SproutTower_P2_Encuentro_Zeus_Texto_6:
.string "Aunque a decir verdad, esta pagoda\n"
	.string "le vendrá bien a alguien como tú.\l"
	.string "Realmente le viene bien a\l"
	.string "cualquiera que esté sujeto por las\l"
	.string "leyes de los POKÉMON mortales, si\l"
	.string "lo que quieres es estirar un\l"
	.string "poquito más tu limitado margen de\l"
	.string "mejora. Pero yo no he venido aquí\l"
	.string "por eso.$"

Violet_SproutTower_P2_Encuentro_Zeus_Texto_7:
.string "Todos vuestros POKÉMON no son más\n"
	.string "que sombras y cenizas. No\l"
	.string "obstante...$"

Violet_SproutTower_P2_Encuentro_Zeus_Texto_8:
.string "Ese ENTRENADOR...\n"
	.string "Se dirigía a PUEBLO AZALEA.\l"
	.string "Contaba con un POKÉMON, un POKÉMON\l"
	.string "muy especial a pesar de no ser\l"
	.string "LEGENDARIO.$"

Violet_SproutTower_P2_Encuentro_Zeus_Texto_9:
.string "Ese POKÉMON tenía el poder del\n"
	.string "sol. Pude sentirlo nada más salir\l"
	.string "de la POKÉ BALL, la energía de ese\l"
	.string "POKÉMON se asemeja a la de los\l"
	.string "LEGENDARIOS más potentes, y\l"
	.string "desconozco el motivo.$"

Violet_SproutTower_P2_Encuentro_Zeus_Texto_10:
.string "Sin embargo, me enteré de que está\n"
	.string "enfermo. Ese excedente de energía\l"
	.string "es posiblemente la causa de su\l"
	.string "enfermedad. Su poder y su\l"
	.string "maldición caminan juntas de la\l"
	.string "mano.$"

Violet_SproutTower_P2_Encuentro_Zeus_Texto_11:
.string "Pero no me sorprende, es lo que\n"
	.string "ocurre cuando a un POKÉMON mortal\l"
	.string "le colocas el motor de un POKÉMON\l"
	.string "sagrado: su cuerpo no lo soporta.\l"
	.string "No deja de ser una anomalía, una\l"
	.string "prueba más de que jugar a ser\l"
	.string "dioses sin serlo sale caro.$"

Violet_SproutTower_P2_Encuentro_Zeus_Texto_12:
.string "Espero que esto te sirva como\n"
	.string "ejemplo de lo que puede ocurrirte\l"
	.string "a ti también si tratas de jugar\l"
	.string "con cosas más grandes que tu\l"
	.string "propia existencia.$"

Violet_SproutTower_P2_Encuentro_Zeus_Move_1:
walk_in_place_up
step_end

Violet_SproutTower_P2_Encuentro_Zeus_Move_2:
face_right
step_end

Violet_SproutTower_P2_Encuentro_Zeus_Move_3:
walk_slow_up
walk_slow_up
walk_slow_up
walk_in_place_up
step_end

Violet_SproutTower_P2_Encuentro_Zeus_Move_4:
emote_exclamation_mark
step_end

Violet_SproutTower_P2_Encuentro_Zeus_Move_5:
walk_down
walk_down
face_right
step_end

Violet_SproutTower_P2_Encuentro_Zeus_Move_6:
face_left
step_end

Violet_SproutTower_P2_Encuentro_Zeus_Move_7:
face_down
step_end

Violet_SproutTower_P2_Encuentro_Zeus_Move_8:
walk_right
step_end

Violet_SproutTower_P2_Encuentro_Zeus_Move_9:
walk_in_place_right
step_end

Violet_SproutTower_P2_Encuentro_Zeus_Move_10:
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
step_end

Violet_SproutTower_P2_Encuentro_Maestro::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 122
goto_if_gt Violet_SproutTower_P2_Encuentro_Maestro_2
msgbox Violet_SproutTower_P2_Encuentro_Maestro_Texto_1 MSGBOX_AUTOCLOSE
msgbox Violet_SproutTower_P2_Encuentro_Maestro_Texto_2 MSGBOX_AUTOCLOSE
msgbox Violet_SproutTower_P2_Encuentro_Maestro_Texto_3 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 5, Violet_SproutTower_P2_Encuentro_Maestro_Move_1
waitmovement 0x0
msgbox Violet_SproutTower_P2_Encuentro_Maestro_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_MAESTRO_BELLSPROUT, Violet_SproutTower_P2_Encuentro_Maestro_Texto_5
msgbox Violet_SproutTower_P2_Encuentro_Maestro_Texto_6 MSGBOX_AUTOCLOSE
applymovement 7, Violet_SproutTower_P2_Encuentro_Maestro_Move_2
applymovement 5, Violet_SproutTower_P2_Encuentro_Maestro_Move_3
waitmovement 0x0
msgbox Violet_SproutTower_P2_Encuentro_Maestro_Texto_7 MSGBOX_AUTOCLOSE
msgbox Violet_SproutTower_P2_Encuentro_Maestro_Texto_8 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_128_STEVEN
fadescreen 1
playse SE_WARP_OUT
msgbox Violet_SproutTower_P2_Encuentro_Maestro_Texto_9 MSGBOX_AUTOCLOSE
waitse
removeobject 7
fadescreen 0
delay 15
applymovement 5, Violet_SproutTower_P2_Encuentro_Maestro_Move_4
waitmovement 0x0
msgbox Violet_SproutTower_P2_Encuentro_Maestro_Texto_10 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox Violet_SproutTower_P2_Encuentro_Maestro_Texto_10.1 MSGBOX_DEFAULT
waitfanfare
additem ITEM_HM05
msgbox Violet_SproutTower_P2_Encuentro_Maestro_Texto_11 MSGBOX_NPC
setvar VAR_UNUSED_0x40F7, 123
release
end

Violet_SproutTower_P2_Encuentro_Maestro_2::
lock
faceplayer
msgbox Violet_SproutTower_P2_Encuentro_Maestro_Texto_11 MSGBOX_NPC
release
end

Violet_SproutTower_P2_Encuentro_Maestro_Texto_10.1:
.string "¡¡{PLAYER} obtuvo la MO05 de\n"
	.string "manos de MAESTRO BELLSPROUT!$"

Violet_SproutTower_P2_Encuentro_Maestro_Texto_1:
.string "Ese chico va a acabar mal, está\n"
	.string "cegado por una sola de las\l"
	.string "cualidades que definen a un\l"
	.string "POKÉMON: los STATS BASE. Y ello le\l"
	.string "impide ver el resto de virtudes\l"
	.string "que cada uno de los POKÉMON tiene.$"

Violet_SproutTower_P2_Encuentro_Maestro_Texto_2:
.string "Parte de una definición de poder\n"
	.string "errónea. El verdadero poder puede\l"
	.string "provenir de cualquier POKÉMON, si\l"
	.string "eres capaz de conocerlo lo\l"
	.string "suficiente. Y saber ordenar\l"
	.string "adecuadamente las infinitas\l"
	.string "combinaciones que puedes hacer con\l"
	.string "él, puede derrotar a cualquiera.\l"
	.string "¿No es eso acaso poder?\l"
	.string "Dentro de cada POKÉMON está el\l"
	.string "potencial de ser excelente, solo\l"
	.string "que algunos son incapaces de\l"
	.string "desarrollarlo.$"

Violet_SproutTower_P2_Encuentro_Maestro_Texto_3:
.string "...\n"
	.string "...$"

Violet_SproutTower_P2_Encuentro_Maestro_Texto_4:
.string "¡Oh!\n"
	.string "¿Así que te envía PEGASO? Algo\l"
	.string "debe de haber visto en ti para\l"
	.string "enviarte aquí.\l"
	.string "Sabiendo que seré tú prueba para\l"
	.string "acceder a algo tan especial como\l"
	.string "lo es combatir con PEGASO, no me\l"
	.string "queda otra que usar a mis mejores\l"
	.string "POKÉMON.\l"
	.string "¡Muéstrame el vínculo que\l"
	.string "mantienes con tu equipo!$"

Violet_SproutTower_P2_Encuentro_Maestro_Texto_5:
.string "¡Oh!\n"
	.string "Así que no todos los entrenadores\l"
	.string "jóvenes han perdido la esencia del\l"
	.string "combate...$"

Violet_SproutTower_P2_Encuentro_Maestro_Texto_6:
.string "No esperaba para nada volverme a\n"
	.string "encontrar con entrenadores así.\l"
	.string "Alguien como tú merece ser puesto\l"
	.string "a prueba con rivales que le\l"
	.string "obliguen a ir más allá.$"

Violet_SproutTower_P2_Encuentro_Maestro_Texto_7:
.string "¡PEGASO!\n"
	.string "¡Avisa a tu padre!\l"
	.string "¡Este chaval acaba de cumplir su\l"
	.string "reto!$"

Violet_SproutTower_P2_Encuentro_Maestro_Texto_8:
.string "PEGASO: Voy, maestro.$"

Violet_SproutTower_P2_Encuentro_Maestro_Texto_9:
.string "(PEGASO USÓ CUERDA HUIDA).$"

Violet_SproutTower_P2_Encuentro_Maestro_Texto_10:
.string "Y toma esto. Con esta MO podrás\n"
	.string "iluminar la más oscura de las\l"
	.string "cuevas.$"

Violet_SproutTower_P2_Encuentro_Maestro_Texto_11:
.string "Pase lo que pase, no olvides\n"
	.string "disfrutar de cada paso en tu\l"
	.string "viaje. Ese momento presente es lo\l"
	.string "único que tienes, todas tus\l"
	.string "expectativas de futuro no son más\l"
	.string "que una ilusión que solo tomará\l"
	.string "forma en base a lo que hagas\l"
	.string "ahora.$"

Violet_SproutTower_P2_Encuentro_Maestro_Move_1:
emote_exclamation_mark
step_end

Violet_SproutTower_P2_Encuentro_Maestro_Move_2:
face_right
step_end

Violet_SproutTower_P2_Encuentro_Maestro_Move_3:
face_left
step_end

Violet_SproutTower_P2_Encuentro_Maestro_Move_4:
face_player
step_end

VioletViolet_SproutTower_P2_Pegaso::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 124
goto_if_gt VioletViolet_SproutTower_P2_Pegaso_2
msgbox VioletViolet_SproutTower_P2_Pegaso_Texto_1 MSGBOX_NPC
release
end

VioletViolet_SproutTower_P2_Pegaso_2::
msgbox VioletViolet_SproutTower_P2_Pegaso_Texto_2 MSGBOX_NPC
release
end

VioletViolet_SproutTower_P2_Pegaso_Texto_1:
.string "¿Quién era esa persona?\n"
	.string "Jamás había visto a alguien\l"
	.string "derrotar así a mi maestro. Sus\l"
	.string "POKÉMON casi derrumban este lugar\l"
	.string "de lo grandes que son.$"

VioletViolet_SproutTower_P2_Pegaso_Texto_2:
.string "Entonces...\n"
	.string "Solo hay que enseñar tu verdadero\l"
	.string "poder a quien de verdad lo\l"
	.string "merece...\l"
	.string "El resto debe conformarse con no\l"
	.string "más que un PIDGEOTTO y su BOFETÓN\l"
	.string "LODO...$"
