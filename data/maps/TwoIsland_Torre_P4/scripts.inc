TwoIsland_Torre_P4_MapScripts::
	.byte 0

TwoIsland_Torre_P4_EventScript_Rocket::
	trainerbattle_single TRAINER_TRAINER_163, TwoIsland_Torre_P4_Text_RocketIntro, TwoIsland_Torre_P4_Text_RocketDefeated
	msgbox TwoIsland_Torre_P4_Text_RocketPostBattle, MSGBOX_AUTOCLOSE
	end

TwoIsland_Torre_P4_EventScript_Rocket_2::
	trainerbattle_single TRAINER_TRAINER_164, TwoIsland_Torre_P4_Text_Rocket2Intro, TwoIsland_Torre_P4_Text_Rocket2Defeated
	msgbox TwoIsland_Torre_P4_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
	end

TwoIsland_Torre_P4_Dormido::
lock
msgbox TwoIsland_Torre_P4_Dormido_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox TwoIsland_Torre_P4_Dormido_Texto_2 MSGBOX_AUTOCLOSE
release
end

TwoIsland_Torre_P4_Dormido_Texto_2:
.string "(He's taking a nap!)$"

TwoIsland_Torre_P4_Dormido_Texto_1:
.string "... ...$"

TwoIsland_Torre_P4_Evento_Final::
lock
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, TwoIsland_Torre_P4_Evento_Final_Move_1
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 3, TwoIsland_Torre_P4_Evento_Final_Move_2
applymovement 4, TwoIsland_Torre_P4_Evento_Final_Move_2
waitmovement 0x0
applymovement 4, TwoIsland_Torre_P4_Evento_Final_Move_3
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_3
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, TwoIsland_Torre_P4_Evento_Final_Move_4
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, TwoIsland_Torre_P4_Evento_Final_Move_5
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_6
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_7
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_8
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_6
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_9
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_10
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_6
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_3
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_13 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, TwoIsland_Torre_P4_Evento_Final_Move_11
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_5
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_15 MSGBOX_AUTOCLOSE
delay 20
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_16 MSGBOX_AUTOCLOSE
delay 20
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_17 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_8
waitmovement 0x0
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_7
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_18 MSGBOX_AUTOCLOSE
delay 15
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_19 MSGBOX_AUTOCLOSE
playse SE_POKENAV_CALL
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_3
waitmovement 0x0
delay 15
applymovement 2, TwoIsland_Torre_P4_Evento_Final_Move_12
waitmovement 0x0
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, TwoIsland_Torre_P4_Evento_Final_Move_13
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, TwoIsland_Torre_P4_Evento_Final_Move_6
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_3
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_21 MSGBOX_AUTOCLOSE
applymovement 4, TwoIsland_Torre_P4_Evento_Final_Move_14
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_22 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_154, TwoIsland_Torre_P4_Evento_Final_Texto_23
applymovement 3, TwoIsland_Torre_P4_Evento_Final_Move_14
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_24 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_155, TwoIsland_Torre_P4_Evento_Final_Texto_25
delay 10
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_3
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_26 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_6
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_27 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_3
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_28 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_14
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_29 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_153, TwoIsland_Torre_P4_Evento_Final_Texto_30
playse SE_BREAKABLE_DOOR
applymovement 3, TwoIsland_Torre_P4_Evento_Final_Move_5
applymovement 4, TwoIsland_Torre_P4_Evento_Final_Move_5
applymovement 2, TwoIsland_Torre_P4_Evento_Final_Move_5
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_15
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_31 MSGBOX_AUTOCLOSE
delay 15
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_32 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_14
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_33 MSGBOX_AUTOCLOSE
delay 15
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_34 MSGBOX_AUTOCLOSE
applymovement 1, TwoIsland_Torre_P4_Evento_Final_Move_3
waitmovement 0x0
msgbox TwoIsland_Torre_P4_Evento_Final_Texto_35 MSGBOX_AUTOCLOSE
setflag FLAG_NUEVA_829
fadescreen 1
delay 20
removeobject 1
removeobject 2
removeobject 3
removeobject 4
removeobject 5
removeobject 6
fadescreen 0
clearflag FLAG_HIDE_LILYCOVE_HARBOR_FERRY_SAILOR
setvar VAR_UNUSED_0x404E, 4
release
end

TwoIsland_Torre_P4_Evento_Final_Move_15:
lock_facing_direction
walk_up
unlock_facing_direction
step_end

TwoIsland_Torre_P4_Evento_Final_Move_14:
walk_down
step_end

TwoIsland_Torre_P4_Evento_Final_Move_13:
emote_exclamation_mark
delay_8
face_down
delay_8
step_end

TwoIsland_Torre_P4_Evento_Final_Move_12:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
step_end

