Viastren5_MapScripts::
	.byte 0

ViasTren5_2::
lock     
faceplayer     
msgbox ViasTren5_Text_2, MSGBOX_DEFAULT
release     
end

ViasTren5_Text_2:
	.string "The electric powers of that POKÉMON\n"
	.string "were unparalleled; I believe it's drawn\l"
	.string "to the magnetism of these tracks.$"



ViasTren5_6::
lock     
faceplayer     
msgbox ViasTren5_Text_6, MSGBOX_DEFAULT
release     
end

ViasTren5_Text_6:
	.string "We've passed CERULEAN. SAFFRON is right\n"
	.string "next!$"



ViasTren5_EventScript_Obrero::
	trainerbattle_single TRAINER_THALIA_2, ViasTren5_Text_ObreroIntro, ViasTren5_Text_ObreroDefeated
	msgbox ViasTren5_Text_ObreroPostBattle, MSGBOX_AUTOCLOSE
	end



ViasTren5_EventScript_Obrero2::
	trainerbattle_single TRAINER_THALIA_3, ViasTren5_Text_Obrero2Intro, ViasTren5_Text_Obrero2Defeated
	msgbox ViasTren5_Text_Obrero2PostBattle, MSGBOX_AUTOCLOSE
	end

ViasTren5_Combate_Atlas_Abajo::
lock
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
applymovement OBJ_EVENT_ID_PLAYER, ViasTren5_Combate_Atlas_Move_1
waitmovement 0x0
goto ViasTren5_Combate_Atlas

ViasTren5_Combate_Atlas_Arriba::
lock
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
applymovement OBJ_EVENT_ID_PLAYER, ViasTren5_Combate_Atlas_Move_1.1
waitmovement 0x0
goto ViasTren5_Combate_Atlas


ViasTren5_Combate_Atlas::
playse SE_PIN
applymovement 11, ViasTren5_Combate_Atlas_Move_2
waitmovement 0x0
applymovement 11, ViasTren5_Combate_Atlas_Move_3
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_1 MSGBOX_AUTOCLOSE
applymovement 11, ViasTren5_Combate_Atlas_Move_4
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_2 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
msgbox ViasTren5_Combate_Atlas_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, ViasTren5_Combate_Atlas_Move_5
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_4 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 11, ViasTren5_Combate_Atlas_Move_2
applymovement OBJ_EVENT_ID_PLAYER, ViasTren5_Combate_Atlas_Move_2
waitmovement 0x0
applymovement 11, ViasTren5_Combate_Atlas_Move_3
applymovement OBJ_EVENT_ID_PLAYER, ViasTren5_Combate_Atlas_Move_3
waitmovement 0x0
clearflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE
addobject 9
applymovement 9, ViasTren5_Combate_Atlas_Move_6
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_5 MSGBOX_AUTOCLOSE
applymovement 11, ViasTren5_Combate_Atlas_Move_12
applymovement 9, ViasTren5_Combate_Atlas_Move_7
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_6 MSGBOX_AUTOCLOSE
applymovement 9, ViasTren5_Combate_Atlas_Move_8
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_7 MSGBOX_AUTOCLOSE
applymovement 9, ViasTren5_Combate_Atlas_Move_9
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_8 MSGBOX_AUTOCLOSE
msgbox ViasTren5_Combate_Atlas_Texto_9 MSGBOX_AUTOCLOSE
applymovement 9, ViasTren5_Combate_Atlas_Move_10
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_10 MSGBOX_AUTOCLOSE
msgbox ViasTren5_Combate_Atlas_Texto_11 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ATLAS_2, ViasTren5_Combate_Atlas_Texto_12
delay 15
applymovement 9, ViasTren5_Combate_Atlas_Move_3
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_13 MSGBOX_AUTOCLOSE
applymovement 9, ViasTren5_Combate_Atlas_Move_10
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_14 MSGBOX_AUTOCLOSE
delay 15
applymovement 9, ViasTren5_Combate_Atlas_Move_10.1
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_14.1 MSGBOX_AUTOCLOSE
applymovement 9, ViasTren5_Combate_Atlas_Move_10.3
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_14.2 MSGBOX_AUTOCLOSE
applymovement 9, ViasTren5_Combate_Atlas_Move_10.2
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_14.3 MSGBOX_AUTOCLOSE
msgbox ViasTren5_Combate_Atlas_Texto_15 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE
fadescreen 1
delay 20
removeobject 9
fadescreen 0
delay 20
msgbox ViasTren5_Combate_Atlas_Texto_16 MSGBOX_AUTOCLOSE
delay 20
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
delay 20
setflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
removeobject 10
playse SE_M_FLY
msgbox ViasTren5_Combate_Atlas_Texto_17 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, ViasTren5_Combate_Atlas_Move_9
applymovement 11, ViasTren5_Combate_Atlas_Move_2
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_18 MSGBOX_AUTOCLOSE
msgbox ViasTren5_Combate_Atlas_Texto_19 MSGBOX_AUTOCLOSE
msgbox ViasTren5_Combate_Atlas_Texto_20 MSGBOX_AUTOCLOSE
msgbox ViasTren5_Combate_Atlas_Texto_21 MSGBOX_AUTOCLOSE
delay 30
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
applymovement 11, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
delay 20
msgbox ViasTren5_Combate_Atlas_Texto_22 MSGBOX_AUTOCLOSE
delay 20
msgbox ViasTren5_Combate_Atlas_Texto_23 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
applymovement 11, ViasTren5_Combate_Atlas_Move_11
waitmovement 0x0
msgbox ViasTren5_Combate_Atlas_Texto_24 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
msgbox ViasTren5_Combate_Atlas_Texto_25 MSGBOX_AUTOCLOSE
delay 15
msgbox ViasTren5_Combate_Atlas_Texto_26 MSGBOX_AUTOCLOSE
setflag FLAG_RECEIVED_SHOAL_SHELL_3
setvar VAR_UNUSED_0x40F7, 203
release
end

