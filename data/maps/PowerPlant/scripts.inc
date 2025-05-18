PowerPlant_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, PowerPlant_OnResume
	.byte 0

PowerPlant_OnResume:
	call PowerPlant_SetupEscapeWarp
	end

PowerPlant_SetupEscapeWarp::
	setescapewarp MAP_ROUTE10, 7, 41
	return

PowerPlant1::
end



PowerPlant2::
end



PowerPlant3::
end



PowerPlant4::
end



PowerPlant5::
end



PowerPlant6::
end



PowerPlant7::
end



PowerPlant8::
end



PowerPlant9::
end



PowerPlant10::
end



PowerPlant11::
end



PowerPlant13::
lock
msgbox PowerPlant13_Texto_1 MSGBOX_SIGN
release
end

PowerPlant13_Texto_1:
	.string "You are done, young lady; when LT.SURGE\n"
	.string "arrives, it won't take him more than one\l"
	.string "POKÉMON to finish you off…$"



PowerPlant14::
lock
msgbox PowerPlant14_Texto_1 MSGBOX_SIGN
release
end

PowerPlant14_Texto_1:
.string "{PLAYER}?\p"
	.string "Finally…\p"
	.string "I have already defeated 7 POLICE\n"
	.string "officers, who fled to alert LT. SURGE…\p"
	.string "Hurry{PAUSE 15}…{PAUSE 15} My team won't last much longer…$"



PowerPlant15::
end



PowerPlant16::
lock
msgbox PowerPlant16_Texto_1 MSGBOX_SIGN
release
end

PowerPlant16_Texto_1:
.string "PETREL: Take care of ZAPDOS.\p"
	.string "Go!$"



PowerPlant17::
lock
msgbox PowerPlant17_Texto_1 MSGBOX_SIGN
release
end

PowerPlant17_Texto_1:
	.string "LORELEI: So you are GIOVANNI's right\n"
	.string "hand, I've been ordered by LANCE to use\l"
	.string "my full capacity to defeat you, no one\l"
	.string "will leave this place while I am here…$"



PowerPlant18::
lock
msgbox PowerPlant18_Texto_1 MSGBOX_SIGN
release
end

PowerPlant18_Texto_1:
	.string "ARCHER: I am not one of those mediocre\n"
	.string "TRAINERS that are pretty common\l"
	.string "around here, LORELEI, neither a GYM\l"
	.string "LEADER, you will have to do better if\l"
	.string "you want to defeat me…$"



PowerPlant19::
end



PowerPlant21::
end



PowerPlant_EventScript_Policia::
	trainerbattle_single TRAINER_DAISY, PowerPlant_Text_PoliciaIntro, PowerPlant_Text_PoliciaDefeated
	msgbox PowerPlant_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



PowerPlant_EventScript_Policia2::
	trainerbattle_single TRAINER_ROSE_1, PowerPlant_Text_Policia2Intro, PowerPlant_Text_Policia2Defeated
	msgbox PowerPlant_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



PowerPlant_EventScript_Policia3::
	trainerbattle_single TRAINER_VIOLET, PowerPlant_Text_Policia3Intro, PowerPlant_Text_Policia3Defeated
	msgbox PowerPlant_Policia3PostBattle, MSGBOX_AUTOCLOSE
	end



PowerPlant_EventScript_Policia4::
	trainerbattle_single TRAINER_ROSE_2, PowerPlant_Text_Policia4Intro, PowerPlant_Text_Policia4Defeated
	msgbox PowerPlant_Policia4PostBattle, MSGBOX_AUTOCLOSE
	end



PowerPlant_EventScript_Policia5::
	trainerbattle_single TRAINER_ROSE_3, PowerPlant_Text_Policia5Intro, PowerPlant_Text_Policia5Defeated
	msgbox PowerPlant_Policia5PostBattle, MSGBOX_AUTOCLOSE
	end

