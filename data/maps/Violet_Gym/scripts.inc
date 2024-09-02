Violet_Gym_MapScripts::
	.byte 0

VioletGym1::
end



VioletGym2::
end



VioletGym3::
end



VioletGym4::
end



VioletGym5::
end



VioletGym_EventScript_Chico::
	trainerbattle_single TRAINER_MIKE_2, VioletGym_Text_ChicoIntro, VioletGym_Text_ChicoDefeated
	msgbox VioletGym_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



VioletGym_EventScript_Chico2::
	trainerbattle_single TRAINER_TRENT_2, VioletGym_Text_Chico2Intro, VioletGym_Text_Chico2Defeated
	msgbox VioletGym_Text_Chico2PostBattle, MSGBOX_AUTOCLOSE
	end

VioletGym_Frontera::
lock
compare VAR_UNUSED_0x40F7, 122
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
playse SE_PIN
applymovement 4, VioletGym_Frontera_Move_1
applymovement OBJ_EVENT_ID_PLAYER, VioletGym_Frontera_Move_2
waitmovement 0x0
msgbox VioletGym_Frontera_Texto_1 MSGBOX_AUTOCLOSE
applymovement 4, VioletGym_Frontera_Move_2
applymovement OBJ_EVENT_ID_PLAYER, VioletGym_Frontera_Move_3
waitmovement 0x0
release
end

VioletGym_Frontera_Texto_1:
	.string "Hey! Where do you think you're headed?\n"
	.string "Our LEADER's no longer accepting\l"
	.string "challenges from aspiring trainers. If\l"
	.string "you wish to battle, you'll have to\l"
	.string "change his mind.$"

VioletGym_Frontera_Move_1:
face_up
emote_exclamation_mark
step_end

VioletGym_Frontera_Move_2:
walk_in_place_down
step_end

VioletGym_Frontera_Move_3:
walk_slow_down
step_end

VioletGym_Estatua::
lock
compare VAR_UNUSED_0x40F7, 124
goto_if_gt VioletGym_Estatua_2
msgbox VioletGym_Estatua_Texto_1 MSGBOX_AUTOCLOSE
release
end

VioletGym_Estatua_2::
msgbox VioletGym_Estatua_Texto_2 MSGBOX_AUTOCLOSE
release
end


VioletGym_Estatua_Texto_1:
	.string "VIOLET POKÉMON GYM\n"
	.string "LEADER: FALKNER\p"
	.string "WINNING TRAINERS:\n"
	.string "(It is empty!)$"


VioletGym_Estatua_Texto_2:
	.string "VIOLET POKÉMON GYM\n"
	.string "LEADER: FALKNER\p"
	.string "WINNING TRAINERS:\n"
	.string "{PLAYER}$"


VioletGym_Gym_Dude::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 124
goto_if_gt VioletGym_Gym_Dude_2
compare VAR_UNUSED_0x40F7, 122
goto_if_gt VioletGym_Gym_Dude_3
msgbox VioletGym_Gym_Dude_Texto_1 MSGBOX_NPC
release
end

VioletGym_Gym_Dude_2::
msgbox VioletGym_Gym_Dude_Texto_2 MSGBOX_NPC
release
end

VioletGym_Gym_Dude_3::
msgbox VioletGym_Gym_Dude_Texto_3 MSGBOX_NPC
release
end

VioletGym_Gym_Dude_Texto_1:
	.string "I'm sorry to disappoint you, kid, but\n"
	.string "even though FALKNER has returned from\l"
	.string "his long journey, he won't battle\l"
	.string "anyone. Besides, with the current\l"
	.string "policy focusing the POKÉMON LEAGUE on\l"
	.string "KANTO, the GYMS in JOHTO are obsolete.\l"
	.string "We're only here out of respect for this\l"
	.string "place and what it once was.$"

VioletGym_Gym_Dude_Texto_2:
	.string "It's been incredible! I've never seen\n"
	.string "FALKNER lose before. This battle will be\l"
	.string "remembered forever, there's no doubt\l"
	.string "about it!$"

VioletGym_Gym_Dude_Texto_3:
	.string "I can't believe it! A challenger! The GYM\n"
	.string "will have a high-flying battle again\l"
	.string "after so long! Listen, let me give you\l"
	.string "some advice. FALKNER knows everything\l"
	.string "about FLYING TYPEs, even how to defend\l"
	.string "against its weaknesses. But still, his\l"
	.string "whole team's weak to ROCK. You'll put\l"
	.string "the hurt on him if you manage to\l"
	.string "outspeed him. But watch out unless you\l"
	.string "wanna suddenly be six down out of the\l"
	.string "blue. The birds he's assembled across\l"
	.string "various regions are built to maximize\l"
	.string "speed and offense. I'd say to take a\l"
	.string "ROCK TYPE wearing an ASSAULT VEST and\l"
	.string "some ELECTRIC speedsters for the best\l"
	.string "odds of success. Good luck!$"

