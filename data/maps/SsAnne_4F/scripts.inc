SsAnne_4F_MapScripts::
	.byte 0

SsAnne4F_1::
lock     
faceplayer     
msgbox SsAnne4F_Text_1, MSGBOX_DEFAULT
release     
end

SsAnne4F_Text_1:
.string "The party is going\n"
.string "well!$"



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
.string "We will make the time we have been given\n"
	.string "something unique, who cares how long it\l"
	.string "is?$"

SsAnne4F_4::
lock         
msgbox SsAnne4F_Text_4, MSGBOX_SIGN
release     
end

SsAnne4F_Text_4:
.string "Let's drink to everything we have lived\n"
	.string "for these long 70 years, and for all we\l"
	.string "still have left. Who would say that\l"
	.string "after all we have been through, we would\l"
	.string "be here sitting in 1996, with every\l"
	.string "luxury and convenience at our reach,\l"
	.string "and most importantly, being able to\l"
	.string "keep acting and dreaming.$"

SsAnne4F_5::
lock          
msgbox SsAnne4F_Text_5, MSGBOX_SIGN
release     
end

SsAnne4F_Text_5:
.string "Experiences are priceless, dear, there\n"
	.string "is not enough money in the world that\l"
	.string "could buy this moment, so let's take\l"
	.string "advantage of it.$"



SsAnne4F_6::
lock          
msgbox SsAnne4F_Text_6, MSGBOX_SIGN
release     
end

SsAnne4F_Text_6:
.string "Oh… Are you sure that we can afford\n"
	.string "this meal?$"



SsAnne4F_7::
lock          
msgbox SsAnne4F_Text_7, MSGBOX_SIGN
release     
end

SsAnne4F_Text_7:
.string "So you like to bet hard mister FUJITA, I\n"
	.string "will make you an offer that you will not\l"
	.string "reject…$"



SsAnne4F_8::
lock          
msgbox SsAnne4F_Text_8, MSGBOX_SIGN
release     
end

SsAnne4F_Text_8:
.string "Let's be clear, mister NOMURA, I can buy\n"
	.string "20% of your actions or I can buy all of\l"
	.string "them, or I can enter by myself to this\l"
	.string "business and bury you, it is your\l"
	.string "choice.$"




SsAnne4F_9::
lock     
faceplayer     
msgbox SsAnne4F_Text_9, MSGBOX_DEFAULT
release     
end

SsAnne4F_Text_9:
.string "Is all right, sir?$"



SsAnne4F_10::
lock          
msgbox SsAnne4F_Text_10, MSGBOX_SIGN
release     
end

SsAnne4F_Text_10:
.string "The best part about these kinds of\n"
	.string "parties is the food. I recommend you\l"
	.string "try salting SHARPEDO; it is exquisite,\l"
	.string "and you won't find it anywhere in KANTO.$"



SsAnne4F_11::
lock          
msgbox SsAnne4F_Text_11, MSGBOX_SIGN
release     
end

SsAnne4F_Text_11:
.string "Hurry up or the best plates will\n"
	.string "disappear! You have to be quick off the\l"
	.string "mark!$"



SsAnne4F_12::
end



SsAnne4F_13::
lock          
msgbox SsAnne4F_Text_13, MSGBOX_SIGN
release     
end

SsAnne4F_Text_13:
.string "From my point of view, TAUROS tail is the\n"
	.string "best plate here.$"



SsAnne4F_14::
lock          
msgbox SsAnne4F_Text_14, MSGBOX_SIGN
release     
end

SsAnne4F_Text_14:
.string "Oh, always the same. You already\n"
	.string "eat that all days at CELADON CITY\l"
	.string "restaurant, you should try new plates.\l"
	.string "The grilled HUNTAIL that I order is\l"
	.string "delicious for example. They say HOENN\l"
	.string "seas have the most diverse species and\l"
	.string "unparalleled flora and fauna.$"

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
.string "????: These parties are always so\n"
	.string "boring. I came here so I could fight\l"
	.string "against everyone's POKÉMON and I\l"
	.string "ended up finding the usual: RATATTA,\l"
	.string "PIDGEY, NIDORAN… Even the sailors have\l"
	.string "TENTACOOL as best! I feel scammed.$"

SsAnne_4F_Combate_Azul_text_2:
.string "You are the ROCKET that I gave a\n"
	.string "FOSSIL on MT.MOON. I won't ask you why\l"
	.string "someone like you is in a place like this,\l"
	.string "I guess that you entered in an\l"
	.string "Illegitimate way, but honestly I don't\l"
	.string "really care.$"

SsAnne_4F_Combate_Azul_text_3:
.string "On MT.MOON, I turned a blind eye to the\n"
	.string "mediocrity of you, ROCKETs, but you\l"
	.string "dared to give me moral lessons. You know\l"
	.string "what that means, don't you? It is time\l"
	.string "to see if you are just one more of the\l"
	.string "pile or if you have something to say! On\l"
	.string "guard, ROCKET!$"

SsAnne_4F_Combate_Azul_text_4:
	.string "Seriously, I just lost against a ROCKET?$"

SsAnne_4F_Combate_Azul_text_5:
.string "{PAUSE 20}…{PAUSE 20}\n"
	.string "{PAUSE 20}…{PAUSE 20}\l"
.string "So, you're not a simple ROCKET{PAUSE 20}…{PAUSE 20} a HIGH\l"
	.string "RANK GRUNT, you say? To me, you all look\l"
	.string "the same! Anyway, you're the only one\l"
	.string "who was able to defeat me besides that\l"
	.string "hick RED. I'll keep an eye on you from\l"
	.string "now on.$"

SsAnne_4F_Combate_Azul_text_6:
.string "????: Bah. I will take a look around for\n"
	.string "the cabins if someone else is a worthy\l"
	.string "opponent, but I doubt that.$"

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
