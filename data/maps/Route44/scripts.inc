Route44_MapScripts::
	.byte 0

Route44_1::
lock     
faceplayer     
msgbox Route44_Text_1, MSGBOX_DEFAULT
release     
end

Route44_Text_1:
.string "La RUTA HELADA está cortada hasta\n"
.string "nuevo aviso, lo siento, han sido\l"
.string "órdenes de última hora venidas\l"
.string "desde CIUDAD IRIS.$"



Route44_2::
end



Route44_4::
end



Route44_5::
end



Route44_6::
lock     
faceplayer     
msgbox Route44_Text_6, MSGBOX_DEFAULT
release     
end

Route44_Text_6:
.string "La CUEVA HELADA ha mantenido al\n"
.string "santuario del TIPO DRAGÓN, CIUDAD\l"
.string "ENDRINO, alejada del resto de\l"
.string "zonas de JOHTO.$"



Route44_7::
end



Route44_8::
end



Route44_9::
end



Route44_10::
end



Route44_11::
end



Route44_EventScript_Domador::
	trainerbattle_single TRAINER_NICOLAS_5, Route44_Text_DomadorIntro, Route44_Text_DomadorDefeated
	msgbox Route44_Text_DomadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route44_EventScript_Guay::
	trainerbattle_single TRAINER_PERRY, Route44_Text_GuayIntro, Route44_Text_GuayDefeated
	msgbox Route44_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end



Route44_EventScript_Pescador::
	trainerbattle_single TRAINER_PHIL, Route44_Text_PescadorIntro, Route44_Text_PescadorDefeated
	msgbox Route44_Text_PescadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route44_EventScript_Necio::
	trainerbattle_single TRAINER_HUGH, Route44_Text_NecioIntro, Route44_Text_NecioDefeated
	msgbox Route44_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



Route44_EventScript_Ornitologo::
	trainerbattle_single TRAINER_ROBERT_1, Route44_Text_OrnitologoIntro, Route44_Text_OrnitologoDefeated
	msgbox Route44_Text_OrnitologoPostBattle, MSGBOX_AUTOCLOSE
	end