PowerPlant_Encuentro_Petrel::
lock
applymovement OBJ_EVENT_ID_PLAYER, PowerPlant_Encuentro_Petrel_Move_1
waitmovement 0x0
playse SE_PIN
applymovement 19, PowerPlant_Encuentro_Petrel_Move_2
waitmovement 0x0
msgbox PowerPlant_Encuentro_Petrel_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 19, PowerPlant_Encuentro_Petrel_Move_2.1
waitmovement 0x0
delay 10
msgbox PowerPlant_Encuentro_Petrel_Texto_1.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 19, PowerPlant_Encuentro_Petrel_Move_3
waitmovement 0x0
msgbox PowerPlant_Encuentro_Petrel_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Encuentro_Petrel_Texto_2.1 MSGBOX_AUTOCLOSE
delay 20
msgbox PowerPlant_Encuentro_Petrel_Texto_3 MSGBOX_AUTOCLOSE
applymovement 19, PowerPlant_Encuentro_Petrel_Move_4
waitmovement 0x0
setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
removeobject 19
clearflag FLAG_HOENN_74
clearflag FLAG_HOENN_75
clearflag FLAG_HOENN_76
clearflag FLAG_HOENN_77
clearflag FLAG_HOENN_78
clearflag FLAG_HOENN_79
clearflag FLAG_HOENN_90
clearflag FLAG_HOENN_91
clearflag FLAG_HOENN_92
clearflag FLAG_HOENN_93
clearflag FLAG_HOENN_94
clearflag FLAG_HOENN_95
clearflag FLAG_HOENN_96
clearflag FLAG_HOENN_97
clearflag FLAG_HOENN_98
clearflag FLAG_HOENN_99
setflag FLAG_HOENN_640
setflag FLAG_HOENN_641
setflag FLAG_HOENN_642
setflag FLAG_HOENN_643
setflag FLAG_HOENN_644
setflag FLAG_HOENN_645
setflag FLAG_HOENN_646
setflag FLAG_HOENN_647
setflag FLAG_HOENN_648
setflag FLAG_HOENN_649
setvar VAR_UNUSED_0x40F7, 70
release
end

PowerPlant_Encuentro_Petrel_Move_2.1:
delay_8
face_up
delay_16
delay_8
face_player
delay_8
step_end

PowerPlant_Encuentro_Petrel_Texto_1:
.string "PETREL: {PLAYER}! Where were you?\p"
	.string "ARCHER and I had to go in without you…\p"
	.string "We saw how LORELEI of the ELITE FOUR\n"
	.string "arrived at the PLANT to stop ANDRA,\l"
	.string "and we had to intervene{PAUSE 25}…{PAUSE 25}$"

PowerPlant_Encuentro_Petrel_Texto_1.1:
	.string "ARCHER is currently battling her,\n"
	.string "he asked me to find you and tell\l"
	.string "you the plan…$"

PowerPlant_Encuentro_Petrel_Texto_2:
	.string "I'm going to take those cops off\n"
	.string "ANDRA's back. Meanwhile, you'll go\l"
	.string "after ZAPDOS to fulfill the mission.$"

PowerPlant_Encuentro_Petrel_Texto_2.1:
	.string "Once you get what we need and we're\n"
	.string "done with our rivals, we'll get out\l"
	.string "of here before the situation worsens.\p"
	.string "Understood?$"

PowerPlant_Encuentro_Petrel_Texto_3:
	.string "Perfect, we don't have time to\n"
	.string "waste.$"

PowerPlant_Encuentro_Petrel_Move_1:
walk_in_place_right
step_end

PowerPlant_Encuentro_Petrel_Move_2:
emote_exclamation_mark
walk_left
walk_left
step_end

PowerPlant_Encuentro_Petrel_Move_3:
walk_in_place_right
face_left
step_end

PowerPlant_Encuentro_Petrel_Move_4:
walk_right
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

