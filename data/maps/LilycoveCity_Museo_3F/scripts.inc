LilycoveCity_Museo_3F_MapScripts::
	.byte 0

LilycoveCity_Museo_3F_Secundaria::
lock
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_1 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_2 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_3 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_4 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_5 MSGBOX_AUTOCLOSE
release
end

LilycoveCity_Museo_3F_Secundaria_Texto_1:
	.string "Por aquí.$"

LilycoveCity_Museo_3F_Secundaria_Texto_2:
	.string "Hablo con {PLAYER}, ¿verdad?$"

LilycoveCity_Museo_3F_Secundaria_Texto_3:
	.string "Ponte cómodo, por favor.$"

LilycoveCity_Museo_3F_Secundaria_Texto_4:
	.string "Te has entrometido con el orden natural\n"
	.string "de las cosas, {PLAYER}. ¡Y no toleraré\l"
	.string "eso en HOENN!$"

LilycoveCity_Museo_3F_Secundaria_Texto_5:
	.string "Crees que solo evitaste una mera\n"
	.string "transacción en el mercado negro, pero\l"
	.string "ese no es el caso.$"
	