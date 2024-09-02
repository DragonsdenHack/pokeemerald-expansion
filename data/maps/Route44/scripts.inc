Route44_MapScripts::
	.byte 0

Route44_1::
lock     
faceplayer     
msgbox Route44_Text_1, MSGBOX_DEFAULT
release     
end

Route44_Text_1:
	.string "The ICE PATH is closed until further\n"
	.string "notice. Sorry, it's been last-minute\l"
	.string "orders from ECRUTEAK CITY.$"



Route44_2::
end



Route44_4::
end



Route44_5::
end



Route44_6::
lock     
faceplayer     
msgbox Route44_Text_6, MSGBOX_DEFAULT
release     
end

Route44_Text_6:
	.string "The ICE CAVE has kept the DRAGON TYPE\n"
	.string "sanctuary, BLACKTHORN CITY, secluded\l"
	.string "from the rest of JOHTO.$"



Route44_7::
end



Route44_8::
end



Route44_9::
end



Route44_10::
end



Route44_11::
end



Route44_EventScript_Domador::
	trainerbattle_single TRAINER_NICOLAS_5, Route44_Text_DomadorIntro, Route44_Text_DomadorDefeated
	msgbox Route44_Text_DomadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route44_EventScript_Guay::
	trainerbattle_single TRAINER_PERRY, Route44_Text_GuayIntro, Route44_Text_GuayDefeated
	msgbox Route44_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end



Route44_EventScript_Pescador::
	trainerbattle_single TRAINER_PHIL, Route44_Text_PescadorIntro, Route44_Text_PescadorDefeated
	msgbox Route44_Text_PescadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route44_EventScript_Necio::
	trainerbattle_single TRAINER_HUGH, Route44_Text_NecioIntro, Route44_Text_NecioDefeated
	msgbox Route44_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



Route44_EventScript_Ornitologo::
	trainerbattle_single TRAINER_ROBERT_1, Route44_Text_OrnitologoIntro, Route44_Text_OrnitologoDefeated
	msgbox Route44_Text_OrnitologoPostBattle, MSGBOX_AUTOCLOSE
	end



Route44Documento_100::
msgbox Route44Documento_Text_100, MSGBOX_SIGN   
end

Route44Documento_Text_100:
	.string "ROUTE 44\n"
	.string "MAHOGANY TOWN - BLACKTHORN CITY$"



Route44Documento_101::
msgbox Route44Documento_Text_101, MSGBOX_SIGN   
end

Route44Documento_Text_101:
	.string "ROUTE 44\n"
	.string "ICE PATH AHEAD$"

Route44_Combate_Mirto::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route44_Combate_Mirto_Move_1
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_1 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
addobject 3
applymovement 3, Route44_Combate_Mirto_Move_2
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_2 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_3
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_3 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_4
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_4 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_3
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox Route44_Combate_Mirto_Texto_5.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Route44_Combate_Mirto_Move_3.1
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_5.2 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_3
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_5.3 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_5
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_5.4 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_6
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_5.5 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_6.1
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_5.6 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, Route44_Combate_Mirto_Move_3.1
waitmovement 0x0
delay 10
msgbox Route44_Combate_Mirto_Texto_5.7 MSGBOX_AUTOCLOSE
delay 15
msgbox Route44_Combate_Mirto_Texto_5.8 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_6.2
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_5.9 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_6.3
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_5.10 MSGBOX_AUTOCLOSE
msgbox Route44_Combate_Mirto_Texto_6 MSGBOX_AUTOCLOSE
applymovement 3, Route44_Combate_Mirto_Move_3
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_7 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
trainerbattle_no_intro TRAINER_MIRTO, Route44_Combate_Mirto_Texto_8
applymovement OBJ_EVENT_ID_PLAYER, Route44_Combate_Mirto_Move_5
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_9 MSGBOX_AUTOCLOSE
msgbox Route44_Combate_Mirto_Texto_10 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox Route44_Combate_Mirto_Texto_11 MSGBOX_DEFAULT
givemon SPECIES_NOIBAT, 25, ITEM_NOIVERNITA
waitfanfare
msgbox Route44_Combate_Mirto_Texto_11.1 MSGBOX_DEFAULT
delay 10
applymovement 3, Route44_Combate_Mirto_Move_3
waitmovement 0x0
msgbox Route44_Combate_Mirto_Texto_12 MSGBOX_AUTOCLOSE
fadescreen 1
playmoncry SPECIES_NOIVERN, CRY_MODE_ENCOUNTER
waitmoncry
removeobject 3
setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
playse SE_M_FLY
delay 15
fadescreen 0
setvar VAR_UNUSED_0x40F7, 166
release
end

Route44_Combate_Mirto_Move_6.3:
delay_8
walk_right
delay_8
step_end

Route44_Combate_Mirto_Move_6.2:
delay_8
face_right
delay_8
step_end

Route44_Combate_Mirto_Move_6.1:
delay_8
walk_in_place_left
delay_8
step_end

Route44_Combate_Mirto_Move_3.1:
face_up
delay_8
step_end

Route44_Combate_Mirto_Texto_1:
.string "????: {PLAYER}!\n"
	.string "Wait!$"

