PalletTown_ProfessorLab_MapScripts::
	.byte 0

PalletTownProfessorLab1::
lock     
faceplayer 
compare VAR_UNUSED_0x40F7, 152
goto_if_gt PalletTownProfessorLab1_2
msgbox PalletTown_ProfessorLab_Text_1, MSGBOX_DEFAULT
release     
end

PalletTown_ProfessorLab_Text_1:
	.string "The best trainers in the region come\n"
	.string "from this place. Curiosity can be\l"
	.string "dangerous. I hope you got that.$"

PalletTownProfessorLab1_2::
msgbox PalletTown_ProfessorLab_Despues_Text_1, MSGBOX_DEFAULT
release     
end

PalletTown_ProfessorLab_Despues_Text_1:
	.string "¿Eres un AYUDANTE de OAK en JOHTO? Es\n"
	.string "genial que ahora estemos también en\l"
	.string "esa región.$"

PalletTownProfessorLab2::
lock     
faceplayer  
compare VAR_UNUSED_0x40F7, 152
goto_if_gt PalletTownProfessorLab2_2
msgbox PalletTown_ProfessorLab_Text_2, MSGBOX_DEFAULT
release     
end

PalletTown_ProfessorLab_Text_2:
	.string "Do you not see that OAK is not here? If\n"
	.string "you keep insisting, we will call the\l"
	.string "POLICE!$"

PalletTownProfessorLab2_2::
msgbox PalletTown_ProfessorLab_Despues_Text_2, MSGBOX_DEFAULT
release     
end

PalletTown_ProfessorLab_Despues_Text_2:
	.string "OAK va a participar en el programa de\n"
	.string "radio de CIUDAD TRIGAL.\p"
	.string "Es toda una eminencia.$"


PalletTownProfessorLab3::
lock     
faceplayer 
compare VAR_UNUSED_0x40F7, 152
goto_if_gt PalletTownProfessorLab3_2
msgbox PalletTown_ProfessorLab_Text_3, MSGBOX_DEFAULT
release     
end

PalletTown_ProfessorLab_Text_3:
	.string "This place is way too big for you, I\n"
	.string "suggest you leave before the professor\l"
	.string "decides to finish you off.$"

PalletTownProfessorLab3_2::
msgbox PalletTown_ProfessorLab_Despues_Text_3, MSGBOX_DEFAULT
msgbox PalletTown_ProfessorLab_Despues_Text_3.1, MSGBOX_DEFAULT
release     
end

PalletTown_ProfessorLab_Despues_Text_3:
	.string "Recientemente expandimos la POKÉDEX a\n"
	.string "251 POKÉMON.$"

PalletTown_ProfessorLab_Despues_Text_3.1:
	.string "Aunque sabemos de la existencia de\n"
	.string "muchos más, cubrirá la inmensa mayoría\l"
	.string "de POKÉMON que hay en KANTO y JOHTO.\l"
	.string "Los nuevos niños no necesitan saber\l"
	.string "más.$"

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
waitse
delay 10
msgbox PalletTown_ProfessorLab_Lab_Texto_3 MSGBOX_AUTOCLOSE
msgbox PalletTown_ProfessorLab_Lab_Texto_4 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
applymovement 5, PalletTown_ProfessorLab_Lab_Move_4
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_5
waitmovement 0x0
delay 10
msgbox PalletTown_ProfessorLab_Lab_Texto_5 MSGBOX_AUTOCLOSE
applymovement 5, PalletTown_ProfessorLab_Lab_Move_6
waitmovement 0x0
delay 20
msgbox PalletTown_ProfessorLab_Lab_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox PalletTown_ProfessorLab_Lab_Texto_6 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
msgbox PalletTown_ProfessorLab_Lab_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_DALIA, PalletTown_ProfessorLab_Lab_Texto_8
msgbox PalletTown_ProfessorLab_Lab_Texto_9 MSGBOX_AUTOCLOSE
delay 10
msgbox PalletTown_ProfessorLab_Lab_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PalletTown_ProfessorLab_Lab_Texto_9.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, PalletTown_ProfessorLab_Lab_Move_8.1
waitmovement 0x0
delay 10
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

