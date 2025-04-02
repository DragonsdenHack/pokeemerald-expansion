SsAnne_6F_MapScripts::
	.byte 0

SsAnne6F_1::
lock         
msgbox SsAnne6F_Text_1, MSGBOX_SIGN
release     
end

SsAnne6F_Text_1:
.string "I'm the coolest guy around\n"
	.string "here… and you know it.$"



SsAnne6F_2::
lock         
msgbox SsAnne6F_Text_2, MSGBOX_SIGN
release     
end

SsAnne6F_Text_2:
.string "Oh… what a COOL TRAINER so… cool!$"



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
	.string "I'm the type who prefers to observe at\n"
	.string "events like these. You learn more about\l"
	.string "someone by watching them at a party\l"
	.string "like this one than by talking to them\l"
	.string "for hours.$"



SsAnne6F_6::
lock     
faceplayer     
msgbox SsAnne6F_Text_6, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_6:
.string "HAHAHA!\n"
.string "Waiter!\l"
.string "Get me another SHUCKLE brandy!$"



SsAnne6F_7::
lock     
faceplayer     
msgbox SsAnne6F_Text_7, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_7:
	.string "HA, HA! Y'know why… people love to party\n"
	.string "so much? … … ‘Cause for a few hours… it\l"
	.string "lets ‘em escape all the problems… and\l"
	.string "shortcomings of their miserable lives!\p"
	.string "HA! Waiter! Get me another CACTURNE\n"
	.string "tequila!$"



SsAnne6F_8::
lock     
faceplayer     
msgbox SsAnne6F_Text_8, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_8:
	.string "So after all that effort and discipline,\n"
	.string "this was supposed to be the grand\l"
	.string "prize. Funny enough, I found more joy in\l"
	.string "the journey than in finally getting here.\p"
	.string "The finish line is always a let\n"
	.string "down, kid!$"



SsAnne6F_9::
lock     
faceplayer     
msgbox SsAnne6F_Text_9, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_9:
	.string "Ugh, I was having a lovely time until\n"
	.string "that lovey-dovey couple showed up\l"
	.string "being all sappy and gross. Get a room!$"



SsAnne6F_10::
lock     
faceplayer     
msgbox SsAnne6F_Text_10, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_10:
	.string "Ugh… Don't even think about trying any\n"
	.string "of that weird drink the waiter over\l"
	.string "there is serving. I think I'm gonna\l"
	.string "throw up…$"



SsAnne6F_11::
lock     
faceplayer     
msgbox SsAnne6F_Text_11, MSGBOX_NPC
delay 10
msgbox SsAnne6F_Text_11.1, MSGBOX_NPC
delay 10
msgbox SsAnne6F_Text_11.2, MSGBOX_NPC
release     
end

SsAnne6F_Text_11:
.string "The uncertainty of the moment,\n"
.string "let intuition work for you{PAUSE 15}…{PAUSE 15}$"

SsAnne6F_Text_11.1:
	.string "A big party event, the drunkenness of\n"
	.string "the community at it, the secret of the\l"
	.string "loss of personality among the crowd{PAUSE 15}…{PAUSE 15}$"

SsAnne6F_Text_11.2:
	.string "I still don't understand what's the\n"
	.string "ultimate essence capable of providing\l"
	.string "the exact formula that will finally make\l"
	.string "me enjoy these events{PAUSE 15}…{PAUSE 15}$"



SsAnne6F_12::
lock         
msgbox SsAnne6F_Text_12, MSGBOX_SIGN
release     
end

SsAnne6F_Text_12:
	.string "Am I dreaming? I just had the incredible\n"
	.string "honor of seeing LANCE's majestic,\l"
	.string "legendary DRAGONITE flying over the\l"
	.string "SS. ANNE!$"



SsAnne6F_13::
lock         
msgbox SsAnne6F_Text_13, MSGBOX_SIGN
release     
end