ViasTren5_Combate_Atlas_Move_12:
face_down
step_end

ViasTren5_Combate_Atlas_Move_11:
walk_down
face_right
step_end

ViasTren5_Combate_Atlas_Move_10:
walk_in_place_right
step_end

ViasTren5_Combate_Atlas_Move_10.1:
delay_8
face_up
delay_8
step_end

ViasTren5_Combate_Atlas_Move_10.2:
delay_8
walk_slow_left
delay_8
step_end

ViasTren5_Combate_Atlas_Move_10.3:
delay_8
face_left
delay_8
step_end

ViasTren5_Combate_Atlas_Move_8:
face_up
step_end

ViasTren5_Combate_Atlas_Move_9:
face_right
step_end

ViasTren5_Combate_Atlas_Move_7:
walk_slow_right
step_end

ViasTren5_Combate_Atlas_Move_6:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

ViasTren5_Combate_Atlas_Move_5:
walk_slow_right
walk_slow_right
step_end

ViasTren5_Combate_Atlas_Move_4:
walk_up
walk_left
walk_in_place_down
step_end

ViasTren5_Combate_Atlas_Move_3:
face_left
step_end

ViasTren5_Combate_Atlas_Move_2:
emote_exclamation_mark
step_end

ViasTren5_Combate_Atlas_Move_1:
walk_right
step_end

ViasTren5_Combate_Atlas_Move_1.1:
walk_down
walk_right
step_end

ViasTren5_Combate_Atlas_Texto_1:
	.string "{PLAYER}? Finally, you should catch it\n"
	.string "{PLAYER}, none of us can.$"

ViasTren5_Combate_Atlas_Texto_2:
	.string "It has developed a synergy with the\n"
	.string "technology used to build the tracks;\l"
	.string "it's as if it has integrated all that\l"
	.string "magnetism into its body, and now its\l"
	.string "powers have been amplified.$"

ViasTren5_Combate_Atlas_Texto_3:
	.string "Only you can stop it, and you must\n"
	.string "catch it. These tracks will continue to\l"
	.string "be at risk while that POKÉMON roams\l"
	.string "free.$"

ViasTren5_Combate_Atlas_Texto_4:
.string "????: Hold on!$"

ViasTren5_Combate_Atlas_Texto_5:
	.string "ARCHER: I'm glad to see you, {PLAYER}.\n"
	.string "You would wonder why I'm here.$"

ViasTren5_Combate_Atlas_Texto_6:
	.string "The II meeting on GOLDENROD is just\n"
	.string "around the corner, I came to tell you\l"
	.string "that, but also…$"

ViasTren5_Combate_Atlas_Texto_7:
	.string "I heard rumors about this POKÉMON, the\n"
	.string "last of the 3 PRIMAL BIRDS without a\l"
	.string "TRAINER…$"

ViasTren5_Combate_Atlas_Texto_8:
	.string "A POKÉMON like that would fit perfectly\n"
	.string "into my team, the perfect match for my\l"
	.string "HOUNDOOM and FERALIGATR… My duty and\l"
	.string "ambition as CHIEF ADMIN., just like\l"
	.string "yours, is to form the most ruthless\l"
	.string "team possible.$"

ViasTren5_Combate_Atlas_Texto_9:
	.string "Therefore, I challenge you to a battle\n"
	.string "right here, {PLAYER}. The winner will\l"
	.string "earn the right to face ZAPDOS-P and\l"
	.string "catch it.$"