PalletTown_ProfessorLab_Lab_Move_8.1:
face_up
delay_16
delay_8
face_player
step_end

PalletTown_ProfessorLab_Lab_Texto_1:
.string "????: Hm, OAK's not here?\p"
	.string "He must be at ZONE 0.$"

PalletTown_ProfessorLab_Lab_Texto_2:
	.string "????: Do you need something, sir?\p"
	.string "I'm OAK's granddaughter and\n"
	.string "BLUE's big sister…$"

PalletTown_ProfessorLab_Lab_Texto_3:
	.string "So you know my brother! He's a good boy,\n"
	.string "though he's got a bit of an ego and a\l"
	.string "competitive streak. If he's got\l"
	.string "something to say, he'll say it to your\l"
	.string "face. I just hope he's not influenced\l"
	.string "by…$"

PalletTown_ProfessorLab_Lab_Texto_4:
.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10} …{PAUSE 10} …{PAUSE 10} …{PAUSE 10}$"

PalletTown_ProfessorLab_Lab_Texto_5:
.string "DAISY: GRANDPA's last POKÉMON!\p"
	.string "I was right to suspect that uniform!$"

PalletTown_ProfessorLab_Lab_Texto_6:
	.string "What?\n"
	.string "You didn't want any trouble? You just\l"
	.string "wanted to pay GRANDPA a visit?$"

PalletTown_ProfessorLab_Lab_Texto_7:
.string "DALIA: Nada te exhime de robar un\n"
	.string "POKÉMON ajeno, ROCKET.\p"
	.string "¡Vas a pagar por ello!$"

PalletTown_ProfessorLab_Lab_Texto_8:
.string "¡OH! ¡Y en nuestra propia casa!$"

PalletTown_ProfessorLab_Lab_Texto_9:
.string "Esto es el colmo, de modo que esta es\n"
	.string "la clase de amistades que mi\l"
	.string "hermanito está haciendo.$"

PalletTown_ProfessorLab_Lab_Texto_9.1:
	.string "Siempre fue un rebelde que quería\n"
	.string "hacerlo todo por sus propios medios,\l"
	.string "ya le aconsejamos que se hiciera\l"
	.string "amigo de BILL, el PRESIDENTE de SILPH,\l"
	.string "LANCE y demás miembros de la ÉLITE.$"
	
PalletTown_ProfessorLab_Lab_Texto_9.2:
	.string "Verás cuando OAK se entere de esto.$"

PalletTown_ProfessorLab_Lab_Texto_10:
.string "Disfruta de ese triste BULBASAUR.\n"
	.string "Por si no lo sabías, OAK tiene decenas\l"
	.string "de ellos en su reserva personal.$"

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
waitse
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
delay 10
msgbox PalletTown_ProfessorLab_Robo_Bulbasaur_Texto_4, MSGBOX_AUTOCLOSE
playse SE_PC_OFF
waitse
delay 20
setvar VAR_UNUSED_0x40F7, 61
release
end




PalletTown_ProfessorLab_Robo_Bulbasaur_No::
hidemonpic
release
end

PalletTown_ProfessorLab_Robo_Bulbasaur_Texto_1:
	.string "This POKÉ BALL apparently contains the\n"
	.string "uncommon and powerful BULBASAUR. It\l"
	.string "seems like it'll just collect dust. Do you\l"
	.string "want to steal it?$"

PalletTown_ProfessorLab_Robo_Bulbasaur_Texto_2:
	.string "This POKÉMON is really quite energetic!$"

PalletTown_ProfessorLab_Robo_Bulbasaur_Texto_3:
.string "{PLAYER} stole the BULBASAUR!$"

PalletTown_ProfessorLab_Robo_Bulbasaur_Texto_4:
	.string "PROTON: {PLAYER}! How's the mission at\n"
	.string "PALLET TOWN? Did you discover\l"
	.string "something? GIOVANNI requires your\l"
	.string "immediate presence. He'll be waiting in\l"
	.string "his private office in the ROCKET DEEP\l"
	.string "BASE.$"


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
givemon SPECIES_GENESECT, 90, ITEM_CHOICE_SCARF
waitfanfare
release
end

