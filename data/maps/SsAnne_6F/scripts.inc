SsAnne_6F_MapScripts::
	.byte 0

SsAnne6F_1::
lock         
msgbox SsAnne6F_Text_1, MSGBOX_SIGN
release     
end

SsAnne6F_Text_1:
.string "I am the coolest guy here… and you know\n"
	.string "that.$"



SsAnne6F_2::
lock         
msgbox SsAnne6F_Text_2, MSGBOX_SIGN
release     
end

SsAnne6F_Text_2:
.string "Oh…, what a COOL TRAINER so… cool!$"



SsAnne6F_3::
end



SsAnne6F_4::
end



SsAnne6F_5::
lock     
faceplayer     
msgbox SsAnne6F_Text_5, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_5:
.string "I am one of those who like to witness\n"
	.string "these kinds of events as a mere\l"
	.string "observer, you can know more about a\l"
	.string "person by observing their attitude at\l"
	.string "parties than by talking to them for\l"
	.string "hours.$"



SsAnne6F_6::
lock     
faceplayer     
msgbox SsAnne6F_Text_6, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_6:
.string "HAHAHA!\n"
.string "Waiter!\l"
.string "Another SHUCKLE's liqueur!$"



SsAnne6F_7::
lock     
faceplayer     
msgbox SsAnne6F_Text_7, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_7:
.string "HA, HA! Do you know why people like this\n"
	.string "party? … … Because for a few hours,\l"
	.string "they evade all their problems and\l"
	.string "deficiencies of their miserable lives!\l"
	.string "Ha! Waiter, another SHUCKLE's liqueur.$"



SsAnne6F_8::
lock     
faceplayer     
msgbox SsAnne6F_Text_8, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_8:
.string "After all that effort and discipline it\n"
	.string "was supposed to be the final prize,\l"
	.string "ironically I have been happier training\l"
	.string "to get here than I got here. Fridays are\l"
	.string "always disappointing, boy!$"



SsAnne6F_9::
lock     
faceplayer     
msgbox SsAnne6F_Text_9, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_9:
.string "Everything was going perfectly until\n"
	.string "that couple appeared with their kitsch.\l"
	.string "They ruined my landscape!$"



SsAnne6F_10::
lock     
faceplayer     
msgbox SsAnne6F_Text_10, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_10:
.string "Ugh… Do not even dare to try that weird\n"
	.string "liquor that the waiter serves, I am\l"
	.string "going to vomit…$"



SsAnne6F_11::
lock     
faceplayer     
msgbox SsAnne6F_Text_11, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_11:
.string "The uncertainty of the moment, being\n"
	.string "carried by intuition… I can't\l"
	.string "understand yet what is the last\l"
	.string "essence that gives me the exact\l"
	.string "formula to squeeze this to the maximum\l"
	.string "in events like now…$"



SsAnne6F_12::
lock         
msgbox SsAnne6F_Text_12, MSGBOX_SIGN
release     
end

SsAnne6F_Text_12:
.string "Am I in a dream? I had the honor to see\n"
	.string "the majestic and legendary LANCE's\l"
	.string "DRAGONITE overflying the SS.ANNE!$"



SsAnne6F_13::
lock         
msgbox SsAnne6F_Text_13, MSGBOX_SIGN
release     
end

SsAnne6F_Text_13:
	.string "That was LANCE himself in the flesh!!$"

SsAnne6F_EventScript_Marinero::
	trainerbattle_single TRAINER_JESSICA_5, SsAnne6F_Text_MarineroIntro, SsAnne6F_Text_MarineroDefeated
	msgbox SsAnne6F_Text_MarineroPostBattle, MSGBOX_AUTOCLOSE
	end



SsAnne6F_EventScript_Marinero2::
	trainerbattle_single TRAINER_WINSTON_1, SsAnne6F_Text_Marinero2Intro, SsAnne6F_Text_Marinero2Defeated
	msgbox SsAnne6F_Text_Marinero2PostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne6F_Lance_Surge::
applymovement OBJ_EVENT_ID_PLAYER, SSAnne6F_Lance_Surge_move1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, SSAnne6F_Lance_Surge_move2
waitmovement 0x0
special RemoveCameraObject
delay 20
playmoncry SPECIES_DRAGONITE, CRY_MODE_ENCOUNTER
delay 20
fadescreen 1
playse SE_M_FLY
delay 25
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
addobject 15
fadescreen 0
applymovement 14, SSAnne6F_Lance_Surge_move3
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_1 MSGBOX_AUTOCLOSE
msgbox SSAnne6F_Lance_Surge_Text_2 MSGBOX_AUTOCLOSE
applymovement 14, SSAnne6F_Lance_Surge_move3
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_3 MSGBOX_AUTOCLOSE
applymovement 15, SSAnne6F_Lance_Surge_move4
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_4 MSGBOX_AUTOCLOSE
applymovement 15, SSAnne6F_Lance_Surge_move5
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_5 MSGBOX_AUTOCLOSE
msgbox SSAnne6F_Lance_Surge_Text_6 MSGBOX_AUTOCLOSE
applymovement 14, SSAnne6F_Lance_Surge_move3
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_7 MSGBOX_AUTOCLOSE
msgbox SSAnne6F_Lance_Surge_Text_8 MSGBOX_AUTOCLOSE
msgbox SSAnne6F_Lance_Surge_Text_9 MSGBOX_AUTOCLOSE
applymovement 15, SSAnne6F_Lance_Surge_move6
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_10 MSGBOX_AUTOCLOSE
applymovement 14, SSAnne6F_Lance_Surge_move3
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_11 MSGBOX_AUTOCLOSE
applymovement 15, SSAnne6F_Lance_Surge_move7
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_12 MSGBOX_AUTOCLOSE
delay 20
playmoncry SPECIES_DRAGONITE, CRY_MODE_ENCOUNTER
delay 20
fadescreen 1
playse SE_M_FLY
delay 25
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
removeobject 15
fadescreen 0
delay 15
applymovement 14, SSAnne6F_Lance_Surge_move4
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_13 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ELECTABUZZ, CRY_MODE_ENCOUNTER
delay 20
fadescreen 1
playse SE_M_TELEPORT
delay 25
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
removeobject 14
fadescreen 0
delay 25
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, SSAnne6F_Lance_Surge_move8
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40F7, 26
release
end

