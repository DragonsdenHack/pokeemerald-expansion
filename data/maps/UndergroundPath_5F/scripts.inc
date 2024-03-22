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
	.string "We can only go through individually, and\n"
	.string "when we exit on the other side, there\l"
	.string "are several BIKERS guarding the\l"
	.string "entrance. Only a great TRAINER like you\l"
	.string "can get through the shelters.$"


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
	.string "The entrance to the shelters seems to\n"
	.string "be here. Want to enter?$"