PalletTown_ProfessorLab_Genesect_Texto_3:
.string "{PLAYER} obtained a LV.90 GENESECT!$"

PalletTown_ProfessorLab_Genesect_No::
hidemonpic
release
end

PalletTown_ProfessorLab_Genesect_Texto_1:
.string "Esta POKÉ BALL contiene a GENESECT, un\n"
	.string "raro experimento de una región lejana.\p"
	.string "Nadie la necesita ya, ¿quieres\n"
	.string "quedarte con el POKÉMON?$"

PalletTown_ProfessorLab_Andra_Move_1:
delay_8
face_down
step_end

PalletTown_ProfessorLab_Andra_Move_2:
emote_exclamation_mark
step_end

PalletTown_ProfessorLab_Andra_Move_3:
face_right
step_end

PalletTown_ProfessorLab_Andra_Move_4:
face_right
step_end

PalletTown_ProfessorLab_Andra_Move_5:
walk_right
walk_right
face_up
step_end

PalletTown_ProfessorLab_Andra_Move_6:
face_right
step_end

PalletTown_ProfessorLab_Andra_Move_7:
face_left
step_end

PalletTown_ProfessorLab_Andra_Move_8:
face_down
step_end

PalletTown_ProfessorLab_Andra_Move_9:
delay_16
delay_8
face_down
step_end

PalletTown_ProfessorLab_Andra_Move_10:
walk_slow_down
step_end

PalletTown_ProfessorLab_Andra_Move_11:
face_up
step_end

PalletTown_ProfessorLab_Andra_Move_12:
walk_slow_left
walk_slow_up
step_end

PalletTown_ProfessorLab_Andra_Move_13:
delay_16
delay_8
face_left
step_end

PalletTown_ProfessorLab_Andra_Move_14:
delay_8
face_right
step_end

