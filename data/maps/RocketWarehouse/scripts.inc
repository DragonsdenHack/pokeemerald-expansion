RocketWarehouse_MapScripts::
	.byte 0

RocketWarehouse1::
end



RocketWarehouse3::
lock     
faceplayer     
msgbox RocketWarehouse_Text_3, MSGBOX_DEFAULT
release     
end

RocketWarehouse_Text_3:
    .string "By the energy that this POKE BALL gives\n"
    .string "off, clearly see that there is a quite\l"
    .string "powerful POKEMON inside…$"




RocketWarehouse4::
lock     
faceplayer     
msgbox RocketWarehouse_Text_4, MSGBOX_DEFAULT
release     
end

RocketWarehouse_Text_4:
    .string "ARCHER is waiting for you and the other\n"
    .string "ROCKET who was able to defeat me, go\l"
    .string "ahead and listen carefully to the\l"
    .string "details of the mission.$"



RocketWarehouse5::
end



RocketWarehouse6::
lock
compare VAR_ROUTE108_STATE, 6
goto_if_gt RocketWarehouse_Atlas_Mision_Secundaria_4
compare VAR_ROUTE108_STATE, 5
goto_if_gt RocketWarehouse_Atlas_Mision_Secundaria_3
compare VAR_ROUTE108_STATE, 3
goto_if_gt RocketWarehouse_Atlas_Mision_Secundaria_2
compare VAR_ROUTE108_STATE, 2
goto_if_gt RocketWarehouse_Atlas_Mision_Secundaria   
msgbox RocketWarehouse_Text_6, MSGBOX_SIGN
release     
end

RocketWarehouse_Atlas_Mision_Secundaria::
lock
faceplayer
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_1 MSGBOX_NPC
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_2 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouse_Atlas_Mision_Secundaria_Move_1
waitmovement 0x0
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_3 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouse_Atlas_Mision_Secundaria_Move_2
waitmovement 0x0
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_4 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouse_Atlas_Mision_Secundaria_Move_4
waitmovement 0x0
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_5 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouse_Atlas_Mision_Secundaria_Move_3
waitmovement 0x0
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_6 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE108_STATE, 4
release
end

RocketWarehouse_Atlas_Mision_Secundaria_2::
faceplayer
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_6 MSGBOX_AUTOCLOSE
release
end


RocketWarehouse_Atlas_Mision_Secundaria_3::
faceplayer
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_7 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 50000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_8 MSGBOX_DEFAULT
waitfanfare
applymovement 6, Atlas_Move_1
waitmovement 0x0
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_BOMUSHIKAA, 60, ITEM_FIRE_GEM
waitfanfare
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_11 MSGBOX_AUTOCLOSE 
applymovement 6, Atlas_Move_1
waitmovement 0x0
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE108_STATE, 7
release
end

RocketWarehouse_Atlas_Mision_Secundaria_4::
faceplayer
msgbox RocketWarehouse_Atlas_Mision_Secundaria_Texto_13 MSGBOX_AUTOCLOSE
release
end

Atlas_Move_1:
walk_in_place_down
step_end

RocketWarehouse_Atlas_Mision_Secundaria_Move_1:
walk_in_place_left
step_end

RocketWarehouse_Atlas_Mision_Secundaria_Move_2:
face_player
step_end

RocketWarehouse_Atlas_Mision_Secundaria_Move_3:
walk_in_place_down
step_end

RocketWarehouse_Atlas_Mision_Secundaria_Move_4:
face_left
step_end

