Lavender_Secta_Pasadizo_MapScripts::
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Lavender_Secta_Pasadizo_OnResume
	.byte 0

Lavender_Secta_Pasadizo_OnResume:
map_script_2 VAR_UNUSED_0x40F8, 20, Lavender_Secta_Pasadizo_Gray
	.2byte 0

Lavender_Secta_Pasadizo_Gray::
call Script_SetGrayscaleTint
setvar VAR_UNUSED_0x40F8, 21
end

Lavender_Secta_Pasadizo_Oak_Move_1:
face_left
step_end

Lavender_Secta_Pasadizo_Oak_Move_2:
walk_right
walk_down
walk_right
walk_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_3:
walk_up
walk_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_4:
face_up
step_end

Lavender_Secta_Pasadizo_Oak_Move_5:
face_up
delay_8
lock_facing_direction
walk_down
unlock_facing_direction
step_end

Lavender_Secta_Pasadizo_Oak_Move_6:
walk_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_7:
face_left
step_end

Lavender_Secta_Pasadizo_Oak_Move_8:
delay_16
face_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_9:
walk_left
step_end

Lavender_Secta_Pasadizo_Oak_Move_10:
emote_exclamation_mark
step_end

Lavender_Secta_Pasadizo_Oak_Move_11:
walk_in_place_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_12:
walk_slow_left
step_end

Lavender_Secta_Pasadizo_Oak_Move_13:
face_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_14:
walk_fast_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_15:
face_down
step_end

Lavender_Secta_Pasadizo_Oak_Move_16:
walk_down
face_left
step_end

Lavender_Secta_Pasadizo_Oak_Move_17:
face_up
delay_16
delay_8
face_right
delay_16
step_end

Lavender_Secta_Pasadizo_Oak_Move_18:
delay_8
face_right
delay_16
delay_16
step_end

Lavender_Secta_Pasadizo_Oak_Move_19:
delay_8
lock_facing_direction
walk_slow_left
unlock_facing_direction
step_end


Lavender_Secta_Pasadizo_Oak::
lock
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_1 MSGBOX_AUTOCLOSE
delay 30
playse SE_EXIT
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
addobject 1
waitse
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_Oak_Move_1
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_1
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_2 MSGBOX_AUTOCLOSE
delay 15
call Script_SetGrayscaleTint
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_2
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_3
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_4 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_4
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_Oak_Move_5
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_6
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_6 MSGBOX_AUTOCLOSE
delay 30
msgbox Lavender_Secta_Pasadizo_Oak_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_6
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_4
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_8
waitmovement 0x0
delay 20
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_7
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_10 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_9
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_11 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_10
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_4
waitmovement 0x0
delay 25
msgbox Lavender_Secta_Pasadizo_Oak_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_11
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_1
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_12
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_17 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_18 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_13
waitmovement 0x0
delay 20
msgbox Lavender_Secta_Pasadizo_Oak_Texto_19 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_4
waitmovement 0x0
delay 30
msgbox Lavender_Secta_Pasadizo_Oak_Texto_20 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_14
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_21 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_11
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_15
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_22 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_23 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_24 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_25 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_16
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_26 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_17
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_27 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_10
waitmovement 0x0
waitse
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_28 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_18
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_29 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_10
waitmovement 0x0
waitse
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_30 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_7
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_31 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_32 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_4
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_33 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_34 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_35 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_36 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_10
waitmovement 0x0
waitse
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_13
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_37 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_38 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_19
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_39 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_11
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_40 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_14
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_41 MSGBOX_AUTOCLOSE
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_42 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_43 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_19
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_44 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_45 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_4
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_46 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_47 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_11
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_48 MSGBOX_AUTOCLOSE
delay 25
msgbox Lavender_Secta_Pasadizo_Oak_Texto_49 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_20.1
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_20
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_50 MSGBOX_AUTOCLOSE
delay 30
msgbox Lavender_Secta_Pasadizo_Oak_Texto_51 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_21
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_52 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_22
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_53 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_24
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_23
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_54 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_25
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HOENN_81
removeobject 2
waitse
delay 30
msgbox Lavender_Secta_Pasadizo_Oak_Texto_55 MSGBOX_AUTOCLOSE
delay 30
msgbox Lavender_Secta_Pasadizo_Oak_Texto_56 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_7
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_57 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_26
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
removeobject 1
setflag FLAG_HOENN_80
setflag FLAG_HOENN_83
setvar VAR_UNUSED_0x40F8, 22
release
end

