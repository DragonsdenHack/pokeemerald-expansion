Newbark_ElmLaboratory_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Newbark_ElmLaboratory_OnFrame
	.byte 0

Newbark_ElmLaboratory_OnFrame:
map_script_2 VAR_UNUSED_0x40F8, 57, Newbark_ElmLaboratory_Final
	.2byte 0

ElmLaboratory1::
end



ElmLaboratory2::
lock     
faceplayer     
msgbox NewBarkTown_ElmLaboratory_Text_2, MSGBOX_DEFAULT
release     
end

NewBarkTown_ElmLaboratory_Text_2:
.string "¡Hay mucho por hacer!\n"
.string "¡Toda la región ha de ser\l"
.string "acomodada para ello!$"



ElmLaboratory3::
lock     
faceplayer     
msgbox NewBarkTown_ElmLaboratory_Text_3, MSGBOX_DEFAULT
release     
end

NewBarkTown_ElmLaboratory_Text_3:
.string "Oh, debes de ser {PLAYER}, ¿verdad?\n"
.string "¿Cómo es estar en presencia de\l"
.string "OAK?$"

NewBarkTown_ElmLaboratory_Combate_Elm::
lock
faceplayer
compare VAR_UNUSED_0x40F8, 30
goto_if_gt NewBarkTown_ElmLaboratory_Combate_Elm_Hoenn
checkitem ITEM_AERODACTYLITE
goto_if_eq VAR_RESULT, FALSE, NewBarkTown_ElmLaboratory_Combate_Elm_2
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Texto_3 MSGBOX_AUTOCLOSE
release
end

NewBarkTown_ElmLaboratory_Combate_Elm_2::
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Texto_1 MSGBOX_AUTOCLOSE
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq NewBarkTown_ElmLaboratory_Combate_Elm_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ELM_2, NewBarkTown_ElmLaboratory_Combate_Elm_Texto_5
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Texto_6 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_AERODACTYLITE
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Texto_6.1 MSGBOX_DEFAULT
waitfanfare
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Texto_7 MSGBOX_AUTOCLOSE
release
end

NewBarkTown_ElmLaboratory_Combate_Elm_Hoenn::
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Hoenn_Texto_1 MSGBOX_AUTOCLOSE
release
end

NewBarkTown_ElmLaboratory_Combate_Elm_Hoenn_Texto_1:
.string "Buenos días, {PLAYER}.\n"
	.string "Y por si no volvemos a vernos,\l"
	.string "buenas tardes y buenas noches.$"

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_6.1:
.string "¡Obtuviste AERODACTYLITA de manos\n"
	.string "de PROFESOR ELM!$"

NewBarkTown_ElmLaboratory_Combate_Elm_No::
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Texto_8 MSGBOX_AUTOCLOSE
release
end

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_1:
.string "El TEAM ROCKET ha logrado algo que\n"
	.string "hace un par de años parecía\l"
	.string "impensable. No solo que KANTO y\l"
	.string "JOHTO comienzen a remar en una\l"
	.string "sola dirección, también que sus\l"
	.string "más influyentes personajes\l"
	.string "trabajen a una.$"

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_2:
.string "Dime, {PLAYER}, ¿te gustaría ver\n"
	.string "los últimos avances tecnológicos\l"
	.string "que hemos logrado?$"

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_3:
.string "¿Y ahora qué?\n"
	.string "¡A trabajar en el futuro, 2 años y\l"
	.string "no reconoceremos la tierra sobre\l"
	.string "la que hoy andamos!$"

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_4:
.string "No esperaba menos, ¡mi ejército de\n"
	.string "prototipos está listo!$"

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_5:
.string "Juntas tecnología con técnica,\n"
	.string "interesante.$"

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_6:
.string "Esto es lo que ocurre cuando todos\n"
	.string "ponen un poco de su parte, {PLAYER}.\l"
	.string "El PORYGON3 de BILL, así como el\l"
	.string "MAGMORTAR-Y de BLAINE, los\l"
	.string "experimentos de OAK{PAUSE 25}…{PAUSE 25} Todos\l"
	.string "trabajan ahora para KANTO y JOHTO,\l"
	.string "la unión de las dos regiones será\l"
	.string "la principal potencia del mundo\l"
	.string "POKÉMON, y tú, uno de sus más\l"
	.string "altos cargos. Por ello, quiero que\l"
	.string "tengas esto.$"

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_7:
.string "El principal colaborador de BILL\n"
	.string "logró desarrollar esta MEGAPIEDRA,\l"
	.string "que devuelve a AERODACTYL el\l"
	.string "95% de sus cualidades en estado\l"
	.string "primigenio. Me dijo que te\l"
	.string "regalase una en caso de verte.$"

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_8:
.string "Pse, tú mismo, creí que te llamaba\n"
	.string "lo extraordinario.$"

Newbark_ElmLaboratory_Final_Move_1:
walk_slow_down
walk_slow_down
walk_slow_down
step_end

Newbark_ElmLaboratory_Final_Move_2:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

Newbark_ElmLaboratory_Final_Move_3:
walk_slow_left
walk_slow_left
walk_slow_up
step_end

Newbark_ElmLaboratory_Final::
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Newbark_ElmLaboratory_Final_Move_1
waitmovement 0x0
special RemoveCameraObject
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_53 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_54 MSGBOX_AUTOCLOSE
delay 45
applymovement 4, Newbark_ElmLaboratory_Final_Move_2
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_55 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_56 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_57 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_58 MSGBOX_AUTOCLOSE
applymovement 1, Newbark_ElmLaboratory_Final_Move_3
clearflag FLAG_VISITED_LITTLEROOT_TOWN
setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
clearflag FLAG_NUEVA_292
setflag FLAG_HOENN_289
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
setvar VAR_UNUSED_0x40F8, 58
setvar VAR_TEMP_1, 1
goto EverGrandeCity_HallOfFame_EventScript_GameClearMale
release
end

