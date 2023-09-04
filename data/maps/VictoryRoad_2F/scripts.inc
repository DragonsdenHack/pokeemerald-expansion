VictoryRoad_2F_MapScripts::
	.byte 0

VictoryRoad2F_1::
end



VictoryRoad2F_2::
end



VictoryRoad2F_3::
end



VictoryRoad2F_4::
end



VictoryRoad2F_5::
end



VictoryRoad2F_6::
end



VictoryRoad2F_7::
end



VictoryRoad2F_10::
end



VictoryRoad2F_11::
end



VictoryRoad2F_13::
end



VictoryRoad2F_EventScript_Necio::
	trainerbattle_single TRAINER_SANTIAGO, VictoryRoad2F_Text_NecioIntro, VictoryRoad2F_Text_NecioDefeated
	msgbox VictoryRoad2F_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



VictoryRoad2F_EventScript_Karateka::
	trainerbattle_single TRAINER_JAYLEN, VictoryRoad2F_Text_KaratekaIntro, VictoryRoad2F_Text_KaratekaDefeated
	msgbox VictoryRoad2F_Text_KaratekaPostBattle, MSGBOX_AUTOCLOSE
	end



VictoryRoad2F_EventScript_Chico::
	trainerbattle_single TRAINER_ANNA_AND_MEG_2, VictoryRoad2F_Text_ChicoIntro, VictoryRoad2F_Text_ChicoDefeated
	msgbox VictoryRoad2F_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



VictoryRoad2F_EventScript_Chico2::
	trainerbattle_single TRAINER_ANNA_AND_MEG_5, VictoryRoad2F_Text_Chico2Intro, VictoryRoad2F_Text_Chico2Defeated
	msgbox VictoryRoad2F_Text_Chico2PostBattle, MSGBOX_AUTOCLOSE
	end



VictoryRoad2F_EventScript_Domador::
	trainerbattle_single TRAINER_VICTORIA, VictoryRoad2F_Text_DomadorIntro, VictoryRoad2F_Text_DomadorDefeated
	msgbox VictoryRoad2F_Text_DomadorPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_2F_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE115_STATE, 0
goto_if_gt VictoryRoad_2F_Entrenador_Especial_2
msgbox VictoryRoad_2F_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
msgbox VictoryRoad_2F_Entrenador_Especial_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq VictoryRoad_2F_Entrenador_Especial_2_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox VictoryRoad_2F_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_JACOB, VictoryRoad_2F_Entrenador_Especial_Texto_5
msgbox VictoryRoad_2F_Entrenador_Especial_Texto_6 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_LIFE_ORB
msgbox VictoryRoad_2F_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
setvar VAR_ROUTE115_STATE, 1
release
end

VictoryRoad_2F_Entrenador_Especial_Texto_1.1:
.string "¡Obtuviste VIDASFERA de manos de\n"
	.string "ENTRENADOR GUAY!$"

VictoryRoad_2F_Entrenador_Especial_2_No::
msgbox VictoryRoad_2F_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
release
end

VictoryRoad_2F_Entrenador_Especial_2::
msgbox VictoryRoad_2F_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end

VictoryRoad_2F_Entrenador_Especial_Texto_1:
.string "Los movimientos de daño de\n"
	.string "retroceso tienen una potencia casi\l"
	.string "incomparable, pero como su propia\l"
	.string "versión del TIPO NORMAL\l"
	.string "indica, son un arma de DOBLE-FILO,\l"
	.string "que usada con sabiduría es una\l"
	.string "gran herramienta ofensiva. Estaría\l"
	.string "encantado de enseñarte DOBLE-FILO\l"
	.string "de no ser porque ya se lo he\l"
	.string "enseñado a un chico antes, sin\l"
	.string "embargo, puedo ofrecerte algo\l"
	.string "incluso mejor, pero si voy a\l"
	.string "dártelo, debes de probar que lo\l"
	.string "mereces, no es un objeto para\l"
	.string "cualquiera.$"

VictoryRoad_2F_Entrenador_Especial_Texto_2:
.string "Entonces, ¿aceptas el reto?$"

VictoryRoad_2F_Entrenador_Especial_Texto_3:
.string "La VIDASFERA va un paso más allá\n"
	.string "de los movimientos de retroceso,\l"
	.string "este objeto aumenta en un 30% la\l"
	.string "potencia de todos tus movimientos\l"
	.string "ofensivos, sin embargo de restará\l"
	.string "un 10% de salud a cada turno que\l"
	.string "los emplees, usado sabiamente\l"
	.string "puedes crear POKÉMON de un poder\l"
	.string "temible, pero debes de tener\l"
	.string "cuidado con el daño de retroceso,\l"
	.string "si lo combinas con los ya de por\l"
	.string "sí DOBLE-FILO o PÁJARO-OSADO,\l"
	.string "causarás un daño terrible al\l"
	.string "rival, pero también deberás de\l"
	.string "vigilar tu propia salud, es un\l"
	.string "objeto muy raro por KANTO, ¡úsalo\l"
	.string "sabiamente!$"

VictoryRoad_2F_Entrenador_Especial_Texto_4:
.string "¡Bien!\n"
	.string "¡Prepárate, soy el ENTRENADOR GUAY\l"
	.string "más poderoso que encontrarás en la\l"
	.string "CALLE VICTORIA!$"

VictoryRoad_2F_Entrenador_Especial_Texto_5:
.string "Impresionante, alguien como tú\n"
	.string "debe de tener lo que te voy a dar.$"

VictoryRoad_2F_Entrenador_Especial_Texto_6:
.string "Me has derrotado, queda claro que\n"
	.string "no eres uno más del montón, por\l"
	.string "ello mereces esto.$"

VictoryRoad_2F_Entrenador_Especial_Texto_7:
.string "Bien, te entiendo, después de todo\n"
	.string "no todos tienen el nivel para\l"
	.string "enfrentar a un ENTRENADOR GUAY de\l"
	.string "verdad.$"
