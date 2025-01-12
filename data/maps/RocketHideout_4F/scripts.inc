RocketHideout_4F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_4F_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_4F_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_4F_OnFrame
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RocketHideout_4F_Disguise_Player_OnResume
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_4F_OnFrame
    .byte 0

RocketHideout_4F_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 46, PokemonTower5F_Escena_4_Blaine
map_script_2 VAR_UNUSED_0x40F7, 58, RocketHideout_4F_Escena_Castigo_Reclutas
map_script_2 VAR_ROUTE105_STATE, 5, RocketHideout_4F_Escena_Motoristas
map_script_2 VAR_UNUSED_0x40F7, 805, RocketHideout_4F_Disguise_Player
	.2byte 0


RocketHideout_4F_Disguise_Player_OnResume:
map_script_2 VAR_UNUSED_0x40F7, 804, RocketHideout_4F_Disguise_Player_2
	.2byte 0

RocketHideout_4F_Disguise_Player_2::
setobjectxy 1, 18, 8
applymovement 1, RocketHideout_4F_Disguise_Player_2_move_1
playse SE_M_STAT_INCREASE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.10
setvar VAR_UNUSED_0x40F7, 805
end

RocketHideout_4F_Disguise_Player_2_move_1:
face_right
step_end

RocketHideout8F_Mision_Johto_move_12.10:
face_left
delay_4
face_up
delay_4
face_right
delay_4
face_down
delay_4
face_left
delay_4
face_up
delay_4
face_right
delay_4
face_down
delay_8
face_left
delay_8
face_up
delay_8
face_right
delay_8
face_down
delay_8
face_left
delay_8
face_up
delay_8
face_right
delay_8
face_down
delay_8
face_left
delay_8
delay_8
face_up
delay_8
delay_8
face_right
delay_8
delay_8
face_down
delay_8
delay_8
face_left
delay_8
step_end
	
	



RocketHideout4F_1::
end

RocketHideout4F_Dialogos_Giovanni::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 216
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_FinDLC
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
compare VAR_UNUSED_0x40F7, 94
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionIslas
compare VAR_UNUSED_0x40F7, 92
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLiga
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

RocketHideout4F_Dialogos_Giovanni_Dialogo_FinDLC::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_FinDLC_Texto_1.1 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Final_DLC_Texto_5 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Final_DLC_Texto_6 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_FinDLC_Texto_1.1:
	.string "Ve a la BASE de HOENN, {PLAYER}.$"


RocketHideout4F_Dialogos_Giovanni_Dialogo_FinDLC_Texto_1:
.string "Estoy sorprendido de que hayas logrado\n"
	.string "llegar tan lejos. Grandes cambios se\l"
	.string "avecinan, el futuro de KANTO es\l"
	.string "incierto, y lo que puedas encontrarte\l"
	.string "en HOENN una incógnita. Espero que\l"
	.string "hayas disfrutado de este DLC, que\l"
	.string "marca la transición hacia el final del\l"
	.string "hack. Como siempre, puedes encontrarme\l"
	.string "tanto en el canal de youtube\l"
	.string "DragonsdenTV, como en el foro Whack a\l"
	.string "hack. HOENN espera, toda historia tiene\l"
	.string "su fin, pero esta{PAUSE 25}…{PAUSE 25} aún no, sigues\l"
	.string "participando en su devenir, de modo\l"
	.string "que{PAUSE 25}…{PAUSE 25}mantente mejorando hasta la\l"
	.string "próxima versión.$"


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
	.string "esta{PAUSE 25}…{PAUSE 25} aún no.$"

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
	.string "que hay algo{PAUSE 25}…{PAUSE 25}espiritual en ese\l"
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
.string "Relájate y disfruta del ARCHI7, {PLAYER}.\n"
	.string "Hay mucho por hacer allí, si sabes\l"
	.string "adonde ir, tal vez si visitas a\l"
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
	.string "tecnología.\p"
	.string "Te diré algo, chico: cuando ya has\n"
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
.string "dirigirte hacia nuestro LÍDER\l"
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
.string "dirigirte hacia nuestro LÍDER\l"
.string "recluta, si nos caracterizamos por\l"
.string "algo es por cumplir de forma\l"
.string "impoluta con el protocolo.$"



RocketHideout4F_7::
end



RocketHideout4F_10::
end

RocketHideout_4F_Mision_Andra_Fucsia::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Andra_Fucsia_move_2
waitmovement 0x0
clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
clearflag FLAG_HIDE_FANCLUB_OLD_LADY
addobject 1
addobject 10
playbgm 559, FALSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_1
waitmovement 0x0
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_3
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_1 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_2 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_5.3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_3.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_4 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_5
waitmovement 0x0
fadedefaultbgm
delay 20
playse SE_SLIDING_DOOR
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
opendoor 20, 23
waitdooranim
addobject 9
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_5.2
waitmovement 0x0
removeobject 9
closedoor 20, 23
waitdooranim
setvar VAR_UNUSED_0x40F7, 38
release
end

RocketHideout_4F_Mision_Andra_Fucsia_2::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Andra_Fucsia_move_2
waitmovement 0x0
clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
clearflag FLAG_HIDE_FANCLUB_OLD_LADY
addobject 1
addobject 10
playbgm 559, FALSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_1.1
waitmovement 0x0
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_3
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_1 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_2 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_5.3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_3.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_4 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_5.1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Andra_Fucsia_move_6
waitmovement 0x0
fadedefaultbgm
delay 20
playse SE_SLIDING_DOOR
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
opendoor 20, 23
waitdooranim
addobject 9
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_5.2
waitmovement 0x0
removeobject 9
closedoor 20, 23
waitdooranim
setvar VAR_UNUSED_0x40F7, 38
release
end

RocketHideout_4F_Mision_Andra_Fucsia_move_5.3:
delay_8
face_up
delay_16
delay_8
face_right
delay_8
step_end

RocketHideout_4F_Mision_Andra_Fucsia_move_5.2:
walk_up
step_end

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
	.string "impecable.$"

RocketHideout_4F_Mision_Andra_Fucsia_Texto_3.1:
	.string "A propósito, GIOVANNI me ha\n"
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
fadeoutbgm 0
playse 0
delay 20
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_1 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_1_move_2
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_1_Parte2

RocketHideout_4F_Giovanni_Mision_1_2::
lockall
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_1_move_1
waitmovement 0x0
fadeoutbgm 0
playse 0
delay 20
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_1 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_1_move_2.1
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_1_Parte2


RocketHideout_4F_Giovanni_Mision_1_Parte2::
applymovement 10, RocketHideout_4F_Giovanni_Mision_1_move_3
waitmovement 0x0
fadeoutbgm 0
playse 582
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_2 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_3.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_4
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_5
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_5 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_5.1
waitmovement 0x0
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_6
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_5.2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_7.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8.1
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8.2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_11.1 MSGBOX_AUTOCLOSE
delay 10
fadescreen 1
delay 60
fadescreen 0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_12 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_12.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_6
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_13.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8.2
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_13.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_14 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_4F_Giovanni_Mision_1_move_9
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8.3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_16 MSGBOX_AUTOCLOSE
delay 20
applymovement 6, RocketHideout_4F_Giovanni_Mision_1_move_10
waitmovement 0x0
delay 30
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
addobject 4
applymovement 4, RocketHideout_4F_Giovanni_Mision_1_move_11
waitmovement 0x0
playse MUS_RG_SILPH
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_17 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, RocketHideout_4F_Giovanni_Mision_1_move_11.2
waitmovement 0x0
delay 10
applymovement 4, RocketHideout_4F_Giovanni_Mision_1_move_11.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_18 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_12
applymovement 10, RocketHideout_4F_Giovanni_Mision_1_move_12
waitmovement 0x0
waitse
delay 30
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_19 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, RocketHideout_4F_Giovanni_Mision_1_move_11.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_20 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_20.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_20.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, RocketHideout_4F_Giovanni_Mision_1_move_11.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_21 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_21.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_5.2
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_22.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8.2
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_22.2 MSGBOX_AUTOCLOSE
delay 10
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
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_5.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_30.1 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_1_move_11.1
waitmovement 0x0
delay 15
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_31 MSGBOX_AUTOCLOSE
fadedefaultbgm
setvar VAR_UNUSED_0x40F7, 39
release
end

RocketHideout_4F_Giovanni_Mision_1_move_11.2:
delay_8
face_right
delay_16
delay_8
face_up
delay_8
step_end

RocketHideout_4F_Giovanni_Mision_1_move_11.1:
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_1_move_8.3:
delay_16
face_up
delay_16
delay_8
face_down
delay_16
step_end

RocketHideout_4F_Giovanni_Mision_1_move_8.1:
face_left
step_end

RocketHideout_4F_Giovanni_Mision_1_move_8.2:
face_down
step_end

RocketHideout_4F_Giovanni_Mision_1_move_5.2:
face_up
step_end