SsAnne6F_Text_13:
	.string "That was LANCE himself, in the flesh!$"

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
delay 10
playmoncry SPECIES_DRAGONITE, CRY_MODE_ENCOUNTER
applymovement 13, SSAnne6F_Lance_Surge_move1.5
applymovement 12, SSAnne6F_Lance_Surge_move1.5
applymovement OBJ_EVENT_ID_PLAYER, SSAnne6F_Lance_Surge_move1.5
waitmoncry
delay 15
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
setfieldeffectargument 1, 1
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
addobject 15
waitfieldeffect FLDEFF_NPCFLY_OUT
delay 35
applymovement 14, SSAnne6F_Lance_Surge_move3
waitmovement 0x0
delay 15
msgbox SSAnne6F_Lance_Surge_Text_1 MSGBOX_AUTOCLOSE
delay 10
msgbox SSAnne6F_Lance_Surge_Text_2 MSGBOX_AUTOCLOSE
delay 10
msgbox SSAnne6F_Lance_Surge_Text_2.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 14, SSAnne6F_Lance_Surge_move3
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_3 MSGBOX_AUTOCLOSE
applymovement 15, SSAnne6F_Lance_Surge_move4
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_4 MSGBOX_AUTOCLOSE
delay 15
msgbox SSAnne6F_Lance_Surge_Text_4.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 15, SSAnne6F_Lance_Surge_move5
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_5 MSGBOX_AUTOCLOSE
msgbox SSAnne6F_Lance_Surge_Text_6 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 14, SSAnne6F_Lance_Surge_move3.2
waitmovement 0x0
waitse
delay 10
msgbox SSAnne6F_Lance_Surge_Text_6.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, SSAnne6F_Lance_Surge_move3
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_7 MSGBOX_AUTOCLOSE
msgbox SSAnne6F_Lance_Surge_Text_8 MSGBOX_AUTOCLOSE
msgbox SSAnne6F_Lance_Surge_Text_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, SSAnne6F_Lance_Surge_move3.1
waitmovement 0x0
delay 15
msgbox SSAnne6F_Lance_Surge_Text_9.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 15, SSAnne6F_Lance_Surge_move6
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 15, SSAnne6F_Lance_Surge_move6.1
waitmovement 0x0
delay 10
msgbox SSAnne6F_Lance_Surge_Text_10.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, SSAnne6F_Lance_Surge_move6.2
waitmovement 0x0
delay 10
msgbox SSAnne6F_Lance_Surge_Text_10.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, SSAnne6F_Lance_Surge_move6.3
waitmovement 0x0
delay 10
msgbox SSAnne6F_Lance_Surge_Text_10.3 MSGBOX_AUTOCLOSE
delay 15
applymovement 14, SSAnne6F_Lance_Surge_move3
waitmovement 0x0
delay 15
msgbox SSAnne6F_Lance_Surge_Text_11 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, SSAnne6F_Lance_Surge_move7
waitmovement 0x0
delay 10
msgbox SSAnne6F_Lance_Surge_Text_12 MSGBOX_AUTOCLOSE
delay 20
playmoncry SPECIES_DRAGONITE, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
removeobject 15
waitfieldeffect FLDEFF_NPCFLY_OUT
delay 20
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
delay 25
applymovement 14, SSAnne6F_Lance_Surge_move4
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_13 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ELECTABUZZ, CRY_MODE_ENCOUNTER
delay 20
playse SE_M_TELEPORT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
removeobject 14
waitse
delay 25
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, SSAnne6F_Lance_Surge_move8
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40F7, 26
release
end

SSAnne6F_Lance_Surge_Text_1:
	.string "????: It's a pleasure to see you again,\n"
	.string "LANCE, CHAMPION of the new KANTO. What\l"
	.string "brings you here today, on such a special\l"
	.string "occasion as the annual return of the\l"
	.string "SS. ANNE?$"

SSAnne6F_Lance_Surge_Text_2:
	.string "LANCE: I'll be brief, LT. SURGE.\p"
	.string "All major cities are undergoing routine\n"
	.string "inspections and controls to ensure the\l"
	.string "safety and comfort of our citizens, and\l"
	.string "to confirm that the mechanisms driving\l"
	.string "this region are operating flawlessly.$"

SSAnne6F_Lance_Surge_Text_2.1:
	.string "How are the people of VERMILION, SURGE?$"

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
	.string "LANCE: That's great to hear, SURGE. The\n"
	.string "economy of the region is experiencing\l"
	.string "an unprecedented boom.$"

SSAnne6F_Lance_Surge_Text_4.1:
	.string "This was foreseeable: it was just a\n"
	.string "matter of tidying up and deciding for\l"
	.string "citizens where to channel their own\l"
	.string "efforts.$"

