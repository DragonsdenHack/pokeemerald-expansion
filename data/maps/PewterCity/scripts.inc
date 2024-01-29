PewterCity_MapScripts::
	.byte 0

PewterCity1::
end

PewterCity2::
lock     
faceplayer     
msgbox PewterCity_Text1, MSGBOX_DEFAULT
release     
end

PewterCity_Text1:
	.string "I don't want to deal with you, bastard!\n"
	.string "Do not you dare even make eye contact\l"
	.string "with me!$"

PewterCity3::
end


PewterCity4::
lock     
faceplayer     
msgbox PewterCity_Text4, MSGBOX_DEFAULT
release     
end

PewterCity_Text4:
	.string "You are so lucky, not long ago this\n"
	.string "place was full of police. They'll catch\l"
	.string "you next time!$"


PewterCity5::
lock     
faceplayer     
msgbox PewterCity_Text5, MSGBOX_DEFAULT
release     
end

PewterCity_Text5:
	.string "CLEFAIRY came from the moon. That's\n"
	.string "what the rumor is. They appeared after\l"
	.string "MOON STONES fell on MT. MOON.$"


PewterCity6::
end



PewterCityDocumento_100::
msgbox PewterCityDocumento_Text_100, MSGBOX_SIGN   
end

PewterCityDocumento_Text_100:
.string "PEWTER MUSEUM OF SCIENCE$"




PewterCityDocumento_101::
msgbox PewterCityDocumento_Text_101, MSGBOX_SIGN   
end

PewterCityDocumento_Text_101:
.string "PEWTER CITY POKéMON GYM\n"
    .string "LEADER: BROCK\l"
    .string "The Rock-Solid POKéMON TRAINER!$"



PewterCityDocumento_102::
msgbox PewterCityDocumento_Text_102, MSGBOX_SIGN   
end

PewterCityDocumento_Text_102:
.string "NOTICE!\p"
    .string "Thieves have been stealing POKéMON\n"
    .string "fossils from MT. MOON.\p"
    .string "Please call the PEWTER POLICE if\n"
    .string "you have any information.$"



PewterCityDocumento_103::
msgbox PewterCityDocumento_Text_103, MSGBOX_SIGN   
end

PewterCityDocumento_Text_103:
	.string "PEWTER CITY\n"
    .string "A Stone Gray City$"



PewterCityDocumento_104::
msgbox PewterCityDocumento_Text_104, MSGBOX_SIGN   
end

PewterCityDocumento_Text_104:
.string "TRAINER TIPS\p"
    .string "All POKéMON that appear in battle,\n"
    .string "however briefly, earn EXP Points.$"



PewterCity_3::
lock
faceplayer
msgbox PewterCity_3_Text_3YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq PewterCity_3No
msgbox PewterCity_3_Text_3Yes, MSGBOX_DEFAULT
release
end



PewterCity_3_Text_3YesNo:
.string "Psssst!\n"
    .string "Do you know what I'm doing?$"


PewterCity_3No::
msgbox PewterCity_3_Text_3No, MSGBOX_DEFAULT
release
end


PewterCity_3_Text_3Yes:
.string "That's right!\n"
    .string "It's hard work!$"



PewterCity_3_Text_3No:
.string "I'm spraying REPEL to keep wild\n"
    .string "POKéMON out of my garden!$"

PewterCity_Petrel_2::
lockall
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1
waitmovement 0
playse SE_PIN
applymovement 6, PewterCity_Petrel_Move_2
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1.1
goto PewterCity_Petrel

PewterCity_Petrel_3::
lockall
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1
waitmovement 0
playse SE_PIN
applymovement 6, PewterCity_Petrel_Move_2
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1.2
goto PewterCity_Petrel

PewterCity_Petrel_4::
lockall
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1
waitmovement 0
playse SE_PIN
applymovement 6, PewterCity_Petrel_Move_2
goto PewterCity_Petrel

PewterCity_Petrel_5::
lockall
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1
waitmovement 0
playse SE_PIN
applymovement 6, PewterCity_Petrel_Move_2
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1.3
waitmovement 0x0
goto PewterCity_Petrel

PewterCity_Petrel::
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1
waitmovement 0
delay 20
msgbox PewterCity_Petrel_Texto_1 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_3
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_2 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_4
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_3 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_5
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Petrel_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Petrel_Texto_5 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_6
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_6 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_4
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_7 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_7
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Petrel_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Petrel_Texto_9 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_7
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_10 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_8
waitmovement 0x0
setflag FLAG_NUEVA_839
setflag FLAG_HIDE_FANCLUB_BOY
removeobject 6
setvar VAR_UNUSED_0x40F7, 57
release
end