Violet_Gym_Conversacion_Pegaso::
lock
applymovement OBJ_EVENT_ID_PLAYER, Violet_Gym_Conversacion_Pegaso_Move_1
waitmovement 0x0
msgbox Violet_Gym_Conversacion_Pegaso_Texto_1 MSGBOX_AUTOCLOSE
applymovement 3, Violet_Gym_Conversacion_Pegaso_Move_2
waitmovement 0x0
msgbox Violet_Gym_Conversacion_Pegaso_Texto_2 MSGBOX_AUTOCLOSE
applymovement 3, Violet_Gym_Conversacion_Pegaso_Move_3
waitmovement 0x0
msgbox Violet_Gym_Conversacion_Pegaso_Texto_3 MSGBOX_AUTOCLOSE
msgbox Violet_Gym_Conversacion_Pegaso_Texto_4 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, Violet_Gym_Conversacion_Pegaso_Move_4
waitmovement 0x0
delay 20
applymovement 5, Violet_Gym_Conversacion_Pegaso_Move_1
waitmovement 0x0
msgbox Violet_Gym_Conversacion_Pegaso_Texto_5 MSGBOX_AUTOCLOSE
msgbox Violet_Gym_Conversacion_Pegaso_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox Violet_Gym_Conversacion_Pegaso_Texto_7 MSGBOX_AUTOCLOSE
delay 15
setflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY
fadescreen 1
delay 20
removeobject 5
fadescreen 0
delay 15
clearflag FLAG_HIDE_PETALBURG_GYM_GREETER
clearflag FLAG_HIDE_ROUTE_128_STEVEN
setvar VAR_UNUSED_0x40F7, 124
release
end

Violet_Gym_Conversacion_Pegaso_Texto_1:
	.string "FALKNER: Come on, Dad! I want to know\n"
	.string "how you've reached the point of being\l"
	.string "able to have that POKÉMON on your team!\l"
	.string "It wasn't destined to be a FLYING TYPE,\l"
	.string "yet under your care, it has become the\l"
	.string "purest FLYING TYPE I know.$"

Violet_Gym_Conversacion_Pegaso_Texto_2:
	.string "FALKNER SR.: It's a process words can't\n"
	.string "describe. You have to be there to\l"
	.string "experience it firsthand.$"

Violet_Gym_Conversacion_Pegaso_Texto_3:
	.string "I knew in that specimen beat the\n"
	.string "unyielding will to fly. We both shared\l"
	.string "that passion for the sky, and thanks to\l"
	.string "that, we soared ever higher together\l"
	.string "than we ever could've separately.$"

Violet_Gym_Conversacion_Pegaso_Texto_4:
	.string "Now, return to SPROUT TOWER. I have a\n"
	.string "pending battle.$"

Violet_Gym_Conversacion_Pegaso_Texto_5:
.string "FALKNER: But, Dad!\n"
	.string "I want to see that battle!$"

Violet_Gym_Conversacion_Pegaso_Texto_6:
	.string "FALKNER SR.: You aren't ready yet, and I\n"
	.string "won't argue about this with you.$"

Violet_Gym_Conversacion_Pegaso_Texto_7:
.string "FALKNER: …$"

Violet_Gym_Conversacion_Pegaso_Move_1:
walk_in_place_up
step_end

Violet_Gym_Conversacion_Pegaso_Move_2:
face_up
step_end

Violet_Gym_Conversacion_Pegaso_Move_3:
face_down
step_end

Violet_Gym_Conversacion_Pegaso_Move_4:
emote_exclamation_mark
face_down
step_end

Violet_Gym_Combate_Pegaso::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 124
goto_if_gt Violet_Gym_Combate_Pegaso_2
msgbox Violet_Gym_Combate_Pegaso_Texto_1 MSGBOX_NPC
msgbox Violet_Gym_Combate_Pegaso_Texto_2 MSGBOX_NPC
msgbox Violet_Gym_Combate_Pegaso_Texto_3 MSGBOX_NPC
delay 20
msgbox Violet_Gym_Combate_Pegaso_Texto_4 MSGBOX_NPC
playse 414
delay 40
msgbox Violet_Gym_Combate_Pegaso_Texto_5 MSGBOX_NPC
delay 20
msgbox Violet_Gym_Combate_Pegaso_Texto_6 MSGBOX_NPC
trainerbattle_no_intro TRAINER_PEGASO, Violet_Gym_Combate_Pegaso_Texto_7
msgbox Violet_Gym_Combate_Pegaso_Texto_8 MSGBOX_NPC
msgbox Violet_Gym_Combate_Pegaso_Texto_9 MSGBOX_NPC
delay 10
playfanfare MUS_OBTAIN_BADGE
msgbox Violet_Gym_Combate_Pegaso_Texto_9.1 MSGBOX_DEFAULT
waitfanfare
msgbox Violet_Gym_Combate_Pegaso_Texto_9.2 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
msgbox Violet_Gym_Combate_Pegaso_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_RUFFLET, 25, ITEM_NONE
waitfanfare
msgbox Violet_Gym_Combate_Pegaso_Texto_11 MSGBOX_NPC
delay 10
msgbox Violet_Gym_Combate_Pegaso_Texto_11.1 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM61
msgbox Violet_Gym_Combate_Pegaso_Texto_11.2 MSGBOX_DEFAULT
waitfanfare
msgbox Violet_Gym_Combate_Pegaso_Texto_11.3 MSGBOX_NPC
setflag FLAG_BADGE09_GET
clearflag FLAG_HIDE_BATTLE_FRONTIER_RECEPTION_GATE_SCOTT
setflag FLAG_HIDE_BATTLE_FRONTIER_RECEPTION_GATE_SCOTT
setvar VAR_UNUSED_0x40F7, 125
release
end

