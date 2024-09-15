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
	.string "shortcomings of their miserable lives!\l"
	.string "HA! Waiter! Get me another CACTURNE\l"
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
	.string "the journey than in finally getting\l"
	.string "here. The finish line is always a let\l"
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
	.string "there is serving. I think I'm gonna throw\l"
	.string "up…$"



SsAnne6F_11::
lock     
faceplayer     
msgbox SsAnne6F_Text_11, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_11:
	.string "The uncertainty of the moment, just\n"
	.string "going with your gut… I still can't quite\l"
	.string "grasp the key to getting the most out\l"
	.string "of events like this one…$"



SsAnne6F_12::
lock         
msgbox SsAnne6F_Text_12, MSGBOX_SIGN
release     
end

SsAnne6F_Text_12:
	.string "Am I dreaming? I just had the incredible\n"
	.string "honor of seeing LANCE's majestic,\l"
	.string "legendary DRAGONITE flying over the SS\l"
	.string "ANNE!$"



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
	.string "????: It's a pleasure to see you again,\n"
	.string "LANCE, Champion of the new KANTO. What\l"
	.string "brings you here today, on such a special\l"
	.string "occasion as the annual return of the SS\l"
	.string "ANNE?$"


SSAnne6F_Lance_Surge_Text_2:
	.string "LANCE: I'll be brief, LT. SURGE. All major\n"
	.string "cities are undergoing routine\l"
	.string "inspections and controls to ensure the\l"
	.string "safety and comfort of our citizens, and\l"
	.string "to confirm that the mechanisms driving\l"
	.string "this region are operating flawlessly.\l"
	.string "How are the people of Vermilion, Surge?$"

SSAnne6F_Lance_Surge_Text_3:
	.string "LT.SURGE: Everything is running\n"
	.string "smoothly, sir. Vermilion's harbor has\l"
	.string "significantly expanded its network of\l"
	.string "contacts with other regions, and I\l"
	.string "understand that other cities, like\l"
	.string "Celadon with its massive Department\l"
	.string "Store or Fuchsia with the Safari Zone,\l"
	.string "are doing the same with their\l"
	.string "respective assets.$"

SSAnne6F_Lance_Surge_Text_4:
	.string "LANCE: That's great to hear, Surge. The\n"
	.string "economy of our region is experiencing\l"
	.string "an unprecedented boom, and the\l"
	.string "standard of living here continues\l"
	.string "rising steadily…$"

SSAnne6F_Lance_Surge_Text_5:
	.string "LANCE: But that's not the question I\n"
	.string "was asking, Surge. What I really want to\l"
	.string "know is…$"

SSAnne6F_Lance_Surge_Text_6:
	.string "LANCE: How are people handling the fact\n"
	.string "that one of the enemy's commanding\l"
	.string "officers during the Great War is now a\l"
	.string "Gym Leader and the main icon of\l"
	.string "Vermilion? Have they accepted your\l"
	.string "change of role?$"

SSAnne6F_Lance_Surge_Text_7:
	.string "LT.SURGE: I'm afraid the war is still a\n"
	.string "taboo topic throughout KANTO,\l"
	.string "especially here, sir. People prefer not\l"
	.string "to talk about it, to leave it behind and\l"
	.string "move on with their lives as if nothing\l"
	.string "ever happened. There might still be\l"
	.string "some lingering resentment from certain\l"
	.string "factions…$"

SSAnne6F_Lance_Surge_Text_8:
	.string "LANCE: By certain factions, do\n"
	.string "you mean TEAM ROCKET?$"

SSAnne6F_Lance_Surge_Text_9:
	.string "LT.SURGE: I wasn't referring to anyone\n"
	.string "specific, but they're probably the best\l"
	.string "example. They started out as a protest\l"
	.string "group, unhappy with the new post-war\l"
	.string "government. But with their criminal\l"
	.string "activities, their extreme ideas, and the\l"
	.string "effective smear campaign in recent\l"
	.string "years, public opinion on the Rockets is\l"
	.string "what it is today. There are still some\l"
	.string "groups that sympathize with them and\l"
	.string "share their anti-patriotic views, like\l"
	.string "the bikers on Cycling Road, for example.$"

SSAnne6F_Lance_Surge_Text_10:
	.string "LANCE: … I see. The Pokémon League\n"
	.string "Committee will take the necessary\l"
	.string "steps regarding this. In the meantime,\l"
	.string "keep maintaining order and discipline in\l"
	.string "Vermilion. If people see progress,\l"
	.string "they'll accept you as the sheriff here.\l"
	.string "People have short memories, Surge -\l"
	.string "good deeds can overshadow the past. So\l"
	.string "be patient; we just need time. With the\l"
	.string "right progress, KANTO will accept the\l"
	.string "New World Order without even realizing\l"
	.string "it.$"

SSAnne6F_Lance_Surge_Text_11:
.string "LT.SURGE: Sir yes sir.$"

SSAnne6F_Lance_Surge_Text_12:
	.string "LANCE: That's all for now, Surge. Enjoy\n"
	.string "the party here on the SS ANNE - it's one\l"
	.string "of the best markers of progress.$"

SSAnne6F_Lance_Surge_Text_13:
	.string "LT. SURGE: This kind of party was never\n"
	.string "really my thing. Electabuzz! Teleport!$"

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
