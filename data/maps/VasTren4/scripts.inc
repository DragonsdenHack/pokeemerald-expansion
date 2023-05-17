VasTren4_MapScripts::
	.byte 0

ViasTren4_2::
lock     
faceplayer     
msgbox ViasTren4_Text_2, MSGBOX_DEFAULT
release     
end

ViasTren4_Text_2:
.string "Creo que vi un PINSIR más al oeste, pero\n"
.string "parecía algo distinto.$"



ViasTren4_4::
lock     
faceplayer     
msgbox ViasTren4_Text_4, MSGBOX_DEFAULT
release     
end

ViasTren4_Text_4:
.string "CIUDAD VERDE está al norte, es casi el\n"
.string "80% del trayecto TRIGAL-AZAFRÁN.$"



ViasTren4_7::
lock     
faceplayer     
msgbox ViasTren4_Text_7, MSGBOX_DEFAULT
release     
end

ViasTren4_Text_7:
.string "Las vías están ya casi construidas,\n"
.string "falta establecer el enlace final con\l"
.string "AZAFRÁN, y todo estará listo.$"



ViasTren4_EventScript_Obrero::
	trainerbattle_single TRAINER_GABRIELLE_5, ViasTren4_Text_ObreroIntro, ViasTren4_Text_ObreroDefeated
	msgbox ViasTren4_Text_ObreroPostBattle, MSGBOX_AUTOCLOSE
	end