TwoIsland_Torre_P4_Evento_Final_Move_11:
walk_in_place_up
step_end

TwoIsland_Torre_P4_Evento_Final_Move_10:
walk_slow_left
step_end

TwoIsland_Torre_P4_Evento_Final_Move_9:
walk_slow_left
face_down
step_end

TwoIsland_Torre_P4_Evento_Final_Move_8:
walk_slow_right
step_end

TwoIsland_Torre_P4_Evento_Final_Move_7:
face_down
step_end

TwoIsland_Torre_P4_Evento_Final_Move_6:
face_up
step_end

TwoIsland_Torre_P4_Evento_Final_Move_5:
emote_exclamation_mark
step_end

TwoIsland_Torre_P4_Evento_Final_Move_4:
walk_slow_right
walk_slow_right
walk_slow_up
delay_8
delay_8
step_end

TwoIsland_Torre_P4_Evento_Final_Move_3:
walk_in_place_down
step_end

TwoIsland_Torre_P4_Evento_Final_Move_2:
emote_exclamation_mark
delay_8
delay_8
face_down
delay_8
delay_8
step_end

TwoIsland_Torre_P4_Evento_Final_Move_1:
walk_slow_up
walk_slow_up
step_end

TwoIsland_Torre_P4_Evento_Final_Texto_3:
	.string "????: Oh, come on! Can't you identify a\n"
	.string "superior from your ex-organization\l"
	.string "when he's right in front of you?$"

TwoIsland_Torre_P4_Evento_Final_Texto_4:
	.string "FRANK: That's right, {PLAYER}. You\n"
	.string "didn't expect to see me here, did you?\l"
	.string "Maybe you started to have suspicions\l"
	.string "when you saw former members of TEAM\l"
	.string "ROCKET, but who cares.$"

TwoIsland_Torre_P4_Evento_Final_Texto_5:
	.string "The fact is, I haven't been part of the\n"
	.string "organization for a while. Let's say... I\l"
	.string "broke the internal ROCKET code of\l"
	.string "conduct, the same code that caused us\l"
	.string "to fail in the MT. MOON mission, thanks\l"
	.string "to your foolish actions.$"

TwoIsland_Torre_P4_Evento_Final_Texto_6:
	.string "Life takes some unexpected turns,\n"
	.string "doesn't it? In our last encounter, I was\l"
	.string "close to becoming an ADMINISTRATOR,\l"
	.string "and you were still a HIGH RANK. Now, as I\l"
	.string "understand it, you've saved KANTO and\l"
	.string "are GIOVANNI's right-hand.$"

TwoIsland_Torre_P4_Evento_Final_Texto_7:
	.string "But you're probably asking yourself,\n"
	.string "what am I doing here? I'll be clear:\l"
	.string "we're going to transform this place into\l"
	.string "the new ARCHI7 GAME CORNER.$"

TwoIsland_Torre_P4_Evento_Final_Texto_8:
	.string "Considering all the islands from SEVII,\n"
	.string "the total population is significant. If\l"
	.string "we add to that the great ease of\l"
	.string "traveling with the SEAGALLOP, the\l"
	.string "connection to VERMILION CITY, and the\l"
	.string "minimal competition, we have a solid\l"
	.string "business here.$"

TwoIsland_Torre_P4_Evento_Final_Texto_9:
	.string "Due to a contact in SINNOH, we'll be\n"
	.string "bringing in rare POKÉMON from that\l"
	.string "region to sell them here as premium\l"
	.string "POKÉMON.$"

TwoIsland_Torre_P4_Evento_Final_Texto_10:
	.string "And the best part is that we will follow\n"
	.string "the same system of COINS and games as\l"
	.string "the CELADON CITY GAME CORNER. We will\l"
	.string "turn this place into the new capital of\l"
	.string "ARCHI7.$"

TwoIsland_Torre_P4_Evento_Final_Texto_11:
	.string "This building is just the beginning;\n"
	.string "here, we will carry out all our\l"
	.string "operations, just like the ROCKET\l"
	.string "HIDEOUT, but without the need to hide.$"

TwoIsland_Torre_P4_Evento_Final_Texto_12:
	.string "Next, we'll expand those dreadful\n"
	.string "RECREATIONAL areas and begin\l"
	.string "transforming them into a real CASINO.$"

TwoIsland_Torre_P4_Evento_Final_Texto_13:
	.string "Isn't it fantastic? Come on! When all of\n"
	.string "this is done, I might even make you a\l"
	.string "special offer for the SINNOH POKÉMON...$"

TwoIsland_Torre_P4_Evento_Final_Texto_14:
	.string "Do you want me to return the JOYFUL\n"
	.string "GAME CORNER areas to their rightful\l"
	.string "owners?$"

