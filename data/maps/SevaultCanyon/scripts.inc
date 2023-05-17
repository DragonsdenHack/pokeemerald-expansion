SevaultCanyon_MapScripts::
	.byte 0

SevaultCanyon1::
end


SevaultCanyon2::
end


SevaultCanyon3::
end


SevaultCanyon4::
end


SevaultCanyon5::
end


SevaultCanyon6::
end


SevaultCanyon7::
end


SevaultCanyon8::
end


SevaultCanyon9::
end


SevaultCanyon10::
end


SevaultCanyon11::
end


SevaultCanyon12::
end


SevaultCanyon13::
end


SevaultCanyon14::
end


SevaultCanyon15::
end


SevaultCanyon16::
lock     
faceplayer     
msgbox Text_16, MSGBOX_DEFAULT
release     
end

Text_16:
.string "Entrenarse uno mismo no está mal.\p"
.string "Pero tampoco está mal buscar\n"
.string "una buena pareja de combate.\p"
.string "Fíjate en BRUNO...\n"
.string "Él se entrenó con un tal MARCIAL.$"


SevaultCanyon17::
end


SevaultCanyon18::
end


SevaultCanyon19::
end


SevaultCanyon20::
end



SevaultCanyon_EventScript_Domador::
	trainerbattle_single TRAINER_PAXTON, SevaultCanyon_Text_DomadorIntro, SevaultCanyon_Text_DomadorDefeated
	msgbox SevaultCanyon_Text_DomadorPostBattle, MSGBOX_AUTOCLOSE
	end



SevaultCanyon_EventScript_Guay::
	trainerbattle_single TRAINER_MAY_RUSTBORO_MUDKIP, SevaultCanyon_Text_GuayIntro, SevaultCanyon_Text_GuayDefeated
	msgbox SevaultCanyon_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end



SevaultCanyon_EventScript_Guay2::
	trainerbattle_single TRAINER_MAXIE_MAGMA_HIDEOUT, SevaultCanyon_Text_Guay2Intro, SevaultCanyon_Text_Guay2Defeated
	msgbox SevaultCanyon_Text_Guay2PostBattle, MSGBOX_AUTOCLOSE
	end



SevaultCanyon_EventScript_Chico::
	trainerbattle_single TRAINER_BRUNO_1_MT_CHIMNEY, SevaultCanyon_Text_ChicoIntro, SevaultCanyon_Text_ChicoDefeated
	msgbox SevaultCanyon_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



SevaultCanyon_EventScript_Chica::
	trainerbattle_single TRAINER_BRENDAN_RUSTBORO_TORCHIC, SevaultCanyon_Text_ChicaIntro, SevaultCanyon_Text_ChicaDefeated
	msgbox SevaultCanyon_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



SevaultCanyon_EventScript_Luchadora::
	trainerbattle_single TRAINER_BRENDAN_RUSTBORO_TREECKO, SevaultCanyon_Text_LuchadoraIntro, SevaultCanyon_Text_LuchadoraDefeated
	msgbox SevaultCanyon_Text_LuchadoraPostBattle, MSGBOX_AUTOCLOSE
	end