RocketHideout_4F_Giovanni_Mision_1_move_5.1:
delay_8
face_left
delay_16
delay_16
face_down
delay_8
step_end

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
	.string "ellas; le paró los pies a la\l"
	.string "CÓNSUL de ISLA INTA antes de que\l"
	.string "comprometiese nuestra situación\l"
	.string "comercial; fue clave en el robo a\l"
	.string "la patente de BILL que ha mejorado\l"
	.string "radicalmente nuestras comunicaciones;\l"
	.string "autor también del robo a la famosa\l"
	.string "reliquia del CAPITÁN del SS.ANNE{PAUSE 15}…{PAUSE 15}$"
	
RocketHideout_4F_Giovanni_Mision_1_Texto_3.1:
	.string "Su única derrota en combate fue a\n"
	.string "manos de ese misterioso ENTRENADOR,\l"
	.string "durante el fiasco del MT.MOON.\l"
	.string "Según los presentes, fue el único\l"
	.string "RECLUTA que no se dejó intimidar por\l"
	.string "el ridículo poder de su rival,\l"
	.string "peleando hasta el final.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_4:
.string "GIOVANNI: Excelente, PROTÓN.\n"
	.string "Gracias por la presentación.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_5:
.string "Como puedes ver, aquí no\n"
	.string "dejamos nada al azar. Tenemos en\l"
	.string "cuenta cada uno de los resultados\l"
	.string "de cada una de las células que\l"
	.string "forman esta gran organización, su\l"
	.string "correcta combinación y evaluación\l"
	.string "es la forma más justa de determinar\l"
	.string "qué lugar ocupa cada miembro.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_6:
.string "Con que vienes de ISLA INTA{PAUSE 15}…{PAUSE 15}\n"
	.string "Muchas de las cosas que has visto\l"
	.string "en KANTO te parecerán extrañas, te\l"
	.string "aseguro que es una región que vale\l"
	.string "la pena visitar; cuenta con lugares\l"
	.string "icónicos, muy buenos POKÉMON y una\l"
	.string "historia única. Sin embargo, su\l"
	.string "gente{PAUSE 25}…{PAUSE 25} es otro decir.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_7:
.string "Como ROCKET, te enrolaste en\n"
	.string "nuestra organización con el fin de\l"
	.string "robar POKÉMON u otros objetos\l"
	.string "valiosos, que equilibren la balanza\l"
	.string "de nuestros flujos de efectivo.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_7.1:
	.string "Esa es la función que tienen el\n"
	.string "90% de ROCKET, función poco ética\l"
	.string "pero necesaria, he de añadir.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_8:
.string "No obstante, tanto ANDRA como tú\n"
	.string "fuisteis ascendidos a ALTO RANGO.\l"
	.string "Ello os aleja de este tipo de misiones,\l"
	.string "para pasar a ser parte de cuestiones\l"
	.string "mucho más relevantes en el futuro\l"
	.string "a medio y largo plazo del TEAM ROCKET.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_9:
.string "Esto implica también un acceso\n"
	.string "privilegiado a información acerca\l"
	.string "del propósito último de nuestra\l"
	.string "organización, la situación actual\l"
	.string "en KANTO y la verdadera historia\l"
	.string "de esta región.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_10:
.string "Pero aún es demasiado pronto,\n"
	.string "quiero que crezcáis y mejoréis aún\l"
	.string "más bajo mi mando, que exploréis\l"
	.string "un poco más la región, disfrutéis\l"
	.string "de ello{PAUSE 25}…{PAUSE 25} y a su debido tiempo\l"
	.string "tendremos una reunión.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_11:
.string "Eso por un lado, ahora pasemos a\n"
	.string "la segunda parte de esta charla:\l"
	.string "quiero que me hables de ese\l"
	.string "misterioso ENTRENADOR.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_11.1:
	.string "Fuiste tú quien más tiempo lo enfrentó,\n"
	.string "cuéntame todo sobre él, sus POKÉMON,\l"
	.string "objetos y movimientos que usó, forma\l"
	.string "de combatir, rasgos, actitud, puntos\l"
	.string "débiles{PAUSE 25}…{PAUSE 25} todo lo que se te pase\l"
	.string "por la cabeza.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_12:
.string "GIOVANNI: {PAUSE 25}…{PAUSE 25} …{PAUSE 25}\n"
	.string "Ya veo, no parece alguien\l"
	.string "convencional, un CHARMELEON no se\l"
	.string "ve así como así en la KANTO actual.\l"
	.string "Solo las élites tienen acceso a esa\l"
	.string "clase de POKÉMON, inexistentes desde\l"
	.string "hace tiempo en estado salvaje.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_12.1:
	.string "Si también llevaba una POKÉDEX,\n"
	.string "todo indica a que ese niño viene\l"
	.string "de PUEBLO PALETA. El equipo que me\l"
	.string "has descrito es absurdamente\l"
	.string "poderoso, teniendo en cuenta la\l"
	.string "distancia entre PUEBLO PALETA y el\l"
	.string "MT.MOON, además del poco bagaje que\l"
	.string "debe llevar como ENTRENADOR.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_13:
.string "Tal vez veas a alguien de esas\n"
	.string "dimensiones como inalcanzable, y\l"
	.string "ciertamente es una amenaza.$"
	
RocketHideout_4F_Giovanni_Mision_1_Texto_13.1:
	.string "Pero{PAUSE 15}…{PAUSE 15} créeme cuando te digo que KANTO es\n"
	.string "mucho más que un ENTRENADOR. Por muy\l"
	.string "fuerte que sea, nadie, absolutamente\l"
	.string "nadie, es intocable y todos, de un\l"
	.string "modo u otro, pueden llegar a caer\l"
	.string "ante la oposición adecuada.$"
	
RocketHideout_4F_Giovanni_Mision_1_Texto_13.2:
	.string "Te irás dando cuenta de lo lejos que\n"
	.string "están lo que ahora tienes por límites,\l"
	.string "conforme más te vayas adentrando en\l"
	.string "nuestra organización.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_14:
.string "Eso es todo en cuanto a 'ROJO'.\n"
	.string "Ahora, pasemos a la tercera y\l"
	.string "última parte de tu convocatoria\l"
	.string "aquí, hablemos de{PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Giovanni_Mision_1_Texto_15:
.string "RECLUTA: Disculpe, señor.\n"
	.string "El LÍDER de GIMNASIO de CIUDAD FUCSIA\l"
	.string "quiere verle inmediatamente, dice\l"
	.string "que es urgente, señor.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_16:
.string "GIOVANNI: Hacedle pasar.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_17:
.string "GIOVANNI: Espero que tu causa sea\n"
	.string "de fuerza mayor, KOGA.\l"
	.string "Acabas de interrumpir mi reunión\l"
	.string "con el joven recluta {PLAYER}.$"

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
	.string "cantidad de público, lanzándose a\l"
	.string "la caza del raro POKÉMON maternal\l"
	.string "por su cuenta.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_20.1:
	.string "Hemos vendido la ZONA SAFARI como\n"
	.string "un lugar único, en el que existen\l"
	.string "POKÉMON que solo pueden encontrarse\l"
	.string "allí, KANGASKHAN es uno de los mayores\l"
	.string "símbolos de esa flora y fauna.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_20.2:
	.string "Su procedencia supuestamente es\n"
	.string "debida a nuestra crianza en\l"
	.string "cautiverio, y a nada más.\l"
	.string "No pueden surgir de la nada, alguien\l"
	.string "debió de hacer la gracia, soltando\l"
	.string "uno atrapado allí.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_21:
.string "KOGA: GIOVANNI, como dueño del 20%\n"
	.string "de las acciones totales de la ZONA\l"
	.string "SAFARI que eres, vengo a informarte,\l"
	.string "pero sobre todo a pedirte que te\l"
	.string "hagas cargo de esta situación.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_21.1:
	.string "Las pérdidas serían millonarias al\n"
	.string "instante de confirmarse este rumor,\l"
	.string "y nuestra imagen de exclusividad se\l"
	.string "rompería en pedazos.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_22:
.string "GIOVANNI: Entiendo, KOGA.\n"
	.string "Me haré cargo de la situación,\l"
	.string "pero ya sabes lo que pienso.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_22.1:
	.string "ZONA SAFARI fue una gran inversión,\n"
	.string "que con el paso del tiempo ha ido a\l"
	.string "menos. Incluso bajando los precios a\l"
	.string "niveles ridículos, la gente cada\l"
	.string "vez va menos, este movimiento solo\l"
	.string "retrasará su inevitable caída.$"
	
RocketHideout_4F_Giovanni_Mision_1_Texto_22.2:
	.string "Mi pronóstico es que en menos de 3\n"
	.string "años dejará de existir, aún así,\l"
	.string "el frenar esa caída puede suponer\l"
	.string "varias decenas de millones de\l"
	.string "ganancias respecto a dejarla caer.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_23:
.string "KOGA: Cuento contigo, entonces.$"

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
.string "GIOVANNI: Eso es todo, KOGA.\n"
	.string "Te haré saber lo ocurrido, ahora si me\l"
	.string "disculpas, tengo una charla por terminar.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_27:
.string "KOGA: {PAUSE 15}… {PAUSE 15}…{PAUSE 15}\n"
	.string "Viva la vieja KANTO.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_28:
.string "GIOVANNI: Cambio de planes, {PLAYER}.\n"
	.string "Ya has oído a KOGA, tu misión ahora\l"
	.string "será limpiar hasta el último rincón\l"
	.string "del TÚNEL ROCA.\l"
	.string "Borra toda prueba, todo indicio\l"
	.string "posible que pueda indicar que un\l"
	.string "KANGASKHAN estuvo allí.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_29:
.string "Podrás encontrar el TÚNEL ROCA\n"
	.string "pasando primero por la VÍA\l"
	.string "SUBTERRÁNEA, al este de la ciudad.\l"
	.string "A partir de ahí no tiene pérdida,\l"
	.string "llegarás a PUEBLO LAVANDA, y una\l"
	.string "vez allí, el TÚNEL ROCA está al\l"
	.string "norte.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_30:
.string "Eso es todo, {PLAYER}.\n"
	.string "Si ese KANGASKHAN existe, hazte con\l"
	.string "él y tráelo aquí como prueba.$" 
	
RocketHideout_4F_Giovanni_Mision_1_Texto_30.1:
	.string "Otra cosa más, evita la TORRE POKÉMON\n"
	.string "de PUEBLO LAVANDA. No quiero ROCKETS\l"
	.string "en ese lugar, al menos por ahora\l"
	.string "¿entendido?$"

RocketHideout_4F_Giovanni_Mision_1_Texto_31:
.string "GIOVANNI: ¡Entonces, a trabajar!$"


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
delay_8
walk_slow_left
delay_16
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_1_move_7:
delay_8
walk_slow_right
delay_16
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
delay 10
showmoneybox 0, 0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_2.1 MSGBOX_AUTOCLOSE
delay 25
playse SE_SHOP
addmoney 95000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_3 MSGBOX_DEFAULT
waitfanfare
delay 50
hidemoneybox
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_4 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.1
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_5.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 10, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.2
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.3
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
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.4
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_9 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_7
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_11 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_11.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_8
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_12 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_8.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_13.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_13.2 MSGBOX_AUTOCLOSE
delay 10
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
waitse
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_16.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_11
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_18 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_18.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_18.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_11
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19.2 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_SILPH_SCOPE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19.3 MSGBOX_DEFAULT
waitfanfare
delay 30
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2
waitmovement 0x0
waitse
delay 20
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_20 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_21 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.6
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_22 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_23 MSGBOX_AUTOCLOSE
playbgm 528, FALSE
applymovement 8, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_12
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
removeobject 8
delay 15
fadedefaultbgm
delay 55
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_24 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.5
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_24.1 MSGBOX_AUTOCLOSE
delay 15
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_24.2 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 44
release
end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.6:
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.5:
delay_8
face_right
delay_16
delay_8
face_down
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_8.1:
walk_in_place_down
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.4:
delay_8
walk_slow_left
delay_16
delay_8
face_down
delay_16
delay_8
walk_slow_right
delay_16
face_down
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.1:
face_right
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.2:
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.3:
delay_16
face_down
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_1:
.string "GIOVANNI: ¡{PLAYER}, qué oportuno!\n"
	.string "Ya me han informado de tu\l"
	.string "excelente trabajo, quitándole de\l"
	.string "las manos a ese oportunista al\l"
	.string "KANGASKHAN en el último momento.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_2:
.string "Tengo entendido que ese científico\n"
	.string "ya se aprovechó antes de la\l"
	.string "situación en el MT.MOON, has de\l"
	.string "saber que no es la primera vez que\l"
	.string "nos da problemas, es una especie\l"
	.string "de carroñero, fanático de los\l"
	.string "POKÉMON raros.\l"
	.string "Hará todo para obtenerlos, sin importar\l"
	.string "los medios, una especie de BILL, pero\l"
	.string "sin sus recursos económicos.$"
	
RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_2.1:
	.string "Me alegra que hayas puesto en su\n"
	.string "lugar a ese cobarde en el nombre\l"
	.string "del TEAM ROCKET. Eso, junto a encontrar\l"
	.string "al famoso KANGASKHAN, merecen una buena\l"
	.string "recompensa.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_3:
	.string "¡Te has embolsado 95.000¥!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_4:
.string "GIOVANNI: Y aún más. Para celebrar\n"
	.string "tu venganza sobre ese aprovechado,\l"
	.string "el TEAM ROCKET te recompensará\l"
	.string "también con un KABUTO.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_5:
.string "Técnicamente estás recuperando el\n"
	.string "FÓSIL DOMO que te fue arrebatado\l"
	.string "en su momento, y con intereses. Ya\l"
	.string "convertido en KABUTO y criado hasta\l"
	.string "el nivel 28, si no recuerdo mal.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_5.1:
	.string "¡PROTÓN!\n"
	.string "¡Entrega el KABUTO a {PLAYER}!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_6:
.string "PROTÓN: Con gusto, jefe.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_6.1:
.string "¡OBTUVISTE UN KABUTO AL NV.28!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_7:
.string "GIOVANNI: Técnicamente, su valor es\n"
	.string "de varios cientos de miles en\l"
	.string "el mercado negro, pero tu\l"
	.string "historia con este FÓSIL vale más\l"
	.string "que todo eso{PAUSE 15}…{PAUSE 15}$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_8:
.string "Por ahora, el tema queda zanjado.\n"
	.string "Examinaremos a ese KANGASKHAN, para\l"
	.string "determinar su procedencia; sigue\l"
	.string "siendo todo un misterio su presencia\l"
	.string "en el TÚNEL ROCA.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_9:
.string "Bien, {PLAYER}. En tu última misión\n"
	.string "te recalqué la importancia de no\l"
	.string "acercarte a la TORRE POKÉMON, ese\l"
	.string "lugar está muy relacionado con\l"
	.string "nuestro próximo movimiento{PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_10:
.string "Vamos a enviar a un pelotón\n"
	.string "completo, para recolectar el máximo\l"
	.string "número de cráneos de CUBONE posible.\l"
	.string "Algo de gran valor en el mercado negro.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_11:
.string "Sin embargo, esta es solo la\n"
	.string "tapadera, la excusa hacia la que\l"
	.string "todos mirarán debido a nuestra\l"
	.string "fama.$"
	
RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_11.1:
	.string "El verdadero objetivo es llamar la\n"
	.string "atención de FUJI, para que acuda a\l"
	.string "TORRE POKÉMON en el momento exacto{PAUSE 5}…{PAUSE 5}$"


RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_12:
.string "FUJI fue uno de nuestros mejores\n"
	.string "científicos en el pasado.\l"
	.string "Es el único que conoce en detalle\l"
	.string "datos cruciales de uno de nuestros\l"
	.string "más grandes proyectos.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_13:
.string "Tu misión es simple, {PLAYER}.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_13.1:
	.string "PROTÓN se encargará de llevar a\n"
	.string "FUJI hasta el último piso para\l"
	.string "negociar en privado.$"
	
RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_13.2:
	.string "Mientras, tú te encargarás de garantizar\n"
	.string "la confidencialidad de dicha reunión;\l"
	.string "no quiero que absolutamente nadie\l"
	.string "interceda mientras la negociación dure.\l"
	.string "¿Ha quedado claro?$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_14:
.string "Perfecto, nada debe de salir mal\n"
	.string "en esta misión.\l"
	.string "Por ello, además del resto de reclutas,\l"
	.string "formarás equipo con otro ENTRENADOR.\l"
	.string "Diría que{PAUSE 15}…{PAUSE 15} ya os conocéis{PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_15:
.string "GIOVANNI: ¿Sorprendido?\n"
	.string "AZUL accedió a aliarse con\l"
	.string "nosotros en su paso por el PUENTE\l"
	.string "PEPITA, al tiempo de tu actuación\l"
	.string "en la casa de BILL.\l"
	.string "Su condición de nieto del PROF.OAK\l"
	.string "y rival directo de ROJO, hacen de\l"
	.string "él un agente doble perfecto.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_16:
.string "AZUL: Así que el ROCKET del\n"
	.string "SS.ANNE{PAUSE 15}…{PAUSE 15}$"
	
RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_16.1:
	.string "Escondes bien a tus soldados más\n"
	.string "valiosos, GIOVANNI. Ya podrías soltar\l"
	.string "a más como {PLAYER} por las rutas, es\l"
	.string "imposible seguir mejorando con gente\l"
	.string "tan mediocre deambulando en ellas.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17:
.string "GIOVANNI: Te queda mucho por ver\n"
	.string "de esta región, jovencito. Si crees\l"
	.string "que los LÍDERES DE GIMNASIO son lo\l"
	.string "mejor de por aquí, estás muy errado.$"
	
RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17.1:
	.string "Las auténticas leyendas de KANTO, así\n"
	.string "como las de JOHTO, tienden a permanecer\l"
	.string "en las sombras.$"
	
RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17.2:
	.string "Pero no te culpo, esta es ahora la\n"
	.string "nueva KANTO, y la única que gente a\l"
	.string "partir de tu edad conocerá.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17.3:
	.string "AZUL: Mmm{PAUSE 15}…{PAUSE 15}$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_18:
.string "Volviendo al plan: la única variable\n"
	.string "capaz de torcerlo es ROJO, mis fuentes\l"
	.string "lo sitúan en RUTA 10, ya en TÚNEL ROCA.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_18.1:
	.string "Por su ritmo de avance, todo apunta\n"
	.string "a que llegará a PUEBLO LAVANDA en plena\l"
	.string "misión. Si por algún casual decide\l"
	.string "colarse en la TORRE LAVANDA, no podemos\l"
	.string "arriesgarnos a tener un MT.MOON 2.0.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_18.2:
	.string "Aquí es donde entras tú, AZUL.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19:
.string "Se te avisará de la llegada de\n"
	.string "ROJO, y te colocarás en los pisos\l"
	.string "inferiores de la TORRE, una vez\l"
	.string "aparezca, fingirás estar ahí de\l"
	.string "forma espontánea, sin nombrar\l"
	.string "nunca al TEAM ROCKET, tratarás de\l"
	.string "convencerlo para que dé media vuelta.$"
	
RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19.1:
	.string "Háblale de los fantasmas, de que\n"
	.string "necesita un SCOPE SILPH{PAUSE 15}…{PAUSE 15}\l"
	.string "Si decidiese subir de todos modos,\l"
	.string "avisa a {PLAYER} inmediatamente.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19.2:
	.string "Por otro lado, esto es para\n"
	.string "vosotros, un SCOPE SILPH.\l"
	.string "Con ello podréis capturar cualquier\l"
	.string "fantasma dentro de TORRE POKÉMON.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19.3:
.string "¡{PLAYER} obtuvo un SCOPE SILPH!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_20:
.string "¡{PLAYER}!{PAUSE 35}\n"
	.string "¡No quiero que busques la revancha\l"
	.string "con ROJO! ¡En caso de que se te\l"
	.string "informe de su llegada inminente, subirás\l"
	.string "al último piso y avisarás a PROTÓN!\l"
	.string "¡Esa es la única razón para\l"
	.string "interrumpir la reunión!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_21:
.string "AZUL: ¡Por qué le das tanta\n"
	.string "importancia a ROJO!\l"
	.string "¡Si me uniera con {PLAYER},\l"
	.string "seguro que lo derrotamos!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_22:
.string "GIOVANNI: La realidad es que nadie\n"
	.string "ha estado ni cerca de derrotarlo,\l"
	.string "ante un poder que es incontrolable,\l"
	.string "solo nos queda actuar con astucia,\l"
	.string "para que se manifieste solo donde\l"
	.string "nos interese{PAUSE 25}…{PAUSE 25} y ganar tiempo.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_23:
.string "AZUL: ¡Hmph!\n"
	.string "Revertiré las tornas respecto a\l"
	.string "ROJO, ya lo veréis.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_24:
.string "GIOVANNI: Algo arrogante y\n"
	.string "prepotente, pero con potencial{PAUSE 25}…{PAUSE 25}$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_24.1:
	.string "PROTÓN se reunirá en breves\n"
	.string "contigo, {PLAYER}. Adelántate junto\l"
	.string "con el resto de reclutas para iniciar\l"
	.string "el señuelo de los CUBONE, y atraer a\l"
	.string "FUJI.$"
	
RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_24.2:
	 .string "Cuento contigo.$"

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
playse SE_BREAKABLE_DOOR
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_5
waitmovement 0x0
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_6
waitmovement 0x0
waitse
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_4 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_5 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1
waitmovement 0x0
waitse
delay 10
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_2
waitmovement 0x0
delay 15
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_7
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_6 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_8 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_7
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_8.2
waitmovement 0x0
waitse
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_8.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_8.1
waitmovement 0x0
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
setmetatile 21, 11, 0x299, TRUE
setmetatile 22, 11, 0x299, TRUE
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
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_17.1 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_FANCLUB_OLD_LADY
delay 20
playse SE_EXIT
addobject 10
setobjectxy 10, 20, 9
waitse
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_13
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_18 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_14
waitmovement 0x0
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_19 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_19.1 MSGBOX_AUTOCLOSE
delay 10
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

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_8.2:
jump_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_8.1:
walk_in_place_up
step_end

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
.string "RECLUTA: ¡Señor, órdenes!\n"
	.string "¡Todos nosotros estamos cayendo\l"
	.string "como fichas de dominó ante la\l"
	.string "potencia de sus POKÉMON!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_4:
.string "PROTÓN: ¡Llamad a todos los\n"
	.string "RECLUTAS DE ALTO RANGO y\l"
	.string "EJECUTIVOS disponibles!\l"
	.string "¡Proteged el acceso a\l"
	.string "nuestro LÍDER!\l"
	.string "¡Si fuere necesario, recurrid a\l"
	.string "nuestra sala de específemenes\l"
	.string "esp…!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_5:
.string "GIOVANNI: ¡ALTO!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_6:
.string "GIOVANNI: No vamos a hacer nada\n"
	.string "de eso, PROTÓN.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_7:
.string "PROTÓN: P{PAUSE 15}-{PAUSE 15}pero señor{PAUSE 15}…{PAUSE 15}$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_8:
.string "GIOVANNI: Quiero a todos los\n"
	.string "EJECUTIVOS y ROCKET DE ALTO RANGO\l"
	.string "dentro de la BASE ROCKET PROFUNDA.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_8.1:
	.string "¡YA!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_9:
.string "RECLUTA: ¡A sus órdenes, JEFE!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_10:
.string "GIOVANNI: PROTÓN, proporcióname\n"
	.string "información detallada sobre el\l"
	.string "equipo y niveles que actualmente\l"
	.string "maneja la LÍDER DE GIMNASIO de\l"
	.string "CIUDAD AZULONA, ERIKA.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_11:
.string "PROTÓN: Enseguida, señor.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_12:
.string "La LÍDER ERIKA cuenta, a día de hoy, con\n"
	.string "un VICTREBEEL al nv.29, un TANGELA\l"
	.string "al nv.24, y un VILEPLUME al nv.29.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_13:
.string "GIOVANNI: Perfecto, ¿a qué nivel\n"
	.string "estaba el KANGASKHAN perdido que\l"
	.string "{PLAYER} atrapó en el TÚNEL ROCA?$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_14:
	.string "PROTÓN: Al nv.29, señor.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_15:
.string "GIOVANNI: Bien, da el pego con la\n"
	.string "jerarquía que ese infeliz puede esperar\l"
	.string "de alguien como yo. Traéme a ese\l"
	.string "KANGASKHAN y a otros dos POKÉMON\l"
	.string "de nivel y poder algo inferior;\l"
	.string "ONIX y RHYHORN encajarían.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_16:
.string "PROTÓN: Enseguida, jefe.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_17:
.string "GIOVANNI: Nunca enseñes todas las\n"
	.string "cartas a tu enemigo, {PLAYER}.\l"
	.string "Por muy fuerte que ese ROJO sea, nunca\l"
	.string "podrá combatir contra algo que siquiera\l"
	.string "sabe de su existencia.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_17.1:
	.string "Para cuando lo sepa, será demasiado\n"
	.string "tarde para él, pues no habrá dispuesto\l"
	.string "de tiempo para adaptarse, nunca\l"
	.string "llegará a nuestro nivel combatiendo con\l"
	.string "la mediocridad que abunda en los\l"
	.string "pueblos y ciudades de la KANTO actual.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_18:
.string "PROTÓN: Aquí tiene, señor.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_19:
.string "GIOVANNI: No quiero que cometas\n"
	.string "ninguna estupidez, {PLAYER}.\l"
	.string "Sé que deseas medir fuerzas con ese\l"
	.string "ENTRENADOR, y vengarte por tu\l"
	.string "derrota en el MT.MOON.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_19.1:
	.string "Ahora eres más fuerte y capaz que en\n"
	.string "ese entonces, pero aún no es el\l"
	.string "momento; lo prioritario ahora es\l"
	.string "mantener a ese chico en la ignorancia,\l"
	.string "al menos hasta averiguar sus intenciones{PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_20:
.string "RECLUTA: Señor, acaba de robarle\n"
	.string "su LLAVE ASCENSOR a un recluta, ya\l"
	.string "nada le impide su acceso a usted.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_21:
.string "GIOVANNI: Espléndido.\n"
	.string "¡{PLAYER}!\l"
	.string "¡PROTÓN!\l"
	.string "¡Adentro, ya!\l"
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
delay_8
walk_left
walk_up
walk_up
walk_right
walk_right
walk_up
walk_up
walk_left
walk_left
face_up
delay_16
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
setflag FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_1 MSGBOX_AUTOCLOSE
playse SE_SHOP
waitse
delay 20
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_3
waitmovement 0x0
delay 10
showmoneybox 0, 0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_2 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 135000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_3 MSGBOX_DEFAULT
waitfanfare
delay 50
hidemoneybox
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_4 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_4.1 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
givemon SPECIES_CUBONE, 20, ITEM_THICK_CLUB
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_5 MSGBOX_DEFAULT
waitfanfare
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_6 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 2, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_8
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_8
waitmovement 0x0
waitse
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7.2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_8 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9.2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_8
waitmovement 0x0
waitse
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6.2
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9.3 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9.4 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.4
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_9
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_10.1 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_10.2 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_13 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_14 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_14.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6.3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_14.2 MSGBOX_AUTOCLOSE
delay 10
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
setmetatile 21, 11, 0x299, TRUE
setmetatile 22, 11, 0x299, TRUE
special DrawWholeMapView
delay 45
playse SE_PIN
applymovement 2, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_8
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_9
waitmovement 0x0
waitse
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_16 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_10
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_17 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_17.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_18 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_19 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_20 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_20.1 MSGBOX_AUTOCLOSE
delay 15
playse SE_BREAKABLE_DOOR
applymovement 2, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_9
waitmovement 0x0
waitse
delay 10
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

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6.1:
face_left
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6.2:
face_down
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6.3:
delay_8
face_right
delay_16
delay_8
face_down
delay_8
delay_16
walk_in_place_down
delay_8
step_end

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
setmetatile 21, 11, 0x299, TRUE
setmetatile 22, 11, 0x299, TRUE
special DrawWholeMapView
delay 60
release
end

