Route33_MapScripts::
	.byte 0

Route33_1::
end



Route33_2::
end



Route33_3::
end



Route33_4::
end



Route33_5::
lock     
faceplayer     
msgbox Route33_Text_5, MSGBOX_DEFAULT
release     
end

Route33_Text_5:
	.string "That legend about a rare and powerful\n"
	.string "POKÉMON lurking in the depths of UNION\l"
	.string "CAVE attracts many a trainer to the\l"
	.string "area.$"



Route33_EventScript_Guay::
	trainerbattle_single TRAINER_VIVIAN, Route33_Text_GuayIntro, Route33_Text_GuayDefeated
	msgbox Route33_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end



Route33_EventScript_Sabio::
	trainerbattle_single TRAINER_RILEY, Route33_Text_SabioIntro, Route33_Text_SabioDefeated
	msgbox Route33_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end


Route33Documento_100::
msgbox Route33Documento_Text_100, MSGBOX_SIGN   
end

Route33Documento_Text_100:
	.string "ROUTE 33\n"
	.string "To the west AZALEA TOWN$"