PalletTown_ProfessorLab_Andra::
lock
faceplayer
msgbox PalletTown_ProfessorLab_Andra_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, PalletTown_ProfessorLab_Andra_Move_1
waitmovement 0x0
delay 10
msgbox PalletTown_ProfessorLab_Andra_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_ProfessorLab_Andra_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, PalletTown_ProfessorLab_Andra_Move_3
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 6, PalletTown_ProfessorLab_Andra_Move_2
waitmovement 0x0
waitse
delay 15
msgbox PalletTown_ProfessorLab_Andra_Texto_4 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Andra_Move_4
waitmovement 0x0
delay 10
applymovement 6, PalletTown_ProfessorLab_Andra_Move_5
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Andra_Move_5
waitmovement 0x0
delay 15
msgbox PalletTown_ProfessorLab_Andra_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_ProfessorLab_Andra_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_ProfessorLab_Andra_Texto_6 MSGBOX_AUTOCLOSE
delay 25
msgbox PalletTown_ProfessorLab_Andra_Texto_7 MSGBOX_AUTOCLOSE
delay 25
msgbox PalletTown_ProfessorLab_Andra_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, PalletTown_ProfessorLab_Andra_Move_6
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Andra_Move_7
waitmovement 0x0
delay 15
msgbox PalletTown_ProfessorLab_Andra_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, PalletTown_ProfessorLab_Andra_Move_8
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Andra_Move_9
waitmovement 0x0
delay 15
msgbox PalletTown_ProfessorLab_Andra_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, PalletTown_ProfessorLab_Andra_Move_10
waitmovement 0x0
delay 75
msgbox PalletTown_ProfessorLab_Andra_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, PalletTown_ProfessorLab_Andra_Move_11
waitmovement 0x0
delay 10
applymovement 6, PalletTown_ProfessorLab_Andra_Move_12
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Andra_Move_13
waitmovement 0x0
delay 25
msgbox PalletTown_ProfessorLab_Andra_Texto_12 MSGBOX_AUTOCLOSE
delay 45
playse SE_PIN
applymovement 6, PalletTown_ProfessorLab_Andra_Move_2
waitmovement 0x0
waitse
delay 15
msgbox PalletTown_ProfessorLab_Andra_Texto_13 MSGBOX_AUTOCLOSE
applymovement 6, PalletTown_ProfessorLab_Andra_Move_14
waitmovement 0x0
delay 15
msgbox PalletTown_ProfessorLab_Andra_Texto_14 MSGBOX_AUTOCLOSE
applymovement 6, PalletTown_ProfessorLab_Andra_Move_15
waitmovement 0x0
delay 15
msgbox PalletTown_ProfessorLab_Andra_Texto_15 MSGBOX_AUTOCLOSE
applymovement 6, PalletTown_ProfessorLab_Andra_Move_16
waitmovement 0x0
delay 10
playse SE_CLICK
waitse
delay 35
msgbox PalletTown_ProfessorLab_Andra_Texto_16 MSGBOX_AUTOCLOSE
delay 25
playse SE_FAILURE
waitse
delay 25
msgbox PalletTown_ProfessorLab_Andra_Texto_17 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, PalletTown_ProfessorLab_Andra_Move_17
waitmovement 0x0
delay 15
msgbox PalletTown_ProfessorLab_Andra_Texto_18 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, PalletTown_ProfessorLab_Andra_Move_15
waitmovement 0x0
delay 15
msgbox PalletTown_ProfessorLab_Andra_Texto_19 MSGBOX_AUTOCLOSE
applymovement 6, PalletTown_ProfessorLab_Andra_Move_16
waitmovement 0x0
delay 10
playse SE_CLICK
waitse
delay 35
msgbox PalletTown_ProfessorLab_Andra_Texto_20 MSGBOX_AUTOCLOSE
delay 25
playse SE_FAILURE
waitse
delay 25
msgbox PalletTown_ProfessorLab_Andra_Texto_21 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_ProfessorLab_Andra_Texto_22 MSGBOX_AUTOCLOSE
applymovement 6, PalletTown_ProfessorLab_Andra_Move_16
waitmovement 0x0
playse SE_CLICK
waitse
delay 35
msgbox PalletTown_ProfessorLab_Andra_Texto_23 MSGBOX_AUTOCLOSE
delay 25
playse SE_FAILURE
waitse
delay 15
applymovement 6, PalletTown_ProfessorLab_Andra_Move_18
waitmovement 0x0
delay 10
msgbox PalletTown_ProfessorLab_Andra_Texto_24 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, PalletTown_ProfessorLab_Andra_Move_19
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 6, PalletTown_ProfessorLab_Andra_Move_2
waitmovement 0x0
waitse
delay 15
msgbox PalletTown_ProfessorLab_Andra_Texto_25 MSGBOX_AUTOCLOSE
delay 20
msgbox PalletTown_ProfessorLab_Andra_Texto_26 MSGBOX_AUTOCLOSE
delay 20
msgbox PalletTown_ProfessorLab_Andra_Texto_27 MSGBOX_AUTOCLOSE
applymovement 6, PalletTown_ProfessorLab_Andra_Move_20
waitmovement 0x0
delay 15
msgbox PalletTown_ProfessorLab_Andra_Texto_28 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, PalletTown_ProfessorLab_Andra_Move_21
waitmovement 0x0
msgbox PalletTown_ProfessorLab_Andra_Texto_29 MSGBOX_AUTOCLOSE
delay 16
msgbox PalletTown_ProfessorLab_Andra_Texto_30 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, PalletTown_ProfessorLab_Andra_Move_22
waitmovement 0x0
delay 15
msgbox PalletTown_ProfessorLab_Andra_Texto_31 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Andra_Move_24
applymovement 6, PalletTown_ProfessorLab_Andra_Move_23
waitmovement 0x0
delay 15
playse SE_EXIT
waitse
setflag FLAG_HOENN_655
removeobject 6
clearflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_1
setvar VAR_UNUSED_0x40F8, 26
release
end

PalletTown_ProfessorLab_Andra_Move_24:
delay_16
delay_16
delay_8
face_down
step_end

PalletTown_ProfessorLab_Andra_Move_23:
walk_down
walk_right
walk_right
walk_down
walk_down
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

PalletTown_ProfessorLab_Andra_Move_22:
delay_16
face_down
delay_8
step_end

PalletTown_ProfessorLab_Andra_Move_21:
face_right
delay_16
walk_slow_right
delay_8
step_end

