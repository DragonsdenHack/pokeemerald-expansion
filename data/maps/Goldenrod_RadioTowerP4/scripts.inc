Goldenrod_RadioTowerP4_MapScripts::
	.byte 0

RadioTowerP4_1::
lock
faceplayer
msgbox RadioTowerP4_1_Texto_1 MSGBOX_NPC
release
end

RadioTowerP4_1_Texto_1:
	.string "I've heard that SILPH has several\n"
	.string "underground floors, but it wouldn't be\l"
	.string "possible here due to the proximity to\l"
	.string "the sea.$"



RadioTowerP4_2::
end



RadioTowerP4_3::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP4_Text_3, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP4_Text_3:
.string "BEN: Do you listen to our music?$"



RadioTowerP4_4::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP4_Text_4, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP4_Text_4:
	.string "This is mind-blowing! A building this\n"
	.string "size that close to the sea. Don't you\l"
	.string "think? In case this building goes down,\l"
	.string "its height would make whoever is on the\l"
	.string "top floors would end up right over the\l"
	.string "sea. I just thought about it and it's\l"
	.string "like WOW!$"



RadioTowerP4_5::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP4_Text_5, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP4_Text_5:
	.string "Our DIRECTOR's office is right next to\n"
	.string "this room; that's where the most\l"
	.string "important meetings are.$"



RadioTowerP4_6::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP4_Text_6, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP4_Text_6:
	.string "I still can't believe how much\n"
	.string "GOLDENROD has improved technologically\l"
	.string "in recent years, and all that is yet to\l"
	.string "come. Interesting times we live in!$"



RadioTowerP4_7::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 204
goto_if_gt RadioTowerP4_7_3
compare VAR_UNUSED_0x40F7, 145
goto_if_gt RadioTowerP4_7_2
msgbox RadioTowerP4_7_Texto_1 MSGBOX_NPC
release
end

RadioTowerP4_7_3::
msgbox RadioTowerP4_7_Texto_3 MSGBOX_NPC
release
end

RadioTowerP4_7_2::
msgbox RadioTowerP4_7_Texto_2 MSGBOX_NPC
release
end

RadioTowerP4_7_Texto_3:
	.string "Time flies so fast, don't you think so?\n"
	.string "It feels as if it were just yesterday\l"
	.string "when we held the GOLDENROD CONFERENCE\l"
	.string "I, but the political situation between\l"
	.string "KANTO and JOHTO has undergone\l"
	.string "significant changes since then.$"

RadioTowerP4_7_Texto_1:
	.string "{PLAYER}! Explore and enjoy every\n"
	.string "corner of this region. Everything you\l"
	.string "can learn from it and its trainers is a\l"
	.string "gift.$"

RadioTowerP4_7_Texto_2:
	.string "So, it will be that way… We have a lot of\n"
	.string "work to do in the next two years. For\l"
	.string "then, KANTO and JOHTO will form a unique\l"
	.string "bond.$"

RadioTowerP4_9::
end



GoldenrodRadioTowerP4Documento_100::
msgbox GoldenrodRadioTowerP4Documento_Text_100, MSGBOX_SIGN   
end

GoldenrodRadioTowerP4Documento_Text_100:
.string "5F DIRECTOR'S OFFICE$"



GoldenrodRadioTowerP4Documento_101::
msgbox GoldenrodRadioTowerP4Documento_Text_101, MSGBOX_SIGN   
end

GoldenrodRadioTowerP4Documento_Text_101:
.string "5F STUDIO 1$"

