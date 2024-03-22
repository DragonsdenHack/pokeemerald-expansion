Route46_MapScripts::
	.byte 0

Route46_1::
end



Route46_2::
end



Route46_3::
lock     
faceplayer     
msgbox Route46_Text_3, MSGBOX_DEFAULT
release     
end

Route46_Text_3:
	.string "There are a big variety of POKÉMON\n"
	.string "around these routes, you should be\l"
	.string "alert if you want to see all the\l"
	.string "POKÉMON.$"



Route46_4::
end



Route46_5::
end



Route46_6::
end



Route46_7::
end



Route46_8::
end



Route46_EventScript_Chica::
	trainerbattle_single TRAINER_JAMES_3, Route46_Text_ChicaIntro, Route46_Text_ChicaDefeated
	msgbox Route46_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route46_EventScript_Montanero::
	trainerbattle_single TRAINER_JAMES_4, Route46_Text_MontaneroIntro, Route46_Text_MontaneroDefeated
	msgbox Route46_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end



Route46_SudowoodoRest::
msgbox Route46_SudowoodoRest_Text, MSGBOX_NPC   
end

Route46_SudowoodoRest_Text:
	.string "…\n"
	.string "…\l"
	.string "(It's a POKÉMON, it seems\l"
	.string "to be resting)$"



Route46Documento_100::
msgbox Route46Documento_Text_100, MSGBOX_SIGN   
end

Route46Documento_Text_100:
	.string "ROUTE 46$"
