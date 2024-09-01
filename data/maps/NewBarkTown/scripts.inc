NewBarkTown_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, NewBarkTown_OnTransition
	.byte 0

NewBarkTown_OnTransition::
setflag FLAG_VISITED_NEW_BARK_TOWN
end

NewBarkTown1::
lock     
faceplayer     
msgbox NewBarkTown_Text_1, MSGBOX_DEFAULT
release     
end

NewBarkTown_Text_1:
	.string "The town's foundation has been laid,\n"
	.string "and now the toughest part remains.\l"
	.string "We're counting on OAK to assist us with\l"
	.string "the AI.$"


NewBarkTown2::
lock     
faceplayer     
msgbox NewBarkTown_Text_2, MSGBOX_DEFAULT
release     
end

NewBarkTown_Text_2:
	.string "And in less than three years,\n"
	.string "everything's ready to start THE TRUMAN\l"
	.string "SHOW! Oops! Sorry! I shouldn't have said\l"
	.string "that!$"

NewBarkTown3::
end

NewBarkTown_Encuentro_Elm_Arriba::
lock
applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_Encuentro_Elm_Move_1
waitmovement 0x0
goto NewBarkTown_Encuentro_Elm

NewBarkTown_Encuentro_Elm_Abajo::
lock
applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_Encuentro_Elm_Move_1.1
waitmovement 0x0
goto NewBarkTown_Encuentro_Elm

NewBarkTown_Encuentro_Elm::
playse SE_DOOR
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 3
delay 20
playse SE_PIN
applymovement 3, NewBarkTown_Encuentro_Elm_Move_2
waitmovement 0x0
msgbox NewBarkTown_Encuentro_Elm_Texto_1 MSGBOX_AUTOCLOSE
applymovement 3, NewBarkTown_Encuentro_Elm_Move_3
waitmovement 0x0
msgbox NewBarkTown_Encuentro_Elm_Texto_2 MSGBOX_AUTOCLOSE
msgbox NewBarkTown_Encuentro_Elm_Texto_3 MSGBOX_AUTOCLOSE
applymovement 3, NewBarkTown_Encuentro_Elm_Move_4
waitmovement 0x0
msgbox NewBarkTown_Encuentro_Elm_Texto_4 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 3, NewBarkTown_Encuentro_Elm_Move_2
waitmovement 0x0
delay 10
applymovement 3, NewBarkTown_Encuentro_Elm_Move_5
waitmovement 0x0
msgbox NewBarkTown_Encuentro_Elm_Texto_5 MSGBOX_AUTOCLOSE
applymovement 3, NewBarkTown_Encuentro_Elm_Move_4
waitmovement 0x0
msgbox NewBarkTown_Encuentro_Elm_Texto_6 MSGBOX_AUTOCLOSE
applymovement 3, NewBarkTown_Encuentro_Elm_Move_6
waitmovement 0x0
playse SE_DOOR
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
removeobject 3
setvar VAR_UNUSED_0x40F7, 155
release
end

NewBarkTown_Encuentro_Elm_Texto_1:
.string "ELM: You too, {PLAYER}?$"

NewBarkTown_Encuentro_Elm_Texto_2:
	.string "With the borders just recently opened\n"
	.string "and this area filled with curious\l"
	.string "individuals eager to be the first to\l"
	.string "visit ROUTEs 26 and 27, untouched by\l"
	.string "human contact for years except for the\l"
	.string "few who already lived there…$"

NewBarkTown_Encuentro_Elm_Texto_3:
	.string "You're unlike the others, aren't you? I\n"
	.string "assume you're not venturing to ROUTE\l"
	.string "26 or 27. Instead, you are going to MT.\l"
	.string "SILVER, right?$"

NewBarkTown_Encuentro_Elm_Texto_4:
	.string "I must admit, you've surprised me. Five\n"
	.string "JOHTO LEADERS already… When GIOVANNI\l"
	.string "talked to me about you, I thought he\l"
	.string "was exaggerating. Now, I see there's no\l"
	.string "one better than you to travel through\l"
	.string "JOHTO and face its past LEADERS before\l"
	.string "their legacies are lost forever.$"

NewBarkTown_Encuentro_Elm_Texto_5:
	.string "Ah, yes, this area will be one of the\n"
	.string "research fields we'll set up, funded\l"
	.string "with the resources GIOVANNI talked\l"
	.string "about at the GOLDENROD meeting. Right\l"
	.string "now, your LEADER is hesitant about\l"
	.string "pushing this research forward, but OAK,\l"
	.string "who is also very interested in it, and I,\l"
	.string "will eventually convince him, you'll see.\l"
	.string "It'll be quite exciting to see\l"
	.string "everything in action if it does come to\l"
	.string "fruition, like a game, but in real life.$"

NewBarkTown_Encuentro_Elm_Texto_6:
	.string "I won't keep you any longer. If you need\n"
	.string "anything from me, I'll be in the\l"
	.string "laboratory. You can heal your POKÉMON\l"
	.string "there if you wish. I'll be closely\l"
	.string "monitoring your progress. If you truly\l"
	.string "manage to confront the LEADERS who\l"
	.string "attended the GOLDENROD meeting, I'm\l"
	.string "eager to see the outcomes their top\l"
	.string "POKÉMON yield.$"

NewBarkTown_Encuentro_Elm_Move_1:
walk_in_place_right
step_end

NewBarkTown_Encuentro_Elm_Move_1.1:
walk_up
walk_in_place_right
step_end

NewBarkTown_Encuentro_Elm_Move_2:
emote_exclamation_mark
face_left
step_end

NewBarkTown_Encuentro_Elm_Move_3:
walk_down
walk_left
walk_left
walk_left
walk_left
step_end

NewBarkTown_Encuentro_Elm_Move_4:
walk_in_place_left
step_end

NewBarkTown_Encuentro_Elm_Move_5:
walk_in_place_right
walk_in_place_left
step_end

NewBarkTown_Encuentro_Elm_Move_6:
walk_right
walk_right
walk_right
walk_right
walk_up
step_end