Lavender_Secta_Pasadizo_Oak_Move_20.1:
delay_16
walk_slow_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_26:
walk_left
walk_left
walk_down
walk_left
walk_left
walk_left
walk_up
walk_left
step_end

Lavender_Secta_Pasadizo_Oak_Move_25:
walk_right
walk_down
walk_right
walk_down
walk_down
face_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_24:
lock_facing_direction
walk_left
walk_left
unlock_facing_direction
step_end

Lavender_Secta_Pasadizo_Oak_Move_23:
walk_left
step_end

Lavender_Secta_Pasadizo_Oak_Move_22:
walk_down
face_left
step_end

Lavender_Secta_Pasadizo_Oak_Move_21:
delay_8
face_down
delay_16
step_end

Lavender_Secta_Pasadizo_Oak_Move_20:
walk_slow_up
step_end

Lavender_Secta_Pasadizo_Oak_Texto_1:
	.string "C. FRIDA: {PAUSE 25}…{PAUSE 25} …{PAUSE 25}$"

Lavender_Secta_Pasadizo_Oak_Texto_2:
	.string "????: I disagree.$"

Lavender_Secta_Pasadizo_Oak_Texto_3:
	.string "C. FRIDA: Oh, young one.\p"
	.string "What do you disagree on?$"

Lavender_Secta_Pasadizo_Oak_Texto_4:
	.string "OAK: Greatness can't come from just\n"
	.string "anywhere. Neither in a trainer nor\n"
	.string "POKÉMON.$"

Lavender_Secta_Pasadizo_Oak_Texto_5:
	.string "C. FRIDA: You don't believe so?$"

Lavender_Secta_Pasadizo_Oak_Texto_6:
	.string "OAK: Environment influences way too\n"
	.string "much. If it weren't for LAVENDER TOWN,\n"
	.string "you'd have never become the GHOST\l"
	.string "master that you are now.$"

Lavender_Secta_Pasadizo_Oak_Texto_7:
	.string "C. FRIDA: And you are right on that.\n"
	.string "Things would have been quite different.$"

Lavender_Secta_Pasadizo_Oak_Texto_8:
	.string "OAK: Worse yet, if we had imprisoned you\n"
	.string "in the ROCK TUNNEL, you couldn't have\n"
	.string "developed the slightest of your\l"
	.string "potential.$"

Lavender_Secta_Pasadizo_Oak_Texto_9:
	.string "Confined there, your level would hardly\n"
	.string "surpass a GYM challenger's.$"

Lavender_Secta_Pasadizo_Oak_Texto_10:
	.string "C. FRIDA: Oh, yes!$"

Lavender_Secta_Pasadizo_Oak_Texto_11:
	.string "Confined inside that dark and narrow\n"
	.string "tunnel{PAUSE 15}…{PAUSE 15}already unreachable for anyone.$"

Lavender_Secta_Pasadizo_Oak_Texto_12:
	.string "OAK: What do you mean?$"

Lavender_Secta_Pasadizo_Oak_Texto_13:
	.string "C. FRIDA: Even in the darkest of the\n"
	.string "cells, my options would still be infinite.$"

Lavender_Secta_Pasadizo_Oak_Texto_14:
	.string "Not as much, yet still infinite.$"

Lavender_Secta_Pasadizo_Oak_Texto_15:
	.string "OAK: That makes no sense.\p"
	.string "It's not possible!$"

Lavender_Secta_Pasadizo_Oak_Texto_16:
	.string "C. FRIDA: It's not about possibility or\n"
	.string "impossibility. It's about certainty.$"

