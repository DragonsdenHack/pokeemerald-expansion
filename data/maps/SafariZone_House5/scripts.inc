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
.string "¿Sigues insistiendo?\n"
	.string "No tendré menor reparo en echarte\l"
	.string "de aquí por la fuerza.\l"
	.string "¿Vas a largarte de una vez?$"

SafariZone_House5_Combate_Domador_Texto_4:
.string "En cuanto le diga a KOGA lo que ha\n"
	.string "ocurrido aquí te expulsarán del\l"
	.string "SAFARI, él es la persona con mayor\l"
	.string "poder aquí.$"

SafariZone_House5_Combate_Domador_Texto_5:
.string "Veo que por lo menos eres\n"
	.string "razonable, sigue tu camino.$"

SafariZone_House5_Combate_Domador_Texto_6:
.string "No tienes idea de lo que acabas de\n"
	.string "hacer, como DOMADOR del SAFARI, tengo\l"
	.string "acceso a los POKÉMON más fieros y\l"
	.string "salvajes de este lugar.\l"
	.string "¡No me hago responsable de lo que le\l"
	.string "ocurra a tu equipo después de lanzar\l"
	.string "a mis bravos POKÉMON al combate!$"

SafariZone_House5_Combate_Domador_Texto_7:
.string "¡Mis bravos POKÉMON!$"

SafariZone_House5_Combate_Domador_Texto_8:
.string "-{PLAYER} robó una MO03 de\n"
	.string "DOMADOR SAFARI-$"

SafariZone_House5_Combate_Domador_Texto_9:
.string "Maldición, ¿como te atreves?\n"
	.string "¡Será que eres un ROCKET\l"
	.string "después de todo!\l"
	.string "¡Me quejaré a KOGA de esto, verás\l"
	.string "cómo él consigue que te retiren tu\l"
	.string "PASE SAFARI!$"

SafariZone_House5_Combate_Domador_Move_1:
emote_exclamation_mark
step_end
