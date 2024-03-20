NeoLavanda_Ruta_Oeste_MapScripts::
	.byte 0

NeoLavanda_Ruta_Oeste_EventScript_Motorista_1::
	trainerbattle_single TRAINER_TRAINER_172, NeoLavanda_Ruta_Oeste_Text_Motorista_1Intro, NeoLavanda_Ruta_Oeste_Text_Motorista_1Defeated
	msgbox NeoLavanda_Ruta_Oeste_Text_Motorista_1PostBattle, MSGBOX_AUTOCLOSE
	end

NeoLavanda_Ruta_Oeste_EventScript_Motorista_2::
	trainerbattle_single TRAINER_TRAINER_165, NeoLavanda_Ruta_Oeste_Text_Motorista_2Intro, NeoLavanda_Ruta_Oeste_Text_Motorista_2Defeated
	msgbox NeoLavanda_Ruta_Oeste_Text_Motorista_2PostBattle, MSGBOX_AUTOCLOSE
	end

NeoLavanda_Ruta_Oeste_EventScript_Motorista_3::
	trainerbattle_single TRAINER_TRAINER_167, NeoLavanda_Ruta_Oeste_Text_Motorista_3Intro, NeoLavanda_Ruta_Oeste_Text_Motorista_3Defeated
	msgbox NeoLavanda_Ruta_Oeste_Text_Motorista_3PostBattle, MSGBOX_AUTOCLOSE
	end

NeoLavanda_Ruta_Oeste_EventScript_Necio_1::
	trainerbattle_single TRAINER_TRAINER_168, NeoLavanda_Ruta_Oeste_Text_Necio_1Intro, NeoLavanda_Ruta_Oeste_Text_Necio_1Defeated
	msgbox NeoLavanda_Ruta_Oeste_Text_Necio_1PostBattle, MSGBOX_AUTOCLOSE
	end

NeoLavanda_Ruta_Oeste_EventScript_Caballero::
	trainerbattle_single TRAINER_TRAINER_169, NeoLavanda_Ruta_Oeste_Text_CaballeroIntro, NeoLavanda_Ruta_Oeste_Text_CaballeroDefeated
	msgbox NeoLavanda_Ruta_Oeste_Text_CaballeroPostBattle, MSGBOX_AUTOCLOSE
	end

NeoLavanda_Ruta_Oeste_EventScript_Necio_2::
	trainerbattle_single TRAINER_TRAINER_170, NeoLavanda_Ruta_Oeste_Text_Necio_2Intro, NeoLavanda_Ruta_Oeste_Text_Necio_2Defeated
	msgbox NeoLavanda_Ruta_Oeste_Text_Necio_2PostBattle, MSGBOX_AUTOCLOSE
	end

NeoLavanda_Ruta_Oeste_Policia::
lock
faceplayer
compare VAR_ROUTE105_STATE, 12
goto_if_gt NeoLavanda_Ruta_Oeste_Policia_4
compare VAR_ROUTE105_STATE, 7
goto_if_lt NeoLavanda_Ruta_Oeste_Policia_2
compare VAR_ROUTE105_STATE, 11
goto_if_lt NeoLavanda_Ruta_Oeste_Policia_3
msgbox NeoLavanda_Ruta_Oeste_Policia_Texto_1 MSGBOX_NPC
release
end

NeoLavanda_Ruta_Oeste_Policia_4:
msgbox NeoLavanda_Ruta_Oeste_Policia_Texto_4 MSGBOX_NPC
release
end

NeoLavanda_Ruta_Oeste_Policia_3:
msgbox NeoLavanda_Ruta_Oeste_Policia_Texto_3 MSGBOX_NPC
release
end

NeoLavanda_Ruta_Oeste_Policia_2:
msgbox NeoLavanda_Ruta_Oeste_Policia_Texto_2 MSGBOX_NPC
release
end

NeoLavanda_Ruta_Oeste_Policia_Texto_4:
	.string "Although the UNDERGROUND PATH is\n"
	.string "closed, we can make an exception for\l"
	.string "someone like you.$"

NeoLavanda_Ruta_Oeste_Policia_Texto_3:
	.string "My colleagues are inside, they are\n"
	.string "guarding the entrance to the shelters\l"
	.string "carefully. We hope you can solve the\l"
	.string "situation.$"

NeoLavanda_Ruta_Oeste_Policia_Texto_2:
	.string "I apologize, sir, but the UNDERGROUND\n"
	.string "PATH will be closing shortly. You know,\l"
	.string "it's orders from above.$"

NeoLavanda_Ruta_Oeste_Policia_Texto_1:
	.string "The UNDERGROUND PATH is closed\n"
	.string "indefinitely. If you want to go to\l"
	.string "CELADON, you'll have to pass through\l"
	.string "SAFFRON.$"

NeoLavanda_Ruta_Oeste_Nopass::
lock
applymovement 10, NeoLavanda_Ruta_Oeste_Nopass_Move_5
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, NeoLavanda_Ruta_Oeste_Nopass_Move_1
waitmovement 0x0
msgbox NeoLavanda_Ruta_Oeste_Policia_Texto_2 MSGBOX_NPC
applymovement 10, NeoLavanda_Ruta_Oeste_Nopass_Move_3
applymovement OBJ_EVENT_ID_PLAYER, NeoLavanda_Ruta_Oeste_Nopass_Move_4
waitmovement 0x0
release
end

NeoLavanda_Ruta_Oeste_Nopass_Move_4:
walk_slow_down
step_end

NeoLavanda_Ruta_Oeste_Nopass_Move_3:
face_down
step_end

NeoLavanda_Ruta_Oeste_Nopass_Move_1:
face_right
step_end

NeoLavanda_Ruta_Oeste_Nopass_Move_2:
face_left
step_end

NeoLavanda_Ruta_Oeste_Nopass_Move_5:
walk_in_place_right
step_end