RocketWarehouse_Atlas_Mision_Secundaria_Texto_1:
	.string "ARCHER: The prodigal son is back. Hey,\n"
	.string "{PLAYER}?$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_2:
	.string "After defeating a pure LEGENDARIES\n"
	.string "and PSEUDOLEGENDARIES team, what you\l"
	.string "might find within the confined space of\l"
	.string "these islands should pale in\l"
	.string "comparison, don't you think?$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_3:
	.string "Perhaps I can assist you. I am familiar\n"
	.string "with these islands and some of their\l"
	.string "secrets. Have you visited QUEST\l"
	.string "ISLAND? There's an old woman who\l"
	.string "resides in one of its houses.$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_4:
	.string "Inform her that you come on my behalf.\n"
	.string "She can reveal mysteries of these\l"
	.string "islands that someone like that RED\l"
	.string "would never find on his own.$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_5:
	.string "I hope this serves as a stimulus for\n"
	.string "you. These islands can be a paradise or\l"
	.string "an unbearable bore, depending on who\l"
	.string "you talk to.$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_6:
	.string "If you visit her and uncover her secret,\n"
	.string "come back here. I'll give you a reward\l"
	.string "personally, like I did in your first\l"
	.string "missions, right? Don't forget, the old\l"
	.string "lady lives in a QUEST ISLAND house.$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_7:
	.string "{PLAYER}! You've returned! ZOE has\n"
	.string "already informed me of everything!\l"
	.string "Honestly, despite defeating LANCE, I\l"
	.string "thought the technique and mastery of\l"
	.string "an old LEADER like her could put you in a\l"
	.string "tight spot. I see you take it seriously\l"
	.string "even on vacation.$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_8:
	.string "{PLAYER} has earned 50.000 POKÉ!$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_9:
	.string "And most importantly, I'll give you this\n"
	.string "little one. Trust me, it's hard for me to\l"
	.string "let go of him. I care for him, but I can't\l"
	.string "think of better hands for him to be in\l"
	.string "than yours.$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_10:
.string "YOU OBTAINED A LV.60 BOMUSHIKAA!$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_11:
	.string "It is a very special POKÉMON, with a big\n"
	.string "heart and loyal to its TRAINER. It\l"
	.string "belongs to the ancient JOHTO, extinct\l"
	.string "in the wild, only a few old trainers from\l"
	.string "the region possess one.$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_12:
	.string "It's known to share lines with DEWGONG,\n"
	.string "although its BASE STATS and type\l"
	.string "combination surpass it. Your\l"
	.string "determination and principles are\l"
	.string "perfect to care for it.$"

RocketWarehouse_Atlas_Mision_Secundaria_Texto_13:
	.string "The hidden GYM is just one example\n"
	.string "you've come to know thanks to me, but…\l"
	.string "How many magnificent places might we be\l"
	.string "missing out on due to a lack of\l"
	.string "appropriate contacts?$"

RocketWarehouse_Text_6:
     .string "ARCHER: ....\n"
	.string "(It seems he's deep working\l"
	.string "in a top proyect)$"



RocketWarehouse7::
end



RocketWarehouse8::
end



RocketWarehouse9::
lock     
faceplayer     
msgbox RocketWarehouse_Text_9, MSGBOX_DEFAULT
release     
end

RocketWarehouse_Text_9:
    .string "Data control is 21 century oil, who is\n"
    .string "able to control it, will dominate the\l"
    .string "entire world!$"




RocketWarehouse10::
end



RocketWarehouse11::
end



RocketWarehouse12::
end



RocketWarehouse13::
lock     
faceplayer     
msgbox RocketWarehouse_Text_13, MSGBOX_DEFAULT
release     
end

RocketWarehouse_Text_13:
    .string "By the energy that this POKE BALL gives\n"
    .string "off, clearly see that there is a quite\l"
    .string "powerful POKEMON inside…$"




RocketWarehouse14::
lock     
faceplayer     
msgbox RocketWarehouse_Text_14, MSGBOX_DEFAULT
release     
end

RocketWarehouse_Text_14:
    .string "TEAM ROCKET does not skimp on\n"
    .string "research, innovation and development\l"
    .string "expenses. That's why we are a\l"
    .string "reference organization on KANTO!$"




RocketWarehouse15::
lock     
faceplayer     
msgbox RocketWarehouse_Text_15, MSGBOX_DEFAULT
release     
end

RocketWarehouse_Text_15:
    .string "My life as a criminal makes me feel so\n"
    .string "alive! Do you feel the same, mate?$"




RocketWarehouse16::
lock     
faceplayer     
msgbox RocketWarehouse_Text_16, MSGBOX_DEFAULT
release     
end

RocketWarehouse_Text_16:
    .string "I'm on guard just in case, some kids\n"
    .string "these days like to be nosy where they\l"
    .string "shouldn't be.$"


RocketWarehouse_EventScript_Isaac::
	trainerbattle_single TRAINER_ISAAC_5, RocketWarehouse_Text_IsaacIntro, RocketWarehouse_Text_IsaacDefeated
	msgbox RocketWarehouse_Text_IsaacPostBattle, MSGBOX_AUTOCLOSE
	end