PalletTown_ProfessorLab_Andra_Move_20:
delay_16
face_right
delay_16
delay_8
face_up
delay_16
step_end

PalletTown_ProfessorLab_Andra_Move_19:
walk_slow_up
step_end

PalletTown_ProfessorLab_Andra_Move_18:
lock_facing_direction
walk_slow_down
unlock_facing_direction
step_end

PalletTown_ProfessorLab_Andra_Move_17:
delay_8
face_right
delay_16
delay_8
face_up
delay_16
delay_8
face_right
step_end

PalletTown_ProfessorLab_Andra_Move_16:
walk_in_place_up
step_end

PalletTown_ProfessorLab_Andra_Move_15:
delay_8
face_up
step_end

PalletTown_ProfessorLab_Andra_Texto_1:
	.string "No te preocupes, ya les he dicho a los\n"
	.string "CIENTÍFICOS que somos también\l"
	.string "ayudantes.$"

PalletTown_ProfessorLab_Andra_Texto_2:
	.string "Mmm…$"

PalletTown_ProfessorLab_Andra_Texto_3:
	.string "Hay que admitir que OAK ha sido alguien\n"
	.string "muy importante para KANTO.$"

PalletTown_ProfessorLab_Andra_Texto_4:
	.string "¿Y has visto eso?$"

PalletTown_ProfessorLab_Andra_Texto_5:
	.string "Un e-mail del CG de la LIGA POKÉMON.$"

PalletTown_ProfessorLab_Andra_Texto_6:
	.string "'Visítenos, por favor…'\n"
	.string "Cuánta hipocresía.$"

PalletTown_ProfessorLab_Andra_Texto_7:
	.string "… …$"

PalletTown_ProfessorLab_Andra_Texto_8:
	.string "Datos sobre su POKÉDEX…$"

PalletTown_ProfessorLab_Andra_Texto_9:
	.string "No parece haber nada sospechoso, todo\n"
	.string "lo que cabría esperar de un laboratorio\l"
	.string "clandestino.$"

PalletTown_ProfessorLab_Andra_Texto_10:
	.string "Hmmm…$"

PalletTown_ProfessorLab_Andra_Texto_11:
	.string "Nada…$"

PalletTown_ProfessorLab_Andra_Texto_12:
	.string "… …$"

PalletTown_ProfessorLab_Andra_Texto_13:
	.string "Esta máquina tiene una opción para\n"
	.string "introducir cuatro dígitos.$"

PalletTown_ProfessorLab_Andra_Texto_14:
	.string "Tal vez, si ponemos el número total de\n"
	.string "POKÉMON en la primera POKÉDEX de\l"
	.string "KANTO…$"

PalletTown_ProfessorLab_Andra_Texto_15:
	.string "'0151'$"

PalletTown_ProfessorLab_Andra_Texto_16:
	.string "… …$"

PalletTown_ProfessorLab_Andra_Texto_17:
	.string "Nada.$"

PalletTown_ProfessorLab_Andra_Texto_18:
	.string "Probemos con los STATS BASE de MEWTWO.$"

PalletTown_ProfessorLab_Andra_Texto_19:
	.string "'0680'$"

PalletTown_ProfessorLab_Andra_Texto_20:
	.string "… …$"

PalletTown_ProfessorLab_Andra_Texto_21:
	.string "Quizás… el año en el que la\n"
	.string "GUERRA de KANTO terminó.$"

PalletTown_ProfessorLab_Andra_Texto_22:
	.string "'1994'$"

PalletTown_ProfessorLab_Andra_Texto_23:
	.string "… …$"

PalletTown_ProfessorLab_Andra_Texto_24:
	.string "Tampoco.$"

PalletTown_ProfessorLab_Andra_Texto_25:
	.string "Oh… Se ha bloqueado la opción.$"

PalletTown_ProfessorLab_Andra_Texto_26:
	.string "… …$"

PalletTown_ProfessorLab_Andra_Texto_27:
	.string "Pone que ahora deberemos esperar al\n"
	.string "menos 15 min. Pinta a que, si volvemos a\l"
	.string "fallar, será mucho más.$"

PalletTown_ProfessorLab_Andra_Texto_28:
	.string "… …$"

