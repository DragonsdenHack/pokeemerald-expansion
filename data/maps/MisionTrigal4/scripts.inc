MisionTrigal4_MapScripts::
	.byte 0

MisionTrigal4_Primer_Encuentro::
applymovement OBJ_EVENT_ID_PLAYER, MisionTrigal4_Primer_Encuentro_Move_1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_7.2
waitmovement 0x0
special RemoveCameraObject
applymovement 4, MisionTrigal4_Primer_Encuentro_Move_2
waitmovement 0x0
msgbox MisionTrigal4_Primer_Encuentro_Texto_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MisionTrigal4_Primer_Encuentro_Move_3
applymovement 4, MisionTrigal4_Primer_Encuentro_Move_4
applymovement 5, MisionTrigal4_Primer_Encuentro_Move_4
waitmovement 0x0
delay 15
applymovement 5, MisionTrigal4_Primer_Encuentro_Move_5
waitmovement 0x0
msgbox MisionTrigal4_Primer_Encuentro_Texto_2 MSGBOX_AUTOCLOSE
delay 15
playse MUS_RG_ENCOUNTER_BOY
msgbox MisionTrigal4_Primer_Encuentro_Texto_3 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_7.1
applymovement OBJ_EVENT_ID_PLAYER, MisionTrigal4_Primer_Encuentro_Move_2
applymovement 4, MisionTrigal4_Primer_Encuentro_Move_5
applymovement 5, MisionTrigal4_Primer_Encuentro_Move_6
waitmovement 0x0
special RemoveCameraObject
waitmovement 0x0
trainerbattle_no_intro TRAINER_TRAINER_84, MisionTrigal4_Primer_Encuentro_Texto_4
msgbox MisionTrigal4_Primer_Encuentro_Texto_5 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_ROCKET
applymovement 4, MisionTrigal4_Primer_Encuentro_Move_8
applymovement OBJ_EVENT_ID_PLAYER, MisionTrigal4_Primer_Encuentro_Move_7
msgbox MisionTrigal4_Primer_Encuentro_Texto_6 MSGBOX_AUTOCLOSE
applymovement 4, MisionTrigal4_Primer_Encuentro_Move_9
trainerbattle_no_intro TRAINER_TRAINER_85, MisionTrigal4_Primer_Encuentro_Texto_7
playse SE_PIN
applymovement 4, MisionTrigal4_Primer_Encuentro_Move_4
waitmovement 0x0
msgbox MisionTrigal4_Primer_Encuentro_Texto_8 MSGBOX_AUTOCLOSE
delay 25
playse SE_EXIT
clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
addobject 2
applymovement OBJ_EVENT_ID_PLAYER, MisionTrigal4_Primer_Encuentro_Move_10
waitmovement 0x0
waitse
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MisionTrigal4_Primer_Encuentro_Move_4
waitmovement 0x0
msgbox MisionTrigal4_Primer_Encuentro_Texto_9 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_BOY
applymovement 2, MisionTrigal4_Primer_Encuentro_Move_11
waitmovement 0x0
setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
trainerbattle_no_intro TRAINER_TRAINER_83, MisionTrigal4_Primer_Encuentro_Texto_10
msgbox MisionTrigal4_Primer_Encuentro_Texto_11 MSGBOX_AUTOCLOSE
setvar VAR_EVER_GRANDE_CITY_STATE, 2
release
end

MisionTrigal4_Primer_Encuentro_Move_11:
walk_down
walk_down
walk_left
walk_down
walk_down
step_end

MisionTrigal4_Primer_Encuentro_Move_10:
face_up
step_end

MisionTrigal4_Primer_Encuentro_Move_9:
walk_right
step_end

MisionTrigal4_Primer_Encuentro_Move_8:
walk_up
walk_up
walk_right
step_end

MisionTrigal4_Primer_Encuentro_Move_7:
walk_in_place_left
step_end

MisionTrigal4_Primer_Encuentro_Move_6:
walk_up
walk_left
walk_up
walk_in_place_left
step_end

MisionTrigal4_Primer_Encuentro_Move_5:
walk_up
step_end

MisionTrigal4_Primer_Encuentro_Move_4:
emote_exclamation_mark
step_end

MisionTrigal4_Primer_Encuentro_Move_3:
walk_down
step_end

