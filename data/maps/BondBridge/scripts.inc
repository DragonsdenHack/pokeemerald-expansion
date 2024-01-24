BondBridge_MapScripts::
	.byte 0

BondBridge1::
end


BondBridge2::
end


BondBridge3::
end


BondBridge4::
end


BondBridge5::
end


BondBridge6::
end


BondBridge7::
end


BondBridge8::
end


BondBridge9::
end



BondBridge_EventScript_Chica::
	trainerbattle_single TRAINER_BRENDAN_ROUTE_110_TREECKO, BondBridge_Text_ChicaIntro, BondBridge_Text_ChicaDefeated
	msgbox BondBridge_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



BondBridge_EventScript_Nina::
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_MUDKIP, BondBridge_Text_NinaIntro, BondBridge_Text_NinaDefeated
	msgbox BondBridge_Text_NinaPostBattle, MSGBOX_AUTOCLOSE
	end



BondBridge_EventScript_Nina2::
	trainerbattle_single TRAINER_JENNA, BondBridge_Text_Nina2Intro, BondBridge_Text_Nina2Defeated
	msgbox BondBridge_Text_Nina2PostBattle, MSGBOX_AUTOCLOSE
	end



BondBridge_EventScript_Chica2::
	trainerbattle_single TRAINER_CATHERINE_1, BondBridge_Text_Chica2Intro, BondBridge_Text_Chica2Defeated
	msgbox BondBridge_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



BondBridge_EventScript_Nadadora::
	trainerbattle_single TRAINER_CATHERINE_2, BondBridge_Text_NadadoraIntro, BondBridge_Text_NadadoraDefeated
	msgbox BondBridge_Text_NadadoraPostBattle, MSGBOX_AUTOCLOSE
	end



BondBridgeDocumento_100::
msgbox BondBridgeDocumento_Text_100, MSGBOX_SIGN   
end

BondBridgeDocumento_Text_100:
	.string "BERRY FOREST$"



BondBridgeDocumento_101::
msgbox BondBridgeDocumento_Text_101, MSGBOX_SIGN   
end

BondBridgeDocumento_Text_101:
    .string "BOND BRIDGE\n"
    .string "Please be quiet when crossing.\p"
    .string "BERRY FOREST AHEAD$"



BondBridge_EventScript_Pareja1::
	trainerbattle_single TRAINER_SOPHIA, BondBridge_Text_Pareja1Intro, BondBridge_Text_Pareja1Defeated
	msgbox BondBridge_Text_Pareja1PostBattle, MSGBOX_AUTOCLOSE
	end



BondBridge_EventScript_Pareja2::
	trainerbattle_single TRAINER_SOPHIA, BondBridge_Text_Pareja2Intro, BondBridge_Text_Pareja2Defeated
	msgbox BondBridge_Text_Pareja2PostBattle, MSGBOX_AUTOCLOSE
	end
