UndergroundPath_5F_MapScripts::
	.byte 0

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

