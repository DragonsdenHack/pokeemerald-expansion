Azalea_House1_MapScripts::
	.byte 0

AzaleaHouse1_1::
lock     
faceplayer     
msgbox AzaleaHouse1_Text_1, MSGBOX_DEFAULT
release     
end

AzaleaHouse1_Text_1:
	.string "Recently, someone from SILPH came by,\n"
	.string "all dressed up. He spent quite some time\l"
	.string "at KURT's house. I think they're\l"
	.string "interested in the variety of POKÉ BALLS\l"
	.string "that can be made with APRICORNS.$"



AzaleaHouse1_2::
lock     
faceplayer     
msgbox AzaleaHouse1_Text_2, MSGBOX_DEFAULT
release     
end

AzaleaHouse1_Text_2:
	.string "In the past, everyone used homemade\n"
	.string "APRICORN-based POKÉ BALLS to catch\l"
	.string "POKÉMON. KURT has already said that\l"
	.string "soon, he'll leave the GYM to focus on\l"
	.string "elaborating APRICORNS.$"


Azalea_House1_Anciano::
lock
faceplayer
compare VAR_FORTREE_CITY_STATE, 0
goto_if_eq AzaleaHouse1_1
compare VAR_FORTREE_CITY_STATE, 8
goto_if_gt Azalea_House1_Anciano_2
msgbox Azalea_House1_Anciano_Texto_1 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox Azalea_House1_Anciano_Texto_2 MSGBOX_DEFAULT
givemon SPECIES_MADAAMU, 70, ITEM_NONE
waitfanfare
msgbox Azalea_House1_Anciano_Texto_3 MSGBOX_AUTOCLOSE
msgbox Azalea_House1_Anciano_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_FORTREE_CITY_STATE, 9
release
end

Azalea_House1_Anciano_2::
msgbox Azalea_House1_Anciano_Texto_5 MSGBOX_AUTOCLOSE
release
end

Azalea_House1_Anciano_Texto_1:
	.string "We'll never forget what you've done for\n"
	.string "us. I want you to have this POKÉMON.$"

Azalea_House1_Anciano_Texto_2:
.string "YOU OBTAINED A LV.70 MADAAMU!$"

Azalea_House1_Anciano_Texto_3:
	.string "It's one of those ancient POKÉMON\n"
	.string "native to old rural JOHTO. Nowadays,\l"
	.string "they're extinct in the wild. We know it's\l"
	.string "the evolution of FARFETCH'D, but no one\l"
	.string "has managed to obtain one from it.$"

Azalea_House1_Anciano_Texto_4:
	.string "It's a key part of our secret\n"
	.string "CHARCOAL-making process, but don't\l"
	.string "fret, we still have my wife's MADAAMU.\l"
	.string "Just make sure you take good care of\l"
	.string "mine; its destructive power is insane.$"

Azalea_House1_Anciano_Texto_5:
	.string "Your actions have provided us with\n"
	.string "peace in this world of constant change\l"
	.string "and instability. We will always remember\l"
	.string "your kindness.$"


Azalea_House1_Anciana::
lock
faceplayer
compare VAR_FORTREE_CITY_STATE, 0
goto_if_eq AzaleaHouse1_2
msgbox Azalea_House1_Anciana_Texto_1 MSGBOX_AUTOCLOSE
release
end

Azalea_House1_Anciana_Texto_1:
	.string "Your contribution ensures the essence\n"
	.string "of this noble art. It won't be\l"
	.string "overshadowed by the new; instead, it\l"
	.string "will be integrated.$"


Azalea_House1_Activacion_Sotano::
compare VAR_FORTREE_CITY_STATE, 2
goto_if_gt Azalea_House1_Activacion_Sotano_3
compare VAR_FORTREE_CITY_STATE, 1
goto_if_gt Azalea_House1_Activacion_Sotano_2
msgbox Azalea_House1_Activacion_Sotano_Texto_1.1 MSGBOX_AUTOCLOSE
release
end