SSAnne6F_Lance_Surge_Text_5:
    .string "But{PAUSE 35}…{PAUSE 35} that's not the question I\n"
    .string "was asking, SURGE.\p"
	.string "What I really want to know is{PAUSE 15}…{PAUSE 15}$"

SSAnne6F_Lance_Surge_Text_6:
	.string "How are people handling the fact that\n"
	.string "one of the enemy's commanding officers\l"
	.string "during the KANTO WAR is now a GYM LEADER\l"
	.string "and the main icon of VERMILION?$"

SSAnne6F_Lance_Surge_Text_6.1:
	.string "Have they accepted your\n"
	.string "change of role?$"

SSAnne6F_Lance_Surge_Text_7:
	.string "LT.SURGE: I'm afraid the war is still a\n"
	.string "taboo topic throughout KANTO,\l"
	.string "especially here, SIR. People prefer not\l"
	.string "to talk about it, to leave it behind and\l"
	.string "move on with their lives as if nothing\l"
	.string "ever happened. There might still be\l"
	.string "some lingering resentment from certain\l"
	.string "factions…$"

SSAnne6F_Lance_Surge_Text_8:
.string "LANCE: Are you referring to\n"
	.string "TEAM ROCKET?$"

SSAnne6F_Lance_Surge_Text_9:
	.string "LT.SURGE: They're probably the best\n"
	.string "example. They started out as a protest\l"
	.string "group, unhappy with the new post-war\l"
	.string "government. But with their criminal\l"
	.string "activities, their extreme ideas, and the\l"
	.string "effective smear campaign in recent\l"
	.string "years, public opinion on the ROCKETs\l"
	.string "is what it is today.$"

SSAnne6F_Lance_Surge_Text_9.1:
	.string "There are still some groups that\n"
	.string "sympathize with them and share their\l"
	.string "anti-patriotic views, like the BIKERS\l"
	.string "on CYCLING ROAD, for example.$"

SSAnne6F_Lance_Surge_Text_10:
	.string "LANCE: {PAUSE 25}…{PAUSE 25} {PAUSE 25}…{PAUSE 25} I see. The POKÉMON LEAGUE\n"
	.string "COMMITTEE will take the necessary\l"
	.string "steps regarding this.$"

SSAnne6F_Lance_Surge_Text_10.1:
	.string "In the meantime, keep maintaining order\n"
	.string "and discipline in VERMILION. If people\l"
	.string "see progress, they'll accept you as the\l"
	.string "sheriff here.$"
	
SSAnne6F_Lance_Surge_Text_10.2:
	.string "People have short memories, SURGE; good\n"
	.string "deeds can overshadow the past.\p"
	.string "So be patient.$"

SSAnne6F_Lance_Surge_Text_10.3:
	.string "We just need time. With the right\n"
	.string "progress, KANTO will accept the New\l"
	.string "World Order without even realizing it.$"

SSAnne6F_Lance_Surge_Text_11:
.string "LT.SURGE: SIR, yes SIR.$"

SSAnne6F_Lance_Surge_Text_12:
	.string "LANCE: That's all for now, SURGE. Enjoy\n"
	.string "the party here on the SS. ANNE, it's one\l"
	.string "of the best markers of progress.$"

SSAnne6F_Lance_Surge_Text_13:
.string "LT.SURGE: This kind of party was\n"
	.string "never really my thing.\p"
	.string "ELECTABUZZ! TELEPORT!$"

SSAnne6F_Lance_Surge_move1.5:
emote_exclamation_mark
delay_16
delay_8
face_right
delay_16
delay_16
face_left
step_end

SSAnne6F_Lance_Surge_move3.2:
emote_exclamation_mark
step_end

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

SSAnne6F_Lance_Surge_move3.1:
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

SSAnne6F_Lance_Surge_move4:
face_left
step_end

SSAnne6F_Lance_Surge_move5:
walk_in_place_up
step_end

SSAnne6F_Lance_Surge_move6:
walk_up
delay_16
delay_8
walk_left
delay_16
step_end

SSAnne6F_Lance_Surge_move6.1:
delay_8
face_right
delay_16
delay_8
face_left
delay_16
walk_in_place_left
delay_8
step_end

SSAnne6F_Lance_Surge_move6.2:
delay_16
face_right
delay_16
delay_8
face_left
delay_8
step_end

SSAnne6F_Lance_Surge_move6.3:
walk_in_place_left
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
