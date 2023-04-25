RocketHideout_4F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_4F_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_4F_OnFrame
    .byte 0

RocketHideout_4F_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 46, PokemonTower5F_Escena_4_Blaine
map_script_2 VAR_UNUSED_0x40F7, 58, RocketHideout_4F_Escena_Castigo_Reclutas
	.2byte 0

	
	



RocketHideout4F_1::
end

RocketHideout4F_Dialogos_Giovanni::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 178
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionesDLC
compare VAR_UNUSED_0x40F7, 167
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoSegunda
compare VAR_UNUSED_0x40F7, 116
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionJohto
compare VAR_UNUSED_0x40F7, 112
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionMansionOak
compare VAR_UNUSED_0x40F7, 106
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoPrimera
compare VAR_UNUSED_0x40F7, 101
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSotanoSilph
compare VAR_UNUSED_0x40F7, 92
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLiga
compare VAR_UNUSED_0x40F7, 94
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionIslas
compare VAR_UNUSED_0x40F7, 78
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionGimnasios
compare VAR_UNUSED_0x40F7, 71
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSilph
compare VAR_UNUSED_0x40F7, 62
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionAves
compare VAR_UNUSED_0x40F7, 51
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_BaseProfunda
compare VAR_UNUSED_0x40F7, 43
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLavanda
compare VAR_UNUSED_0x40F7, 38
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_Kangaskhan
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionesDLC::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionesDLC_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionesDLC_Texto_1:
.string "Disfruta de JOHTO {PLAYER}, exprime\n"
	.string "al máximo todos sus rincones y llega\l"
	.string "hasta donde nadie más ha llegado. Algún\l"
	.string "día echarás la vista atrás y te darás\l"
	.string "cuenta de todo lo que has visto y\l"
	.string "vivido. Toda historia tiene su fin, pero\l"
	.string "esta... aún no.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoSegunda::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoSegunda_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoSegunda_Texto_1:
.string "Vamos a desentrañar de una vez por\n"
	.string "todas el misterio del POKÉMON ESENCIA,\l"
	.string "una vez descubierto, nada nos impedirá\l"
	.string "convertir KANTO y JOHTO en las\l"
	.string "potencias del MUNDO POKÉMON.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionJohto::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionJohto_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionJohto_Texto_1:
.string "La región de JOHTO es la de mayor\n"
	.string "historia y tradición que existe en\l"
	.string "el mundo conocido, es indudable\l"
	.string "que hay algo...espiritual en ese\l"
	.string "lugar.\l"
	.string "Y aunque tal vez nunca podamos\l"
	.string "llegar a comprenderlo claramente,\l"
	.string "no podemos ignorar su poder.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLiga::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLiga_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLiga_Texto_1:
.string "La LIGA POKÉMON se ha mantenido\n"
	.string "infranqueable desde la guerra, pero el\l"
	.string "no contar con oposición alguna también\l"
	.string "les ha debilitado. LANCE confía en la\l"
	.string "superioridad de sus POKÉMON en cuanto\l"
	.string "STATS BASE, tú derrotaste a las AVES\l"
	.string "SAGRADAS, sabes de primera mano que\l"
	.string "eso no lo es todo en un combate.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionMansionOak::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionMansionOak_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionMansionOak_Texto_1:
.string "Ve a la MANSIÓN POKÉMON, {PLAYER}, y\n"
	.string "demuéstrale a OAK cómo pelea un\l"
	.string "ENTRENADOR en sintonía con los suyos.$"


RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoPrimera::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoPrimera_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoPrimera_Texto_1:
.string "Tal vez esa entrada secreta esté a las\n"
	.string "afueras de PUEBLO LAVANDA, ¿has\l"
	.string "mirado por el sur, en RUTA 12?$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSotanoSilph::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSotanoSilph_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSotanoSilph_Texto_1:
.string "Habla con la recepcionista de SILPH,\n"
	.string "ella te mostrará la gran biblioteca\l"
	.string "privada que tienen en el sótano. Según\l"
	.string "me ha dicho el PRESIDENTE, los datos\l"
	.string "sobre ese POKÉMON ESENCIA están en el\l"
	.string "S3, en la última sala.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionIslas::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionIslas_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionIslas_Texto_1:
.string "Relájate y disfruta de las islas\n"
	.string "{PLAYER}. Hay mucho por hacer allí, si\l"
	.string "sabes adonde ir, tal vez si visitas a\l"
	.string "ATLAS en nuestro cuartel él te muestre\l"
	.string "algunos de sus secretos, conoce mejor\l"
	.string "que nadie el ARCHI7.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionGimnasios::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionGimnasios_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionGimnasios_Texto_1:
.string "Puedes enfrentar los gimnasios en el\n"
	.string "orden que prefieras, {PLAYER}, pero\l"
	.string "mi recomendación es que sigas el orden\l"
	.string "tradicional. Igualmente, el GIMNASIO\l"
	.string "CANELA está cerrado actualmente,\l"
	.string "habrá que esperar a que ese canalla de\l"
	.string "BLAINE lo reabra, recuerda que una vez\l"
	.string "obtenidas las 7 primeras medallas, aún\l"
	.string "queda nuestro propio GIMNASIO de\l"
	.string "CIUDAD VERDE.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSilph::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSilph_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSilph_Texto_1:
.string "Confío en ti, {PLAYER}. La seguridad\n"
	.string "de SILPH tiene fama de ser implacable,\l"
	.string "pero jamás se han enfrentado a\l"
	.string "entrenadores como ANDRA o tú mismo.\l"
	.string "¡Ve a SILPH y demuéstrales cómo pelea\l"
	.string "un ROCKET de verdad!$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionAves::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionAves_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionAves_Texto_1:
.string "Localizamos un ARTICUNO en ISLAS\n"
	.string "ESPUMA, para llegar hasta ahí deberás\l"
	.string "primero cruzar todas las rutas 12, 13,\l"
	.string "14 y 15, al sur de PUEBLO LAVANDA, y\l"
	.string "después el mar de CIUDAD FUCSIA. No te\l"
	.string "confíes {PLAYER}, mi consejo es que\l"
	.string "uses todo el largo camino hasta\l"
	.string "ARTICUNO como entrenamiento, hace\l"
	.string "falta algo más que saber combatir para\l"
	.string "derrotar a un POKÉMON SAGRADO.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_BaseProfunda::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_BaseProfunda_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_BaseProfunda_Texto_1:
.string "GIOVANNI: Así que crees que estoy\n"
	.string "siendo ineficiente y no doy buen\l"
	.string "ejemplo estando aquí sentado sin\l"
	.string "aparentemente hacer nada, a\l"
	.string "diferencia del resto de ejecutivos\l"
	.string "que trabajan con todo tipo de\l"
	.string "tecnología.\l"
	.string "Te diré algo chico, cuando ya has\l"
	.string "visto lo que yo he visto llega un\l"
	.string "punto en que tu propio pensamiento\l"
	.string "interno es mucho más poderoso y\l"
	.string "valioso que cualquier información\l"
	.string "que puedas encontrar ahí fuera.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLavanda::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLavanda_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLavanda_Texto_1:
.string "La reunión con FUJI es de vital\n"
	.string "importancia para nosotros {PLAYER}.\l"
	.string "Una vez en TORRE POKÉMON, AZUL se\l"
	.string "encargará de asegurar los pisos\l"
	.string "inferiores, mientras tú harás guardia\l"
	.string "en los superiores y avisarás a PROTÓN\l"
	.string "ante cualquier inconveniente.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_Kangaskhan::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_Kangaskhan_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_Kangaskhan_Texto_1:
.string "¿Y bien? Quiero ese KANGASKHAN fuera\n"
	.string "del TÚNEL ROCA. Podrás llegar por los\l"
	.string "subterráneos del este de AZULONA,\l"
	.string "ellos te llevarán a PUEBLO LAVANDA, una\l"
	.string "vez ahí el TÚNEL ROCA está justo al\l"
	.string "norte. Recuerda, no quiero que entres\l"
	.string "en TORRE POKÉMON, tenemos planes ahí.$"




RocketHideout4F_3::
lock     
faceplayer     
msgbox RocketHideout4F_Text_3, MSGBOX_DEFAULT
release     
end

RocketHideout4F_Text_3:
.string "¡No te preocupes hermano!\n"
.string "¡Si alguien se infiltrara en\l"
.string "nuestra BASE nunca podría llegar a\l"
.string "nuestro LÍDER!\l"
.string "¡Nunca sin la LLAVE ASCENSOR\l"
.string "jojojo!$"



RocketHideout4F_5::
lock     
faceplayer     
msgbox RocketHideout4F_Text_5, MSGBOX_DEFAULT
release     
end

RocketHideout4F_Text_5:
.string "Guarda respeto y mantén las\n"
.string "distancias cuando vayas a\l"
.string "dirijirte hacia nuestro LÍDER\l"
.string "recluta, si nos caracterizamos por\l"
.string "algo es por cumplir de forma\l"
.string "impoluta con el protocolo.$"



RocketHideout4F_6::
lock     
faceplayer     
msgbox RocketHideout4F_Text_6, MSGBOX_DEFAULT
release     
end

RocketHideout4F_Text_6:
.string "Guarda respeto y mantén las\n"
.string "distancias cuando vayas a\l"
.string "dirijirte hacia nuestro LÍDER\l"
.string "recluta, si nos caracterizamos por\l"
.string "algo es por cumplir de forma\l"
.string "impoluta con el protocolo.$"



RocketHideout4F_7::
end



RocketHideout4F_10::
end

RocketHideout_4F_Mision_Andra_Fucsia::
playse SE_PIN
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Andra_Fucsia_move_2
waitmovement 0x0
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_3
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_1 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_2 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_3 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_4 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_5
waitmovement 0x0
delay 20
playse SE_SLIDING_DOOR
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
removeobject 9
setvar VAR_UNUSED_0x40F7, 38
release
end

RocketHideout_4F_Mision_Andra_Fucsia_2::
playse SE_PIN
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_1.1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Andra_Fucsia_move_2
waitmovement 0x0
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_3
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_1 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_2 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_3 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_4 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_5.1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Andra_Fucsia_move_6
waitmovement 0x0
delay 20
playse SE_SLIDING_DOOR
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
removeobject 9
setvar VAR_UNUSED_0x40F7, 38
release
end

RocketHideout_4F_Mision_Andra_Fucsia_Texto_1:
.string "ANDRA: ¡Tarde como siempre!\n"
	.string "¡Aún no has visto a GIOVANNI y\l"
	.string "nuestro gran líder ya me ha\l"
	.string "asignado una misión!\l"
	.string "¿Qué te parece?\l"
	.string "Al parecer está habiendo bastantes\l"
	.string "disturbios en CIUDAD FUCSIA con el\l"
	.string "tema de los motoristas y el CAMINO\l"
	.string "BICIS, y ahí es donde entraremos\l"
	.string "nosotros como mediadores, ya me\l"
	.string "entiendes.$"

