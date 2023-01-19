UndergroundPath_2F_MapScripts::
	.byte 0

UndergroundPath2F_2::
end



UndergroundPath2F_3::
end



UndergroundPath2F_4::
end



UndergroundPath2F_5::
end

UndergroundPath2F_Andra::
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath2F_Andra_move_1
waitmovement 0x0
playse SE_PIN
applymovement 1, UndergroundPath2F_Andra_move_2
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_1, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_2, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_3, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_4, MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_2, UndergroundPath2F_Andra_Text_5
msgbox UndergroundPath2F_Andra_Text_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_7, MSGBOX_AUTOCLOSE
applymovement 1, UndergroundPath2F_Andra_move_5
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
removeobject 1
setvar VAR_UNUSED_0x40F7, 8
release
end

UndergroundPath2F_Andra_Text_1:
.string "ANDRA: ¡{PLAYER}!\n"
	.string "Perdón por haberme adelantado,\l"
	.string "pero quería eclosionar cuanto\l"
	.string "antes el HUEVO que ATLAS nos dio\l"
	.string "al acabar nuestra misión en ISLA\l"
	.string "INTA, y así comenzar ya a\l"
	.string "entrenarlo.$"

UndergroundPath2F_Andra_Text_2:
    .string "Con las prisas se me olvidó\n"
	.string "informarte acerca del lugar que se\l"
	.string "nos ha asignado para las próximas\l"
	.string "misiones, hay varios temas que al\l"
	.string "parecer requieren de nuestra\l"
	.string "intervención.$"

UndergroundPath2F_Andra_Text_3:
    .string "Entretanto, ¿qué opinas de los\n"
	.string "ciudadanos de KANTO?\l"
	.string "Parece que no les agradamos en lo\l"
	.string "más mínimo, ¿eh?\l"
	.string "Al parecer la ÉLITE 4 inició hace\l"
	.string "ya tiempo una campaña de\l"
	.string "desprestigio contra la\l"
	.string "organización, poco después de\l"
	.string "acabar la guerra.$"

UndergroundPath2F_Andra_Text_4:
    .string "He tenido tiempo desde mi derrota\n"
	.string "ante la CÓNSUL de mejorar a mi\l"
	.string "EQUIPO POKÉMON, dudo mucho que\l"
	.string "ahora pueda vencerme, sin embargo,\l"
	.string "quiero probar si el desenlace de\l"
	.string "nuestro primer combate en\l"
	.string "presencia de ATLAS fue casualidad\l"
	.string "o no, ¡prepárate iré con todo!$"

UndergroundPath2F_Andra_Text_5:
    .string "De modo que no era casualidad,\n"
	.string "realmente eres un ENTRENADOR\l"
	.string "notable.$"

UndergroundPath2F_Andra_Text_6:
    .string "Así que vas en serio, debería de\n"
	.string "alegrarme, prefiero tener a mi\l"
	.string "lado en futuras misiones a alguien\l"
	.string "de mi nivel que a alguien\l"
	.string "mediocre, pero no te confíes, en\l"
	.string "cualquier momento voy a superar tu\l"
	.string "nivel. Me convertiré en la RECLUTA\l"
	.string "más fuerte y eficiente de toda la\l"
	.string "organización.$"

UndergroundPath2F_Andra_Text_7:
	.string "Un mensajero me dijo que el\n"
	.string "ADMINISTRADOR ROCKET de esta zona,\l"
	.string "PETREL, nos ha citado en la\l"
	.string "GUARDERÍA POKÉMON que hay al\l"
	.string "atravesar este subterráneo, dijo\l"
	.string "que entráramos al lugar\l"
	.string "disimuladamente y sin ser vistos,\l"
	.string "eso es todo. De modo que ahí nos\l"
	.string "vemos.\l"
	.string "¡No tardes, eh!$"

UndergroundPath2F_Andra_move_1:
walk_in_place_up
step_end

UndergroundPath2F_Andra_move_2:
emote_exclamation_mark
walk_slow_left
walk_down
walk_down
step_end

UndergroundPath2F_Andra_move_2.1:
emote_exclamation_mark
walk_down
walk_down
step_end

UndergroundPath2F_Andra_move_2.2:
emote_exclamation_mark
walk_slow_right
walk_down
walk_down
step_end

UndergroundPath2F_Andra_move_2.3:
emote_exclamation_mark
walk_slow_right
walk_down
walk_slow_right
walk_down
step_end

UndergroundPath2F_Andra_move_3:
walk_in_place_right
walk_in_place_down
step_end

UndergroundPath2F_Andra_move_4:
face_up
step_end

UndergroundPath2F_Andra_move_5:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

UndergroundPath2F_Andra2::
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath2F_Andra_move_1
waitmovement 0x0
playse SE_PIN
applymovement 1, UndergroundPath2F_Andra_move_2.1
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_1, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_2, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_3, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_4, MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_2, UndergroundPath2F_Andra_Text_5
msgbox UndergroundPath2F_Andra_Text_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_7, MSGBOX_AUTOCLOSE
applymovement 1, UndergroundPath2F_Andra_move_5
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
removeobject 1
setvar VAR_UNUSED_0x40F7, 8
release
end


UndergroundPath2F_Andra3::
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath2F_Andra_move_1
waitmovement 0x0
playse SE_PIN
applymovement 1, UndergroundPath2F_Andra_move_2.2
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_1, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_2, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_3, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_4, MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_2, UndergroundPath2F_Andra_Text_5
msgbox UndergroundPath2F_Andra_Text_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_7, MSGBOX_AUTOCLOSE
applymovement 1, UndergroundPath2F_Andra_move_5
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
removeobject 1
setvar VAR_UNUSED_0x40F7, 8
release
end


UndergroundPath2F_Andra4::
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath2F_Andra_move_1
waitmovement 0x0
playse SE_PIN
applymovement 1, UndergroundPath2F_Andra_move_2.3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_1, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_2, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_3, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_4, MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_2, UndergroundPath2F_Andra_Text_5
msgbox UndergroundPath2F_Andra_Text_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_7, MSGBOX_AUTOCLOSE
applymovement 1, UndergroundPath2F_Andra_move_5
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
removeobject 1
setvar VAR_UNUSED_0x40F7, 8
release
end