Goldenrod_RadioTower_P4_Reunion::
lock
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA
addobject 8
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Reunion_Move_1
applymovement 1, Goldenrod_RadioTower_P4_Reunion_Move_2
waitmovement 0x0
playfanfare MUS_OBTAIN_ITEM
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_1 MSGBOX_DEFAULT
waitfanfare
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Reunion_Move_4
applymovement 1, Goldenrod_RadioTower_P4_Reunion_Move_3
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_2 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Reunion_Move_5
waitmovement 0x0
playse SE_PIN
applymovement 7, Goldenrod_RadioTower_P4_Reunion_Move_6
applymovement 8, Goldenrod_RadioTower_P4_Reunion_Move_6
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_4 MSGBOX_AUTOCLOSE
applymovement 7, Goldenrod_RadioTower_P4_Reunion_Move_3
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_5 MSGBOX_AUTOCLOSE
applymovement 8, Goldenrod_RadioTower_P4_Reunion_Move_7
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_6 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Reunion_Move_8
waitmovement 0x0
applymovement 7, Goldenrod_RadioTower_P4_Reunion_Move_9
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_7 MSGBOX_AUTOCLOSE
applymovement 7, Goldenrod_RadioTower_P4_Reunion_Move_3
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_8 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_9 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_10 MSGBOX_AUTOCLOSE
applymovement 7, Goldenrod_RadioTower_P4_Reunion_Move_7
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_11 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_12 MSGBOX_AUTOCLOSE
applymovement 7, Goldenrod_RadioTower_P4_Reunion_Move_3
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_13 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_14 MSGBOX_AUTOCLOSE
applymovement 7, Goldenrod_RadioTower_P4_Reunion_Move_10
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_15 MSGBOX_AUTOCLOSE
applymovement 8, Goldenrod_RadioTower_P4_Reunion_Move_11
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_16 MSGBOX_AUTOCLOSE
applymovement 7, Goldenrod_RadioTower_P4_Reunion_Move_12
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_17 MSGBOX_AUTOCLOSE
applymovement 8, Goldenrod_RadioTower_P4_Reunion_Move_7
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_18 MSGBOX_AUTOCLOSE
delay 20
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_19 MSGBOX_AUTOCLOSE
delay 20
applymovement 7, Goldenrod_RadioTower_P4_Reunion_Move_13
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_20 MSGBOX_AUTOCLOSE
applymovement 8, Goldenrod_RadioTower_P4_Reunion_Move_14
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_21 MSGBOX_AUTOCLOSE
applymovement 8, Goldenrod_RadioTower_P4_Reunion_Move_15
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Reunion_Move_9
applymovement 7, Goldenrod_RadioTower_P4_Reunion_Move_9
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_22 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_23 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_24 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Reunion_Move_7
applymovement 8, Goldenrod_RadioTower_P4_Reunion_Move_16
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA
removeobject 8
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Reunion_Move_17
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_25 MSGBOX_AUTOCLOSE
applymovement 7, Goldenrod_RadioTower_P4_Reunion_Move_18
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_26 MSGBOX_AUTOCLOSE
applymovement 7, Goldenrod_RadioTower_P4_Reunion_Move_13
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Reunion_Texto_27 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
setvar VAR_UNUSED_0x40F7, 134
release
end

Goldenrod_RadioTower_P4_Reunion_Texto_1:
.string "({PLAYER} show his RADIO PASS)$"

Goldenrod_RadioTower_P4_Reunion_Texto_2:
	.string "DIRECTOR: You know that most of JOHTO\n"
	.string "didn't care about the war; it was LANCE\l"
	.string "who forced it due to his thirst for\l"
	.string "power.$"

Goldenrod_RadioTower_P4_Reunion_Texto_3:
	.string "ARCHER: That's why I'm here. With LANCE\n"
	.string "now under control, it's time to unite\l"
	.string "the two regions like never before.$"

Goldenrod_RadioTower_P4_Reunion_Texto_4:
.string "ARCHER: {PLAYER}, just in time.$"

Goldenrod_RadioTower_P4_Reunion_Texto_5:
.string "DIRECTOR: Is that him?$"

Goldenrod_RadioTower_P4_Reunion_Texto_6:
	.string "ARCHER: That's right. {PLAYER} was\n"
	.string "the one who defeated LANCE in a\l"
	.string "POKÉMON battle, compelling him to\l"
	.string "relinquish his powers to prevent the\l"
	.string "truth from emerging.$"

Goldenrod_RadioTower_P4_Reunion_Texto_7:
	.string "DIRECTOR: Quite the impressive feat,\n"
	.string "sir, especially considering your age.\l"
	.string "But are you aware that in JOHTO, there\l"
	.string "are yet more TRAINERs who would put\l"
	.string "LANCE to shame? You know the saying:\l"
	.string "the nail that sticks up is the one to be\l"
	.string "hammered. The other DRAGON TAMERs\l"
	.string "don't give two HOOTHOOTs about glory\l"
	.string "the way LANCE does, but are more\l"
	.string "focused on attaining excellence in\l"
	.string "itself.$"

