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
.string "BOUFFALAND. Es mucho más lento,\l"
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