PowerPlant_Combate_Zapdos_Surge::
lock
compare VAR_UNUSED_0x40F7, 70
goto_if_gt SeafoamIslands_5F_Combate_Articuno_Derrotado
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_1 MSGBOX_DEFAULT
waitmessage
waitmoncry
delay 10
playse MUS_RG_ENCOUNTER_GYM_LEADER
waitbuttonpress
trainerbattle_no_intro TRAINER_ZAPDOS, PowerPlant_Combate_Zapdos_Surge_Texto_2
playse MUS_RG_OBTAIN_KEY_ITEM
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_3 MSGBOX_DEFAULT
waitse
clearflag FLAG_HIDE_FANCLUB_OLD_LADY
addobject 11
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PowerPlant_Combate_Zapdos_Surge_Move_1
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_4 MSGBOX_AUTOCLOSE
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_2
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_1.1
waitmovement 0x0
waitse
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_5.2 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_5.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_3
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_6 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_6.2 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_1.1
waitmovement 0x0
waitse
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_6.3 MSGBOX_AUTOCLOSE
delay 10
setflag FLAG_HIDE_FANCLUB_OLD_LADY
trainerbattle_no_intro TRAINER_SURGE_1, PowerPlant_Combate_Zapdos_Surge_Texto_7
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_1
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_9 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_6
applymovement 17, PowerPlant_Combate_Zapdos_Surge_Move_5
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_10 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_10.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_11 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_11.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_11.2 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_1
waitmovement 0x0
delay 10
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_7
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_12 MSGBOX_AUTOCLOSE
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_8
waitmovement 0x0
removeobject 11
playse SE_EXIT
delay 15
applymovement 17, PowerPlant_Combate_Zapdos_Surge_Move_9
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_13 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_13.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 17, PowerPlant_Combate_Zapdos_Surge_Move_10
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_14 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_14.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 17, PowerPlant_Combate_Zapdos_Surge_Move_11
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_15 MSGBOX_AUTOCLOSE
applymovement 17, PowerPlant_Combate_Zapdos_Surge_Move_4
waitmovement 0x0
delay 20
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_16 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_MAUVILLE_CITY_WALLY
fadescreen 1 
delay 20
removeobject 17
removeobject 16
removeobject 21
removeobject 14
removeobject 13
removeobject 12
removeobject 10
removeobject 15
removeobject 7
removeobject 6
removeobject 2
fadescreen 0
clearflag FLAG_NUEVA_839
setvar VAR_UNUSED_0x40F7, 71
release
end

PowerPlant_Combate_Zapdos_Surge_Move_1.1:
walk_in_place_down
step_end

PowerPlant_Combate_Zapdos_Surge_Texto_1:
.string "Zap!$"

PowerPlant_Combate_Zapdos_Surge_Texto_2:
.string "Zap…$"

PowerPlant_Combate_Zapdos_Surge_Texto_3:
	.string "-You obtained a feather from the\n"
	.string "legendary ZAPDOS!-$"

PowerPlant_Combate_Zapdos_Surge_Texto_4:
.string "????: YOU!?!$"

PowerPlant_Combate_Zapdos_Surge_Texto_5:
	.string "LT. SURGE: How dare you harm something\n"
	.string "as pure and sacred as one of our 3\l"
	.string "LEGENDARY BIRDS, heritage of the KANTO\l"
	.string "region!?$"

PowerPlant_Combate_Zapdos_Surge_Texto_5.1:
	.string "I myself have taken care of and\n"
	.string "given a home within this unused PLANT\l"
	.string "to that ZAPDOS! So now, a scrupulous\l"
	.string "brat comes to undo my work!$"

PowerPlant_Combate_Zapdos_Surge_Texto_5.2:
		.string "You have no mercy!$"

PowerPlant_Combate_Zapdos_Surge_Texto_5.3:
	.string "You and your friends will face the\n"
	.string "maximum penalty for this attack on\l"
	.string "the cultural heritage of KANTO!$"

PowerPlant_Combate_Zapdos_Surge_Texto_6:
	.string "I should have stopped you that day,\n"
	.string "when I saw you in VERMILION for\l"
	.string "the first time.$"

PowerPlant_Combate_Zapdos_Surge_Texto_6.1:
	.string "You already seemed a delinquent,\n"
	.string "but don't worry{PAUSE 15}…{PAUSE 15}\p"
	.string "Now, I'll make sure that you\n"
	.string "receive exemplary punishment!$"

PowerPlant_Combate_Zapdos_Surge_Texto_6.2:
	.string "You know why LANCE sent me and\n"
	.string "not another GYM LEADER?$"

PowerPlant_Combate_Zapdos_Surge_Texto_6.3:
	.string "Because I know what it means\n"
	.string "to win a war!$"

PowerPlant_Combate_Zapdos_Surge_Texto_7:
	.string "You're not just an ordinary ROCKET!$"

PowerPlant_Combate_Zapdos_Surge_Texto_8:
.string "Insolent brat{PAUSE 15}…{PAUSE 15}\n"
	.string "Wait until LANCE finds out about\l"
	.string "this. Neither you nor your organization\l"
	.string "have the slightest idea of the weapons\l"
	.string "he possesses.$"

PowerPlant_Combate_Zapdos_Surge_Texto_8.1:
	.string "If you continue with these\n"
	.string "skirmishes, he will bring\l"
	.string "you all to your knees.$"

PowerPlant_Combate_Zapdos_Surge_Texto_9:
.string "????: I've heard enough, SURGE.$"

PowerPlant_Combate_Zapdos_Surge_Texto_9.1:
	.string "ARCHER: Get out, before I\n"
	.string "change my mind.$"

