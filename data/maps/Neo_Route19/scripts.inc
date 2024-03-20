Neo_Route19_MapScripts::
	.byte 0

NeoRoute19_EventScript_Nadador::
	trainerbattle_single TRAINER_TRAINER_250, NeoRoute19_Text_NadadorIntro, NeoRoute19_Text_NadadorDefeated
	msgbox NeoRoute19_NadadorPostBattle, MSGBOX_AUTOCLOSE
	end

NeoRoute19_EventScript_Nadadora::
	trainerbattle_single TRAINER_TRAINER_251, NeoRoute19_Text_NadadoraIntro, NeoRoute19_Text_NadadoraDefeated
	msgbox NeoRoute19_NadadoraPostBattle, MSGBOX_AUTOCLOSE
	end

NeoRoute19_EventScript_Nadador2::
	trainerbattle_single TRAINER_TRAINER_252, NeoRoute19_Text_Nadador2Intro, NeoRoute19_Text_Nadador2Defeated
	msgbox NeoRoute19_Nadador2PostBattle, MSGBOX_AUTOCLOSE
	end

NeoRoute19_EventScript_Nadador3::
	trainerbattle_single TRAINER_TRAINER_253, NeoRoute19_Text_Nadador3Intro, NeoRoute19_Text_Nadador3Defeated
	msgbox NeoRoute19_Nadador3PostBattle, MSGBOX_AUTOCLOSE
	end

Neo_Route19_Pescador::
lock
faceplayer
msgbox Neo_Route19_Pescador_Texto_1 MSGBOX_NPC
release
end

Neo_Route19_Pescador_Texto_1:
	.string "The roadworks have already finished. I\n"
	.string "can go fishing again.$"

Neo_Route19_Obrero::
lock
faceplayer
msgbox Neo_Route19_Obrero_Texto_1 MSGBOX_NPC
release
end

Neo_Route19_Obrero_Texto_1:
.string "I'm sweating. I will take a shower!$"
