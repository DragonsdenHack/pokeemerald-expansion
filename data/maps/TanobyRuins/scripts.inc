TanobyRuins_MapScripts::
	.byte 0

TanobyRuins1::
end


TanobyRuins2::
lock     
faceplayer     
msgbox TanobyRuins_Text_2, MSGBOX_DEFAULT
release     
end

TanobyRuins_Text_2:
.string "¿Quién habrá construido estas\n"
.string "ruinas?\l"
.string "¿Y con qué propósito?$"



TanobyRuins3::
end


TanobyRuins4::
end


TanobyRuins5::
end



TanobyRuins_EventScript_Montanero::
	trainerbattle_single TRAINER_TIANA, TanobyRuins_Text_DomadorIntro, TanobyRuins_Text_DomadorDefeated
	msgbox TanobyRuins_Text_DomadorPostBattle, MSGBOX_AUTOCLOSE
	end



TanobyRuins_EventScript_Caballero::
	trainerbattle_single TRAINER_VIVI, TanobyRuins_Text_CaballeroIntro, TanobyRuins_Text_CaballeroDefeated
	msgbox TanobyRuins_Text_CaballeroPostBattle, MSGBOX_AUTOCLOSE
	end



TanobyRuins_EventScript_Pintora::
	trainerbattle_single TRAINER_VIVI, TanobyRuins_Text_PintoraIntro, TanobyRuins_Text_PintoraDefeated
	msgbox TanobyRuins_Text_PintoraPostBattle, MSGBOX_AUTOCLOSE
	end



TanobyRuins_EventScript_Montanero2::
	trainerbattle_single TRAINER_HALEY_1, TanobyRuins_Text_Montanero2Intro, TanobyRuins_Text_Montanero2Defeated
	msgbox TanobyRuins_Text_Montanero2PostBattle, MSGBOX_AUTOCLOSE
	end
