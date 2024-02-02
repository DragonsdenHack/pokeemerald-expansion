PalletTown_ProfessorLab_MapScripts::
	.byte 0

PalletTownProfessorLab1::
lock     
faceplayer     
msgbox PalletTown_ProfessorLab_Text_1, MSGBOX_DEFAULT
release     
end

PalletTown_ProfessorLab_Text_1:
	.string "The best trainers in the region come\n"
	.string "from this place. Curiosity can be\l"
	.string "dangerous. I hope you got that.$"



PalletTownProfessorLab2::
lock     
faceplayer     
msgbox PalletTown_ProfessorLab_Text_2, MSGBOX_DEFAULT
release     
end

PalletTown_ProfessorLab_Text_2:
	.string "Do you not see that OAK is not here? If\n"
	.string "you keep insisting, we will call the\l"
	.string "POLICE!$"



PalletTownProfessorLab3::
lock     
faceplayer     
msgbox PalletTown_ProfessorLab_Text_3, MSGBOX_DEFAULT
release     
end

PalletTown_ProfessorLab_Text_3:
	.string "This place is way too big for you, I\n"
	.string "suggest you leave before the professor\l"
	.string "decides to finish you off.$"



PalletTownProfessorLabDocumento_100::
msgbox PalletTownProfessorLabDocumento_Text_100, MSGBOX_SIGN   
end

PalletTownProfessorLabDocumento_Text_100:
	.string "Press START to open the MENU!$"



PalletTownProfessorLabDocumento_101::
msgbox PalletTownProfessorLabDocumento_Text_101, MSGBOX_SIGN   
end

PalletTownProfessorLabDocumento_Text_101:
	.string "All POKÉMON have strengths and\n"
	.string "weaknesses against others.$"



PalletTownProfessorLabDocumento_102::
msgbox PalletTownProfessorLabDocumento_Text_102, MSGBOX_SIGN   
end

PalletTownProfessorLabDocumento_Text_102:
	.string "There is an e-mail message here. …\n"
	.string "Finally! The ultimate TRAINERS of the\l"
	.string "POKÉMON LEAGUE are ready to take on all\l"
	.string "comers! Bring your best POKÉMON and\l"
	.string "see how you rate as a TRAINER! POKÉMON\l"
	.string "LEAGUE HQ INDIGO PLATEAU PROF. OAK,\l"
	.string "please visit us! …$"

PalletTown_ProfessorLab_Lab_Izq::
lockall
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_1.1
waitmovement 0x0
goto PalletTown_ProfessorLab_Lab

PalletTown_ProfessorLab_Lab_Centro::
lockall
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_1
waitmovement 0x0
goto PalletTown_ProfessorLab_Lab

PalletTown_ProfessorLab_Lab_Der::
lockall
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_1.2
waitmovement 0x0
goto PalletTown_ProfessorLab_Lab

PalletTown_ProfessorLab_Lab::
delay 20
playse SE_DOOR
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
addobject 5
delay 20
msgbox PalletTown_ProfessorLab_Lab_Texto_1 MSGBOX_AUTOCLOSE
delay 20
applymovement 5, PalletTown_ProfessorLab_Lab_Move_2
waitmovement 0x0
playse SE_PIN
applymovement 5, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
msgbox PalletTown_ProfessorLab_Lab_Texto_2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
applymovement 5, PalletTown_ProfessorLab_Lab_Move_2
waitmovement 0x0
msgbox PalletTown_ProfessorLab_Lab_Texto_3 MSGBOX_AUTOCLOSE
msgbox PalletTown_ProfessorLab_Lab_Texto_4 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
applymovement 5, PalletTown_ProfessorLab_Lab_Move_4
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_5
waitmovement 0x0
msgbox PalletTown_ProfessorLab_Lab_Texto_5 MSGBOX_AUTOCLOSE
applymovement 5, PalletTown_ProfessorLab_Lab_Move_6
waitmovement 0x0
delay 20
msgbox PalletTown_ProfessorLab_Lab_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox PalletTown_ProfessorLab_Lab_Texto_6 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox PalletTown_ProfessorLab_Lab_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_DALIA, PalletTown_ProfessorLab_Lab_Texto_8
msgbox PalletTown_ProfessorLab_Lab_Texto_9 MSGBOX_AUTOCLOSE
msgbox PalletTown_ProfessorLab_Lab_Texto_10 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_7
waitmovement 0x0
applymovement 5, PalletTown_ProfessorLab_Lab_Move_8
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
removeobject 5
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 62
release
end

PalletTown_ProfessorLab_Lab_Texto_1:
.string "????: Hmm, isn't here OAK?\n"
	.string "Maybe he is at the ZONE 0.$"

PalletTown_ProfessorLab_Lab_Texto_2:
	.string "????: Wanna something, kid? I am\n"
	.string "OAK's granddaughter, and BLUE's\l"
	.string "older sister…$"

PalletTown_ProfessorLab_Lab_Texto_3:
	.string "So you know my brother! He is a good\n"
	.string "boy, although sometimes is a bit\l"
	.string "arrogant and competitive, goes directly\l"
	.string "and says what he has to say to your\l"
	.string "face; I just hope he isn't influenced\l"
	.string "by…$"

PalletTown_ProfessorLab_Lab_Texto_4:
.string "... ... ... ... ...$"

PalletTown_ProfessorLab_Lab_Texto_5:
.string "DAISY: The last OAK's POKÉMON!\n"
	.string "It was you, ROCKET!$"

