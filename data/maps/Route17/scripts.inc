Route17_MapScripts::
	.byte 0

Route17_1::
end


Route17_2::
end

Route17_3::
end


Route17_4::
end


Route17_5::
end


Route17_6::
end


Route17_7::
end


Route17_8::
end


Route17_9::
end


Route17_10::
end



Route17_EventScript_Motorista::
	trainerbattle_single TRAINER_BERNIE_2, Route17_Text_MotoristaIntro, Route17_Text_MotoristaDefeated
	msgbox Route17_MotoristaPostBattle, MSGBOX_AUTOCLOSE
	end



Route17_EventScript_Motorista2::
	trainerbattle_single TRAINER_BERNIE_1, Route17_Text_Motorista2Intro, Route17_Text_Motorista2Defeated
	msgbox Route17_Motorista2PostBattle, MSGBOX_AUTOCLOSE
	end



Route17_EventScript_Motorista3::
	trainerbattle_single TRAINER_WALTER_2, Route17_Text_Motorista3Intro, Route17_Text_Motorista3Defeated
	msgbox Route17_Motorista3PostBattle, MSGBOX_AUTOCLOSE
	end



Route17_EventScript_Motorista4::
	trainerbattle_single TRAINER_THOMAS, Route17_Text_Motorista4Intro, Route17_Text_Motorista4Defeated
	msgbox Route17_Motorista4PostBattle, MSGBOX_AUTOCLOSE
	end



Route17_EventScript_Motorista5::
	trainerbattle_single TRAINER_MICAH, Route17_Text_Motorista5Intro, Route17_Text_Motorista5Defeated
	msgbox Route17_Motorista5PostBattle, MSGBOX_AUTOCLOSE
	end



Route17_EventScript_Motorista6::
	trainerbattle_single TRAINER_KEEGAN, Route17_Text_Motorista6Intro, Route17_Text_Motorista6Defeated
	msgbox Route17_Motorista6PostBattle, MSGBOX_AUTOCLOSE
	end



Route17_EventScript_Motorista7::
	trainerbattle_single TRAINER_JACE, Route17_Text_Motorista7Intro, Route17_Text_Motorista7Defeated
	msgbox Route17_Motorista7PostBattle, MSGBOX_AUTOCLOSE
	end



Route17_EventScript_Motorista8::
	trainerbattle_single TRAINER_JACKI_5, Route17_Text_Motorista8Intro, Route17_Text_Motorista8Defeated
	msgbox Route17_Motorista8PostBattle, MSGBOX_AUTOCLOSE
	end



Route17_EventScript_Motorista9::
	trainerbattle_single TRAINER_CAROL, Route17_Text_Motorista9Intro, Route17_Text_Motorista9Defeated
	msgbox Route17_Motorista9PostBattle, MSGBOX_AUTOCLOSE
	end



Route17_EventScript_Motorista10::
	trainerbattle_single TRAINER_WALTER_1, Route17_Text_Motorista10Intro, Route17_Text_Motorista10Defeated
	msgbox Route17_Motorista10PostBattle, MSGBOX_AUTOCLOSE
	end


Route17Documento_100::
msgbox Route17Documento_Text_100, MSGBOX_SIGN   
end

Route17Documento_Text_100:
	.string "CYCLING ROAD - BIKERS TERRITORY!$"



Route17Documento_101::
msgbox Route17Documento_Text_101, MSGBOX_SIGN   
end

Route17Documento_Text_101:
	.string "TRAINER TIPS\p"
	.string "All POKÉMON are unique.\p"
	.string "Even POKÉMON of the same species\n"
	.string "and level grow at different rates, the \n"
	.string "referred to as IVs, as well as natures.$"




Route17Documento_102::
msgbox Route17Documento_Text_102, MSGBOX_SIGN   
end

Route17Documento_Text_102:
.string "TETSUO WAS HERE$"



Route17Documento_103::
msgbox Route17Documento_Text_103, MSGBOX_SIGN   
end

Route17Documento_Text_103:
.string "ROUTE 17\n"
    .string "CELADON CITY - FUCHSIA CITY$"




Route17Documento_104::
msgbox Route17Documento_Text_104, MSGBOX_SIGN   
end

Route17Documento_Text_104:
	.string "Imminent closure of the CERULEAN -\n"
	.string "VERMILION and LAVENDER - CELADON\l"
	.string "underground paths, due to bikers\l"
	.string "invasion on it.$"



Route17Documento_105::
msgbox Route17Documento_Text_105, MSGBOX_SIGN   
end

Route17Documento_Text_105:
	.string "CYCLING ROAD\n"
	.string "Slope ends here!$"