RocketHideout_4F_Warp_No::
release
end

RocketHideout_4F_PC_Texto_1:
.string "Este ordenador parece que cumple\n"
	.string "una función de gran importancia{PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Warp_Text_YesNo:
.string "¿Quieres activar la entrada\n"
	.string "secreta?$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_1:
.string "GIOVANNI: Excelente trabajo, ANDRA.\n"
	.string "Los DRATINI y SCYTHER recolectados en\l"
	.string "la ZONA SAFARI se venderán a precio de\l"
	.string "oro, como premio en el CASINO.\l"
	.string "Aquí tienes tu recompensa.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_2:
.string "GIOVANNI: Tú también estás de\n"
	.string "vuelta, {PLAYER}.\l"
	.string "Mantuviste en privado, tal y como te\l"
	.string "ordené, la conversación entre FUJI y\l"
	.string "PROTÓN; una negociación clave para\l"
	.string "nosotros, por ello, aquí tienes.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_3:
	.string "¡Te has embolsado 135.000¥!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_4:
.string "GIOVANNI: Y otra cosa más, en el\n"
	.string "nombre del TEAM ROCKET, te obsequio\l"
	.string "con uno de los CUBONE robados en\l"
	.string "la TORRE POKÉMON.\l"
	.string "Pero no un CUBONE cualquiera, este\l"
	.string "lleva equipado un HUESO GRUESO, objeto\l"
	.string "que multiplica por 2 su ATAQUE, tanto a\l"
	.string "CUBONE como a su evolución, MAROWAK.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_4.1:
	.string "Un regalo digno de aquel que\n"
	.string "pudo batir al MAROWAK de FUJI.\l"
	.string "¿No crees?$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_5:
.string "¡HAS RECIBIDO UN CUBONE AL NV.20!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_6:
.string "GIOVANNI: Cerrando este tema…\n"
	.string "Os interesará saber que, investigando al\l"
	.string "KANGASKHAN encontrado en el TÚNEL ROCA,\l"
	.string "vimos que su fisiología era muy similar\l"
	.string "al de la línea evolutiva CUBONE-MAROWAK.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7:
.string "En la ZONA SAFARI, todos los KANGASKHAN\n"
	.string "son criados en cautiverio.\l"
	.string "Con todo tipo de comodidades, es natural\l"
	.string "que las crías se desarrollen siempre\l"
	.string "hasta alcanzar esa fase…$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7.1:
	.string "Pero la línea evolutiva CUBONE-MAROWAK\n"
	.string "no está clara; CUBONE surge como tal\l"
	.string "en el momento de tomar el cráneo de su\l"
	.string "madre fallecida.$"
	
RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7.2:
	.string "Sin embargo, ¿y si su madre no fallece?\n"
	.string "¿En qué se convertiría CUBONE?$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7.3:
	.string "Según lo que indica nuestro\n"
	.string "estudio, en un KANGASKHAN.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_8:
.string "Esto es difícilmente demostrable.\n"
	.string "Solo en el supuesto de que TORRE POKÉMON\l"
	.string "dejara de existir, se podría ver lo\l"
	.string "que ocurre con los CUBONE de allí que\l"
	.string "emigren en masa hacia el TÚNEL ROCA.$"


RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9:
    .string "TÚNEL ROCA es, en realidad, un lugar más\n"
	.string "propicio para la reproducción y super-\l"
	.string "vivencia de CUBONE que TORRE POKÉMON.$"


RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9.1:
.string "Si con el paso de generaciones comenzaran\n"
	.string "a aparecer también KANGASKHAN, este\l"
	.string "hecho constituiría una prueba irrefutable\l"
	.string "del vínculo entre ambas especies.$"


RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9.2:
.string "Basándonos en esta hipótesis, la\n"
	.string "presencia del KANGASKHAN que allí\l"
	.string "capturaste, {PLAYER}, cobra sentido.$"


RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9.3:
	.string "Así es, tal vez ese KANGASKHAN sea el\n"
	.string "primer caso de una cría que, sin llegar\l"
	.string "a ser CUBONE, emigró al túnel, logró\l"
	.string "sobrevivir y se convirtió en KANGASKHAN\l"
	.string "por su cuenta.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9.4:
	.string "Tal vez sea un fenómeno que veamos\n"
	.string "cada vez con más frecuencia, solo\l"
	.string "tiempo lo dirá.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_10:
.string "GIOVANNI: Dejando esto de lado, y\n"
	.string "aprovechando que ambos estáis aquí, es\l"
    .string "el momento de dar el siguiente paso.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_10.1:
    .string "ANDRA: ¿A qué se refiere?$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_10.2:
	.string "GIOVANNI: Los dos habéis demostrado ser\n"
	.string "competentes y dignos de confianza.\l"
	.string "Ya lleváis 6 misiones con nosotros,\l"
	.string "cumpliendo deforma satisfactoria en 5\l"
	.string "de ellas, muy pocos pueden decir eso\l"
	.string "en tan poco tiempo.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_11:
.string "Pero, como habréis podido comprobar,\n"
	.string "el TEAM ROCKET tiene vetada su\l"
	.string "presencia en cualquier comercio\l"
	.string "público de la región, incluso del\l"
	.string "CENTRO COMERCIAL AZULONA.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_12:
.string "Aún así, no debéis preocuparos.\n"
	.string "Sé que dos ALTO RANGO en ascenso\l"
	.string "estarán ansiosos de poder invertir el\l"
	.string "dinero que buenamente han ganado en\l"
	.string "mejorar aún más a sus POKÉMON.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_13:
.string "En esta organización nunca dejamos\n"
	.string "nada al azar, hace ya tiempo que\l"
	.string "nos procuramos una inmensa red comercial\l"
	.string "privada, mayor que la propia oferta\l"
	.string "impuesta y fijada por esas sanguijuelas\l"
	.string "de la MESETA AÑIL.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_14:
.string "A vuestra llegada aquí, se os avisó\n"
	.string "de que poco a poco iríais descubriendo\l"
	.string "algunos de los secretos que el TEAM\l"
	.string "ROCKET guarda.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_14.1:
	.string "Pues bien{PAUSE 25}…{PAUSE 25} ha llegado el momento de\n"
	.string "desvelar uno de ellos.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_14.2:
	.string "¡PROTÓN!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_15:
.string "PROTÓN: A la orden, jefe.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_16:
.string "ANDRA: ¡Guau!\n"
	.string "¿Una base secreta oculta dentro de\l"
	.string "otra base secreta?\l"
	.string "¡Ingenioso!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_17:
.string "GIOVANNI: Así es, ANDRA.\n"
	.string "Lo verdaderamente importante de este\l"
	.string "lugar se encuentra a partir de esas\l"
	.string "escaleras, muchos piensan que el\l"
	.string "CASINO es la tapadera de esta BASE.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_17.1:
	.string "Pero se equivocan…\n"
	.string "Esta BASE es la tapadera de lo que\l"
	.string "ahí abajo hay realmente.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_18:
.string "Espero que seáis conscientes de la\n"
	.string "magnitud de este secreto.\l"
	.string "Si las autoridades de KANTO tuvieran\l"
	.string "la más mínima idea de la que tenemos\l"
	.string "aquí montada, no dudarían en destinar\l"
	.string "todos sus recursos en destruirnos.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_19:
.string "GIOVANNI: Solo nuestros científicos y\n"
	.string "soldados a partir de ALTO RANGO tienen\l"
	.string "acceso a este lugar, podréis entrar\l"
	.string "siempre y cuando queráis, interactuando\l"
	.string "con el PC de PROTÓN.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_20:
.string "GIOVANNI: Eso es todo por ahora.\n"
	.string "A falta de nuevas misiones, os\l"
	.string "concedo tiempo libre para que\l"
	.string "exploréis la -BASE ROCKET PROFUNDA-.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_20.1:
	.string "Así, os iréis haciendo una idea de en\n"
	.string "qué invertimos todos nuestros recursos.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_21:
.string "ANDRA: ¡Todo un honor que deposite\n"
	.string "su confianza en nosotros, GIOVANNI!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_22:
.string "ANDRA: Nos vemos allí abajo, {PLAYER}.\n"
	.string "¡Voy a disfrutar como una niña,\l"
	.string "explorando cada rincón de uno\l"
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
walk_fast_down
walk_fast_down
walk_fast_right
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_12:
walk_fast_down
walk_fast_right
walk_fast_right
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
delay 10
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
delay 10
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
delay 10
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_4.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_6 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_7 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_8 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_6.1
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_8.1 MSGBOX_AUTOCLOSE
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
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_10
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_11 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_13
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_14 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_7
removeobject 11
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_8
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_8.1
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.1
waitmovement 0x0
delay 10
playse SE_M_COSMIC_POWER
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.2
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playse SE_M_SOLAR_BEAM
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12
delay 100
changeavatar 3
setvar VAR_UNUSED_0x40F7, 804
warpsilent MAP_ROCKET_HIDEOUT_4F, 19, 8