PalletTown_ProfessorLab_Lab_Texto_6:
	.string "What? You don't want to get in any\n"
	.string "trouble, that you just wanted to come\l"
	.string "to visit OAK?$"

PalletTown_ProfessorLab_Lab_Texto_7:
	.string "DAISY: Nothing excuses you from\n"
	.string "stealing someone else's Pokémon,\l"
	.string "ROCKET! I'm going to make you pay for\l"
	.string "it, right now!$"

PalletTown_ProfessorLab_Lab_Texto_8:
	.string "Oh! And in our own house!$"

PalletTown_ProfessorLab_Lab_Texto_9:
	.string "DAISY: I can't believe this, so this is\n"
	.string "the kind of friends that my lil brother\l"
	.string "is making, he's always been a rebel,\l"
	.string "wanting to do everything his own way,\l"
	.string "we suggested he to make friends as\l"
	.string "BILL, the president of SILPH, LANCE,\l"
	.string "and other ELITE members, you will see\l"
	.string "how OAK will be furious when he hears\l"
	.string "about this.$"

PalletTown_ProfessorLab_Lab_Texto_10:
	.string "DAISY: Enjoy that poor BULBASAUR at\n"
	.string "level 5, ROCKET. If you didn't know this,\l"
	.string "OAK has tens of them at his personal\l"
	.string "collection.$"

PalletTown_ProfessorLab_Lab_Move_1:
walk_in_place_down
step_end

PalletTown_ProfessorLab_Lab_Move_1.1:
walk_right
walk_in_place_down
step_end

PalletTown_ProfessorLab_Lab_Move_1.2:
walk_left
walk_in_place_down
step_end

PalletTown_ProfessorLab_Lab_Move_2:
walk_slow_up
walk_slow_up
walk_in_place_up
step_end

PalletTown_ProfessorLab_Lab_Move_3:
emote_exclamation_mark
walk_in_place_down
step_end

PalletTown_ProfessorLab_Lab_Move_4:
walk_fast_right
walk_fast_up
step_end

PalletTown_ProfessorLab_Lab_Move_5:
face_right
step_end

PalletTown_ProfessorLab_Lab_Move_6:
face_left
step_end

PalletTown_ProfessorLab_Lab_Move_7:
face_down
step_end

PalletTown_ProfessorLab_Lab_Move_8:
walk_down
walk_left
walk_down
walk_down
walk_down
walk_down
step_end

PalletTown_ProfessorLab_Robo_Bulbasaur::
lock     
showmonpic SPECIES_BULBASAUR, 10, 3   
playmoncry SPECIES_BULBASAUR, CRY_MODE_ENCOUNTER
msgbox PalletTown_ProfessorLab_Robo_Bulbasaur_Texto_1, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq PalletTown_ProfessorLab_Robo_Bulbasaur_No
hidemonpic
msgbox PalletTown_ProfessorLab_Robo_Bulbasaur_Texto_2, MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
removeobject 4
playfanfare MUS_OBTAIN_TMHM
msgbox PalletTown_ProfessorLab_Robo_Bulbasaur_Texto_3, MSGBOX_DEFAULT
givemon SPECIES_BULBASAUR, 15, ITEM_NONE
waitfanfare
delay 30
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
msgbox PalletTown_ProfessorLab_Robo_Bulbasaur_Texto_4, MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
setvar VAR_UNUSED_0x40F7, 61
release
end




PalletTown_ProfessorLab_Robo_Bulbasaur_No::
hidemonpic
release
end

PalletTown_ProfessorLab_Robo_Bulbasaur_Texto_1:
	.string "Apparently this POKÉ BALL contains the\n"
	.string "uncommon and powerful BULBASAUR, it\l"
	.string "doesn't seem like it will be used, do you\l"
	.string "wanna steal it?$"

PalletTown_ProfessorLab_Robo_Bulbasaur_Texto_2:
	.string "This POKÉMON is really quite energetic!$"

PalletTown_ProfessorLab_Robo_Bulbasaur_Texto_3:
.string "{PLAYER} stole the BULBASAUR!$"

PalletTown_ProfessorLab_Robo_Bulbasaur_Texto_4:
	.string "PROTON: {PLAYER}! How is your mission\n"
	.string "going at PALLET TOWN, did you discover\l"
	.string "something? GIOVANNI requires your\l"
	.string "presence right now, and will be waiting\l"
	.string "for you at his private office inside the\l"
	.string "DEEP BASE ROCKET.$"


PalletTown_ProfessorLab_Genesect::
lock     
showmonpic SPECIES_GENESECT, 10, 3   
playmoncry SPECIES_GENESECT, CRY_MODE_ENCOUNTER
msgbox PalletTown_ProfessorLab_Genesect_Texto_1, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq PalletTown_ProfessorLab_Genesect_No
hidemonpic
setflag FLAG_NUEVA_658
removeobject 1
playfanfare MUS_OBTAIN_TMHM
msgbox PalletTown_ProfessorLab_Genesect_Texto_3, MSGBOX_DEFAULT
givemon SPECIES_GENESECT, 70, ITEM_CHOICE_SCARF
waitfanfare
release
end

PalletTown_ProfessorLab_Genesect_Texto_3:
.string "{PLAYER} obtained a LV.70 GENESECT!$"

PalletTown_ProfessorLab_Genesect_No::
hidemonpic
release
end

PalletTown_ProfessorLab_Genesect_Texto_1:
	.string "This POKÉBALL contains a GENESECT, an\n"
	.string "unusual experiment from a distant\l"
	.string "region. No one needs it anymore, do you\l"
	.string "want to take the POKÉMON?$"
