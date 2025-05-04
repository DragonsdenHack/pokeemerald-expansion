MemorialPillar_MapScripts::
	.byte 0

MemorialPillar1::
end


MemorialPillar2::
end


MemorialPillar3::
end


MemorialPillar4::
end


MemorialPillar5::
end

MemorialPillar_EventScript_Marc::
	trainerbattle_single TRAINER_MARC, MemorialPillar_Text_MarcIntro, MemorialPillar_Text_MarcDefeated
	msgbox MemorialPillar_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
	end

MemorialPillar_EventScript_Brenden::
	trainerbattle_single TRAINER_BRENDEN, MemorialPillar_Text_BrendenIntro, MemorialPillar_Text_BrendenDefeated
	msgbox MemorialPillar_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
	end



MemorialPillar_EventScript_Lilith::
	trainerbattle_single TRAINER_LILITH, MemorialPillar_Text_LilithIntro, MemorialPillar_Text_LilithDefeated
	msgbox MemorialPillar_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
	end

MemorialPillar_EventScript_Onyx::
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, MemorialPillar_Move_1
applymovement OBJ_EVENT_ID_CAMERA, MemorialPillar_Move_2
waitmovement 0x0
special RemoveCameraObject
applymovement 1, MemorialPillar_Move_1
msgbox MemorialPillar_Text_Onyx, MSGBOX_AUTOCLOSE
delay 15
msgbox MemorialPillar_Text_Onyx_Texto_2, MSGBOX_AUTOCLOSE
delay 15
msgbox MemorialPillar_Text_Onyx_Texto_3, MSGBOX_AUTOCLOSE
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MemorialPillar_Move_3
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40F8, 1
release
end

MemorialPillar_Text_Onyx:
.string "Even if you should live 3000 years, and\n"
    .string "even 10 times as many, always remember\l"
    .string "that no more life is lost than the one\l"
    .string "that is lived and that only the one\l"
    .string "that is lost is lived.$"

MemorialPillar_Text_Onyx_Texto_2:
    .string "Thus, the longest life and the shortest\n"
    .string "one come to be reduced to the same thing,\l"
    .string "the present moment that is lived is the\l"
    .string "same for everyone, the one that is lost\l"
    .string "too, and this one that is lost comes to\l"
    .string "seem indivisible to us.$"

MemorialPillar_Text_Onyx_Texto_3:
    .string "And the thing is{PAUSE 15}…{PAUSE 15}\p"
    .string "It's not neither the past nor the\n"
    .string "future is lost, since what we do not\l"
    .string "possess, how could it be taken away\l"
    .string "from us?$"


MemorialPillar_Move_1:
walk_in_place_up
step_end


MemorialPillar_Move_2:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

MemorialPillar_Move_3:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

MemorialPillar_ChicoOnix::
lock
faceplayer
compare VAR_ROUTE119_STATE, 1
goto_if_eq MemorialPillar_ChicoOnix_Pregunta
compare VAR_ROUTE119_STATE, 2
goto_if_eq MemorialPillar_ChicoOnix_Mision
compare VAR_ROUTE119_STATE, 3
goto_if_eq MemorialPillar_ChicoOnix_Post
compare VAR_ROUTE119_STATE, 4
goto_if_eq MemorialPillar_ChicoOnix_Final
msgbox MemorialPillar_ChicoOnix_Texto_1 MSGBOX_NPC
delay 10
msgbox MemorialPillar_ChicoOnix_Despues_Texto_1 MSGBOX_NPC
delay 10
msgbox MemorialPillar_ChicoOnix_Despues_Texto_2 MSGBOX_NPC
delay 10
applymovement 1, MemorialPillar_ChicoOnix_Move_1
waitmovement 0x0
delay 10
msgbox MemorialPillar_ChicoOnix_Despues_Texto_3 MSGBOX_NPC
delay 10
msgbox MemorialPillar_ChicoOnix_Despues_Texto_4 MSGBOX_NPC
delay 10
msgbox MemorialPillar_ChicoOnix_Despues_Texto_5 MSGBOX_NPC
delay 10
applymovement 1, MemorialPillar_ChicoOnix_Move_2
waitmovement 0x0
delay 10
setvar VAR_ROUTE119_STATE, 1
msgbox MemorialPillar_ChicoOnix_Despues_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq MemorialPillar_ChicoOnix_No
setvar VAR_ROUTE119_STATE, 2
msgbox MemorialPillar_ChicoOnix_Despues_Texto_7 MSGBOX_NPC
msgbox MemorialPillar_ChicoOnix_Despues_Texto_8 MSGBOX_NPC
release
end

MemorialPillar_ChicoOnix_Pregunta::
msgbox MemorialPillar_ChicoOnix_Despues_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq MemorialPillar_ChicoOnix_No
setvar VAR_ROUTE119_STATE, 2
delay 10
playse SE_PIN
applymovement 1, MemorialPillar_ChicoOnix_Move_3
waitmovement 0x0
waitse
msgbox MemorialPillar_ChicoOnix_Despues_Texto_7 MSGBOX_NPC
delay 10
msgbox MemorialPillar_ChicoOnix_Despues_Texto_8 MSGBOX_NPC
release
end

MemorialPillar_ChicoOnix_Mision::
faceplayer
msgbox MemorialPillar_ChicoOnix_Despues_Texto_9 MSGBOX_NPC
release
end

MemorialPillar_ChicoOnix_No::
lock
msgbox MemorialPillar_ChicoOnix_No_Texto_1 MSGBOX_AUTOCLOSE
release
end

MemorialPillar_ChicoOnix_No_Texto_1:
	.string "Mmm, I understand. He doesn't seem\n"
	.string "like a very friendly person.$"