Route44_Combate_Mirto_Texto_2:
	.string "I figured I'd find you here. You've\n"
	.string "taken down seven of the top eight\l"
	.string "TRAINERS in JOHTO, haven't you? You're\l"
	.string "only left with the last and toughest\l"
	.string "one: the DRAGON MASTER of BLACKTHORN.\l"
	.string "That's why you're heading toward the\l"
	.string "ICE PATH.$"

Route44_Combate_Mirto_Texto_3:
	.string "I came to say goodbye, {PLAYER}.\n"
	.string "Indeed, soon, I will go back to UNOVA, my\l"
	.string "homeland.$"

Route44_Combate_Mirto_Texto_4:
	.string "I want my POKÉMON to see the region\n"
	.string "where it grew up one last time.$"

Route44_Combate_Mirto_Texto_5:
	.string "All my attempts to restore my POKÉMON's\n"
	.string "health have failed, but this journey\l"
	.string "has not been in vain. I have learned a\l"
	.string "lot from the best masters of JOHTO.\l"
	.string "They have made me realize that my\l"
	.string "POKÉMON's situation is privileged; it\l"
	.string "has a gift for combat, and it would be a\l"
	.string "sin not to explore the limits of such a\l"
	.string "unique POKÉMON.$"

Route44_Combate_Mirto_Texto_5.1:
	.string "…$"

Route44_Combate_Mirto_Texto_5.2:
	.string "The CHAMPION of a region is the\n"
	.string "strongest trainer there, you know what\l"
	.string "I mean, right?$"

Route44_Combate_Mirto_Texto_5.3:
	.string "We also represent the limit of what a\n"
	.string "TRAINER has been able to achieve, the\l"
	.string "closest to greater forces that only\l"
	.string "ancient LEGENDARIES reach.$"

Route44_Combate_Mirto_Texto_5.4:
	.string "However, we achieve this thanks to our\n"
	.string "effort, development, and interactions\l"
	.string "we maintain with other POKÉMON, mortals\l"
	.string "like us, throughout our lives.$"

Route44_Combate_Mirto_Texto_5.5:
	.string "I have no doubt, those kinds of acts\n"
	.string "leave a mark. Its potential is limitless,\l"
	.string "sacred.$"

Route44_Combate_Mirto_Texto_5.6:
	.string "Meanwhile, POKÉMON WORLD GODS{PAUSE 35}…{PAUSE 35} Do you\n"
	.string "know what I think about that blessed\l"
	.string "POKÉMON?$"

Route44_Combate_Mirto_Texto_5.7:
	.string "They envy us, {PLAYER}.$"

Route44_Combate_Mirto_Texto_5.8:
	.string "They'll never know what it's like to\n"
	.string "start from zero and gradually rise,\l"
	.string "climbing step by step, facing\l"
	.string "difficulties, and learning from defeats.$"

Route44_Combate_Mirto_Texto_5.9:
	.string "They envy us because, after all, we are\n"
	.string "mortal. Every battle of ours could be\l"
	.string "the last one. We will never have this\l"
	.string "conversation again, nor be here,\l"
	.string "{PLAYER}.$"

Route44_Combate_Mirto_Texto_5.10:
	.string "Do you notice? The value lies in the\n"
	.string "ephemeral nature of our existence.$"

Route44_Combate_Mirto_Texto_6:
	.string "That's why I've come here, {PLAYER}. I\n"
	.string "can't think of a better way to honor my\l"
	.string "POKÉMON than to provide this battle,\l"
	.string "even as its light shines brightly, so\l"
	.string "that everyone remembers how it was at\l"
	.string "his prime.$"

Route44_Combate_Mirto_Texto_7:
	.string "No matter if it's five or fifty years\n"
	.string "from now, nothing can rob us of what\l"
	.string "we've lived through today, nor the\l"
	.string "LEGENDARY status we've achieved!$"

Route44_Combate_Mirto_Texto_8:
.string "I will never forget this battle.$"

Route44_Combate_Mirto_Texto_9:
	.string "You're a LEGENDARY TRAINER, {PLAYER}.\n"
	.string "I reckon this battle will mark the end\l"
	.string "of a chapter on my journey.$"

Route44_Combate_Mirto_Texto_10:
	.string "I'll release my current team and begin\n"
	.string "anew with the LARVESTA egg from my\l"
	.string "VOLCARONA. I want you to keep this\l"
	.string "POKÉMON.$"

Route44_Combate_Mirto_Texto_11:
.string "YOU OBTAINED A LV.25 NOIBAT!!$"

Route44_Combate_Mirto_Texto_11.1:
	.string "With this battle, my peak as a TRAINER\n"
	.string "has finally finished. But you{PAUSE 35}…{PAUSE 35} you can\l"
	.string "still make the gods bleed.$"

Route44_Combate_Mirto_Texto_12:
	.string "Goodbye, {PLAYER}. Give my regards to\n"
	.string "the DRAGON MASTER; I'm sure he can\l"
	.string "guide you to even greater heights.$"

Route44_Combate_Mirto_Move_1:
emote_exclamation_mark
walk_in_place_left
step_end

Route44_Combate_Mirto_Move_2:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_right
walk_right
step_end

Route44_Combate_Mirto_Move_3:
walk_in_place_right
step_end

Route44_Combate_Mirto_Move_4:
face_down
step_end

Route44_Combate_Mirto_Move_5:
face_left
step_end

Route44_Combate_Mirto_Move_6:
walk_slow_left
step_end
