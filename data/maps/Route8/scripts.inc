Route8_MapScripts::
	.byte 0

Route8_1::
end


Route8_2::
end


Route8_3::
end


Route8_4::
end


Route8_5::
end


Route8_6::
end


Route8_7::
end


Route8_8::
end


Route8_9::
end


Route8_10::
end


Route8_11::
end


Route8_12::
end


Route8_13::
end



Route8_EventScript_Necio::
	trainerbattle_single TRAINER_JACK, Route8_Text_NecioIntro, Route8_Text_NecioDefeated
	msgbox Route8_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



Route8_EventScript_Biker::
	trainerbattle_single TRAINER_MAY_ROUTE_110_TORCHIC, Route8_Text_BikerIntro, Route8_Text_BikerDefeated
	msgbox Route8_Text_BikerPostBattle, MSGBOX_AUTOCLOSE
	end



Route8_EventScript_Biker2::
	trainerbattle_single TRAINER_MAY_ROUTE_119_TORCHIC, Route8_Text_Biker2Intro, Route8_Text_Biker2Defeated
	msgbox Route8_Text_Biker2PostBattle, MSGBOX_AUTOCLOSE
	end



Route8_EventScript_Anciano::
	trainerbattle_single TRAINER_GLACIA, Route8_Text_AncianoIntro, Route8_Text_AncianoDefeated
	msgbox Route8_Text_AncianoPostBattle, MSGBOX_AUTOCLOSE
	end



Route8_EventScript_Chica::
	trainerbattle_single TRAINER_TIFFANY, Route8_Text_ChicaIntro, Route8_Text_ChicaDefeated
	msgbox Route8_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route8_EventScript_Necio2::
	trainerbattle_single TRAINER_TRAINER_217, Route8_Text_Necio2Intro, Route8_Text_Necio2Defeated
	msgbox Route8_Text_Necio2PostBattle, MSGBOX_AUTOCLOSE
	end



Route8_EventScript_Chica2::
	trainerbattle_single TRAINER_BRIDGET, Route8_Text_Chica2Intro, Route8_Text_Chica2Defeated
	msgbox Route8_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



Route8_EventScript_Chica3::
	trainerbattle_single TRAINER_OLIVIA, Route8_Text_Chica3Intro, Route8_Text_Chica3Defeated
	msgbox Route8_Text_Chica3PostBattle, MSGBOX_AUTOCLOSE
	end



Route8_EventScript_Necio3::
	trainerbattle_single TRAINER_DUDLEY, Route8_Text_Necio3Intro, Route8_Text_Necio3Defeated
	msgbox Route8_Text_Necio3PostBattle, MSGBOX_AUTOCLOSE
	end



Route8_EventScript_Anciano2::
	trainerbattle_single TRAINER_ROXANNE_1, Route8_Text_Anciano2Intro, Route8_Text_Anciano2Defeated
	msgbox Route8_Text_Anciano2PostBattle, MSGBOX_AUTOCLOSE
	end



Route8_EventScript_Chica4::
	trainerbattle_single TRAINER_JESSICA_2, Route8_Text_Chica4Intro, Route8_Text_Chica4Defeated
	msgbox Route8_Text_Chica4PostBattle, MSGBOX_AUTOCLOSE
	end



Route8Documento_100::
msgbox Route8Documento_Text_100, MSGBOX_SIGN   
end

Route8Documento_Text_100:
	.string "ZONA SUBTERRÁNEA\n"
	.string "CIUDAD AZULONA - PUEBLO LAVANDA$"

Route8_EventScript_Gemela1::
	trainerbattle_single TRAINER_AMY_AND_LIV_3, Route8_Text_Gemela1Intro, Route8_Text_Gemela1Defeated
	msgbox Route8_Text_Gemela1PostBattle, MSGBOX_AUTOCLOSE
	end



Route8_EventScript_Gemela2::
	trainerbattle_single TRAINER_AMY_AND_LIV_3, Route8_Text_Gemela2Intro, Route8_Text_Gemela2Defeated
	msgbox Route8_Text_Gemela2PostBattle, MSGBOX_AUTOCLOSE
	end
