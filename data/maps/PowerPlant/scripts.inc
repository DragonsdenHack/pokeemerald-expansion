PowerPlant_MapScripts::
	.byte 0

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
.string "Ya estás al límite chiquilla,\n"
	.string "cuando el LT.SURGE llegue no le\l"
	.string "tomará más de un POKÉMON\l"
	.string "rematarte...$"



PowerPlant14::
lock
msgbox PowerPlant14_Texto_1 MSGBOX_SIGN
release
end

PowerPlant14_Texto_1:
.string "¿{PLAYER}?\n"
	.string "Al fin...\l"
	.string "Ya he derrotado a 7 POLICÍAS que\l"
	.string "han huido para avisar al LT.SURGE...\l"
	.string "Date prisa...\l"
	.string "Mi equipo no aguantará mucho más...$"



PowerPlant15::
end



PowerPlant16::
lock
msgbox PowerPlant16_Texto_1 MSGBOX_SIGN
release
end

PowerPlant16_Texto_1:
.string "PETREL: Ocúpate de ZAPDOS {PLAYER},\n"
	.string "¡rápido!$"



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
	.string "LEADER, you will have to do it better if\l"
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
applymovement 19, PowerPlant_Encuentro_Petrel_Move_3
waitmovement 0x0
msgbox PowerPlant_Encuentro_Petrel_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox PowerPlant_Encuentro_Petrel_Texto_3 MSGBOX_AUTOCLOSE
applymovement 19, PowerPlant_Encuentro_Petrel_Move_4
waitmovement 0x0
setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
removeobject 19
setvar VAR_UNUSED_0x40F7, 70
release
end

PowerPlant_Encuentro_Petrel_Texto_1:
	.string "PETREL: {PLAYER}! Where were you?\n"
	.string "ARCHER and I had to go in without you...\l"
	.string "we saw as LORELEI of the ELITE FOUR\l"
	.string "arrived at the CENTRAL to stop ANDRA\l"
	.string "and we had to intervene... ARCHER is\l"
	.string "currently battling her, he asked me to\l"
	.string "find you and tell you the plan…$"

PowerPlant_Encuentro_Petrel_Texto_2:
	.string "PETREL: Right now, ARCHER is dealing\n"
	.string "with LORELEI, and I'm going to take\l"
	.string "those cops off ANDRA's back. Meanwhile,\l"
	.string "you'll go after ZAPDOS to fulfill the\l"
	.string "mission. Once you get what we need and\l"
	.string "we're done with our rivals, we'll get out\l"
	.string "of here before the situation worsens,\l"
	.string "understood?$"

PowerPlant_Encuentro_Petrel_Texto_3:
	.string "PETREL: Perfect, we don't have time to\n"
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
waitmoncry
playse MUS_RG_ENCOUNTER_GYM_LEADER
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
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_3
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_6 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_FANCLUB_OLD_LADY
trainerbattle_no_intro TRAINER_SURGE_1, PowerPlant_Combate_Zapdos_Surge_Texto_7
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_8 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_1
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_9 MSGBOX_AUTOCLOSE
applymovement 17, PowerPlant_Combate_Zapdos_Surge_Move_5
waitmovement 0x0
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_6
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_10 MSGBOX_AUTOCLOSE
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_11 MSGBOX_AUTOCLOSE
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
applymovement 17, PowerPlant_Combate_Zapdos_Surge_Move_10
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_14 MSGBOX_AUTOCLOSE
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

PowerPlant_Combate_Zapdos_Surge_Texto_1:
.string "¡Zap!$"

PowerPlant_Combate_Zapdos_Surge_Texto_2:
.string "Zap...$"

PowerPlant_Combate_Zapdos_Surge_Texto_3:
	.string "You obtained a feather from the\n"
	.string "legendary ZAPDOS!$"

PowerPlant_Combate_Zapdos_Surge_Texto_4:
.string "????: YOU!?!$"

PowerPlant_Combate_Zapdos_Surge_Texto_5:
	.string "LT. SURGE: How dare you harm something\n"
	.string "as pure and sacred as one of our 3\l"
	.string "LEGENDARY BIRDS, heritage of the KANTO\l"
	.string "region! I myself have taken care of and\l"
	.string "given a home within this unused CENTRAL\l"
	.string "to that ZAPDOS! So now, a scrupulous\l"
	.string "brat comes to undo my work! You and\l"
	.string "your friends will face the maximum\l"
	.string "penalty for this attack on the cultural\l"
	.string "heritage of our region!$"

