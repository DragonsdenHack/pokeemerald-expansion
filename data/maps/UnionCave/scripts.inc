UnionCave_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, UnionCave_OnResume
	.byte 0

UnionCave_OnResume:
	call UnionCave_SetupEscapeWarp
	end

UnionCave_SetupEscapeWarp::
	setescapewarp MAP_ROUTE32, 9, 106
	return

UnionCave1::
end



UnionCave2::
end



UnionCave3::
end



UnionCave4::
end



UnionCave5::
lock     
faceplayer     
msgbox UnionCave_Text_5, MSGBOX_DEFAULT
release     
end

UnionCave_Text_5:
	.string "Recently, I made the decision to\n"
	.string "explore the depths of the cave, and I\l"
	.string "stumbled upon someone offering to\l"
	.string "teach a remarkably strong move to\l"
	.string "those capable of learning it. But the\l"
	.string "price was 10,000 POKÉ!$"



UnionCave7::
end



UnionCave8::
end



UnionCave9::
end



UnionCave_EventScript_Montanero::
	trainerbattle_single TRAINER_JOHANNA, UnionCave_Text_MontaneroIntro, UnionCave_Text_MontaneroDefeated
	msgbox UnionCave_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end



UnionCave_EventScript_Necio::
	trainerbattle_single TRAINER_KIRA_AND_DAN_4, UnionCave_Text_NecioIntro, UnionCave_Text_NecioDefeated
	msgbox UnionCave_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



UnionCave_EventScript_Karateka::
	trainerbattle_single TRAINER_GERALD, UnionCave_Text_KaratekaIntro, UnionCave_Text_KaratekaDefeated
	msgbox UnionCave_Text_KaratekaPostBattle, MSGBOX_AUTOCLOSE
	end



UnionCave_EventScript_Necio2::
	trainerbattle_single TRAINER_KIRA_AND_DAN_5, UnionCave_Text_Necio2Intro, UnionCave_Text_Necio2Defeated
	msgbox UnionCave_Text_Necio2PostBattle, MSGBOX_AUTOCLOSE
	end

UnionCave_Combate_Elm::
applymovement OBJ_EVENT_ID_PLAYER, UnionCave_Combate_Elm_Move_1
waitmovement 0x0
msgbox UnionCave_Combate_Elm_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox UnionCave_Combate_Elm_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 6, UnionCave_Combate_Elm_Move_2
waitmovement 0x0
msgbox UnionCave_Combate_Elm_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UnionCave_Combate_Elm_Move_3
waitmovement 0x0
msgbox UnionCave_Combate_Elm_Texto_4 MSGBOX_AUTOCLOSE
applymovement 6, UnionCave_Combate_Elm_Move_4
waitmovement 0x0
msgbox UnionCave_Combate_Elm_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox UnionCave_Combate_Elm_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 6, UnionCave_Combate_Elm_Move_2
waitmovement 0x0
msgbox UnionCave_Combate_Elm_Texto_6 MSGBOX_AUTOCLOSE
applymovement 6, UnionCave_Combate_Elm_Move_5
waitmovement 0x0
msgbox UnionCave_Combate_Elm_Texto_7 MSGBOX_AUTOCLOSE
msgbox UnionCave_Combate_Elm_Texto_8 MSGBOX_AUTOCLOSE
applymovement 6, UnionCave_Combate_Elm_Move_6
waitmovement 0x0
msgbox UnionCave_Combate_Elm_Texto_9 MSGBOX_AUTOCLOSE
applymovement 6, UnionCave_Combate_Elm_Move_7
waitmovement 0x0
msgbox UnionCave_Combate_Elm_Texto_10 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ELM, UnionCave_Combate_Elm_Texto_11
msgbox UnionCave_Combate_Elm_Texto_12 MSGBOX_AUTOCLOSE
applymovement 6, UnionCave_Combate_Elm_Move_7
waitmovement 0x0
msgbox UnionCave_Combate_Elm_Texto_13 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UnionCave_Combate_Elm_Move_8
applymovement 6, UnionCave_Combate_Elm_Move_9
waitmovement 0x0
msgbox UnionCave_Combate_Elm_Texto_14 MSGBOX_AUTOCLOSE
applymovement 6, UnionCave_Combate_Elm_Move_10
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_ROUTE_110_BIRCH
removeobject 6
setvar VAR_UNUSED_0x40F7, 127
release
end

UnionCave_Combate_Elm_Texto_1:
.string "As I thought, disappointing.$"

UnionCave_Combate_Elm_Texto_2:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

UnionCave_Combate_Elm_Texto_3:
.string "ELM: Ah, {PLAYER}.\n"
	.string "Are you also exploring\l"
	.string "the UNION CAVE?$"

UnionCave_Combate_Elm_Texto_4:
	.string "I intended to carry out a brief\n"
	.string "investigation regarding the POKÉMON\l"
	.string "that sleeps at the very bottom of this\l"
	.string "cave.$"

