CeruleanCity_Gym_MapScripts::
	.byte 0

CeruleanCityGym1::
end



CeruleanCityGym2::
end



CeruleanCityGym3::
end



CeruleanCityGym4::
end



CeruleanCityGym_EventScript_Chico::
	trainerbattle_single TRAINER_BLAKE, CeruleanCityGym_Text_ChicoIntro, CeruleanCityGym_Text_ChicoDefeated
	msgbox CeruleanCityGym_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



CeruleanCityGym_EventScript_Chica::
	trainerbattle_single TRAINER_LUIS, CeruleanCityGym_Text_ChicaIntro, CeruleanCityGym_Text_ChicaDefeated
	msgbox CeruleanCityGym_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end
