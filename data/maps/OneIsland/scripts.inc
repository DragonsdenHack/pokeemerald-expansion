OneIsland_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, OneIsland_OnTransition
	.byte 0

OneIsland_OnTransition::
setflag FLAG_VISITED_ONE_ISLAND
end

OneIsland1::
lock     
faceplayer     
msgbox OneIsland_Text_1, MSGBOX_DEFAULT
release     
end

OneIsland_Text_1:
.string "¿Cómo?\n"
.string "¿KANTO?\l"
.string "¡Esto es isla prima chico!\l"
.string "¡Te has equivocado de destino!\l"
.string "¡No te preocupes, justo iba para\l"
.string "KANTO!\l"
.string "¡Tienes suerte de que pueda\l"
.string "llevarte!$"


OneIsland2::
lock     
faceplayer     
msgbox OneIsland_Text_2, MSGBOX_DEFAULT
release     
end

OneIsland_Text_2:
.string "La verdad es que esta isla está\n"
.string "plantada en medio de la nada,\l"
.string "pero bueno...\p"
.string "Menos mal que tenemos a un\n"
.string "chicarrón hecho y derecho como\l"
.string "CELIO.\p"
.string "Mi nieta estaba un poco nerviosa\n"
.string "con la llegada del amigo de CELIO.\p"
.string "¿Será un POKéMANÍACO?\p"
.string "En fin..., yo lo que sé es que\n"
.string "estamos encantados con CELIO.$"


OneIsland3::
lock     
faceplayer     
msgbox OneIsland_Text_3, MSGBOX_DEFAULT
release     
end

OneIsland_Text_3:
.string "¿Qué? ¿Disfrutando del paisaje?\n"
.string "El tiempo es fabuloso, ¿eh?$"



OneIslandDocumento_100::
msgbox OneIslandDocumento_Text_100, MSGBOX_SIGN   
end

OneIslandDocumento_Text_100:
.string "¡Expandiendo el mundo POKÉMON!$"



OneIslandDocumento_101::
msgbox OneIslandDocumento_Text_101, MSGBOX_SIGN   
end

OneIslandDocumento_Text_101:
.string "ISLA PRIMA\n"
	.string "Donde los amigos se reunen.$"
