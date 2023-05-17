Ecruteak_TinTowerP4_MapScripts::
	.byte 0

TinTowerP4_1::
end



TinTowerP4_2::
end



TinTowerP4_3::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp4_Text_3, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp4_Text_3:
.string "Como las flores, vamos muriendo,\n"
.string "pero todo lo que hacemos en vida\l"
.string "tiene su eco en la eternidad.$"



TinTowerP4_4::
end



TinTowerP4_5::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp4_Text_5, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp4_Text_5:
.string "Nuestra psicología conspira contra\n"
.string "nosotros mismos: a las personas\l"
.string "nos gusta ir hacia un destino\l"
.string "preciso antes que enfrentarnos a\l"
.string "cierto grado de incertidumbre,\l"
.string "aunque este sea beneficioso.$"



TinTowerP4_6::
end



TinTowerP4_EventScript_Monje::
	trainerbattle_single TRAINER_MELINA, TinTowerP4_Text_MonjeIntro, TinTowerP4_Text_MonjeDefeated
	msgbox TinTowerP4_Text_MonjePostBattle, MSGBOX_AUTOCLOSE
	end
