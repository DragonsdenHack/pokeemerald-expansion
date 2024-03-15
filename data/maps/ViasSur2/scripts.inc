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
	.string "Our ELECTRIC and ROCK TYPES POKÉMON\n"
	.string "should theoretically be able to stop\l"
	.string "that Pokémon, but we haven't been able\l"
	.string "to spot it.$"
