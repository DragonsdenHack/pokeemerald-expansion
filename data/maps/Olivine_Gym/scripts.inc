Olivine_Gym_MapScripts::
	.byte 0

OlivineGym2::
lock     
faceplayer     
msgbox OlivineCity_Gym_Text_2, MSGBOX_DEFAULT
release     
end

OlivineCity_Gym_Text_2:
	.string "I see CROM at such a distant level, and\n"
	.string "here I am with my ONIX and MAGNEMITE.\l"
	.string "He says not to worry and to focus on\l"
	.string "the process, but I believe there are\l"
	.string "TRAINERS and generations that are\l"
	.string "unique. This one, unfortunately, is\l"
	.string "living his last stand.$"



OlivineGym3::
end



OlivineGym4::
end

Olivine_Gym_Combate_Crom::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 142
goto_if_gt Olivine_Gym_Combate_Crom_2
msgbox Olivine_Gym_Combate_Crom_Texto_1 MSGBOX_NPC
msgbox Olivine_Gym_Combate_Crom_Texto_2 MSGBOX_NPC
msgbox Olivine_Gym_Combate_Crom_Texto_3 MSGBOX_NPC
delay 20
msgbox Olivine_Gym_Combate_Crom_Texto_4 MSGBOX_NPC
playse 414
delay 40
msgbox Olivine_Gym_Combate_Crom_Texto_5 MSGBOX_NPC
delay 20
msgbox Olivine_Gym_Combate_Crom_Texto_6 MSGBOX_NPC
trainerbattle_no_intro TRAINER_CROM, Olivine_Gym_Combate_Crom_Texto_7
msgbox Olivine_Gym_Combate_Crom_Texto_8 MSGBOX_NPC
msgbox Olivine_Gym_Combate_Crom_Texto_9 MSGBOX_NPC
delay 10
playfanfare MUS_OBTAIN_BADGE
msgbox Olivine_Gym_Combate_Crom_Texto_9.1 MSGBOX_DEFAULT
waitfanfare
msgbox Olivine_Gym_Combate_Crom_Texto_9.2 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
msgbox Olivine_Gym_Combate_Crom_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_RIOLU, 25, ITEM_LUCARIONITE
waitfanfare
msgbox Olivine_Gym_Combate_Crom_Texto_11 MSGBOX_NPC
delay 15
msgbox Olivine_Gym_Combate_Crom_Texto_11.10 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM77
msgbox Olivine_Gym_Combate_Crom_Texto_11.2 MSGBOX_DEFAULT
waitfanfare
msgbox Olivine_Gym_Combate_Crom_Texto_11.3 MSGBOX_NPC
delay 10
msgbox Olivine_Gym_Combate_Crom_Texto_12 MSGBOX_NPC
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_SS_TICKET
msgbox Olivine_Gym_Combate_Crom_Texto_11.1 MSGBOX_DEFAULT
waitfanfare
msgbox Olivine_Gym_Combate_Crom_Texto_13 MSGBOX_NPC
setflag FLAG_BADGE14_GET
clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
setvar VAR_UNUSED_0x40F7, 143
release
end

Olivine_Gym_Combate_Crom_Texto_11.3:
	.string "With ROCK POLISH you'll unleash the\n"
	.string "offensive potential of many ROCK and\l"
	.string "STEEL TYPE POKÉMON. RHYPERIOR and\l"
	.string "METAGROSS will be real threats.$"

Olivine_Gym_Combate_Crom_Texto_11.10:
.string "Also take this TM.$"

Olivine_Gym_Combate_Crom_Texto_11.2:
.string "{PLAYER} obtained the TM77\n"
	.string "ROCK POLISH from CROM!!$"

Olivine_Gym_Combate_Crom_Texto_11.1:
	.string "You obtained the PARTY TICKET from\n"
	.string "LEADER CROM!!$"

Olivine_Gym_Combate_Crom_2::
msgbox Olivine_Gym_Combate_Crom_Texto_14 MSGBOX_NPC
release
end

Olivine_Gym_Combate_Crom_Texto_1:
	.string "CROM: Okay, challenger, it's time for the\n"
	.string "truth.$"

Olivine_Gym_Combate_Crom_Texto_2:
	.string "You know the STEEL TYPE, right? This\n"
	.string "gym specializes in it, no other type has\l"
	.string "as many resistances. When combined\l"
	.string "with types like FLYING or PSYCHIC, the\l"
	.string "advantage becomes absurd.$"

Olivine_Gym_Combate_Crom_Texto_3:
	.string "Many in JOHTO still don't know it; some\n"
	.string "still believe that MAGNEMITE is a pure\l"
	.string "ELECTRIC TYPE, especially in KANTO. But\l"
	.string "my work in OLIVINE CITY has helped\l"
	.string "raise awareness of this type. JASMINE\l"
	.string "will surely bring it even more into the\l"
	.string "spotlight.$"

Olivine_Gym_Combate_Crom_Texto_4:
.string "{PAUSE 25}…{PAUSE 25}$"

Olivine_Gym_Combate_Crom_Texto_5:
	.string "I see that fierce will in your eyes. Like\n"
	.string "me, you've forged your team through a\l"
	.string "thousand battles.$"

