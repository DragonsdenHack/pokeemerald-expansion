ViasSur2_MapScripts::
	.byte 0

ViasSur2_EventScript_Obrero::
	trainerbattle_single TRAINER_TRAINER_222, ViasSur2_Text_ObreroIntro, ViasSur2_Text_ObreroDefeated
	msgbox ViasSur2_Text_ObreroPostBattle, MSGBOX_AUTOCLOSE
	end


ViasSur2_Primer_Obrero::
lock
faceplayer
msgbox ViasSur2_Primer_Obrero_Texto_1 MSGBOX_AUTOCLOSE
release
end

ViasSur2_Primer_Obrero_Texto_1:
.string "Nuestros POKÉMON ELÉCTRICO y ROCA\n"
	.string "deberían en teoría detener a ese\l"
	.string "POKÉMON, pero no somos capaces de\l"
	.string "avistarlo.$"