RocketHideout_4F_Mision_Islas_Sete_Lance_Move_6.1:
walk_in_place_down
step_end


RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.2:
walk_in_place_right
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_8.1:
delay_8
delay_8
face_left
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.1:
walk_down
walk_left
walk_left
walk_down
walk_down
walk_down
walk_right
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.3:
face_up
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.4:
walk_up
walk_left
walk_up
walk_up
walk_right
walk_right
walk_up
delay_8
walk_in_place_down
step_end



RocketHideout_4F_Disguise_Player::
delay 10
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
delay 50
hidemoneybox
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.2
waitmovement 0x0
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
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.3
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_22 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.3
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.4
waitmovement 0x0
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
setflag FLAG_HOENN_676
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
setflag FLAG_HIDE_FANCLUB_BOY
setflag FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE
setflag FLAG_HIDE_LILYCOVE_HARBOR_FERRY_SAILOR
clearflag FLAG_HOENN_74
clearflag FLAG_HOENN_75
clearflag FLAG_HOENN_76
clearflag FLAG_HOENN_77
clearflag FLAG_HOENN_78
clearflag FLAG_HOENN_79
setflag FLAG_HOENN_90
setflag FLAG_HOENN_91
setflag FLAG_HOENN_92
setflag FLAG_HOENN_93
setflag FLAG_HOENN_94
setflag FLAG_HOENN_95
setflag FLAG_HOENN_96
setflag FLAG_HOENN_97
setflag FLAG_HOENN_98
setflag FLAG_HOENN_99
clearflag FLAG_HOENN_640
clearflag FLAG_HOENN_641
clearflag FLAG_HOENN_642
clearflag FLAG_HOENN_643
clearflag FLAG_HOENN_644
clearflag FLAG_HOENN_645
clearflag FLAG_HOENN_646
clearflag FLAG_HOENN_647
clearflag FLAG_HOENN_648
clearflag FLAG_HOENN_649
setvar VAR_UNUSED_0x40F7, 95
release
end

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_1:
.string "????: Ya no tienes la sartén por\n"
	.string "el mango, LANCE.\l"
	.string "Sugiero que te calmes.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_1.1:
	.string "????: Pero{PAUSE 25}…{PAUSE 25} ahora vienes a mí a decir{PAUSE 25}…{PAUSE 25}\n"
	.string "que lleve todo esto de la forma más\l"
	.string "justa posible y escuche tus exigencias.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_2:
.string "GIOVANNI: Si quieres conservar parte de\n"
	.string "tus privilegios y tu poder, deberás\l"
	.string "cumplir con las siguientes condiciones{PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_3:
.string "Provocar la renuncia de ROJO al título\n"
	.string "de CAMPEÓN, y borrarlo del mapa.\l"
	.string "Quiero fuera de juego a ese experimento\l"
	.string "de OAK, llevadlo a algún lugar apartado\l"
	.string "y decid a los medios que está realizando\l"
	.string "una especie de entrenamiento secreto.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_4:
.string "Con ello, mantendréis a AZUL como\n"
	.string "vigente CAMPEÓN, él nos informará de\l"
	.string "cualquier paso en falso que tratéis de\l"
	.string "dar en contra nuestra, LANCE.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_4.1:
    .string "Por tu bien, espero que no\n"
	.string "cometas ninguna estupidez.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_5:
.string "Confirmaréis la disolución definitiva\n"
	.string "del TEAM ROCKET; ello implica que todo\l"
	.string "ROCKET real que sea visto, será tomado\l"
	.string "como un ciudadano más, con su respectivo\l"
	.string "permiso para entrar en las tiendas.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_6:
.string "LANCE: {PAUSE 25}…{PAUSE 25}$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_7:
.string "GIOVANNI: Y por último, reduciréis en\n"
	.string "un 80% toda la presión fiscal, tanto de\l"
	.string "SILPH como del resto de pequeños\l"
	.string "negocios de KANTO; se acabó el chuparle\l"
	.string "la sangre a los ciudadanos, y el\l"
	.string "mantenerlos bajo un régimen de\l"
	.string "esclavitud camuflado.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_8:
.string "Eso es todo. Y recuerda, un solo mal\n"
	.string "gesto, un leve indicio de que intentas\l"
	.string "algo raro, y toda KANTO sabrá lo\l"
	.string "ocurrido en el HALL DE LA FAMA.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_8.1:
	.string "¡Ahora, fuera de mi vista!$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_9:
.string "PROTÓN: Señor, ¿cree que hacemos\n"
	.string "lo correcto negociando con gente\l"
	.string "así?\l"
	.string "¿No deberíamos…?$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_10:
.string "GIOVANNI: Lo sé, PROTÓN, pero KANTO\n"
	.string "no está preparada para asimilar todo\l"
	.string "lo ocurrido; todo cuanto necesita es\l"
	.string "alcanzar de nuevo la estabilidad, no\l"
	.string "una nueva revolución por todo lo alto\l"
	.string "que meta aún más caos a la región.\l"
	.string "Por el momento, LANCE está atado, y\l"
	.string "con las nuevas condiciones impuestas,\l"
	.string "todo tenderá a mejorar{PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_11:
.string "GIOVANNI: {PLAYER}, demostraste ser\n"
	.string "un ENTRENADOR excepcional en el\l"
	.string "HALL DE LA FAMA, único, de esos\l"
	.string "que aparecen una vez cada 50 años,\l"
	.string "solo alguien así pudo haber derrotado a\l"
	.string "un equipo con un poder tan incontenible\l"
	.string "como el que tenía LANCE.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_12:
.string "Por fortuna, hemos devuelto a\n"
	.string "RAIKOU, ENTEI y SUICUNE a sus\l"
	.string "hábitats naturales de JOHTO.\l"
	.string "Esperemos que ningún maníaco como\l"
	.string "LANCE tenga la intención y el poder\l"
	.string "como para volver a atraparlos{PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_13:
.string "GIOVANNI: {PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_14:
.string "Hemos cumplido con el propósito\n"
	.string "por el que el TEAM ROCKET renació,\l"
	.string "{PLAYER}: salvar KANTO de las garras\l"
	.string "de LANCE, y tú has sido más que\l"
	.string "fundamental para ello.\l"
	.string "Junto con ATLAS y ANDRA, has alcanzado\l"
	.string "el rango más alto que puedo ofrecer a\l"
	.string "un miembro del TEAM ROCKET en KANTO.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_15:
.string "¡¡{PLAYER} HA SIDO ASCENDIDO A\n"
	.string "ADMINISTRADOR!!$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_16:
.string "GIOVANNI: El TEAM ROCKET es tu casa,\n"
	.string "{PLAYER}, te has ganado tu puesto con\l"
	.string "todas las de la ley, esta es tu\l"
	.string "recompensa por tu hazaña en la LIGA.\l"
	.string "Considéralo como un pago simbólico,\l"
	.string "lo que hiciste en el HALL DE LA FAMA\l"
	.string "no se puede comprar con dinero.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_17:
	.string "¡Te has embolsado 1.000.000¥!$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_18:
.string "Además de ello, como ya sabes,\n"
	.string "conseguimos replicar de forma\l"
	.string "estable el ADN de ARTICUNO, ZAPDOS\l"
	.string "y MOLTRES, para así crear clones\l"
	.string "idénticos de forma exitosa.\l"
	.string "Qué menos que ofrecerle los primeros\l"
	.string "ejemplares a quién lo hizo posible.$"

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
	.string "razón por la que el TEAM ROCKET se\l"
	.string "fundó: conocer el mundo POKÉMON y sus\l"
	.string "misterios, explorar los límites de su\l"
	.string "potencial y llegar hasta donde nadie\l"
	.string "más ha llegado.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_24:
.string "Por supuesto, aún tenemos a MEWTWO\n"
	.string "en el punto de mira.\l"
	.string "Sigue siendo un peligro que hay\l"
	.string "que controlar, pero no es momento\l"
	.string "de involucrarte una misión así.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_25:
.string "Después de lo que has hecho,\n"
	.string "mereces tomarte unas buenas\l"
	.string "vacaciones, darte el tiempo de\l"
	.string "celebrar y asimilar todo lo que\l"
	.string "has conseguido, antes de embarcarte\l"
	.string "otra vez en nuevos retos aún más\l"
	.string "exigentes.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_26:
.string "¿Y qué mejor lugar para ello que\n"
	.string "ISLAS SETE, tu lugar de origen?\l"
	.string "Ahora, podrás explorar tranquilamente\l"
	.string "las islas y todos sus misterios.\l"
	.string "He oído que hay buenos ENTRENADORES por\l"
	.string "allí, además de una flora y fauna muy\l"
	.string "similar a JOHTO.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_27:
.string "Con esto podrás viajar de forma\n"
	.string "legal, tomando el SURCAMAR de CARMÍN.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_28:
.string "{PLAYER} rebibió el IRIS-TICKET.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_29:
.string "El ARCHI7 es famoso por sus ruinas,\n"
	.string "tanto de ISLA EXTA como de SÉTIMA.\l"
	.string "Ambas datadas en 1500 años de antiguedad,\l"
	.string "tienen muchas similitudes con las RUINAS\l"
	.string "ALFA de JOHTO, y se cree que puedan\l"
	.string "guardar algún tipo de vínculo.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_30:
.string "¿Recuerdas el frasco que ANDRA y tú\n"
	.string "robasteis al CAPITÁN del SS.ANNE?$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_31:
.string "Creemos que su contenido procede\n"
	.string "de esas ruinas.\l"
	.string "No te diré que vayas allí expresamente\l"
	.string "para investigar, como una misión más,\l"
	.string "pero te informo de ello.\l"
	.string "Si sientes curiosidad, puedes pasarte\l"
	.string "por allí, e intentar averiguar algo.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_32:
.string "Eso es todo por el momento, {PLAYER}.\n"
	.string "Te avisaremos cuando tengamos noticias\l"
	.string "sobre MEWTWO o algún otro POKÉMON\l"
	.string "singular; el ARCHI7 y sus misterios te\l"
	.string "esperan, disfruta de tus vacaciones.$"

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
delay_16
walk_in_place_left
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_5:
walk_right
delay_16
walk_in_place_right
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_6:
walk_left
delay_16
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
walk_right
walk_up
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_14:
walk_right
delay_16
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
playse SE_BREAKABLE_DOOR
waitse
delay 10
msgbox PokemonTower5F_Escena_4_Blaine_Texto_17 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_9
waitmovement 0x0
delay 10
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
opendoor 20, 23
waitdooranim
applymovement 12, RocketHideout_4F_Mision_Andra_Fucsia_move_5.2
waitmovement 0x0
removeobject 12
closedoor 20, 23
waitdooranim
setvar VAR_UNUSED_0x40F7, 47
warpsilent MAP_POKEMON_TOWER_5F, 18, 9
release
end

PokemonTower5F_Escena_4_Blaine_Texto_1:
.string "RECLUTA: El LÍDER de ISLA CANELA\n"
	.string "ha llegado, señor.$"

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
.string "BLAINE: P{PAUSE 15}-{PAUSE 15}Pero{PAUSE 25}…{PAUSE 25} ¿A qué se deb…?$"

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
.string "No obstante{PAUSE 25}…{PAUSE 25} me consta que SILPH ya ha\n"
	.string "creado una versión optimizada de\l"
	.string "PORYGON. La producción del nuevo\l"
	.string "PORYGON2 cuesta 3 veces la del\l"
	.string "PORYGON normal, lo cual lo hace\l"
	.string "inviable como producto de masas.$"

PokemonTower5F_Escena_4_Blaine_Texto_9:
.string "Su valor competitivo es otra historia,\n"
	.string "aún está por ver. Según parece,\l"
	.string "PORYGON2 no es el fin, su potencial\l"
	.string "es aún mayor.$"

PokemonTower5F_Escena_4_Blaine_Texto_10:
.string "Es por ello que te ofrezco, en\n"
	.string "compensación a la retirada de fondos,\l"
	.string "trabajar aquí con nuestro equipo de\l"
	.string "científicos. No solo en la búsqueda de\l"
	.string "una mejor versión de PORYGON, también\l"
	.string "de NIDOK{PAUSE 5}…{PAUSE 5}$"

PokemonTower5F_Escena_4_Blaine_Texto_11:
.string "BLAINE: Sabes que nada superará al\n"
	.string "proyecto original, GIOVANNI. $"
	
	
PokemonTower5F_Escena_4_Blaine_Texto_11_1:
.string "GIOVANNI: Basta con que supere a un\n"
	.string "LEGENDARIO normal y corriente.$"
	

PokemonTower5F_Escena_4_Blaine_Texto_12:
.string "BLAINE: Jah{PAUSE 25}…{PAUSE 25} ¡A 3 más bien!$"

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
.string "BLAINE: ¡¿Nos han perdonado?!\n"
	.string "¡Estamos a su merced! ¡Pueden arrasar\l"
	.string "hoy con esta base si la descubriesen o\l"
	.string "quemar mañana mi laboratorio si\l"
	.string "hicieran una inspección!\l"
	.string "¡Somos prófugos!$"

PokemonTower5F_Escena_4_Blaine_Texto_18:
.string "GIOVANNI: Hacer menos que todo lo que\n"
	.string "esté en nuestra mano por recuperar la\l"
	.string "región sería una pobre manera de\l"
	.string "aprovechar este regalo, BLAINE.$"

PokemonTower5F_Escena_4_Blaine_Texto_19:
.string "BLAINE: {PAUSE 25}…{PAUSE 25}$"

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
.string "{PAUSE 25}…{PAUSE 25} …{PAUSE 25}$"

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
delay_8
walk_slow_down
delay_8
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
applymovement 13, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4.1
applymovement 14, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4.1
applymovement 15, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4.1
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_5 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4
applymovement 13, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4.1
applymovement 14, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4.1
applymovement 15, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4.1
waitmovement 0x0
waitse
delay 10
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
applymovement 14, RocketHideout_4F_Escena_Castigo_Reclutas_Move_6.1
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
delay 5
applymovement 14, RocketHideout_4F_Giovanni_Mision_1_move_1
delay 5
applymovement 15, RocketHideout_4F_Giovanni_Mision_1_move_1
delay 5
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_20 MSGBOX_AUTOCLOSE
applymovement 13, RocketHideout_4F_Escena_Castigo_Reclutas_Move_7
delay 5
applymovement 14, RocketHideout_4F_Escena_Castigo_Reclutas_Move_7
delay 5
applymovement 15, RocketHideout_4F_Escena_Castigo_Reclutas_Move_7
delay 5
waitmovement 0x0
delay 20
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_2
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
removeobject 13
removeobject 14
removeobject 15
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_21 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement 10, RocketHideout_4F_Escena_Castigo_Reclutas_Move_2.1
waitmovement 0x0
delay 10
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
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
setflag FLAG_HIDE_FANCLUB_OLD_LADY
setvar VAR_UNUSED_0x40F7, 59
warpsilent MAP_VIRIDIAN_CITY, 21, 2
release
end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_2.1:
delay_8
face_up
delay_16
delay_8
face_left
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_4.1:
jump_in_place_up
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_6.1:
lock_facing_direction
walk_down
unlock_facing_direction
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_1:
.string "PROTÓN: Los RECLUTAS responsables de\n"
	.string "la misión en PUEBLO LAVANDA se\l"
	.string "presentan, señor.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_2:
.string "GIOVANNI: ¿Y bien?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_2.2:
.string "Y{PAUSE 35}…{PAUSE 35} y bien qué, ¿s{PAUSE 15}-{PAUSE 15}señor?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_3:
.string "GIOVANNI: Creí haber dejado claras\n"
	.string "vuestras funciones en TORRE POKÉMON.\l"
	.string "No os limitásteis a recoger cráneos de\l"
	.string "CUBONE y armar ruido, fuisteis más allá.\l"
	.string "¿Por qué?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_4:
.string "RECLUTAS: Fue un accidente, señor. Solo\n"
	.string "queríamos pasar el rato, la madre de\l"
	.string "CUBONE se lo tomó muy en serio y{PAUSE 25}…{PAUSE 25} se nos\l"
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
.string "RECLUTAS: {PAUSE 25}…{PAUSE 25}…{PAUSE 25}$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_9:
.string "GIOVANNI: Aunque{PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_10:
.string "No somos asesinos, a pesar de que\n"
	.string "vuestras últimas acciones hagan\l"
	.string "parecer lo contrario. Os daré la\l"
	.string "oportunidad de redimiros.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_11:
.string "En compensación al daño causado,\n"
	.string "donaréis el 70% de vuestro sueldo a la\l"
	.string "beneficencia de PUEBLO LAVANDA, el\l"
	.string "TEAM ROCKET por otro lado se encargará\l"
	.string "de cubrir vuestras necesidades\l"
	.string "básicas{PAUSE 25}…{PAUSE 25} mientras cumpláis vuestra\l"
	.string "parte del trato.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_12:
.string "RECLUTA: S{PAUSE 15}-{PAUSE 15}señor{PAUSE 25}…{PAUSE 25}gracias por esta\n"
	.string "segunda oportunidad, le prometo que no\l"
	.string "se arrepentirá de no haber usado a su\l"
	.string "NIDOK{PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_13:
.string "GIOVANNI: Aún no he acabado.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_14:
.string "RECLUTA: {PAUSE 25}…{PAUSE 25}$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_15:
.string "GIOVANNI: Va a construirse un enorme\n"
	.string "CEMENTERIO subterráneo, al sur de\l"
	.string "PUEBLO LAVANDA. FUJI necesitará\l"
	.string "ayuda, y vosotros estaréis allí para\l"
	.string "todo lo que requiera. Además de\l"
	.string "vuestra labor normal como ROCKET, el\l"
	.string "tiempo libre que os quede irá para esa\l"
	.string "causa. ¿Algún inconveniente?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_16:
.string "RECLUTAS: ¡Ninguno, señor!$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_17:
.string "GIOVANNI: Aquí tenéis vuestra\n"
	.string "oportunidad: 1 año de privación\l"
	.string "económica y lúdica, a cambio de limpiar\l"
	.string "vuestra mancha. Os aviso de antemano,\l"
	.string "al mínimo fallo, quedaréis desterrados\l"
	.string "definitivamente{PAUSE 5}…{PAUSE 5}$"

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
	.string "con ignorancia{PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_22:
.string "PROTÓN: Por eso la BASE PROFUNDA está\n"
	.string "solo reservada a unos pocos.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_23:
.string "PROTÓN: {PAUSE 15}Pero{PAUSE 15}…{PAUSE 15}$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_24:
.string "GIOVANNI: ¿Qué ocurre, PROTÓN?$"

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

RocketHideout_4F_Escena_Motoristas::
lock
delay 20
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonTower5F_Escena_4_Blaine_Move_1.1
waitmovement 0x0
special RemoveCameraObject
applymovement 4, RocketHideout_4F_Escena_Motoristas_Move_1
waitmovement 0x0
delay 20
msgbox RocketHideout_4F_Escena_Motoristas_Texto_1.1 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_4F_Escena_Motoristas_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Escena_Motoristas_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Escena_Motoristas_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_7 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 4, RocketHideout_4F_Escena_Motoristas_Move_6
waitmovement 0x0
delay 15
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_8
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_10 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Escena_Motoristas_Texto_11 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Escena_Motoristas_Texto_12 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_4F_Escena_Motoristas_Move_9
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_13 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 4, RocketHideout_4F_Escena_Motoristas_Move_10
waitmovement 0x0
addobject 16
applymovement 16, RocketHideout_4F_Escena_Motoristas_Move_11
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_14 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_4F_Escena_Motoristas_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_8
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_12
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_17 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_8
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_18 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Escena_Motoristas_Texto_19 MSGBOX_AUTOCLOSE
delay 20
setvar VAR_ROUTE105_STATE, 6
setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
setflag FLAG_NUEVA_839
warpsilent MAP_VIAS_TREN2, 65, 11
release
end

RocketHideout_4F_Escena_Motoristas_Move_12:
face_right
step_end

RocketHideout_4F_Escena_Motoristas_Move_11:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_4F_Escena_Motoristas_Move_10:
emote_exclamation_mark
face_down
step_end

RocketHideout_4F_Escena_Motoristas_Move_9:
walk_up
step_end

RocketHideout_4F_Escena_Motoristas_Move_8:
walk_in_place_down
step_end

RocketHideout_4F_Escena_Motoristas_Move_7:
face_up
step_end

RocketHideout_4F_Escena_Motoristas_Move_6:
emote_exclamation_mark
step_end

RocketHideout_4F_Escena_Motoristas_Move_5:
walk_slow_left
step_end

RocketHideout_4F_Escena_Motoristas_Move_4:
face_down
step_end

RocketHideout_4F_Escena_Motoristas_Move_3:
face_left
step_end

RocketHideout_4F_Escena_Motoristas_Move_2:
walk_in_place_up
step_end

RocketHideout_4F_Escena_Motoristas_Move_1:
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_up
step_end

RocketHideout_4F_Escena_Motoristas_Texto_1.1:
.string "GIOVANNI: ¿Y bien?$"

RocketHideout_4F_Escena_Motoristas_Texto_1:
.string "KOGA: Es irreversible, ZONA SAFARI\n"
	.string "cerrará sus puertas en las próximas\l"
	.string "semanas.$"

RocketHideout_4F_Escena_Motoristas_Texto_2:
.string "GIOVANNI: Era de esperar, ahora que las\n"
	.string "fronteras con JOHTO se han abierto,\l"
	.string "todos querrán visitar la región vecina\l"
	.string "y sus exóticos POKÉMON.$"

RocketHideout_4F_Escena_Motoristas_Texto_3:
.string "KOGA: Sin mencionar que más de uno ha\n"
	.string "capturado ya un KANGASKHAN en el\l"
	.string "TÚNEL ROCA, y lo ha hecho público.$"

RocketHideout_4F_Escena_Motoristas_Texto_4:
.string "GIOVANNI: Los nuevos tiempos KOGA,\n"
	.string "muchas cosas van a cambiar, no todas\l"
	.string "para bien.$"

RocketHideout_4F_Escena_Motoristas_Texto_5:
.string "Ni siquiera el TEAM ROCKET escapa a los\n"
	.string "cambios, nos hemos vuelto grandes,\l"
	.string "tanto que nos será imposible contentar\l"
	.string "a todos{PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Escena_Motoristas_Texto_6:
.string "KOGA: ¿Te refieres a{PAUSE 15}…{PAUSE 15}?$"

RocketHideout_4F_Escena_Motoristas_Texto_7:
.string "GIOVANNI: Así es, el cierre de las VÍAS\n"
	.string "SUBTERRÁNEAS.$"

RocketHideout_4F_Escena_Motoristas_Texto_8:
.string "Antaño sirvieron de refugio durante la\n"
	.string "guerra, y más recientemente resultaron\l"
	.string "ser una gran red de tráfico para\l"
	.string "nosotros.$"

RocketHideout_4F_Escena_Motoristas_Texto_9:
.string "Gracias a ellas obtuvimos enormes\n"
	.string "ingresos de los productos importados\l"
	.string "por mar desde nuestra base de ISLAS\l"
	.string "SETE, algo que fue optimizado vía\l"
	.string "teletransporte gracias a la patente de\l"
	.string "BILL.$"

RocketHideout_4F_Escena_Motoristas_Texto_10:
.string "Ahora, con la unión de KANTO y JOHTO, no\n"
	.string "son más que un lastre para el comercio\l"
	.string "entre regiones, ya he recibido\l"
	.string "presiones desde TORRE RADIO y el\l"
	.string "MAGNETOTREN para que sean cerradas, y\l"
	.string "así se hará.$"

RocketHideout_4F_Escena_Motoristas_Texto_11:
.string "KOGA: {PAUSE 15}Pero{PAUSE 15}…{PAUSE 15}$"

RocketHideout_4F_Escena_Motoristas_Texto_12:
.string "GIOVANNI: El TEAM ROCKET se ha hecho\n"
	.string "grande. En su día nos fue de gran ayuda\l"
	.string "para mantenernos a flote, pero hoy\l"
	.string "podemos prescindir de ellas.$"

RocketHideout_4F_Escena_Motoristas_Texto_13:
.string "KOGA: ¿Qué hay de los MOTORISTAS? Su\n"
	.string "rol principal era el de vender los\l"
	.string "productos importados, las vías eran\l"
	.string "como su segunda cas{PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Escena_Motoristas_Texto_14:
.string "PETREL: ¿Me ha llamado, JEFE?$"

RocketHideout_4F_Escena_Motoristas_Texto_15:
.string "GIOVANNI: Así es, ambos habéis sido el\n"
	.string "enlace entre el TEAM ROCKET y los\l"
	.string "MOTORISTAS.$"

RocketHideout_4F_Escena_Motoristas_Texto_16:
.string "Por ello, os pido que les comuniquéis la\n"
	.string "dura decisión del cierre de las vías.\l"
	.string "Prescindimos de sus servicios, pero el\l"
	.string "TEAM ROCKET no olvida.$"

RocketHideout_4F_Escena_Motoristas_Texto_17:
.string "A pesar de haber quedado obsoletos en\n"
	.string "la KANTO actual, todo MOTORISTA que\l"
	.string "desee convertirse en miembro del TEAM\l"
	.string "ROCKET y trabajar en nuestras\l"
	.string "distintas bases y sucursales, será más\l"
	.string "que bienvenido.$"

RocketHideout_4F_Escena_Motoristas_Texto_18:
.string "Con ello zanjamos este tema. KOGA,\n"
	.string "PETREL{PAUSE 25}…{PAUSE 25} eso es todo.$"

RocketHideout_4F_Escena_Motoristas_Texto_19:
.string "PETREL: {PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

RocketHideout_4F_Dialogo_Proton::
lock
faceplayer
msgbox RocketHideout_4F_Dialogo_Proton_Texto_1 MSGBOX_NPC
msgbox RocketHideout_4F_Dialogo_Proton_Texto_2 MSGBOX_NPC
release
end

RocketHideout_4F_Dialogo_Proton_Texto_2:
.string "Yo, aunque sigo siendo EJECUTIVO, soy\n"
	.string "el de mayor confianza para GIOVANNI.\l"
	.string "Por otro lado, ADMIN únicamente están\l"
	.string "PETREL y ATLAS, este último siendo\l"
	.string "ADMIN.JEFE, ya que dentro de nuestra\l"
	.string "sucursal en ISLAS SETE es la máxima\l"
	.string "autoridad.$"

RocketHideout_4F_Dialogo_Proton_Texto_1:
.string "Los distintos rangos de esta\n"
	.string "organización son, de menos a más:\l"
	.string "RECLUTA, RECLUTA ALTO RANGO,\l"
	.string "EJECUTIVO, ADMINISTRADOR,\l"
	.string "ADMINISTRADOR JEFE, LÍDER.$"



