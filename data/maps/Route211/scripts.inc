Route211_MapScripts::
	.byte 0



Route211_Cartel_Oeste::
lock
msgbox Route211_Cartel_Oeste_Texto_1, MSGBOX_SIGN
release     
end

Route211_Cartel_Oeste_Texto_1:
	.string "RUTA 211\n"
	.string "{LEFT_ARROW} CIUDAD VETUSTA$"


Route211_Cartel_Oeste_Corona::
lock
msgbox Route211_Cartel_Oeste_Corona_Texto_1, MSGBOX_SIGN
release     
end

Route211_Cartel_Oeste_Corona_Texto_1:
	.string "RUTA 211\n"
	.string "{LEFT_ARROW} MONTE CORONA$"



Route211_Cartel_Este::
lock
msgbox Route211_Cartel_Este_Texto_1, MSGBOX_SIGN
release     
end

Route211_Cartel_Este_Texto_1:
	.string "RUTA 211\n"
	.string "{RIGHT_ARROW} MONTE CORONA$"



Route211_Cartel_Este_Caelestis::
lock
msgbox Route211_Cartel_Este_Caelestis_Texto_1, MSGBOX_SIGN
release     
end

Route211_Cartel_Este_Caelestis_Texto_1:
	.string "RUTA 211\n"
	.string "{RIGHT_ARROW} PUEBLO CAELESTIS$"


Route211_Cartel::
lock     
faceplayer     
msgbox Route211_Cartel_Texto_1, MSGBOX_SIGN
release     
end

Route211_Cartel_Texto_1:
	.string "¡Pistas para entrenadores!\p"
	.string "Incluso los veteranos se desorientan\n"
	.string "en las entrañas del MONTE CORONA.\p"
	.string "Antes de internarse en él, es\n"
	.string "conveniente comprobar que se cuenta\l"
	.string "con suficientes medicinas y objetos.$"
