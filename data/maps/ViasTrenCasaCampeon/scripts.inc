ViasTrenCasaCampeon_MapScripts::
	.byte 0


ViasTrenCasaCampeon_Agatha::
lock
faceplayer
compare VAR_SECRET_BASE_HIGH_TV_FLAGS, 6
goto_if_gt ViasTrenCasaCampeon_Agatha_5
compare VAR_SECRET_BASE_HIGH_TV_FLAGS, 5
goto_if_gt ViasTrenCasaCampeon_Agatha_4
compare VAR_SECRET_BASE_HIGH_TV_FLAGS, 3
goto_if_gt ViasTrenCasaCampeon_Agatha_2
msgbox ViasTrenCasaCampeon_Agatha_Texto_1 MSGBOX_AUTOCLOSE
msgbox ViasTrenCasaCampeon_Agatha_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox ViasTrenCasaCampeon_Agatha_Texto_3 MSGBOX_AUTOCLOSE
msgbox ViasTrenCasaCampeon_Agatha_Texto_4 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, ViasTrenCasaCampeon_Agatha_Move_1
waitmovement 0x0
msgbox ViasTrenCasaCampeon_Agatha_Texto_5 MSGBOX_AUTOCLOSE
setvar VAR_SECRET_BASE_HIGH_TV_FLAGS, 4
release
end

ViasTrenCasaCampeon_Agatha_Move_1:
walk_in_place_left
face_player
step_end

ViasTrenCasaCampeon_Agatha_2::
msgbox ViasTrenCasaCampeon_Agatha_Texto_5 MSGBOX_AUTOCLOSE
release
end

ViasTrenCasaCampeon_Agatha_4::
msgbox ViasTrenCasaCampeon_Agatha_Texto_7 MSGBOX_AUTOCLOSE
release
end

ViasTrenCasaCampeon_Agatha_5::
msgbox ViasTrenCasaCampeon_Agatha_Texto_8 MSGBOX_AUTOCLOSE
release
end

ViasTrenCasaCampeon_Agatha_Texto_1:
	.string "AGATHA: Oh{PAUSE 15}…{PAUSE 15} {PLAYER}, what a surprise\n"
	.string "to see you here. Seems like there's\l"
	.string "nowhere in the world you can't find,\l"
	.string "huh?$"

ViasTrenCasaCampeon_Agatha_Texto_2:
	.string "I've retired to this place. When\n"
	.string "something ends, it ends. You know? I\l"
	.string "didn't want to prolong the situation in\l"
	.string "LAVENDER any further. How could my\l"
	.string "GENGAR and I walk around its streets\l"
	.string "without the POKÉMON TOWER that\l"
	.string "witnessed our growth? Without being\l"
	.string "able to enter it and feel its energy…\l"
	.string "there would be no point in staying\l"
	.string "there.$"


ViasTrenCasaCampeon_Agatha_Texto_3:
	.string "I considered going back to BELL TOWER,\n"
	.string "but I felt the need to return to my\l"
	.string "origins. It was here that I learned so\l"
	.string "much from my mentor, the only one who\l"
	.string "became a CHAMPION using GHOST-TYPE\l"
	.string "POKÉMON.$"

ViasTrenCasaCampeon_Agatha_Texto_4:
	.string "She's still alive, although she\n"
	.string "currently resides in MT. SILVER, you\l"
	.string "might have even seen her.$"

ViasTrenCasaCampeon_Agatha_Texto_5:
	.string "If you happen to go by there, could you\n"
	.string "do me the favor of letting her know?\l"
	.string "After everything that's happened, a\l"
	.string "good chat with her would make me very\l"
	.string "happy.$"

ViasTrenCasaCampeon_Agatha_Texto_6:
	.string "AGATHA: If you happen to go by there,\n"
	.string "could you do me the favor of letting her\l"
	.string "know? After everything that's\l"
	.string "happened, a good chat with her would\l"
	.string "make me very happy.$"

ViasTrenCasaCampeon_Agatha_Texto_7:
	.string "AGATHA: My mentor hadn't felt\n"
	.string "excitement for battling in decades. If\l"
	.string "you do her the honor, you'll also be\l"
	.string "doing me one. I'm really curious to see\l"
	.string "that battle.$"

ViasTrenCasaCampeon_Agatha_Texto_8:
	.string "AGATHA: When I saw you in the POKÉMON\n"
	.string "LEAGUE, I knew you had potential, but…\l"
	.string "look at you now, you've defeated the\l"
	.string "best trainer I've ever known. The world\l"
	.string "is yours to keep surpassing limits.$"