TwoIsland_Torre_P4_Evento_Final_Texto_15:
	.string "You must be kidding, do you really want\n"
	.string "those unbearable mini-games to\l"
	.string "continue? DODRIO GO FOR BERRIES! No\l"
	.string "one plays that, {PLAYER}, no one\l"
	.string "cares. I'm doing this island a favor,\l"
	.string "can't you see?$"

TwoIsland_Torre_P4_Evento_Final_Texto_16:
.string "… …$"

TwoIsland_Torre_P4_Evento_Final_Texto_17:
	.string "I see you're still the same; I thought\n"
	.string "being an ADMINISTRATOR would have\l"
	.string "made you see reality, but you're still\l"
	.string "just as naive.$"

TwoIsland_Torre_P4_Evento_Final_Texto_18:
	.string "I told you back then that you couldn't\n"
	.string "continue climbing solely by winning\l"
	.string "battles; the only reason you've\l"
	.string "succeeded is because you were the best\l"
	.string "at it: the exception. You've ended up\l"
	.string "being even better than that RED who\l"
	.string "defeated us at MT. MOON. I respect you\l"
	.string "for that.$"

TwoIsland_Torre_P4_Evento_Final_Texto_19:
	.string "However... the winner isn't always the\n"
	.string "strongest one.$"

TwoIsland_Torre_P4_Evento_Final_Texto_20:
	.string "That stupid moral code and assuming\n"
	.string "others will follow it is what will lead\l"
	.string "you to downfall. We're part of TEAM\l"
	.string "ROCKET, and above all, we aim to win\l"
	.string "regardless of the method.$"

TwoIsland_Torre_P4_Evento_Final_Texto_21:
	.string "You're not going anywhere, {PLAYER}.\n"
	.string "There's no turning back; we are two\l"
	.string "former EXECUTIVES and a former ROCKET\l"
	.string "ADMINISTRATOR. No matter how skilled\l"
	.string "you are, you have no chance.$"

TwoIsland_Torre_P4_Evento_Final_Texto_22:
	.string "Not even GIOVANNI could handle the\n"
	.string "three of us together, be on guard!$"

TwoIsland_Torre_P4_Evento_Final_Texto_23:
	.string "This was part of our plans!$"

TwoIsland_Torre_P4_Evento_Final_Texto_24:
	.string "TWO ISLAND is ours, we're going to be\n"
	.string "the new SILPH of ARCHI7!$"

TwoIsland_Torre_P4_Evento_Final_Texto_25:
	.string "SILPH didn't fall, and we won't either!$"

TwoIsland_Torre_P4_Evento_Final_Texto_26:
	.string "FRANK: Impressive, but you haven't\n"
	.string "proven anything yet.$"

TwoIsland_Torre_P4_Evento_Final_Texto_27:
	.string "Take note, {PLAYER}, you've always\n"
	.string "been below me, not even as an\l"
	.string "ADMINISTRATOR have you succeeded in\l"
	.string "overtaking me.$"

TwoIsland_Torre_P4_Evento_Final_Texto_28:
	.string "Now, I am the LEADER of a new\n"
	.string "organization that will eventually be as\l"
	.string "important as TEAM ROCKET.$"

TwoIsland_Torre_P4_Evento_Final_Texto_29:
	.string "You will never reach my level!$"

TwoIsland_Torre_P4_Evento_Final_Texto_30:
	.string "Grrrrrr.... You were not supposed to win!$"

TwoIsland_Torre_P4_Evento_Final_Texto_31:
	.string "FRANK: No! You shouldn't be that\n"
	.string "strong!$"

TwoIsland_Torre_P4_Evento_Final_Texto_32:
	.string "You've only won due to your talent for\n"
	.string "combat! Your foolish moral code is just\l"
	.string "a masquerade!$"

TwoIsland_Torre_P4_Evento_Final_Texto_33:
	.string "How do I know? Between us, you would\n"
	.string "have preferred a thousand times more\l"
	.string "the fantastic plan I've talked to you\l"
	.string "about for this place than the useless\l"
	.string "role it plays now.$"

TwoIsland_Torre_P4_Evento_Final_Texto_34:
	.string "You've only done this to look good in\n"
	.string "front of those two idiots who will keep\l"
	.string "everything the same. This island is dead\l"
	.string "and will remain dead.$"

TwoIsland_Torre_P4_Evento_Final_Texto_35:
	.string "Well, I hope you enjoy the DODRIO GO FOR\n"
	.string "BERRIES and the POKEMON JUMP!$"

TwoIsland_Torre_P4_Evento_Final_Texto_2:
	.string "Who are you, and how did you get here?$"

TwoIsland_Torre_P4_Evento_Final_Texto_1:
	.string "As I was saying, we can easily sell the\n"
	.string "CRANIDOS for 7000 COINS...$"