RocketHideout_4F_Mision_Andra_Fucsia_Texto_2:
.string "¿Qué te parece nuestra nueva zona\n"
	.string "de trabajo?\l"
	.string "Parece que PETREL estaba\l"
	.string "exagerando cuando dijo que la\l"
	.string "guarida de AZULONA no tenía nada\l"
	.string "que ver con la de RUTA 5, es\l"
	.string "cierto, es mucho más grande, pero\l"
	.string "se ve muy parecida, ¿no crees?$"

RocketHideout_4F_Mision_Andra_Fucsia_Texto_3:
.string "Sea como sea, me largo ya, mi\n"
	.string "primera misión aquí no puede tener\l"
	.string "ningún fallo, se cumplirá de forma\l"
	.string "impecable.\l"
	.string "A propósito, GIOVANNI me ha\l"
	.string "preguntado por ti, deberías de\l"
	.string "presentarte ya en su despacho,\l"
	.string "puede que quiera algo concreto de\l"
	.string "ti.$"

RocketHideout_4F_Mision_Andra_Fucsia_Texto_4:
.string "¡Lo dicho!\n"
	.string "¡CIUDAD FUCSIA es mía!$"

RocketHideout_4F_Mision_Andra_Fucsia_move_1:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_in_place_right
step_end

RocketHideout_4F_Mision_Andra_Fucsia_move_1.1:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_in_place_right
step_end

RocketHideout_4F_Mision_Andra_Fucsia_move_2:
emote_exclamation_mark
walk_in_place_left
step_end

RocketHideout_4F_Mision_Andra_Fucsia_move_3:
emote_exclamation_mark
step_end

RocketHideout_4F_Mision_Andra_Fucsia_move_4:
walk_in_place_down
walk_in_place_right
step_end

RocketHideout_4F_Mision_Andra_Fucsia_move_5:
walk_up
walk_right
walk_right
walk_right
face_up
step_end

RocketHideout_4F_Mision_Andra_Fucsia_move_5.1:
walk_right
walk_right
walk_right
face_up
step_end

RocketHideout_4F_Mision_Andra_Fucsia_move_6:
walk_down
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_1_1::
lockall
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_1_move_1
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_1_move_2
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_1_Parte2

RocketHideout_4F_Giovanni_Mision_1_2::
lockall
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_1_move_1
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_1_move_2.1
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_1_Parte2


RocketHideout_4F_Giovanni_Mision_1_Parte2::
applymovement 10, RocketHideout_4F_Giovanni_Mision_1_move_3
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_2 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_5
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_5 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_8 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_10 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_11 MSGBOX_AUTOCLOSE
fadescreen 1
delay 60
fadescreen 0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_13 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_14 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_4F_Giovanni_Mision_1_move_9
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_15 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_16 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_4F_Giovanni_Mision_1_move_10
waitmovement 0x0
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
addobject 4
applymovement 4, RocketHideout_4F_Giovanni_Mision_1_move_11
waitmovement 0x0
playse MUS_RG_SILPH
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_17 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_18 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_12
waitmovement 0x0
delay 30
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_19 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_20 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_21 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_22 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_23 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_5
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_24 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_25 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_26 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_4F_Giovanni_Mision_1_move_8
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_27 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_4F_Giovanni_Mision_1_move_13
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
removeobject 4
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_28 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_29 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_1_move_1
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_30 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_31 MSGBOX_AUTOCLOSE
fadedefaultbgm
setvar VAR_UNUSED_0x40F7, 39
release
end

RocketHideout_4F_Giovanni_Mision_1_Texto_1:
.string "????: {PLAYER}, ¿me equivoco?\n"
	.string "Pasa.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_2:
.string "????: Se presenta ante usted el\n"
	.string "RECLUTA DE ALTO RANGO {PLAYER},\l"
	.string "señor.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_3:
.string "Ha servido de forma oficial en 4\n"
	.string "misiones, teniendo éxito en 3 de\l"
	.string "ellas, le paró los pies a la\l"
	.string "CÓNSUL de ISLA INTA antes de que\l"
	.string "comprometiese nuestra situación\l"
	.string "comercial, fue clave en el robo a\l"
	.string "la patente de Bill que ha mejorado\l"
	.string "exponencialmente nuestras\l"
	.string "comunicaciones, autor también del\l"
	.string "robo a la famosa reliquia del\l"
	.string "CAPITÁN del SS.ANNE que ahora está\l"
	.string "siendo investigada por nuestros\l"
	.string "mejores científicos, su única\l"
	.string "derrota en combate ha sido a manos\l"
	.string "de ese misterioso entrenador de\l"
	.string "PUEBLO PALETA en el fiasco del\l"
	.string "MT.MOON, y según los presentes,\l"
	.string "fue el único RECLUTA que no se\l"
	.string "dejó intimidar por el ridículo\l"
	.string "poder de su rival peleando hasta\l"
	.string "el final.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_4:
.string "GIOVANNI: Excelente PROTÓN,\n"
	.string "gracias por la presentación.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_5:
.string "Como puedes ver, {PLAYER}, no\n"
	.string "dejamos nada al azar, y tenemos en\l"
	.string "cuenta cada uno de los resultados\l"
	.string "de cada una de las células que\l"
	.string "forman esta gran organización, su\l"
	.string "correcta combinación y evaluación\l"
	.string "es la forma más justa de\l"
	.string "determinar qué lugar ocupa cada\l"
	.string "miembro, ¿no crees?$"

RocketHideout_4F_Giovanni_Mision_1_Texto_6:
.string "Así que vienes de ISLA INTA,\n"
	.string "muchas de las cosas que has visto\l"
	.string "aquí en KANTO te parecerán\l"
	.string "extrañas, te aseguro que es una\l"
	.string "región que merece la pena visitar\l"
	.string "y explorar, cuenta con lugares\l"
	.string "icónicos, muy buenos POKÉMON y una\l"
	.string "historia única, sin embargo su\l"
	.string "gente...es otro decir.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_7:
.string "Como ROCKET te enrolaste en\n"
	.string "nuestra organización con el fin de\l"
	.string "robar POKÉMON u otros objetos\l"
	.string "valiosos que equilibren la balanza\l"
	.string "de nuestros flujos de efectivo,\l"
	.string "esa es la función que tienen el\l"
	.string "90% de Rockets, función poco ética\l"
	.string "pero necesaria he de decir.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_8:
.string "No obstante, tanto tú como Andra\n"
	.string "fuisteis ascendidos a ALTOS\l"
	.string "RANGOS, lo que os aleja de este\l"
	.string "tipo de misiones para ser parte de\l"
	.string "cuestiones mucho más relevantes\l"
	.string "para el futuro a medio y largo\l"
	.string "plazo del TEAM ROCKET.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_9:
.string "Esto implica también un acceso\n"
	.string "privilegiado a información acerca\l"
	.string "del propósito último de nuestra\l"
	.string "organización, la situación actual\l"
	.string "en Kanto y la verdadera historia\l"
	.string "de esta región.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_10:
.string "Pero aún es demasiado pronto,\n"
	.string "quiero que crezcáis y mejoréis aún\l"
	.string "más bajo mi mando, que exploréis\l"
	.string "un poco más la región, disfrutéis\l"
	.string "de ello...y a su debido tiempo\l"
	.string "tendremos una reunión.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_11:
.string "Eso por un lado, ahora pasemos a\n"
	.string "la segunda parte de esta charla:\l"
	.string "quiero que me hables de ese\l"
	.string "misterioso entrenador, tú fuiste\l"
	.string "quien más tiempo lo enfrentó,\l"
	.string "cuéntame todo sobre él, sus\l"
	.string "POKÉMON, objetos y movimientos que\l"
	.string "usó, su forma de combatir, rasgos\l"
	.string "físicos, actitud, posibles puntos\l"
	.string "débiles...todo lo que se te pase\l"
	.string "por la cabeza.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_12:
.string "GIOVANNI: ... ...\n"
	.string "Ya veo, no parece alguien\l"
	.string "convencional, un CHARMELEON no es\l"
	.string "un POKÉMON que se vea tan\l"
	.string "facilmente así como así, solo las\l"
	.string "élites tienen acceso a esa clase\l"
	.string "de POKÉMON, inexistentes desde\l"
	.string "hace tiempo en estado salvaje\l"
	.string "desde la gran guerra, por lo que\l"
	.string "dices llevaba también una Pokédex,\l"
	.string "todo indica a que ese niño viene\l"
	.string "de PUEBLO PALETA, el equipo que me\l"
	.string "has descrito es absurdamente\l"
	.string "poderoso si tenemos en cuenta la\l"
	.string "distancia entre PUEBLO PALETA y el\l"
	.string "MT.MOON y el poco bagaje que debe\l"
	.string "de llevar como entrenador.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_13:
.string "Tal vez veas a alguien de esas\n"
	.string "dimensiones como inalcanzable, y\l"
	.string "ciertamente es una amenaza, pero\l"
	.string "créeme cuando te digo que KANTO es\l"
	.string "mucho más que un entrenador por\l"
	.string "muy fuerte que sea, nadie,\l"
	.string "absolutamente nadie, es intocable\l"
	.string "y todos de una manera u otra\l"
	.string "pueden caer, irás dándote cuenta\l"
	.string "de lo lejos que están lo que ahora\l"
	.string "tienes por límites conforme más te\l"
	.string "vayas adentrando en nuestra\l"
	.string "organización.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_14:
.string "Eso es todo en cuanto al\n"
	.string "misterioso entrenador, ahora\l"
	.string "pasemos a la tercera y última\l"
	.string "parte de tu convocatoria aquí,\l"
	.string "hablemos de...$"

RocketHideout_4F_Giovanni_Mision_1_Texto_15:
.string "RECLUTA: Disculpe señor, el LIDER\n"
	.string "DE GIMNASIO de CIUDAD FUCSIA\l"
	.string "quiere verle inmediatamente, dice\l"
	.string "que es urgente.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_16:
.string "GIOVANNI: Que pase.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_17:
.string "GIOVANNI: Espero que tu causa sea\n"
	.string "de fuerza mayor KOGA, acabas de\l"
	.string "interrumpir mi reunión con el\l"
	.string "joven recluta {PLAYER}.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_18:
.string "KOGA: ¿Aún no te has enterado?\n"
	.string "¡Corren rumores de que un\l"
	.string "KANGASKHAN ha sido visto en lo más\l"
	.string "profundo del TÚNEL ROCA!$"