MisionTrigal4_Primer_Encuentro_Move_1:
walk_in_place_down
step_end

MisionTrigal4_Primer_Encuentro_Move_2:
walk_in_place_right
step_end

MisionTrigal4_Primer_Encuentro_Texto_1:
	.string "As I was saying, my colleagues from\n"
	.string "KANTO say that in the CINNABAR\l"
	.string "MANSION, there are many POKÉM…$"

MisionTrigal4_Primer_Encuentro_Texto_2:
.string "Excuse me, have you got lost?$"

MisionTrigal4_Primer_Encuentro_Texto_3:
	.string "I know you haven't gotten lost; nobody\n"
	.string "ends up here just by walking around.\l"
	.string "You need a good jolt to finally\l"
	.string "understand not to poke your nose into\l"
	.string "other people's business.$"

MisionTrigal4_Primer_Encuentro_Texto_4:
	.string "Agh, so scary!$"

MisionTrigal4_Primer_Encuentro_Texto_5:
	.string "You are supposed to be the one who\n"
	.string "buys us the POKÉMON, damn it!$"

MisionTrigal4_Primer_Encuentro_Texto_6:
	.string "I thought there was an agreement among\n"
	.string "the high-ranking officials of the RADIO\l"
	.string "TOWER. Aren't you one of them? Then who\l"
	.string "are you?!$"

MisionTrigal4_Primer_Encuentro_Texto_7:
.string "So strong!$"

MisionTrigal4_Primer_Encuentro_Texto_8:
	.string "You're above all those charges at the\n"
	.string "RADIO TOWER?!$"

MisionTrigal4_Primer_Encuentro_Texto_9:
	.string "That's enough! No matter how mighty and\n"
	.string "significant you may be, you've fought 2\l"
	.string "battles consecutively. I'll crush you\l"
	.string "before you can flee!$"

MisionTrigal4_Primer_Encuentro_Texto_10:
.string "I got smashed…$"

MisionTrigal4_Primer_Encuentro_Texto_11:
.string "The BOSS won't like this…$"


MisionTrigal4_Segundo_Encuentro_Arriba::
lock
applymovement OBJ_EVENT_ID_PLAYER, MisionTrigal4_Segundo_Encuentro_Move_1
goto MisionTrigal4_Segundo_Encuentro

MisionTrigal4_Segundo_Encuentro_Abajo::
lock
applymovement OBJ_EVENT_ID_PLAYER, MisionTrigal4_Segundo_Encuentro_Move_2
goto MisionTrigal4_Segundo_Encuentro

MisionTrigal4_Segundo_Encuentro::
msgbox MisionTrigal4_Segundo_Encuentro_Texto_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 3, MisionTrigal4_Segundo_Encuentro_Move_3
applymovement OBJ_EVENT_ID_PLAYER, MisionTrigal4_Segundo_Encuentro_Move_4
waitmovement 0x0
msgbox MisionTrigal4_Segundo_Encuentro_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox MisionTrigal4_Segundo_Encuentro_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox MisionTrigal4_Segundo_Encuentro_Texto_4 MSGBOX_AUTOCLOSE
applymovement 3, MisionTrigal4_Primer_Encuentro_Move_2
waitmovement 0x0
msgbox MisionTrigal4_Segundo_Encuentro_Texto_5 MSGBOX_AUTOCLOSE
applymovement 3, MisionTrigal4_Segundo_Encuentro_Move_5
applymovement OBJ_EVENT_ID_PLAYER, MisionTrigal4_Segundo_Encuentro_Move_6
waitmovement 0x0
playse MUS_RG_ENCOUNTER_ROCKET
msgbox MisionTrigal4_Segundo_Encuentro_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_86, MisionTrigal4_Segundo_Encuentro_Texto_7
msgbox MisionTrigal4_Segundo_Encuentro_Texto_8 MSGBOX_AUTOCLOSE
applymovement 3, MisionTrigal4_Segundo_Encuentro_Move_7
waitmovement 0x0
msgbox MisionTrigal4_Segundo_Encuentro_Texto_9 MSGBOX_AUTOCLOSE
applymovement 3, MisionTrigal4_Segundo_Encuentro_Move_8
waitmovement 0x0
removeobject 2
setvar VAR_EVER_GRANDE_CITY_STATE, 3
release
end