SSAnne6F_Lance_Surge_Text_1:
.string "???: It is a pleasure to see you again,\n"
	.string "LANCE, the new KANTO'S CHAMPION. Why\l"
	.string "did you call me here on a special day\l"
	.string "like this, the annual return of SS.ANNE?$"


SSAnne6F_Lance_Surge_Text_2:
.string "LANCE: I'll be quick, LT.SURGE. All major\n"
	.string "cities are being subjected to\l"
	.string "inspection and control routines to\l"
	.string "guarantee the security and comfort of\l"
	.string "our citizens and ensure that the\l"
	.string "machinery that moves this region works\l"
	.string "correctly. How are the people of\l"
	.string "VERMILION, SURGE?$"

SSAnne6F_Lance_Surge_Text_3:
.string "LT.SURGE: Everything is going\n"
	.string "correctly, SIR LANCE. VERMILION's\l"
	.string "harbor exponentially amplifies their\l"
	.string "contact networks with other regions,\l"
	.string "and I have understood that other\l"
	.string "cities, like CELADON with their big DEPT.\l"
	.string "STORE or FUCHSIA with the SAFARI ZONE,\l"
	.string "do the same with their own assets.$"

SSAnne6F_Lance_Surge_Text_4:
.string "LANCE: All this is great SURGE, our\n"
	.string "region's economy is experiencing an\l"
	.string "unprecedented upturn, and quality of\l"
	.string "life is higher.$"

SSAnne6F_Lance_Surge_Text_5:
.string "LANCE But this is not the answer I was\n"
	.string "expecting, SURGE. I was wondering…$"

SSAnne6F_Lance_Surge_Text_6:
.string "LANCE: How are people managing the\n"
	.string "fact that one of the officials in\l"
	.string "charge at the enemy region during the\l"
	.string "BIG WAR. now is the GYM LEADER and\l"
	.string "VERMILION's main icon. Have people\l"
	.string "already accepted your role change?$"

SSAnne6F_Lance_Surge_Text_7:
.string "LT.SURGE: I am afraid the war topic\n"
	.string "keeps being a taboo topic for the\l"
	.string "entire KANTO and specially here SIR\l"
	.string "LANCE. People prefer not to talk about\l"
	.string "it, keep it in the past, and continue\l"
	.string "their lives as if nothing happened.\l"
	.string "Maybe there would be some mistrust\l"
	.string "from some population sectors.$"

SSAnne6F_Lance_Surge_Text_8:
.string "LANCE: Are you referring to TEAM\n"
	.string "ROCKET?$"

SSAnne6F_Lance_Surge_Text_9:
.string "LT.SURGE: I was not talking about\n"
	.string "someone specially, but they could be a\l"
	.string "perfect example. They started as a\l"
	.string "protestant and non conformist\l"
	.string "organization for the new postwar\l"
	.string "government, due to their criminal acts\l"
	.string "and a correct desprestige campaign by\l"
	.string "your government caused that public\l"
	.string "opinion to TEAM ROCKET to be bad,\l"
	.string "though. Still exists some guilds that\l"
	.string "support them and feel identified with\l"
	.string "their patriotic feeling, as example\l"
	.string "motorists from CYCLING ROAD.$"

SSAnne6F_Lance_Surge_Text_10:
.string "LANCE: I see. The POKÉMON LEAGUE\n"
	.string "COMMITTEE will take some actions about\l"
	.string "this. Meanwhile, keep doing your job and\l"
	.string "maintain order and discipline in\l"
	.string "VERMILION. If people keep seeing\l"
	.string "improvements, they will definitely\l"
	.string "accept you as the place's SHERIFF.\l"
	.string "People have short memories, and good\l"
	.string "actions can overshadow the wrong ones\l"
	.string "(for them). So, be patient; we just need\l"
	.string "time, adequate stabilization, and\l"
	.string "progression. KANTO will accept this NEW\l"
	.string "WORLD ORDER almost without noticing.$"

SSAnne6F_Lance_Surge_Text_11:
.string "LT.SURGE: At your order SIR LANCE.$"

SSAnne6F_Lance_Surge_Text_12:
.string "LANCE: That's all for now SURGE. I hope\n"
	.string "you have fun at this party on SS.ANNE,\l"
	.string "which is one of the best progress\l"
	.string "indicators.$"

SSAnne6F_Lance_Surge_Text_13:
.string "LT:SURGE: These sort of parties were\n"
	.string "never my thing. ELECTABUZZ use\l"
	.string "TELEPORT!$"

SSAnne6F_Lance_Surge_move1:
walk_in_place_left
step_end

SSAnne6F_Lance_Surge_move2:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

SSAnne6F_Lance_Surge_move3:
walk_in_place_down
step_end

SSAnne6F_Lance_Surge_move4:
face_left
step_end

SSAnne6F_Lance_Surge_move5:
walk_in_place_up
step_end

SSAnne6F_Lance_Surge_move6:
walk_up
walk_left
step_end

SSAnne6F_Lance_Surge_move7:
face_right
step_end

SSAnne6F_Lance_Surge_move8:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end
