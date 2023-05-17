SaffronCity_Dojo_MapScripts::
	.byte 0

SaffronCityDojo1::
end



SaffronCityDojo2::
end



SaffronCityDojo3::
end



SaffronCityDojo4::
end



SaffronCityDojo5::
end



SaffronCityDojo6::
end



SaffronCityDojo7::
end



SaffronCityDojo_EventScript_Karateka::
	trainerbattle_single TRAINER_JOSH, SaffronCityDojo_Text_KaratekaIntro, SaffronCityDojo_Text_KaratekaDefeated
	msgbox SaffronCityDojo_KaratekaPostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityDojo_EventScript_Karateka2::
	trainerbattle_single TRAINER_JOEY, SaffronCityDojo_Text_Karateka2Intro, SaffronCityDojo_Text_Karateka2Defeated
	msgbox SaffronCityDojo_Karateka2PostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityDojo_EventScript_Karateka3::
	trainerbattle_single TRAINER_BILLY, SaffronCityDojo_Text_Karateka3Intro, SaffronCityDojo_Text_Karateka3Defeated
	msgbox SaffronCityDojo_Karateka3PostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityDojo_EventScript_Karateka4::
	trainerbattle_single TRAINER_TOMMY, SaffronCityDojo_Text_Karateka4Intro, SaffronCityDojo_Text_Karateka4Defeated
	msgbox SaffronCityDojo_Karateka4PostBattle, MSGBOX_AUTOCLOSE
	end
