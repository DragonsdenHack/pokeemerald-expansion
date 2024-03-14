MahoganyTown_Gym_MapScripts::
	.byte 0

MahoganyTownGym1::
end



MahoganyTownGym2::
end



MahoganyTownGym4::
end



MahoganyTownGym5::
end



MahoganyTownGym6::
end



MahoganyTownGym7::
end



MahoganyTownGym_EventScript_Guay::
	trainerbattle_single TRAINER_BRYAN, MahoganyTownGym_Text_GuayIntro, MahoganyTownGym_Text_GuayDefeated
	msgbox MahoganyTownGym_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end



MahoganyTownGym_EventScript_Guay2::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, MahoganyTownGym_Text_Guay2Intro, MahoganyTownGym_Text_Guay2Defeated
	msgbox MahoganyTownGym_Text_Guay2PostBattle, MSGBOX_AUTOCLOSE
	end



MahoganyTownGym_EventScript_Guay3::
	trainerbattle_single TRAINER_ISABELLA, MahoganyTownGym_Text_Guay3Intro, MahoganyTownGym_Text_Guay3Defeated
	msgbox MahoganyTownGym_Text_Guay3PostBattle, MSGBOX_AUTOCLOSE
	end



MahoganyTownGym_EventScript_Guay4::
	trainerbattle_single TRAINER_GRUNT_JAGGED_PASS, MahoganyTownGym_Text_Guay4Intro, MahoganyTownGym_Text_Guay4Defeated
	msgbox MahoganyTownGym_Text_Guay4PostBattle, MSGBOX_AUTOCLOSE
	end

MahoganyTown_Gym_Combate_Fredo::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 164
goto_if_gt MahoganyTown_Gym_Combate_Fredo_2
msgbox MahoganyTown_Gym_Combate_Fredo_Texto_1 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_Gym_Combate_Fredo_Texto_2 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_Gym_Combate_Fredo_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox MahoganyTown_Gym_Combate_Fredo_Texto_4 MSGBOX_AUTOCLOSE
playse 414
delay 40
msgbox MahoganyTown_Gym_Combate_Fredo_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox MahoganyTown_Gym_Combate_Fredo_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_FREDO, MahoganyTown_Gym_Combate_Fredo_Texto_7
msgbox MahoganyTown_Gym_Combate_Fredo_Texto_8 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_Gym_Combate_Fredo_Texto_9 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_OBTAIN_BADGE
msgbox MahoganyTown_Gym_Combate_Fredo_Texto_9.1 MSGBOX_DEFAULT
waitfanfare
msgbox MahoganyTown_Gym_Combate_Fredo_Texto_9.2 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox MahoganyTown_Gym_Combate_Fredo_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_FRIGIBAX, 25, ITEM_NONE
waitfanfare
msgbox MahoganyTown_Gym_Combate_Fredo_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox MahoganyTown_Gym_Combate_Texto_11.1 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM84
msgbox MahoganyTown_Gym_Combate_Texto_11.2 MSGBOX_DEFAULT
waitfanfare
msgbox MahoganyTown_Gym_Combate_Texto_11.3 MSGBOX_NPC
setflag FLAG_BADGE15_GET
setflag FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN
setvar VAR_UNUSED_0x40F7, 165
release
end

MahoganyTown_Gym_Combate_Texto_11.1:
.string "Hmm… no doubt, you deserve this TM.$"

MahoganyTown_Gym_Combate_Texto_11.2:
.string "{PLAYER} obtained TM60\n"
	.string "FROST BREATH from PRYCE!!$"

MahoganyTown_Gym_Combate_Texto_11.3:
	.string "FROST BREATH will be always a critical\n"
	.string "hit, making sure to always deal good\l"
	.string "damage.$"




MahoganyTown_Gym_Combate_Fredo_2::
msgbox MahoganyTown_Gym_Combate_Fredo_Texto_12 MSGBOX_AUTOCLOSE
release
end

MahoganyTown_Gym_Combate_Fredo_Texto_1:
	.string "PRYCE: Oh, {PLAYER}, so you want to\n"
	.string "challenge me.$"

MahoganyTown_Gym_Combate_Fredo_Texto_2:
	.string "Let me tell you, I've been involved in\n"
	.string "the world of ICE TYPE POKÉMON for 50\l"
	.string "years. That ELITE FOUR MEMBER LORELEI\l"
	.string "you have in KANTO hasn't even\l"
	.string "scratched the surface of what I've\l"
	.string "seen, you know?$"

MahoganyTown_Gym_Combate_Fredo_Texto_3:
	.string "Many changes are coming to JOHTO, I\n"
	.string "just hope I can rise to the occasion\l"
	.string "and adapt to them. I hope to see the\l"
	.string "region thrive alongside KANTO at least.$"