PalletTown_ProfessorLab_Andra_Texto_29:
	.string "Es absurdo. Hay tantas opciones… y ni\n"
	.string "siquiera tenemos la certeza de que esto\l"
	.string "sea lo que andamos buscando.$"

PalletTown_ProfessorLab_Andra_Texto_30:
	.string "… …$"

PalletTown_ProfessorLab_Andra_Texto_31:
	.string "Necesito salir fuera un momento.$"

PalletTown_ProfessorLab_ZonaCero_Move_1:
walk_in_place_up
step_end

PalletTown_ProfessorLab_ZonaCero_Move_2:
walk_right
face_up
step_end

PalletTown_ProfessorLab_ZonaCero_Move_3:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
step_end

PalletTown_ProfessorLab_ZonaCero_Move_4:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
step_end

PalletTown_ProfessorLab_ZonaCero_Move_5:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
step_end

PalletTown_ProfessorLab_ZonaCero_Izq::
lock
clearflag FLAG_HOENN_655
addobject 6
applymovement 6, PalletTown_ProfessorLab_ZonaCero_Move_2
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_ZonaCero_Move_1
waitmovement 0x0
msgbox PalletTown_ProfessorLab_ZonaCero_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_ZonaCero_Move_3
waitmovement 0x0
goto PalletTown_ProfessorLab_ZonaCero

PalletTown_ProfessorLab_ZonaCero_Centro::
lock
clearflag FLAG_HOENN_655
addobject 6
applymovement 6, PalletTown_ProfessorLab_ZonaCero_Move_2
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_ZonaCero_Move_1
waitmovement 0x0
msgbox PalletTown_ProfessorLab_ZonaCero_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_ZonaCero_Move_4
waitmovement 0x0
goto PalletTown_ProfessorLab_ZonaCero

PalletTown_ProfessorLab_ZonaCero_Der::
lock
clearflag FLAG_HOENN_655
addobject 6
applymovement 6, PalletTown_ProfessorLab_ZonaCero_Move_2
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_ZonaCero_Move_1
waitmovement 0x0
msgbox PalletTown_ProfessorLab_ZonaCero_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_ZonaCero_Move_5
waitmovement 0x0
goto PalletTown_ProfessorLab_ZonaCero


PalletTown_ProfessorLab_ZonaCero_Move_6:
face_right
delay_16
delay_8
step_end

PalletTown_ProfessorLab_ZonaCero_Move_7:
delay_16
face_up
delay_16
step_end

PalletTown_ProfessorLab_ZonaCero_Move_8:
face_right
delay_8
emote_exclamation_mark
step_end


