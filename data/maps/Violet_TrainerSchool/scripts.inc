Violet_TrainerSchool_MapScripts::
	.byte 0

VioletTrainerSchool1::
end



VioletTrainerSchool2::
lock
msgbox VioletTrainerSchool2_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool2_Texto_1:
	.string "I knew that FEAROW wasn't that good…$"



VioletTrainerSchool3::
lock
msgbox VioletTrainerSchool3_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool3_Texto_1:
.string "…$"



VioletTrainerSchool4::
lock
msgbox VioletTrainerSchool4_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool4_Texto_1:
	.string "So… Can DODRIO really do that much\n"
	.string "damage?$"


VioletTrainerSchool5::
lock
msgbox VioletTrainerSchool5_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool5_Texto_1:
	.string "You'll see. Once I'm back on ROUTE 13 in\n"
	.string "KANTO, no BIRDKEEPER there will believe\l"
	.string "I managed to attend a class led by\l"
	.string "FALKNER himself…$"


VioletTrainerSchool6::
lock
msgbox VioletTrainerSchool6_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool6_Texto_1:
	.string "I didn't know that NOCTOWL is a PSYCHIC\n"
	.string "TYPE too…$"



VioletTrainerSchool7::
lock
msgbox VioletTrainerSchool7_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool7_Texto_1:
	.string "This can't be… The weakest of his\n"
	.string "POKÉMON is much stronger than the best\l"
	.string "of my POKÉMON…$"



VioletTrainerSchool8::
lock
msgbox VioletTrainerSchool8_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool8_Texto_1:
	.string "Everything is great, but… Where did you\n"
	.string "find such bird? PIDGEOT doesn't compare\l"
	.string "with it.$"



VioletTrainerSchool9::
end



VioletTrainerSchool10::
lock
msgbox VioletTrainerSchool10_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool10_Texto_1:
	.string "And keep this in mind. To awaken a\n"
	.string "POKÉMON, we only need to use an\l"
	.string "AWAKENING on it or have a POKÉ FLUTE.$"



VioletTrainerSchool11::
lock
msgbox VioletTrainerSchool11_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool11_Texto_1:
	.string "These classes are so boring. I'm sure\n"
	.string "that FALKNER could make it more\l"
	.string "interesting…$"



VioletTrainerSchool12::
lock
msgbox VioletTrainerSchool12_Texto_1 MSGBOX_DEFAULT
release
end

VioletTrainerSchool12_Texto_1:
	.string "I know that I need an ANTIDOTE to heal\n"
	.string "POISON. Can you teach something else?$"



VioletTrainerSchool_EventScript_ReceiveStarly::
    lock
    faceplayer
	checkmoncatch SPECIES_STARLY
	goto_if_eq VAR_RESULT, FALSE, VioletTrainerSchool_EventScript_TakeStarly 
	msgbox VioletTrainerSchool_Text_9, MSGBOX_DEFAULT
	release
	end



VioletTrainerSchool_EventScript_TakeStarly::
    msgbox VioletTrainerSchool_Text_TakeStarly MSGBOX_DEFAULT
	msgbox VioletTrainerSchool_Text_TakeStarly2 MSGBOX_DEFAULT
	msgbox VioletTrainerSchool_Text_TakeStarly3 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox VioletTrainerSchool_Text_MensajeStarly, MSGBOX_DEFAULT
	givemon SPECIES_STARLY, 10, ITEM_FLYING_GEM
	waitfanfare  
	release
	end 



VioletTrainerSchool_Text_TakeStarly:
	.string "You were in FALKNER's class too, weren't\n"
	.string "you?$"




VioletTrainerSchool_Text_TakeStarly2:
	.string "It's pretty rad how much he knows about\n"
	.string "FLYING TYPEs. Plus, he always solves\l"
	.string "questions in a practical way.$"



VioletTrainerSchool_Text_TakeStarly3:
	.string "Heck, he even gave me a bird from some\n"
	.string "far-off region when he saw me\l"
	.string "interested in them. You know what? I've\l"
	.string "still got some chicks that hatched from\l"
	.string "when I paired it with my PIDGEOT. I'll\l"
	.string "give you one!$"



VioletTrainerSchool_Text_MensajeStarly:
.string "YOU OBTAINED A LV.10 STARLY!$"


VioletTrainerSchool_Text_9:
	.string "Be careful with STARLY when it grows.\n"
	.string "Its final evolution is more aggressive\l"
	.string "and offensive than PIDGEOT!$"

