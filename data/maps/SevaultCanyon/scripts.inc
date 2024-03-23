SevaultCanyon_MapScripts::
	.byte 0

SevaultCanyon1::
end


SevaultCanyon2::
end


SevaultCanyon3::
end


SevaultCanyon4::
end


SevaultCanyon5::
end


SevaultCanyon6::
end


SevaultCanyon7::
end


SevaultCanyon8::
end


SevaultCanyon9::
end


SevaultCanyon10::
end


SevaultCanyon11::
end


SevaultCanyon12::
end


SevaultCanyon13::
end


SevaultCanyon14::
end


SevaultCanyon15::
end


SevaultCanyon16::
lock     
faceplayer     
msgbox Text_16, MSGBOX_DEFAULT
release     
end

Text_16:
.string "Training by oneself is certainly\n"
    .string "not a bad thing.\p"
    .string "But it's also not bad to aim for\n"
    .string "the top with a partner.\p"
    .string "Even BRUNO…\n"
    .string "He trained with a fellow by the\l"
    .string "name of BRAWLY before.$"


SevaultCanyon17::
end


SevaultCanyon18::
end


SevaultCanyon19::
end


SevaultCanyon20::
end



SevaultCanyon_EventScript_Domador::
	trainerbattle_single TRAINER_PAXTON, SevaultCanyon_Text_DomadorIntro, SevaultCanyon_Text_DomadorDefeated
	msgbox SevaultCanyon_Text_DomadorPostBattle, MSGBOX_AUTOCLOSE
	end



SevaultCanyon_EventScript_Guay::
	trainerbattle_single TRAINER_MAY_RUSTBORO_MUDKIP, SevaultCanyon_Text_GuayIntro, SevaultCanyon_Text_GuayDefeated
	msgbox SevaultCanyon_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end



SevaultCanyon_EventScript_Guay2::
	trainerbattle_single TRAINER_MAXIE_MAGMA_HIDEOUT, SevaultCanyon_Text_Guay2Intro, SevaultCanyon_Text_Guay2Defeated
	msgbox SevaultCanyon_Text_Guay2PostBattle, MSGBOX_AUTOCLOSE
	end



SevaultCanyon_EventScript_Chico::
	trainerbattle_single TRAINER_BRUNO_1_MT_CHIMNEY, SevaultCanyon_Text_ChicoIntro, SevaultCanyon_Text_ChicoDefeated
	msgbox SevaultCanyon_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



SevaultCanyon_EventScript_Chica::
	trainerbattle_single TRAINER_BRENDAN_RUSTBORO_TORCHIC, SevaultCanyon_Text_ChicaIntro, SevaultCanyon_Text_ChicaDefeated
	msgbox SevaultCanyon_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



SevaultCanyon_EventScript_Luchadora::
	trainerbattle_single TRAINER_BRENDAN_RUSTBORO_TREECKO, SevaultCanyon_Text_LuchadoraIntro, SevaultCanyon_Text_LuchadoraDefeated
	msgbox SevaultCanyon_Text_LuchadoraPostBattle, MSGBOX_AUTOCLOSE
	end



SevaultCanyonDocumento_100::
msgbox SevaultCanyonDocumento_Text_100, MSGBOX_SIGN   
end

SevaultCanyonDocumento_Text_100:
.string "SEVAULT CANYON\n"
    .string "TANOBY RUINS AHEAD$"



SevaultCanyon_EventScript_Pareja1::
	trainerbattle_single TRAINER_MAXIE_MT_CHIMNEY, SevaultCanyon_Text_Pareja1Intro, SevaultCanyon_Text_Pareja1Defeated
	msgbox SevaultCanyon_Text_Pareja1PostBattle, MSGBOX_AUTOCLOSE
	end



SevaultCanyon_EventScript_Pareja2::
	trainerbattle_single TRAINER_MAXIE_MT_CHIMNEY, SevaultCanyon_Text_Pareja2Intro, SevaultCanyon_Text_Pareja2Defeated
	msgbox SevaultCanyon_Text_Pareja2PostBattle, MSGBOX_AUTOCLOSE
	end

SevaultCanyon_Combate_Andra_Izq::
applymovement OBJ_EVENT_ID_PLAYER, SevaultCanyon_Combate_Andra_Move_1
waitmovement 0x0
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SevaultCanyon_Combate_Andra_Move_2
waitmovement 0x0
clearflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
addobject 20
applymovement OBJ_EVENT_ID_PLAYER, SevaultCanyon_Combate_Andra_Move_3
applymovement 20, SevaultCanyon_Combate_Andra_Move_4
waitmovement 0x0
goto SevaultCanyon_Combate_Andra

