PewterCity_Musem_2F_MapScripts::
	.byte 0

PewterMuseum2F_1::
lock     
faceplayer     
msgbox PewterCity_Museum_Text_1, MSGBOX_DEFAULT
release     
end

PewterCity_Museum_Text_1:
.string "¡Quiero un PIKACHU!\n"
.string "¡Es tan mono!\l"
.string "¡Le diré a mi padre que me atrape\l"
.string "uno!$"



PewterMuseum2F_2::
lock     
faceplayer     
msgbox PewterCity_Museum_Text_2, MSGBOX_DEFAULT
release     
end

PewterCity_Museum_Text_2:
.string "¡Si hija, te prometo que tendrás\n"
.string "un PIKACHU!$"



PewterMuseum2F_3::
end



PewterMuseum2F_4::
lock     
faceplayer     
msgbox PewterCity_Museum_Text_4, MSGBOX_DEFAULT
release     
end

PewterCity_Museum_Text_4:
.string "Esa PIEDRA LUNAR está\n"
.string "sobrevalorada, si se ve igual que\l"
.string "una vulgar roca.$"



PewterMuseum2F_5::
lock     
faceplayer     
msgbox PewterCity_Museum_Text_5, MSGBOX_DEFAULT
release     
end

PewterCity_Museum_Text_5:
.string "Este mes daremos una exhibición\n"
.string "espacial, a la que tú, por\l"
.string "supuesto, no estás invitado.$"


PewterMuseum2FDocumento_100::
msgbox PewterMuseum2FDocumento_Text_100, MSGBOX_SIGN   
end

PewterMuseum2FDocumento_Text_100:
.string "NAVE ESPACIAL$"



PewterMuseum2FDocumento_101::
msgbox PewterMuseum2FDocumento_Text_101, MSGBOX_SIGN   
end

PewterMuseum2FDocumento_Text_101:
.string "Un meteorito que cayó al MT.MOON.\n"
	.string "Se trata de una PIEDRA LUNAR.$"

PewterCity_Musem_2F_Secundaria_Azafran::
lock
faceplayer
compare VAR_ROUTE133_STATE, 2
goto_if_eq PewterCity_Musem_2F_Secundaria_Azafran_3
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_ROUTE133_STATE, 1
goto_if_eq PewterCity_Musem_2F_Secundaria_Azafran_2
release
end

PewterCity_Musem_2F_Secundaria_Azafran_2::
delay 20
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_3 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 3, PewterCity_Musem_2F_Secundaria_Azafran_move_1
waitmovement 0x0
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_4 MSGBOX_AUTOCLOSE
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_5 MSGBOX_AUTOCLOSE
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq PewterCity_Musem_2F_Secundaria_Azafran_No
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_7 MSGBOX_AUTOCLOSE
release
end


PewterCity_Musem_2F_Secundaria_Azafran_No::
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ISABELLE, PewterCity_Musem_2F_Secundaria_Azafran_Texto_9
delay 15
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_10 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_3 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 3, PewterCity_Musem_2F_Secundaria_Azafran_move_1
waitmovement 0x0
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_11 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE133_STATE, 2
release
end




PewterCity_Musem_2F_Secundaria_Azafran_3::
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_2 MSGBOX_AUTOCLOSE
release
end















PewterCity_Musem_2F_Secundaria_Azafran_move_1:
emote_exclamation_mark
step_end

PewterCity_Musem_2F_Secundaria_Azafran_Texto_1:
.string "20 de Julio de 1969.\n"
	.string "¡Primer alunizaje!\l"
	.string "¡Compré una televisión en color\l"
	.string "solo para presenciar ese\l"
	.string "acontecimiento!$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_2:
.string "Tenlo en cuenta ROCKET, solo has\n"
	.string "logrado retrasar la fecha en la\l"
	.string "que esos subterráneos se cerrarán,\l"
	.string "dentro de 3 años no quedará ni\l"
	.string "rastro de ellos.$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_3:
.string "…\n"
	.string "{PAUSE 5}…{PAUSE 5}$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_4:
.string "¿Vienes en nombre de los\n"
	.string "MOTORISTAS para decirme que no\l"
	.string "toque vuestras VÍAS SUBTERRÁNEAS?$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_5:
.string "Que quede una cosa bien clara\n"
	.string "chico, yo provengo de JOHTO, y\l"
	.string "vuestras guerras internas, si eres\l"
	.string "o no del TEAM ROCKET, o MOTORISTA,\l"
	.string "me dan exactamente igual, son solo\l"
	.string "negocios, lo único de lo que esos\l"
	.string "MOTORISTAS tienen miedo es de que\l"
	.string "se les acabe el mercado negro que\l"
	.string "tienen ahí montado en esos\l"
	.string "subterráneos, pero eso a mi no me\l"
	.string "importa.$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_6:
.string "Pareces alguien razonable e\n"
	.string "importante dentro de ese TEAM\l"
	.string "ROCKET, no tienes porqué ayudar a\l"
	.string "esos MOTORISTAS, y tus intereses\l"
	.string "no tienen porqué confrontarse con\l"
	.string "los míos.\l"
	.string "¿Qué opinas?$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_7:
.string "¡A eso me refería yo!\n"
	.string "¡Puede que hasta acabemos haciendo\l"
	.string "negocios chico!$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_8:
.string "Una pena que esto tenga que\n"
	.string "terminar así, en fin, mis POKÉMON\l"
	.string "y yo nos encargaremos de darte una\l"
	.string "lección.$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_9:
.string "¿La luz de mi AMPHAROS se apagó?$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_10:
.string "No sabía que en KANTO hubiera\n"
	.string "gente tan fuerte aparte de los\l"
	.string "LÍDERES DE GIMNASIO, esta región\l"
	.string "guarda más sorpresas de las que{PAUSE 5}…{PAUSE 5}$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_11:
.string "¿¡Qué!?\n"
	.string "¿Trabajas para GIOVANNI de forma\l"
	.string "directa y ostentas uno de los\l"
	.string "cargos más importantes dentro del\l"
	.string "TEAM ROCKET?\l"
	.string "¿Y si no detengo mis intenciones\l"
	.string "de quitar esos túneles informarás\l"
	.string "a GIOVANNI de esto?$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_12:
.string "Bien, bien.\n"
	.string "Calma chico, me parece que ha\l"
	.string "habido un malentendido, el proceso\l"
	.string "de construcción de las vías de\l"
	.string "tren llevará aún un par de años\l"
	.string "más, esos túneles no me importan\l"
	.string "por ahora, pueden seguir 1, 2 o 3\l"
	.string "años más, ya habrá tiempo de\l"
	.string "preocuparse por ellos.\l"
	.string "¿No crees?$"
