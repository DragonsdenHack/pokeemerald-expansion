FiveIsland_MapScripts::
	.byte 0

FiveIsland1::
lock     
faceplayer     
msgbox FiveIsland_Text_1, MSGBOX_DEFAULT
release     
end

FiveIsland_Text_1:
.string "Como recluta ROCKET que eres,\n"
.string "deberías de saber que QWILFISH y\l"
.string "TENTACOOL son dos POKÉMON tipo\l"
.string "AGUA/VENENO que pueden venirte muy\l"
.string "bien a la vez que darían el pego\l"
.string "con el perfil de la organización,\l"
.string "aprovecha estas aguas para\l"
.string "atraparlos.$"



FiveIsland2::
lock     
faceplayer     
msgbox FiveIsland_Text_2, MSGBOX_DEFAULT
release     
end

FiveIsland_Text_2:
.string "La nueva cónsul de ISLA INTA no me\n"
.string "gusta nada, ha colocado su casa en\l"
.string "medio de la ZONA RECREO, antes\l"
.string "podíamos jugar allí tranquilamente\l"
.string "pero desde su llegada está\l"
.string "prohibido.$"



FiveIsland3::
lock     
faceplayer     
msgbox FiveIsland_Text_3, MSGBOX_DEFAULT
release     
end

FiveIsland_Text_3:
.string "Esta isla es tenida como un puente\n"
.string "de unión, transitorio entre lo\l"
.string "viejo y lo nuevo, quizás algún día\l"
.string "descubras la razón.$"


FiveIsland4::
lock     
faceplayer     
msgbox FiveIsland_Text_4, MSGBOX_DEFAULT
release     
end

FiveIsland_Text_4:
.string "Ya hacemos suficiente cumpliendo\n"
.string "el contrato que ATLAS nos hizo\l"
.string "firmar para embarcar hacia KANTO\l"
.string "a determinados ROCKETS de forma\l"
.string "puntual.\l"
.string "¡No quiero verte intentar nada\l"
.string "raro fuera de vuestros horarios\l"
.string "asignados!$"



FiveIslandDocumento_100::
msgbox FiveIslandDocumento_Text_100, MSGBOX_SIGN   
end

FiveIslandDocumento_Text_100:
.string "ISLA INTA\n"
	.string "La isla del tiempo: Donde pasa el\l"
	.string "tiempo.$"