Lavender_Secta_Pasadizo_Oak_Texto_17:
	.string "It is consciousness, not matter, that\n"
	.string "cements reality.$"

Lavender_Secta_Pasadizo_Oak_Texto_18:
	.string "With that, there's always a probability\n"
	.string "of change. And that probability is what\n"
	.string "causes more of it.$"

Lavender_Secta_Pasadizo_Oak_Texto_19:
	.string "Besides{PAUSE 35}…{PAUSE 35}$"

Lavender_Secta_Pasadizo_Oak_Texto_20:
	.string "Sometimes, life is like a dark tunnel.\n"
	.string "You can't always see the light at the\n"
	.string "end of the tunnel, but if you just keep\l"
	.string "moving... you will come to a better place.\l"
	.string "Even in the darkest place, you give\l"
	.string "yourself hope, and that's true\l"
	.string "willpower.$"

Lavender_Secta_Pasadizo_Oak_Texto_21:
	.string "OAK: This is still total crock! Nothing\n"
	.string "more than desperate desires of how you\n"
	.string "want the world to work.$"

Lavender_Secta_Pasadizo_Oak_Texto_22:
	.string "You got this far in spite of believing in\n"
	.string "all of this mystical crock.$"

Lavender_Secta_Pasadizo_Oak_Texto_23:
	.string "But we both know that it is your talent\n"
	.string "combined with luck that got the job\n"
	.string "done.$"

Lavender_Secta_Pasadizo_Oak_Texto_24:
	.string "Without the final result, not a single\n"
	.string "soul would take your little speech\n"
	.string "seriously.$"

Lavender_Secta_Pasadizo_Oak_Texto_25:
	.string "C. FRIDA: How unfortunate.$"

Lavender_Secta_Pasadizo_Oak_Texto_26:
	.string "You're smart. But your attachment to\n"
	.string "reason in the world you know blinds you.$"

Lavender_Secta_Pasadizo_Oak_Texto_27:
	.string "OAK: If I cannot see it, then show it to\n"
	.string "me.$"

Lavender_Secta_Pasadizo_Oak_Texto_28:
	.string "Show me that POKÉMON, show me the\n"
	.string "proof, show me that all you said is true.$"

Lavender_Secta_Pasadizo_Oak_Texto_29:
	.string "C. FRIDA: I refuse.$"

Lavender_Secta_Pasadizo_Oak_Texto_30:
	.string "OAK: But… why?$"

Lavender_Secta_Pasadizo_Oak_Texto_31:
	.string "C. FRIDA: My POKÉMON is not a relic to be\n"
	.string "exposed at a museum.$"

Lavender_Secta_Pasadizo_Oak_Texto_32:
	.string "If you want proof, you must start your\n"
	.string "own search. Don't try to start building\n"
	.string "a house from the roof.$"

Lavender_Secta_Pasadizo_Oak_Texto_33:
	.string "OAK: Then I'll be forcing you to do so.$"

Lavender_Secta_Pasadizo_Oak_Texto_34:
	.string "The day I apply for the CHAMPION, you\n"
	.string "won't have a chance.$"

Lavender_Secta_Pasadizo_Oak_Texto_35:
	.string "C. FRIDA: {PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

Lavender_Secta_Pasadizo_Oak_Texto_36:
	.string "I'm afraid that won't happen. My\n"
	.string "POKÉMON and I will be going on a\n"
	.string "journey, far from KANTO and JOHTO.$"

Lavender_Secta_Pasadizo_Oak_Texto_37:
	.string "OAK: Are you refusing to\n"
	.string "defend your title?!$"

Lavender_Secta_Pasadizo_Oak_Texto_38:
	.string "C. FRIDA: I have nothing else to\n"
	.string "demonstrate that I haven't already\n"
	.string "done.$"

Lavender_Secta_Pasadizo_Oak_Texto_39:
	.string "OAK: No… Impossible… A true CHAMPION\n"
	.string "would never do so…$"

