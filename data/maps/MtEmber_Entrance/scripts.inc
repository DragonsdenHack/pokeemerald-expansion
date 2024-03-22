MtEmber_Entrance_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, MtEmber_Entrance_OnResume
	.byte 0

MtEmber_Entrance_OnResume:
	call MtEmber_Entrance_SetupEscapeWarp
	end

MtEmber_Entrance_SetupEscapeWarp::
	setescapewarp MAP_MT_EMBER_ENTRANCE, 28, 48
	return

MtEmberEntrance_1::
end



MtEmberEntrance_7::
end



MtEmberEntrance_10::
end



MtEmberEntrance_11::
end



MtEmberEntrance_12::
lock
msgbox MtEmberEntrance_12_Texto_1 MSGBOX_SIGN
release
end

MtEmberEntrance_12_Texto_1:
	.string "Well{PAUSE 15}…{PAUSE 15} TABITHA should be arriving soon\n"
	.string "with the necessary material to find the\l"
	.string "RUBY…$"



MtEmberEntrance_13::
end



MtEmberEntrance_19::
end



MtEmberEntrance_20::
end



MtEmberEntrance_EventScript_Chica::
	trainerbattle_single TRAINER_JONATHAN, MtEmberEntrance_Text_ChicaIntro, MtEmberEntrance_Text_ChicaDefeated
	msgbox MtEmberEntrance_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



MtEmberEntrance_EventScript_Chico::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_5, MtEmberEntrance_Text_ChicoIntro, MtEmberEntrance_Text_ChicoDefeated
	msgbox MtEmberEntrance_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



MtEmberEntrance_EventScript_Luchadora::
	trainerbattle_single TRAINER_BRENDAN_RUSTBORO_MUDKIP, MtEmberEntrance_Text_LuchadoraIntro, MtEmberEntrance_Text_LuchadoraDefeated
	msgbox MtEmberEntrance_Text_LuchadoraPostBattle, MSGBOX_AUTOCLOSE
	end



MtEmberEntrance_Encuentro_Magno_Arriba::
lock
clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
addobject 2
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MtEmberEntrance_Encuentro_Magno_Move_1
waitmovement 0x0
goto MtEmberEntrance_Encuentro_Magno

MtEmberEntrance_Encuentro_Magno_Abajo::
lock
clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
addobject 2
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MtEmberEntrance_Encuentro_Magno_Move_1.1
waitmovement 0x0
goto MtEmberEntrance_Encuentro_Magno

MtEmberEntrance_Encuentro_Magno::
msgbox MtEmberEntrance_Encuentro_Magno_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, MtEmberEntrance_Encuentro_Magno_Move_2
applymovement 2, MtEmberEntrance_Encuentro_Magno_Move_3
waitmovement 0x0
playse MUS_ENCOUNTER_MAGMA
msgbox MtEmberEntrance_Encuentro_Magno_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox MtEmberEntrance_Encuentro_Magno_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, MtEmberEntrance_Encuentro_Magno_Move_4
msgbox MtEmberEntrance_Encuentro_Magno_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, MtEmberEntrance_Encuentro_Magno_Move_5
msgbox MtEmberEntrance_Encuentro_Magno_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, MtEmberEntrance_Encuentro_Magno_Move_6
waitmovement 0x0
playse SE_PIN
applymovement 2, MtEmberEntrance_Encuentro_Magno_Move_7
waitmovement 0x0
msgbox MtEmberEntrance_Encuentro_Magno_Texto_6 MSGBOX_AUTOCLOSE
applymovement 2, MtEmberEntrance_Encuentro_Magno_Move_8
waitmovement 0x0
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
removeobject 2
playse MUS_RG_MT_MOON
setvar VAR_ROUTE105_STATE, 4
release
end

MtEmberEntrance_Encuentro_Magno_Texto_1:
.string "????: Must be here.$"

MtEmberEntrance_Encuentro_Magno_Texto_2:
	.string "This huge mountain turned out to be\n"
	.string "MOLTRES's home. Someone defeated the\l"
	.string "legend, ready to be caught and join my\l"
	.string "team.$"

MtEmberEntrance_Encuentro_Magno_Texto_3:
.string "{PAUSE 15}…{PAUSE 15}$"

MtEmberEntrance_Encuentro_Magno_Texto_4:
	.string "I would be dishonest if I were to say\n"
	.string "that I do not prefer an ENTEI, the\l"
	.string "authentic spirit of a erupting volcano,\l"
	.string "over a MOLTRES. However, I would never\l"
	.string "refuse a POKÉMON of such\l"
	.string "characteristics when it presents\l"
	.string "itself so readily.$"