MahoganyTown_Gym_Combate_Fredo_Texto_4:
.string "...$"

MahoganyTown_Gym_Combate_Fredo_Texto_5:
	.string "{PLAYER}, you must have done\n"
	.string "something right to hold the position\l"
	.string "you do in TEAM ROCKET at such a young\l"
	.string "age. You deserve nothing less than I do\l"
	.string "my best.$"

MahoganyTown_Gym_Combate_Fredo_Texto_6:
	.string "No one in decades has been able to\n"
	.string "extinguish the unwavering will of my\l"
	.string "oldest traveling companions.\l"
	.string "{PLAYER}! Let's see the bond you've\l"
	.string "been forging with your team!$"

MahoganyTown_Gym_Combate_Fredo_Texto_7:
.string "Actually… This time\n"
	.string "I've played all my cards.$"

MahoganyTown_Gym_Combate_Fredo_Texto_8:
	.string "No one has come close to putting this\n"
	.string "team in trouble, let alone my unique\l"
	.string "MAMOSWINE and ARTICUNO. I thought in\l"
	.string "KANTO there were only decent TRAINERS,\l"
	.string "but none extraordinary. You've shown me\l"
	.string "that the world is much bigger than I\l"
	.string "thought.$"

MahoganyTown_Gym_Combate_Fredo_Texto_9:
	.string "Hace años que tengo esto criando polvo,\n"
	.string "creí que nunca más volvería a dar una.$"

MahoganyTown_Gym_Combate_Fredo_Texto_9.1:
	.string "Toma, aquí tienes la\n"
	.string "MEDALLA GLACIAR.$"

MahoganyTown_Gym_Combate_Fredo_Texto_9.2:
	.string "Take this POKÉMON, you won't find it\n"
	.string "anywhere in KANTO or JOHTO, and it may\l"
	.string "be useful to you.$"

MahoganyTown_Gym_Combate_Fredo_Texto_10:
.string "YOU OBTAINED A BERGMITE AT LV.25!!$"

MahoganyTown_Gym_Combate_Fredo_Texto_11:
	.string "Hace décadas que guardo el secreto de\n"
	.string "este POKÉMON, el único\l"
	.string "PSEUDOLEGENDARIO del TIPO HIELO que\l"
	.string "verás. Si lo entrenas bien, muy pocos\l"
	.string "podrán igualar su poder físico.$"

MahoganyTown_Gym_Combate_Fredo_Texto_12:
	.string "Spring arrives when the ice and snow\n"
	.string "melt away. You and your POKÉMON will\l"
	.string "spend many years together, and I hope\l"
	.string "you enjoy that journey. I trust that\l"
	.string "both of us will see JOHTO flourish like\l"
	.string "never before.$"


MahoganyGym_Gym_Dude::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 164
goto_if_gt MahoganyGym_Gym_Dude_2
msgbox MahoganyGym_Gym_Dude_Texto_1 MSGBOX_NPC
release
end

MahoganyGym_Gym_Dude_2::
msgbox MahoganyGym_Gym_Dude_Texto_2 MSGBOX_NPC
release
end

MahoganyGym_Gym_Dude_Texto_1:
	.string "Are you really going to challenge PRYCE\n"
	.string "in a real battle? Let me give you some\l"
	.string "advice: attack first before he does.\l"
	.string "The offense of his ICE TYPE POKÉMON is\l"
	.string "relentless. You'll need to use FIRE,\l"
	.string "FIGHTING, or ROCK TYPES moves,\l"
	.string "combining speed and power. Good luck!$"

MahoganyGym_Gym_Dude_Texto_2:
	.string "You did it! You have defeated the\n"
	.string "iceman, I thought that no one could\l"
	.string "defeat that special ARTICUNO!$"


MahoganyGym_Estatua::
lock
compare VAR_UNUSED_0x40F7, 130
goto_if_gt MahoganyGym_Estatua_2
msgbox MahoganyGym_Estatua_Texto_1 MSGBOX_AUTOCLOSE
release
end

MahoganyGym_Estatua_2::
msgbox MahoganyGym_Estatua_Texto_2 MSGBOX_AUTOCLOSE
release
end


MahoganyGym_Estatua_Texto_1:
	.string "MAHOGANY POKÉMON GYM\n"
	.string "LEADER: PRYCE\p"
	.string "WINNING TRAINERS:\n"
	.string "(It is empty!)$"


MahoganyGym_Estatua_Texto_2:
	.string "MAHOGANY POKÉMON GYM\n"
	.string "LEADER: PRYCE\p"
	.string "WINNING TRAINERS:\n"
	.string "{PLAYER}$"

