Azalea_Gym_MapScripts::
	.byte 0




AzaleaGym1::
end



AzaleaGym2::
end



AzaleaGym3::
end



AzaleaGym4::
end



AzaleaGym_EventScript_Cazabichos::
	trainerbattle_single TRAINER_WALLY_MAUVILLE, AzaleaGym_Text_CazabichosIntro, AzaleaGym_Text_CazabichosDefeated
	msgbox AzaleaGym_Text_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end



AzaleaGym_EventScript_Cazabichos2::
	trainerbattle_single TRAINER_WALLY_VR_2, AzaleaGym_Text_Cazabichos2Intro, AzaleaGym_Text_Cazabichos2Defeated
	msgbox AzaleaGym_Text_Cazabichos2PostBattle, MSGBOX_AUTOCLOSE
	end



AzaleaGym_EventScript_Sabio::
	trainerbattle_single TRAINER_WALLY_VR_3, AzaleaGym_Text_SabioIntro, AzaleaGym_Text_SabioDefeated
	msgbox AzaleaGym_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end


AzaleaGym_Combate_Cesar::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 130
goto_if_gt Azalea_Gym_Combate_Cesar_2
msgbox AzaleaGym_Combate_Cesar_Texto_1 MSGBOX_AUTOCLOSE
msgbox AzaleaGym_Combate_Cesar_Texto_2 MSGBOX_AUTOCLOSE
msgbox AzaleaGym_Combate_Cesar_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox AzaleaGym_Combate_Cesar_Texto_4 MSGBOX_AUTOCLOSE
playse 414
delay 40
msgbox AzaleaGym_Combate_Cesar_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox AzaleaGym_Combate_Cesar_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CESAR, AzaleaGym_Combate_Cesar_Texto_7
msgbox AzaleaGym_Combate_Cesar_Texto_8 MSGBOX_AUTOCLOSE
msgbox AzaleaGym_Combate_Cesar_Texto_9 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_OBTAIN_BADGE
msgbox AzaleaGym_Combate_Cesar_Texto_9.1 MSGBOX_DEFAULT
waitfanfare
msgbox AzaleaGym_Combate_Cesar_Texto_9.2 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox AzaleaGym_Combate_Cesar_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_GRUBBIN, 25, ITEM_NONE
waitfanfare
msgbox AzaleaGym_Combate_Cesar_Texto_11 MSGBOX_AUTOCLOSE
delay 10
msgbox AzaleaGym_Combate_Cesar_Texto_11.1 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM82
msgbox AzaleaGym_Combate_Cesar_Texto_11.2 MSGBOX_DEFAULT
waitfanfare
msgbox AzaleaGym_Combate_Cesar_Texto_11.3 MSGBOX_NPC
setflag FLAG_BADGE10_GET
setflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
setvar VAR_UNUSED_0x40F7, 131
release
end

AzaleaGym_Combate_Cesar_Texto_11.1:
.string "Ah, and one more thing. Take this.$"

AzaleaGym_Combate_Cesar_Texto_11.2:
	.string "{PLAYER} obtained the TM82 STRUGGLE\n"
	.string "BUG from KURT!!$"

AzaleaGym_Combate_Cesar_Texto_11.3:
	.string "Its power might not be impressive, but\n"
	.string "it will drain the opponent's SPECIAL\l"
	.string "ATTACK. If you use it strategically, it\l"
	.string "can be incredibly helpful, trust me!$"


Azalea_Gym_Combate_Cesar_2::
msgbox AzaleaGym_Combate_Cesar_Texto_12 MSGBOX_AUTOCLOSE
release
end

AzaleaGym_Combate_Cesar_Texto_1:
.string "KURT: {PLAYER}!\n"
	.string "You are here!$"

AzaleaGym_Combate_Cesar_Texto_2:
	.string "I must confess to you that I am eager\n"
	.string "to fight you. Despite my old age, my\l"
	.string "enthusiasm for POKÉMON battles is still\l"
	.string "as strong as when I was a child.$"

AzaleaGym_Combate_Cesar_Texto_3:
	.string "As I've reached a certain level and\n"
	.string "accumulated experiences, there are few\l"
	.string "things left to surprise me, and I find\l"
	.string "much more satisfaction in refining my\l"
	.string "own technique than in battling\l"
	.string "opponents who are already an open book\l"
	.string "to me and my team.$"

AzaleaGym_Combate_Cesar_Texto_4:
.string "{PAUSE 15}…{PAUSE 15}$"

AzaleaGym_Combate_Cesar_Texto_5:
	.string "ALDER has shown me that there's always\n"
	.string "something extraordinary out there to\l"
	.string "discover, even when you think you've\l"
	.string "seen it all.$"