MemorialPillar_ChicoOnix_Move_3:
emote_exclamation_mark
step_end

MemorialPillar_ChicoOnix_Move_2:
walk_in_place_up
delay_8
face_player
step_end

MemorialPillar_ChicoOnix_Move_1:
face_up
delay_16
delay_8
face_player
step_end

MemorialPillar_ChicoOnix_Texto_1:
    .string "This is where I buried my ONIX…\n"
    .string "It was named TECTONIX…$"


MemorialPillar_ChicoOnix_Post::
lock
faceplayer
delay 10
playse SE_PIN
applymovement 1, MemorialPillar_ChicoOnix_Move_3
waitmovement 0x0
waitse
playfanfare MUS_OBTAIN_BADGE
msgbox MemorialPillar_ChicoOnix_Despues_Texto_10 MSGBOX_DEFAULT
waitfanfare
msgbox MemorialPillar_ChicoOnix_Despues_Texto_11 MSGBOX_NPC
delay 10
msgbox MemorialPillar_ChicoOnix_Despues_Texto_12 MSGBOX_NPC
delay 10
playse SE_PIN
applymovement 1, MemorialPillar_ChicoOnix_Move_3
waitmovement 0x0
waitse
msgbox MemorialPillar_ChicoOnix_Despues_Texto_13 MSGBOX_NPC
delay 10
applymovement 1, MemorialPillar_ChicoOnix_Move_1
waitmovement 0x0
delay 10
msgbox MemorialPillar_ChicoOnix_Despues_Texto_14 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
msgbox MemorialPillar_ChicoOnix_Despues_Texto_15 MSGBOX_DEFAULT
givemon SPECIES_PHANPY, 8, ITEM_METEORITE
waitfanfare
msgbox MemorialPillar_ChicoOnix_Despues_Texto_16 MSGBOX_NPC
msgbox MemorialPillar_ChicoOnix_Despues_Texto_17 MSGBOX_NPC
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_LEMONADE, 6
waitfanfare
msgbox MemorialPillar_ChicoOnix_Despues_Texto_19 MSGBOX_NPC
setvar VAR_ROUTE119_STATE, 4
release
end

MemorialPillar_ChicoOnix_Final::
msgbox MemorialPillar_ChicoOnix_Despues_Texto_20 MSGBOX_NPC
release
end

MemorialPillar_ChicoOnix_Despues_Texto_1:
	.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10}$"

MemorialPillar_ChicoOnix_Despues_Texto_2:
	.string "TECTONIX used to love lemonade. If only\n"
	.string "I could place a bottle here as a\l"
	.string "tribute…$"

MemorialPillar_ChicoOnix_Despues_Texto_3:
	.string "However, you can't find them in SEVII\n"
	.string "anymore.$"

MemorialPillar_ChicoOnix_Despues_Texto_4:
	.string "Unless… Yes, there's this chef… He comes\n"
	.string "by the PKMN CENTER from time to time.$"

MemorialPillar_ChicoOnix_Despues_Texto_5:
	.string "He got lemonades. However, he only sells\n"
	.string "those to his rich customers, who buy\l"
	.string "them along his expensive-as-gold\l"
	.string "menus.$"

MemorialPillar_ChicoOnix_Despues_Texto_6:
	.string "Say, could you talk him into selling\n"
	.string "me a few of ‘em?$"

MemorialPillar_ChicoOnix_Despues_Texto_7:
	.string "For real? That would be awesome.$"

MemorialPillar_ChicoOnix_Despues_Texto_8:
	.string "If you make it, I'll never be grateful\n"
	.string "enough, and I may give you a little\l"
	.string "something.$"

MemorialPillar_ChicoOnix_Despues_Texto_9:
	.string "Say, did you make it? He usually comes\n"
	.string "by FIVE ISLAND PKMN CENTER to rest.$"

MemorialPillar_ChicoOnix_Despues_Texto_10:
	.string "{PLAYER} gave a box of lemonades to\n"
	.string "the TRAINER!!$"

MemorialPillar_ChicoOnix_Despues_Texto_11:
	.string "Wow! You actually convinced him? These\n"
	.string "must have cost you a few grand.$"

MemorialPillar_ChicoOnix_Despues_Texto_12:
	.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10}$"

MemorialPillar_ChicoOnix_Despues_Texto_13:
	.string "Huh! A gift? I didn't know he was that\n"
	.string "generous, well for sure you can't judge a\l"
	.string "book by its cover.$"

MemorialPillar_ChicoOnix_Despues_Texto_14:
	.string "I won't be less than that. Now my ONIX\n"
	.string "has his worthy tribute, and this other\l"
	.string "POKÉMON is for you.$"

MemorialPillar_ChicoOnix_Despues_Texto_15:
	.string "YOU OBTAINED A LV.8 PHANPY!!$"

MemorialPillar_ChicoOnix_Despues_Texto_16:
	.string "It holds a rare item that I found when I\n"
	.string "was walking around the ALTERING CAVE.$"

MemorialPillar_ChicoOnix_Despues_Texto_17:
	.string "Hey, take these as well.$"

MemorialPillar_ChicoOnix_Despues_Texto_18:
	.string "{PLAYER} obtained 6 lemonades!!$"

MemorialPillar_ChicoOnix_Despues_Texto_19:
	.string "I got more than enough with what's left\n"
	.string "in the box. I hope I can see the chef so\l"
	.string "I can thank him!$"

MemorialPillar_ChicoOnix_Despues_Texto_20:
	.string "If I learned something from TECTONIX is\n"
	.string "that an illness may block your body, but\l"
	.string "not your will, unless it allows it to.$"