MisionTrigal_Dialogo_Cientifico::
lock
faceplayer
msgbox MisionTrigal4_Segundo_Encuentro_Texto_9 MSGBOX_AUTOCLOSE
release
end

MisionTrigal4_Segundo_Encuentro_Move_8:
walk_left
walk_left
walk_in_place_up
step_end

MisionTrigal4_Segundo_Encuentro_Move_7:
walk_in_place_up
step_end

MisionTrigal4_Segundo_Encuentro_Move_6:
walk_in_place_down
step_end

MisionTrigal4_Segundo_Encuentro_Move_5:
walk_right
walk_right
face_up
step_end

MisionTrigal4_Segundo_Encuentro_Move_4:
walk_left
step_end

MisionTrigal4_Segundo_Encuentro_Move_3:
emote_exclamation_mark
face_right
step_end

MisionTrigal4_Segundo_Encuentro_Move_1:
walk_down
walk_in_place_left
step_end

MisionTrigal4_Segundo_Encuentro_Move_2:
walk_in_place_left
step_end

MisionTrigal4_Segundo_Encuentro_Texto_1:
	.string "According to our latest estimates, we'll\n"
	.string "invoice 28% more this month than the\l"
	.string "previous one. Everything is going\l"
	.string "smoothly, hoh…$"

MisionTrigal4_Segundo_Encuentro_Texto_2:
.string "What the hell are you supposed\l"
.string "to be doing here?$"

MisionTrigal4_Segundo_Encuentro_Texto_3:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

MisionTrigal4_Segundo_Encuentro_Texto_4:
	.string "I see, those incompetents aren't\n"
	.string "capable of handling a problem when it\l"
	.string "appears.$"

MisionTrigal4_Segundo_Encuentro_Texto_5:
	.string "Don't worry, unlike them, I do know how\n"
	.string "to make the most out of the entire\l"
	.string "range of POKÉMON at our disposal.$"

MisionTrigal4_Segundo_Encuentro_Texto_6:
	.string "No matter who you are, or what you want.\n"
	.string "I just know that you will be destroyed!$"

MisionTrigal4_Segundo_Encuentro_Texto_7:
.string "What was that power?!$"

MisionTrigal4_Segundo_Encuentro_Texto_8:
	.string "You may have more power than I thought,\n"
	.string "but you can't handle our BOSS; he\l"
	.string "himself has the best POKÉMON that\l"
	.string "people like you buy.$"

MisionTrigal4_Segundo_Encuentro_Texto_9:
.string "This business won't fall.$"


