Route39_MapScripts::
	.byte 0

Route39_1::
end



Route39_2::
end



Route39_3::
end



Route39_4::
end



Route39_5::
end



Route39_6::
lock     
faceplayer     
msgbox Route39_Text_6, MSGBOX_DEFAULT
release     
end

Route39_Text_6:
.string "Desde aquí ya puede verse el FARO\n"
.string "de CIUDAD OLIVO, ¡pero la TORRE\l"
.string "CAMPANA sigue siendo más\l"
.string "impresionante!$"



Route39_7::
end



Route39_8::
end



Route39_9::
end



Route39_10::
end



Route39_11::
end



Route39_12::
lock     
faceplayer     
msgbox Route39_Text_12, MSGBOX_DEFAULT
release     
end

Route39_Text_12:
.string "TAUROS y MILTANK cuentan con un\n"
.string "pariente lejano, llamado\l"
.string "BOUFFALANT. Es mucho más lento,\l"
.string "pero aguanta incluso más que\l"
.string "MILTANK, ¡y embiste más duro que\l"
.string "TAUROS!$"



Route39_13::
end



Route39_EventScript_Ornitologo::
	trainerbattle_single TRAINER_DARIAN, Route39_Text_OrnitologoIntro, Route39_Text_OrnitologoDefeated
	msgbox Route39_Text_OrnitologoPostBattle, MSGBOX_AUTOCLOSE
	end



Route39_EventScript_Marinero::
	trainerbattle_single TRAINER_HAILEY, Route39_Text_MarineroIntro, Route39_Text_MarineroDefeated
	msgbox Route39_Text_MarineroPostBattle, MSGBOX_AUTOCLOSE
	end



Route39_SudowoodoRest::
msgbox Route39_SudowoodoRest_Text, MSGBOX_NPC   
end

Route39_SudowoodoRest_Text:
	.string "…\n"
	.string "…\l"
	.string "(Es un POKÉMON, parece estar\l"
	.string "reposando)$"



Route39Documento_100::
msgbox Route39Documento_Text_100, MSGBOX_SIGN   
end

Route39Documento_Text_100:
	.string "RUTA 39\n"
	.string "CIUDAD OLIVO - CIUDAD IRIS$"



Route39Documento_101::
msgbox Route39Documento_Text_101, MSGBOX_SIGN   
end

Route39Documento_Text_101:
	.string "GRANJA MU-MU\n"
	.string "¡Prueba nuestra rica leche fresca,\l"
	.string "al mejor precio!$"

Route39_EventScript_TM138::
	lock
	faceplayer
	goto_if_set FLAG_HOENN_174, Route39_EventScript_ReceivedTM138
	msgbox Route39_Text_TM138, MSGBOX_DEFAULT
	delay 10
	msgbox Route39_Text_TM138_2, MSGBOX_DEFAULT
	giveitem ITEM_TM33
	setflag FLAG_HOENN_174
	msgbox Route39_Text_ExplainTM138, MSGBOX_DEFAULT
	release
	end

Route39_EventScript_ReceivedTM138::
	msgbox Route39_Text_ExplainTM138, MSGBOX_DEFAULT
	release
	end

Route39_Text_TM138:
.string "Una buena coz puede ser la solución\n"
.string "de muchos POKÉMON ante los duros\l"
.string "ACERO y ROCA.\l"
.string "De tanto criar TAUROS y MILTANK,\l"
.string "lo sé bien.$"

Route39_Text_TM138_2:
.string "¡Toma esto!$"

Route39_Text_ExplainTM138:
	.string "Embestir con fuerza no basta\n"
	.string "contra determinados POKÉMON.\l"
	.string "Con FUERZA EQUINA, ¡tendrás\l"
	.string "el movimiento perfecto para\l"
	.string "complementar fuertes embestidas!$"