RocketWarehouse_EventScript_Recluta::
	trainerbattle_single TRAINER_ISAAC_3, RocketWarehouse_Text_ReclutaIntro, RocketWarehouse_Text_ReclutaDefeated
	msgbox RocketWarehouse_Text_ReclutaPostBattle, MSGBOX_AUTOCLOSE
	end



RocketWarehouse_EventScript_Recluta2::
	trainerbattle_single TRAINER_ISAAC_4, RocketWarehouse_Text_Isaac_4Intro, RocketWarehouse_Text_Isaac_4Defeated
	msgbox RocketWarehouse_Text_Isaac_4PostBattle, MSGBOX_AUTOCLOSE
	end



RocketWarehouseDocumento_106::
lock     
msgbox RocketWarehouseDocumento_Text_106, MSGBOX_DEFAULT
release     
end

RocketWarehouseDocumento_Text_106:
	.string "Based on our recent research, specific\n"
	.string "radio frequencies have the potential\l"
	.string "to directly impact the evolution\l"
	.string "process of POKÉMON, induce mutations\l"
	.string "that alter their original color, and in\l"
	.string "extreme instances, alter their overall\l"
	.string "BASE STATS, resulting in complete gene\l"
	.string "modification.$"



RocketWarehouseDocumento_100::
msgbox RocketWarehouseDocumento_Text_100, MSGBOX_SIGN   
end

RocketWarehouseDocumento_Text_100:
    .string "By the energy that this POKE BALL gives\n"
    .string "off, clearly see that there is a quite\l"
    .string "powerful POKEMON inside…$"




RocketWarehouseDocumento_101::
msgbox RocketWarehouseDocumento_Text_101, MSGBOX_SIGN   
end

RocketWarehouseDocumento_Text_101:
    .string "By the energy that this POKE BALL gives\n"
    .string "off, clearly see that there is a quite\l"
    .string "powerful POKEMON inside…$"



RocketWarehouseDocumento_102::
msgbox RocketWarehouseDocumento_Text_102, MSGBOX_SIGN   
end

RocketWarehouseDocumento_Text_102:
	.string "Hay un informe con gráficos\n"
	.string "y anotaciones en el monitor del PC.\p"
	.string "- La influencia de las ondas\n"
	.string "magnéticas en la evolución de los\l"
	.string "POKéMON - ...\p"
	.string "... ... ... ... ... ...\p"
	.string "Cualquiera entiende esto...$"



RocketWarehouseSoldado::
lock
faceplayer
applymovement 4, RocketWarehouse_Soldadomove2
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouse_Soldadomove1
waitmovement 0x0
msgbox RocketWarehouseSoldado_Text_Soldado1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LYDIA_1, RocketWarehouseSoldado_Text_Soldado2
msgbox RocketWarehouseSoldado_Text_Soldado3, MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 3
release
end

RocketWarehouseSoldad2::
lock
faceplayer
applymovement 4, RocketWarehouse_Soldadomove3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouse_Soldadomove1
waitmovement 0x0
msgbox RocketWarehouseSoldado_Text_Soldado1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LYDIA_1, RocketWarehouseSoldado_Text_Soldado2
msgbox RocketWarehouseSoldado_Text_Soldado3, MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 3
release
end

RocketWarehouseSoldad3::
lock
faceplayer
applymovement 4, RocketWarehouse_Soldadomove4
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouse_Soldadomove1
waitmovement 0x0
msgbox RocketWarehouseSoldado_Text_Soldado1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LYDIA_1, RocketWarehouseSoldado_Text_Soldado2
msgbox RocketWarehouseSoldado_Text_Soldado3, MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 3
release
end

RocketWarehouseSoldad4::
lock
faceplayer
applymovement 4, RocketWarehouse_Soldadomove5
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouse_Soldadomove6
waitmovement 0x0
msgbox RocketWarehouseSoldado_Text_Soldado1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LYDIA_1, RocketWarehouseSoldado_Text_Soldado2
msgbox RocketWarehouseSoldado_Text_Soldado3, MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 3
release
end