Violet_TrainerSchool_Discurso_Pegaso::
applymovement OBJ_EVENT_ID_PLAYER, Violet_TrainerSchool_Discurso_Pegaso_Move_1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Violet_TrainerSchool_Discurso_Pegaso_Move_2
waitmovement 0x0
special RemoveCameraObject
delay 15
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_3
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_1 MSGBOX_AUTOCLOSE
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_3
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_3 MSGBOX_AUTOCLOSE
delay 40
applymovement 4, Violet_TrainerSchool_Discurso_Pegaso_Move_4
applymovement 3, Violet_TrainerSchool_Discurso_Pegaso_Move_5
applymovement 5, Violet_TrainerSchool_Discurso_Pegaso_Move_6
applymovement 2, Violet_TrainerSchool_Discurso_Pegaso_Move_6
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, Violet_TrainerSchool_Discurso_Pegaso_Move_8
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_7
applymovement 5, Violet_TrainerSchool_Discurso_Pegaso_Move_8
applymovement 2, Violet_TrainerSchool_Discurso_Pegaso_Move_8
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_9
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_3
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_10
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_11
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_3
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_10 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER
fadescreen 1
removeobject 2
removeobject 4
removeobject 6
removeobject 7
removeobject 8
delay 20
fadescreen 0
delay 10
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_7
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_11 MSGBOX_AUTOCLOSE
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_8
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_13 MSGBOX_AUTOCLOSE
applymovement 3, Violet_TrainerSchool_Discurso_Pegaso_Move_3
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_14 MSGBOX_AUTOCLOSE
applymovement 3, Violet_TrainerSchool_Discurso_Pegaso_Move_3.1
waitmovement 0x0
removeobject 3
playse SE_EXIT
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Violet_TrainerSchool_Discurso_Pegaso_Move_13
waitmovement 0x0
special RemoveCameraObject
delay 20
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_11
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_15 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_14
waitmovement 0x0
delay 15
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_15
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_16
applymovement OBJ_EVENT_ID_PLAYER, Violet_TrainerSchool_Discurso_Pegaso_Move_11
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Violet_TrainerSchool_Discurso_Pegaso_Move_3
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_17 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Violet_TrainerSchool_Discurso_Pegaso_Move_3
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_14
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_18 MSGBOX_AUTOCLOSE
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_19 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_4
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_11
waitmovement 0x0
msgbox Violet_TrainerSchool_Discurso_Pegaso_Texto_21 MSGBOX_AUTOCLOSE
applymovement 1, Violet_TrainerSchool_Discurso_Pegaso_Move_17
waitmovement 0x0
removeobject 1
removeobject 3
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 121
release
end

