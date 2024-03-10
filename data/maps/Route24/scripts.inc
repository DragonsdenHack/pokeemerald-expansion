Route24_MapScripts::
	.byte 0

Route24_1::
end

Route24_2::
end

Route24_3::
end

Route24_4::
end


Route24_5::
end

Route24_6::
end

Route24_7::
end

Route24_8::
end

Route24_EventScript_Cazabichos::
	trainerbattle_single TRAINER_VALERIE_3, Route24_Text_CazabichosIntro, Route24_Text_CazabichosDefeated
	msgbox Route24_Text_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end


Route24_EventScript_Chica::
	trainerbattle_single TRAINER_MELISSA, Route24_Text_ChicaIntro, Route24_Text_ChicaDefeated
	msgbox Route24_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route24_EventScript_Chico::
	trainerbattle_single TRAINER_KEIRA, Route24_Text_ChicoIntro, Route24_Text_ChicoDefeated
	msgbox Route24_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



Route24_EventScript_Chica2::
	trainerbattle_single TRAINER_CINDY_6, Route24_Text_Chica2Intro, Route24_Text_Chica2Defeated
	msgbox Route24_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



Route24_EventScript_Chico2::
	trainerbattle_single TRAINER_MARK, Route24_Text_Chico2Intro, Route24_Text_Chico2Defeated
	msgbox Route24_Text_Chico2PostBattle, MSGBOX_AUTOCLOSE
	end



Route24_EventScript_Chico3::
	trainerbattle_single TRAINER_THALIA_1, Route24_Text_Chico3Intro, Route24_Text_Chico3Defeated
	msgbox Route24_Text_Chico3PostBattle, MSGBOX_AUTOCLOSE
	end

Route24_Recluta::
delay 10
applymovement 1, Route24_Recluta_move2
applymovement OBJ_EVENT_ID_PLAYER, Route24_Recluta_move1
waitmovement 0x0
msgbox Route24_Recluta_text_1 MSGBOX_AUTOCLOSE
msgbox Route24_Recluta_text_2 MSGBOX_AUTOCLOSE
msgbox Route24_Recluta_text_3 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 20
release
end

Route24_Recluta_2::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 20
goto_if_gt Route24_Recluta_4
compare VAR_UNUSED_0x40F7, 19
goto_if_gt Route24_Recluta_3
msgbox Route24_Recluta_text_1 MSGBOX_AUTOCLOSE
msgbox Route24_Recluta_text_2 MSGBOX_AUTOCLOSE
msgbox Route24_Recluta_text_3 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 20
release
end

Route24_Recluta_3::
msgbox Route24_Recluta_text_4 MSGBOX_AUTOCLOSE
release
end

Route24_Recluta_4::
msgbox Route24_Recluta_text_5 MSGBOX_AUTOCLOSE
release
end





Route24_Recluta_text_1:
.string "No está nada mal para un ROCKET.\n"
	.string "Qué pena que este reto no sea para\l"
	.string "vosotros…\l"
	.string "Yo también soy un ROCKET, todo el\l"
	.string "circo que hay aquí montado en el\l"
	.string "PUENTE PEPITA es para enrolar a\l"
	.string "nuevos RECLUTAS, esos pobres\l"
	.string "ENTRENADORES de ahí abajo creen\l"
	.string "que es una iniciativa social.\l"
	.string "¡Pobres ilusos!$"


Route24_Recluta_text_2:
.string "…$"

Route24_Recluta_text_3:
.string "¿Te han encomendado una misión por\n"
	.string "aquí?\l"
	.string "¿Robarle unas patentes a BILL?\l"
	.string "La casa de BILL está al final de\l"
	.string "CABO CELESTE, al este de RUTA 25.\l"
	.string "Espero que tengas éxito camarada.\l"
	.string "Nadie del TEAM ROCKET traga a\l"
	.string "BILL, es un egocéntrico elitista\l"
	.string "mimado que cree ser superior a los\l"
	.string "demás por contar con POKÉMON raros\l"
	.string "que la mayoría no puede\l"
	.string "permitirse.\l"
	.string "¡Dale una buena paliza de nuestra\l"
	.string "parte!$"

Route24_Recluta_text_4:
.string "La casa de BILL está al final de\n"
	.string "CABO CELESTE, al este de RUTA 25.\l"
	.string "Espero que tengas éxito camarada.\l"
	.string "Nadie del TEAM ROCKET traga a\l"
	.string "BILL, es un egocéntrico elitista\l"
	.string "mimado que cree ser superior a los\l"
	.string "demás por contar con POKÉMON raros\l"
	.string "que la mayoría no puede\l"
	.string "permitirse.\l"
	.string "¡Dale una buena paliza de nuestra\l"
	.string "parte!$"

Route24_Recluta_text_5:
.string "¡Lo hiciste!\n"
	.string "¡Hubiera pagado para ver la cara\l"
	.string "de BILL después de ver como un\l"
	.string "ROCKET tumba a todos sus POKÉMON\l"
	.string "comprados!\l"
	.string "¡Has honrado nuestro nombre!$"


Route24_Recluta_move1:
walk_in_place_right
step_end

Route24_Recluta_move2:
walk_in_place_left
step_end