Olivine_Gym_Combate_Crom_Texto_6:
	.string "Despite your youth, you've already seen\n"
	.string "many things and visited many places,\l"
	.string "and there's still more ahead… Battles\l"
	.string "like these are what give meaning to\l"
	.string "your journey through JOHTO, right? Well\l"
	.string "then, let's not waste any more time,\l"
	.string "let's see if you can even slightly bend\l"
	.string "the will of my resilient POKÉMON!$"

Olivine_Gym_Combate_Crom_Texto_7:
.string "Oh…\n"
	.string "I can't remember the last time\l"
	.string "I saw something like this.$"

Olivine_Gym_Combate_Crom_Texto_8:
	.string "No one has been a match for my\n"
	.string "SKARMORY since that day, long ago, when\l"
	.string "it transformed for the last time. I\l"
	.string "thought I had already discovered the\l"
	.string "secret of steel that day, but it seems\l"
	.string "there is always something new to learn.$"

Olivine_Gym_Combate_Crom_Texto_9:
	.string "I will be eternally grateful to you, as I\n"
	.string "have just concluded my time in OLIVINE\l"
	.string "CITY with a battle worthy of being\l"
	.string "witnessed in the POKÉMON OLYMPUS.\l"
	.string "Therefore, I want you to take care of\l"
	.string "this little one.$"

Olivine_Gym_Combate_Crom_Texto_9.1:
	.string "Here it is the MINERALBADGE,\n"
	.string "take it.$"

Olivine_Gym_Combate_Crom_Texto_9.2:
	.string "And also, I want you to take\n"
	.string "care of this little one.$"

Olivine_Gym_Combate_Crom_Texto_10:
.string "YOU OBTAINED A LV.25 RIOLU!!$"

Olivine_Gym_Combate_Crom_Texto_11:
	.string "Its evolution is one of my favorite\n"
	.string "POKÉMON, its profile as a STEEL TYPE is\l"
	.string "unique. Thanks to FIGHTING TYPE and\l"
	.string "its ability to concentrate, it will\l"
	.string "master STEEL like few others. I've\l"
	.string "taken the trouble to equip it with a\l"
	.string "little gift that will enhance its power\l"
	.string "even more.$"

Olivine_Gym_Combate_Crom_Texto_12:
	.string "And one last thing, you should attend\n"
	.string "the opening event of OLIVINE PORT.\l"
	.string "Take this.$"

Olivine_Gym_Combate_Crom_Texto_13:
	.string "They're throwing a party to celebrate\n"
	.string "the expansion of the PORT and the new\l"
	.string "connections with other regions. You can\l"
	.string "attend with this TICKET.$"

Olivine_Gym_Combate_Crom_Texto_14:
	.string "I don't have much left to do here. I'll\n"
	.string "pack my bags soon and leave OLIVINE\l"
	.string "CITY, maybe once the buzz from the\l"
	.string "PORT opening settles.$"


OlivineGym_Gym_Dude::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 142
goto_if_gt OlivineGym_Gym_Dude_2
compare VAR_UNUSED_0x40F7, 141
goto_if_gt OlivineGym_Gym_Dude_3
msgbox OlivineGym_Gym_Dude_Texto_1 MSGBOX_NPC
release
end

OlivineGym_Gym_Dude_2::
msgbox OlivineGym_Gym_Dude_Texto_2 MSGBOX_NPC
release
end

OlivineGym_Gym_Dude_3::
msgbox OlivineGym_Gym_Dude_Texto_3 MSGBOX_NPC
release
end

OlivineGym_Gym_Dude_Texto_1:
	.string "Our LEADER is not here right now, saying\n"
	.string "he wanted to discuss some things with\l"
	.string "his old friend: the LIGHTHOUSE owner.$"

OlivineGym_Gym_Dude_Texto_2:
	.string "I can't believe it yet, you've defeated\n"
	.string "CROM! You possess the required\l"
	.string "determination to master the STEEL\l"
	.string "TYPE! Don't let anyone bend it!$"

OlivineGym_Gym_Dude_Texto_3:
	.string "It's said CROM was the one who created\n"
	.string "the STEEL TYPE, becoming its god. It is\l"
	.string "just beliefs, but… Can you defeat the\l"
	.string "myth? Neither FIRE nor GROUND TYPE will\l"
	.string "give you a clear advantage, man!$"




OlivineGym_Estatua::
lock
compare VAR_UNUSED_0x40F7, 142
goto_if_gt OlivineGym_Estatua_2
msgbox OlivineGym_Estatua_Texto_1 MSGBOX_AUTOCLOSE
release
end


OlivineGym_Estatua_2::
msgbox OlivineGym_Estatua_Texto_2 MSGBOX_AUTOCLOSE
release
end


OlivineGym_Estatua_Texto_1:
	.string "OLIVINE POKÉMON GYM\n"
	.string "LEADER: CROM\p"
	.string "WINNING TRAINERS:\n"
	.string "(It is empty!)$"


OlivineGym_Estatua_Texto_2:
	.string "OLIVINE POKÉMON GYM\n"
	.string "LEADER: CROM\p"
	.string "WINNING TRAINERS:\n"
	.string "{PLAYER}$"

