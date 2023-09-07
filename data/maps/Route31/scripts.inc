Route31_MapScripts::
	.byte 0

Route31_1::
lock     
faceplayer     
msgbox Route31_Text_1, MSGBOX_DEFAULT
release     
end

Route31_Text_1:
.string "El acceso a la cueva en estos\n"
.string "momentos está cortado, ha habido\l"
.string "un pequeño desprendimiento en su\l"
.string "interior y estamos asegurándonos\l"
.string "de que está todo en orden.\l"
.string "Disculpe las molestias.$"



Route31_2::
end



Route31_3::
lock     
faceplayer     
msgbox Route31_Text_3, MSGBOX_DEFAULT
release     
end

Route31_Text_3:
.string "Tú no eres de por aquí, ¿verdad?\n"
.string "¿Vienes de CIUDAD OLIVO?\l"
.string "¿¡KANTO!?\l"
.string "¡¿Cómo hiciste para pasar las\l"
.string "fronteras?!$"



Route31_4::
end



Route31_5::
end



Route31_6::
end



Route31_7::
lock
faceplayer
msgbox Route31_7_Texto_1, MSGBOX_NPC
release
end

Route31_7_Texto_1:
.string "Capturé un DUNSPARCE creyendo que era\n"
	.string "del TIPO BICHO, pero resulta que es\l"
	.string "NORMAL. ¿En serio esa lenta y torpe\l"
	.string "serpiente no tiene nada de especial?$"



Route31_8::
end



Route31_9::
end



Route31_10::
lock     
faceplayer     
msgbox Route31_Text_10, MSGBOX_DEFAULT
release     
end

Route31_Text_10:
.string "Al oeste está CIUDAD MALVA,\n"
.string "conocida por su TORRE BELLSPROUT,\l"
.string "el lugar más antiguo y espiritual\l"
.string "de JOHTO, después, claro, de las\l"
.string "enormes pagodas de CIUDAD IRIS.$"



Route31_11::
end



Route31_EventScript_Chico::
	trainerbattle_single TRAINER_LUCAS_1, Route31_Text_ChicoIntro, Route31_Text_ChicoDefeated
	msgbox Route31_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



Route31Documento_100::
msgbox Route31Documento_Text_100, MSGBOX_SIGN   
end

Route31Documento_Text_100:
	.string "RUTA 31\n"
	.string "Al oeste CIUDAD MALVA$"



Route31Documento_101::
msgbox Route31Documento_Text_101, MSGBOX_SIGN   
end

Route31Documento_Text_101:
	.string "CUEVA OSCURA$"