Violet_TrainerSchool_Discurso_Pegaso_Texto_1:
	.string "FALKNER: So, that concludes the short\n"
	.string "overview of all the birds found in KANTO\l"
	.string "and JOHTO. Remember, FEAROW signifies\l"
	.string "variety, DODRIO signifies offense,\l"
	.string "NOCTOWL signifies endurance, and\l"
	.string "PIDGEOT signifies balance.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_2:
	.string "Now we'll move on to the strategy\n"
	.string "section, and here I'd like to emphasize\l"
	.string "two of the biggest weaknesses of the\l"
	.string "FLYING TYPE: ROCK and ELECTRIC.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_3:
	.string "Is there anyone here who knows how a\n"
	.string "FLYING TYPE can effectively deal with\l"
	.string "ELECTRIC or ROCK TYPEs?$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_4:
	.string "????: There's a move called MUD-SLAP\n"
	.string "that most birds can learn, and it's\l"
	.string "Super Effective against these types.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_5:
	.string "FALKNER: We've already discussed this,\n"
	.string "son. MUD-SLAP's power is dirt-poor, and\l"
	.string "taking a gamble on misses-well, you know\l"
	.string "the saying with hitting two birds with\l"
	.string "one Stone Edge. But instead of betting\l"
	.string "it all on coin flips, I mean ending the\l"
	.string "battle in one fell swoop with FLYING\l"
	.string "POKÉMON.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_6:
	.string "In this case, the best defense is a\n"
	.string "good offense. A well-trained DODRIO\l"
	.string "wearing a FOCUS SASH will knock out any\l"
	.string "ELECTRIC TYPE in a single STOMPING\l"
	.string "TANTRUM. Only the likes of JOLTEON or\l"
	.string "ELECTRODE could outspeed it, but we\l"
	.string "have CHOICE SCARF for that.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_7:
	.string "A FEAROW's DRILL RUN or a PIDGEOT's\n"
	.string "CLOSE COMBAT can get the drop on ROCK\l"
	.string "POKÉMON in part to their low SPEED. And\l"
	.string "they'll make short work of ELECTRIC\l"
	.string "TYPEs thanks to their low DEFENSE too.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_8:
	.string "And these are just a few examples\n"
	.string "showing that any POKÉMON can rise to\l"
	.string "meet any challenge with the right\l"
	.string "moves, items, and training. That\l"
	.string "countless variables can shift the\l"
	.string "course of battle so readily.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_9:
	.string "Note that we've only scratched the\n"
	.string "surface of the tools at our disposal in\l"
	.string "dealing with TYPE disadvantages. A\l"
	.string "GLIGAR or GLISCOR won't be fried by\l"
	.string "ELECTRIC TYPEs, and ROCK POKÉMON won't\l"
	.string "crush them as easily. But this line can\l"
	.string "also shake their world with EARTHQUAKE\l"
	.string "without any risk of hitting each other\l"
	.string "in return.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_10:
	.string "That's all for today's lesson. In our\n"
	.string "next session, we'll explore how the move\l"
	.string "ROOST can effectively eliminate all\l"
	.string "weaknesses of FLYING TYPE, allowing us\l"
	.string "to adopt a defensive strategy against\l"
	.string "the mentioned types. However, you'll\l"
	.string "also discover why it can be a\l"
	.string "double-edged sword. Thank you all for\l"
	.string "coming.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_11:
	.string "FALKNER SR.: FALKNER, return to SPROUT\n"
	.string "TOWER immediately to continue your\l"
	.string "training.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_12:
	.string "But… Dad… I wanna start training a\n"
	.string "PIDGEY!$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_13:
	.string "FALKNER: You're not ready yet. Before\n"
	.string "you start, you need to polish your\l"
	.string "skills to the fullest. You're still very\l"
	.string "young. If you prepare well in these\l"
	.string "couple of years, I assure you that once\l"
	.string "you take flight, you'll touch the sky.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_14:
	.string "Hmph! I'm so tired of seeing\n"
	.string "BELLSPROUT!$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_15:
	.string "FALKNER: Someday, the VIOLET CITY GYM\n"
	.string "will be yours, son…$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_16:
	.string "Well, we have a curious student. Do you\n"
	.string "wanna ask me something? I'll be more\l"
	.string "than happy to answer.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_17:
	.string "Battle with me? You seem like a good\n"
	.string "trainer, but a long time ago, I decided\l"
	.string "to step away from POKÉMON battles as\l"
	.string "they are known now. Besides, the badges\l"
	.string "of JOHTO are currently useless. I've\l"
	.string "seen that the POKÉMON LEAGUE has\l"
	.string "returned, but only for KANTO.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_18:
	.string "Is it because of the desire to improve\n"
	.string "as a TRAINER, to discover new POKÉMON,\l"
	.string "and to continue your journey that you\l"
	.string "want to request this battle? And not\l"
	.string "just to hang an insignificant BADGE to\l"
	.string "show off to everyone?$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_19:
	.string "Interesting… Are you {PLAYER}? If\n"
	.string "you complete the challenge I'm about to\l"
	.string "propose, I'll battle you.$"

Violet_TrainerSchool_Discurso_Pegaso_Texto_20:
	.string "Climb to the top of the SPROUT TOWER\n"
	.string "and speak with the ELDER MASTER. Tell\l"
	.string "him I sent you.$"


Violet_TrainerSchool_Discurso_Pegaso_Texto_21:
	.string "If you defeat him, I'll battle you and\n"
	.string "use my best POKÉMON. Whatever happens,\l"
	.string "I hope the experience of visiting such\l"
	.string "a sacred place will improve you even\l"
	.string "more. That's also part of your journey,\l"
	.string "isn't it?$"

Violet_TrainerSchool_Discurso_Pegaso_Move_1:
walk_in_place_right
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_2:
walk_right
walk_right
walk_down
walk_down
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_3:
walk_in_place_down
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_3.1:
walk_in_place_down
walk_down
walk_down
walk_down
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_4:
face_right
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_5:
walk_in_place_up
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_6:
face_left
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_7:
walk_left
walk_down
walk_left
face_down
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_8:
face_up
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_9:
walk_right
walk_up
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_10:
walk_right
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_11:
face_down
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_12:
walk_down
walk_down
walk_down
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_13:
walk_left
walk_left
walk_up
walk_up
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_14:
emote_exclamation_mark
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_15:
face_left
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_16:
walk_left
walk_left
walk_left
face_up
step_end

Violet_TrainerSchool_Discurso_Pegaso_Move_17:
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_down
walk_down
step_end