ViasTren5_Combate_Atlas_Texto_10:
	.string "I expected nothing less from you. Just\n"
	.string "like ANDRA, your honor code prevents\l"
	.string "you from refusing a great battle when\l"
	.string "it's right in front of you.$"

ViasTren5_Combate_Atlas_Texto_11:
	.string "The winner will be able to unite\n"
	.string "technology and tradition like no other\l"
	.string "TRAINER has ever achieved before. Show\l"
	.string "me that you deserve that grandiose\l"
	.string "power!$"

ViasTren5_Combate_Atlas_Texto_12:
	.string "We have reached immense levels of power\n"
	.string "here; P-ZAPDOS will be impressed…$"

ViasTren5_Combate_Atlas_Texto_13:
	.string "ARCHER: Well… That's how it should be…\n"
	.string "ANDRA already told me, improving your\l"
	.string "POKÉMON team more and more isn't\l"
	.string "enough for you. Something more is\l"
	.string "needed to break that aura you've built\l"
	.string "around yours; I hope you never lose it.$"

ViasTren5_Combate_Atlas_Texto_14:
	.string "May this P-ZAPDOS accompany you on\n"
	.string "your eternal journey, {PLAYER}, I only\l"
	.string "hope you don't get too comfortable\l"
	.string "upon seeing such a tremendous POKÉMON\l"
	.string "under your command.$"

ViasTren5_Combate_Atlas_Texto_14.1:
	.string "Because… unlike justice, force is\n"
	.string "readily acknowledged and unquestioned.\l"
	.string "The pursuit of its rewards, as well as\l"
	.string "preventing others from obtaining them,\l"
	.string "is what truly propels us to betterment.$"

ViasTren5_Combate_Atlas_Texto_14.2:
	.string "You may have already guessed it, but\n"
	.string "ANDRA refuses to admit this. Her\l"
	.string "strength lies in boundless optimism and\l"
	.string "a strong sense of determination. She\l"
	.string "believes in herself and her POKÉMON like\l"
	.string "nobody else does, and trusts in the\l"
	.string "process. But all that has a biological…\l"
	.string "limit.$"

ViasTren5_Combate_Atlas_Texto_14.3:
	.string "Though it may sound harsh, you know it's\n"
	.string "always been like this, {PLAYER}.\l"
	.string "That's why we're all meeting up in\l"
	.string "GOLDENROD. We don't tolerate weak\l"
	.string "people here, and that's why… I can't\l"
	.string "imagine living any other way than\l"
	.string "constantly seeking that strength, even\l"
	.string "if it's artificial.$"

ViasTren5_Combate_Atlas_Texto_15:
	.string "I see you at RADIO TOWER. There is a lot\n"
	.string "to talk about.$"

ViasTren5_Combate_Atlas_Texto_16:
.string "…$"

ViasTren5_Combate_Atlas_Texto_17:
.string "(The P-ZAPDOS soared at great speed)$"

ViasTren5_Combate_Atlas_Texto_18:
.string "…$"

ViasTren5_Combate_Atlas_Texto_19:
	.string "That's a unique moment in history!$"

ViasTren5_Combate_Atlas_Texto_20:
	.string "For the first time and forever,\n"
	.string "GOLDENROD and SAFFRON are linked.$"

ViasTren5_Combate_Atlas_Texto_21:
	.string "This was bound to happen, sooner or\n"
	.string "later. Neither the BIKERS nor the KANTO\l"
	.string "UNDERGROUND PATHS, which will be\l"
	.string "closing soon, nor ZAPD…$"

ViasTren5_Combate_Atlas_Texto_22:
.string "…$"

ViasTren5_Combate_Atlas_Texto_23:
	.string "Yes?… No… How is that possible? That\n"
	.string "shouldn't happen! Stop it now!$"

ViasTren5_Combate_Atlas_Texto_24:
	.string "{PLAYER}... it seems P-ZAPDOS has\n"
	.string "flown towards the revamped POWER\l"
	.string "PLANT, it's absorbing all the\l"
	.string "electricity from the plant, if it keeps\l"
	.string "up like this, we'll run out of power to\l"
	.string "feed the MAGNETRAIN.$"

ViasTren5_Combate_Atlas_Texto_25:
	.string "You must stop it once and for all, until\n"
	.string "it's captured, we won't be able to relax.$"

ViasTren5_Combate_Atlas_Texto_26:
.string "I trust you.$"


ViasTren5_Presidente_Trenes::
lock
faceplayer
msgbox ViasTren5_Combate_Atlas_Texto_26 MSGBOX_AUTOCLOSE
release
end
