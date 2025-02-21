SafariZone_House5_MapScripts::
	.byte 0

SafariZoneHouse5_1::
end

SafariZone_House5_Combate_Domador::
lock
faceplayer
compare VAR_ROUTE134_STATE, 1
goto_if_gt SafariZone_House5_Combate_Domador_2
msgbox SafariZone_House5_Combate_Domador_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox SafariZone_House5_Combate_Domador_Texto_1.1 MSGBOX_AUTOCLOSE
delay 20
msgbox SafariZone_House5_Combate_Domador_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox SafariZone_House5_Combate_Domador_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq SafariZone_House5_Combate_Domador_No
msgbox SafariZone_House5_Combate_Domador_Texto_5 MSGBOX_AUTOCLOSE
release
end

SafariZone_House5_Combate_Domador_2::
msgbox SafariZone_House5_Combate_Domador_Texto_4 MSGBOX_AUTOCLOSE
release
end


SafariZone_House5_Combate_Domador_No::
playse MUS_RG_ENCOUNTER_ROCKET
msgbox SafariZone_House5_Combate_Domador_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_SAFARI, SafariZone_House5_Combate_Domador_Texto_7
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_HM03_SURF
waitfanfare
delay 20
msgbox SafariZone_House5_Combate_Domador_Texto_8 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, SafariZone_House5_Combate_Domador_Move_1
waitmovement 0x0
waitse
msgbox SafariZone_House5_Combate_Domador_Texto_9 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE134_STATE, 2
release
end

SafariZone_House5_Combate_Domador_Texto_1:
.string "Siento decepcionarte, pero aquí no\n"
	.string "ofrecemos ningún tipo de premio a\l"
	.string "nuestros clientes VIP, es solo para\l"
	.string "quienes pagan la entrada.$"

SafariZone_House5_Combate_Domador_Texto_1.1:
	.string "De todos modos, jamás le daría el\n"
	.string "premio del SAFARI a alguien que\l"
	.string "viste así. Más aún, si estuviera\l"
	.string "en mi mano, me hubiera encargado de\l"
	.string "que no pusieras un pie aquí, siquiera\l"
	.string "pagando.\l"
	.string "Ahí tienes tu respuesta a si hay o\l"
	.string "no hay premio aquí.$"

SafariZone_House5_Combate_Domador_Texto_2:
.string "…\n"
	.string "{PAUSE 5}…{PAUSE 5}$"

SafariZone_House5_Combate_Domador_Texto_3:
	.string "Are you still insisting? I won't think\n"
	.string "twice about kicking you out of here\l"
	.string "using force. Will you leave now?$"

SafariZone_House5_Combate_Domador_Texto_4:
	.string "When I tell KOGA about what happened\n"
	.string "here, he'll remove your VIP access from\l"
	.string "the SAFARI, he's the most influential\l"
	.string "figure here.$"

SafariZone_House5_Combate_Domador_Texto_5:
	.string "I see that at least you are reasonable,\n"
	.string "keep your way.$"

SafariZone_House5_Combate_Domador_Texto_6:
	.string "You have no idea about what you just\n"
	.string "did, as a SAFARI TAMER I have access to\l"
	.string "the wildest and strongest POKÉMON of\l"
	.string "this place. Whatever happens to your\l"
	.string "team after releasing my bravery\l"
	.string "POKÉMON to the battle is not my\l"
	.string "concern!$"

SafariZone_House5_Combate_Domador_Texto_7:
.string "My brave POKÉMON!$"

SafariZone_House5_Combate_Domador_Texto_8:
	.string "({PLAYER} stole a HM03 from the\n"
	.string "SAFARI TAMER)$"

SafariZone_House5_Combate_Domador_Texto_9:
	.string "Damn it, how dare you? You are a ROCKET\n"
	.string "after all! I will complain to KOGA about\l"
	.string "this; you'll see how he gets your SAFARI\l"
	.string "PASS revoked!$"

SafariZone_House5_Combate_Domador_Move_1:
emote_exclamation_mark
step_end