RocketWarehouseSoldado_Text_Soldado1:
    .string "Not so fast, ARCHER has expressly\n"
    .string "asked me to take care of the 4 new\l"
    .string "RECRUITS, only by defeating me, you\l"
    .string "will earn the right to compete for an\l"
    .string "exclusive mission, actually 2 of the 3\l"
    .string "RECRUITS have already lost that\l"
    .string "opportunity since I have defeated\l"
    .string "them . You are the last one to examine!$"



RocketWarehouseSoldado_Text_Soldado2:
    .string "Wow, so we have 2 RECRUITS that are\n"
    .string "worthy. Interesting.$"



RocketWarehouseSoldado_Text_Soldado3:
    .string "ARCHER is waiting for you and the other\n"
    .string "ROCKET who was able to defeat me, go\l"
    .string "ahead and listen carefully to the\l"
    .string "details of the mission.$"



RocketWarehouse_Soldadomove1:
walk_in_place_right
step_end

RocketWarehouse_Soldadomove2:
face_left
step_end

RocketWarehouse_Soldadomove3:
face_left
walk_left
step_end

RocketWarehouse_Soldadomove4:
face_left
walk_left
walk_left
step_end

RocketWarehouse_Soldadomove5:
face_down
step_end

RocketWarehouse_Soldadomove6:
walk_in_place_up
step_end


RocketWarehouseMisionAtlas::
lock
faceplayer
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouseMisionAtlasmove1
applymovement 6, RocketWarehouseMisionAtlasmove2
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas1 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove2
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas2 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove3
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas3 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove4
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas4 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove5
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas5 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove6
waitmovement 0x0
applymovement 6, RocketWarehouseMisionAtlasmove2
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas6 MSGBOX_AUTOCLOSE
lock
faceplayer
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouseMisionAtlasmove8
applymovement 17, RocketWarehouseMisionAtlasmove7
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_1, RocketWarehouse_Text_MisionAtlas8
msgbox RocketWarehouse_Text_MisionAtlas9 MSGBOX_DEFAULT
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouseMisionAtlasmove9
applymovement 17, RocketWarehouseMisionAtlasmove9
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas10 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, RocketWarehouseMisionAtlasmove9.2
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas10_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, RocketWarehouseMisionAtlasmove9.1
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas10_2 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove9.3
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas10_3 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, RocketWarehouseMisionAtlasmove9.4
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas10_4 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove9.5
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas10_5 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove9.5
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas10_6 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
givemon SPECIES_SENTRET, 5, ITEM_NONE
waitfanfare
msgbox RocketWarehouse_Text_MisionAtlas11 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouseMisionAtlasmove2
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas12 MSGBOX_AUTOCLOSE
applymovement 17, RocketWarehouseMisionAtlasmove10
waitmovement 0x0
msgbox RocketWarehouse_Text_MisionAtlas13 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouseMisionAtlasmove8
applymovement 17, RocketWarehouseMisionAtlasmove7
msgbox RocketWarehouse_Text_MisionAtlas14 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
fadescreen 1
delay 30
removeobject 17
fadescreen 0
setflag FLAG_HIDE_ROUTE_101_BIRCH
setflag FLAG_HIDE_ROUTE_103_BIRCH
setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_2
setflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_2
setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_3
setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1
setvar VAR_UNUSED_0x40F7, 4
release
end

RocketWarehouseMisionAtlasmove9.5:
walk_in_place_left
step_end

RocketWarehouseMisionAtlasmove9.4:
walk_slow_down
step_end

RocketWarehouseMisionAtlasmove9.3:
walk_slow_up
step_end

RocketWarehouseMisionAtlasmove9.2:
face_right
step_end

RocketWarehouseMisionAtlasmove9.1:
walk_in_place_right
step_end

RocketWarehouse_Text_MisionAtlas1:
.string "Well, it looks like we are not waiting for\n"
    .string "anyone else, it will be you two who will\l"
    .string "have the opportunity to get off to a\l"
    .string "good start in this organization, I will\l"
    .string "give you the details of your mission,\l"
    .string "listen up.$" 

RocketWarehouse_Text_MisionAtlas2:
.string "To the north of this island, in the\n"
    .string "RESORT GORGEOUS, the new local CONSUL,\l"
    .string "who is in charge of handling KANTO's\l"
    .string "relations with the SEVII ISLANDS, has\l"
    .string "recently set up house here. At the time\l"
    .string "we pulled some strings to get her sent\l"
    .string "here, all in order to obtain carte\l"
    .string "blanche to carry out all kinds of\l"
    .string "exports to KANTO without passing\l"
    .string "customs or any kind of tax, which has\l"
    .string "been perfect for our business.$"


