GreenPath_MapScripts::
	.byte 0

GreenPath1::
end



GreenPath_EventScript_Chica::
	trainerbattle_single TRAINER_EDWIN_5, GreenPath_Text_ChicaIntro, GreenPath_Text_ChicaDefeated
	msgbox GreenPath_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end


GreenPathDocumento_100::
msgbox GreenPathDocumento_Text_100, MSGBOX_SIGN   
end

GreenPathDocumento_Text_100:
	.string "BOSQUEJO\n"
	.string "¡Piensa en Verde y mantén limpia\l"
	.string "la Naturaleza!$"
