Route52_MapScripts::
	.byte 0

Route52_1::
end



Route52_2::
end



Route52_3::
end



Route52_4::
end



Route52_5::
end



Route52_EventScript_Nadadora::
	trainerbattle_single TRAINER_ROXANNE_5, Route52_Text_NadadoraIntro, Route52_Text_NadadoraDefeated
	msgbox Route52_Text_NadadoraPostBattle, MSGBOX_AUTOCLOSE
	end



Route52_EventScript_Nadadora2::
	trainerbattle_single TRAINER_ROXANNE_2, Route52_Text_Nadadora2Intro, Route52_Text_Nadadora2Defeated
	msgbox Route52_Text_Nadadora2PostBattle, MSGBOX_AUTOCLOSE
	end



Route52_EventScript_Nadador::
	trainerbattle_single TRAINER_ROXANNE_3, Route52_Text_NadadorIntro, Route52_Text_NadadorDefeated
	msgbox Route52_Text_NadadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route52_EventScript_Nadador2::
	trainerbattle_single TRAINER_ROXANNE_4, Route52_Text_Nadador2Intro, Route52_Text_Nadador2Defeated
	msgbox Route52_Text_Nadador2PostBattle, MSGBOX_AUTOCLOSE
	end



Route52_EventScript_Nadador3::
	trainerbattle_single TRAINER_MAY_RUSTBORO_TORCHIC, Route52_Text_Nadador3Intro, Route52_Text_Nadador3Defeated
	msgbox Route52_Text_Nadador3PostBattle, MSGBOX_AUTOCLOSE
	end

Route52_Bloqueo_Base::
lock
compare VAR_UNUSED_0x4091, 1
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, Route52_Bloqueo_Base_Move_1
waitmovement 0x0
msgbox Route52_Bloqueo_Base_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route52_Bloqueo_Base_Move_2
waitmovement 0x0
release
end

Route52_Bloqueo_Base_Texto_1:
.string "La puerta está completamente\n"
	.string "cerrada...$"

Route52_Bloqueo_Base_Move_1:
walk_in_place_up
step_end

Route52_Bloqueo_Base_Move_2:
walk_slow_down
step_end