PalletTown_ProfessorLab_ZonaCero::
lock
delay 25
msgbox PalletTown_ProfessorLab_ZonaCero_Texto_2 MSGBOX_AUTOCLOSE
delay 25
msgbox PalletTown_ProfessorLab_ZonaCero_Texto_3 MSGBOX_AUTOCLOSE
delay 25
applymovement 6, PalletTown_ProfessorLab_ZonaCero_Move_6
waitmovement 0x0
msgbox PalletTown_ProfessorLab_ZonaCero_Texto_4 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, PalletTown_ProfessorLab_ZonaCero_Move_7
waitmovement 0x0
delay 15
msgbox PalletTown_ProfessorLab_ZonaCero_Texto_5 MSGBOX_AUTOCLOSE
applymovement 6, PalletTown_ProfessorLab_Andra_Move_16
waitmovement 0x0
playse SE_CLICK
waitse
delay 35
msgbox PalletTown_ProfessorLab_Andra_Texto_23 MSGBOX_AUTOCLOSE
delay 25
playse SE_SUCCESS
waitse
delay 15
msgbox PalletTown_ProfessorLab_ZonaCero_Texto_6 MSGBOX_AUTOCLOSE
delay 25
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_ZonaCero_Move_8
applymovement 6, PalletTown_ProfessorLab_ZonaCero_Move_8
waitmovement 0x0
playse SE_UNLOCK
setmetatile 11, 0, 0x0DB, TRUE
setmetatile 11, 1, 0x0E3, TRUE
setmetatile 11, 2, 0x281, FALSE
setmetatile 12, 2, 0x281, FALSE
setmetatile 12, 1, 0x144, FALSE
setmetatile 12, 0, 0x13C, FALSE
special DrawWholeMapView
delay 60
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_ZonaCero_Move_9
applymovement 6, PalletTown_ProfessorLab_ZonaCero_Move_10
waitmovement 0x0
delay 10
msgbox PalletTown_ProfessorLab_ZonaCero_Texto_7 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, PalletTown_ProfessorLab_ZonaCero_Move_11
waitmovement 0x0
delay 15
msgbox PalletTown_ProfessorLab_ZonaCero_Texto_8 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_ZonaCero_Move_20
applymovement 6, PalletTown_ProfessorLab_ZonaCero_Move_12
waitmovement 0x0
delay 15
msgbox PalletTown_ProfessorLab_ZonaCero_Texto_9 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, PalletTown_ProfessorLab_ZonaCero_Move_13
waitmovement 0x0
delay 15
msgbox PalletTown_ProfessorLab_ZonaCero_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_ProfessorLab_ZonaCero_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_ZonaCero_Move_19
applymovement 6, PalletTown_ProfessorLab_ZonaCero_Move_18
waitmovement 0x0
delay 15
msgbox PalletTown_ProfessorLab_ZonaCero_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_ProfessorLab_ZonaCero_Texto_13 MSGBOX_AUTOCLOSE
delay 25
msgbox PalletTown_ProfessorLab_ZonaCero_Texto_14 MSGBOX_AUTOCLOSE
delay 25
applymovement 6, PalletTown_ProfessorLab_ZonaCero_Move_14
waitmovement 0x0
msgbox PalletTown_ProfessorLab_ZonaCero_Texto_15 MSGBOX_AUTOCLOSE
applymovement 6, PalletTown_ProfessorLab_ZonaCero_Move_15
waitmovement 0x0
msgbox PalletTown_ProfessorLab_ZonaCero_Texto_16 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, PalletTown_ProfessorLab_ZonaCero_Move_16
waitmovement 0x0
delay 15
msgbox PalletTown_ProfessorLab_ZonaCero_Texto_17 MSGBOX_AUTOCLOSE
applymovement 6, PalletTown_ProfessorLab_ZonaCero_Move_17
waitmovement 0x0
setflag FLAG_HOENN_655
removeobject 6
playse SE_EXIT
setvar VAR_UNUSED_0x40FA, 0
setvar VAR_UNUSED_0x40F8, 28
release
end

PalletTown_ProfessorLab_ZonaCero_Move_20:
delay_16
delay_8
face_left
delay_8
step_end

PalletTown_ProfessorLab_ZonaCero_Move_19:
delay_16
face_up
delay_8
step_end

PalletTown_ProfessorLab_ZonaCero_Move_18:
walk_slow_up
step_end

PalletTown_ProfessorLab_ZonaCero_Move_17:
walk_up
walk_up
face_left
step_end

PalletTown_ProfessorLab_ZonaCero_Move_16:
delay_8
face_up
delay_16
delay_8
step_end

PalletTown_ProfessorLab_ZonaCero_Move_15:
walk_in_place_down
step_end

PalletTown_ProfessorLab_ZonaCero_Move_14:
walk_right
face_down
step_end

PalletTown_ProfessorLab_ZonaCero_Move_13:
delay_16
face_up
delay_16
step_end

PalletTown_ProfessorLab_ZonaCero_Move_12:
delay_16
face_right
delay_16
delay_8
face_up
delay_16
delay_8
face_right
delay_16
step_end

PalletTown_ProfessorLab_ZonaCero_Move_11:
lock_facing_direction
walk_slow_down
unlock_facing_direction
step_end

PalletTown_ProfessorLab_ZonaCero_Move_10:
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
face_up
step_end

PalletTown_ProfessorLab_ZonaCero_Move_9:
delay_16
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
face_up
step_end

PalletTown_ProfessorLab_ZonaCero_Texto_1:
 	.string "Hace 15 años…$"

PalletTown_ProfessorLab_ZonaCero_Texto_2:
	.string "OAK lleva mucho más tiempo como\n"
	.string "investigador.$"

