MtSilver_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, MtSilver_OnTransition
	.byte 0
	
MtSilver_OnTransition::
setflag FLAG_VISITED_MT_SILVER
end


MtSilverDocumento_100::
msgbox MtSilverDocumento_Text_100, MSGBOX_SIGN   
end

MtSilverDocumento_Text_100:
	.string "MOUNT SILVER$"

MtSilver_Combate_Andra_Izq::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MtSilver_Combate_Andra_Move_1
waitmovement 0x0
goto MtSilver_Combate_Andra

MtSilver_Combate_Andra_Der::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MtSilver_Combate_Andra_Move_1.1
waitmovement 0x0
goto MtSilver_Combate_Andra

MtSilver_Combate_Andra::
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 1
applymovement 1, MtSilver_Combate_Andra_Move_2
waitmovement 0x0
msgbox MtSilver_Combate_Andra_Texto_1 MSGBOX_AUTOCLOSE
msgbox MtSilver_Combate_Andra_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, MtSilver_Combate_Andra_Move_3
applymovement OBJ_EVENT_ID_PLAYER, MtSilver_Combate_Andra_Move_3
waitmovement 0x0
msgbox MtSilver_Combate_Andra_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox MtSilver_Combate_Andra_Texto_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, MtSilver_Combate_Andra_Move_4
applymovement OBJ_EVENT_ID_PLAYER, MtSilver_Combate_Andra_Move_5
waitmovement 0x0
msgbox MtSilver_Combate_Andra_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox MtSilver_Combate_Andra_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, MtSilver_Combate_Andra_Move_3
waitmovement 0x0
msgbox MtSilver_Combate_Andra_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, MtSilver_Combate_Andra_Move_3
waitmovement 0x0
msgbox MtSilver_Combate_Andra_Texto_8 MSGBOX_AUTOCLOSE
msgbox MtSilver_Combate_Andra_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, MtSilver_Combate_Andra_Move_6
waitmovement 0x0
msgbox MtSilver_Combate_Andra_Texto_10 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_8, MtSilver_Combate_Andra_Texto_11
applymovement OBJ_EVENT_ID_PLAYER, MtSilver_Combate_Andra_Move_7
waitmovement 0x0
msgbox MtSilver_Combate_Andra_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, MtSilver_Combate_Andra_Move_8
waitmovement 0x0
msgbox MtSilver_Combate_Andra_Texto_13 MSGBOX_AUTOCLOSE
applymovement 1, MtSilver_Combate_Andra_Move_9
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
setflag FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT
removeobject 1
setvar VAR_UNUSED_0x40F7, 157
release
end

MtSilver_Combate_Andra_Texto_1:
.string "ANDRA: I didn't expect any less\n"
	.string "from you, {PLAYER}.$"

MtSilver_Combate_Andra_Texto_2:
	.string "I knew you wouldn't be able to resist\n"
	.string "visiting a place like this. Look.$"

MtSilver_Combate_Andra_Texto_3:
	.string "It's as if… this were the place where\n"
	.string "POKÉMON battling was born as we know it\l"
	.string "today. The great CHAMPIONs of KANTO\l"
	.string "and JOHTO end up retiring here after\l"
	.string "devoting their whole lives to battle.\l"
	.string "But even that tradition's fading away\l"
	.string "too.$"

MtSilver_Combate_Andra_Texto_4:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

MtSilver_Combate_Andra_Texto_5:
	.string "I've climbed to the top of MT. SILVER.\n"
	.string "Guess who I found there.$"

MtSilver_Combate_Andra_Texto_6:
	.string "For sure. Even I couldn't hide my\n"
	.string "surprise when I took down the guy\l"
	.string "towering over all of us back in the\l"
	.string "POKÉMON LEAGUE. Yet again, these limits\l"
	.string "go way beyond anything I'd ever\l"
	.string "imagined.$"

MtSilver_Combate_Andra_Texto_7:
	.string "RED is-and will keep being-an\n"
	.string "extraordinary TRAINER, but he's limited\l"
	.string "by his reality. Technically, he's already\l"
	.string "achieved perfection with what he has.$"

MtSilver_Combate_Andra_Texto_8:
	.string "But for those like us with our\n"
	.string "experiences, his sort of power's an\l"
	.string "open book. Really, joining TEAM ROCKET\l"
	.string "was the best move to see behind the\l"
	.string "curtains.$"

MtSilver_Combate_Andra_Texto_9:
	.string "I've learned and grown so much since\n"
	.string "arriving in HOENN, {PLAYER}. I said I\l"
	.string "wouldn't use LEGENDARIES in my team,\l"
	.string "and I'm sticking by that.$"

MtSilver_Combate_Andra_Texto_10:
	.string "I trekked MOUNT SILVER to seek out a\n"
	.string "grand challenge. RED wasn't bad, but… I\l"
	.string "knew the real challenge would be you!$"

MtSilver_Combate_Andra_Texto_11:
.string "Argh, some things never change.$"

MtSilver_Combate_Andra_Texto_12:
	.string "Even with everything I'd thrown at you\n"
	.string "to ramp up the difficulty, you'd still\l"
	.string "trounced me again. But still, I'll never\l"
	.string "stop pushing-growing stronger and more\l"
	.string "experienced with each challenge. After\l"
	.string "all, we're the ELITE of TEAM ROCKET.\l"
	.string "Can't get bogged in regrets and\l"
	.string "what-ifs; just gotta look ahead and\l"
	.string "keep trucking on.$"

MtSilver_Combate_Andra_Texto_13:
	.string "I'll be hanging around JOHTO a bit.\n"
	.string "GIOVANNI wants me here for now. I think\l"
	.string "he can tell a storm's brewing. I'm\l"
	.string "intrigued too. We haven't gotten even a\l"
	.string "blip after that earthquake on SEVEN\l"
	.string "ISLAND-or seen LUGIA or HO-OH, for that\l"
	.string "matter. And that enigmatic ESSENCE\l"
	.string "POKÉMON remains elusive…$"

MtSilver_Combate_Andra_Move_1:
emote_exclamation_mark
walk_in_place_up
step_end

MtSilver_Combate_Andra_Move_1.1:
emote_exclamation_mark
walk_left
walk_in_place_up
step_end

MtSilver_Combate_Andra_Move_2:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

MtSilver_Combate_Andra_Move_3:
walk_in_place_right
step_end

MtSilver_Combate_Andra_Move_4:
face_down
step_end

MtSilver_Combate_Andra_Move_5:
face_up
step_end

MtSilver_Combate_Andra_Move_6:
walk_in_place_down
step_end

MtSilver_Combate_Andra_Move_7:
walk_in_place_up
step_end

MtSilver_Combate_Andra_Move_8:
walk_right
walk_down
step_end

MtSilver_Combate_Andra_Move_9:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end