ViasTrenCasaCampeon_Dialogo_Agatha_Campeona::
lock
applymovement 1, ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Move_2
applymovement OBJ_EVENT_ID_PLAYER, ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Move_1
waitmovement 0x0
msgbox ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_2 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Move_3
waitmovement 0x0
delay 10
msgbox ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 2, ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Move_4
waitmovement 0x0
msgbox ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_3.1 MSGBOX_AUTOCLOSE
applymovement 2, ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Move_5
waitmovement 0x0
msgbox ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Move_6
waitmovement 0x0
msgbox ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Move_8
waitmovement 0x0
applymovement 2, ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Move_5
applymovement OBJ_EVENT_ID_PLAYER, ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Move_7
waitmovement 0x0
msgbox ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_6 MSGBOX_AUTOCLOSE
applymovement 2, ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Move_9
waitmovement 0x0
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
removeobject 2
clearflag FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS
addobject 3
applymovement OBJ_EVENT_ID_PLAYER, ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Move_10
applymovement 1, ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Move_6
waitmovement 0x0
msgbox ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_7.1 MSGBOX_AUTOCLOSE
applymovement 1, ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Move_6
waitmovement 0x0
msgbox ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_8 MSGBOX_AUTOCLOSE
setvar VAR_SECRET_BASE_HIGH_TV_FLAGS, 6
release
end

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Move_10:
face_up
step_end

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Move_9:
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Move_8:
walk_down
walk_down
walk_down
step_end

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Move_7:
face_left
step_end

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Move_6:
walk_in_place_down
step_end

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Move_5:
face_right
step_end

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Move_4:
emote_exclamation_mark
face_down
step_end

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Move_3:
face_down
step_end

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Move_2:
face_left
step_end

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Move_1:
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_up
walk_slow_up
walk_slow_up
step_end

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_1:
	.string "And you know it. Nothing gets lost in\n"
	.string "the past, nothing can take away\l"
	.string "everything you've experienced there,\l"
	.string "it's all stored forever, it's already\l"
	.string "part of KANTO's history.$"

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_2:
.string "AGATHA: {PAUSE 15}…{PAUSE 15}$"

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_3:
	.string "Ah{PAUSE 15}…{PAUSE 15} You are {PLAYER}, aren't you?$"


ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_3.1:
	.string "To be honest, I didn't expect to see you\n"
	.string "again. Who would even care about what\l"
	.string "two former faded stars like us have to\l"
	.string "say, right?$"

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_4:
	.string "AGATHA: {PLAYER} is charming; if you\n"
	.string "could see him battle, he exudes that\l"
	.string "aura of past champions, much like\l"
	.string "yourself. He's been born in the wrong\l"
	.string "era.$"

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_5:
	.string "Perhaps that's precisely why he should\n"
	.string "have been born in this era. If he's as\l"
	.string "you say, {PLAYER} can prevent old\l"
	.string "traditions from being buried.$"

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_6:
	.string "AGATHA: You're very young, {PLAYER},\n"
	.string "but you've already lived more than many\l"
	.string "people our age who just watch life go\l"
	.string "by.$"

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_7:
	.string "I know I mentioned the impossibility of\n"
	.string "our teams crossing paths before, but…\l"
	.string "I'm still alive{PAUSE 15}…{PAUSE 15} physically, it's not\l"
	.string "impossible for such an encounter to\l"
	.string "happen. At MT. SILVER, I erred in not\l"
	.string "considering all the possibilities, for me\l"
	.string "and my team.$"

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_7.1:
	.string "Indeed, when one is truly young, they\n"
	.string "remain youthful for life. The skill of\l"
	.string "battling knows no age limits.$"

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_8:
	.string "What I mean is, if you're willing, I'll\n"
	.string "test my team against yours. Talk to me\l"
	.string "when you're ready.$"

ViasTrenCasaCampeon_Combate_Campeona::
lock
faceplayer
compare VAR_SECRET_BASE_HIGH_TV_FLAGS, 6
goto_if_gt ViasTrenCasaCampeon_Combate_Campeona_2
msgbox ViasTrenCasaCampeon_Combate_Campeona_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq ViasTrenCasaCampeon_Combate_Campeona_No
msgbox ViasTrenCasaCampeon_Combate_Campeona_Texto_3 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CAMPEON_FANTASMA, ViasTrenCasaCampeon_Combate_Campeona_Texto_4
msgbox ViasTrenCasaCampeon_Combate_Campeona_Texto_5 MSGBOX_AUTOCLOSE
msgbox ViasTrenCasaCampeon_Combate_Campeona_Texto_6 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox ViasTrenCasaCampeon_Combate_Campeona_Texto_7 MSGBOX_DEFAULT
givemon SPECIES_CALYREX, 70, ITEM_NONE
waitfanfare
msgbox ViasTrenCasaCampeon_Combate_Campeona_Texto_8 MSGBOX_AUTOCLOSE
setvar VAR_SECRET_BASE_HIGH_TV_FLAGS, 7
release
end

ViasTrenCasaCampeon_Combate_Campeona_2::
msgbox ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_7.1 MSGBOX_AUTOCLOSE
release
end

ViasTrenCasaCampeon_Combate_Campeona_No::
msgbox ViasTrenCasaCampeon_Combate_Campeona_Texto_2 MSGBOX_AUTOCLOSE
release
end


ViasTrenCasaCampeon_Combate_Campeona_Texto_1:
.string "Are you ready?$"

ViasTrenCasaCampeon_Combate_Campeona_Texto_2:
	.string "Now that I've returned here, I've got\n"
	.string "all the time in the world; I'm not going\l"
	.string "anywhere.$"

ViasTrenCasaCampeon_Combate_Campeona_Texto_3:
	.string "Let me feel the energy of your POKÉMON.\n"
	.string "Let's see how strong they are!$"

ViasTrenCasaCampeon_Combate_Campeona_Texto_4:
	.string "Everything new isn't necessarily\n"
	.string "decadent…$"

ViasTrenCasaCampeon_Combate_Campeona_Texto_5:
	.string "AGATHA wasn't exaggerating about you.\n"
	.string "You have the heart of a real CHAMPION\l"
	.string "and the required skills.$"

ViasTrenCasaCampeon_Combate_Campeona_Texto_6:
	.string "There's not much I can teach you, but\n"
	.string "I'd like you to have this.$"

ViasTrenCasaCampeon_Combate_Campeona_Texto_7:
.string "YOU OBTAINED A LV.70 CALYREX!$"

ViasTrenCasaCampeon_Combate_Campeona_Texto_8:
	.string "One of my recent hobbies has been\n"
	.string "cultivating and watching these little\l"
	.string "ones grow; you can't imagine the power\l"
	.string "contained within CALYREX. I hope you\l"
	.string "make good use of it.$"
