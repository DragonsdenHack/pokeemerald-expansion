CultoS1_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, CultoS1_OnResume
	.byte 0

CultoS1_OnResume:
	call CultoS1_SetupEscapeWarp
	end

CultoS1_SetupEscapeWarp::
	setescapewarp MAP_ROUTE12, 12, 2
	return

CultoS1_EventScript_Medium::
	trainerbattle_single TRAINER_RICKY_5, CultoS1_Text_MediumIntro, CultoS1_Text_MediumDefeated
	msgbox CultoS1_Text_MediumPostBattle, MSGBOX_AUTOCLOSE
	end



CultoS1_EventScript_Medium2::
	trainerbattle_single TRAINER_RANDALL, CultoS1_Text_Medium2Intro, CultoS1_Text_Medium2Defeated
	msgbox CultoS1_Text_Medium2PostBattle, MSGBOX_AUTOCLOSE
	end

CultoS1_NPC_3::
lock
faceplayer
msgbox CultoS1_NPC_3_Texto_1 MSGBOX_AUTOCLOSE
release
end

CultoS1_NPC_3_Texto_1:
.string "La gente de KANTO nos olvidó hace\n"
	.string "ya incontables generaciones, pero\l"
	.string "KANTO es mucho más que su gente,\l"
	.string "el POKÉMON ESENCIA nada pasa por\l"
	.string "alto.$"

CultoS1_NPC_4::
lock
faceplayer
msgbox CultoS1_NPC_4_Texto_1 MSGBOX_AUTOCLOSE
release
end

CultoS1_NPC_4_Texto_1:
.string "No vas a ver al POKÉMON ESENCIA si\n"
	.string "eso es lo que pretendes, nadie lo\l"
	.string "ha visto en siglos.$"

CultoS1_NPC_5::
lock
faceplayer
msgbox CultoS1_NPC_5_Texto_1 MSGBOX_AUTOCLOSE
release
end

CultoS1_NPC_5_Texto_1:
.string "Siquiera FUJI sabe de la\n"
	.string "existencia de este lugar, ¿cómo\l"
	.string "pudiste encontrarnos?$"


CultoS1_NPC_6::
lock
faceplayer
msgbox CultoS1_NPC_6_Texto_1 MSGBOX_AUTOCLOSE
release
end

CultoS1_NPC_6_Texto_1:
.string "Entonces la leyenda sigue\n"
	.string "circulando por la región,\l"
	.string "dispuesta a servir a quien le\l"
	.string "preste atención, bien{PAUSE 5}…{PAUSE 5}$"