PowerPlant_Combate_Zapdos_Surge_Texto_10:
	.string "You should be ashamed of yourself,\n"
	.string "for not being able to handle one\l"
	.string "single TRAINER, even after having a\l"
	.string "LEGENDARY encounter.$"

PowerPlant_Combate_Zapdos_Surge_Texto_10.1:
	.string "What a shame{PAUSE 15}…{PAUSE 15} The GYM LEADERS\n"
	.string "seem to be on the decline, cozying up\l"
	.string "under LANCE's government doesn't seem\l"
	.string "to have sat well with your POKEMON.$"

PowerPlant_Combate_Zapdos_Surge_Texto_11:
.string "LT.SURGE: You must be ARCHER{PAUSE 15}…{PAUSE 15}\p"
	.string "Yes{PAUSE 15}…{PAUSE 15} LANCE warned me\n"
	.string "about you.$"

PowerPlant_Combate_Zapdos_Surge_Texto_11.1:
	.string "You should be ashamed of not\n"
	.string "supporting someone from your\l"
	.string "own region.$"

PowerPlant_Combate_Zapdos_Surge_Texto_11.2:
	.string "ARCHER: LANCE's actions don't represent\n"
	.string "JOHTO, let that be clear to you.$"

PowerPlant_Combate_Zapdos_Surge_Texto_12:
.string "LT.SURGE: Who cares!\p"
	.string "Enjoy your last breaths of freedom,\n"
	.string "before we catch all of you.\p"
	.string "You won't be able to escape forever!$"

PowerPlant_Combate_Zapdos_Surge_Texto_13:
	.string "ARCHER: So, ZAPDOS and a GYM LEADER in\n"
	.string "a row, huh {PLAYER}? It seems that,\l"
	.string "after all, you were attentive and\l"
	.string "absorbed my welcome speech.$"

PowerPlant_Combate_Zapdos_Surge_Texto_13.1:
	.string "You've exceeded any expectation I had\n"
	.string "about your level. You've shown great\l"
	.string "loyalty to TEAM ROCKET here today.$"

PowerPlant_Combate_Zapdos_Surge_Texto_14:
	.string "Now, ANDRA has returned to the\n"
	.string "ROCKET base in CELADON CITY, and\l"
	.string "PETREL to the one in ROUTE 5.\p"
	.string "After what happened here, GIOVANNI\n"
	.string "must want a meeting with you.$"

PowerPlant_Combate_Zapdos_Surge_Texto_14.1:
	.string "Go at his office as soon as possible.\n"
	.string "With the feathers, after defeating two\l"
	.string "LEGENDARIES and fulfilling not only your\l"
	.string "mission but also this one, I can't\l"
	.string "imagine how our BOSS will receive you…$"

PowerPlant_Combate_Zapdos_Surge_Texto_15:
	.string "Let's go now, {PLAYER}.\p"
	.string "This place won't take long to\n"
	.string "fill up with cops again.$"

PowerPlant_Combate_Zapdos_Surge_Texto_16:
.string "We must leave, today{PAUSE 15}…{PAUSE 15} we did\n"
	.string "a big step in order to recover KANTO.$"

PowerPlant_Combate_Zapdos_Surge_Texto_17:
	.string "-It seems he doesn't have any strength\n"
	.string "left to fight.-$"

PowerPlant_Combate_Zapdos_Surge_Move_1:
emote_exclamation_mark
walk_in_place_up
step_end

PowerPlant_Combate_Zapdos_Surge_Move_2:
walk_down
walk_down
walk_down
walk_down
step_end

PowerPlant_Combate_Zapdos_Surge_Move_3:
walk_down
step_end

PowerPlant_Combate_Zapdos_Surge_Move_4:
face_up
step_end

PowerPlant_Combate_Zapdos_Surge_Move_5:
walk_fast_down
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_in_place_left
step_end

PowerPlant_Combate_Zapdos_Surge_Move_6:
delay_16
delay_16
delay_16
delay_16
delay_16
delay_16
face_right
step_end

PowerPlant_Combate_Zapdos_Surge_Move_7:
walk_in_place_down
delay_16
walk_in_place_right
step_end

PowerPlant_Combate_Zapdos_Surge_Move_8:
walk_left
walk_down
walk_left
walk_left
step_end

PowerPlant_Combate_Zapdos_Surge_Move_9:
face_down
step_end

PowerPlant_Combate_Zapdos_Surge_Move_10:
face_left
step_end

PowerPlant_Combate_Zapdos_Surge_Move_11:
face_down
step_end