PewterCity_Petrel_Texto_1:
	.string "PETREL: What a surprise to see you\n"
	.string "around here, {PLAYER}!$"

PewterCity_Petrel_Texto_2:
	.string "So an important mission at PALLET TOWN,\n"
	.string "you are tireless, eh? GIOVANNI already\l"
	.string "told me that you are doing an excellent\l"
	.string "job there.$"

PewterCity_Petrel_Texto_3:
.string "... ... ... ... ... ... ...$"

PewterCity_Petrel_Texto_4:
.string "PETREL: -NOTICE!\p"
    .string "Thieves have been stealing POKéMON\n"
    .string "fossils from MT. MOON.\p"
    .string "Please call the PEWTER POLICE if\n"
    .string "you have any information-.$"

PewterCity_Petrel_Texto_5:
	.string "Obviously, with -thieves-, it refers to\n"
	.string "our organization, it's funny, I enjoy\l"
	.string "the double standard in this region., I\l"
	.string "love the double standard in this region.$"

PewterCity_Petrel_Texto_6:
	.string "If a scientist takes a FOSSIL at\n"
	.string "MT.MOON, no problem, it is for his\l"
	.string "investigation.$"

PewterCity_Petrel_Texto_7:
	.string "If a couple of spoiled kids clean out\n"
	.string "the FOSSIL cave, no one cares a bit\l"
	.string "because, of course, they can't be left\l"
	.string "without completing their POKÉDEX,\l"
	.string "adding one more to their -collection-,\l"
	.string "as if POKÉMON were interchangeable\l"
	.string "trading cards.$"

PewterCity_Petrel_Texto_8:
	.string "When a private group like us decides to\n"
	.string "gather FOSSILS to satisfy a demand\l"
	.string "from the population, we are thieves, as\l"
	.string "if those FOSSILS belonged to someone\l"
	.string "when any idiot can take them at any\l"
	.string "moment if they find them first.$"

PewterCity_Petrel_Texto_9:
	.string "Talking about FOSSILS, I've come here\n"
	.string "to visit an old friend who is fortunate\l"
	.string "enough to be one of the big shots at\l"
	.string "the SCIENCE MUSEUM of PEWTER CITY, it\l"
	.string "seems they have found a specimen of\l"
	.string "OLD AMBER, which contains the most\l"
	.string "powerful and valuable FOSSIL in our\l"
	.string "region. I believe that with the right\l"
	.string "negotiation, I can persuade him to lend\l"
	.string "it to us for research, we have\l"
	.string "developed a cloning system that could\l"
	.string "replicate that OLD AMBER at a lower\l"
	.string "cost than its market price, so I can't\l"
	.string "let this opportunity pass.$"

PewterCity_Petrel_Texto_10:
	.string "If you're up for it, you're invited to\n"
	.string "that meeting, we'll be in the back booth\l"
	.string "behind the museum officially open to\l"
	.string "the public, I'll be waiting for you there\l"
	.string "if you decide to come.$"

PewterCity_Petrel_Move_1:
walk_in_place_left
step_end

PewterCity_Petrel_Move_1.1:
walk_down
walk_down
walk_in_place_left
step_end

PewterCity_Petrel_Move_1.2:
walk_down
walk_in_place_left
step_end

PewterCity_Petrel_Move_1.3:
walk_up
walk_in_place_left
step_end

PewterCity_Petrel_Move_2:
emote_exclamation_mark
walk_in_place_right
step_end

PewterCity_Petrel_Move_3:
walk_right
walk_right
walk_right
step_end

PewterCity_Petrel_Move_4:
face_up
step_end

PewterCity_Petrel_Move_5:
walk_left
walk_in_place_up
step_end

PewterCity_Petrel_Move_6:
walk_right
walk_in_place_right
step_end

PewterCity_Petrel_Move_7:
walk_in_place_up
walk_in_place_right
step_end

PewterCity_Petrel_Move_8:
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

PewterCity_Ayuda::
lock
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Ayuda_Move_1
waitmovement 0x0
msgbox PewterCity_Ayuda_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Ayuda_Move_2
waitmovement 0x0
release
end

PewterCity_Ayuda_Move_2:
walk_slow_down
step_end

PewterCity_Ayuda_Move_1:
walk_in_place_up
step_end



PewterCity_Ayuda_Texto_1:
	.string "(I should assist to PETRELs meeting at\n"
	.string "the other stand)$"
