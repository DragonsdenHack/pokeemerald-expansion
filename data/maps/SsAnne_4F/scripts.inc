SsAnne_4F_MapScripts::
	.byte 0

SsAnne4F_1::
lock     
faceplayer     
msgbox SsAnne4F_Text_1, MSGBOX_DEFAULT
release     
end

SsAnne4F_Text_1:
.string "The party's a\n"
.string "total success!$"



SsAnne4F_2::
lock     
faceplayer     
msgbox SsAnne4F_Text_2, MSGBOX_DEFAULT
release     
end

SsAnne4F_Text_2:
.string "The party is going\n"
.string "well!$"



SsAnne4F_3::
lock         
msgbox SsAnne4F_Text_3, MSGBOX_SIGN
release     
end

SsAnne4F_Text_3:
	.string "We'll make our allotted time something\n"
	.string "unique. Who cares how long it is?$"

SsAnne4F_4::
lock         
msgbox SsAnne4F_Text_4, MSGBOX_SIGN
release     
end

SsAnne4F_Text_4:
	.string "A toast! To everything we've\n"
	.string "experienced over these long 70 years,\l"
	.string "and to everything that still lies ahead.\l"
	.string "Who would have thought that after\l"
	.string "everything we've been through, we'd be\l"
	.string "sitting here in 1996, with all this\l"
	.string "luxury and all these opportunities at\l"
	.string "our fingertips? And most importantly -\l"
	.string "the ability to keep on living and\l"
	.string "dreaming!$"

SsAnne4F_5::
lock          
msgbox SsAnne4F_Text_5, MSGBOX_SIGN
release     
end

SsAnne4F_Text_5:
	.string "Experiences are priceless, my dear.\n"
	.string "There isn't any amount of money in the\l"
	.string "world that could buy the value of this\l"
	.string "moment, so let's make the most of it.$"



SsAnne4F_6::
lock          
msgbox SsAnne4F_Text_6, MSGBOX_SIGN
release     
end

SsAnne4F_Text_6:
.string "Oh… Are you sure we\n"
	.string "can afford this meal?$"



SsAnne4F_7::
lock          
msgbox SsAnne4F_Text_7, MSGBOX_SIGN
release     
end

SsAnne4F_Text_7:
	.string "So, you like to make bold bets, Mr.\n"
	.string "FUJITA. I'll make you an offer you can't\l"
	.string "refuse…$"



SsAnne4F_8::
lock          
msgbox SsAnne4F_Text_8, MSGBOX_SIGN
release     
end

SsAnne4F_Text_8:
	.string "Let us be perfectly clear, Mr. NOMURA. I\n"
	.string "can buy 20% of your shares or I can buy\l"
	.string "all of them. Or I can enter this\l"
	.string "business myself and bury you. The\l"
	.string "choice is yours.$"




SsAnne4F_9::
lock     
faceplayer     
msgbox SsAnne4F_Text_9, MSGBOX_DEFAULT
release     
end

SsAnne4F_Text_9:
.string "Is everything all right, sir?$"



SsAnne4F_10::
lock          
msgbox SsAnne4F_Text_10, MSGBOX_SIGN
release     
end

SsAnne4F_Text_10:
	.string "The best thing about this kind of party\n"
	.string "is the food. I highly recommend the\l"
	.string "salted SHARPEDO - it's exquisite, and\l"
	.string "you won't find it anywhere else in KANTO!$"



SsAnne4F_11::
lock          
msgbox SsAnne4F_Text_11, MSGBOX_SIGN
release     
end

SsAnne4F_Text_11:
.string "Hurry up, or the best\n"
	.string "dishes will be gone!\l"
	.string "You snooze, you lose!$"



SsAnne4F_12::
end



SsAnne4F_13::
lock          
msgbox SsAnne4F_Text_13, MSGBOX_SIGN
release     
end

SsAnne4F_Text_13:
	.string "In my opinion, the TAUROS tail stew is\n"
	.string "the best dish there is.$"



SsAnne4F_14::
lock          
msgbox SsAnne4F_Text_14, MSGBOX_SIGN
release     
end