Goldenrod_RadioTower_P4_Reunion_Texto_8:
	.string "ARCHER: We are aware about that,\n"
	.string "DIRECTOR. {PLAYER} is actually here\l"
	.string "primarily to learn from those TRAINERs.$"

Goldenrod_RadioTower_P4_Reunion_Texto_9:
	.string "DIRECTOR: Then he had better hurry, as\n"
	.string "they are the last vestige of the old\l"
	.string "JOHTO that remains. I doubt the new\l"
	.string "standard of living in future JOHTO will\l"
	.string "allow for the emergence of TRAINERS\l"
	.string "like them.$"

Goldenrod_RadioTower_P4_Reunion_Texto_10:
	.string "ARCHER: We know that, and we wish to\n"
	.string "document the heights they reached\l"
	.string "before it's too late.$"

Goldenrod_RadioTower_P4_Reunion_Texto_11:
	.string "DIRECTOR: Hah! Oh, indeed. It's purely\n"
	.string "for academic interest, eh? Don't make\l"
	.string "me laugh, ARCHER. In exchange for your\l"
	.string "efforts, you'll get invaluable\l"
	.string "information about the limits a POKÉMON\l"
	.string "can reach.$"

Goldenrod_RadioTower_P4_Reunion_Texto_12:
	.string "ARCHER: The fair price for such work,\n"
	.string "don't you agree? We're not a charity\l"
	.string "organization, and I doubt you and your\l"
	.string "company are either.$"

Goldenrod_RadioTower_P4_Reunion_Texto_13:
	.string "DIRECTOR: What do you want?$"

Goldenrod_RadioTower_P4_Reunion_Texto_14:
	.string "ARCHER: The same thing you want:\n"
	.string "ensuring that another LANCE doesn't\l"
	.string "emerge and laying the groundwork for\l"
	.string "the union between KANTO and JOHTO. For\l"
	.string "that, we'll gather the most influential\l"
	.string "people from both regions in recent\l"
	.string "years, and we'll tell everyone the\l"
	.string "actions we'll take.$"

Goldenrod_RadioTower_P4_Reunion_Texto_15:
	.string "DIRECTOR: B-but right now, your\n"
	.string "organization is off the map in the eyes\l"
	.string "of the population.$"

Goldenrod_RadioTower_P4_Reunion_Texto_16:
	.string "ARCHER: That's exactly what GIOVANNI\n"
	.string "wanted. We have the power and the\l"
	.string "anonymity to pull the strings without\l"
	.string "anyone bothering us.$"

Goldenrod_RadioTower_P4_Reunion_Texto_17:
	.string "DIRECTOR: And how do I know that you\n"
	.string "won't do something worse than LANCE\l"
	.string "did?$"

Goldenrod_RadioTower_P4_Reunion_Texto_18:
	.string "ARCHER: You might not know it yet, but\n"
	.string "after holding the conference proposed\l"
	.string "by our LEADER, you'll have no doubt that\l"
	.string "we only want the best for both regions.\l"
	.string "We've long since learned that only\l"
	.string "mutual growth is the only business that\l"
	.string "works in the long run.$"

Goldenrod_RadioTower_P4_Reunion_Texto_19:
.string "DIRECTOR: {PAUSE 15}…{PAUSE 15} $"

Goldenrod_RadioTower_P4_Reunion_Texto_20:
	.string "DIRECTOR: You'll have that meeting. I\n"
	.string "will be in contact with GIOVANNI for the\l"
	.string "details of this. Thank you both for\l"
	.string "coming.$"

Goldenrod_RadioTower_P4_Reunion_Texto_21:
	.string "ARCHER: Delighted to be back in my\n"
	.string "region, DIRECTOR.$"

Goldenrod_RadioTower_P4_Reunion_Texto_22:
	.string "ARCHER: Excellent security detail here\n"
	.string "in the RADIO TOWER. I don't suppose\l"
	.string "you've heard, but SILPH had a similar\l"
	.string "one, just to be breached by some\l"
	.string "decade-old kid who'd climbed all the way\l"
	.string "to its PRESIDENT. All because he had a\l"
	.string "good POKÉMON team.$"

Goldenrod_RadioTower_P4_Reunion_Texto_23:
	.string "DIRECTOR: And what did you do to get\n"
	.string "rid of him?$"

