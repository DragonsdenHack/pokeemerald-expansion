CanyonEntrance_MapScripts::
	.byte 0

CanyonEntrance1::
end


CanyonEntrance2::
end


CanyonEntrance3::
end


CanyonEntrance4::
end


CanyonEntrance5::
end


CanyonEntrance6::
end



CanyonEntrance_EventScript_Chica::
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_6, CanyonEntrance_Text_ChicaIntro, CanyonEntrance_Text_ChicaDefeated
	msgbox CanyonEntrance_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



CanyonEntrance_EventScript_Chico::
	trainerbattle_single TRAINER_MACEY, CanyonEntrance_Text_ChicoIntro, CanyonEntrance_Text_ChicoDefeated
	msgbox CanyonEntrance_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



CanyonEntrance_EventScript_Chico2::
	trainerbattle_single TRAINER_BRENDAN_ROUTE_119_MUDKIP, CanyonEntrance_Text_Chico2Intro, CanyonEntrance_Text_Chico2Defeated
	msgbox CanyonEntrance_Text_Chico2PostBattle, MSGBOX_AUTOCLOSE
	end



CanyonEntrance_EventScript_Chica2::
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_TREECKO, CanyonEntrance_Text_Chica2Intro, CanyonEntrance_Text_Chica2Defeated
	msgbox CanyonEntrance_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



CanyonEntranceDocumento_100::
msgbox CanyonEntranceDocumento_Text_100, MSGBOX_SIGN   
end

CanyonEntranceDocumento_Text_100:
.string "SEVAULT CANYON ENTRANCE\p"
    .string "TRAINERS are asked to refrain from\n"
    .string "damaging plants in the CANYON.$"



CanyonEntrance_EventScript_Pareja1::
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_7, CanyonEntrance_Text_Pareja1Intro, CanyonEntrance_Text_Pareja1Defeated
	msgbox CanyonEntrance_Text_Pareja1PostBattle, MSGBOX_AUTOCLOSE
	end



CanyonEntrance_EventScript_Pareja2::
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_7, CanyonEntrance_Text_Pareja2Intro, CanyonEntrance_Text_Pareja2Defeated
	msgbox CanyonEntrance_Text_Pareja2PostBattle, MSGBOX_AUTOCLOSE
	end
