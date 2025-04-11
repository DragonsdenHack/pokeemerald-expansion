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
	.string "everything's ready to start\l"
	.string "THE TRUMAN SHOW!\p"
	.string "{PAUSE 15}…{PAUSE 15} {PAUSE 15}…{PAUSE 15}\p"
	.string "Oops!\p"
	.string "Sorry!\p"
	.string "I shouldn't have said that!$"

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
opendoor 9, 5
waitdooranim
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 3
applymovement 3, VerdanturfTown_Move_9
waitmovement 0x0
closedoor 9, 5
waitdooranim
delay 20
playse SE_PIN
applymovement 3, NewBarkTown_Encuentro_Elm_Move_2
waitmovement 0x0
waitse
delay 10
msgbox NewBarkTown_Encuentro_Elm_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, NewBarkTown_Encuentro_Elm_Move_3
waitmovement 0x0
delay 10
msgbox NewBarkTown_Encuentro_Elm_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox NewBarkTown_Encuentro_Elm_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, NewBarkTown_Encuentro_Elm_Move_4
waitmovement 0x0
delay 10
msgbox NewBarkTown_Encuentro_Elm_Texto_4 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 3, NewBarkTown_Encuentro_Elm_Move_2
waitmovement 0x0
waitse
delay 10
applymovement 3, NewBarkTown_Encuentro_Elm_Move_5
waitmovement 0x0
msgbox NewBarkTown_Encuentro_Elm_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, NewBarkTown_Encuentro_Elm_Move_4
waitmovement 0x0
delay 10
msgbox NewBarkTown_Encuentro_Elm_Texto_6 MSGBOX_AUTOCLOSE
applymovement 3, NewBarkTown_Encuentro_Elm_Move_6
waitmovement 0x0
playse SE_DOOR
opendoor 9, 5
waitdooranim
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
removeobject 3
applymovement 3, VerdanturfTown_Move_9.9
waitmovement 0x0
closedoor 9, 5
waitdooranim
setvar VAR_UNUSED_0x40F7, 155
release
end

VerdanturfTown_Move_9.9:
walk_up
step_end

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
	.string "You're not like the others, aren't you?\n"
	.string "I assume you're not here just to explore\l"
	.string "these ROUTEs.\p"
	.string "You are going to MT. SILVER, right?$"

NewBarkTown_Encuentro_Elm_Texto_4:
	.string "I must admit{PAUSE 25}…{PAUSE 25} you've surprised me.\n"
	.string "Five JOHTO LEADERS{PAUSE 15}…{PAUSE 15} When GIOVANNI\l"
	.string "talked about you, I thought he was\l"
	.string "exaggerating. Now, I see there's no\l"
	.string "one better than you to travel through\l"
	.string "JOHTO and face its past LEADERS, before\l"
	.string "their legacies are lost forever.$"

NewBarkTown_Encuentro_Elm_Texto_5:
	.string "Ah, yes, this area will be one of the\n"
	.string "research fields we'll set up, funded\l"
	.string "with the resources GIOVANNI talked\l"
	.string "about at the GOLDENROD meeting. Right\l"
	.string "now, your LEADER is hesitant about\l"
	.string "pushing this research forward, but OAK,\l"
	.string "who is also very interested in it, and I,\l"
	.string "will eventually convince him, you'll see.\p"
	.string "It'll be quite exciting to see\n"
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
delay_16
walk_in_place_right
step_end

NewBarkTown_Encuentro_Elm_Move_2:
emote_exclamation_mark
face_left
step_end

NewBarkTown_Encuentro_Elm_Move_3:
walk_down
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
delay_8
walk_in_place_right
delay_16
walk_in_place_left
delay_8
step_end

NewBarkTown_Encuentro_Elm_Move_6:
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
step_end

NewBarkTown_Barrera::
compare VAR_UNUSED_0x40F8, 56
goto_if_gt NewBarkTown_Barrera_2
applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_Barrera_Move_1
waitmovement 0x0
msgbox NewBarkTown_Barrera_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_Barrera_Move_2
waitmovement 0x0
release
end

NewBarkTown_Barrera_2::
release
end

NewBarkTown_Barrera_Texto_1:
.string "-The door is locked.-$"

NewBarkTown_Barrera_Move_1:
walk_in_place_up
step_end

NewBarkTown_Barrera_Move_2:
walk_down
step_end

NewBarkTown_Cartel_Vacio::
lock
msgbox NewBarkTown_Cartel_Vacio_Texto_1 MSGBOX_AUTOCLOSE
release
end

NewBarkTown_Cartel_Vacio_Texto_1:
.string "- Nothing written here -$"

NewBarkTown_Cartel::
lock
compare VAR_UNUSED_0x40F8, 56
goto_if_lt NewBarkTown_Cartel_Vacio
msgbox NewBarkTown_Cartel_Texto_1 MSGBOX_SIGN
release
end

NewBarkTown_Cartel_Texto_1:
	.string "NEW BARK TOWN\p"
	.string "The Town Where the Winds of a\n"
	.string "New Beginning Blow.$"

NewBarkTown_NPC_Primer::
lock
faceplayer
msgbox NewBarkTown_NPC_Primer_Texto_1 MSGBOX_AUTOCLOSE
release
end


NewBarkTown_NPC_Primer_Texto_1:
	.string "El PROFESOR ELM parece muy interesado\n"
	.string "en el chico recién llegado. ¡Le ha dado\l"
	.string "hasta un POKEGEAR!$"

NewBarkTown_NPC_Segundo::
lock
faceplayer
msgbox NewBarkTown_NPC_Segundo_Texto_1 MSGBOX_AUTOCLOSE
release
end


NewBarkTown_NPC_Segundo_Texto_1:
	.string "Dicen que el PROFESOR ELM ha\n"
	.string "descubierto nuevos POKÉMON.$"

NewBarkTown_Cartel_Oro::
lock
compare VAR_UNUSED_0x40F8, 56
goto_if_lt NewBarkTown_Cartel_Vacio
msgbox NewBarkTown_Cartel_Oro_Texto_1 MSGBOX_SIGN
release
end

NewBarkTown_Cartel_Oro_Texto_1:
.string "GOLD'S HOUSE.$"

NewBarkTown_Cartel_Elm::
lock
compare VAR_UNUSED_0x40F8, 56
goto_if_lt NewBarkTown_Cartel_Vacio
msgbox NewBarkTown_Cartel_Elm_Texto_1 MSGBOX_SIGN
release
end

NewBarkTown_Cartel_Elm_Texto_1:
.string "ELM'S HOUSE.$"

NewBarkTown_Cartel_Laboratorio::
lock
compare VAR_UNUSED_0x40F8, 56
goto_if_lt NewBarkTown_Cartel_Vacio
msgbox NewBarkTown_Cartel_Laboratorio_Texto_1 MSGBOX_SIGN
release
end

NewBarkTown_Cartel_Laboratorio_Texto_1:
.string "ELM'S LABORATORY.$"