MisionTrigal4_Tercer_Encuentro::
lock
compare VAR_EVER_GRANDE_CITY_STATE, 3
goto_if_gt MisionTrigal_Jefe_Final
applymovement OBJ_EVENT_ID_PLAYER, MisionTrigal4_Segundo_Encuentro_Move_7
msgbox MisionTrigal4_Tercer_Encuentro_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, MisionTrigal4_Tercer_Encuentro_Move_1
waitmovement 0x0
msgbox MisionTrigal4_Tercer_Encuentro_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox MisionTrigal4_Tercer_Encuentro_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox MisionTrigal4_Tercer_Encuentro_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox MisionTrigal4_Tercer_Encuentro_Texto_5 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, MisionTrigal4_Primer_Encuentro_Move_4
waitmovement 0x0
msgbox MisionTrigal4_Tercer_Encuentro_Texto_6 MSGBOX_AUTOCLOSE
msgbox MisionTrigal4_Tercer_Encuentro_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, MisionTrigal4_Segundo_Encuentro_Move_6
waitmovement 0x0
msgbox MisionTrigal4_Tercer_Encuentro_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox MisionTrigal4_Tercer_Encuentro_Texto_9 MSGBOX_AUTOCLOSE
delay 20
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox MisionTrigal4_Tercer_Encuentro_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, MisionTrigal4_Primer_Encuentro_Move_3
waitmovement 0x0
trainerbattle_no_intro TRAINER_TRAINER_87, MisionTrigal4_Tercer_Encuentro_Texto_11
playse SE_BREAKABLE_DOOR
applymovement 1, CuevaTesoro4_Jefe_Final_Move_9
waitmovement 0x0
msgbox MisionTrigal4_Tercer_Encuentro_Texto_12 MSGBOX_AUTOCLOSE
delay 20
msgbox MisionTrigal4_Tercer_Encuentro_Texto_13 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, MisionTrigal4_Primer_Encuentro_Move_4
waitmovement 0x0
msgbox MisionTrigal4_Tercer_Encuentro_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, MisionTrigal4_Tercer_Encuentro_Move_2
waitmovement 0x0
msgbox MisionTrigal4_Tercer_Encuentro_Texto_15 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, MisionTrigal4_Segundo_Encuentro_Move_7
waitmovement 0x0
msgbox MisionTrigal4_Tercer_Encuentro_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, MisionTrigal4_Tercer_Encuentro_Move_3
waitmovement 0x0
delay 50
applymovement 1, MisionTrigal4_Tercer_Encuentro_Move_4
applymovement OBJ_EVENT_ID_PLAYER, MisionTrigal4_Tercer_Encuentro_Move_5
waitmovement 0x0
delay 40
playfanfare MUS_OBTAIN_TMHM
msgbox MisionTrigal4_Tercer_Encuentro_Texto_17 MSGBOX_DEFAULT
waitfanfare
msgbox MisionTrigal4_Tercer_Encuentro_Texto_18 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox MisionTrigal4_Tercer_Encuentro_Texto_19 MSGBOX_DEFAULT
givemon SPECIES_CHIMCHAR, 15, ITEM_FIRE_GEM
waitfanfare
applymovement 1, MisionTrigal4_Primer_Encuentro_Move_2
waitmovement 0x0
msgbox MisionTrigal4_Tercer_Encuentro_Texto_20 MSGBOX_AUTOCLOSE
msgbox MisionTrigal4_Tercer_Encuentro_Texto_20.1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq MisionTrigal4_Tercer_Encuentro_No
msgbox MisionTrigal4_Tercer_Encuentro_Texto_21 MSGBOX_AUTOCLOSE
showmoneybox 0, 0
delay 15
playse SE_SHOP
addmoney 2250000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox MisionTrigal4_Tercer_Encuentro_Texto_22 MSGBOX_DEFAULT
waitse
delay 40
hidemoneybox
delay 40
msgbox MisionTrigal4_Tercer_Encuentro_Texto_23 MSGBOX_AUTOCLOSE
setvar VAR_EVER_GRANDE_CITY_STATE, 4
release
end

MisionTrigal_Jefe_Final::
lock
faceplayer
msgbox MisionTrigal4_Tercer_Encuentro_Texto_23 MSGBOX_AUTOCLOSE
release
end

MisionTrigal4_Tercer_Encuentro_Texto_20.1:
.string "Do you give us a second chance?$"

MisionTrigal4_Tercer_Encuentro_No::
setvar VAR_EVER_GRANDE_CITY_STATE, 4
msgbox MisionTrigal4_Tercer_Encuentro_Texto_24 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SS_TIDAL
fadescreen 1
delay 20
removeobject 1
removeobject 3
removeobject 4
removeobject 5
fadescreen 0
release
end

MisionTrigal4_Tercer_Encuentro_Move_5:
face_left
step_end

MisionTrigal4_Tercer_Encuentro_Move_4:
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_right
walk_fast_right
step_end

MisionTrigal4_Tercer_Encuentro_Move_3:
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_up
step_end

MisionTrigal4_Tercer_Encuentro_Move_2:
walk_fast_down
step_end

MisionTrigal4_Tercer_Encuentro_Move_1:
walk_slow_up
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_up
step_end

MisionTrigal4_Tercer_Encuentro_Texto_1:
.string "Who's there?$"

MisionTrigal4_Tercer_Encuentro_Texto_2:
	.string "Complaints aren't handled here; if\n"
	.string "you've received a POKÉMON with bad IVs\l"
	.string "or an unfavorable nature, I'm sorry, you\l"
	.string "are unlucky.$"


MisionTrigal4_Tercer_Encuentro_Texto_3:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

MisionTrigal4_Tercer_Encuentro_Texto_4:
	.string "So you want to shut down this\n"
	.string "business… Do you know who you're\l"
	.string "talking to?$"

MisionTrigal4_Tercer_Encuentro_Texto_5:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