Violet_Gym_Combate_Pegaso_Texto_11.3:
	.string "With ROOST, FLYING POKÉMON perch\n"
	.string "themselves for a quick rest during\l"
	.string "battle. They'll drop all their FLYING\l"
	.string "resistances and weaknesses, so plan\l"
	.string "ahead to make the best of it.$"

Violet_Gym_Combate_Pegaso_Texto_11.1:
	.string "Wait, I want you to take this with you.$"

Violet_Gym_Combate_Pegaso_Texto_11.2:
	.string "{PLAYER} obtained TM61 ROOST from\n"
	.string "FALKNER!!$"



Violet_Gym_Combate_Pegaso_2::
lock
faceplayer
msgbox Violet_Gym_Combate_Pegaso_Texto_12 MSGBOX_NPC
release
end

Violet_Gym_Combate_Pegaso_Texto_1:
	.string "FALKNER: Excuse me, but I take my son's\n"
	.string "education seriously. Someday, he'll be\l"
	.string "the one to manage this GYM, and I want\l"
	.string "him to be ready.$"

Violet_Gym_Combate_Pegaso_Texto_2:
	.string "However, he must create his own path,\n"
	.string "learn the fundamentals of POKÉMON\l"
	.string "training, and then forge his own story.\l"
	.string "That's why I don't want him to see a\l"
	.string "battle like this, at a level that would\l"
	.string "only create confusion and a rain of\l"
	.string "unnecessary questions.$"

Violet_Gym_Combate_Pegaso_Texto_3:
	.string "But now, let's talk about you. I must\n"
	.string "admit I feel curious about what you're\l"
	.string "capable of. I'd never thought on my\l"
	.string "return to VIOLET, I'd encounter a\l"
	.string "TRAINER like you.$"

Violet_Gym_Combate_Pegaso_Texto_4:
.string "{PAUSE 15}…{PAUSE 15}$"

Violet_Gym_Combate_Pegaso_Texto_5:
	.string "The art of training and battling with\n"
	.string "POKÉMON is a privilege, a gift for both\l"
	.string "you and your team.$"

Violet_Gym_Combate_Pegaso_Texto_6:
	.string "I will use the most loyal POKÉMON that\n"
	.string "have accompanied me throughout\l"
	.string "countless journeys and regions! Show\l"
	.string "me the level of excellence you have\l"
	.string "achieved with yours!$"

Violet_Gym_Combate_Pegaso_Texto_7:
.string "Extraordinary…\n"
	.string "Even more, you are so young.$"

Violet_Gym_Combate_Pegaso_Texto_8:
	.string "No one has been able to defeat my\n"
	.string "beloved RAPIDASH. Only a true TRAINER\l"
	.string "could break the bond that unites us.$"

Violet_Gym_Combate_Pegaso_Texto_9:
	.string "As you're aware, the JOHTO GYMS\n"
	.string "currently hold no significance for the\l"
	.string "POKÉMON LEAGUE, hence the lack of\l"
	.string "conventional BADGES. Nevertheless, I'll\l"
	.string "offer you something far more useful; I\l"
	.string "want you to take this POKÉMON with you.$"

Violet_Gym_Combate_Pegaso_Texto_9.1:
	.string "So, you have earned\n"
	.string "the ZEPHYR BADGE.$"

Violet_Gym_Combate_Pegaso_Texto_9.2:
	.string "Also, I want to give you something more\n"
	.string "practical: could you take this\l"
	.string "POKÉMON?$"

Violet_Gym_Combate_Pegaso_Texto_10:
.string "YOU OBTAINED A LV.25 RUFFLET!!$"

Violet_Gym_Combate_Pegaso_Texto_11:
	.string "RUFFLET's evolutionary line is\n"
	.string "considered the most promising among\l"
	.string "the regional avian species,\l"
	.string "characterized by the classic\l"
	.string "NORMAL-FLYING type. I obtained it\l"
	.string "during one of my numerous travels to\l"
	.string "UNOVA.$"

Violet_Gym_Combate_Pegaso_Texto_12:
	.string "This occasion, I'll be staying in JOHTO a\n"
	.string "bit longer before embarking on a new\l"
	.string "journey. I'll use the time to see how the\l"
	.string "region where I grew up has changed and\l"
	.string "visit my old friends.$"

