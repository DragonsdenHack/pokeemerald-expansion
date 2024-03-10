Newbark_ElmLaboratory_MapScripts::
	.byte 0

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

