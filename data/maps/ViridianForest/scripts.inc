ViridianForest_MapScripts::
	.byte 0

ViridianForest1::
lock     
faceplayer     
msgbox ViridianForest_Text_1, MSGBOX_DEFAULT
release     
end

ViridianForest_Text_1:
.string "¡Vine aquí con unos amigos!\p"
.string "¡Van en busca de combates\n"
.string "POKéMON!$"



ViridianForest2::
end



ViridianForest3::
end



ViridianForest4::
end



ViridianForest5::
end



ViridianForest6::
end



ViridianForest7::
end



ViridianForest8::
end



ViridianForest9::
lock     
faceplayer     
msgbox ViridianForest_Text_9, MSGBOX_DEFAULT
release     
end

ViridianForest_Text_9:
.string "Por aquí no hay ningún POKÉMON\n"
.string "fuerte que pueda\l"
.string "interesaros…sobre el papel.$"



ViridianForest10::
end



ViridianForest11::
end



ViridianForest12::
end



ViridianForest_EventScript_Cazabichos::
	trainerbattle_single TRAINER_PATRICIA, ViridianForest_Text_CazabichosIntro, ViridianForest_Text_CazabichosDefeated
	msgbox ViridianForest_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end



ViridianForest_EventScript_Cazabichos2::
	trainerbattle_single TRAINER_MAY_ROUTE_110_TREECKO, ViridianForest_Text_Cazabichos2Intro, ViridianForest_Text_Cazabichos2Defeated
	msgbox ViridianForest_Cazabichos2PostBattle, MSGBOX_AUTOCLOSE
	end



ViridianForest_EventScript_Cazabichos3::
	trainerbattle_single TRAINER_MAY_ROUTE_103_TREECKO, ViridianForest_Text_Cazabichos3Intro, ViridianForest_Text_Cazabichos3Defeated
	msgbox ViridianForest_Cazabichos3PostBattle, MSGBOX_AUTOCLOSE
	end



ViridianForest_EventScript_Cazabichos4::
	trainerbattle_single TRAINER_BROOKE_5, ViridianForest_Text_Cazabichos4Intro, ViridianForest_Text_Cazabichos4Defeated
	msgbox ViridianForest_Cazabichos4PostBattle, MSGBOX_AUTOCLOSE
	end



ViridianForest_EventScript_Cazabichos5::
	trainerbattle_single TRAINER_BROOKE_4, ViridianForest_Text_Cazabichos5Intro, ViridianForest_Text_Cazabichos5Defeated
	msgbox ViridianForest_Cazabichos5PostBattle, MSGBOX_AUTOCLOSE
	end
