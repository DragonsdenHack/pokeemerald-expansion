Ecruteak_Gym_MapScripts::
	.byte 0

EcruteakGym1::
end



EcruteakGym2::
end



EcruteakGym3::
end



EcruteakGym4::
lock     
faceplayer     
msgbox Ecruteak_Gym_Text_4, MSGBOX_DEFAULT
release     
end

Ecruteak_Gym_Text_4:
.string "¿Nuestro LÍDER?\n"
.string "Lo siento, pero JOHTO dejó de\l"
.string "formar parte de la LIGA POKÉMON,\l"
.string "nuestro LÍDER no tiene la\l"
.string "obligación de estar aquí. Es por\l"
.string "ello que pasa día y noche en TORRE\l"
.string "CAMPANA.$"



EcruteakGym5::
lock     
faceplayer     
msgbox Ecruteak_Gym_Text_5, MSGBOX_DEFAULT
release     
end

Ecruteak_Gym_Text_5:
.string "¡Ah, hola, joven aspirante!\n"
.string "O eso debería de decir si pudieras\l"
.string "retar a nuestro LÍDER. Solo\l"
.string "quedan los discípulos. Nuestro\l"
.string "LÍDER ha sido el PENSADOR más\l"
.string "influyente de JOHTO en los últimos\l"
.string "tiempos, y como tal, su lugar está\l"
.string "en TORRE CAMPANA. Deberás subir a\l"
.string "la cima si quieres retarle.$"



EcruteakGym6::
end



EcruteakGym_EventScript_Sabio::
	trainerbattle_single TRAINER_RELI_AND_IAN, EcruteakGym_Text_SabioIntro, EcruteakGym_Text_SabioDefeated
	msgbox EcruteakGym_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end



EcruteakGym_EventScript_Sabio2::
	trainerbattle_single TRAINER_LILA_AND_ROY_2, EcruteakGym_Text_Sabio2Intro, EcruteakGym_Text_Sabio2Defeated
	msgbox EcruteakGym_Text_Sabio2PostBattle, MSGBOX_AUTOCLOSE
	end



EcruteakGym_EventScript_Exorcista::
	trainerbattle_single TRAINER_LILA_AND_ROY_3, EcruteakGym_Text_ExorcistaIntro, EcruteakGym_Text_ExorcistaDefeated
	msgbox EcruteakGym_Text_ExorcistaPostBattle, MSGBOX_AUTOCLOSE
	end



EcruteakGym_EventScript_Exorcista2::
	trainerbattle_single TRAINER_LILA_AND_ROY_1, EcruteakGym_Text_Exorcista2Intro, EcruteakGym_Text_Exorcista2Defeated
	msgbox EcruteakGym_Text_Exorcista2PostBattle, MSGBOX_AUTOCLOSE
	end