Azalea_House1_Activacion_Sotano_3::
msgbox Azalea_House1_Activacion_Sotano_Texto_1.3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Azalea_House1_Activacion_Sotano_3_No
delay 20
playse SE_ICE_CRACK
delay 40
playse SE_UNLOCK
setmetatile 1, 0, 0x13A, TRUE
setmetatile 2, 0, 0x13B, TRUE
setmetatile 3, 0, 0x13C, FALSE
setmetatile 3, 1, 0x144, FALSE
setmetatile 2, 1, 0x143, TRUE
setmetatile 1, 1, 0x142, TRUE
special DrawWholeMapView
release
end

Azalea_House1_Activacion_Sotano_Texto_1.3:
.string "Would you like to enter the secret basement?$"

Azalea_House1_Activacion_Sotano_3_No::
release
end


Azalea_House1_Activacion_Sotano_2::
msgbox Azalea_House1_Activacion_Sotano_Texto_1.2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Azalea_House1_Activacion_Sotano_Move_1
applymovement 3, Azalea_House1_Activacion_Sotano_Move_2
applymovement 4, Azalea_House1_Activacion_Sotano_Move_3
waitmovement 0x0
msgbox Azalea_House1_Activacion_Sotano_Texto_1 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_ROCKET
applymovement 3, Azalea_House1_Activacion_Sotano_Move_4
waitmovement 0x0
msgbox Azalea_House1_Activacion_Sotano_Texto_2 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_116, Azalea_House1_Activacion_Sotano_Texto_3
msgbox Azalea_House1_Activacion_Sotano_Texto_4 MSGBOX_AUTOCLOSE
msgbox Azalea_House1_Activacion_Sotano_Texto_5 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Azalea_House1_Activacion_Sotano_Move_3
waitmovement 0x0
playse SE_ICE_CRACK
msgbox Azalea_House1_Activacion_Sotano_Texto_6 MSGBOX_AUTOCLOSE
playse SE_UNLOCK
setmetatile 1, 0, 0x13A, TRUE
setmetatile 2, 0, 0x13B, TRUE
setmetatile 3, 0, 0x13C, FALSE
setmetatile 3, 1, 0x144, FALSE
setmetatile 2, 1, 0x143, TRUE
setmetatile 1, 1, 0x142, TRUE
special DrawWholeMapView
playse SE_PIN
applymovement 3, Azalea_House1_Activacion_Sotano_Move_2
applymovement 4, Azalea_House1_Activacion_Sotano_Move_2
waitmovement 0x0
msgbox Azalea_House1_Activacion_Sotano_Texto_7 MSGBOX_AUTOCLOSE
applymovement 3, Azalea_House1_Activacion_Sotano_Move_5
waitmovement 0x0
msgbox Azalea_House1_Activacion_Sotano_Texto_8 MSGBOX_AUTOCLOSE
msgbox Azalea_House1_Activacion_Sotano_Texto_9 MSGBOX_AUTOCLOSE
applymovement 3, Azalea_House1_Activacion_Sotano_Move_5
waitmovement 0x0
msgbox Azalea_House1_Activacion_Sotano_Texto_10 MSGBOX_AUTOCLOSE
setvar VAR_FORTREE_CITY_STATE, 3
release
end

Azalea_House1_Activacion_Sotano_Move_5:
walk_in_place_up
step_end


Azalea_House1_Activacion_Sotano_Move_4:
walk_up
step_end

Azalea_House1_Activacion_Sotano_Move_1:
face_down
step_end

Azalea_House1_Activacion_Sotano_Move_2:
face_up
emote_exclamation_mark
step_end

Azalea_House1_Activacion_Sotano_Move_3:
face_up
step_end


Azalea_House1_Activacion_Sotano_Texto_1.2:
	.string "(It looks like the painting the old man\n"
	.string "mentioned{PAUSE 15}…{PAUSE 15} There's a secret button\l"
	.string "behind it. Do you want to press it…?)$"