RocketWarehouse_Text_MisionAtlas3:
.string "However, she has recently cut her ties\n"
    .string "with us, and we have indications that\l"
    .string "she may at any time inform the KANTO\l"
    .string "authorities of our movements in the\l"
    .string "SEVII ISLANDS, which would greatly\l"
    .string "diminish the profitability of our\l"
    .string "business here.$"


RocketWarehouse_Text_MisionAtlas4:
.string "Your mission is clear, go there and make\n"
    .string "her remember thanks to who is where\l"
    .string "she currently is, that is us. Make her\l"
    .string "see that she has our support, offer\l"
    .string "her to be a shareholder of our company,\l"
    .string "make it clear to her that she will have\l"
    .string "a series of privileges and special\l"
    .string "offers due to her position.$"


RocketWarehouse_Text_MisionAtlas5:
.string "If she still refuses, and makes it clear\n"
    .string "that she will inform the authorities of\l"
    .string "our plans, show no mercy, no one\l"
    .string "threatens TEAM ROCKET, in that case\l"
    .string "you must silence her by defeating her\l"
    .string "in a fight, defeat all her WATER TYPE\l"
    .string "POKEMONS to prevent her from running\l"
    .string "away using SURF, once that is done, we\l"
    .string "will take care of the rest.$"


RocketWarehouse_Text_MisionAtlas6:
.string "Enough talk, before I give you the\n"
    .string "tools to face up to the mission, I want\l"
    .string "to see you fight here and now, I must\l"
    .string "make sure in person that you meet a\l"
    .string "minimum level of competence. Show me\l"
    .string "what you have learned!$"


RocketWarehouse_Text_MisionAtlas7:
.string "I've defeated the other two recruits\n"
    .string "before, there's no way you can beat me,\l"
    .string "I've trained harder than you!$"


RocketWarehouse_Text_MisionAtlas8:
.string "How? Is your ZUBAT stronger than mine?$"

RocketWarehouse_Text_MisionAtlas9:
.string "It doesn't make sense, why did you beat\n"
.string "me if we started from the same\l"
.string "conditions?$"


RocketWarehouse_Text_MisionAtlas10:
.string "Enough, I hope you will train more in the\n"
.string "surrounding area, you could use\l"
.string "another POKEMON apart from ZUBAT if\l"
.string "you want to be competent, I inform you\l"
.string "that in the meadow you can find\l"
.string "MEOWTH, PIDGEY, RATTATA, SENTRET and\l"
.string "even VULPIX or PSYDUCK if you know how\l"
.string "to look for them, and this is where the\l"
.string "second part of the mission comes. To\l"
.string "get to RESORT GORGEOUS you need to\l"
.string "have a POKEMON with SURF, it is known\l"
.string "that the SENTRET of the meadow are\l"
.string "famous for knowing this move, what you\l"
.string "will do is capture one that will help you\l"
.string "to get there, use this to do it.$"


RocketWarehouse_Text_MisionAtlas10_1:
	.string "In the past, the ROCKETs would catch\n"
	.string "one from the meadow, with their own\l"
	.string "hands.$"

RocketWarehouse_Text_MisionAtlas10_2:
	.string "But this practice, which aimed to teach\n"
	.string "the ROCKET important qualities such as\l"
	.string "improvisation, adaptability, and not\l"
	.string "taking anything for granted... was\l"
	.string "abandoned.$"

RocketWarehouse_Text_MisionAtlas10_3:
	.string "Initially, due to its inefficiency: we\n"
	.string "could capture large quantities of\l"
	.string "SENTRET at once and use them as a\l"
	.string "reserve for new recruits, but...$"

RocketWarehouse_Text_MisionAtlas10_4:
	.string "The main reason is 'new generations':\n"
	.string "they want everything done for them,\l"
	.string "they are unable to tolerate a little\l"
	.string "discomfort that serves a greater\l"
	.string "purpose.$"