MisionTrigal4_Tercer_Encuentro_Texto_6:
.string "If I know who I am talking with?!$"

MisionTrigal4_Tercer_Encuentro_Texto_7:
	.string "Watch your tone, man. My POKÉMON could\n"
	.string "crush your entire team without\l"
	.string "hesitation. If you continue on this\l"
	.string "path, I'll use all my influence to ruin\l"
	.string "your life.$"

MisionTrigal4_Tercer_Encuentro_Texto_8:
	.string "The only job you'll be able to get in\n"
	.string "this city is as a bathroom cleaner at\l"
	.string "the DEPARTMENT STORE. Now get out of\l"
	.string "my sight.$"

MisionTrigal4_Tercer_Encuentro_Texto_9:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

MisionTrigal4_Tercer_Encuentro_Texto_10:
	.string "Okay, fools like you must learn the hard\n"
	.string "way. What a shame you won't get a\l"
	.string "second chance; after this, I'll make\l"
	.string "sure you're a social outcast!$"

MisionTrigal4_Tercer_Encuentro_Texto_11:
.string "This is just not possible! Who the hell are you?$"

MisionTrigal4_Tercer_Encuentro_Texto_12:
	.string "No one else in the city has the\n"
	.string "MEGA-EVOLUTION of a PSEUDOLEGENDARY\l"
	.string "on the city, I only know of ELM with\l"
	.string "another one! How did you manage to\l"
	.string "defeat our top-tier merchandise?$"

MisionTrigal4_Tercer_Encuentro_Texto_13:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

MisionTrigal4_Tercer_Encuentro_Texto_14:
	.string "Wait{PAUSE 25}…{PAUSE 25} The TEAM ROCKET? You're the\n"
	.string "famous {PLAYER}?! The leader in JOHTO\l"
	.string "and right-hand man of none other than\l"
	.string "GIOVANNI himself?$"

MisionTrigal4_Tercer_Encuentro_Texto_15:
	.string "Oh… That explains it, I beg you to\n"
	.string "forgive us, this won't happen agai…$"

MisionTrigal4_Tercer_Encuentro_Texto_16:
.string "A SNUBBULL of an ex-employed?\n"
	.string "Right now.$"

MisionTrigal4_Tercer_Encuentro_Texto_17:
.string "{PLAYER} TOOK THE SNUBBULL!$"

MisionTrigal4_Tercer_Encuentro_Texto_18:
	.string "And this is for you, one of our rarest\n"
	.string "possessions.$"

MisionTrigal4_Tercer_Encuentro_Texto_19:
.string "YOU OBTAINED A CHIMCHAR AT LV.15!$"

MisionTrigal4_Tercer_Encuentro_Texto_20:
	.string "I beg you, don't force us to close the\n"
	.string "business; we supply the vast majority\l"
	.string "of the city. I promise to improve our\l"
	.string "policies regarding POKÉMON care.$"

MisionTrigal4_Tercer_Encuentro_Texto_21:
	.string "Oh! Thank you so much, CHIEF.BOSS\n"
	.string "{PLAYER}! Accept this as a gesture of\l"
	.string "appreciation.$"

MisionTrigal4_Tercer_Encuentro_Texto_22:
	.string "You obtained 2,25 MILLION POKÉ!$"

MisionTrigal4_Tercer_Encuentro_Texto_23:
	.string "You won't regret giving us another\n"
	.string "chance; we won't forget this favor.$"

MisionTrigal4_Tercer_Encuentro_Texto_24:
	.string "Grrrrr… Damn… The TEAM ROCKET can't be\n"
	.string "fooled… We have no other option than to\l"
	.string "escape this region and try to redo the\l"
	.string "business far away from here…$"


Mision_Trigal4_Calvo::
lock
faceplayer
msgbox MisionTrigal4_Primer_Encuentro_Texto_11 MSGBOX_AUTOCLOSE
release
end

Mision_Trigal4_Ladron::
lock
faceplayer
msgbox MisionTrigal4_Primer_Encuentro_Texto_8 MSGBOX_AUTOCLOSE
release
end

Mision_Trigal4_Motorista::
lock
faceplayer
msgbox MisionTrigal4_Primer_Encuentro_Texto_5 MSGBOX_AUTOCLOSE
release
end
