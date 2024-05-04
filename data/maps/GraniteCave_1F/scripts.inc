GraniteCave_1F_MapScripts::
	.byte 0

GraniteCave_1F_EventScript_Hiker::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM05, GraniteCave_1F_EventScript_ReceivedFlash
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
	giveitem ITEM_HM05
	setflag FLAG_RECEIVED_HM05
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
	release
	end

GraniteCave_1F_EventScript_ReceivedFlash::
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
	release
	end

GraniteCave_1F_Text_GetsDarkAheadHereYouGo:
	.string "Hey, you.\n"
	.string "It gets awfully dark ahead.\l"
	.string "It'll be tough trying to explore.\p"
	.string "That guy who came by earlier…\n"
	.string "STEVEN, I think it was.\p"
	.string "He knew how to use FLASH, so he ought\n"
	.string "to be all right, but…\p"
	.string "Well, for us HIKERS, helping out those\n"
	.string "that we meet is our motto.\p"
	.string "Here you go, I'll pass this on to you.$"

GraniteCave_1F_Text_ExplainFlash:
	.string "Teach that hidden move FLASH to\n"
	.string "a POKéMON and use it.\p"
	.string "It lights up even the inky darkness\n"
	.string "of caves.\p"
	.string "But, to use it, you need the GYM BADGE\n"
	.string "from DEWFORD's POKéMON GYM.$"

GraniteCave_Llamada_Giovanni::
lock
msgbox GraniteCave_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
msgbox GraniteCave_Llamada_Giovanni_Texto_2 MSGBOX_AUTOCLOSE
msgbox GraniteCave_Llamada_Giovanni_Texto_3 MSGBOX_AUTOCLOSE
msgbox GraniteCave_Llamada_Giovanni_Texto_4 MSGBOX_AUTOCLOSE
msgbox GraniteCave_Llamada_Giovanni_Texto_5 MSGBOX_AUTOCLOSE
msgbox GraniteCave_Llamada_Giovanni_Texto_6 MSGBOX_AUTOCLOSE
msgbox GraniteCave_Llamada_Giovanni_Texto_7 MSGBOX_AUTOCLOSE
msgbox GraniteCave_Llamada_Giovanni_Texto_8 MSGBOX_AUTOCLOSE
msgbox GraniteCave_Llamada_Giovanni_Texto_9 MSGBOX_AUTOCLOSE
msgbox GraniteCave_Llamada_Giovanni_Texto_10 MSGBOX_AUTOCLOSE
release
end

GraniteCave_Llamada_Giovanni_Texto_1:
	.string "GIOVANNI: {PLAYER}. Así que has\n"
	.string "descubierto algo.$"

GraniteCave_Llamada_Giovanni_Texto_2:
	.string "{PAUSE 5}…{PAUSE 5}$"

GraniteCave_Llamada_Giovanni_Texto_3:
	.string "Entonces sí que estaban operando en\n"
	.string "CUEVA GRANITO, cuéntame en detalle,\l"
	.string "{PLAYER}.$"

GraniteCave_Llamada_Giovanni_Texto_4:
	.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

GraniteCave_Llamada_Giovanni_Texto_5:
	.string "Malditos… Creen que pueden reírse así\n"
	.string "de nosotros, tirando un par de medias\l"
	.string "verdades y hacernos creer que no\l"
	.string "ocultan nada más.$"

GraniteCave_Llamada_Giovanni_Texto_6:
	.string "Lo que has visto en esa NAO ABANDONADA\n"
	.string "solo refuerza nuestras sospechas: van\l"
	.string "tras algo grande. Ese ESCÁNER, para qué\l"
	.string "lo querrán{PAUSE 5}…{PAUSE 5}$"

GraniteCave_Llamada_Giovanni_Texto_7:
	.string "Escucha {PLAYER}. Olvídate de DEVON\n"
	.string "por el momento, tal como están las\l"
	.string "cosas no podemos sacar nada de ellos.\l"
	.string "Está claro que conocen HOENN mejor que\l"
	.string "nosotros.$"

GraniteCave_Llamada_Giovanni_Texto_8:
	.string "Nosotros también avanzamos en\n"
	.string "nuestros propios proyectos, y es por\l"
	.string "ello que quiero que viajes a CIUDAD\l"
	.string "ALGARIA.$"

GraniteCave_Llamada_Giovanni_Texto_9:
	.string "Ahora que tienes acceso a buceo,\n"
	.string "podrás explorar en detalle los mares de\l"
	.string "JOHTO, y encontrar a KYOGRE para\l"
	.string "analizar sus datos.$"

GraniteCave_Llamada_Giovanni_Texto_10:
	.string "Así, ganaremos tiempo mientras\n"
	.string "avanzamos por otro lado. Nada más\l"
	.string "{PLAYER}. estamos en contacto.$"