RocketWarehouse_Text_MisionAtlas10_5:
	.string "TEAM ROCKET, as an organization\n"
	.string "striving to remain relevant, there's no\l"
	.string "choice but to give in. If people judge a\l"
	.string "book by its cover, there's no choice but\l"
	.string "to color it, even if just a bit. Perhaps\l"
	.string "then those who only aim to skim the\l"
	.string "surface can delve deeper.$"

RocketWarehouse_Text_MisionAtlas10_6:
	.string "With that said, here are your SENTRET.$"

RocketWarehouse_Text_MisionAtlas11:
.string "You don't have to worry about having\n"
.string "problems using SURF, we are TEAM\l"
.string "ROCKET, we are not bound by that\l"
.string "stupid code of having certain medals\l"
.string "to use HMs, you will use them when you\l"
.string "need them and that's it.$"

RocketWarehouse_Text_MisionAtlas12:
.string "I have nothing more to say to you, come\n"
.string "back here when you have accomplished\l"
.string "your mission, you may leave.$"

RocketWarehouse_Text_MisionAtlas13:
 .string "At your service, ADMIN.ARCHER!$"

RocketWarehouse_Text_MisionAtlas14:
.string "We'll meet at the CONSUL'S HOUSE. I\n"
.string "won't allow another RECRUIT to get\l"
.string "ahead of me. I will make things clear\l"
.string "with her and get the reward for\l"
.string "completing the mission. I don't need\l"
.string "you!$"


RocketWarehouseMisionAtlasmove1:
walk_up
walk_up
walk_up
walk_up
walk_right
step_end

RocketWarehouseMisionAtlasmove2:
walk_in_place_left
step_end

RocketWarehouseMisionAtlasmove3:
walk_up
step_end

RocketWarehouseMisionAtlasmove4:
walk_down
face_left
step_end

RocketWarehouseMisionAtlasmove5:
face_right
step_end

RocketWarehouseMisionAtlasmove6:
face_right
step_end

RocketWarehouseMisionAtlasmove7:
face_down
step_end

RocketWarehouseMisionAtlasmove8:
face_up
step_end

RocketWarehouseMisionAtlasmove9:
face_right
step_end

RocketWarehouseMisionAtlasmove10:
walk_in_place_right
step_end



RocketWarehouse_Vuelta_MisionAtlas::
applymovement OBJ_EVENT_ID_PLAYER, RocketWarehouse_Vuelta_MisionAtlas_move1
waitmovement 0x0
delay 20
fadescreen 1
clearflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
delay 20
addobject 17
fadescreen 0
showmoneybox 0, 0
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas1 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 25000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas2 MSGBOX_DEFAULT
waitfanfare
delay 40
hidemoneybox
delay 40
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas3 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouse_Vuelta_MisionAtlas_move2
waitmovement 0x0
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas4 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouse_Vuelta_MisionAtlas_move2
waitmovement 0x0
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas5 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouse_Vuelta_MisionAtlas_move3
waitmovement 0x0
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas6 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouse_Vuelta_MisionAtlas_move2
waitmovement 0x0
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas7 MSGBOX_AUTOCLOSE
applymovement 17, RocketWarehouse_Vuelta_MisionAtlas_move4
waitmovement 0x0
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas8 MSGBOX_AUTOCLOSE
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas9 MSGBOX_AUTOCLOSE
applymovement 6, RocketWarehouse_Vuelta_MisionAtlas_move5
waitmovement 0x0
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas10 MSGBOX_AUTOCLOSE
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas11 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas12 MSGBOX_DEFAULT
giveegg SPECIES_HOUNDOUR
waitfanfare
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas13 MSGBOX_AUTOCLOSE
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas14 MSGBOX_AUTOCLOSE
applymovement 17, RocketWarehouse_Vuelta_MisionAtlas_move4
waitmovement 0x0
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas15 MSGBOX_AUTOCLOSE
fadescreen 1
setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
delay 20
removeobject 17
fadescreen 0
setvar VAR_UNUSED_0x40F7, 6
release
end

RocketWarehouse_Text_Vuelta_MisionAtlas1:
	.string "ARCHER: Alright. You've come back, as\n"
	.string "you're aware from the opening speech,\l"
	.string "at TEAM ROCKET, we believe in rewarding\l"
	.string "merit. We value the final outcome, and\l"
	.string "since it's been positive here, you're\l"
	.string "getting your reward.$"


RocketWarehouse_Text_Vuelta_MisionAtlas2:
	.string "{PLAYER} EARNED 25000 POKÉS!$"


