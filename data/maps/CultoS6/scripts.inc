CultoS6_MapScripts::
	.byte 0



CultoS6_EventScript_Cultista::
	trainerbattle_single TRAINER_KOJI_4, CultoS6_Text_CultistaIntro, CultoS6_Text_CultistaDefeated
	msgbox CultoS6_Text_CultistaPostBattle, MSGBOX_AUTOCLOSE
	end