RocketHideout_4F_Giovanni_Mision_1_Texto_19:
.string "GIOVANNI: Continúa.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_20:
.string "KOGA: Si eso llegara a ser cierto,\n"
	.string "la ZONA SAFARI perdería una enorme\l"
	.string "cantidad de público lanzándose a\l"
	.string "la caza del raro POKÉMON maternal\l"
	.string "por su cuenta.\l"
	.string "Hemos vendido la ZONA SAFARI como\l"
	.string "un lugar único en el que existen\l"
	.string "POKÉMON que solo pueden\l"
	.string "encontrarse precisamente allí,\l"
	.string "vendimos a KANGASKHAN como el\l"
	.string "símbolo de nuestra flora y fauna,\l"
	.string "su procedencia supuestamente es\l"
	.string "debida a nuestra crianza en\l"
	.string "cautiverio, y a nada más, no\l"
	.string "pueden surgir de la nada, alguien\l"
	.string "debió de hacer la gracia soltando\l"
	.string "al raro POKÉMON previamente\l"
	.string "atrapado en nuestro safari.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_21:
.string "KOGA: GIOVANNI, como dueño del 20%\n"
	.string "de las acciones totales de la ZONA\l"
	.string "SAFARI que eres, vengo a\l"
	.string "informarte pero sobre todo a\l"
	.string "pedirte que te hagas cargo de esta\l"
	.string "situación, sabes que nuestras\l"
	.string "pérdidas serían millonarias al\l"
	.string "instante de confirmarse este\l"
	.string "rumor, la imagen de exclusividad\l"
	.string "de la ZONA SAFARI se rompería en\l"
	.string "pedazos.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_22:
.string "GIOVANNI: Entiendo KOGA, me haré\n"
	.string "cargo de la situación, no te quepa\l"
	.string "duda, aunque ya sabes lo que\l"
	.string "pienso de la ZONA SAFARI, fue una\l"
	.string "excelente inversión que con el\l"
	.string "paso del tiempo ha ido a menos,\l"
	.string "incluso bajando los precios a\l"
	.string "niveles ridículos la gente cada\l"
	.string "vez va menos, este movimiento solo\l"
	.string "retrasará su inevitable caída, mi\l"
	.string "pronóstico es que en menos de 3\l"
	.string "años dejará de existir, aún así,\l"
	.string "el frenar esa caída puede suponer\l"
	.string "varias decenas de millones de\l"
	.string "ganancias respecto a dejarla caer.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_23:
.string "KOGA: Cuento contigo entonces.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_24:
.string "GIOVANNI: De ese lugar no saldrá\n"
	.string "nadie que no sea ROCKET con un\l"
	.string "KANGASKHAN, si es que lo hay.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_25:
.string "KOGA: Estaré atento a las\n"
	.string "noticias, debemos actuar rápido,\l"
	.string "la zona se llenará de curiosos\l"
	.string "enseguida.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_26:
.string "GIOVANNI: Eso es todo KOGA, te\n"
	.string "enviaré los resultados cuando los\l"
	.string "tenga, ahora si me disculpas,\l"
	.string "tengo una charla que acabar.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_27:
.string "KOGA: ... ...\n"
	.string "Viva la vieja KANTO.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_28:
.string "GIOVANNI: Cambio de planes\n"
	.string "{PLAYER}, ya has oído a KOGA, tu\l"
	.string "misión ahora será limpiar hasta el\l"
	.string "último rincón del TÚNEL ROCA en\l"
	.string "busca de ese supuesto KANGHASKAN,\l"
	.string "borra toda prueba, todo indicio\l"
	.string "posible que pueda indicar que un\l"
	.string "KANGASKHAN estuvo allí.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_29:
.string "Podrás encontrar el TÚNEL ROCA\n"
	.string "pasando primero por la VÍA\l"
	.string "SUBTERRÁNEA al este de la ciudad,\l"
	.string "a partir de ahí no tiene pérdida,\l"
	.string "llegarás a PUEBLO LAVANDA, y una\l"
	.string "vez allí, el TÚNEL ROCA está al\l"
	.string "norte.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_30:
.string "Eso es todo {PLAYER}, si ese\n"
	.string "KANGASKHAN existe hazte con él y\l"
	.string "tráelo aquí como prueba, y otra\l"
	.string "cosa más, evita la TORRE POKÉMON\l"
	.string "de LAVANDA, no quiero ROCKETS en\l"
	.string "ese lugar, al menos por ahora\l"
	.string "¿entendido?$"

RocketHideout_4F_Giovanni_Mision_1_Texto_31:
.string "GIOVANNI: ¡Entonces a trabajar!$"


RocketHideout_4F_Giovanni_Mision_1_move_1:
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_1_move_2:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_right
walk_slow_right
walk_slow_up
step_end

RocketHideout_4F_Giovanni_Mision_1_move_2.1:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_right
walk_slow_up
step_end


RocketHideout_4F_Giovanni_Mision_1_move_3:
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_1_move_4:
face_right
step_end

RocketHideout_4F_Giovanni_Mision_1_move_5:
face_down
step_end

RocketHideout_4F_Giovanni_Mision_1_move_6:
walk_slow_left
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_1_move_7:
walk_slow_right
walk_in_place_down
step_end

RocketHideout_4F_Giovanni_Mision_1_move_8:
walk_in_place_down
step_end

RocketHideout_4F_Giovanni_Mision_1_move_9:
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_4F_Giovanni_Mision_1_move_10:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_slow_left
face_down
step_end

RocketHideout_4F_Giovanni_Mision_1_move_11:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_up
step_end

RocketHideout_4F_Giovanni_Mision_1_move_12:
emote_exclamation_mark
step_end

RocketHideout_4F_Giovanni_Mision_1_move_13:
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_1
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Resto

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_2::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_1.1
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Resto


RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Resto::
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_1 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_2 MSGBOX_AUTOCLOSE
showmoneybox 0, 0
delay 15
playse SE_SHOP
addmoney 95000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_3 MSGBOX_DEFAULT
waitfanfare
delay 40
hidemoneybox
delay 40
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_4 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_5 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_6 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_4
waitmovement 0x0
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_6.1, MSGBOX_DEFAULT
givemon SPECIES_KABUTO, 28, ITEM_HARD_STONE
waitfanfare
applymovement 10, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_5
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_8 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_9 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_8
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_12 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_13 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_4
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_14 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_8
addobject 8
applymovement 8, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_9
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_10
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_15 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_16 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_11
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_18 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_11
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_20 MSGBOX_AUTOCLOSE
applymovement 8, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_21 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_22 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_23 MSGBOX_AUTOCLOSE
playse MUS_RG_RIVAL_EXIT
applymovement 8, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_12
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
removeobject 8
delay 15
playse MUS_RG_ROCKET_HIDEOUT 
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_24 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 44
release
end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_1:
.string "GIOVANNI: ¡{PLAYER} qué oportuno!\n"
	.string "Ya me han informado de tu\l"
	.string "excelente trabajo quitándole de\l"
	.string "las manos a ese oportunista al\l"
	.string "KANGASKHAN en el último momento.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_2:
.string "Tengo entendido que ese científico\n"
	.string "ya se aprovechó antes de la\l"
	.string "situación en el MT.MOON, has de\l"
	.string "saber que no es la primera vez que\l"
	.string "nos da problemas, es una especie\l"
	.string "de carroñero fanático de los\l"
	.string "POKÉMON raros, que hará todo para\l"
	.string "obtenerlos sin importar los\l"
	.string "medios, una especie de BILL pero\l"
	.string "sin sus recursos económicos, me\l"
	.string "alegra que hayas puesto en su\l"
	.string "lugar a ese cobarde en el nombre\l"
	.string "del TEAM ROCKET, eso, junto a\l"
	.string "encontrar al famoso KANGASKHAN,\l"
	.string "merece una buena recompensa.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_3:
.string "¡Acabas de facturar 95000 POKÉS!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_4:
.string "GIOVANNI: Y aún más, para celebrar\n"
	.string "tu venganza sobre ese aprovechado,\l"
	.string "el TEAM ROCKET te recompensará\l"
	.string "también con un KABUTO.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_5:
.string "Técnicamente estás recuperando el\n"
	.string "FÓSIL DOMO que te fue arrebatado\l"
	.string "en su momento, y con intereses, ya\l"
	.string "convertido en KABUTO y criado\l"
	.string "hasta el nivel 28 si no recuerdo\l"
	.string "mal.\l"
	.string "¡PROTON!\l"
	.string "¡Entrégale el KABUTO robado a\l"
	.string "{PLAYER}!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_6:
.string "PROTÓN: Con gusto, jefe.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_6.1:
.string "¡OBTUVISTE UN KABUTO AL NV.28!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_7:
.string "GIOVANNI: Técnicamente su valor es\n"
	.string "de varios cientos de miles de\l"
	.string "POKÉS en el mercado negro, pero tu\l"
	.string "historia con este FÓSIL vale más\l"
	.string "que eso...$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_8:
.string "Dicho esto, este tema queda\n"
	.string "zanjado, examinaremos a ese\l"
	.string "KANGASKHAN para determinar su\l"
	.string "verdadera procedencia, ya que\l"
	.string "sigue siendo todo un misterio que\l"
	.string "un POKÉMON así se halle en ese\l"
	.string "lugar.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_9:
.string "Bien {PLAYER}, en tu última misión\n"
	.string "te recalqué la importancia de no\l"
	.string "acercarte a la TORRE POKÉMON, ese\l"
	.string "lugar está muy relacionado con\l"
	.string "nuestro próximo movimiento...$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_10:
.string "Vamos a enviar a un pelotón\n"
	.string "completo para recolectar el máximo\l"
	.string "número de cráneos de CUNONE\l"
	.string "posibles, algo de enorme valor en\l"
	.string "el mercado negro.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_11:
.string "Sin embargo, esta es solo la\n"
	.string "tapadera, la excusa hacia la que\l"
	.string "todos mirarán debido a nuestra\l"
	.string "fama, el verdadero objetivo es\l"
	.string "llamar la atención de FUJI para\l"
	.string "que acuda a la TORRE LAVANDA en el\l"
	.string "momento exacto...$"


RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_12:
.string "FUJI fue uno de los mejores\n"
	.string "científicos bajo nuestras órdenes\l"
	.string "que ha habido, él es el único que\l"
	.string "conoce con todo detalle datos\l"
	.string "cruciales de uno de nuestros más\l"
	.string "grandes proyectos {PLAYER}.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_13:
.string "Tu misión es simple {PLAYER},\n"
	.string "PROTÓN se encargará de llevar a\l"
	.string "FUJI hasta el último piso para\l"
	.string "negociar en privado, mientras tú\l"
	.string "te encargas de garantizar la\l"
	.string "confidencialidad de dicha\l"
	.string "conversación, no quiero que\l"
	.string "absolutamente nadie acceda al\l"
	.string "último piso de esa TORRE mientras\l"
	.string "la negociación dure, ¿ha quedado\l"
	.string "claro?$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_14:
.string "Perfecto, nada debe de salir mal\n"
	.string "en esta misión {PLAYER}, es por\l"
	.string "ello que, junto con el resto de\l"
	.string "reclutas, formarás equipo con otro\l"
	.string "ENTRENADOR, creo que ya os\l"
	.string "conocéis...$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_15:
.string "GIOVANNI: ¿Sorprendido?\n"
	.string "AZUL accedió a aliarse con\l"
	.string "nosotros en su paso por el PUENTE\l"
	.string "PEPITA de RUTA 24, después de tu\l"
	.string "actuación en la casa de BILL, su\l"
	.string "condición de nieto del PROFESOR\l"
	.string "OAK, y rival directo de ROJO, si\l"
	.string "no me equivoco, lo convierten en\l"
	.string "nuestro agente doble perfecto.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_16:
.string "AZUL: Así que el ROCKET del\n"
	.string "SS.ANNE, escondes muy bien a tus\l"
	.string "soldados más valiosos GIOVANNI, ya\l"
	.string "podrías soltar a más como {PLAYER}\l"
	.string "por las RUTAS comunes, es\l"
	.string "imposible seguir mejorando con\l"
	.string "ENTRENADORES tan mediocres,\l"
	.string "¿puedes creerte que algunos de tus\l"
	.string "RECLUTAS aquí sigan teniendo\l"
	.string "ZUBATS y RATATTAS al nivel 17?\l"
	.string "¡Deberías echarlos por\l"
	.string "incompetentes!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17:
.string "GIOVANNI: Te queda mucho por ver\n"
	.string "de esta región joven, si piensas\l"
	.string "que los LÍDERES DE GIMNASIO son lo\l"
	.string "mejor de por aquí ya te adelanto\l"
	.string "que no es así, pero no te he\l"
	.string "llamado para hablar de eso.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_18:
.string "La única variable capaz de torcer\n"
	.string "este plan es ROJO, mis fuentes lo\l"
	.string "sitúan actualmente en RUTA 10, al\l"
	.string "pie del TÚNEL ROCA, tuviste suerte\l"
	.string "de no cruzarte con él de nuevo en\l"
	.string "tu última misión {PLAYER}, por su\l"
	.string "ritmo de avance todo apunta a que\l"
	.string "llegará a PUEBLO LAVANDA en plena\l"
	.string "misión, si por algún casual decide\l"
	.string "colarse en la TORRE LAVANDA, no\l"
	.string "podemos arriesgarnos a tener un\l"
	.string "MT.MOON 2.0, y es aquí donde\l"
	.string "entras tú AZUL.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19:
.string "Se te avisará de la llegada de\n"
	.string "ROJO, y te colocarás en los pisos\l"
	.string "inferiores de la TORRE, una vez\l"
	.string "aparezca, fingirás estar ahí de\l"
	.string "forma espontánea, sin nombrar\l"
	.string "nunca al TEAM ROCKET, tratarás de\l"
	.string "convencerlo para que de media\l"
	.string "vuelta, háblale de los FANTASMAS\l"
	.string "de la TORRE, de que necesita un\l"
	.string "SCOPE SILPH etc.\l"
	.string "Si decidiese subir de todos modos,\l"
	.string "avisa a {PLAYER} inmediatamente.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_20:
.string "¡{PLAYER}!\n"
	.string "¡No quiero que busques la revancha\l"
	.string "con ROJO, en caso de que se te\l"
	.string "informe de su llegada inminente,\l"
	.string "subirás al último piso y avisarás\l"
	.string "a PROTÓN, esa es la única razón\l"
	.string "para interrumpir su reunión con\l"
	.string "FUJI!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_21:
.string "AZUL: ¡Por qué le das tanta\n"
	.string "importancia a ROJO!\l"
	.string "¡Si me uniera con {PLAYER} seguro\l"
	.string "que lo derrotamos!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_22:
.string "GIOVANNI: La realidad es que nadie\n"
	.string "ha estado ni cerca de derrotarlo,\l"
	.string "ante un poder que es incontrolable\l"
	.string "solo nos queda hacer uso de la\l"
	.string "astucia para que se manifieste\l"
	.string "solo donde nos interese...y ganar\l"
	.string "tiempo.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_23:
.string "AZUL: ¡Hmph!\n"
	.string "Revertiré las tornas respecto a\l"
	.string "ROJO, ya lo veréis.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_24:
.string "GIOVANNI: Algo arrogante y\n"
	.string "prepotente, pero con potencial...\l"
	.string "PROTÓN se reunirá en breves\l"
	.string "contigo {PLAYER}, adelántate junto\l"
	.string "con el resto de RECLUTAS para\l"
	.string "iniciar el señuelo de los CUBONES\l"
	.string "y atraer a FUJI, cuento contigo.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_1.1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2:
walk_in_place_down
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_3:
walk_down
walk_down
walk_left
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_4:
walk_in_place_right
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_5:
walk_right
walk_up
walk_up
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_6:
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_7:
walk_slow_left
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_8:
walk_slow_right
walk_in_place_down
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_9:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_in_place_right
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_10:
emote_exclamation_mark
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_11:
face_left
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_12:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_izq::
lockall
playse SE_DING_DONG
delay 40
playse SE_PIN
applymovement 5, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_3
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_Llegada_Rojo

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_der::
lockall
playse SE_DING_DONG
delay 40
playse SE_PIN
applymovement 5, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_3.1
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_Llegada_Rojo

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo::
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_2 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_3 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_5
waitmovement 0x0
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_4 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_5 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1
waitmovement 0x0
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_2
waitmovement 0x0
delay 15
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_6 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_8 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_9 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_8
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_6
waitmovement 0x0
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_11 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_9
waitmovement 0x0
delay 20
playse SE_PC_ON
delay 40
playse SE_PC_LOGIN
delay 20
playse SE_SELECT
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_10
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_13 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_14 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_15 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_16 MSGBOX_AUTOCLOSE
playse SE_PC_ON
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 20, 8, 0x255, TRUE
setmetatile 21, 8, 0x256, TRUE
setmetatile 22, 8, 0x257, TRUE
setmetatile 22, 9, 0x25F, TRUE
setmetatile 21, 9, 0x25E, TRUE
setmetatile 20, 9, 0x25D, FALSE
setmetatile 20, 10, 0x265, FALSE
setmetatile 21, 10, 0x266, TRUE
setmetatile 22, 10, 0x267, TRUE
special DrawWholeMapView
delay 60
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_11
waitmovement 0x0
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_12
waitmovement 0x0
setflag FLAG_HIDE_FANCLUB_OLD_LADY
removeobject 10
playse SE_EXIT
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_17 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_FANCLUB_OLD_LADY
fadescreen 1
delay 20
playse SE_EXIT
addobject 10
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_13
waitmovement 0x0
fadescreen 0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_18 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_14
waitmovement 0x0
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_19 MSGBOX_AUTOCLOSE
applymovement 5, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_15
waitmovement 0x0
playse SE_EXIT
removeobject 5
delay 10
addobject 5
applymovement 5, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_15
waitmovement 0x0
playse SE_EXIT
removeobject 5
delay 10
addobject 5
applymovement 5, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_15
waitmovement 0x0
playse SE_EXIT
removeobject 5
delay 10
addobject 5
applymovement 5, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_15
waitmovement 0x0
playse SE_EXIT
removeobject 5
delay 10
addobject 5
applymovement 5, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_15
waitmovement 0x0
playse SE_EXIT
removeobject 5
delay 10
addobject 5
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_16
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_20 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_17
waitmovement 0x0
playse SE_EXIT
removeobject 6
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_21 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_22 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_12
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_FANCLUB_OLD_LADY
removeobject 10
delay 10
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_18
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 54
warp MAP_ROCKET_HIDEOUT_5F, 2, 2
release
end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_1:
.string "¡AVISO A TODOS LOS RECLUTAS!\n"
	.string "¡Un ENTRENADOR misterioso vestido\l"
	.string "de ROJO se ha infiltrado en\l"
	.string "nuestra BASE!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_2:
.string "GIOVANNI: Vaya, no hará falta\n"
	.string "seguir espiándolo para obtener\l"
	.string "información sobre él, se ha metido\l"
	.string "en la boca del lobo.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_3:
.string "RECLUTA: ¡Señor órdenes!\n"
	.string "¡Todos nosotros estamos cayendo\l"
	.string "como fichas de dominó ante la\l"
	.string "potencia de sus POKÉMON!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_4:
.string "PROTÓN: ¡Llamad a todos los\n"
	.string "RECLUTAS DE ALTO RANGO y\l"
	.string "EJECUTIVOS disponibles en la BASE!\l"
	.string "¡Proteged el acceso a nuestro\l"
	.string "LÍDER!\l"
	.string "¡Si fuere necesario, recurrid a\l"
	.string "nuestra sala de específemenes\l"
	.string "esp...!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_5:
.string "GIOVANNI: ¡ALTO!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_6:
.string "GIOVANNI: No vamos a hacer nada de\n"
	.string "eso PROTÓN.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_7:
.string "PROTÓN: P-pero señor...$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_8:
.string "GIOVANNI: Quiero a todos los\n"
	.string "EJECUTIVOS y SOLDADOS DE ALTO\l"
	.string "RANGO dentro de la BASE ROCKET\l"
	.string "PROFUNDA ya.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_9:
.string "RECLUTA: A sus órdenes JEFE.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_10:
.string "GIOVANNI: PROTÓN, proporcióname\n"
	.string "información detallada sobre el\l"
	.string "equipo y niveles que actualmente\l"
	.string "maneja la LÍDER DE GIMNASIO de\l"
	.string "CIUDAD AZULONA, ERIKA.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_11:
.string "PROTÓN: Enseguida señor.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_12:
.string "PROTÓN: La LÍDER ERIKA cuenta a\n"
	.string "día de hoy con un VICTREBEEL al\l"
	.string "nivel 29, un TANGELA al nivel 24,\l"
	.string "y un VILEPLUME al nivel 29.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_13:
.string "GIOVANNI: Perfecto, ¿a qué nivel\n"
	.string "estaba el KANGASKHAN perdido que\l"
	.string "{PLAYER} atrapó en el TÚNEL ROCA?$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_14:
.string "PROTÓN: Exactamente al nivel 29,\n"
	.string "señor.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_15:
.string "GIOVANNI: Bien, da el pego\n"
	.string "perfectamente con la jerarquía que\l"
	.string "ese infeliz puede esperarse de\l"
	.string "alguien como yo, traéme a ese\l"
	.string "KANGASKHAN y a otros dos POKÉMON\l"
	.string "de nivel y poder algo inferior,\l"
	.string "ONIX y RHYHORN encajarían.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_16:
.string "PROTÓN: Enseguida, jefe.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_17:
.string "GIOVANNI: Nunca enseñes todas tus\n"
	.string "cartas a tu enemigo {PLAYER}, por\l"
	.string "muy fuerte que ese ROJO sea, nunca\l"
	.string "podrá combatir contra algo que\l"
	.string "siquiera sabe que existe, para\l"
	.string "cuando lo sepa, será demasiado\l"
	.string "tarde para él, pues no habrá\l"
	.string "dispuesto de tiempo para\l"
	.string "adaptarse, nunca llegará a nuestro\l"
	.string "nivel combatiendo con la\l"
	.string "mediocridad que abunda en los\l"
	.string "pueblos y ciudades de esta región.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_18:
.string "PROTÓN: Aquí tiene señor.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_19:
.string "GIOVANNI: No quiero que cometas\n"
	.string "ninguna estupidez {PLAYER}, sé que\l"
	.string "deseas medir tus fuerzas con ese\l"
	.string "entrenador después de que te\l"
	.string "derrotara en el MT.MOON, siendo\l"
	.string "ahora más fuerte y capaz que en\l"
	.string "ese entonces, pero aún no es el\l"
	.string "momento, lo prioritario ahora es\l"
	.string "mantener a ese chico en el\l"
	.string "desconocimiento hasta al menos\l"
	.string "averiguar sus intenciones...$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_20:
.string "RECLUTA: Señor, acaba de robarle\n"
	.string "su LLAVE ASCENSOR a un recluta, ya\l"
	.string "nada le impide su acceso a usted.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_21:
.string "GIOVANNI: Espléndido.\n"
	.string "¡{PLAYER}!\l"
	.string "¡PROTÓN!\l"
	.string "¡Adentro ya!\l"
	.string "¡Se avisará a todo el personal\l"
	.string "cuando esto acabe!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_22:
.string "PROTÓN: ¡A la orden!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1:
emote_exclamation_mark
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_2:
face_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_3:
walk_up
walk_up
walk_right
walk_right
walk_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_3.1:
walk_up
walk_up
walk_right
walk_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_4:
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_5:
walk_down
walk_left
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_6:
face_right
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_7:
walk_in_place_down
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_8:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_9:
walk_right
walk_up
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_10:
face_left
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_11:
walk_left
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_12:
walk_down
walk_left
walk_left
walk_down
walk_down
walk_right
walk_in_place_right
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_13:
walk_up
walk_left
walk_left
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_14:
walk_right
walk_right
walk_down
walk_in_place_left
step_end


RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_15:
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_16:
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_17:
walk_right
walk_right
walk_right
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_18:
walk_down
walk_right
walk_right
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Izq::
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_6
addobject 2
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_2
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_Base_Profunda

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Der::
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_6
addobject 2
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_2.1
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_Base_Profunda

RocketHideout_4F_Giovanni_Mision_Base_Profunda::
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_1 MSGBOX_AUTOCLOSE
playse SE_SHOP
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_3
waitmovement 0x0
showmoneybox 0, 0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_2 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 40000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_3 MSGBOX_DEFAULT
waitfanfare
delay 40
hidemoneybox
delay 40
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_4 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
givemon SPECIES_KABUTO, 28, ITEM_MYSTIC_WATER
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_5 MSGBOX_DEFAULT
waitfanfare
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_8 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_10 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_13 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_14 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_15 MSGBOX_AUTOCLOSE
playse SE_PC_ON
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 20, 8, 0x255, TRUE
setmetatile 21, 8, 0x256, TRUE
setmetatile 22, 8, 0x257, TRUE
setmetatile 22, 9, 0x25F, TRUE
setmetatile 21, 9, 0x25E, TRUE
setmetatile 20, 9, 0x25D, FALSE
setmetatile 20, 10, 0x265, FALSE
setmetatile 21, 10, 0x266, TRUE
setmetatile 22, 10, 0x267, TRUE
special DrawWholeMapView
delay 60
playse SE_PIN
applymovement 2, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_8
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_9
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_16 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_10
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_10
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_17 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_18 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_19 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_20 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_9
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_21 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_1
waitmovement 0x0
applymovement 2, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_11
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_22 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_12
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
removeobject 2
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 52
release
end

RocketHideout_4F_PC::
compare VAR_UNUSED_0x40F7, 51
goto_if_gt RocketHideout_4F_Warp
msgbox RocketHideout_4F_PC_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout_4F_Warp::
msgbox RocketHideout_4F_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
playse SE_PC_ON
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 20, 8, 0x255, TRUE
setmetatile 21, 8, 0x256, TRUE
setmetatile 22, 8, 0x257, TRUE
setmetatile 22, 9, 0x25F, TRUE
setmetatile 21, 9, 0x25E, TRUE
setmetatile 20, 9, 0x25D, FALSE
setmetatile 20, 10, 0x265, FALSE
setmetatile 21, 10, 0x266, TRUE
setmetatile 22, 10, 0x267, TRUE
special DrawWholeMapView
delay 60
release
end

RocketHideout_4F_Warp_No::
release
end

RocketHideout_4F_PC_Texto_1:
.string "Este ordenador parece que cumple\n"
	.string "una función de gran importancia...$"

RocketHideout_4F_Warp_Text_YesNo:
.string "¿Quieres activar la entrada\n"
	.string "secreta?$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_1:
.string "GIOVANNI: Excelente trabajo en\n"
	.string "FUCSIA, ANDRA, los DRATINI y\l"
	.string "SCYTHER recolectados en la ZONA\l"
	.string "SAFARI se venderán a precio de oro\l"
	.string "como premio aquí en nuestro\l"
	.string "CASINO, aquí tienes tu recompensa.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_2:
.string "GIOVANNI: Tú también estás de\n"
	.string "vuelta {PLAYER}, has mantenido en\l"
	.string "privado tal y como te ordené la\l"
	.string "conversación entre FUJI y PROTÓN,\l"
	.string "una negociación clave para\l"
	.string "nosotros, por ello aquí tienes tu\l"
	.string "recompensa.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_3:
.string "¡Acabas de facturar 40000 POKÉS!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_4:
.string "GIOVANNI: Y otra cosa más, en\n"
	.string "nombre del TEAM ROCKET te obsequio\l"
	.string "con uno de los CUBONES robados en\l"
	.string "la TORRE POKÉMON, pero no un\l"
	.string "CUBONE cualquiera, este lleva\l"
	.string "equipado un HUESO GRUESO, objeto\l"
	.string "que multiplica por 2 su ataque\l"
	.string "físico y a su evolución MAROWAK,\l"
	.string "un regalo digno del que hizo\l"
	.string "posible su captura batiendo a\l"
	.string "FUJI.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_5:
.string "¡HAS RECIBIDO UN CUBONE AL NV:20!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_6:
.string "GIOVANNI: Cerrando este tema...\n"
	.string "Os interesará saber que\l"
	.string "investigando al KANGASKHAN\l"
	.string "encontrado en el TÚNEL ROCA, vimos\l"
	.string "que su fisiología era muy similar\l"
	.string "a la de la línea evolutiva\l"
	.string "CUBONE-MAROWAK.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7:
.string "GIOVANNI: En la ZONA SAFARI todos\n"
	.string "los KANGASKHAN son criados con\l"
	.string "todo tipo de comodidades, y las\l"
	.string "crías se desarrollan siempre hasta\l"
	.string "alcanzar esa fase...\l"
	.string "La línea evolutiva de\l"
	.string "CUBONE-MAROWAK no está clara, un\l"
	.string "CUBONE surge como tal cuando toma\l"
	.string "el cráneo de su madre fallecida,\l"
	.string "sin embargo, ¿si su madre no\l"
	.string "falleciese en qué se convertiría?\l"
	.string "Según lo que indica nuestro\l"
	.string "estudio, en un KANGASKHAN.\l"
	.string "De modo que si de repente en la\l"
	.string "ZONA SAFARI acabásemos de forma\l"
	.string "prematura con los KANGASKHAN\l"
	.string "adultos, las crías por\l"
	.string "circunstancias acabarían siendo\l"
	.string "CUBONES...$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_8:
.string "GIOVANNI: La forma más fiel de\n"
	.string "probar esto sería derrumbar la\l"
	.string "TORRE LAVANDA, obligar a los\l"
	.string "CUBONE de allí a emigrar al TÚNEL\l"
	.string "ROCA en masa, un lugar más\l"
	.string "propicio para su reproducción que\l"
	.string "esa tétrica torre, y ver que\l"
	.string "ocurre.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9:
.string "GIOVANNI: Si al tiempo comenzaran\n"
	.string "a aparecer KANGASKHAN de forma\l"
	.string "frecuente, ello constituiría una\l"
	.string "prueba definitiva de este vínculo\l"
	.string "entre especies, tal vez el\l"
	.string "fenómeno KANGASKHAN del TÚNEL\l"
	.string "ROCA haya sido un caso aislado de\l"
	.string "una cría que sin llegar a ser\l"
	.string "CUBONE emigró al túnel, logró\l"
	.string "sobrevivir y se convirtió en\l"
	.string "KANGASKHAN por su cuenta, tal vez\l"
	.string "un fenómeno que veremos cada vez\l"
	.string "más con el paso del tiempo, si\l"
	.string "toda esta hipótesis es cierta\l"
	.string "claro.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_10:
.string "GIOVANNI: Dejando esto de lado, y\n"
	.string "aprovechando que estáis los dos\l"
	.string "aquí, ambos habéis demostrado ser\l"
	.string "competentes, lleváis 6 misiones\l"
	.string "con nosotros habiendo cumplido de\l"
	.string "forma satisfactoria en 5, algunas\l"
	.string "de ellas de gran importancia, como\l"
	.string "la patente robada a BILL y la\l"
	.string "reliquia del SS.ANNE, lo que os ha\l"
	.string "procurado una buena cantidad de\l"
	.string "ingresos.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_11:
.string "GIOVANNI: Sin embargo, como habéis\n"
	.string "podido comprobar, el TEAM ROCKET\l"
	.string "tiene vetada su presencia en\l"
	.string "cualquier comercio público de la\l"
	.string "región, incluído el enorme centro\l"
	.string "comercial de esta ciudad.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_12:
.string "GIOVANNI: Pero no debéis\n"
	.string "preocuparos, sé que dos\l"
	.string "entrenadores como vosotros estarán\l"
	.string "ansiosos de poder invertir ese\l"
	.string "dinero que buenamente habéis\l"
	.string "ganado en mejorar aún más a\l"
	.string "vuestro equipo POKÉMON.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_13:
.string "GIOVANNI: En esta organización\n"
	.string "nunca dejamos nada al azar, hace\l"
	.string "ya tiempo que nos procuramos una\l"
	.string "inmensa red comercial privada,\l"
	.string "mayor que la propia oferta\l"
	.string "impuesta y fijada por esas\l"
	.string "sanguijuelas de la MESETA AÑIL.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_14:
.string "GIOVANNI: A vuestra llegada os\n"
	.string "dije a ambos que poco a poco os\l"
	.string "iría enseñando algunos de los\l"
	.string "secretos de nuestra organización,\l"
	.string "a medida que fuéseis ganando\l"
	.string "experiencia, pues bien, ha llegado\l"
	.string "el momento de mostraros uno de\l"
	.string "ellos...\l"
	.string "¡PROTÓN!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_15:
.string "PROTÓN: A la orden jefe.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_16:
.string "ANDRA: ¡Guau!\n"
	.string "¿Una base secreta oculta dentro de\l"
	.string "otra base secreta?\l"
	.string "¡Ingenioso!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_17:
.string "GIOVANNI: Así es ANDRA, lo\n"
	.string "verdaderamente importante de este\l"
	.string "lugar se encuentra a partir de\l"
	.string "esas escaleras, muchos piensan que\l"
	.string "el CASINO es la tapadera de esta\l"
	.string "base, pero se equivocan...\l"
	.string "Esta base es la tapadera de lo que\l"
	.string "ahí abajo hay realmente.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_18:
.string "GIOVANNI: Espero que seáis\n"
	.string "conscientes de lo que os acabo de\l"
	.string "mostrar, si las autoridades de\l"
	.string "esta región tuvieran la más mínima\l"
	.string "idea de la que tenemos aquí\l"
	.string "montada, no dudarían en bombardear\l"
	.string "el CASINO y toda CIUDAD AZULONA si\l"
	.string "fuere necesario.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_19:
.string "GIOVANNI: Solo nuestros\n"
	.string "científicos y soldados a partir de\l"
	.string "ALTO RANGO tienen acceso a este\l"
	.string "lugar, podréis entrar siempre y\l"
	.string "cuando queráis interactuando con\l"
	.string "el PC de PROTÓN.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_20:
.string "GIOVANNI: Eso es todo por ahora, a\n"
	.string "falta de nuevas misiones, os\l"
	.string "concedo tiempo libre para que\l"
	.string "exploréis la -BASE ROCKET\l"
	.string "PROFUNDA-, y os vayáis haciendo\l"
	.string "una idea de en qué invertimos\l"
	.string "todos nuestros recursos.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_21:
.string "ANDRA: Todo un honor que deposite\n"
	.string "su confianza en nosotros GIOVANNI.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_22:
.string "ANDRA: Nos vemos allí abajo\n"
	.string "{PLAYER}, ¡voy a disfrutar como una\l"
	.string "niña explorando cada rincón de uno\l"
	.string "de los lugares más secretos y\l"
	.string "confidenciales de esta región!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_1:
face_left
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_2:
walk_up
walk_up
walk_up
walk_right
walk_up
walk_right
walk_up
walk_up
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_2.1:
walk_up
walk_up
walk_up
walk_up
walk_right
walk_up
walk_up
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_3:
walk_in_place_down
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_4:
walk_in_place_left
walk_in_place_down
step_end


RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_5:
walk_slow_left
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6:
walk_slow_right
walk_in_place_down
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_7:
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_8:
emote_exclamation_mark
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_9:
walk_in_place_right
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_10:
face_up
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_11:
walk_down
walk_down
walk_right
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_12:
walk_down
walk_right
walk_right
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Izq::
lock
clearflag FLAG_HIDE_FANCLUB_OLD_LADY
addobject 10
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_7
addobject 11
clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
addobject 1
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_1
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_1.1 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_2
waitmovement 0x0
goto RocketHideout_4F_Mision_Islas_Sete_Lance



RocketHideout_4F_Mision_Islas_Sete_Lance_Der::
lock
clearflag FLAG_HIDE_FANCLUB_OLD_LADY
addobject 10
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_7
addobject 11
clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
addobject 1
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_1
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_1.1 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_2.1
waitmovement 0x0
goto RocketHideout_4F_Mision_Islas_Sete_Lance



RocketHideout_4F_Mision_Islas_Sete_Lance::
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_6 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_7 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_8 MSGBOX_AUTOCLOSE
applymovement 11, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_7
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 11, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_8
waitmovement 0x0
delay 15
applymovement 11, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_9
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_10
waitmovement 0x0
delay 20
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_6 MSGBOX_AUTOCLOSE
delay 20
applymovement 11, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_11
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_10
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_11 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_13
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_13 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3
waitmovement 0x0
playfanfare MUS_OBTAIN_SYMBOL
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_15 MSGBOX_DEFAULT
waitfanfare
showmoneybox 0, 0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_16 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 1000000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_17 MSGBOX_DEFAULT
waitfanfare
delay 40
hidemoneybox
delay 40
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_18 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_19 MSGBOX_DEFAULT
givemon SPECIES_ARTICUNO, 15, ITEM_LUM_BERRY
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_20 MSGBOX_DEFAULT
givemon SPECIES_ZAPDOS, 15, ITEM_LUM_BERRY
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_21 MSGBOX_DEFAULT
givemon SPECIES_MOLTRES, 15, ITEM_LUM_BERRY
waitfanfare
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_22 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_13 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_23 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_24 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_14
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_25 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_26 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_27 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_RAINBOW_PASS
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_28 MSGBOX_DEFAULT
waitfanfare
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_29 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_30 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_31 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_32 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_7
removeobject 11
setvar VAR_UNUSED_0x40F7, 95
release
end

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_1:
.string "????: Ya no tienes la sartén por\n"
	.string "el mango LANCE, sugiero que\l"
	.string "te calmes.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_1.1:
	.string "????: Pero... ahora vienes a mí a decir...\n"
	.string "que lleve todo esto de la forma más\l"
	.string "justa posible y escuche tus\l"
	.string "exigencias.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_2:
.string "GIOVANNI: Si quieres conservar\n"
	.string "parte de tus privilegios y tu\l"
	.string "poder deberás cumplir las\l"
	.string "siguientes condiciones...$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_3:
.string "Provocar la renuncia de ROJO al\n"
	.string "título de CAMPEÓN, y borrarlo del\l"
	.string "mapa, quiero fuera de juego a ese\l"
	.string "loco experimento de OAK, llevadlo\l"
	.string "a algún lugar apartado y decid a\l"
	.string "los medios que está realizando una\l"
	.string "especie de entrenamiento secreto.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_4:
.string "Con ello mantendréis a AZUL como\n"
	.string "vigente CAMPEÓN, él nos informará\l"
	.string "de cualquier paso en falso que\l"
	.string "tratéis de dar en contra nuestra\l"
	.string "LANCE, por tu bien espero que no\l"
	.string "cometas ninguna estupidez.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_5:
.string "Confirmaréis la disolución\n"
	.string "definitiva del TEAM ROCKET, lo que\l"
	.string "implica que todo ROCKET real que\l"
	.string "sea visto será tomado como un\l"
	.string "ciudadano más, con su respectivo\l"
	.string "permiso para entrar en las tiendas\l"
	.string "de toda KANTO.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_6:
.string "LANCE: ...$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_7:
.string "GIOVANNI: Y por último, reduciréis\n"
	.string "al 80% toda la presión fiscal\l"
	.string "tanto de SILPH como del resto de\l"
	.string "pequeños negocios de KANTO, se\l"
	.string "acabó el chuparle la sangre a los\l"
	.string "ciudadanos y el mantenerlos en\l"
	.string "condiciones de esclavitud\l"
	.string "camufladas, tal vez con ello\l"
	.string "empiezen a quererte un poco.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_8:
.string "Eso es todo, y recuerda, un solo\n"
	.string "mal gesto, un leve indicio de que\l"
	.string "intentas algo raro, y toda KANTO\l"
	.string "sabrá lo ocurrido en el HALL DE LA\l"
	.string "FAMA, ahora fuera de mi vista.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_9:
.string "PROTÓN: Señor, ¿cree que hacemos\n"
	.string "lo correcto negociando con gente\l"
	.string "así?\l"
	.string "¿No deberíamos...?$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_10:
.string "GIOVANNI: Lo sé PROTÓN, pero KANTO\n"
	.string "no está preparada para asimilar\l"
	.string "todo lo ocurrido, todo cuanto\l"
	.string "necesita es alcanzar de nuevo la\l"
	.string "estabilidad, no una nueva\l"
	.string "revolución por todo lo alto que\l"
	.string "meta aún más caos a la región, por\l"
	.string "el momento LANCE está atado, y con\l"
	.string "esas condiciones impuestas todo\l"
	.string "tenderá a mejorar...$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_11:
.string "GIOVANNI: {PLAYER}, demostraste ser\n"
	.string "un ENTRENADOR excepcional en el\l"
	.string "HALL DE LA FAMA, único, de esos\l"
	.string "que aparecen una vez cada 50 años,\l"
	.string "solo alguien así pudo haber\l"
	.string "derrotado a un equipo con un poder\l"
	.string "tan incontenible como el que tenía\l"
	.string "LANCE.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_12:
.string "Afortunadamente hemos devuelto a\n"
	.string "RAIKOU, ENTEI y SUICUNE a sus\l"
	.string "hábitats naturales de JOHTO,\l"
	.string "esperemos que ningún maníaco como\l"
	.string "LANCE tenga la intención y el\l"
	.string "poder para volver a atraparlos...$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_13:
.string "GIOVANNI: ...$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_14:
.string "Hemos cumplido con el propósito\n"
	.string "por el que el TEAM ROCKET fue\l"
	.string "creado {PLAYER}: salvar KANTO de\l"
	.string "las garras de LANCE, y tú has sido\l"
	.string "más que fundamental para ello,\l"
	.string "junto con ATLAS y ANDRA, has\l"
	.string "alcanzado el rango más alto que\l"
	.string "puedo ofrecerle a un miembro del\l"
	.string "TEAM ROCKET: ADMINISTRADOR JEFE.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_15:
.string "¡¡{PLAYER} HA SIDO ASCENDIDO HA\n"
	.string "ADMINISTRADOR JEFE!!$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_16:
.string "GIOVANNI: El TEAM ROCKET es tu\n"
	.string "casa {PLAYER}, te has ganado tu\l"
	.string "puesto con todas las de la ley,\l"
	.string "esta es tu recompensa por tu\l"
	.string "hazaña en la LIGA POKÉMON,\l"
	.string "considéralo como un pago\l"
	.string "simbólico, lo que hiciste en el\l"
	.string "HALL DE LA FAMA no se puede\l"
	.string "comprar con dinero.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_17:
.string "¡¡ACABAS DE FACTURAR 1 MILLÓN DE\n"
	.string "POKÉS!!$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_18:
.string "Además de ello, como ya sabes\n"
	.string "conseguimos replicar de forma\l"
	.string "estable el ADN de ARTICUNO, ZAPDOS\l"
	.string "y MOLTRES para crear clones\l"
	.string "idénticos de forma exitosa, qué\l"
	.string "menos que ofrecerle los primeros\l"
	.string "ejemplares a quién hizo posible\l"
	.string "esto.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_19:
.string "¡¡OBTUVISTE UN ARTICUNO AL NV.15!!$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_20:
.string "¡¡OBTUVISTE UN ZAPDOS AL NV.15!!$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_21:
.string "¡¡OBTUVISTE UN MOLTRES AL NV.15!!$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_22:
.string "GIOVANNI: Incorporarlos o no en tu\n"
	.string "equipo es ya decisión personal\l"
	.string "tuya, has demostrado sobradamente\l"
	.string "que tienes la categoría para\l"
	.string "manejar POKÉMON de este calibre.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_23:
.string "Con esto damos inicio a la segunda\n"
	.string "razón por la que el TEAM ROCKET\l"
	.string "fue fundado: conocer el mundo\l"
	.string "POKÉMON y sus misterios, explorar\l"
	.string "los límites de su potencial y\l"
	.string "llegar hasta donde nadie más ha\l"
	.string "llegado.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_24:
.string "Por supuesto, aún tenemos a MEWTWO\n"
	.string "como objetivo en el horizonte,\l"
	.string "sigue siendo un peligro que hay\l"
	.string "que controlar, pero no quiero\l"
	.string "involucrarte por el momento en una\l"
	.string "misión así.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_25:
.string "Después de lo que has hecho\n"
	.string "mereces tomarte unas buenas\l"
	.string "vacaciones, darte el tiempo de\l"
	.string "celebrar y asimilar todo lo que\l"
	.string "has conseguido antes de embarcarte\l"
	.string "otra vez en nuevos retos aún más\l"
	.string "exigentes.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_26:
.string "Por ello quiero que viajes a las\n"
	.string "ISLAS SETE, tu lugar de origen, de\l"
	.string "nuevo, y explores tranquilamente\l"
	.string "las islas, he oído que hay muy\l"
	.string "buenos ENTRENADORES por allí,\l"
	.string "además de una flora y fauna muy\l"
	.string "similar a JOHTO.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_27:
.string "Con esto podrás viajar de forma\n"
	.string "legal tomando el SURCAMAR de\l"
	.string "CARMÍN.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_28:
.string "{PLAYER} rebibió el IRIS-TICKET.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_29:
.string "Las ISLAS SETE son famosas\n"
	.string "por su ruinas de ISLA EXTA y\l"
	.string "SÉPTIMA, datadas en 1500 años de\l"
	.string "antiguedad, tienen muchas\l"
	.string "similitudes con las RUINAS ALFA de\l"
	.string "JOHTO, y se cree de hecho que\l"
	.string "guardan algún tipo de vínculo.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_30:
.string "¿Recuerdas el frasco que robasteis\n"
	.string "al CAPITÁN del SS.ANNE ANDRA y tú\l"
	.string "justo antes de entrar a trabajar\l"
	.string "directamente bajo mis órdenes?$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_31:
.string "Creemos que su contenido procede\n"
	.string "de esas ruinas, no te diré que\l"
	.string "vayas allí expresamente para\l"
	.string "investigar como una misión más,\l"
	.string "pero te informo de ello, si\l"
	.string "sientes curiosidad, puedes pasarte\l"
	.string "por esas ruinas e intentar\l"
	.string "averiguar algo.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_32:
.string "Eso es todo por el momento\n"
	.string "{PLAYER}, te avisaremos cuando\l"
	.string "tengamos noticias sobre MEWTWO o\l"
	.string "algún otro POKÉMON singular, las\l"
	.string "ISLAS SETE y todos sus misterios\l"
	.string "te esperan, disfruta de tus\l"
	.string "vacaciones.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_1:
emote_exclamation_mark
walk_in_place_up
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_2:
walk_up
walk_up
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_2.1:
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
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3:
walk_in_place_down
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_4:
walk_left
walk_in_place_left
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_5:
walk_right
walk_in_place_right
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_6:
walk_left
walk_in_place_down
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_7:
face_down
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_8:
emote_exclamation_mark
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_9:
walk_down
walk_down
walk_left
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_10:
face_right
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_11:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12:
face_up
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_13:
walk_right
walk_up
walk_right
walk_up
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_14:
walk_right
walk_in_place_down
step_end

PokemonTower5F_Escena_4_Blaine::
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonTower5F_Escena_4_Blaine_Move_1
waitmovement 0x0
special RemoveCameraObject
applymovement 6, RocketHideout_4F_Giovanni_Mision_1_move_9
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonTower5F_Escena_4_Blaine_Texto_2 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_4F_Giovanni_Mision_1_move_10
waitmovement 0x0
delay 15
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_2
addobject 12
applymovement 12, RocketHideout_4F_Giovanni_Mision_1_move_11
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_3 MSGBOX_AUTOCLOSE
playse MUS_RG_POKE_MANSION
msgbox PokemonTower5F_Escena_4_Blaine_Texto_4 MSGBOX_AUTOCLOSE
delay 30
msgbox PokemonTower5F_Escena_4_Blaine_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_2
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_3
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_4
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_5
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_6
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_10 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower5F_Escena_4_Blaine_Move_2
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_11 MSGBOX_AUTOCLOSE
msgbox PokemonTower5F_Escena_4_Blaine_Texto_11_1 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower5F_Escena_4_Blaine_Move_5
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_12 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonTower5F_Escena_4_Blaine_Texto_13 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower5F_Escena_4_Blaine_Move_7
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_3
waitmovement 0x0
delay 30
msgbox PokemonTower5F_Escena_4_Blaine_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_4
applymovement 12, PokemonTower5F_Escena_4_Blaine_Move_5
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_16 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower5F_Escena_4_Blaine_Move_8
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_17 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_9
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_18 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonTower5F_Escena_4_Blaine_Texto_19 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonTower5F_Escena_4_Blaine_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_10
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_21 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower5F_Escena_4_Blaine_Move_11
waitmovement 0x0
delay 15
msgbox PokemonTower5F_Escena_4_Blaine_Texto_22 MSGBOX_AUTOCLOSE
fadedefaultbgm
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonTower5F_Escena_4_Blaine_Move_12
applymovement 12, PokemonTower5F_Escena_4_Blaine_Move_12
waitmovement 0x0
special RemoveCameraObject
delay 30
msgbox PokemonTower5F_Escena_4_Blaine_Texto_23 MSGBOX_AUTOCLOSE
delay 40
msgbox PokemonTower5F_Escena_4_Blaine_Texto_24 MSGBOX_AUTOCLOSE
delay 20
applymovement 12, PokemonTower5F_Escena_4_Blaine_Move_13
waitmovement 0x0
playse SE_SLIDING_DOOR
setflag FLAG_HIDE_UNION_ROOM_PLAYER_2
removeobject 12
delay 60
setvar VAR_UNUSED_0x40F7, 47
warpsilent MAP_POKEMON_TOWER_5F, 18, 9
release
end

PokemonTower5F_Escena_4_Blaine_Texto_1:
.string "RECLUTA: El LÍDER de ISLA CANELA ha\n"
	.string "llegado, señor.$"

PokemonTower5F_Escena_4_Blaine_Texto_2:
.string "GIOVANNI: Hacedle pasar.$"

PokemonTower5F_Escena_4_Blaine_Texto_3:
.string "BLAINE: ¿Querías verme, GIOVANNI?$"

PokemonTower5F_Escena_4_Blaine_Texto_4:
.string "GIOVANNI: Así es, iré al grano, BLAINE.\n"
	.string "Me temo que tendré que retirarte los\l"
	.string "fondos para seguir produciendo\l"
	.string "PORYGON en masa.$"

PokemonTower5F_Escena_4_Blaine_Texto_5:
.string "BLAINE: P-Pero... ¿A qué se deb...?$"

PokemonTower5F_Escena_4_Blaine_Texto_6:
.string "GIOVANNI: Has hecho un gran trabajo,\n"
	.string "ese no es el problema. PORYGON es un\l"
	.string "artículo de lujo que muy poca gente se\l"
	.string "puede permitir. Sacamos mucho dinero\l"
	.string "por cada ejemplar, es cierto, pero\l"
	.string "tenemos docenas de ellos en la\l"
	.string "recámara.$"

PokemonTower5F_Escena_4_Blaine_Texto_7:
.string "Bajar el precio es inviable, ya que su\n"
	.string "costo es grande, no queda otra que\l"
	.string "adaptar la producción al ritmo de\l"
	.string "demanda. KANTO apenas tiene para sí\l"
	.string "misma, era de esperar.$"

PokemonTower5F_Escena_4_Blaine_Texto_8:
.string "No obstante... me consta que SILPH ya ha\n"
	.string "creado una versión optimizada de\l"
	.string "PORYGON. La producción del nuevo\l"
	.string "PORYGON2 cuesta 3 veces la del\l"
	.string "PORYGON normal, lo cual lo hace inviable\l"
	.string "como producto de masas.$"

PokemonTower5F_Escena_4_Blaine_Texto_9:
.string "Su valor competitivo es otra historia,\n"
	.string "aún está por ver. Según parece,\l"
	.string "PORYGON2 no es el fin, su potencial es\l"
	.string "mayor.$"

PokemonTower5F_Escena_4_Blaine_Texto_10:
.string "Es por ello que te ofrezco, en\n"
	.string "compensación a la retirada de fondos,\l"
	.string "trabajar aquí con nuestro equipo de\l"
	.string "científicos. No solo en la búsqueda de\l"
	.string "una mejor versión de PORYGON, también\l"
	.string "de NIDOK...$"

PokemonTower5F_Escena_4_Blaine_Texto_11:
.string "BLAINE: Sabes que nada superará al\n"
	.string "proyecto original, GIOVANNI. $"
	
	
PokemonTower5F_Escena_4_Blaine_Texto_11_1:
.string "GIOVANNI: Basta con que supere a un\n"
	.string "LEGENDARIO normal y corriente.$"
	

PokemonTower5F_Escena_4_Blaine_Texto_12:
.string "BLAINE: Jah... ¡A 3 más bien!$"

PokemonTower5F_Escena_4_Blaine_Texto_13:
.string "GIOVANNI: ¿Aceptas entonces mi\n"
	.string "oferta? Un CIENTÍFICO como tú merece\l"
	.string "una segunda oportunidad. A diferencia\l"
	.string "de FUJI, sé que tú aún conservas viva\l"
	.string "esa llama que te impulsa a querer más.$"

PokemonTower5F_Escena_4_Blaine_Texto_14:
.string "BLAINE: Lo siento, GIOVANNI. Pero lo de\n"
	.string "MEWTWO también fue demasiado para mí,\l"
	.string "¿de qué sirve crear tanto poder si\l"
	.string "después no puede controlarse?$"

PokemonTower5F_Escena_4_Blaine_Texto_15:
.string "GIOVANNI: Por eso seguimos aquí,\n"
	.string "BLAINE, para aprender de los errores\l"
	.string "del pasado y volver más fuertes. Eso no\l"
	.string "volverá a ocurrir, no con la tecnología\l"
	.string "de ahora.$"

