Goldenrod_Underground_MapScripts::
	.byte 0

GoldenrodUnderground1::
end



GoldenrodUnderground2::
end



GoldenrodUnderground3::
end



GoldenrodUnderground4::
end



GoldenrodUnderground5::
end



GoldenrodUnderground6::
end



GoldenrodUnderground7::
end



GoldenrodUnderground8::
end



GoldenrodUnderground9::
lock     
faceplayer     
msgbox Text_9, MSGBOX_DEFAULT
release     
end

Text_9:
.string "Aquí puedes llegar a encontrar\n"
.string "cosas incluso más interesantes que\l"
.string "en el CASINO y el CENTRO\l"
.string "COMERCIAL.\l"
.string "¡Es lo que tiene el mercado negro,\l"
.string "nunca sabes lo que puedes\l"
.string "llegar a ver por aquí!$"



GoldenrodUnderground10::
end



GoldenrodUnderground11::
end



GoldenrodUnderground_EventScript_Maton::
	trainerbattle_single TRAINER_MAY_LILYCOVE_MUDKIP, GoldenrodUnderground_Text_MatonIntro, GoldenrodUnderground_Text_MatonDefeated
	msgbox GoldenrodUnderground_Text_MatonPostBattle, MSGBOX_AUTOCLOSE
	end



GoldenrodUnderground_EventScript_Necio::
	trainerbattle_single TRAINER_MAY_LILYCOVE_TORCHIC, GoldenrodUnderground_Text_NecioIntro, GoldenrodUnderground_Text_NecioDefeated
	msgbox GoldenrodUnderground_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



GoldenrodUnderground_EventScript_Ladron::
	trainerbattle_single TRAINER_WAYNE, GoldenrodUnderground_Text_LadronIntro, GoldenrodUnderground_Text_LadronDefeated
	msgbox GoldenrodUnderground_Text_LadronPostBattle, MSGBOX_AUTOCLOSE
	end



GoldenrodUnderground_EventScript_Maton2::
	trainerbattle_single TRAINER_TRAINER_105, GoldenrodUnderground_Text_Maton2Intro, GoldenrodUnderground_Text_Maton2Defeated
	msgbox GoldenrodUnderground_Text_Maton2PostBattle, MSGBOX_AUTOCLOSE
	end

Goldenrod_Underground_Motero_Bloqueo::
lock
faceplayer
msgbox Goldenrod_Underground_Motero_Bloqueo_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_EVER_GRANDE_CITY_STATE, 0
goto_if_gt Goldenrod_Underground_Motero_Bloqueo_2
release
end

Goldenrod_Underground_Motero_Bloqueo_2::
delay 20
msgbox Goldenrod_Underground_Motero_Bloqueo_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse MUS_RG_ENCOUNTER_BOY
msgbox Goldenrod_Underground_Motero_Bloqueo_Texto_3 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_105, Goldenrod_Underground_Motero_Bloqueo_Texto_4
msgbox Goldenrod_Underground_Motero_Bloqueo_Texto_5 MSGBOX_AUTOCLOSE
applymovement 12, Goldenrod_Underground_Motero_Bloqueo_Move_1
waitmovement 0x0
setflag FLAG_HIDE_LILYCOVE_HARBOR_SSTIDAL
removeobject 12
playse SE_EXIT
release
end

Goldenrod_Underground_Motero_Bloqueo_Move_1:
face_up
step_end

Goldenrod_Underground_Motero_Bloqueo_Texto_1:
.string "¿Tienes algún problema? ¡Largo de aquí,\n"
	.string "este lugar no es para pijos como tú!$"

Goldenrod_Underground_Motero_Bloqueo_Texto_2:
.string "… …$"

Goldenrod_Underground_Motero_Bloqueo_Texto_3:
.string "Quieres pelea? ¡De nada van a servirte\n"
	.string "esos POKÉMON comprados!$"

Goldenrod_Underground_Motero_Bloqueo_Texto_4:
.string "¿Quién te ha vendido esos POKÉMON?$"

Goldenrod_Underground_Motero_Bloqueo_Texto_5:
.string "¡Puaf, me confié! ¡Espera a que avise al\n"
	.string "JEFE! ¡Por mucho que hayas comprado\l"
	.string "POKÉMON de calidad, él siempre se queda\l"
	.string "con los mejores!$"

