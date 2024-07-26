UndergroundPath_5F_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, UndergroundPath_5F_OnResume
	.byte 0

UndergroundPath_5F_OnResume:
	call UndergroundPath_5F_SetupEscapeWarp
	end

UndergroundPath_5F_SetupEscapeWarp::
	setescapewarp MAP_ROUTE8, 13, 5
	return

UndergroundPath_5F_Policias::
lock
faceplayer
msgbox UndergroundPath_5F_Policias_Texto_1 MSGBOX_NPC
release
end

UndergroundPath_5F_Policias_Texto_1:
.string "Solo podemos pasar de uno en uno, y en\n"
	.string "cuanto salimos al otro lado hay varios\l"
	.string "MOTORISTAS protegiendo el acceso.\l"
	.string "Solo un gran ENTRENADOR como usted\l"
	.string "puede abrirse paso por los refugios.$"


UndergroundPath_5F_Activador_Entrada::
compare VAR_ROUTE105_STATE, 6
goto_if_gt UndergroundPath_5F_Activador_Entrada_Pasa
release
end

UndergroundPath_5F_Activador_Entrada_Pasa::
delay 15
msgbox CuevaTesoro_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_5F_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
warp MAP_UNDERGROUND_PATH_7F, 40, 2
release
end

UndergroundPath_5F_Entrada_Pasa_Text_YesNo:
.string "La entrada a los refugios parece ser\n"
	.string "por aquí. ¿Quieres pasar?$"

UndergroundPath_5F_Emboscada::
lock
msgbox UndergroundPath_5F_Emboscada_Texto_1 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_2 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_3 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_4 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_5 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_6 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_7 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_8 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_9 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_10 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_11 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_12 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_13 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_14 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_15 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_16 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_17 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_18 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_19 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_20 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_21 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_22 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_23 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_24 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_25 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_26 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_27 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_28 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_29 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_30 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_31 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_32 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_33 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_34 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_5F_Emboscada_Texto_35 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_300
release
end

UndergroundPath_5F_Emboscada_Texto_1:
	.string "Ese nuevo PORYGON del CASINO es una\n"
	.string "estafa. Nadie puede permitírselo, ¡y\l"
	.string "además los rumores dicen que es un\l"
	.string "debilucho!$"

UndergroundPath_5F_Emboscada_Texto_2:
	.string "Ya os lo dije, lo mejor que podéis hacer\n"
	.string "es ahorrar para un DRATINI y tener\l"
	.string "paciencia.$"

UndergroundPath_5F_Emboscada_Texto_3:
	.string "Un momento…$"

UndergroundPath_5F_Emboscada_Texto_4:
	.string "¿Alguien del TEAM ROCKET aquí? ¿Qué\n"
	.string "tramas?$"

UndergroundPath_5F_Emboscada_Texto_5:
	.string "Luces diferente a los otros, ¿no\n"
	.string "serás...?$"

UndergroundPath_5F_Emboscada_Texto_6:
	.string "Debe ser algún alto cargo, ¿sabéis cómo\n"
	.string "nos recompensaría LANCE por\l"
	.string "atraparlo?$"

UndergroundPath_5F_Emboscada_Texto_7:
	.string "¡Podrías comprarte ese PORYGON, el\n"
	.string "DRATINI y un SCYTHER!$"

UndergroundPath_5F_Emboscada_Texto_8:
	.string "¡Sí, sí!$"

UndergroundPath_5F_Emboscada_Texto_9:
	.string "Además... Le estamos haciendo un favor\n"
	.string "a la región.$"

UndergroundPath_5F_Emboscada_Texto_10:
	.string "Tus días de libertad han terminado.\n"
	.string "¡Espero que te haya valido la pena!$"

UndergroundPath_5F_Emboscada_Texto_11:
	.string "¿Te resistes?$"

UndergroundPath_5F_Emboscada_Texto_12:
	.string "Jo, jo, jo...entonces... parece que cuidas\n"
	.string "bien de tus POKÉMON.$"

