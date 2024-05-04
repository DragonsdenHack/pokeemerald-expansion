RuinsOfAlph_S2_MapScripts::
	.byte 0

RuinsOfAlphS2_1::
end



RuinsOfAlphS2_2::
end

RuinsOfAlphS2_Combate_Unown::
lock
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS2_Combate_Unown_Move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS2_Combate_Unown_Move_2
waitmovement 0x0
msgbox RuinsOfAlphS2_Combate_Unown_Texto_1 MSGBOX_AUTOCLOSE
applymovement 2, RuinsOfAlphS2_Combate_Unown_Move_3
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS2_Combate_Unown_Move_4
waitmovement 0x0
msgbox RuinsOfAlphS2_Combate_Unown_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlphS2_Combate_Unown_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, RuinsOfAlphS2_Combate_Unown_Move_5
waitmovement 0x0
msgbox RuinsOfAlphS2_Combate_Unown_Texto_4 MSGBOX_AUTOCLOSE
applymovement 2, RuinsOfAlphS2_Combate_Unown_Move_3
waitmovement 0x0
msgbox RuinsOfAlphS2_Combate_Unown_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, RuinsOfAlphS2_Combate_Unown_Move_3
waitmovement 0x0
msgbox RuinsOfAlphS2_Combate_Unown_Texto_6 MSGBOX_AUTOCLOSE
fadescreen 1
playse SE_USE_ITEM
special HealPlayerParty
delay 20
fadescreen 0
msgbox RuinsOfAlphS2_Combate_Unown_Texto_7 MSGBOX_AUTOCLOSE
setvar VAR_SECRET_BASE_LOW_TV_FLAGS, 3
release
end

RuinsOfAlphS2_Combate_Unown_Texto_1:
.string "????: …{PAUSE 5}$"

RuinsOfAlphS2_Combate_Unown_Texto_2:
.string "M.ANCIANO: Tú también, {PLAYER}, has\n"
	.string "logrado llegar hasta aquí{PAUSE 5}…{PAUSE 5}$"

RuinsOfAlphS2_Combate_Unown_Texto_3:
.string "{PAUSE 5}…{PAUSE 5}$"

RuinsOfAlphS2_Combate_Unown_Texto_4:
.string "Justo delante, está…\n"
	.string "La otra prueba{PAUSE 5}…{PAUSE 5}$"

RuinsOfAlphS2_Combate_Unown_Texto_5:
.string "Lo siento, {PLAYER}, no puedo\n"
	.string "enfrentar a algo tan puro, la\l"
	.string "naturaleza de este lugar es mucho\l"
	.string "más sagrada de lo que imaginaba.\l"
	.string "Conozco a mis POKÉMON, y sé que\l"
	.string "sucumbiríamos ante uno de los\l"
	.string "LEGENDARIOS de JOHTO en todo su\l"
	.string "esplendor.$"

RuinsOfAlphS2_Combate_Unown_Texto_6:
.string "Deja al menos que cure a tu\n"
	.string "equipo, lo necesitarás.$"

RuinsOfAlphS2_Combate_Unown_Texto_7:
.string "Mucha suerte, {PLAYER}, confío en\n"
	.string "ti.$"

RuinsOfAlphS2_Combate_Unown_Move_1:
walk_in_place_up
step_end

RuinsOfAlphS2_Combate_Unown_Move_2:
emote_exclamation_mark
step_end

RuinsOfAlphS2_Combate_Unown_Move_3:
face_down
step_end

RuinsOfAlphS2_Combate_Unown_Move_4:
walk_slow_up
step_end

RuinsOfAlphS2_Combate_Unown_Move_5:
face_up
step_end

RuinsOfAlphS2_Combate_Real_Unown::
compare VAR_SECRET_BASE_LOW_TV_FLAGS, 3
goto_if_gt RuinsOfAlphS2_Combate_Real_Unown_2
lock
playmoncry SPECIES_UNOWN, CRY_MODE_ENCOUNTER
waitmoncry
delay 20
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_1 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
delay 20
trainerbattle_no_intro TRAINER_ESENCIA_HOOH, RuinsOfAlphS2_Combate_Real_Unown_Texto_2
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS2_Combate_Real_Unown_Move_1
applymovement 2, RuinsOfAlphS2_Combate_Real_Unown_Move_1
waitmovement 0x0
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
removeobject 1
playse SE_M_EMBER
delay 20
msgbox RuinsOfAlphS2_Combate_Real_Unown_Texto_3 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS2_Combate_Real_Unown_Move_2
waitmovement 0x0
msgbox RuinsOfAlphS2_Combate_Real_Unown_Texto_4 MSGBOX_AUTOCLOSE
applymovement 2, RuinsOfAlphS2_Combate_Real_Unown_Move_3
waitmovement 0x0
msgbox RuinsOfAlphS2_Combate_Real_Unown_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, RuinsOfAlphS2_Combate_Real_Unown_Move_1
waitmovement 0x0
msgbox RuinsOfAlphS2_Combate_Real_Unown_Texto_6 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS2_Combate_Real_Unown_Move_4
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS2_Combate_Real_Unown_Move_5
waitmovement 0x0
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
fadescreen 1
delay 20
addobject 1
fadescreen 0
setvar VAR_SECRET_BASE_LOW_TV_FLAGS, 4
release
end

RuinsOfAlphS2_Combate_Real_Unown_2::
lock
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_1 MSGBOX_AUTOCLOSE
release
end

RuinsOfAlphS2_Combate_Real_Unown_Texto_2:
.string "… … … …{PAUSE 5}$"

RuinsOfAlphS2_Combate_Real_Unown_Texto_3:
.string "(La energía misteriosa se ha\n"
	.string "esfumado)$"

RuinsOfAlphS2_Combate_Real_Unown_Texto_4:
.string "M.ANCIANO: Admirable, acabas de\n"
	.string "batir al HO-OH dorado.$"

RuinsOfAlphS2_Combate_Real_Unown_Texto_5:
.string "Mis dragones nada podían\n"
	.string "hacer ante la pureza de su TIPO\l"
	.string "HADA, ese ZEUS sabía que HO-OH\l"
	.string "sirve como llave para seguir\l"
	.string "avanzando hasta la última sala. Al\l"
	.string "dejarlo aquí, la esencia de este\l"
	.string "lugar le ha hecho recobrar su\l"
	.string "forma primigenia. Eso mismo es lo\l"
	.string "que busca con KYUREM. Debes evitar\l"
	.string "eso, {PLAYER}, nadie está preparado\l"
	.string "para la vuelta del DRAGÓN\l"
	.string "ORIGINAL.$"

RuinsOfAlphS2_Combate_Real_Unown_Texto_6:
.string "Lo harás bien, {PLAYER}, tienes algo\n"
	.string "que no puede comprarse con ningún\l"
	.string "LEGENDARIO y de lo que ese ZEUS\l"
	.string "carece: un vínculo inquebrantable\l"
	.string "con tus POKÉMON. Sigue adelante y\l"
	.string "demuéstraselo.$"

RuinsOfAlphS2_Combate_Real_Unown_Move_1:
face_up
step_end

RuinsOfAlphS2_Combate_Real_Unown_Move_2:
face_down
step_end

RuinsOfAlphS2_Combate_Real_Unown_Move_3:
face_right
step_end

RuinsOfAlphS2_Combate_Real_Unown_Move_4:
walk_slow_up
walk_slow_up
step_end

RuinsOfAlphS2_Combate_Real_Unown_Move_5:
emote_exclamation_mark
walk_in_place_down
step_end