SsAnne4F_Text_14:
	.string "Oh, you're always the same. You eat that\n"
	.string "same meal every day at the restaurant\l"
	.string "in CELADON. You should take this\l"
	.string "opportunity to try something new! The\l"
	.string "grilled HUNTAIL I ordered is delicious,\l"
	.string "for example. They say the seas of HOENN\l"
	.string "have the most diverse species, and\l"
	.string "unparalleled flora and fauna!$"

SsAnne_4F_Combate_Azul::
msgbox SsAnne_4F_Combate_Azul_text_1 MSGBOX_DEFAULT
delay 15
playse SE_PIN
applymovement 12, SsAnne_4F_Combate_Azul_move1
waitmovement 0x0
msgbox SsAnne_4F_Combate_Azul_text_2 MSGBOX_DEFAULT
applymovement 12, SsAnne_4F_Combate_Azul_move2
waitmovement 0x0
playse 527
msgbox SsAnne_4F_Combate_Azul_text_3 MSGBOX_DEFAULT
trainerbattle_no_intro TRAINER_AZUL_1, SsAnne_4F_Combate_Azul_text_4
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_4F_Combate_Azul_move3
waitmovement 0x0
msgbox SsAnne_4F_Combate_Azul_text_5 MSGBOX_AUTOCLOSE
applymovement 12, SsAnne_4F_Combate_Azul_move3
waitmovement 0x0
msgbox SsAnne_4F_Combate_Azul_text_6 MSGBOX_AUTOCLOSE
playbgm 528, FALSE
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_4F_Combate_Azul_move4
waitmovement 0x0
applymovement 12, SsAnne_4F_Combate_Azul_move5
waitmovement 0x0
playse SE_EXIT
waitse
setflag FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE
removeobject 12
fadedefaultbgm
release
end

SsAnne_4F_Combate_Azul_text_1:
	.string "????: These parties always end up being\n"
	.string "a drag. I came here to battle Pokémon\l"
	.string "from all over the world, but all I find\l"
	.string "are the same old PIDGEY, RATTATA, and\l"
	.string "NIDORAN. Even the so-called sailors\l"
	.string "from the SS ANNE only ever bring out\l"
	.string "TENTACOOL! This is a scam.$"

SsAnne_4F_Combate_Azul_text_2:
	.string "So, you're the ROCKET I handed that\n"
	.string "FOSSIL to on MT. MOON. I won't bother\l"
	.string "asking how someone like you managed to\l"
	.string "get into a place like this - I can easily\l"
	.string "guess you sneaked in somehow.\l"
	.string "Honestly, I couldn't care less.$"

SsAnne_4F_Combate_Azul_text_3:
	.string "On MT. MOON, I turned a blind eye to the\n"
	.string "mediocrity of you ROCKETs, and you had\l"
	.string "the audacity to lecture me on morality.\l"
	.string "Do you even realize what that means?\l"
	.string "Let's see if you're just another\l"
	.string "worthless grunt or if you actually have\l"
	.string "something worthwhile to show. Get\l"
	.string "ready, ROCKET!$"

SsAnne_4F_Combate_Azul_text_4:
	.string "…Did I seriously just lose to a ROCKET?$"

SsAnne_4F_Combate_Azul_text_5:
.string "{PAUSE 20}…{PAUSE 20}\n"
	.string "{PAUSE 20}…{PAUSE 20}\l"
	.string "So, you're not just another ROCKET\l"
	.string "grunt… High-ranking, are you? Honestly,\l"
	.string "you all look the same to me! But I'll give\l"
	.string "you this - you're the only one who's\l"
	.string "managed to defeat me besides that\l"
	.string "backwoods bumpkin, RED. I suppose I'll\l"
	.string "have to keep an eye on you from now on.$"

SsAnne_4F_Combate_Azul_text_6:
	.string "????: Bah. I suppose I'll wander around\n"
	.string "the cabins and see if anyone else here\l"
	.string "can manage to give me a remotely\l"
	.string "interesting battle - though I seriously\l"
	.string "doubt it.$"

SsAnne_4F_Combate_Azul_move1:
emote_exclamation_mark
face_down
step_end

SsAnne_4F_Combate_Azul_move2:
walk_in_place_right
walk_in_place_down
step_end

SsAnne_4F_Combate_Azul_move3:
face_up
step_end

SsAnne_4F_Combate_Azul_move4:
walk_left
walk_in_place_right
step_end

SsAnne_4F_Combate_Azul_move5:
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
step_end