SevaultCanyon_Combate_Andra_Der::
applymovement OBJ_EVENT_ID_PLAYER, SevaultCanyon_Combate_Andra_Move_1
waitmovement 0x0
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SevaultCanyon_Combate_Andra_Move_2
waitmovement 0x0
clearflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
addobject 20
applymovement OBJ_EVENT_ID_PLAYER, SevaultCanyon_Combate_Andra_Move_3.1
applymovement 20, SevaultCanyon_Combate_Andra_Move_4
waitmovement 0x0
goto SevaultCanyon_Combate_Andra

SevaultCanyon_Combate_Andra::
msgbox SevaultCanyon_Combate_Andra_Texto_1 MSGBOX_AUTOCLOSE
applymovement 20, SevaultCanyon_Combate_Andra_Move_1
waitmovement 0x0
msgbox SevaultCanyon_Combate_Andra_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox SevaultCanyon_Combate_Andra_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox SevaultCanyon_Combate_Andra_Texto_4 MSGBOX_AUTOCLOSE
applymovement 20, SevaultCanyon_Combate_Andra_Move_5
waitmovement 0x0
msgbox SevaultCanyon_Combate_Andra_Texto_5 MSGBOX_AUTOCLOSE
msgbox SevaultCanyon_Combate_Andra_Texto_6 MSGBOX_AUTOCLOSE
applymovement 20, SevaultCanyon_Combate_Andra_Move_1
waitmovement 0x0
msgbox SevaultCanyon_Combate_Andra_Texto_7 MSGBOX_AUTOCLOSE
msgbox SevaultCanyon_Combate_Andra_Texto_8 MSGBOX_AUTOCLOSE
applymovement 20, SevaultCanyon_Combate_Andra_Move_5
waitmovement 0x0
msgbox SevaultCanyon_Combate_Andra_Texto_9 MSGBOX_AUTOCLOSE
msgbox SevaultCanyon_Combate_Andra_Texto_10 MSGBOX_AUTOCLOSE
applymovement 20, SevaultCanyon_Combate_Andra_Move_1
waitmovement 0x0
msgbox SevaultCanyon_Combate_Andra_Texto_11 MSGBOX_AUTOCLOSE
msgbox SevaultCanyon_Combate_Andra_Texto_12 MSGBOX_AUTOCLOSE
msgbox SevaultCanyon_Combate_Andra_Texto_13 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
trainerbattle_no_intro TRAINER_ANDRA_7, SevaultCanyon_Combate_Andra_Texto_14
msgbox SevaultCanyon_Combate_Andra_Texto_15 MSGBOX_AUTOCLOSE
applymovement 20, SevaultCanyon_Combate_Andra_Move_7
waitmovement 0x0
msgbox SevaultCanyon_Combate_Andra_Texto_16 MSGBOX_AUTOCLOSE
msgbox SevaultCanyon_Combate_Andra_Texto_17 MSGBOX_AUTOCLOSE
applymovement 20, SevaultCanyon_Combate_Andra_Move_8
waitmovement 0x0
setflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
removeobject 20
setvar VAR_ROUTE106_STATE, 4
release
end

SevaultCanyon_Combate_Andra_Texto_1:
	.string "ANDRA: {PLAYER}, you here too? This\n"
	.string "place is like a paradise, huh?$"

SevaultCanyon_Combate_Andra_Texto_2:
	.string "GIOVANNI also threw me into this place,\n"
	.string "but unlike you, I offered to explore\l"
	.string "those mysterious ruins down south. He\l"
	.string "gave me the small stone from the vial we\l"
	.string "grabbed, just in case it does something.$"

SevaultCanyon_Combate_Andra_Texto_3:
.string "{PAUSE 15}…{PAUSE 15}$"

SevaultCanyon_Combate_Andra_Texto_4:
	.string "It's still hard for me to believe you\n"
	.string "beat LANCE. After entering the HALL OF\l"
	.string "FAME to face RED, I took down all the\l"
	.string "police officers who tried to stop us.\l"
	.string "Once the last one was defeated, I felt\l"
	.string "invincible, really. My team had never\l"
	.string "reached that level, and I still had\l"
	.string "energy left. I even thought about\l"
	.string "joining you to help with RED, but…$"

SevaultCanyon_Combate_Andra_Texto_5:
	.string "At that very moment, a different LANCE\n"
	.string "from the one I battled hours earlier\l"
	.string "showed up. Without saying a word, he\l"
	.string "released a DRAGONITE I'd never seen\l"
	.string "before. Just using OUTRAGE, he knocked\l"
	.string "out each of my POKÉMON with a single\l"
	.string "hit, leaving them unable to do anything.\l"
	.string "Only my CROBAT managed to land a hit\l"
	.string "before being defeated by OUTRAGE.$"

SevaultCanyon_Combate_Andra_Texto_6:
	.string "After witnessing that power, I thought\n"
	.string "all was lost. Even if you were able to\l"
	.string "defeat RED, LANCE was on another level.\l"
	.string "You must have summoned everything you\l"
	.string "had and more to survive such power.$"

