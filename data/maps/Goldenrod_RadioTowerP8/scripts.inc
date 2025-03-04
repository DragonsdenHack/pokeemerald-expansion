Goldenrod_RadioTowerP8_MapScripts::
	.byte 0

Goldenrod_RadioTowerP8_NPC2::
lock
msgbox Goldenrod_RadioTowerP8_NPC2_Texto_1 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP8_NPC2_Texto_1:
	.string "People here dress casually across the\n"
	.string "week, but go formal on Sunday.\p"
	.string "Today though, it's vice versa.$"

Goldenrod_RadioTowerP8_NPC3::
lock
msgbox Goldenrod_RadioTowerP8_NPC3_Texto_1 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP8_NPC3_Texto_2 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP8_NPC3_Texto_1:
	.string "I took on that red-headed chick, but\n"
	.string "wow, who'd have thought someone that\n"
	.string "young would already be part of the\l"
	.string "elite?$"

Goldenrod_RadioTowerP8_NPC3_Texto_2:
	.string "I came to an understanding in our\n"
	.string "battle, and I just can't do it anymore.$"

Goldenrod_RadioTowerP8_NPC4::
    lock
    faceplayer
	checkmoncatch SPECIES_LILLIPUP
goto_if_eq VAR_RESULT, FALSE, Goldenrod_RadioTowerP8_EventScript_TakeLillipup
msgbox Goldenrod_RadioTowerP8_NPC4_Texto_3 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP8_NPC4_Texto_4 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP8_EventScript_TakeLillipup::
msgbox Goldenrod_RadioTowerP8_NPC4_Texto_1 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
msgbox Goldenrod_RadioTowerP8_NPC4_Texto_2, MSGBOX_DEFAULT
givemon SPECIES_LILLIPUP, 15, ITEM_NORMAL_GEM
waitfanfare
release
end

Goldenrod_RadioTowerP8_NPC4_Texto_1:
	.string "We've been studying the possibility of\n"
	.string "including a foreign POKÉMON in security.\n"
	.string "Have one for yourself. Take it.$"

Goldenrod_RadioTowerP8_NPC4_Texto_2:
.string "YOU OBTAINED A LVL.15 LILLIPUP!$"

Goldenrod_RadioTowerP8_NPC4_Texto_3:
	.string "It's been demonstrated that STOUTLAND\n"
	.string "is a great POKÉMON for the POLICE.\n"
	.string "However, we are resilient to change.$"

Goldenrod_RadioTowerP8_NPC4_Texto_4:
	.string "POKÉMON like MANECTRIC and ARCANINE\n"
	.string "are easy to get in here, all thanks to\n"
	.string "being close to their home regions.$"

Goldenrod_RadioTowerP8_NPC5::
lock
msgbox Goldenrod_RadioTowerP8_NPC5_Texto_1 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP8_NPC5_Texto_2 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP8_NPC5_Texto_3 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP8_NPC5_Texto_1:
	.string "This is the seventh floor. Here, we're in\n"
	.string "charge of optimizing the radio waves'\n"
	.string "performance in the best way possible.$"

Goldenrod_RadioTowerP8_NPC5_Texto_2:
	.string "You can see a sign post on every floor\n"
	.string "that describes the main job of each\n"
	.string "one.$"

Goldenrod_RadioTowerP8_NPC5_Texto_3:
	.string "Thanks to your investigations,\n"
	.string "powerful executives enveloped in a suit\n"
	.string "will be able to get stronger and\l"
	.string "stronger POKÉMON with just pressing a\l"
	.string "button. Isn't it great?$"

Goldenrod_RadioTowerP8_Proton_Move_1:
emote_exclamation_mark
step_end

Goldenrod_RadioTowerP8_Proton_Move_2:
walk_in_place_right
delay_8
face_up
step_end

Goldenrod_RadioTowerP8_Proton_Move_3:
walk_down
step_end

Goldenrod_RadioTowerP8_Proton_Move_4:
walk_up
step_end

Goldenrod_RadioTowerP8_Proton_Move_5:
face_right
step_end

Goldenrod_RadioTowerP8_Proton_Move_6:
face_down
step_end

Goldenrod_RadioTowerP8_Proton_Move_7:
delay_8
face_right
delay_16
delay_8
face_down
delay_16
step_end

Goldenrod_RadioTowerP8_Proton_Move_8:
walk_in_place_down
step_end

Goldenrod_RadioTowerP8_Proton_Arriba::
lock
playse SE_PIN
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP8_Proton_Move_2
waitmovement 0x0
delay 10
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_3
waitmovement 0x0
goto Goldenrod_RadioTowerP8_Proton

Goldenrod_RadioTowerP8_Proton_Abajo::
lock
playse SE_PIN
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP8_Proton_Move_2
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP8_Proton_Move_4
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_3
waitmovement 0x0
goto Goldenrod_RadioTowerP8_Proton