PowerPlant_Combate_Zapdos_Surge_Texto_6:
	.string "LT. SURGE: I should have stopped you\n"
	.string "directly that day you passed through\l"
	.string "VERMILION CITY, you already showed\l"
	.string "signs of being a delinquent then, but\l"
	.string "don't worry, your POKEMON won't be able\l"
	.string "to stand against my loyal electrics\l"
	.string "after your beating with ZAPDOS. You\l"
	.string "know why LANCE sent me and not another\l"
	.string "LEADER? Because I know what it means\l"
	.string "to win a war!$"

PowerPlant_Combate_Zapdos_Surge_Texto_7:
	.string "You're not just an ordinary ROCKET!$"

PowerPlant_Combate_Zapdos_Surge_Texto_8:
	.string "LT. SURGE: Insolent brat, wait until\n"
	.string "LANCE finds out about this. Neither you\l"
	.string "nor your organization have the\l"
	.string "slightest idea of the weapons he\l"
	.string "possesses. If you continue with these\l"
	.string "skirmishes, he will bring you all to your\l"
	.string "knees.$"

PowerPlant_Combate_Zapdos_Surge_Texto_9:
	.string "????: I've heard enough, SURGE. Get out\n"
	.string "of here before I change my mind.$"

PowerPlant_Combate_Zapdos_Surge_Texto_10:
	.string "ARCHER: You should be ashamed of\n"
	.string "yourself for not being able to handle\l"
	.string "one of our own, even after having a\l"
	.string "legendary encounter. The GYM LEADERS\l"
	.string "seem to be on the decline, cozying up\l"
	.string "under LANCE's government doesn't seem\l"
	.string "to have sat well with your POKEMON.$"

PowerPlant_Combate_Zapdos_Surge_Texto_11:
	.string "LT. SURGE: You must be ARCHER. Yes,\n"
	.string "LANCE warned me that you might show up\l"
	.string "here. You should be ashamed of not\l"
	.string "supporting someone from your own\l"
	.string "region.$"

PowerPlant_Combate_Zapdos_Surge_Texto_12:
	.string "LT. SURGE: Enjoy your last breaths of\n"
	.string "freedom before they catch all of you.\l"
	.string "You can't escape forever.$"

PowerPlant_Combate_Zapdos_Surge_Texto_13:
	.string "ATLAS: So, ZAPDOS and a GYM LEADER in a\n"
	.string "row, huh {PLAYER}? It seems that\l"
	.string "after all, you were attentive and\l"
	.string "absorbed my welcome speech. I can say\l"
	.string "you've exceeded any expectation I had\l"
	.string "about your level. You've shown great\l"
	.string "loyalty to TEAM ROCKET here today.$"

PowerPlant_Combate_Zapdos_Surge_Texto_14:
	.string "ARCHER: ANDRA has returned to the\n"
	.string "ROCKET base in CELADON CITY, and\l"
	.string "PETREL to the one in ROUTE 5. After\l"
	.string "everything that has happened here,\l"
	.string "GIOVANNI will want to assess it all\l"
	.string "immediately. You should present\l"
	.string "yourself in his office as soon as\l"
	.string "possible. After defeating two\l"
	.string "legendaries and fulfilling not only your\l"
	.string "mission but also this one, I can't\l"
	.string "imagine how our leader will receive you...$"

PowerPlant_Combate_Zapdos_Surge_Texto_15:
	.string "ARCHER: Let's go now, {PLAYER}. This\n"
	.string "place won't take long to fill up with\l"
	.string "cops again.$"

PowerPlant_Combate_Zapdos_Surge_Texto_16:
	.string "ARCHER: It's been a pleasure fighting\n"
	.string "alongside you today.$"

PowerPlant_Combate_Zapdos_Surge_Texto_17:
	.string "(It seems he doesn't have any strength\n"
	.string "left to fight).$"

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
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_in_place_left
step_end

PowerPlant_Combate_Zapdos_Surge_Move_6:
face_right
step_end

PowerPlant_Combate_Zapdos_Surge_Move_7:
walk_in_place_down
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
