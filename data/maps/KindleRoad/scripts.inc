KindleRoad_MapScripts::
	.byte 0

KindleRoad1::
lock     
faceplayer     
msgbox KindleRoad_Text_1, MSGBOX_DEFAULT
release     
end

KindleRoad_Text_1:
.string "Lo sentimos pero ha habido un\n"
.string "desprendimiento y el acceso al\l"
.string "MT.ASCUAS estará cortado hasta que\l"
.string "se garantice la seguridad, perdona\l"
.string "las molestias.$"


KindleRoad2::
lock     
faceplayer     
msgbox KindleRoad_Text_2, MSGBOX_DEFAULT
release     
end

KindleRoad_Text_2:
.string "Lo sentimos pero ha habido un\n"
.string "desprendimiento y el acceso al\l"
.string "MT.ASCUAS estará cortado hasta que\l"
.string "se garantice la seguridad, perdona\l"
.string "las molestias.$"


KindleRoad3::
end


KindleRoad4::
end


KindleRoad5::
end


KindleRoad6::
end


KindleRoad7::
end


KindleRoad8::
end


KindleRoad9::
end


KindleRoad10::
end


KindleRoad11::
end


KindleRoad12::
end


KindleRoad13::
end


KindleRoad14::
end


KindleRoad15::
end


KindleRoad16::
end


KindleRoad17::
end


KindleRoad18::
end


KindleRoad19::
end


KindleRoad20::
end


KindleRoad21::
end


KindleRoad22::
end


KindleRoad23::
end


KindleRoad24::
end


KindleRoad25::
end


KindleRoad26::
end


KindleRoad27::
end


KindleRoad28::
end


KindleRoad29::
end



KindleRoad_EventScript_Chica::
	trainerbattle_single TRAINER_LYDIA_3, KindleRoad_Text_ChicaIntro, KindleRoad_Text_ChicaDefeated
	msgbox KindleRoad_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



KindleRoad_EventScript_Chica2::
	trainerbattle_single TRAINER_JACKSON_4, KindleRoad_Text_Chica2Intro, KindleRoad_Text_Chica2Defeated
	msgbox KindleRoad_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



KindleRoad_EventScript_Luchadora::
	trainerbattle_single TRAINER_LORENZO, KindleRoad_Text_LuchadoraIntro, KindleRoad_Text_LuchadoraDefeated
	msgbox KindleRoad_Text_LuchadoraPostBattle, MSGBOX_AUTOCLOSE
	end



KindleRoad_EventScript_Luchadora2::
	trainerbattle_single TRAINER_WALLY_VR_1, KindleRoad_Text_Luchadora2Intro, KindleRoad_Text_Luchadora2Defeated
	msgbox KindleRoad_Text_Luchadora2PostBattle, MSGBOX_AUTOCLOSE
	end



KindleRoad_EventScript_Chico::
	trainerbattle_single TRAINER_JACKSON_3, KindleRoad_Text_ChicoIntro, KindleRoad_Text_ChicoDefeated
	msgbox KindleRoad_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



KindleRoad_EventScript_Nadador::
	trainerbattle_single TRAINER_LYDIA_5, KindleRoad_Text_NadadorIntro, KindleRoad_Text_NadadorDefeated
	msgbox KindleRoad_Text_NadadorPostBattle, MSGBOX_AUTOCLOSE
	end



KindleRoad_EventScript_Nadador2::
	trainerbattle_single TRAINER_LYDIA_4, KindleRoad_Text_Nadador2Intro, KindleRoad_Text_Nadador2Defeated
	msgbox KindleRoad_Text_Nadador2PostBattle, MSGBOX_AUTOCLOSE
	end



KindleRoad_EventScript_Karateka::
	trainerbattle_single TRAINER_JACKSON_2, KindleRoad_Text_KaratekaIntro, KindleRoad_Text_KaratekaDefeated
	msgbox KindleRoad_Text_KaratekaPostBattle, MSGBOX_AUTOCLOSE
	end



KindleRoad_EventScript_Karateka2::
	trainerbattle_single TRAINER_SEBASTIAN, KindleRoad_Text_Karateka2Intro, KindleRoad_Text_Karateka2Defeated
	msgbox KindleRoad_Text_Karateka2PostBattle, MSGBOX_AUTOCLOSE
	end



KindleRoad_EventScript_Nadadora::
	trainerbattle_single TRAINER_LYDIA_2, KindleRoad_Text_NadadoraIntro, KindleRoad_Text_NadadoraDefeated
	msgbox KindleRoad_Text_NadadoraPostBattle, MSGBOX_AUTOCLOSE
	end



KindleRoad_EventScript_Pescador::
	trainerbattle_single TRAINER_JACKSON_1, KindleRoad_Text_PescadorIntro, KindleRoad_Text_PescadorDefeated
	msgbox KindleRoad_Text_PescadorPostBattle, MSGBOX_AUTOCLOSE
	end



KindleRoadDocumento_100::
msgbox KindleRoadDocumento_Text_100, MSGBOX_SIGN   
end

KindleRoadDocumento_Text_100:
.string "Light the Fire in Your Heart!\n"
    .string "EMBER SPA$"



KindleRoadDocumento_101::
msgbox KindleRoadDocumento_Text_101, MSGBOX_SIGN   
end

KindleRoadDocumento_Text_101:
.string "This is KINDLE ROAD.\p"
    .string "Go straight for MT. EMBER.$"



KindleRoad_EventScript_Pareja1::
	trainerbattle_single TRAINER_JACKSON_5, KindleRoad_Text_Pareja1Intro, KindleRoad_Text_Pareja1Defeated
	msgbox KindleRoad_Text_Pareja1PostBattle, MSGBOX_AUTOCLOSE
	end



KindleRoad_EventScript_Pareja2::
	trainerbattle_single TRAINER_JACKSON_5, KindleRoad_Text_Pareja2Intro, KindleRoad_Text_Pareja2Defeated
	msgbox KindleRoad_Text_Pareja2PostBattle, MSGBOX_AUTOCLOSE
	end
