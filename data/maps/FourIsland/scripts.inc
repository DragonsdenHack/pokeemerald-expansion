FourIsland_MapScripts::
	.byte 0

FourIsland1::
end


FourIsland2::
lock     
faceplayer     
msgbox FourIsland_Text_2, MSGBOX_DEFAULT
release     
end

FourIsland_Text_2:
.string "LORELEI ha vuelto.\p"
.string "Creo que el LAPRAS que tiene,\n"
.string "es el mismo que atrapó de pequeña.\p"
.string "Yo creo que se hizo con él\n"
.string "en la CUEVA GLACIADA…\p"
.string "Me parece que lo tiene desde\n"
.string "entonces.$"


FourIsland3::
end


FourIsland4::
lock     
faceplayer     
msgbox FourIsland_Text_4, MSGBOX_DEFAULT
release     
end

FourIsland_Text_4:
.string "¡Uyyy, qué fresquito!\p"
.string "Me he hecho un granizado con\n"
.string "hielo de la CUEVA GLACIADA.\p"
.string "¡Está fresquito y riquísimo!$"


FourIsland5::
lock     
faceplayer     
msgbox FourIsland_Text_5, MSGBOX_DEFAULT
release     
end

FourIsland_Text_5:
.string "¡Me has encontrado!\n"
.string "¡No se lo digas a LORELEI!\p"
.string "¿Sabías que LORELEI tiene un\n"
.string "montón de muñecos de peluche?\p"
.string "¡Cada vez que vuelve a ISLA\n"
.string "QUARTA, aumenta la colección!$"

FourIsland6::
end

FourIsland7::
end



FourIslandDocumento_100::
msgbox FourIslandDocumento_Text_100, MSGBOX_SIGN   
end

FourIslandDocumento_Text_100:
.string "ISLA CUARTA\n"
	.string "El cálido y azul témpano flotante.$"



FourIslandDocumento_101::
msgbox FourIslandDocumento_Text_101, MSGBOX_SIGN   
end

FourIslandDocumento_Text_101:
.string "Casa de LORELEI$"

FourIsland_Encuentro_Zeus::
msgbox FourIsland_Encuentro_Zeus_Texto_1 MSGBOX_AUTOCLOSE
msgbox FourIsland_Encuentro_Zeus_Texto_2 MSGBOX_AUTOCLOSE
msgbox FourIsland_Encuentro_Zeus_Texto_3 MSGBOX_AUTOCLOSE
msgbox FourIsland_Encuentro_Zeus_Texto_4 MSGBOX_AUTOCLOSE
msgbox FourIsland_Encuentro_Zeus_Texto_5 MSGBOX_AUTOCLOSE
msgbox FourIsland_Encuentro_Zeus_Texto_6 MSGBOX_AUTOCLOSE
msgbox FourIsland_Encuentro_Zeus_Texto_7 MSGBOX_AUTOCLOSE
msgbox FourIsland_Encuentro_Zeus_Texto_8 MSGBOX_AUTOCLOSE
msgbox FourIsland_Encuentro_Zeus_Texto_9 MSGBOX_AUTOCLOSE
release
end

FourIsland_Encuentro_Zeus_Texto_1:
.string "????: Maldición, dónde las habrá\n"
	.string "guardado...$"

FourIsland_Encuentro_Zeus_Texto_2:
.string "No pareces ser de por aquí,\n"
	.string "tampoco pareces ser un entrenador\l"
	.string "normal y corriente, pero qué\l"
	.string "importa eso, todos los\l"
	.string "entrenadores junto a sus POKÉMON\l"
	.string "son iguales ante el creador de\l"
	.string "todo.$"

FourIsland_Encuentro_Zeus_Texto_3:
.string "Voy tras la pista de dos\n"
	.string "peligrosos delincuentes, alguien\l"
	.string "muy sabio confinó en estas islas a\l"
	.string "dos POKÉMON ANCESTRALES hace\l"
	.string "cientos de años, dos POKÉMON de un\l"
	.string "poder capaz de hacer temblar al\l"
	.string "mundo y modificar sus condiciones\l"
	.string "climáticas.$"

FourIsland_Encuentro_Zeus_Texto_4:
.string "Estos dos POKÉMON duermen en algún\n"
	.string "lugar, sellado y alejado de la\l"
	.string "civilización, pero dentro del\l"
	.string "territorio de las ISLAS SETE, eso\l"
	.string "es seguro.$"

FourIsland_Encuentro_Zeus_Texto_5:
.string "Vine hasta aquí por la leyenda que\n"
	.string "había acerca de esta cueva de un\l"
	.string "poderoso POKÉMON del tipo HIELO y\l"
	.string "AGUA, pero lo máximo que he podido\l"
	.string "encontrar son LAPRAS salvajes, no\l"
	.string "parece que haya nada interesante\l"
	.string "aquí.$"

FourIsland_Encuentro_Zeus_Texto_6:
.string "Mi próximo destino es la CUEVA\n"
	.string "CAMBIANTE, al norte de ISLA EXTA,\l"
	.string "allí hay unas enormes pisadas que\l"
	.string "coinciden con las de uno de los\l"
	.string "dos POKÉMON ANCESTRALES.$"

FourIsland_Encuentro_Zeus_Texto_7:
.string "Debo encontrar a esos POKÉMON\n"
	.string "antes de que esos fanáticos lo\l"
	.string "hagan, ahora que saben como\l"
	.string "despertarlos, no puedo permitir\l"
	.string "que eso ocurra.$"

FourIsland_Encuentro_Zeus_Texto_8:
.string "...$"

FourIsland_Encuentro_Zeus_Texto_9:
.string "Si ves algo fuera de lo normal,\n"
	.string "avísame de inmediato, estaré\l"
	.string "investigando en la CUEVA\l"
	.string "CAMBIANTE, hasta la vista,\l"
	.string "-ENTRENADOR-.$"

FourIsland_Encuentro_Zeus_Move_1:
face_right
step_end

FourIsland_Encuentro_Zeus_Move_2:
emote_exclamation_mark
step_end

FourIsland_Encuentro_Zeus_Move_3:
walk_left
walk_left
walk_left
step_end

FourIsland_Encuentro_Zeus_Move_4:
face_up
step_end

FourIsland_Encuentro_Zeus_Move_5:
face_left
step_end

FourIsland_Encuentro_Zeus_Move_6:
walk_in_place_left
step_end