UndergroundPath_5F_Emboscada_Texto_13:
	.string "Me quedaré con un par de ellos antes de\n"
	.string "entregarte a la justicia, ¡nadie notará\l"
	.string "su ausencia!$"

UndergroundPath_5F_Emboscada_Texto_14:
	.string "¡Ríndete ya!$"

UndergroundPath_5F_Emboscada_Texto_15:
	.string "¡Maldito! ¡Debe ser un pez gordo! ¡Si lo\n"
	.string "llevamos al CG de la LIGA POKÉMON\l"
	.string "seremos ricos!$"

UndergroundPath_5F_Emboscada_Texto_16:
	.string "Tranquilos, yo podré con él. Está\n"
	.string "cansado.$"

UndergroundPath_5F_Emboscada_Texto_17:
	.string "Es imposible que este infeliz, con los\n"
	.string "recursos que tiene a su disposición,\l"
	.string "pueda con mi colección.$"

UndergroundPath_5F_Emboscada_Texto_18:
	.string "¡Ve haciendo las maletas, partimos a\n"
	.string "MESETA AÑIL!$"

UndergroundPath_5F_Emboscada_Texto_19:
	.string "¿Quién te crees que eres?$"

UndergroundPath_5F_Emboscada_Texto_20:
	.string "Maldición… con un DRAGONAIR te hubiera\n"
	.string "ganado, si no fuera tan difícil criarlo…$"

UndergroundPath_5F_Emboscada_Texto_21:
	.string "Grrr... No saldrás libre de aquí... Llamaré\n"
	.string "a un colega de la MANSIÓN AZULONA, y\l"
	.string "llegará antes de que puedas…$"

UndergroundPath_5F_Emboscada_Texto_22:
	.string "Ya basta.$"

UndergroundPath_5F_Emboscada_Texto_23:
	.string "¡L-los motoristas!$"

UndergroundPath_5F_Emboscada_Texto_24:
	.string "TETSUO: Largo de aquí, antes de que\n"
	.string "cambie de parecer.$"

UndergroundPath_5F_Emboscada_Texto_25:
	.string "… …$"

UndergroundPath_5F_Emboscada_Texto_26:
	.string "Sé lo que debes estar pensado.\n"
	.string "Pero no debes juzgarles.$"

UndergroundPath_5F_Emboscada_Texto_27:
	.string "Toda KANTO tiene aún fresca en la\n"
	.string "memoria el gran poder del que LANCE hizo\l"
	.string "gala.$"

UndergroundPath_5F_Emboscada_Texto_28:
	.string "Ese poder caló hondo, dejó el espíritu\n"
	.string "de la región hecho pedazos y, con ello,\l"
	.string "LANCE le dio la forma que más le\l"
	.string "convenía.$"

UndergroundPath_5F_Emboscada_Texto_29:
	.string "Ahora no son más que marionetas bajo\n"
	.string "sus órdenes. Y lo entiendo.$"

UndergroundPath_5F_Emboscada_Texto_30:
	.string "Después de todo, la gran mayoría no\n"
	.string "está hecha para estar con el agua al\l"
	.string "cuello.$"

UndergroundPath_5F_Emboscada_Texto_31:
	.string "Pero... No tú, ¿verdad, {PLAYER}?$"

UndergroundPath_5F_Emboscada_Texto_32:
	.string "Pareces el tipo de persona capaz de\n"
	.string "mirar a los ojos a un poder que le\l"
	.string "sobrepasa.$"

UndergroundPath_5F_Emboscada_Texto_33:
	.string "Aunque LANCE y su gobierno pudieran\n"
	.string "reducir a cenizas los últimos vestigios\l"
	.string "de la vieja KANTO…$"

UndergroundPath_5F_Emboscada_Texto_34:
	.string "...ningún precio es demasiado alto para\n"
	.string "pagar por el privilegio de ser dueño de\l"
	.string "ti mismo.$"

UndergroundPath_5F_Emboscada_Texto_35:
	.string "El solo hecho de contar con esa\n"
	.string "oportunidad ya hace que el intento\l"
	.string "valga la pena. No lo olvides, {PLAYER}.$"

