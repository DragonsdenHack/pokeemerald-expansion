ViasSur_MapScripts::
	.byte 0

ViasSur_EventScript_Obrero::
	trainerbattle_single TRAINER_TRAINER_221, ViasSur_Text_ObreroIntro, ViasSur_Text_ObreroDefeated
	msgbox ViasSur_Text_ObreroPostBattle, MSGBOX_AUTOCLOSE
	end

ViasSur_Primer_Obrero::
lock
faceplayer
msgbox ViasSur_Primer_Obrero_Texto_1 MSGBOX_AUTOCLOSE
release
end

ViasSur_Primer_Obrero_Texto_1:
.string "...$"
