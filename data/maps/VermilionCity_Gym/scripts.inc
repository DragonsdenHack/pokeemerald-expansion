VermilionCity_Gym_MapScripts::
	.byte 0

VermilionCityGym1::
end



VermilionCityGym2::
end



VermilionCityGym3::
end



VermilionCityGym4::
end



VermilionCityGym5::
end



VermilionCityGym_EventScript_Chico::
	trainerbattle_single TRAINER_WINSTON_5, VermilionCityGym_Text_ChicoIntro, VermilionCityGym_Text_ChicoDefeated
	msgbox VermilionCityGym_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



VermilionCityGym_EventScript_Chico2::
	trainerbattle_single TRAINER_ETHAN_4, VermilionCityGym_Text_Chico2Intro, VermilionCityGym_Text_Chico2Defeated
	msgbox VermilionCityGym_Text_Chico2PostBattle, MSGBOX_AUTOCLOSE
	end



VermilionCityGym_EventScript_Chico3::
	trainerbattle_single TRAINER_LAO_5, VermilionCityGym_Text_Chico3Intro, VermilionCityGym_Text_Chico3Defeated
	msgbox VermilionCityGym_Text_Chico3PostBattle, MSGBOX_AUTOCLOSE
	end


VermilionCityGym_NoPass::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 4, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, VermilionCityGym_NoPass_move_3
msgbox VermilionCityGym_NoPass_Text_2, MSGBOX_AUTOCLOSE
applymovement 4, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_3, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_4
waitmovement 0x0
release
end

VermilionCityGym_NoPass_Text_1:
    .string "¡De modo que tenemos otro\n"
	.string "aspirante más al título eh!\l"
	.string "Espera...$"

VermilionCityGym_NoPass_Text_2:
   .string "¡Eres un ROCKET!\n"
	.string "¡Tienes la poca verguenza de\l"
	.string "entrar como si nada a un lugar\l"
	.string "oficial y homologado por la LIGA\l"
	.string "POKÉMON!$"

VermilionCityGym_NoPass_Text_3:
.string "¡Largo de aquí antes de que llame\n"
	.string "a las autoridades, ningún LÍDER DE\l"
	.string "GIMNASIO va a perder el tiempo con\l"
	.string "un mísero ROCKET!$"

VermilionCityGym_NoPass_move_1:
walk_in_place_up:
step_end

VermilionCityGym_NoPass_move_2:
walk_in_place_down:
step_end

VermilionCityGym_NoPass_move_3:
emote_exclamation_mark
step_end

VermilionCityGym_NoPass_move_4:
walk_down
step_end
