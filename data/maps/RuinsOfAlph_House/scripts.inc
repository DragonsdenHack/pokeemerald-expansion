RuinsOfAlph_House_MapScripts::
	.byte 0

RuinsOfAlphHouse1::
lock     
faceplayer     
msgbox RuinsOfAlph_House1_Text_1, MSGBOX_DEFAULT
release     
end

RuinsOfAlph_House1_Text_1:
.string "Creo que todos esos NATU y XATU\n"
.string "que viven por las RUINAS son una\l"
.string "de las claves para resolver su\l"
.string "misterio.$"



RuinsOfAlphHouse2::
lock     
faceplayer     
msgbox RuinsOfAlph_House1_Text_2, MSGBOX_DEFAULT
release     
end

RuinsOfAlph_House1_Text_2:
.string "No me gustan nada esos individuos\n"
.string "de negro que vinieron poco después\l"
.string "del terremoto.\l"
.string "…\l"
.string "…\l"
.string "¿Qué?\l"
.string "¿¡Tú eres su superior?!$"



RuinsOfAlphHouse3::
lock     
faceplayer     
msgbox RuinsOfAlph_House1_Text_3, MSGBOX_DEFAULT
release     
end

RuinsOfAlph_House1_Text_3:
.string "Las RUINAS datan de hace unos 1500\n"
.string "años.\l"
.string "Pero ignoramos por qué o por quién\l"
.string "fueron construidas.$"

RuinsOfAlph_House_Mision_Secundaria::
lock
faceplayer
compare VAR_ROUTE102_STATE, 3
goto_if_gt RuinsOfAlph_House_Mision_Secundaria_4
compare VAR_ROUTE102_STATE, 2
goto_if_gt RuinsOfAlph_House_Mision_Secundaria_3
compare VAR_ROUTE102_STATE, 0
goto_if_gt RuinsOfAlph_House_Mision_Secundaria_2
msgbox RuinsOfAlph_House_Mision_Secundaria_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox RuinsOfAlph_House_Mision_Secundaria_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, RuinsOfAlph_House_Mision_Secundaria_Move_1
waitmovement 0x0
msgbox RuinsOfAlph_House_Mision_Secundaria_Texto_3 MSGBOX_AUTOCLOSE
applymovement 4, RuinsOfAlph_House_Mision_Secundaria_Move_2
waitmovement 0x0
msgbox RuinsOfAlph_House_Mision_Secundaria_Texto_4 MSGBOX_AUTOCLOSE
applymovement 4, RuinsOfAlph_House_Mision_Secundaria_Move_3
waitmovement 0x0
msgbox RuinsOfAlph_House_Mision_Secundaria_Texto_5 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
setvar VAR_ROUTE102_STATE, 1
release
end

RuinsOfAlph_House_Mision_Secundaria_2::
msgbox RuinsOfAlph_House_Mision_Secundaria_Texto_6 MSGBOX_AUTOCLOSE
release
end

RuinsOfAlph_House_Mision_Secundaria_3::
delay 20
msgbox RuinsOfAlph_House_Mision_Secundaria_Texto_7 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, RuinsOfAlph_House_Mision_Secundaria_Move_1
waitmovement 0x0
msgbox RuinsOfAlph_House_Mision_Secundaria_Texto_8 MSGBOX_AUTOCLOSE
applymovement 4, RuinsOfAlph_House_Mision_Secundaria_Move_1
waitmovement 0x0
applymovement 4, RuinsOfAlph_House_Mision_Secundaria_Move_3
waitmovement 0x0
msgbox RuinsOfAlph_House_Mision_Secundaria_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox RuinsOfAlph_House_Mision_Secundaria_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_ARCHEN, 35, ITEM_FLYING_GEM
waitfanfare
setvar VAR_ROUTE102_STATE, 4
release
end

RuinsOfAlph_House_Mision_Secundaria_4::
msgbox RuinsOfAlph_House_Mision_Secundaria_Texto_11 MSGBOX_AUTOCLOSE
release
end

RuinsOfAlph_House_Mision_Secundaria_Move_1:
emote_exclamation_mark
step_end

RuinsOfAlph_House_Mision_Secundaria_Move_2:
face_up
step_end

RuinsOfAlph_House_Mision_Secundaria_Move_3:
face_player
step_end

RuinsOfAlph_House_Mision_Secundaria_Texto_1:
.string "Esos CIENTÍFICOS{PAUSE 25}…{PAUSE 25} venían de otra\n"
	.string "región, nos prometieron solo investigar\l"
	.string "nuestros FÓSILES, pero han\l"
	.string "desaparecido sin apenas dejar rastro…$"


RuinsOfAlph_House_Mision_Secundaria_Texto_2:
.string "… …$"

RuinsOfAlph_House_Mision_Secundaria_Texto_3:
.string "¿Quieres ayudarme?$"

RuinsOfAlph_House_Mision_Secundaria_Texto_4:
.string "Pareces alguien preparado, si quieres\n"
	.string "intentarlo bajo tu riesgo, no me\l"
	.string "opondré.$"

RuinsOfAlph_House_Mision_Secundaria_Texto_5:
.string "Sabemos que tienen un pequeño\n"
	.string "LABORATORIO en alguna ciudad de\l"
	.string "JOHTO, creo que se referían a CIUDAD\l"
	.string "IRIS. Ahí deben tener nuestros\l"
	.string "FÓSILES. Si los traes de vuelta, te\l"
	.string "recompensaré como es debido.$"

RuinsOfAlph_House_Mision_Secundaria_Texto_6:
.string "¿Alguna nueva noticia? Recuerda, deben\n"
	.string "de tener su LABORATORIO en CIUDAD\l"
	.string "IRIS.$"

RuinsOfAlph_House_Mision_Secundaria_Texto_7:
.string "… …$"

RuinsOfAlph_House_Mision_Secundaria_Texto_8:
.string "¡Guau! ¡Tú solo pudiste con ellos! Debes\n"
	.string "ser alguien de gran poder, no hay\l"
	.string "duda.$"

RuinsOfAlph_House_Mision_Secundaria_Texto_9:
.string "Alguien como tú merece ser premiado\n"
	.string "como se merece. Mira, descubrimos este\l"
	.string "ejemplar de FÓSIL, proviene de una\l"
	.string "región lejana. Nuestros estudios\l"
	.string "indican que se trata de un pariente\l"
	.string "lejano de Aerodactyl, y parece albergar\l"
	.string "un potencial aún mayor que este. Toma.$"

RuinsOfAlph_House_Mision_Secundaria_Texto_10:
.string "¡¡OBTUVISTE A UN ARCHEN AL NV.35!!$"

RuinsOfAlph_House_Mision_Secundaria_Texto_11:
.string "Si alguna vez necesitas algo, no dudes\n"
	.string "en contactarnos. Aquí tienes aliados.$"