AzaleaGym_Combate_Cesar_Texto_6:
	.string "Will you, {PLAYER}, be another one of\n"
	.string "those singularities capable of\l"
	.string "reigniting the passion in an old glory\l"
	.string "of JOHTO during battle? Let's find out!$"

AzaleaGym_Combate_Cesar_Texto_7:
.string "Ah… This combat yes.$"

AzaleaGym_Combate_Cesar_Texto_8:
	.string "I can't remember the last time that\n"
	.string "someone broke the bond between my\l"
	.string "BUTTERFREE and me.$"

AzaleaGym_Combate_Cesar_Texto_9:
	.string "Whoever you are, there is no doubt that\n"
	.string "you have high goals. The skill level of\l"
	.string "your team represents that. I would like\l"
	.string "you to have this POKÉMON, I got various\l"
	.string "specimens long ago, in one of my many\l"
	.string "journeys.$"

AzaleaGym_Combate_Cesar_Texto_9.1:
	.string "Take this, here you have\n"
	.string "the HIVEBADGE.$"

AzaleaGym_Combate_Cesar_Texto_9.2:
	.string "I also want you to keep this POKÉMON. I\n"
	.string "obtained several specimens a long time\l"
	.string "ago, during one of my many journeys.$"

AzaleaGym_Combate_Cesar_Texto_10:
.string "YOU OBTAINED A LV.25 GRUBBIN!!$"

AzaleaGym_Combate_Cesar_Texto_11:
	.string "VIKAVOLT is one of my favorite BUG\n"
	.string "TYPE; its impressive SPECIAL ATTACK is\l"
	.string "quite rare and can break through any\l"
	.string "team. It may not seem like it, but its\l"
	.string "electric discharges are more powerful\l"
	.string "than those of ZAPDOS itself!$"

AzaleaGym_Combate_Cesar_Texto_12:
	.string "Now that I think about it… I didn't ask\n"
	.string "ALDER where he came from. I'd like to at\l"
	.string "least have the regular form of that\l"
	.string "very special POKÉMON. That moth is the\l"
	.string "most extraordinary thing I've ever\l"
	.string "seen. It's a shame that the best\l"
	.string "flowers ultimately wither away, but\l"
	.string "nothing can take away the light they\l"
	.string "shed on the world during their time.$"



AzaleaGym_Gym_Dude::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 130
goto_if_gt AzaleaGym_Gym_Dude_2
msgbox AzaleaGym_Gym_Dude_Texto_1 MSGBOX_NPC
release
end

AzaleaGym_Gym_Dude_2::
msgbox AzaleaGym_Gym_Dude_Texto_2 MSGBOX_NPC
release
end

AzaleaGym_Gym_Dude_Texto_1:
	.string "I don't know who you are or why you are\n"
	.string "here. But I'm pleased to have you as a\l"
	.string "new challenger! Listen, KURT is a master\l"
	.string "of the BUG TYPE. You can use FLYING,\l"
	.string "FIRE, and ROCK against him, but I advise\l"
	.string "you to use them wisely. He can\l"
	.string "neutralize all of these types. Several\l"
	.string "of his POKÉMON know GIGA DRAIN, and for\l"
	.string "FLYING, he has a BUG/ELECTRIC type\l"
	.string "that shoots lightning like nothing else.\l"
	.string "That also applies to FIRE; he's got a\l"
	.string "tough dual WATER TYPE. You'll need to be\l"
	.string "sharp in one-on-one battles. If he\l"
	.string "takes down one of your POKÉMON first,\l"
	.string "it'll be tough to recover that\l"
	.string "advantage. Keep your spirits up!$"

AzaleaGym_Gym_Dude_Texto_2:
	.string "I can't believe my eyes! The last time I\n"
	.string "saw KURT lose like this, AZALEA TOWN and\l"
	.string "the ILEX FOREST weren't even separated\l"
	.string "by the security checkpoint!\l"
	.string "Unbelievable!$"



AzaleaGym_Estatua::
lock
compare VAR_UNUSED_0x40F7, 130
goto_if_gt AzaleaGym_Estatua_2
msgbox AzaleaGym_Estatua_Texto_1 MSGBOX_AUTOCLOSE
release
end

AzaleaGym_Estatua_2::
msgbox AzaleaGym_Estatua_Texto_2 MSGBOX_AUTOCLOSE
release
end


AzaleaGym_Estatua_Texto_1:
.string "AZALEA TOWN POKÉMON GYM \n"
	.string "LEADER: KURT\p"
	.string "WINNING TRAINERS:\n"
	.string "(It is empty!)$"

AzaleaGym_Estatua_Texto_2:
.string "AZALEA TOWN POKÉMON GYM\n"
	.string "LEADER: KURT\p"
	.string "WINNING TRAINERS:\n"
	.string "{PLAYER}$"
