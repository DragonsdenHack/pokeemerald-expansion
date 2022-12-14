UnionCave_MapScripts::
	.byte 0

UnionCave1::
end



UnionCave2::
end



UnionCave3::
end



UnionCave4::
end



UnionCave5::
lock     
faceplayer     
msgbox UnionCave_Text_5, MSGBOX_DEFAULT
release     
end

UnionCave_Text_5:
.string "El otro día decidí meterme en lo\n"
.string "más profundo de la cueva, y\l"
.string "encontré a un tipo que enseñaba un\l"
.string "movimiento muy potente a\l"
.string "cualquiera que pudiera aprenderlo.\l"
.string "¡Pero pedía 10000 POKÉS!$"



UnionCave7::
end



UnionCave8::
end



UnionCave9::
end



UnionCave_EventScript_Montanero::
	trainerbattle_single TRAINER_JOHANNA, UnionCave_Text_MontaneroIntro, UnionCave_Text_MontaneroDefeated
	msgbox UnionCave_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end



UnionCave_EventScript_Necio::
	trainerbattle_single TRAINER_KIRA_AND_DAN_4, UnionCave_Text_NecioIntro, UnionCave_Text_NecioDefeated
	msgbox UnionCave_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



UnionCave_EventScript_Karateka::
	trainerbattle_single TRAINER_GERALD, UnionCave_Text_KaratekaIntro, UnionCave_Text_KaratekaDefeated
	msgbox UnionCave_Text_KaratekaPostBattle, MSGBOX_AUTOCLOSE
	end



UnionCave_EventScript_Necio2::
	trainerbattle_single TRAINER_KIRA_AND_DAN_5, UnionCave_Text_Necio2Intro, UnionCave_Text_Necio2Defeated
	msgbox UnionCave_Text_Necio2PostBattle, MSGBOX_AUTOCLOSE
	end