Goldenrod_RadioTowerP8_Proton::
msgbox Goldenrod_RadioTowerP8_Proton_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox Goldenrod_RadioTowerP8_Proton_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_5
waitmovement 0x0
msgbox Goldenrod_RadioTowerP8_Proton_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_6
waitmovement 0x0
msgbox Goldenrod_RadioTowerP8_Proton_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox Goldenrod_RadioTowerP8_Proton_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_7
waitmovement 0x0
msgbox Goldenrod_RadioTowerP8_Proton_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_5
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP8_Proton_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_6
waitmovement 0x0
delay 10
playse 603
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_8
waitmovement 0x0
msgbox Goldenrod_RadioTowerP8_Proton_Texto_8 MSGBOX_AUTOCLOSE
delay 10
trainerbattle_no_intro TRAINER_TRAINER_716, Goldenrod_RadioTowerP8_Proton_Texto_9
delay 10
msgbox Goldenrod_RadioTowerP8_Proton_Texto_10 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP8_Proton_Move_9
waitmovement 0x0
delay 20
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_5
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP8_Proton_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox Goldenrod_RadioTowerP8_Proton_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_6
waitmovement 0x0
msgbox Goldenrod_RadioTowerP8_Proton_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox Goldenrod_RadioTowerP8_Proton_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox Goldenrod_RadioTowerP8_Proton_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_8
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP8_Proton_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_10
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP8_Proton_Texto_17 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
setvar VAR_UNUSED_0x40F8, 31
release
end

Goldenrod_RadioTowerP8_Proton_Move_10:
lock_facing_direction
walk_up
unlock_facing_direction
step_end

Goldenrod_RadioTowerP8_Proton_Move_9:
walk_in_place_up
step_end

Goldenrod_RadioTowerP8_Proton_Texto_1:
	.string "PROTON: Long time no see, {PLAYER}.$"

Goldenrod_RadioTowerP8_Proton_Texto_2:
	.string "I used to see you around the DEEP\n"
	.string "BASE… Now that you'll be moving to\n"
	.string "JOHTO, I won't see you that often.$"

Goldenrod_RadioTowerP8_Proton_Texto_3:
	.string "I'll be sticking around for a while.\n"
	.string "ARCHER put me in charge of the security\n"
	.string "of the RADIO TOWER. Also, I gained the\l"
	.string "trust of the DIRECTOR.$"

Goldenrod_RadioTowerP8_Proton_Texto_4:
	.string "We're using quite advanced techniques\n"
	.string "and protocols. Also, we're importing\n"
	.string "POKÉMON from various regions.$"

Goldenrod_RadioTowerP8_Proton_Texto_5:
	.string "Mmm…$"

Goldenrod_RadioTowerP8_Proton_Texto_6:
	.string "You know…$"

Goldenrod_RadioTowerP8_Proton_Texto_7:
	.string "GIOVANNI is having a little chat\n"
	.string "upstairs, just before the big meeting,\n"
	.string "so we got time.$"

Goldenrod_RadioTowerP8_Proton_Texto_8:
	.string "I'm still a ROCKET! Let me show you how\n"
	.string "my POKÉMON are now!$"

Goldenrod_RadioTowerP8_Proton_Texto_9:
	.string "So yours grew too, huh…$"

Goldenrod_RadioTowerP8_Proton_Texto_10:
	.string "Seems like JOHTO is toughing you up\n"
	.string "even more, isn't it? Say, what do you\n"
	.string "think about GOLDENROD?$"

Goldenrod_RadioTowerP8_Proton_Texto_11:
	.string "Ten years ago, it was a completely\n"
	.string "different place. For the last few years,\n"
	.string "it's opening itself to the world. And not\l"
	.string "only GOLDENROD, but the whole of JOHTO.$"

Goldenrod_RadioTowerP8_Proton_Texto_12:
	.string "It's as if both the old and the new\n"
	.string "competed for the spirit of the region.$"

Goldenrod_RadioTowerP8_Proton_Texto_13:
	.string "The RADIO TOWER is a symbol of the\n"
	.string "modern era; the DIRECTOR himself will\n"
	.string "ensure it stands tall and moves\l"
	.string "forward.$"

Goldenrod_RadioTowerP8_Proton_Texto_14:
	.string "Now, there he is, importing HOENN's\n"
	.string "POKÉMON and hiring SINNOH's scientists\n"
	.string "and, of course, ROCKET EXECUTIVES as\l"
	.string "security.$"

Goldenrod_RadioTowerP8_Proton_Texto_15:
	.string "The best of each place, don't you\n"
	.string "think? Seems like we're up to very\n"
	.string "interesting times.$"

Goldenrod_RadioTowerP8_Proton_Texto_16:
	.string "Let's cut things short though. I don't\n"
	.string "want ARCHER to get mad at you.$"

Goldenrod_RadioTowerP8_Proton_Texto_17:
	.string "Now that you're BOSS ADMIN, you've got\n"
	.string "much better things to do.$"

Goldenrod_RadioTowerP8_Proton_Texto_18:
	.string "I like it here. I may stay a few days.\n"
	.string "The views are delightful, and this city\n"
	.string "has everything one needs.$"



Goldenrod_RadioTowerP8_Proton_Despues::
lock
faceplayer
msgbox Goldenrod_RadioTowerP8_Proton_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_6
waitmovement 0x0
release
end