UnionCave_Combate_Elm_Texto_5:
	.string "It was just a LAPRAS. Don't get me\n"
	.string "wrong, it is a good POKÉMON, but my\l"
	.string "expectations were higher.$"

UnionCave_Combate_Elm_Texto_6:
	.string "For real!? Did you fight against\n"
	.string "FALKNER senior himself?!$"

UnionCave_Combate_Elm_Texto_7:
	.string "Well, so he agreed to fight you.$"

UnionCave_Combate_Elm_Texto_8:
	.string "A fascinating trainer, no doubt. I\n"
	.string "wanted to investigate how his PIDGEOT\l"
	.string "could MEGA EVOLVE without using my\l"
	.string "technology, but all those of his\l"
	.string "generation are the same: they live like\l"
	.string "hermits, oblivious to everything\l"
	.string "happening in the world. Maybe that's\l"
	.string "where his power lies, just like the DEEP\l"
	.string "BOND phenomenon, his MEGA EVOLUTION is\l"
	.string "activated in a similar way.$"

UnionCave_Combate_Elm_Texto_9:
	.string "I'm curious about that. You didn't just\n"
	.string "battle against him, but you were able to\l"
	.string "defeat him as well. Maybe I'm facing an\l"
	.string "even more fascinating subject for\l"
	.string "study than those old LEADERS, who will\l"
	.string "soon become outdated in JOHTO.$"

UnionCave_Combate_Elm_Texto_10:
	.string "Show me your POKÉMON, CHIEF\n"
	.string "ADMINISTRATOR ROCKET!$"

UnionCave_Combate_Elm_Texto_11:
.string "Hmmm…\n"
	.string "Very interesting, I take notes.$"

UnionCave_Combate_Elm_Texto_12:
	.string "Now I understand why you're one of the\n"
	.string "most influential and powerful members\l"
	.string "of TEAM ROCKET. I hope you'll keep\l"
	.string "providing us with valuable insights into\l"
	.string "those singular POKÉMON.$"

UnionCave_Combate_Elm_Texto_13:
	.string "Now I'm off, {PLAYER}, thanks for the\n"
	.string "combat.$"

UnionCave_Combate_Elm_Texto_14:
	.string "Oh, and by the way, there's an upcoming\n"
	.string "event, a significant one here in JOHTO.\l"
	.string "GIOVANNI will probably inform you about\l"
	.string "it soon. Given what I've witnessed in\l"
	.string "this cave, I comprehend why he\l"
	.string "consistently involves you in the most\l"
	.string "crucial affairs.$"

UnionCave_Combate_Elm_Move_1:
walk_in_place_down
step_end

UnionCave_Combate_Elm_Move_2:
emote_exclamation_mark
walk_in_place_left
step_end

UnionCave_Combate_Elm_Move_3:
walk_down
walk_down
walk_right
step_end

UnionCave_Combate_Elm_Move_4:
walk_in_place_right
step_end

UnionCave_Combate_Elm_Move_5:
face_right
step_end

UnionCave_Combate_Elm_Move_6:
face_left
step_end

UnionCave_Combate_Elm_Move_7:
walk_in_place_left
step_end

UnionCave_Combate_Elm_Move_8:
face_up
step_end

UnionCave_Combate_Elm_Move_9:
walk_up
walk_up
delay_1
delay_2
walk_in_place_down
step_end

UnionCave_Combate_Elm_Move_10:
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
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

UnionCave_Llamada_Giovanni::
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
msgbox UnionCave_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
setvar VAR_UNUSED_0x40F7, 126
release
end

UnionCave_Llamada_Giovanni_Texto_1:
	.string "GIOVANNI: {PLAYER}? We've received\n"
	.string "the data on FALKNER's DEEP BOND\l"
	.string "RAPIDASH. It must have been a tough\l"
	.string "opponent, managing to compensate for\l"
	.string "its x4 weakness to ROCK TYPE with the\l"
	.string "ability FUR COAT. Very impressive,\l"
	.string "especially with that ATTACK and SPEED\l"
	.string "of 130-135 BASE as well. You know you\l"
	.string "can drop by the DEEP BASE room where\l"
	.string "we'll study and update all the\l"
	.string "information about this kind of POKÉMON.\l"
	.string "And one more thing, have you visited\l"
	.string "the RUINS OF ALPH? That's correct, we\l"
	.string "haven't discovered anything yet, but\l"
	.string "don't fret, {PLAYER}. Right now,\l"
	.string "concentrate on gathering data about\l"
	.string "the DEEP BOND POKÉMON. We have plenty\l"
	.string "of time to uncover the secrets of the\l"
	.string "RUINS. As for the GYM LEADERS{PAUSE 25}…{PAUSE 25} who\l"
	.string "knows how long they'll endure in this\l"
	.string "dynamic JOHTO.$"
