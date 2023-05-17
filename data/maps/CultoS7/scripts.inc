CultoS7_MapScripts::
	.byte 0

CultoS7_1::
lock     
faceplayer     
msgbox CultoS7_Text_7, MSGBOX_DEFAULT
release     
end

CultoS7_Text_7:
.string "Conviértete en un alquimista:\n"
.string "transmuta el metal inferior en oro, el\l"
.string "sufrimiento en conciencia, el desastre\l"
.string "en iluminación.$"



CultoS7_EventScript_Cultista::
	trainerbattle_single TRAINER_KOJI_5, CultoS7_Text_CultistaIntro, CultoS7_Text_CultistaDefeated
	msgbox CultoS7_Text_CultistaPostBattle, MSGBOX_AUTOCLOSE
	end
