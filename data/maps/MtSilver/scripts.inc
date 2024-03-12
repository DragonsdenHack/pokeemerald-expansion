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
.string "ANDRA: I didn't expect less\n"
	.string "from you, {PLAYER}.$"

MtSilver_Combate_Andra_Texto_2:
	.string "I knew you wouldn't be able to resist\n"
	.string "visiting a place like this, look.$"

MtSilver_Combate_Andra_Texto_3:
	.string "It's as… if this were the place where\n"
	.string "POKÉMON battling was born as we know it\l"
	.string "today. Here is where the great\l"
	.string "champions of KANTO and JOHTO have come\l"
	.string "to retire after a lifetime devoted to\l"
	.string "battling, although it seems that\l"
	.string "tradition is also fading.$"

MtSilver_Combate_Andra_Texto_4:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

MtSilver_Combate_Andra_Texto_5:
	.string "I've climbed to the top of MT. SILVER,\n"
	.string "guess who I found there.$"

MtSilver_Combate_Andra_Texto_6:
	.string "Indeed, I surprised myself by defeating\n"
	.string "someone who seemed unbeatable in the\l"
	.string "POKÉMON LEAGUE. Once again, the limits\l"
	.string "were much farther than I imagined.$"

MtSilver_Combate_Andra_Texto_7:
	.string "RED is, and will keep being, an\n"
	.string "extraordinary TRAINER, but he is\l"
	.string "limited by his reality. Technically, he\l"
	.string "has achieved perfection with what he\l"
	.string "has.$"

MtSilver_Combate_Andra_Texto_8:
	.string "However, for individuals such as\n"
	.string "ourselves, who have seen what we have,\l"
	.string "that power holds no more secrets.\l"
	.string "Joining TEAM ROCKET was the most\l"
	.string "beneficial choice to know the reality.$"

MtSilver_Combate_Andra_Texto_9:
	.string "I have learned and improved a lot since\n"
	.string "I arrived in HOENN, {PLAYER}, I said I\l"
	.string "wouldn't use LEGENDARIES in my team,\l"
	.string "and I intend to keep it.$"

MtSilver_Combate_Andra_Texto_10:
	.string "I came here, to MOUNT SILVER, in search\n"
	.string "of a grand challenge. RED was not bad,\l"
	.string "but… I knew that the real challenge will\l"
	.string "be you!$"

MtSilver_Combate_Andra_Texto_11:
.string "Argh, some things never change.$"

MtSilver_Combate_Andra_Texto_12:
	.string "Despite my efforts to make it even more\n"
	.string "challenging, you've still managed to\l"
	.string "overcome me again. Just know that I'll\l"
	.string "never stop pushing, growing stronger\l"
	.string "and more experienced with each\l"
	.string "challenge. After all, we are the ELITE\l"
	.string "of TEAM ROCKET. There's no time for\l"
	.string "regrets or what-ifs; all that's left is\l"
	.string "to look forward and keep going.$"

MtSilver_Combate_Andra_Texto_13:
	.string "I'll be staying in JOHTO for a while.\n"
	.string "GIOVANNIwants me here for now, I think\l"
	.string "he senses that something big is coming.\l"
	.string "I'm intrigued too, ever since that\l"
	.string "earthquake on SEVEN ISLAND, we haven't\l"
	.string "heard anything about what happened, or\l"
	.string "seen LUGIA or HO-OH. And that enigmatic\l"
	.string "ESSENCE POKÉMON remains elusive…$"

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
