Viastren5_MapScripts::
	.byte 0

ViasTren5_2::
lock     
faceplayer     
msgbox ViasTren5_Text_2, MSGBOX_DEFAULT
release     
end

ViasTren5_Text_2:
.string "Los poderes eléctricos de ese POKÉMON\n"
.string "eran incomparables, creo que se siente\l"
.string "atraído por el magnetismo de estas\l"
.string "vías.$"



ViasTren5_6::
lock     
faceplayer     
msgbox ViasTren5_Text_6, MSGBOX_DEFAULT
release     
end

ViasTren5_Text_6:
.string "Hemos pasado AZULONA. ¡AZAFRÁN está al\n"
.string "lado!$"



ViasTren5_EventScript_Obrero::
	trainerbattle_single TRAINER_THALIA_2, ViasTren5_Text_ObreroIntro, ViasTren5_Text_ObreroDefeated
	msgbox ViasTren5_Text_ObreroPostBattle, MSGBOX_AUTOCLOSE
	end



ViasTren5_EventScript_Obrero2::
	trainerbattle_single TRAINER_THALIA_3, ViasTren5_Text_Obrero2Intro, ViasTren5_Text_Obrero2Defeated
	msgbox ViasTren5_Text_Obrero2PostBattle, MSGBOX_AUTOCLOSE
	end