PokemonTower5F_Escena_4_Blaine_Texto_16:
.string "¿No lo ves, BLAINE? Los dioses del\n"
	.string "mundo POKÉMON nos perdonaron por algo,\l"
	.string "pudimos caer en las manos de LANCE\l"
	.string "durante la gran purga y quedar presos\l"
	.string "de por vida, o algo peor. Pero por -a- o\l"
	.string "por -b- tú has logrado conservar tu\l"
	.string "puesto en CANELA y yo permanecer\l"
	.string "oculto.$"

PokemonTower5F_Escena_4_Blaine_Texto_17:
.string "BLAINE: ¡¿Qué nos han perdonado?!\n"
	.string "¡Estamos a su merced! ¡Pueden arrasar\l"
	.string "hoy con esta base si la descubriesen o\l"
	.string "quemar mañana mi laboratorio si\l"
	.string "hicieran una inspección! ¡Somos\l"
	.string "prófugos!$"

PokemonTower5F_Escena_4_Blaine_Texto_18:
.string "GIOVANNI: Hacer menos que todo lo que\n"
	.string "esté en nuestra mano por recuperar la\l"
	.string "región sería una pobre manera de\l"
	.string "aprovechar este regalo, BLAINE.$"

PokemonTower5F_Escena_4_Blaine_Texto_19:
.string "BLAINE: ...$"

PokemonTower5F_Escena_4_Blaine_Texto_20:
.string "Necesito pensarlo, GIOVANNI.$"

PokemonTower5F_Escena_4_Blaine_Texto_21:
.string "GIOVANNI: Aquí estaré, BLAINE. Aún\n"
	.string "estás a tiempo de hacer el proyecto de\l"
	.string "tu vida.$"

PokemonTower5F_Escena_4_Blaine_Texto_22:
.string "BLAINE: Eso siempre será una\n"
	.string "posibilidad, hasta el último de mis\l"
	.string "días.$"

PokemonTower5F_Escena_4_Blaine_Texto_23:
.string "... ...$"

PokemonTower5F_Escena_4_Blaine_Texto_24:
.string "Muy oportuno que no sepas el motivo por\n"
	.string "el que logré conservar mi puesto en\l"
	.string "CANELA, ex-CAMPEÓN.$"

PokemonTower5F_Escena_4_Blaine_Move_1:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_down
walk_down
step_end

PokemonTower5F_Escena_4_Blaine_Move_1.1:
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_down
walk_down
step_end

PokemonTower5F_Escena_4_Blaine_Move_2:
face_left
step_end

PokemonTower5F_Escena_4_Blaine_Move_3:
walk_left
step_end

PokemonTower5F_Escena_4_Blaine_Move_4:
walk_in_place_down
step_end

PokemonTower5F_Escena_4_Blaine_Move_5:
face_up
step_end

PokemonTower5F_Escena_4_Blaine_Move_6:
walk_right
walk_in_place_down
step_end

PokemonTower5F_Escena_4_Blaine_Move_7:
face_right
step_end

PokemonTower5F_Escena_4_Blaine_Move_8:
walk_fast_left
walk_fast_up
step_end

PokemonTower5F_Escena_4_Blaine_Move_9:
walk_down
step_end

PokemonTower5F_Escena_4_Blaine_Move_10:
walk_up
walk_right
walk_in_place_down
step_end

PokemonTower5F_Escena_4_Blaine_Move_11:
face_down
step_end

PokemonTower5F_Escena_4_Blaine_Move_12:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
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
step_end

PokemonTower5F_Escena_4_Blaine_Move_13:
walk_right
face_up
step_end

RocketHideout_4F_Escena_Castigo_Reclutas::
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
clearflag FLAG_HIDE_FANCLUB_OLD_LADY
clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
addobject 10
addobject 13
addobject 14
addobject 15
addobject 1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonTower5F_Escena_4_Blaine_Move_1.1
waitmovement 0x0
special RemoveCameraObject
delay 10
applymovement 10, RocketHideout_4F_Escena_Castigo_Reclutas_Move_1
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_2 MSGBOX_AUTOCLOSE
delay 30
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_2.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_3 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_4 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_5 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_6 MSGBOX_AUTOCLOSE
delay 20
playmoncry SPECIES_NIDOKING, CRY_MODE_ENCOUNTER
delay 60
playse SE_PIN
applymovement 13, RocketHideout_4F_Mision_Andra_Fucsia_move_3
applymovement 14, RocketHideout_4F_Mision_Andra_Fucsia_move_3
applymovement 15, RocketHideout_4F_Mision_Andra_Fucsia_move_3
waitmovement 0x0
delay 20
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_8 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_9 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_11 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_4F_Escena_Castigo_Reclutas_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_13 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_4F_Escena_Castigo_Reclutas_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_14 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_15 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_17 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_19 MSGBOX_AUTOCLOSE
applymovement 13, RocketHideout_4F_Giovanni_Mision_1_move_1
applymovement 14, RocketHideout_4F_Giovanni_Mision_1_move_1
applymovement 15, RocketHideout_4F_Giovanni_Mision_1_move_1
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_20 MSGBOX_AUTOCLOSE
applymovement 13, RocketHideout_4F_Escena_Castigo_Reclutas_Move_7
applymovement 14, RocketHideout_4F_Escena_Castigo_Reclutas_Move_7
applymovement 15, RocketHideout_4F_Escena_Castigo_Reclutas_Move_7
waitmovement 0x0
delay 20
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_2
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
removeobject 13
removeobject 14
removeobject 15
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_21 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_22 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_23 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_24 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_25 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_26 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
setflag FLAG_HIDE_FANCLUB_OLD_LADY
setvar VAR_UNUSED_0x40F7, 59
warpsilent MAP_VIRIDIAN_CITY, 21, 2
release
end

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_1:
.string "PROTÓN: Los RECLUTAS responsables de\n"
	.string "la misión en PUEBLO LAVANDA se\l"
	.string "presentan, señor.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_2:
.string "GIOVANNI: ¿Y bien?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_2.2:
.string "Y… y bien qué, ¿s-señor?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_3:
.string "GIOVANNI: Creí haber dejado claras\n"
	.string "vuestras funciones en TORRE POKÉMON.\l"
	.string "No os limitásteis a recoger cráneos de\l"
	.string "CUBONE y armar ruido, fuisteis más allá.\l"
	.string "¿Por qué?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_4:
.string "RECLUTAS: Fue un accidente, señor. Solo\n"
	.string "queríamos pasar el rato, la madre de\l"
	.string "CUBONE se lo tomó muy enserio y… se nos\l"
	.string "fue de las manos.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_5:
.string "GIOVANNI: ¿Os dáis cuenta de la pobre\n"
	.string "imagen que habéis dado a FUJI, con\l"
	.string "quien estábamos en plena negociación?\l"
	.string "No solo a FUJI, a toda KANTO. Como si\l"
	.string "las campañas de LANCE no fueran\l"
	.string "suficiente, toda la región sabe ya lo\l"
	.string "que el TEAM ROCKET hizo en PUEBLO\l"
	.string "LAVANDA.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_6:
.string "Vuestra incompetencia y falta de ética\n"
	.string "merecen un castigo ejemplar.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_7:
.string "Creedme, si os castigara de forma\n"
	.string "proporcional a vuestro fracaso, mi\l"
	.string "NIDOKING agotaría antes sus PP en\l"
	.string "todo su repertorio ofensivo.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_8:
.string "RECLUTAS: … …$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_9:
.string "GIOVANNI: Aunque…$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_10:
.string "No somos asesinos, a pesar de que\n"
	.string "vuestras últimas acciones hagan\l"
	.string "parecer lo contrario. Os daré la\l"
	.string "oportunidad de redimiros.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_11:
.string "En compensación al daño causado,\n"
	.string "donaréis el 70% de vuestro a la\l"
	.string "beneficencia de PUEBLO LAVANDA, el\l"
	.string "TEAM ROCKET por otro lado se encargará\l"
	.string "de cubrir vuestras necesidades\l"
	.string "básicas… mientras cumpláis vuestra\l"
	.string "parte del trato.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_12:
.string "RECLUTA: S-señor…gracias por esta\n"
	.string "segunda oportunidad, le prometo que no\l"
	.string "se arrepentirá de no haber usado a su\l"
	.string "NIDOK…$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_13:
.string "GIOVANNI: Aún no he acabado.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_14:
.string "RECLUTA: …$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_15:
.string "GIOVANNI: Va a construirse un enorme\n"
	.string "CEMENTERIO subterráneo, al sur de\l"
	.string "PUEBLO LAVANDA. FUJI necesitará\l"
	.string "ayuda, y vosotros estaréis allí para\l"
	.string "todo lo que requiera. Además de\l"
	.string "vuestra labor normal como ROCKET, el\l"
	.string "tiempo libré que os quede irá para esa\l"
	.string "causa. ¿Algún inconveniente?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_16:
.string "RECLUTAS: ¡Ninguno, señor!$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_17:
.string "GIOVANNI: Aquí tenéis vuestra\n"
	.string "oportunidad: 1 año de privación\l"
	.string "económica y lúdica, a cambio de limpiar\l"
	.string "vuestra mancha. Os aviso de antemano,\l"
	.string "al mínimo fallo, quedaréis desterrados\l"
	.string "definitivamente…$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_18:
.string "Pero si os mantenéis estoicos, al\n"
	.string "concluir el año no solo os ganaréis el\l"
	.string "perdón, también seréis ascendidos a\l"
	.string "ALTO RANGO, puesto que habréis\l"
	.string "demostrado fortaleza, constancia y,\l"
	.string "especialmente, capacidad de aprender\l"
	.string "de vuestros errores.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_19:
.string "GIOVANNI: Ahora, fuera de mi vista.\n"
	.string "¡Comienza vuestro día 1!$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_20:
.string "RECLUTAS: ¡A la orden, señor!$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_21:
.string "GIOVANNI: Malditos inconscientes,\n"
	.string "ahora toda KANTO confundirá maldad\l"
	.string "con ignorancia…$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_22:
.string "PROTÓN: Por eso la BASE PROFUNDA está\n"
	.string "solo reservada a unos pocos.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_23:
.string "PROTON: Pero…$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_24:
.string "GIOVANNI: ¿Qué ocurre, PROTON?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_25:
.string "PROTÓN: Hay algo que no he entendido.\n"
	.string "¿Un enorme CEMENTERIO subterráneo en\l"
	.string "PUEBLO LAVANDA? Creí que TORRE\l"
	.string "POKÉMON ya era más que suficiente para\l"
	.string "albergar todas las tumbas.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_26:
.string "GIOVANNI: Aún es pronto para hablar de\n"
	.string "eso, PROTÓN, muy pronto. Ya llegará su\l"
	.string "hora.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Move_1:
walk_in_place_left
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_2:
face_left
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_3:
face_down
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_4:
walk_in_place_down
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_5:
walk_fast_up
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_6:
walk_fast_down
walk_in_place_up
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_7:
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

