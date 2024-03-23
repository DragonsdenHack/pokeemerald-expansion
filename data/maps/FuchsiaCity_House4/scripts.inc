FuchsiaCity_House4_MapScripts::
	.byte 0

FuchsiaCityHouse4_1::
end

FuchsiaCity_House4_Secundaria_Squirtle::
lock
faceplayer
compare VAR_UNUSED_0x4083, 1
goto_if_gt FuchsiaCity_House4_Secundaria_Squirtle_3
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x4083, 1
goto_if_eq FuchsiaCity_House4_Secundaria_Squirtle_2
release
end

FuchsiaCity_House4_Secundaria_Squirtle_2::
delay 20
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_3 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
waitmovement 0x0
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_2
waitmovement 0x0
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_3
waitmovement 0x0
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq FuchsiaCity_House4_Secundaria_Squirtle_No
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_2
waitmovement 0x0
release
end


FuchsiaCity_House4_Secundaria_Squirtle_No::
playse MUS_RG_ENCOUNTER_BOY
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_GURU, FuchsiaCity_House4_Secundaria_Squirtle_Texto_9
delay 10
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_2
waitmovement 0x0
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_11 MSGBOX_AUTOCLOSE
delay 20
playse SE_DOOR
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_6
addobject 2
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_4
waitmovement 0x0
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_12 MSGBOX_AUTOCLOSE
applymovement 2, FuchsiaCity_House4_Secundaria_Squirtle_Move_5
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_House4_Secundaria_Squirtle_Move_4
waitmovement 0x0
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_13 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
trainerbattle_no_intro TRAINER_GUARDA, FuchsiaCity_House4_Secundaria_Squirtle_Texto_14
playse SE_PIN
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
applymovement 2, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
waitmovement 0x0
delay 20
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_3
waitmovement 0x0
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_15 MSGBOX_AUTOCLOSE
playse SE_DOOR
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
addobject 3
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
applymovement 2, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_House4_Secundaria_Squirtle_Move_6
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_6
applymovement 2, FuchsiaCity_House4_Secundaria_Squirtle_Move_6
waitmovement 0x0
delay 20
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_16 MSGBOX_AUTOCLOSE
applymovement 3, FuchsiaCity_House4_Secundaria_Squirtle_Move_6
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
removeobject 3
playse SE_EXIT
delay 20
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_3 MSGBOX_AUTOCLOSE
delay 20
applymovement 2, FuchsiaCity_House4_Secundaria_Squirtle_Move_7
waitmovement 0x0
removeobject 2
playse SE_EXIT
delay 15
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_3
waitmovement 0x0
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_17 MSGBOX_AUTOCLOSE
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_2
waitmovement 0x0
setvar VAR_UNUSED_0x4083, 2
release
end

FuchsiaCity_House4_Secundaria_Squirtle_3::
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_2 MSGBOX_AUTOCLOSE
release
end

FuchsiaCity_House4_Secundaria_Squirtle_Texto_1:
	.string "People like you will never be able to\n"
	.string "understand the art of fishing. Nor the\l"
	.string "kind of POKÉMON that can come from the\l"
	.string "seas, and luckily you don't. The last\l"
	.string "thing I want is for you to stick your\l"
	.string "nose into something as pure as water.$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_2:
	.string "One day, I'll get my revenge on you. And\n"
	.string "my defeat will be nothing more than an\l"
	.string "anecdote.$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_3:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_4:
	.string "What? My brother sent you to defeat me\n"
	.string "and show I'm not as good a FISHER as\l"
	.string "everyone is saying?$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_5:
	.string "You don't know what you're doing, ROCKET.\n"
	.string "Your POKÉMON can't compete against the\l"
	.string "best beasts in KANTO. Even if you're a\l"
	.string "HIGH RANK or whatever you claim to be.\l"
	.string "My sea-caught POKÉMON have a\l"
	.string "fierceness you can't even imagine.$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_6:
	.string "I have more important stuff to do than\n"
	.string "fighting against a ROCKET. if you\l"
	.string "reconsider and get out of my house I'll\l"
	.string "pretend nothing happened, alright?$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_7:
	.string "Good, now get out of my house.$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_8:
	.string "Do you like risks, huh, ROCKET?\n"
	.string "Curiosity killed the cat. You're going to\l"
	.string "see how the best FISHER in this region\l"
	.string "handles things!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_9:
.string "This can't be!\n"
	.string "My powerful GYARADOS!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_10:
	.string "This makes no sense, you must be\n"
	.string "something else inside the TEAM ROCKET,\l"
	.string "an EXECUTIVE, ADMINISTRATOR perhaps,\l"
	.string "am I wrong?$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_11:
	.string "But{PAUSE 15}…{PAUSE 15} Unfortunately for you, I never\n"
	.string "lose, never. How do you think I've kept\l"
	.string "my perfect reputation spotless until\l"
	.string "now? I always watch my back.$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_12:
	.string "You've been too loud ROCKET, we can't let\n"
	.string "you win in this situation. I've heard the\l"
	.string "battle in my neighbor's house, the best\l"
	.string "of the gurus that makes FUCHSIA so\l"
	.string "popular. as the POKEGUARD of the\l"
	.string "SAFARI ZONE, you'll understand that I\l"
	.string "cannot allow anyone to disturb the\l"
	.string "order of this city. No one is going to\l"
	.string "leave here saying the best guru in the\l"
	.string "region was defeated by a ROCKET.$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_13:
	.string "Now that your POKÉMON are tired, I just\n"
	.string "have to deliver the final blow!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_14:
.string "This can't be, my SLOWKING!\n"
	.string "Who are you?$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_15:
	.string "This wasn't in our plans at all, not even\n"
	.string "KOGA would come out victorious against\l"
	.string "both of us. Anyway, no one will believe\l"
	.string "you, no one has seen this two battl…$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_16:
	.string "Wow! It was amazing, a ROCKET gave the\n"
	.string "guru of FUCHSIA a lesson! And even\l"
	.string "more! HE defeated SLOWPOKE, the\l"
	.string "POKEGUARD of the SAFARI! I can't wait\l"
	.string "to see my friends' faces when they know!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_17:
	.string "Do you have any idea what you just did,\n"
	.string "ROCKET?! I hope the reward from my\l"
	.string "brother is worth it! You've just started\l"
	.string "a war!$"

FuchsiaCity_House4_Secundaria_Squirtle_Move_1:
emote_exclamation_mark
face_player
step_end

FuchsiaCity_House4_Secundaria_Squirtle_Move_2:
walk_in_place_right
step_end

FuchsiaCity_House4_Secundaria_Squirtle_Move_3:
face_player
step_end

FuchsiaCity_House4_Secundaria_Squirtle_Move_4:
face_left
step_end

FuchsiaCity_House4_Secundaria_Squirtle_Move_5:
walk_up
walk_up
walk_up
walk_in_place_right
step_end

FuchsiaCity_House4_Secundaria_Squirtle_Move_6:
face_down
step_end

FuchsiaCity_House4_Secundaria_Squirtle_Move_7:
walk_down
walk_down
walk_down
step_end