Lavender_Secta_Pasadizo_Oak_Texto_40:
	.string "This is all a lie.$"

Lavender_Secta_Pasadizo_Oak_Texto_41:
	.string "That NINETALES doesn't exist, right? It\n"
	.string "was all a cheap trick.\p"
	.string "A bait everyone bit.$"

Lavender_Secta_Pasadizo_Oak_Texto_42:
	.string "Yeah… That's why you're leaving… You\n"
	.string "want to keep your legend bright.$"

Lavender_Secta_Pasadizo_Oak_Texto_43:
	.string "C. FRIDA: You think so?$"

Lavender_Secta_Pasadizo_Oak_Texto_44:
	.string "OAK: But it won't last long… History\n"
	.string "won't remember you for long. You only\n"
	.string "got the title once.$"

Lavender_Secta_Pasadizo_Oak_Texto_45:
	.string "With the years, only vague witnesses\n"
	.string "will remember you. Your story will remain\n"
	.string "a myth, a kid's bed time story.$"

Lavender_Secta_Pasadizo_Oak_Texto_46:
	.string "On the other hand, I won't get it once\n"
	.string "nor twice… I will maintain my position so\n"
	.string "I become the greatest, most\l"
	.string "long-standing CHAMPION that ever\l"
	.string "lived!$"

Lavender_Secta_Pasadizo_Oak_Texto_47:
	.string "I will show everyone my POKÉMON, no\n"
	.string "illusion or phantom. All my feats will be\n"
	.string "in everyone's memory, in sight of every\l"
	.string "single living person.$"

Lavender_Secta_Pasadizo_Oak_Texto_48:
	.string "And when I become the one with the most\n"
	.string "trophies, I'll have proven I am the best\n"
	.string "TRAINER ever. You can say whatever you\l"
	.string "want, but numbers never lie.$"

Lavender_Secta_Pasadizo_Oak_Texto_49:
	.string "C. FRIDA: I see.$"

Lavender_Secta_Pasadizo_Oak_Texto_50:
	.string "There's a saying, back in JOHTO:{PAUSE 20} “It's\n"
	.string "impossible to find the ideal twice, even\n"
	.string "very few find it once”.$"

Lavender_Secta_Pasadizo_Oak_Texto_51:
	.string "I found it once along with my\n"
	.string "NINETALES.$"

Lavender_Secta_Pasadizo_Oak_Texto_52:
	.string "You… You have what you need to seek it.$"

Lavender_Secta_Pasadizo_Oak_Texto_53:
	.string "However… if your only aspiration is to\n"
	.string "extend your sight but seal your\n"
	.string "senses… you won't ever find it.$"

Lavender_Secta_Pasadizo_Oak_Texto_54:
	.string "You'll live, but you'll never get to\n"
	.string "witness what awaits on the other side.\n"
	.string "Time waits for no one, do you\l"
	.string "understand?$"

Lavender_Secta_Pasadizo_Oak_Texto_55:
	.string "OAK: {PAUSE 25}…{PAUSE 25} …{PAUSE 25}$"

Lavender_Secta_Pasadizo_Oak_Texto_56:
	.string "OAK: Nonsense. There is no such thing\n"
	.string "as an “ideal.” The only things that\n"
	.string "exist are those measurable,\l"
	.string "upgradeable and registrable.$"

Lavender_Secta_Pasadizo_Oak_Texto_57:
	.string "The world shall see the result of my\n"
	.string "search.$"

Lavender_Secta_Pasadizo_Bloqueo::
lock
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_Bloqueo_Move_1
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Bloqueo_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_Bloqueo_Move_2
waitmovement 0x0
release
end

Lavender_Secta_Pasadizo_Bloqueo_Move_1:
walk_in_place_left
step_end

Lavender_Secta_Pasadizo_Bloqueo_Move_2:
walk_slow_right
step_end

Lavender_Secta_Pasadizo_Bloqueo_Texto_1:
	.string "A mysterious energy prevents you from\n"
	.string "coming back.$"