RocketWarehouse_Text_Vuelta_MisionAtlas3:
	.string "ANDRA EARNED 25000 POKÉS!$"


RocketWarehouse_Text_Vuelta_MisionAtlas4:
	.string "ARCHER: With that, you'll be able to\n"
	.string "afford certain resources for your\l"
	.string "POKÉMON and thus enhance your team's\l"
	.string "performance. I hope you don't squander\l"
	.string "it on frivolities. Having more money\l"
	.string "provides greater freedom of choice, but\l"
	.string "it's futile if mismanaged or if you fail\l"
	.string "to utilize what you acquire\l"
	.string "effectively.$"


RocketWarehouse_Text_Vuelta_MisionAtlas5:
	.string "Having said that, you've completed the\n"
	.string "mission, but suboptimally.$"


RocketWarehouse_Text_Vuelta_MisionAtlas6:
           .string "ATLAS: It's important for you to\n"
	.string "understand that we function as a\l"
	.string "unified entity here, which strengthens\l"
	.string "us. This isn't a sign of weakness; it's a\l"
	.string "demonstration of intelligence and\l"
	.string "recognition that collaboration is key.\l"
	.string "No major organization has arisen from\l"
	.string "the efforts of a solitary individual.$"


RocketWarehouse_Text_Vuelta_MisionAtlas7:
	.string "I thought I was clear when I said that\n"
	.string "both of you would negotiate with the\l"
	.string "CONSUL at the same time, having each\l"
	.string "other's backs in case things went\l"
	.string "wrong. What's up, ANDRA? Why didn't you\l"
	.string "wait for {PLAYER} and went in alone?$"


RocketWarehouse_Text_Vuelta_MisionAtlas8:
	.string "I believed my skills were sufficient to\n"
	.string "face the challenge, MR.ARCHER. I didn't\l"
	.string "anticipate having to deal with a MAREEP\l"
	.string "and its THUNDERSHOCK. I was wrong.$"


RocketWarehouse_Text_Vuelta_MisionAtlas9:
	.string "ARCHER: ... ... You have shown courage\n"
	.string "and initiative by entering alone, and\l"
	.string "admitted your mistake. For now, that is\l"
	.string "sufficient, but let it serve as an\l"
	.string "example and experience.$"


RocketWarehouse_Text_Vuelta_MisionAtlas10:
	.string "ARCHER: With that said, you will set sail\n"
	.string "immediately to KANTO. We need more and\l"
	.string "more personnel at our main financial\l"
	.string "center. A ship in the harbor awaits you.$"


RocketWarehouse_Text_Vuelta_MisionAtlas11:
	.string "ARCHER: ... ... I don't want you to leave\n"
	.string "this island without something to\l"
	.string "remember your short time here. You\l"
	.string "might come back someday, but for now,\l"
	.string "take care of this.$"


RocketWarehouse_Text_Vuelta_MisionAtlas12:
	.string "PLAYER OBTAINED A POKÉMON EGG!$"


RocketWarehouse_Text_Vuelta_MisionAtlas13:
	.string "ANDRA OBTAINED A POKÉMON EGG!$"


RocketWarehouse_Text_Vuelta_MisionAtlas14:
	.string "ARCHER: You've just received two eggs\n"
	.string "containing valuable JOHTO POKÉMON,\l"
	.string "which are rare in this region. There's\l"
	.string "nothing else to add. Make your way to\l"
	.string "the port as soon as possible; upon your\l"
	.string "arrival in KANTO, you'll be briefed on\l"
	.string "your new missions.$"


RocketWarehouse_Text_Vuelta_MisionAtlas15:
	.string "ANDRA: YES, SIR!$"

RocketWarehouse_Vuelta_MisionAtlas_move1:
walk_up
walk_up
walk_up
walk_right
step_end

RocketWarehouse_Vuelta_MisionAtlas_move2:
walk_in_place_left
step_end

RocketWarehouse_Vuelta_MisionAtlas_move3:
walk_slow_down
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_up
walk_in_place_left
step_end

RocketWarehouse_Vuelta_MisionAtlas_move4:
walk_in_place_right
step_end

RocketWarehouse_Vuelta_MisionAtlas_move5:
walk_slow_down
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_up
walk_in_place_left
step_end