SevaultCanyon_Combate_Andra_Texto_7:
	.string "Later on, GIOVANNI entered along with\n"
	.string "ARCHER and PETREL. I quickly went with\l"
	.string "the latter two to heal my POKÉMON. The\l"
	.string "rest is history.$"

SevaultCanyon_Combate_Andra_Texto_8:
	.string "The power LANCE showed there got me\n"
	.string "thinking about the absolute limits a\l"
	.string "trainer can hit, the raw strength some\l"
	.string "POKÉMON can get to. It also shows how a\l"
	.string "ROCKET from SEVII ISLAND dealt with it,\l"
	.string "proving you can tame the biggest\l"
	.string "powers, any legendary touched by the\l"
	.string "magic wand, with enough skill and\l"
	.string "well-trained, prepared POKÉMON.$"

SevaultCanyon_Combate_Andra_Texto_9:
	.string "That's why, considering your\n"
	.string "performance in the HALL OF FAME, I made\l"
	.string "the decision not to include LEGENDARY\l"
	.string "POKÉMON on my team.$"

SevaultCanyon_Combate_Andra_Texto_10:
	.string "Indeed, I declined ARTICUNO, ZAPDOS,\n"
	.string "and MOLTRES when GIOVANNI offered\l"
	.string "them to me. I don't need them to reach\l"
	.string "my best possible version. Now I know\l"
	.string "that a strong POKÉMON can come from\l"
	.string "anywhere. The only difference between\l"
	.string "a LEGENDARY POKÉMON and a\l"
	.string "non-legendary one is that the latter\l"
	.string "needs to go through a certain process\l"
	.string "to unlock its potential. You must be\l"
	.string "willing to help, educate, and believe in\l"
	.string "it. However, I firmly believe that the\l"
	.string "peak performance in both cases,\l"
	.string "whether LEGENDARY or common POKÉMON,\l"
	.string "is similar. The added benefit is that\l"
	.string "you learn much more in the process of\l"
	.string "raising your own, gaining greater wisdom\l"
	.string "compared to a LEGENDARY who has always\l"
	.string "been powerful.$"

SevaultCanyon_Combate_Andra_Texto_11:
	.string "Maybe this works for people too, don't\n"
	.string "ya think?$"

SevaultCanyon_Combate_Andra_Texto_12:
	.string "Anyhow, I didn't come all the way here\n"
	.string "to chat about using LEGENDARIES or\l"
	.string "not! My main goal is to figure out what\l"
	.string "the heck this stone is and make\l"
	.string "improvements along the way!$"

SevaultCanyon_Combate_Andra_Texto_13:
	.string "I highly doubt there's anyone else on\n"
	.string "these islands who can match up to you.\l"
	.string "So, you're the biggest challenge I've\l"
	.string "got right now. Let's see how the\l"
	.string "POKÉMON of the true KANTO CHAMPION\l"
	.string "dance!$"

SevaultCanyon_Combate_Andra_Texto_14:
	.string "Hmm{PAUSE 20}…{PAUSE 20} So close yet so far. I will fight\n"
	.string "for that remaining 1%.$"

SevaultCanyon_Combate_Andra_Texto_15:
	.string "You're still on fire, huh? Good to know\n"
	.string "you're still leveling up. The more you\l"
	.string "get better, the more I'll up my level\l"
	.string "too. Two rivals pushing each other to\l"
	.string "the limit can reach heights they could\l"
	.string "never reach on their own. I'll be ready\l"
	.string "for our next battle, no doubt.$"

SevaultCanyon_Combate_Andra_Texto_16:
	.string "We must be close to reaching the\n"
	.string "southern ruins. It's no surprise they\l"
	.string "erected them here the pure natural vibe\l"
	.string "is spectacular.$"

SevaultCanyon_Combate_Andra_Texto_17:
	.string "If you're looking for me, I'll likely be\n"
	.string "chilling in the chambers of those seven\l"
	.string "small islands down south. Keep an eye\l"
	.string "out!$"

SevaultCanyon_Combate_Andra_Move_1:
walk_in_place_up
step_end

SevaultCanyon_Combate_Andra_Move_2:
emote_exclamation_mark
step_end

SevaultCanyon_Combate_Andra_Move_3:
walk_in_place_down
step_end

SevaultCanyon_Combate_Andra_Move_3.1:
walk_left
walk_in_place_down
step_end

SevaultCanyon_Combate_Andra_Move_4:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
face_up
step_end

SevaultCanyon_Combate_Andra_Move_5:
face_left
step_end

SevaultCanyon_Combate_Andra_Move_6:
face_down
step_end

SevaultCanyon_Combate_Andra_Move_7:
walk_in_place_right
walk_in_place_up
step_end

SevaultCanyon_Combate_Andra_Move_8:
walk_right
walk_up
walk_up
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_right
walk_right
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
walk_down
walk_down
walk_down
walk_down
step_end
