VasTren4_MapScripts::
	.byte 0

ViasTren4_2::
lock     
faceplayer     
msgbox ViasTren4_Text_2, MSGBOX_DEFAULT
release     
end

ViasTren4_Text_2:
	.string "I think I saw a PINSIR further west,\n"
	.string "but it seemed a bit different.$"



ViasTren4_4::
lock     
faceplayer     
msgbox ViasTren4_Text_4, MSGBOX_DEFAULT
release     
end

ViasTren4_Text_4:
	.string "VIRIDIAN CITY is at the north, almost\n"
	.string "80% of the GOLDENROD-SAFFRON way.$"



ViasTren4_7::
lock     
faceplayer     
msgbox ViasTren4_Text_7, MSGBOX_DEFAULT
release     
end

ViasTren4_Text_7:
	.string "The tracks are nearly built; the final\n"
	.string "link to SAFFRON CITY is all that's left\l"
	.string "to establish, and everything will be\l"
	.string "ready.$"



ViasTren4_EventScript_Obrero::
	trainerbattle_single TRAINER_GABRIELLE_5, ViasTren4_Text_ObreroIntro, ViasTren4_Text_ObreroDefeated
	msgbox ViasTren4_Text_ObreroPostBattle, MSGBOX_AUTOCLOSE
	end
