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
	.string "From here, you can already see the\n"
	.string "OLIVINE CITY LIGHTHOUSE, but the BELL\l"
	.string "TOWER is more impressive!$"



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
	.string "There's a distant cousin of TAUROS and\n"
	.string "MILTANK named BOUFFALANT. It's\l"
	.string "considerably slower but can endure\l"
	.string "even more than MILTANK and delivers a\l"
	.string "stronger blow than TAUROS!$"



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
	.string "...\n"
	.string "...\l"
	.string "(Es un POKÉMON, parece estar\l"
	.string "reposando)$"



Route39Documento_100::
msgbox Route39Documento_Text_100, MSGBOX_SIGN   
end

Route39Documento_Text_100:
	.string "ROUTE 39\n"
	.string "OLIVINE CITY - ECRUTEAK CITY$"



Route39Documento_101::
msgbox Route39Documento_Text_101, MSGBOX_SIGN   
end

Route39Documento_Text_101:
	.string "MOOMOO FARM\n"
	.string "Try our fresh delicious milk,\l"
	.string "at the best price!$"