Azalea_House1_Activacion_Sotano_Texto_1.1:
	.string "(There's something unusual about this\n"
	.string "painting. It doesn't seem like an\l"
	.string "ordinary one…)$"

Azalea_House1_Activacion_Sotano_Texto_1:
	.string "Hey, you! What are you doing?$"

Azalea_House1_Activacion_Sotano_Texto_2:
	.string "First, you enter someone else's\n"
	.string "property, and then you try to rob us?\l"
	.string "There is no forgiveness for you!$"

Azalea_House1_Activacion_Sotano_Texto_3:
.string "You're not a common TRAINER!$"

Azalea_House1_Activacion_Sotano_Texto_4:
	.string "Can I at least know why you're so\n"
	.string "insistent? There's nothing here! Can't\l"
	.string "you see?$"

Azalea_House1_Activacion_Sotano_Texto_5:
	.string "What are you trying to prove with this?\n"
	.string "Yes, you and your team are strong. What\l"
	.string "does it matte…?$"

Azalea_House1_Activacion_Sotano_Texto_6:
.string "({PLAYER} PRESSED THE SECRET BUTTON)$"

Azalea_House1_Activacion_Sotano_Texto_7:
	.string "Grrrrr{PAUSE 15}…{PAUSE 15} Damn it, you knew it from the\n"
	.string "beginning.$"

Azalea_House1_Activacion_Sotano_Texto_8:
	.string "I don't know how those old folks\n"
	.string "managed to contact you, but it doesn't\l"
	.string "matter who you are.$"

Azalea_House1_Activacion_Sotano_Texto_9:
	.string "We've completely rebuilt the small\n"
	.string "basement where they used to forge the\l"
	.string "CHARCOAL. Now, it's a large underground\l"
	.string "ship that will produce the mineral on an\l"
	.string "industrial scale.$"

Azalea_House1_Activacion_Sotano_Texto_10:
	.string "Be glad! We'll supply the entire region.\n"
	.string "Whether you like it or not!$"

Azalea_House1_Primer_Empresario::
compare VAR_FORTREE_CITY_STATE, 2
goto_if_gt Azalea_House1_Primer_Empresario_2
msgbox Azalea_House1_Primer_Empresario_Texto_1 MSGBOX_AUTOCLOSE
release
end

Azalea_House1_Primer_Empresario_2::
lock
faceplayer
msgbox Azalea_House1_Primer_Empresario_Texto_2 MSGBOX_AUTOCLOSE
release
end

Azalea_House1_Primer_Empresario_Texto_1:
	.string "Everything's signed. Officially, this\n"
	.string "place belongs to us.$"

Azalea_House1_Primer_Empresario_Texto_2:
	.string "Step inside, and you'll find yourself as\n"
	.string "part of the next batch of stock. You've\l"
	.string "been warned.$"



Azalea_House1_Segundo_Empresario::
compare VAR_FORTREE_CITY_STATE, 2
goto_if_gt Azalea_House1_Segundo_Empresario_2
msgbox Azalea_House1_Segundo_Empresario_Texto_1 MSGBOX_AUTOCLOSE
release
end

Azalea_House1_Segundo_Empresario_2::
lock
faceplayer
msgbox Azalea_House1_Segundo_Empresario_Texto_2 MSGBOX_AUTOCLOSE
release
end

Azalea_House1_Segundo_Empresario_Texto_1:
	.string "We'll be raking in millions down here.\n"
	.string "Pretty fortunate of us to have that\l"
	.string "teensy legal loophole under our belts.$"

Azalea_House1_Segundo_Empresario_Texto_2:
	.string "Don't get on our BOSS's bad side. One\n"
	.string "slip-up, and you'll find yourself in hot\l"
	.string "water with all your POKÉMON right\l"
	.string "behind you.$"