PalletTown_ProfessorLab_ZonaCero_Texto_3:
	.string "Pero fue aquí donde empezó a recoger\n"
	.string "los frutos de su trabajo, donde se\l"
	.string "convirtió en el 'Profesor OAK'.$"

PalletTown_ProfessorLab_ZonaCero_Texto_4:
	.string "Estamos en 1999, de modo que este\n"
	.string "laboratorio se fundó en…$"

PalletTown_ProfessorLab_ZonaCero_Texto_5:
	.string "'1984'$"

PalletTown_ProfessorLab_ZonaCero_Texto_6:
	.string "¡Bingo!$"

PalletTown_ProfessorLab_ZonaCero_Texto_7:
	.string "Entonces, el comentario de DALIA\n"
	.string "no fue algo casual.$"

PalletTown_ProfessorLab_ZonaCero_Texto_8:
	.string "Casual…$"

PalletTown_ProfessorLab_ZonaCero_Texto_9:
	.string "¡Ja! ¡¿Cómo iba a serlo?!$"

PalletTown_ProfessorLab_ZonaCero_Texto_10:
	.string "Ahora parece claro. Teníamos la verdad\n"
	.string "delante, disfrazada de casualidad, y\l"
	.string "nos fuimos antes de descorrer el velo.$"

PalletTown_ProfessorLab_ZonaCero_Texto_11:
	.string "Entonces, OAK contaba con\n"
	.string "su propia 'BASE PROFUNDA'.$"

PalletTown_ProfessorLab_ZonaCero_Texto_12:
	.string "La cuestión es… si GIOVANNI y el\n"
	.string "resto también lo saben.$"

PalletTown_ProfessorLab_ZonaCero_Texto_13:
	.string "Porque ahora, después de las reuniones\n"
	.string "en TRIGAL… deberían… ¿no?$"

PalletTown_ProfessorLab_ZonaCero_Texto_14:
	.string "Mmm…$"

PalletTown_ProfessorLab_ZonaCero_Texto_15:
	.string "Debimos investigarlo antes, {PLAYER}.\n"
	.string "Pero mejor tarde que nunca.$"

PalletTown_ProfessorLab_ZonaCero_Texto_16:
	.string "Ahora que somos aliados, tenemos la\n"
	.string "excusa perfecta para hacer una\l"
	.string "pequeña visita y, tal vez…$"

PalletTown_ProfessorLab_ZonaCero_Texto_17:
	.string "…ver más allá de lo que\n"
	.string "supuestamente debíamos ver.$"

PalletTown_ProfessorLab_ZonaCero_Activador::
lock
compare VAR_UNUSED_0x40F7, 253
goto_if_gt PalletTown_ProfessorLab_ZonaCero_Activador_2
msgbox PalletTown_ProfessorLab_ZonaCero_Activador_Texto_1 MSGBOX_AUTOCLOSE
release
end

PalletTown_ProfessorLab_ZonaCero_Activador_2::
compare VAR_UNUSED_0x40F8, 27
goto_if_gt PalletTown_ProfessorLab_ZonaCero_Activador_Despues
msgbox PalletTown_ProfessorLab_ZonaCero_Activador_Texto_1 MSGBOX_AUTOCLOSE
release
end

PalletTown_ProfessorLab_ZonaCero_Activador_Despues::
msgbox PalletTown_ProfessorLab_ZonaCero_Activador_Texto_2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
delay 20
playse SE_CLICK
delay 40
playse SE_SUCCESS
delay 40
playse SE_UNLOCK
setmetatile 11, 0, 0x0DB, TRUE
setmetatile 11, 1, 0x0E3, TRUE
setmetatile 11, 2, 0x281, FALSE
setmetatile 12, 2, 0x281, FALSE
setmetatile 12, 1, 0x144, FALSE
setmetatile 12, 0, 0x13C, FALSE
special DrawWholeMapView
delay 60
release
end

PalletTown_ProfessorLab_ZonaCero_Activador_Texto_1:
	.string "Parece una de tantas otras máquinas.$"

PalletTown_ProfessorLab_ZonaCero_Activador_Texto_2:
	.string "Es la máquina que lleva a la ZONA 0.\n"
	.string "¿Quieres poner la contraseña?$"