MtEmberEntrance_Encuentro_Magno_Texto_5:
	.string "However, I am not here for Moltres; this\n"
	.string "place conceals something far more\l"
	.string "valuable and powerful within than we\l"
	.string "could ever imagine just by taking a\l"
	.string "simple glance at its surface.$"

MtEmberEntrance_Encuentro_Magno_Texto_6:
	.string "I'm warning you, kid, don't get involved\n"
	.string "in things bigger than your own\l"
	.string "existence, or you'll be turned to ashes\l"
	.string "by a power you can't understand.$"

MtEmberEntrance_Encuentro_Magno_Move_1:
emote_exclamation_mark
walk_in_place_left
step_end

MtEmberEntrance_Encuentro_Magno_Move_1.1:
emote_exclamation_mark
walk_up
walk_in_place_left
step_end

MtEmberEntrance_Encuentro_Magno_Move_2:
face_left
step_end

MtEmberEntrance_Encuentro_Magno_Move_3:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_in_place_up
step_end

MtEmberEntrance_Encuentro_Magno_Move_4:
face_down
step_end

MtEmberEntrance_Encuentro_Magno_Move_5:
walk_in_place_down
step_end

MtEmberEntrance_Encuentro_Magno_Move_6:
walk_right
walk_right
step_end

MtEmberEntrance_Encuentro_Magno_Move_7:
emote_exclamation_mark
step_end

MtEmberEntrance_Encuentro_Magno_Move_8:
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end


MtEmber_Entrance_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE103_STATE, 0
goto_if_gt MtEmber_Entrance_Entrenador_Especial_3
msgbox MtEmber_Entrance_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
msgbox MtEmber_Entrance_Entrenador_Especial_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq MtEmber_Entrance_Entrenador_Especial_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox MtEmber_Entrance_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TERREMOTO, MtEmber_Entrance_Entrenador_Especial_Texto_5
msgbox MtEmber_Entrance_Entrenador_Especial_Texto_6 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM83
msgbox MtEmber_Entrance_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox MtEmber_Entrance_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE103_STATE, 1
release
end

MtEmber_Entrance_Entrenador_Especial_No::
msgbox MtEmber_Entrance_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
release
end


MtEmber_Entrance_Entrenador_Especial_3::
msgbox MtEmber_Entrance_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end


MtEmber_Entrance_Entrenador_Especial_Texto_1:
	.string "If this volcano were to erupt, it could\n"
	.string "potentially cause an explosion that\l"
	.string "reaches both TWO and THREE ISLAND.\l"
	.string "Fortunately, it's currently dormant,\l"
	.string "and the likelihood of such an event\l"
	.string "occurring in the near future is very\l"
	.string "low. However, it highlights the immense\l"
	.string "power of an explosion. If you're\l"
	.string "interested, I can demonstrate POKÉMON\l"
	.string "capable of causing and surviving\l"
	.string "explosions of that magnitude.$"

MtEmber_Entrance_Entrenador_Especial_Texto_1.1:
.string "You obtained TM83 BULLDOZE\n"
	.string "from Hiker hands!$"

MtEmber_Entrance_Entrenador_Especial_Texto_2:
.string "Do you accept the challenge?$"

MtEmber_Entrance_Entrenador_Especial_Texto_3:
	.string "With BULLDOZE, not only can you strike\n"
	.string "the opponent, but you'll also always\l"
	.string "lower their SPEED. It's like that ROCK\l"
	.string "TOMB move that BROCK gives out in\l"
	.string "PEWTER CITY, but will never miss!$"

MtEmber_Entrance_Entrenador_Especial_Texto_4:
	.string "Alright, just so you know, my POKÉMON\n"
	.string "are as solid as rocks!$"

MtEmber_Entrance_Entrenador_Especial_Texto_5:
	.string "You've broken through my team's\n"
	.string "defenses!$"

MtEmber_Entrance_Entrenador_Especial_Texto_6:
	.string "I didn't expect to lose. There's no\n"
	.string "mountaineer as skilled as me around\l"
	.string "here. Take this as a gift.$"

MtEmber_Entrance_Entrenador_Especial_Texto_7:
	.string "Facing POKÉMON that can explode at any\n"
	.string "moment is challenging, I know.$"