Goldenrod_RadioTower_P4_Reunion_Texto_24:
	.string "ARCHER: Make him believe he won, so he\n"
	.string "would never know the truth.$"

Goldenrod_RadioTower_P4_Reunion_Texto_25:
.string "DIRECTOR: Interesting.$"

Goldenrod_RadioTower_P4_Reunion_Texto_26:
	.string "So you're going after the JOHTO GYM\n"
	.string "LEADERS? I must confess that I'm\l"
	.string "saddened by the transformation the\l"
	.string "GYMS will undergo in the next couple of\l"
	.string "years, but it's the price to pay for\l"
	.string "progress, I suppose. In GOLDENROD, we\l"
	.string "still have an interesting LEADER.\l"
	.string "Although they're going to restore the\l"
	.string "GYM. If you hurry, maybe you can face\l"
	.string "her before she leaves her position.$"

Goldenrod_RadioTower_P4_Reunion_Texto_27:
	.string "I hope to see you again in the great\n"
	.string "meeting, {PLAYER}. Keep exploring\l"
	.string "every corner of JOHTO.$"

Goldenrod_RadioTower_P4_Reunion_Move_1:
walk_down
face_right
step_end

Goldenrod_RadioTower_P4_Reunion_Move_2:
face_left
step_end

Goldenrod_RadioTower_P4_Reunion_Move_3:
face_down
step_end

Goldenrod_RadioTower_P4_Reunion_Move_4:
walk_down
step_end

Goldenrod_RadioTower_P4_Reunion_Move_5:
walk_down
walk_down
walk_down
walk_right
step_end

Goldenrod_RadioTower_P4_Reunion_Move_6:
emote_exclamation_mark
face_left
step_end

Goldenrod_RadioTower_P4_Reunion_Move_7:
face_up
step_end

Goldenrod_RadioTower_P4_Reunion_Move_8:
walk_right
walk_right
step_end

Goldenrod_RadioTower_P4_Reunion_Move_9:
face_left
step_end

Goldenrod_RadioTower_P4_Reunion_Move_10:
walk_down
step_end

Goldenrod_RadioTower_P4_Reunion_Move_11:
walk_left
step_end

Goldenrod_RadioTower_P4_Reunion_Move_12:
walk_left
face_down
step_end

Goldenrod_RadioTower_P4_Reunion_Move_13:
walk_in_place_down
step_end

Goldenrod_RadioTower_P4_Reunion_Move_14:
walk_in_place_up
step_end

Goldenrod_RadioTower_P4_Reunion_Move_15:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_in_place_right
step_end

Goldenrod_RadioTower_P4_Reunion_Move_16:
walk_up
walk_up
walk_up
walk_up
walk_right
walk_up
walk_up
step_end

Goldenrod_RadioTower_P4_Reunion_Move_17:
face_right
step_end

Goldenrod_RadioTower_P4_Reunion_Move_18:
walk_right
walk_up
walk_in_place_down
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra::
lock
playse SE_EXIT
clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
addobject 10
applymovement 10, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_2
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 10, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_3
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_3
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_1 MSGBOX_AUTOCLOSE
applymovement 10, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_4
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_3 MSGBOX_AUTOCLOSE
applymovement 10, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_5
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_4 MSGBOX_AUTOCLOSE
applymovement 10, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_1
applymovement 1, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_6
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_5 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_6 MSGBOX_AUTOCLOSE
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_7 MSGBOX_AUTOCLOSE
applymovement 10, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_8
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_7
waitmovement 0x0
applymovement 1, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_9
delay 15
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_10
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_11
waitmovement 0x0
applymovement 1, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_1
waitmovement 0x0
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_EON_TICKET
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_10.1 MSGBOX_DEFAULT
waitfanfare
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 10, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_12
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_9
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_11 MSGBOX_AUTOCLOSE
applymovement 10, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_13
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_14
waitmovement 0x0
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 11, 8, 0x338, TRUE
setmetatile 12, 8, 0x350, TRUE
setmetatile 11, 9, 0x26F, FALSE
setmetatile 12, 9, 0x358, TRUE
setmetatile 11, 10, 0x3A9, FALSE
setmetatile 12, 10, 0x360, TRUE
special DrawWholeMapView
delay 60
applymovement 10, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_1
waitmovement 0x0
playse SE_PIN
applymovement 10, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_3
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_3
waitmovement 0x0
delay 15
applymovement 10, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_16
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_15
waitmovement 0x0
msgbox Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_12 MSGBOX_AUTOCLOSE
playse SE_EXIT
applymovement 10, Goldenrod_RadioTower_P4_Encuentro_Andra_Move_5
waitmovement 0x0
setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
removeobject 10
setvar VAR_UNUSED_0x40F7, 152
release
end

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_10.1:
	.string "You obtained the ELITE PASS from the\n"
	.string "POLICE OFFICER!$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_1:
.string "ANDRA: {PLAYER}!\n"
	.string "You too?\l"
	.string "It's been a while!$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_2:
	.string "After OAK's downfall, GIOVANNI assigned\n"
	.string "me to HOENN to study ruins similar to\l"
	.string "those in SEVII ISLAND.$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_3:
	.string "I see that you've risen as well. We're not\n"
	.string "just part of the ELITE of TEAM ROCKET,\l"
	.string "{PLAYER}. We -are- TEAM ROCKET.$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_4:
	.string "Aside from us, it'll just be GIOVANNI\n"
	.string "and ARCHER at this meeting. The work\l"
	.string "we've put in and the skills we have to\l"
	.string "show for it took us right to the top. I'd\l"
	.string "say we can finally leverage our current\l"
	.string "positions to solve the mysteries of thi-$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_5:
	.string "You're CHIEF ADMIN. {PLAYER}, and\n"
	.string "CHIEF ADMIN. ANDRA from TEAM ROCKET,\l"
	.string "right?$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_6:
.string "ANDRA: Yes.$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_7:
	.string "You must come in now. The meeting is\n"
	.string "about to begin.$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_8:
.string "ANDRA: B-but…\n"
	.string "There's no one here.$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_9:
	.string "Did you really think that the most\n"
	.string "important meeting of the last three\l"
	.string "years would be in a place like this? Any\l"
	.string "ten-year-old kid could sneak into this\l"
	.string "office. A meeting of this magnitude\l"
	.string "requires maximum discretion and\l"
	.string "security. Take these.$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_10:
	.string "Now, interact with the computer in the\n"
	.string "corner. You'll be able to enter the true\l"
	.string "meeting room of RADIO TOWER.$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_11:
	.string "ANDRA: I don't know why this feels\n"
	.string "familiar to me…$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Texto_12:
	.string "ANDRA: Let's go, {PLAYER}! The most\n"
	.string "influential and powerful people from\l"
	.string "both regions will be here. TEAM ROCKET\l"
	.string "is going to change the course of\l"
	.string "history.$"

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_1:
face_down
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_2:
walk_in_place_up
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_3:
emote_exclamation_mark
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_4:
walk_in_place_down
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_5:
face_right
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_6:
face_up
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_7:
walk_down
walk_left
walk_down
walk_down
walk_down
walk_down
face_right
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_8:
walk_down
walk_down
walk_left
walk_down
walk_down
walk_down
face_right
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_9:
face_left
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_10:
walk_in_place_left
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_11:
walk_right
face_up
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_12:
walk_down
face_right
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_13:
walk_down
walk_right
walk_down
walk_down
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
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_up
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_14:
face_down
walk_in_place_down
walk_down
walk_down
walk_down
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
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
face_right
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_15:
walk_left
walk_down
walk_down
walk_down
walk_right
face_up
step_end

Goldenrod_RadioTower_P4_Encuentro_Andra_Move_16:
walk_left
walk_left
walk_down
walk_down
walk_right
face_down
step_end

RadioTower_PC::
compare VAR_UNUSED_0x40F7, 151
goto_if_gt RadioTower_Warp
msgbox RocketHideout_4F_PC_Texto_1 MSGBOX_AUTOCLOSE
release
end

RadioTower_Warp::
msgbox RocketHideout_4F_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 11, 8, 0x338, TRUE
setmetatile 12, 8, 0x350, TRUE
setmetatile 11, 9, 0x26F, FALSE
setmetatile 12, 9, 0x358, TRUE
setmetatile 11, 10, 0x3A9, FALSE
setmetatile 12, 10, 0x360, TRUE
special DrawWholeMapView
delay 60
release
end
