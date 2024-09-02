Route51_MapScripts::
	.byte 0

Route51_1::
end



Route51_2::
lock     
faceplayer     
msgbox Route51_Text_2, MSGBOX_DEFAULT
release     
end

Route51_Text_2:
	.string "I feel like I was already in this place…\n"
	.string "in a dream…$"



Route51_3::
end



Route51_4::
end



Route51_EventScript_Pescador::
	trainerbattle_single TRAINER_BRAWLY_2, Route51_Text_PescadorIntro, Route51_Text_PescadorDefeated
	msgbox Route51_Text_PescadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route51_EventScript_Pescador2::
	trainerbattle_single TRAINER_BRAWLY_3, Route51_Text_Pescador2Intro, Route51_Text_Pescador2Defeated
	msgbox Route51_Text_Pescador2PostBattle, MSGBOX_AUTOCLOSE
	end

Route51_Combate_Chica::
lock
faceplayer
goto_if_set FLAG_NUEVA_863, Route51_Combate_Chica_2
msgbox Route51_Combate_Chica_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route51_Combate_Chica_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51_Combate_Chica_No
msgbox Route51_Combate_Chica_Texto_4 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51_Combate_Chica_No_2
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox Route51_Combate_Chica_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_SHAKURA, Route51_Combate_Chica_Texto_7
msgbox Route51_Combate_Chica_Texto_8 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_STARMIETITE
msgbox Route51_Combate_Chica_Texto_8.1 MSGBOX_DEFAULT
waitfanfare
msgbox Route51_Combate_Chica_Texto_9 MSGBOX_AUTOCLOSE
setflag FLAG_NUEVA_863
release
end

Route51_Combate_Chica_Texto_8.1:
.string "You obtained a STARMIETITE\n"
	.string "from the GIRL!$"

Route51_Combate_Chica_2::
msgbox Route51_Combate_Chica_Texto_3 MSGBOX_AUTOCLOSE
release
end

Route51_Combate_Chica_No::
msgbox Route51_Combate_Chica_Texto_5 MSGBOX_AUTOCLOSE
release
end

Route51_Combate_Chica_No_2::
msgbox Route51_Combate_Chica_Texto_10 MSGBOX_AUTOCLOSE
release
end


Route51_Combate_Chica_Texto_1:
	.string "Each POKÉMON holds within itself an\n"
	.string "infinite potential. When you think\l"
	.string "you've grasped that potential, reality\l"
	.string "hits you instantaneously, making you\l"
	.string "forget that brief flicker of full\l"
	.string "potential, and every POKÉMON returns\l"
	.string "to being subject to the laws of\l"
	.string "physics.$"

Route51_Combate_Chica_Texto_2:
	.string "Tell me. Do you think that a strong\n"
	.string "POKÉMON can originate anywhere?$"

Route51_Combate_Chica_Texto_3:
	.string "Oh, heavens no! Applying the same\n"
	.string "conditions you saw in my POKÉMON with\l"
	.string "LEGENDARIES or POKÉMON with higher\l"
	.string "BASE power? That's not possible! They\l"
	.string "start from a different base and follow\l"
	.string "a different process, and if you do it\l"
	.string "right, they all end up reaching a similar\l"
	.string "point!$"

Route51_Combate_Chica_Texto_4:
	.string "And would you be willing to take that\n"
	.string "belief into the arena of combat?$"

Route51_Combate_Chica_Texto_5:
	.string "So in that case, there's nothing new\n"
	.string "that I can teach you. Have a nice day.$"

Route51_Combate_Chica_Texto_6:
.string "Cool!\n"
	.string "In honor of this place…\l"
	.string "We will cross the winding border between\l"
	.string "the sacred and the profane!$"

Route51_Combate_Chica_Texto_7:
.string "Yeah…\n"
	.string "That's it…$"

Route51_Combate_Chica_Texto_8:
	.string "That's right, there's no secret\n"
	.string "ingredient. Everything you need, you\l"
	.string "already have. You're someone who knows\l"
	.string "what the path ahead looks like. I want\l"
	.string "you to have this.$"

Route51_Combate_Chica_Texto_9:
	.string "I found it on one of my journeys along\n"
	.string "the beach. I'm sure it'll be more useful\l"
	.string "to you than me.$"

Route51_Combate_Chica_Texto_10:
	.string "I understand. Not everyone is prepared\n"
	.string "to trespass the limits of reality.$"
