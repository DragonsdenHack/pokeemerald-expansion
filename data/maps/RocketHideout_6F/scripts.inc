RocketHideout_6F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_6F_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_6F_OnFrame
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RocketHideout_6F_Disguise_Player_OnResume
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_6F_OnFrame
	.byte 0


RocketHideout_6F_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 29, RocketHideout_6F_Escena_Lance
map_script_2 VAR_UNUSED_0x40F7, 31, RocketHideout_6F_Escena_Lance_2
map_script_2 VAR_UNUSED_0x40F7, 801, RocketHideout_6F_Disguise_Player
	.2byte 0

RocketHideout_6F_Disguise_Player_OnResume:
map_script_2 VAR_UNUSED_0x40F7, 800, RocketHideout_6F_Disguise_Player_2
	.2byte 0

RocketHideout_6F_Disguise_Player_2::
setobjectxy 14, 29, 25
playse SE_M_STAT_INCREASE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.1
setvar VAR_UNUSED_0x40F7, 801
end

RocketHideout6F_1::
lock     
faceplayer     
msgbox RocketHideout6F_Text_1, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_1:
.string "HAH!!\n"
.string "KANTO people think we are dumb but we\l"
	.string "have much more weapons than they\l"
	.string "think! Don't ever show them all your\l"
	.string "tricks boy, hohoho!$"

RocketHideout6F_2::
lock     
faceplayer     
msgbox RocketHideout6F_Text_2, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_2:
.string "PETREL, the executive that administers\n"
	.string "this BASE, is the kind of opponent that\l"
	.string "no one wants to fight, poison\l"
	.string "techniques and autodestruction\l"
	.string "expert, being a risky opponent to\l"
	.string "fight. His WEEZING too is a hard\l"
	.string "POKÉMON to defeat by non PSYCHIC\l"
	.string "POKÉMON, specially by physic side.$"



RocketHideout6F_3::
lock     
faceplayer     
msgbox RocketHideout6F_Text_3, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_3:
.string "I heard that on JOHTO we have another\n"
	.string "BASE, there are doing great\l"
	.string "improvements about radio waves and\l"
	.string "their possible consequences on\l"
	.string "POKÉMON. I'd like to visit it someday.$"



RocketHideout6F_4::
lock     
faceplayer     
msgbox RocketHideout6F_Text_4, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_4:
.string "…\n"
.string "…\l"
.string "(Seems like he is resting, but also\l"
	.string "seems ready and expecting to any order\l"
	.string "that he could receive from PETREL)$"



RocketHideout6F_5::
lock     
faceplayer     
msgbox RocketHideout6F_Text_5, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_5:
.string "…\n"
.string "…\l"
.string "(Seems like he is resting, but also\l"
	.string "seems ready and expecting to any order\l"
	.string "that he could receive from PETREL)$"



RocketHideout6F_6::
lock     
faceplayer     
msgbox RocketHideout6F_Text_6, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_6:
.string "Stats are useless if we can't learn\n"
	.string "practical lessons from them, it is\l"
	.string "estimated that on average people lose\l"
	.string "4 hours a day on useless tasks,\l"
	.string "inefficient or directly doing nothing.\l"
	.string "If we consider that you have to sleep 8\l"
	.string "hours, work another 8 and do some\l"
	.string "obligations another 2, we only have 6\l"
	.string "hours left for our personal goals for\l"
	.string "the day, what a waste to spend 4 of\l"
	.string "those 6 that way! That's why TEAM\l"
	.string "ROCKET is where it is! Procrastination\l"
	.string "doesn't exist here! What are you doing,\l"
	.string "GRUNT!? Go ahead and accomplish your\l"
	.string "mission!$"



RocketHideout6F_7::
lock     
faceplayer     
msgbox RocketHideout6F_Text_7, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_7:
.string "I don't see anything wrong with what we\n"
	.string "do here, we all win, you just have to\l"
	.string "look at those POKÉMON. They are happy\l"
	.string "in the company of members of their own\l"
	.string "species. They become stronger. The\l"
	.string "TRAINERS are happy, and we make money!\l"
	.string "Life is like that, the one who proposes\l"
	.string "things is the one who ends up making\l"
	.string "money!$"



RocketHideout6F_14::
end



RocketHideout6F_15::
lock     
faceplayer     
msgbox RocketHideout6F_Text_15, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_15:
.string "We own more than 70% of the POKÉMON\n"
	.string "traffic on the market in the KANTO\l"
	.string "region, thanks to the CASINO and the\l"
	.string "constant flows of POKÉMON that come\l"
	.string "from this BASE, CHRONOISLAND and\l"
	.string "others. Nobody overshadows us in that\l"
	.string "section.$"



RocketHideout6F_16::
end



RocketHideout6F_17::
end



RocketHideout6F_18::
lock     
faceplayer     
msgbox RocketHideout6F_Text_18, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_18:
.string "(It seems to contain a SCYTHER, they\n"
	.string "must get at least 110,000 POKES with\l"
	.string "the sale of this POKÉMON in the CASINO)$"



RocketHideout6F_19::
lock     
faceplayer     
msgbox RocketHideout6F_Text_19, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_19:
.string "(It seems to contain a DRATINI, They\n"
	.string "must get at least 53000 POKES with the\l"
	.string "sale of this POKÉMON in the CASINO)$"



RocketHideout6F_20::
end



RocketHideout6F_21::
lock     
faceplayer     
msgbox RocketHideout6F_Text_21, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_21:
.string "Apparently ARCHER, the ADMIN in\n"
	.string "charge of running the CHRONO ISLAND\l"
	.string "WAREHOUSE, is the most powerful of the\l"
	.string "3 ROCKET ADMINISTRATORS, I have heard\l"
	.string "that he has a SCYTHER that can tear\l"
	.string "anything into pieces with its blades.$"



RocketHideout6F_22::
lock     
faceplayer     
msgbox RocketHideout6F_Text_22, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_22:
.string "It's a pleasure to work knowing that\n"
	.string "you act under the command of your own\l"
	.string "will! Not like those citizens of KANTO,\l"
	.string "submitted like little lambs to the will\l"
	.string "of the ELITE 4!$"



RocketHideout6F_23::
lock     
faceplayer     
msgbox RocketHideout6F_Text_23, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_23:
.string "There's nothing like the freedom that\n"
	.string "comes from going outside the law! TEAM\l"
	.string "ROCKET RULES!!$"



RocketHideout6F_24::
lock     
faceplayer     
msgbox RocketHideout6F_Text_24, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_24:
.string "This BASE collects more than 1000000\n"
	.string "POKES per week as payment for the care\l"
	.string "of POKÉMON. What no one from the\l"
	.string "outside knows is that it is a mere\l"
	.string "cover for the real business! Thanks to\l"
	.string "the sale of the EGGS generated here,\l"
	.string "we earn up to 20 times more than by\l"
	.string "taking care of the POKÉMON that\l"
	.string "generates them for us!$"



RocketHideout6F_25::
lock     
faceplayer     
msgbox RocketHideout6F_Text_25, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_25:
.string "Maybe it is somewhat cruel to separate\n"
	.string "the POKÉMON from their EGGS, but in\l"
	.string "general trainers treat their POKÉMON\l"
	.string "well, even us ROCKETS, that we whip our\l"
	.string "POKÉMON with a whip is a cliche that\l"
	.string "has become widespread, although it is\l"
	.string "true that There are people like that in\l"
	.string "our ranks.$"



RocketHideout6F_26::
lock     
faceplayer     
msgbox RocketHideout6F_Text_26, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_26:
.string "We have cameras placed all over ROUTE 5\n"
	.string "that connect to this BASE. That way we\l"
	.string "always have enough time to organize\l"
	.string "the DAYCARE without raising\l"
	.string "suspicions!$"



RocketHideout6FDocumento_100::
msgbox RocketHideout6FDocumento_Text_100, MSGBOX_DEFAULT  
release
end

RocketHideout6FDocumento_Text_100:
.string "(It seems to contain a DRATINI. They\n"
	.string "must get at least 53000 POKES with the\l"
	.string "sale of this POKÉMON in the GAME CORNER)$"



RocketHideout6FDocumento_101::
msgbox RocketHideout6FDocumento_Text_101, MSGBOX_DEFAULT  
release
end

RocketHideout6FDocumento_Text_101:
.string "(It seems to contain a SCYTHER. They\n"
	.string "must get at least 110000 POKES with the\l"
	.string "sale of this POKÉMON in the CASINO)$"



RocketHideout6FDocumento_102::
msgbox RocketHideout6FDocumento_Text_102, MSGBOX_AUTOCLOSE 
release
end

RocketHideout6FDocumento_Text_102:
.string "VALUE IN CASINO CHIPS OF THE\n"
	.string "FOLLOWING GOODS:l"
	.string "- ABRA(LV:9): 180\l"
	.string "- CLEFAIRY(LV:8): 500\l"
	.string "- NUGGET: 500\l"
	.string "- SMOKE BALL: 800\l"
	.string "- COAL/M. SEED/M. WATER: 1000\l"
	.string "- YELLOW FLUTE: 1600\l"
	.string "- PINSIR(LV:18): 2500\l"
	.string "- DRATINI(LV:18): 2800\l"
	.string "- TM. IRON TAIL: 3500\l"
	.string "- TM.THUNDERB/I.BEAM/FLAMETH: 4000\l"
	.string "- TM.SHADOW BALL: 4500\l"
	.string "- SCYTHER (LV:25): 5500\l"
	.string "- PORYGON (LV:26): 9999\l"
	.string "- DOME/HELIX FOSSIL: 15000\l"
	.string "- OLD AMBER: 22500\p"
	.string "Note: 1 token is equal to 20 POKES.$"

RocketHideout_6F_Petrel_Mision_1::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_1_move1
waitmovement 0x0
applymovement 14, RocketHideout_6F_Petrel_Mision_1_move2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_1, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_1_move2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2, MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_1_move3
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_3, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_1_move4
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_4, MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Text_Mision_5, MSGBOX_AUTOCLOSE
applymovement 27, RocketHideout_6F_Petrel_Mision_1_move5
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_6, MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Text_Mision_7, MSGBOX_AUTOCLOSE
applymovement 27, RocketHideout_6F_Petrel_Mision_1_move5
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_8, MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Text_Mision_9, MSGBOX_AUTOCLOSE
applymovement 27, RocketHideout_6F_Petrel_Mision_1_move5
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_1_move5
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_10, MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_1_move7
applymovement 27, RocketHideout_6F_Petrel_Mision_1_move6
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_11, MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
clearflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1
fadescreen 1
delay 20
removeobject 27
fadescreen 0
setvar VAR_UNUSED_0x40F7, 10
release
end



RocketHideout_6F_Petrel_Text_Mision_1:
.string "????: Welcome to our BASE-DAYCARE on\n"
	.string "ROUTE 5, new GRUNTS, you are the last\l"
	.string "to join our activity in KANTO. I am\l"
	.string "PETREL, ROCKET ADMINISTRATOR and\l"
	.string "chief in command of this base.$"

RocketHideout_6F_Petrel_Text_Mision_2:
.string "PETREL: I will be very brief, the main\n"
	.string "reason for this BASE is to serve as\l"
	.string "financial support for the financing of\l"
	.string "our projects, here we only limit\l"
	.string "ourselves to carrying out research on\l"
	.string "possible profitable businesses, and\l"
	.string "putting them into practice, all in order\l"
	.string "to carry out money for truly\l"
	.string "transcendental research…$"

RocketHideout_6F_Petrel_Text_Mision_3:
.string "I have heard that your performance was\n"
	.string "acceptable on CHRONO ISLAND, it\l"
	.string "remains to be seen how you evolve in\l"
	.string "KANTO. As rookie GRUNTS that you are,\l"
	.string "you will meet on your SECOND OFFICIAL\l"
	.string "MISSION, the first in KANTO, with other\l"
	.string "recruits located in MT.MOON, to the\l"
	.string "west from CERULEAN CITY.$"

RocketHideout_6F_Petrel_Text_Mision_4:
.string "Once there, you will clean the place of\n"
	.string "all types of FOSSILS, MOON STONES,\l"
	.string "NUGGETS or other valuables. Give\l"
	.string "priority to FOSSILS. Its value on the\l"
	.string "black market is enormous, more than\l"
	.string "any POKÉMON that we can sell at the\l"
	.string "CELADON CASINO.$"

RocketHideout_6F_Petrel_Text_Mision_5:
.string "When you finish the job, come back here\n"
	.string "again to count the collection, and\l"
	.string "establish your reward based on it, any\l"
	.string "questions?$"

RocketHideout_6F_Petrel_Text_Mision_6:
.string "ANDRA: I was wondering, SIR, how to\n"
	.string "evaluate our performance in the\l"
	.string "mission, given that there will be many\l"
	.string "of us, will only the collective be\l"
	.string "evaluated or also individually?$"

RocketHideout_6F_Petrel_Text_Mision_7:
.string "PETREL: So we have a competitive GRUNT,\n"
	.string "if you are worried about impossibility\l"
	.string "of climb into the organization by being\l"
	.string "eclipsed by a media operation, you\l"
	.string "should already know that we prioritize\l"
	.string "the collective, still, I'll leave it to\l"
	.string "you very clear. You have two ways of\l"
	.string "upload here: 1) For each group mission\l"
	.string "we carry out evaluations of each\l"
	.string "individual operation. 2) Not in all\l"
	.string "missions we send a lot of GRUNTS, some\l"
	.string "missions are individual or in pairs,\l"
	.string "such as yours in CONSUL'S HOUSE, in\l"
	.string "those kinds of missions where your\l"
	.string "merit, or your fault is greater.$"

RocketHideout_6F_Petrel_Text_Mision_8:
.string "Understood, we won't disappoint TEAM\n"
	.string "ROCKET and their aspirations!$"

RocketHideout_6F_Petrel_Text_Mision_9:
.string "PETREL: All right, keep going. Your\n"
	.string "arrival to KANTO and this mission have\l"
	.string "coincided and now you are out of time,\l"
	.string "we will have enough time to explain how\l"
	.string "we do the things here. Bring those\l"
	.string "fossils and disappear everyone who\l"
	.string "wants to opposite!$"

RocketHideout_6F_Petrel_Text_Mision_10:
.string "ANDRA: YES, SIR!!$"

RocketHideout_6F_Petrel_Text_Mision_11:
.string "We are so lucky {PLAYER}, we just\n"
	.string "arrived here and we already got\l"
	.string "assigned to a mission. Lets get all\l"
	.string "those FOSSILS without caring who\l"
	.string "opposites, I see you later on MT.MOON\l"
	.string "east entrance.$"

RocketHideout_6F_Petrel_Mision_1_move1:
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
walk_right
walk_down
walk_in_place_right
step_end

RocketHideout_6F_Petrel_Mision_1_move2:
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_1_move3:
walk_up
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_1_move4:
walk_slow_down
face_left
step_end

RocketHideout_6F_Petrel_Mision_1_move5:
walk_in_place_right
step_end

RocketHideout_6F_Petrel_Mision_1_move6:
face_up
step_end

RocketHideout_6F_Petrel_Mision_1_move7:
face_down
step_end


RocketHideout_6F_Warp::
msgbox RocketHideout_6F_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_6F_Warp_No
warp MAP_ROUTE5_HOUSE1, 0, 2
release
end

RocketHideout_6F_Warp_No::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Warp_move1
release
end

RocketHideout_6F_Warp_Text_YesNo:
.string "Basta un leve salto para alcanzar\n"
	.string "las escaleras que llevan a la\l"
	.string "GUARDERÍA, ¿quieres salir de la\l"
	.string "BASE?$"

RocketHideout_6F_Warp_move1:
walk_slow_right
step_end

RocketHideout_6F_Petrel_Mision_2::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_2_move1
waitmovement 0x0
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_1, MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Text_Mision_2_2, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move3
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_3, MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Text_Mision_2_2, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move4
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_4, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_5, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_6, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move3
waitmovement 0x0
showmoneybox 0, 0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_7, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_2_move5
waitmovement 0x0
delay 10
playse SE_SHOP
removemoney 999999 0
updatemoneybox
delay 80
playse SE_M_EMBER
msgbox RocketHideout_6F_Petrel_Text_Mision_2_8, MSGBOX_AUTOCLOSE
waitfanfare
delay 40
hidemoneybox
delay 40
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_2_move6
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_9, MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Text_Mision_2_2, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move3
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_10, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move4
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_11, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move4
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_12, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_13, MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 19
setvar VAR_UNUSED_0x40FC, 2
release
end

RocketHideout_6F_Petrel_Text_Mision_2_1:
.string "PETREL: GRUNT {PLAYER}, your\n"
	.string "performance at MT. MOON was noticed.\l"
	.string "HIGH RANK GRUNT FRANK already told me\l"
	.string "his version of events, and how we would\l"
	.string "had got 2 more FOSSILS on our wallets,\l"
	.string "do you have idea about how much money\l"
	.string "it is {PLAYER}, the projects and\l"
	.string "resources that we would keep with it?$"


RocketHideout_6F_Petrel_Text_Mision_2_2:
.string "...$"

RocketHideout_6F_Petrel_Text_Mision_2_3:
.string "I could send you right now to the jail\n"
	.string "and keep you there enough time to make\l"
	.string "you meditate about your actions, or\l"
	.string "even worse, expel you from here.$"

RocketHideout_6F_Petrel_Text_Mision_2_4:
.string "But, the one in charge of MT.MOON\n"
	.string "mission could be rough and not very\l"
	.string "patient, but out of heat of the\l"
	.string "mission, his assessments are totally\l"
	.string "objective and unbiased.$"

RocketHideout_6F_Petrel_Text_Mision_2_5:
.string "Not all days an average GRUNT faces and\n"
	.string "defeats a superior in charge. Either\l"
	.string "you are incredibly brave or incredibly\l"
	.string "stupid, or both, anyways we will\l"
	.string "discover it.$"

RocketHideout_6F_Petrel_Text_Mision_2_6:
.string "I have a mission for you. Let's see how\n"
	.string "far goes your bravery as a TRAINER and\l"
	.string "that -ROCKET honor code- that you\l"
	.string "were talking about in MT.MOON.$"

RocketHideout_6F_Petrel_Text_Mision_2_7:
.string "But before that, you must\n"
	.string "responsibilize for your deficient\l"
	.string "efficiency in the last mission. You\l"
	.string "should know that the estimated value\l"
	.string "of those FOSSILS that you lost is\l"
	.string "close to 600000 POKÉS on black market,\l"
	.string "as a direct consequence and to rectify\l"
	.string "this potential profits, you will give all\l"
	.string "physic money that you have right now\l"
	.string "to TEAM ROCKET. As punishment and\l"
	.string "lealthy test.$"

RocketHideout_6F_Petrel_Text_Mision_2_8:
.string "(You have no money).$"

RocketHideout_6F_Petrel_Text_Mision_2_9:
.string "PETREL: A fair pay for a new chance,\n"
	.string "isn't it? I will promise you that if you\l"
	.string "complete this mission successfully,\l"
	.string "money won't ever again be a problem for\l"
	.string "you, because if you do it, it would mean\l"
	.string "saving huge costs for us.$"

RocketHideout_6F_Petrel_Text_Mision_2_10:
.string "As you should know, we have always been\n"
	.string "using VERMILION port as conector\l"
	.string "between KANTO and FIVE ISLAND;\l"
	.string "however KANTO police are increasingly\l"
	.string "lurking and it is becoming more and\l"
	.string "more difficult and expensive to bribe\l"
	.string "sailors to import some things and\l"
	.string "soldiers from FIVE ISLAND.Although of\l"
	.string "your intervention silencing the CONSUL\l"
	.string "of there, it is just matter of time to\l"
	.string "they cut us off that way to there…$"

RocketHideout_6F_Petrel_Text_Mision_2_11:
.string "So here starts your mission, we got\n"
	.string "some rumors about that BILL, that\l"
	.string "stupid that just sees POKÉMON as\l"
	.string "collectable stickers, has developed a\l"
	.string "teleport system able to cover far\l"
	.string "distances. Your mission will be to visit\l"
	.string "him and his house on the NORTH of\l"
	.string "CERULEAN CITY, at ROUTE 25 end, and\l"
	.string "get that patent or all the information\l"
	.string "about that novel teleportation\l"
	.string "system.$"

RocketHideout_6F_Petrel_Text_Mision_2_12:
.string "If you finally got that helpful\n"
	.string "information that our scientists could\l"
	.string "use to develop connection points\l"
	.string "teleportation via between FIVE ISLAND\l"
	.string "and KANTO, could save millions of POKES\l"
	.string "on transport expenses. Here is the\l"
	.string "opportunity that I'm giving you to\l"
	.string "rectify your fail on MT.MOON$"

RocketHideout_6F_Petrel_Text_Mision_2_13:
.string "That's all for the moment, BILL will try\n"
	.string "to protect his patent at all costs, so\l"
	.string "you should be alert and keep strong\l"
	.string "your POKEMON to bring him under.\l"
	.string "Better, your victory against FRANK\l"
	.string "wasn't a lucky accident.$"

RocketHideout_6F_Petrel_Mision_2_move1:
walk_right
walk_down
walk_down
walk_down
walk_down
walk_right
walk_down
walk_in_place_right
step_end

RocketHideout_6F_Petrel_Mision_2_move2:
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_2_move3:
face_up
delay_1
walk_slow_up
walk_in_place_left
step_end


RocketHideout_6F_Petrel_Mision_2_move4:
walk_slow_down
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_2_move5:
walk_right
step_end

RocketHideout_6F_Petrel_Mision_2_move6:
walk_left
walk_in_place_right
step_end

RocketHideout_6F_Petrel_Mision_3_Bill::
lockall
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
addobject 28
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_3_Bill_move_1
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_1 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_2
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_3_Bill_move_3
waitmovement 0x0
applymovement 27, RocketHideout_6F_Petrel_Mision_3_Bill_move_4
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_5
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_6
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_2 MSGBOX_AUTOCLOSE
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_7
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_3 MSGBOX_AUTOCLOSE
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_8
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_4 MSGBOX_AUTOCLOSE
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_7
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_9
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_5 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_8
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_9
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_7 MSGBOX_AUTOCLOSE
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_7
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_8 MSGBOX_AUTOCLOSE
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_10
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_9 MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_10 MSGBOX_AUTOCLOSE
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_7
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_11 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_8
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_11
waitmovement 0x0
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_7
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_3_Bill_move_12
applymovement 27, RocketHideout_6F_Petrel_Mision_3_Bill_move_12
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_12 MSGBOX_AUTOCLOSE
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_13
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_3_Bill_move_1
applymovement 27, RocketHideout_6F_Petrel_Mision_3_Bill_move_1
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
removeobject 28
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_13 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_8
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_14 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_14
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_15 MSGBOX_AUTOCLOSE
playse SE_M_COSMIC_POWER
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_14.1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playse SE_M_SOLAR_BEAM
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12
delay 100
changeavatar 1
setvar VAR_UNUSED_0x40F7, 800
warpsilent MAP_ROCKET_HIDEOUT_6F, 28, 25

RocketHideout_6F_Petrel_Mision_3_Bill_move_14.1:
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_14.2:
walk_down
face_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_14.3:
walk_up
face_left
step_end

RocketHideout8F_Mision_Johto_move_12.2:
face_up
step_end

RocketHideout8F_Mision_Johto_move_12.3:
emote_exclamation_mark
step_end

RocketHideout8F_Mision_Johto_move_12.4:
face_right
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_texto_19.1:
.string "PETREL: Now you, ANDRA.$"


RocketHideout_6F_Disguise_Player::
applymovement 27, RocketHideout8F_Mision_Johto_move_12.2
waitmovement 0x0
playse SE_PIN
applymovement 27, RocketHideout8F_Mision_Johto_move_12.3
waitmovement 0x0
playfanfare MUS_OBTAIN_SYMBOL
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_16 MSGBOX_DEFAULT
waitfanfare
applymovement 27, RocketHideout8F_Mision_Johto_move_12.4
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_14.2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_19.1 MSGBOX_AUTOCLOSE
playse SE_M_COSMIC_POWER
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_14.1
applymovement 27, RocketHideout8F_Mision_Johto_move_12.1
waitse
playse SE_M_SOLAR_BEAM
applymovement 27, RocketHideout8F_Mision_Johto_move_12
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
removeobject 27
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
addobject 39
playse SE_M_STAT_INCREASE
applymovement 39, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
playfanfare MUS_OBTAIN_SYMBOL
waitfanfare
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_14.3
waitmovement 0x0
showmoneybox 0, 0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_17 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 125000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_18 MSGBOX_DEFAULT
waitfanfare
delay 40
hidemoneybox
delay 40
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_15
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_19 MSGBOX_AUTOCLOSE
delay 10
playse SE_SHOP
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_16
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_20 MSGBOX_AUTOCLOSE
applymovement 39, RocketHideout_6F_Petrel_Mision_3_Bill_move_1
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_21 MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_22 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_8
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_23 MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_24 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_17
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_25 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_18
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_26 MSGBOX_AUTOCLOSE
applymovement 39, RocketHideout_6F_Petrel_Mision_3_Bill_move_1
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_27 MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_28 MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_29 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_17
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_30 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 39, RocketHideout_6F_Petrel_Mision_3_Bill_move_19
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_3_Bill_move_19
waitmovement 0x0
delay 10
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_31 MSGBOX_AUTOCLOSE
applymovement 39, RocketHideout_6F_Petrel_Mision_3_Bill_move_1
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_32 MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_33 MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_34 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_18
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_35 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_3_Bill_move_20
applymovement 39, RocketHideout_6F_Petrel_Mision_3_Bill_move_12
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_36 MSGBOX_AUTOCLOSE
fadescreen 1
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
delay 20
removeobject 39
fadescreen 0
setvar VAR_UNUSED_0x40F7, 23
setflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1
release
end

RocketHideout8F_Mision_Johto_move_12.1:
face_left
delay_4
face_up
delay_4
face_right
delay_4
face_down
delay_4
face_left
delay_4
face_up
delay_4
face_right
delay_4
face_down
delay_8
face_left
delay_8
face_up
delay_8
face_right
delay_8
face_down
delay_8
face_left
delay_8
face_up
delay_8
face_right
delay_8
face_down
delay_8
face_left
delay_8
delay_8
face_up
delay_8
delay_8
face_right
delay_8
delay_8
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_texto_1:
.string "ARCHER: It's inadmissible, PETREL.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_2:
.string "You should know that BILL is the\n"
	.string "spoiled child of this region's elite. A\l"
	.string "personal guard is always watching him\l"
	.string "for his security, as if that were not\l"
	.string "enough CERULEAN CITY POLICE\l"
	.string "prioritizes his protection above all. It\l"
	.string "was reckless to send one of us to steal\l"
	.string "something of that importance in this\l"
	.string "way.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_3:
.string "Fortunately for us, I could rescue\n"
	.string "{PLAYER} at the last moment, so the\l"
	.string "patent will let us save millions on\l"
	.string "transport and logistics.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_4:
.string "ARCHER: {PLAYER} intervention,\n"
	.string "defeating some POLICE, getting the\l"
	.string "patent and being able to hold it until\l"
	.string "the last moment has been determined\l"
	.string "for successfully completing this\l"
	.string "mission.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_5:
.string "PETREL: You are right, ARCHER.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_6:
.string "PETREL: I need to apologize to you\n"
	.string "{PLAYER}, I wasn't conscious about\l"
	.string "the risk that you were in and I\l"
	.string "should've supposed that a person like\l"
	.string "BILL would be protected. They told me\l"
	.string "that you are a good TRAINER and I\l"
	.string "estimated that your level were enough\l"
	.string "to defeat that braggart, but I didn't\l"
	.string "expect with instantaneous POLICE\l"
	.string "reaction.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_7:
.string "PETREL: How did you know about this\n"
	.string "mission, ARCHER? I thought that you\l"
	.string "still are the person in charge at our\l"
	.string "bases on SEVII ISLANDS.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_8:
.string "ARCHER: Indeed, PETREL, but ANDRA\n"
	.string "realized about the mission and\l"
	.string "phoned me immediately. My SKARMORY\l"
	.string "did all the rest, although what\l"
	.string "has been seen maybe there is no\l"
	.string "need to do more use of FLY.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_9:
.string "ATLAS: ...$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_10:
.string "All right. I will head out, there is a lot\n"
	.string "of work to do on islands.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_11:
.string "¡PETREL!\n"
.string "I hope you reward these 2 GRUNTS. Their\l"
	.string "actuations from now will save us an\l"
	.string "appreciated time and millions of POKÉS.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_12:
.string "ARCHER: Don't overrate yourself that I\n"
	.string "saved you for feeling special\l"
	.string "predilection to you. You are just an\l"
	.string "appreciated asset for our\l"
	.string "organization and you acted according\l"
	.string "to our moral values, that's good\l"
	.string "enough… I will see you too in the next\l"
	.string "events.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_13:
.string "PETREL: ARCHER is the efficiency\n"
	.string "personification, that's why he's the\l"
	.string "highest rank ADMIN on TEAM ROCKET.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_14:
.string "As for you, I apologize. again,\n"
	.string "especially with you, {PLAYER}. Many\l"
	.string "thought that in FIVE ISLAND there\l"
	.string "were only weaklings and incompetent\l"
	.string "ROCKET. You have proved that is not\l"
	.string "true.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_15:
.string "Because your high performance and\n"
	.string "loyalty showed to TEAM ROCKET, now you\l"
	.string "both are ascended. You go from being\l"
	.string "common GRUNTS, to HIGH RANK RECRUITS.\l"
	.string "This will give you the chance to lead\l"
	.string "some missions, as FRANK did with you on\l"
	.string "MT.MOON, also it gives enough rank to\l"
	.string "assist exclusive meetings with our\l"
	.string "LEADER GIOVANNI, as access to certain\l"
	.string "privileged information, but this at its\l"
	.string "own time.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_16:
.string "{PLAYER} got ascended to HIGH RANK\n"
	.string "RECRUIT!!$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_17:
.string "PETREL: To celebrate your new status\n"
	.string "here, and as payment for the success\l"
	.string "of your respective missions, here are\l"
	.string "your rewards… To you {PLAYER}, given\l"
	.string "the savings this patent will bring, and\l"
	.string "in compensation for leaving you earlier\l"
	.string "at 0 POKÉ after the MT.MOON mission,\l"
	.string "you get the the following…$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_18:
.string "You have invoiced 125000 POKÉ!$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_19:
.string "PETREL: For you, ANDRA, your warning to\n"
	.string "ARCHER was also crucial, and you\l"
	.string "completed the task I gave you in\l"
	.string "VERMILION CITY. In your case, the\l"
	.string "total reward is 75,000 POKÉ.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_20:
.string "PETREL: So now…\n"
.string "I will talk to you two about your next\l"
	.string "mission. You both know about S.S. ANNE,\l"
	.string "don't you?$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_21:
.string "ANDRA: Yesk that famous transatlantic\n"
	.string "that just arrived at VERMILION harbor.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_22:
.string "PETREL: Indeed. It is a tradition to\n"
	.string "celebrate a big party on the cruise\l"
	.string "before her final farewell from\l"
	.string "VERMILION.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_23:
.string "PETREL: I don't want you two to take\n"
	.string "advantage of that moment and steal\l"
	.string "some POKÉMON neither merchandise,\l"
	.string "what I will order you is much smaller\l"
	.string "and its value is higher than all that…\l"
	.string "It is a jar.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_24:
.string "ANDRA: A flask?$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_25:
.string "PETREL: S.S. ANNE's CAPTAIN has\n"
	.string "traveled through many regions all\l"
	.string "around the world for the last 3\l"
	.string "decades. In one of his journeys, while\l"
	.string "he was in some kind of desert island, he\l"
	.string "found something that seems like a\l"
	.string "singular POKÉMON fragment, that does\l"
	.string "not match with any other POKÉMON that\l"
	.string "we know.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_26:
.string "PETREL: We know that CAPTAIN has that\n"
	.string "fragment on a jar. He already showed it\l"
	.string "in a lot of interviews, and always keeps\l"
	.string "it with himself. You will enter his cabin\l"
	.string "and steal it by force, you have no\l"
	.string "other option so that's why I ordered\l"
	.string "you two for this mission.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_27:
.string "ANDRA: So how would we infiltrate into\n"
	.string "the ship? As I know, without a TICKET\l"
	.string "sailors will never let us enter.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_28:
.string "PETREL: I already prepared an evasion\n"
	.string "move, a bit rudimentary but works. Your\l"
	.string "partner will be waiting for you on\l"
	.string "VERMILION harbor. Don't worry about\l"
	.string "how to distinguish him, you will\l"
	.string "recognize him immediately.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_29:
.string "PETREL: ...$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_30:
.string "PETREL: You should know this mission is\n"
	.string "an express request from GIOVANNI…$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_31:
.string "PETREL: Our LEADER thinks those\n"
	.string "fragments could be part of a\l"
	.string "LEGENDARY POKÉMON extremely powerful,\l"
	.string "and he doesn't want to lose the chance\l"
	.string "to get the jar and investigate it,\l"
	.string "before S.S. ANNE disappear from KANTO\l"
	.string "until next year.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_32:
.string "ANDRA: We will do it for sure!$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_33:
.string "PETREL: I trust in you two. You have\n"
	.string "shown great skills in fights. That\l"
	.string "CAPTAIN has a great experience from\l"
	.string "getting flagged on all around world\l"
	.string "seas and his POKÉMON will prove it. You\l"
	.string "should keep your POKÉMON strong to\l"
	.string "unarm him.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_34:
.string "ANDRA: Do not doubt it.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_35:
.string "PETREL: That's all, hurry up, the sooner\n"
	.string "you arrive S.S. ANNE you will have more\l"
	.string "time until it set sail, good afternoon.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_36:
.string "ANDRA: Let's do this, {PLAYER}, the\n"
	.string "SS.Anne is ours.$"

RocketHideout_6F_Petrel_Mision_3_Bill_move_1:
walk_in_place_right
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_2:
face_up
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_3:
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
walk_right
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_4:
walk_in_place_up
walk_in_place_right
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_5:
face_left
emote_exclamation_mark
delay_1
walk_in_place_up
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_6:
face_left
delay_1
walk_in_place_down
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_7:
walk_in_place_down
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_8:
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_9:
walk_in_place_up
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_10:
face_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_11:
walk_left
walk_left
walk_left
walk_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_12:
face_up
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_13:
walk_up
walk_up
walk_left
walk_up
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_14:
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
walk_down
walk_down
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_15:
walk_down
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_16:
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_17:
walk_up
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_18:
walk_down
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_19:
emote_exclamation_mark
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_20:
face_down
step_end



RocketHideout_6F_Petrel_Post_SSanne::
lockall
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
addobject 39
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Post_SSanne_move_1
waitmovement 0x0
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_1 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_3
waitmovement 0x0
showmoneybox 0, 0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_2 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 80000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_3 MSGBOX_DEFAULT
waitfanfare
delay 40
hidemoneybox
delay 40
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_4 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_GREAT_BALL, 20
waitfanfare
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_4
waitmovement 0x0
playse SE_SHOP
delay 20
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_5 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_5
waitmovement 0x0
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_6 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_7 MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_8 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_6
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_9 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_10 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Post_SSanne_move_7
applymovement 39, RocketHideout_6F_Petrel_Post_SSanne_move_7
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_11 MSGBOX_AUTOCLOSE
applymovement 39, RocketHideout_6F_Petrel_Post_SSanne_move_8
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_12 MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_13 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_4
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_14 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_15 MSGBOX_AUTOCLOSE
applymovement 39, RocketHideout_6F_Petrel_Post_SSanne_move_8
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_16 MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_17 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_6
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_18 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_4
waitmovement 0x0
applymovement 39, RocketHideout_6F_Petrel_Post_SSanne_move_8
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_19 MSGBOX_AUTOCLOSE
applymovement 39, RocketHideout_6F_Petrel_Post_SSanne_move_9
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Post_SSanne_move_10
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_20 MSGBOX_AUTOCLOSE
applymovement 39, RocketHideout_6F_Petrel_Post_SSanne_move_11
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
removeobject 39
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
setvar VAR_UNUSED_0x40F7, 33
release
end


RocketHideout_6F_Petrel_Post_SSanne_Texto_1:
.string "PETREL: Excellent work recruits,\n"
	.string "GIOVANNI will be eager to start\l"
	.string "investigating the contents of that\l"
	.string "relic.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_2:
.string "PETREL: Here's your reward.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_3:
.string "You have invoiced 80000 POKÉ!$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_4:
.string "PETREL: In addition, take this, 20\n"
	.string "GREAT BALLS for each of you, two\l"
	.string "recruits like yourselves must have\l"
	.string "means at their disposal.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_5:
.string "PETREL: And now, please, take a seat\n"
	.string "and make yourselves comfortable. We\l"
	.string "have much to talk.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_6:
.string "PETREL: First of all, I have to tell you\n"
	.string "that our scientists, thanks to the\l"
	.string "patent stolen by {PLAYER}, are\l"
	.string "already on the verge of creating\l"
	.string "instantaneous long-distance\l"
	.string "teleportation points.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_7:
.string "The new invention will allow us to\n"
	.string "connect this base with that of CHRONO\l"
	.string "ISLAND, and especially with our\l"
	.string "headquarters, the CELADON BASE.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_8:
.string "PETREL: ...$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_9:
.string "PETREL: When you arrived here, on your\n"
	.string "first MT.MOON mission, you already\l"
	.string "showed a certain peculiarity that went\l"
	.string "beyond the stereotype of the average\l"
	.string "soldier, I gave you an opportunity with\l"
	.string "two missions of a certain complexity to\l"
	.string "test you, and you have met\l"
	.string "expectations.PETREL: When you arrived\l"
	.string "here, on your first MT.MOON mission, you\l"
	.string "already showed a certain peculiarity\l"
	.string "that went beyond the stereotype of\l"
	.string "the average soldier, I gave you an\l"
	.string "opportunity with two missions of a\l"
	.string "certain complexity to test you, and\l"
	.string "you have met expectations.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_10:
.string "In view of recent events, GIOVANNI\n"
	.string "himself informed me that, if you\l"
	.string "successfully complete this mission,\l"
	.string "you will be immediately transferred to\l"
	.string "the main base in CELADON CITY, to work\l"
	.string "directly under his orders.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_11:
.string "PETREL: O en otras palabras, a\n"
	.string "partir de ahora formaréis parte de\l"
	.string "la guardia personal de GIOVANNI,\l"
	.string "el último escalón en la jerarquía\l"
	.string "de nuestra organización, sentios\l"
	.string "afortunados y sobre todo dad la\l"
	.string "talla, ahí trabajaréis con la\l"
	.string "maldita élite de nuestra\l"
	.string "organización.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_12:
	.string "ANDRA: We are ready ADMIN.PETREL!$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_13:
.string "PETREL: Well, your relocation will take\n"
	.string "place once we finish adjusting the\l"
	.string "teleportation machines, so there's no\l"
	.string "need to walk all the way across KANTO\l"
	.string "on foot. In the meantime, you've earned\l"
	.string "a well-deserved break. Since your\l"
	.string "arrival, you've completed three\l"
	.string "consecutive missions with good\l"
	.string "performance, so I grant you this period\l"
	.string "until your relocation as free time. I\l"
	.string "recommend you relax, get to know KANTO\l"
	.string "since you're not from here, take the\l"
	.string "opportunity to train your POKÉMON,\l"
	.string "capture some new ones, and, above all,\l"
	.string "mentally prepare for your relocation.\l"
	.string "You should present yourselves in the\l"
	.string "best possible condition to GIOVANNI.\l"
	.string "This place is a foul-smelling shed\l"
	.string "infested with RATTATAS compared to\l"
	.string "the clean and immaculate offices of\l"
	.string "our underground facility in CELADON\l"
	.string "CITY.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_14:
.string "Additionally, at your arrival, I\n"
	.string "mentioned that I would provide you\l"
	.string "with some general knowledge about\l"
	.string "KANTO and how to behave in the cities,\l"
	.string "but due to the urgency of your first\l"
	.string "mission at MT.MOON, you ended up\l"
	.string "missing out on that basic training.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_15:
.string "Now that you've been here for some\n"
	.string "time, and things have calmed down a bit,\l"
	.string "I'd like to ask, what's your opinion of\l"
	.string "the people in KANTO?$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_16:
.string "ANDRA: There's a noticeable difference\n"
	.string "with the people from CHRONO ISLAND.\l"
	.string "The fact that you're a ROCKET here\l"
	.string "seems to be heavily stigmatized.\l"
	.string "People point fingers at you in a\l"
	.string "disdainful way, even if you haven't\l"
	.string "shown any signs of doing something\l"
	.string "wrong. In general, the population of\l"
	.string "KANTO hates us. It's as if...$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_17:
.string "PETREL: They would have been convinced\n"
	.string "that the bad guys in the movie are us,\l"
	.string "exactly ANDRA, exactly, it is the power\l"
	.string "of a correct smear campaign,\l"
	.string "manipulation of information and facts\l"
	.string "and cheap demagoguery, we are a\l"
	.string "private organization that does not\l"
	.string "care. There is no other option than to\l"
	.string "resort to organized crime to recover\l"
	.string "what is theirs, not an amoral and\l"
	.string "murderous crime syndicate as they\l"
	.string "want to make out from the doors of THE\l"
	.string "INDIGO PLATEAU.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_18:
.string "You'll start learning how things work\n"
	.string "around here, especially now that you'll\l"
	.string "be heading to CELADON CITY. I'm sure\l"
	.string "GIOVANNI will be delighted to provide\l"
	.string "details to two competent young\l"
	.string "individuals like you. That's all from me,\l"
	.string "GRUNTS. Enjoy this well-deserved free\l"
	.string "time, and I'll let you know when the\l"
	.string "machine is ready.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_19:
.string "At your service, ADMIN. PETREL!$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_20:
.string "¡{PLAYER}!\n"
.string "I will be going to train at ROUTES 9 and\l"
	.string "10 at the east of CERULEAN CITY. Now\l"
	.string "we got CUT we could access there, if\l"
	.string "you search for me I will be there.$"


RocketHideout_6F_Petrel_Post_SSanne_move_1:
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_2:
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_3:
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
walk_down
walk_down
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_4:
walk_down
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_5:
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_6:
walk_up
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_7:
emote_exclamation_mark
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_8:
walk_in_place_right
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_9:
face_up
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_10:
face_down
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_11:
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

RocketHideout_6F_Escena_Lance::
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
applymovement 26, RocketHideout_6F_Escena_Lance_move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Escena_Lance_move_3
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 33, RocketHideout_6F_Escena_Lance_move_2
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Escena_Lance_move_3
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_11 MSGBOX_AUTOCLOSE
applymovement 33, RocketHideout_6F_Escena_Lance_move_4
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_12 MSGBOX_AUTOCLOSE
applymovement 33, RocketHideout_6F_Escena_Lance_move_5
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Escena_Lance_move_5
waitmovement 0x0
delay 20
setvar VAR_UNUSED_0x40F7, 30
warpsilent MAP_INDIGO_PLATEAU, 13, 15
release
end

RocketHideout_6F_Escena_Lance_Texto_11:
.string "{PLAYER}! Did you notice?$"

RocketHideout_6F_Escena_Lance_Texto_12:
.string "Seems like LANCE is going to do an\n"
	.string "official communication, they are\l"
	.string "broadcasting it on the TV. We are\l"
	.string "missing it!$"

RocketHideout_6F_Escena_Lance_move_1:
face_left
step_end

RocketHideout_6F_Escena_Lance_move_2:
face_left
emote_exclamation_mark
step_end

RocketHideout_6F_Escena_Lance_move_3:
face_right
step_end

RocketHideout_6F_Escena_Lance_move_4:
walk_left
walk_left
walk_left
walk_left
step_end

RocketHideout_6F_Escena_Lance_move_5:
walk_right
walk_right
walk_right
walk_right
walk_in_place_up
step_end

RocketHideout_6F_Escena_Lance_2::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Escena_Lance_2_move7
delay 20
applymovement 35, RocketHideout_6F_Escena_Lance_2_move1
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_13 MSGBOX_AUTOCLOSE
delay 20
applymovement 31, RocketHideout_6F_Escena_Lance_2_move2
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_14 MSGBOX_AUTOCLOSE
applymovement 31, RocketHideout_6F_Escena_Lance_2_move3
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_15 MSGBOX_AUTOCLOSE
applymovement 33, RocketHideout_6F_Escena_Lance_2_move1
applymovement 35, RocketHideout_6F_Escena_Lance_2_move1
applymovement 29, RocketHideout_6F_Escena_Lance_2_move1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Escena_Lance_2_move1
applymovement 32, RocketHideout_6F_Escena_Lance_2_move4
applymovement 30, RocketHideout_6F_Escena_Lance_2_move4
applymovement 26, RocketHideout_6F_Escena_Lance_2_move4
applymovement 36, RocketHideout_6F_Escena_Lance_2_move5
applymovement 34, RocketHideout_6F_Escena_Lance_2_move5
applymovement 37, RocketHideout_6F_Escena_Lance_2_move5
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_16 MSGBOX_AUTOCLOSE
applymovement 26, RocketHideout_6F_Escena_Lance_2_move5
fadescreen 1
delay 20
removeobject 35
removeobject 29
removeobject 32
removeobject 30
removeobject 36
removeobject 34
removeobject 37
fadescreen 0
delay 15
applymovement 31, RocketHideout_6F_Escena_Lance_2_move6
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_17 MSGBOX_AUTOCLOSE
applymovement 33, RocketHideout_6F_Escena_Lance_2_move1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Escena_Lance_2_move1
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_18 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
fadescreen 1
delay 20
removeobject 31
removeobject 33
fadescreen 0
setflag FLAG_HIDE_PETALBURG_CITY_WALLY
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
setvar VAR_UNUSED_0x40F7, 32
release
end

RocketHideout_6F_Escena_Lance_Texto_13:
.string "This is awful! What are we going to do\n"
	.string "now?$"

RocketHideout_6F_Escena_Lance_Texto_14:
	.string "PETREL: Calm down, GRUNT. We have\n"
	.string "more than enough resources to manage\l"
	.string "on our own. All this means is that they\l"
	.string "see us as a threat.$"

RocketHideout_6F_Escena_Lance_Texto_15:
.string "Why are you all standing here?!\n"
	.string "Everyone, get back to work!$"

RocketHideout_6F_Escena_Lance_Texto_16:
	.string "At your service, ADMIN.PETREL!$"

RocketHideout_6F_Escena_Lance_Texto_17:
	.string "ANDRA, {PLAYER}, come to my office\n"
	.string "immediately. I have to give you some\l"
	.string "news.$"

RocketHideout_6F_Escena_Lance_Texto_18:
	.string "ANDRA: ¡Yes, sir!$"

RocketHideout_6F_Escena_Lance_2_move1:
walk_in_place_up
step_end

RocketHideout_6F_Escena_Lance_2_move2:
face_left
step_end

RocketHideout_6F_Escena_Lance_2_move3:
walk_in_place_right
walk_in_place_down
step_end

RocketHideout_6F_Escena_Lance_2_move4:
walk_in_place_left
step_end

RocketHideout_6F_Escena_Lance_2_move5:
walk_in_place_right
step_end

RocketHideout_6F_Escena_Lance_2_move6:
walk_in_place_down
step_end

RocketHideout_6F_Escena_Lance_2_move7:
face_up
step_end

RocketHideout_6F_Aviso_Cientifico::
delay 10
playse SE_PIN
applymovement 26, RocketHideout_6F_Aviso_Cientifico_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Aviso_Cientifico_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout_6F_Aviso_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
applymovement 26, RocketHideout_6F_Aviso_Cientifico_Move_2
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 36
release
end

RocketHideout_6F_Aviso_Cientifico_Texto_1:
.string "HIGH RANK RECRUIT {PLAYER}, finally,\n"
	.string "thanks to the patent that you robbed\l"
	.string "BILL we could complete the connection\l"
	.string "project between bases via\l"
	.string "teleportation, you can use it from now\l"
	.string "on whenever you want, your partner\l"
	.string "ANDRA just teleported to the CELADON\l"
	.string "CITY base as described has been\l"
	.string "assigned, they are waiting for your\l"
	.string "arrival at the barracks to get started\l"
	.string "in your new HQ.$"

RocketHideout_6F_Aviso_Cientifico_Move_1:
emote_exclamation_mark
walk_in_place_left
step_end

RocketHideout_6F_Aviso_Cientifico_Move_2:
walk_in_place_right
step_end

RocketHideout_6F_Maquina_Teletransporte::
compare VAR_UNUSED_0x40F7, 35
goto_if_gt RocketHideout_6F_Maquina_Teletransporte_2
msgbox RocketHideout_6F_Maquina_Teletransporte_Texto_1 MSGBOX_AUTOCLOSE
release
end



RocketHideout_6F_Maquina_Teletransporte_Texto_1:
.string "...\n"
	.string "...\l"
.string "(It seems that the development of this\l"
	.string "machine is still in very early stages)$"

RocketHideout_6F_Maquina_Teletransporte_2::
msgbox RocketHideout_6F_Maquina_Teletransporte_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_6F_Maquina_Teletransporte_No
delay 10
playse SE_M_CHARGE
delay 20
playse SE_M_TELEPORT
warpsilent MAP_ROCKET_HIDEOUT_3F, 2, 3
release
end

RocketHideout_6F_Maquina_Teletransporte_YesNo:
.string "The machine is ready to be used, do you\n"
	.string "want to teleport? to the CELADON\l"
	.string "BASE?$"

RocketHideout_6F_Maquina_Teletransporte_No::
release
end


Base_Ruta_5_Tienda_Pokemon::
lock
faceplayer
msgbox Text_CompraPokemon_Ruta_5 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_VENTA_BASE_RUTA_5, 0
switch VAR_RESULT
case 0, EventScript_Rattata
case 1, EventScript_Mankey
case 2, EventScript_Koffing
release
end

EventScript_Koffing::
lock
showmoneybox 0, 0
msgbox EventScript_Koffing_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 11000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 11000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_KOFFING, 13, ITEM_NONE
release
end

EventScript_Mankey::
lock
showmoneybox 0, 0
msgbox EventScript_Mankey_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 8000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 8000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_MANKEY, 12, ITEM_NONE
release
end

EventScript_Rattata::
lock
showmoneybox 0, 0
msgbox EventScript_Rattata_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 3000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 3000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_RATTATA, 9, ITEM_NONE
release
end

Text_CompraPokemon_Ruta_5:
.string "How's everything going comrade? How\n"
	.string "can I help you?$"

EventScript_Koffing_Texto_1:
.string "Are you sure you want KOFFING? It will\n"
	.string "cost 11000 POKES.$"

EventScript_Mankey_Texto_1:
.string "Are you sure you want MANKEY? It will\n"
	.string "cost 8000 POKES.$"

EventScript_Rattata_Texto_1:
.string "Are you sure you want RATTATA? It will\n"
	.string "cost 3000 POKES.$"

RocketHideout_6F_Petrel::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 35
goto_if_gt RocketHideout_6F_Petrel_2
msgbox RocketHideout_6F_Petrel_Texto_1 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Move_Izq
waitmovement 0x0
release
end

RocketHideout_6F_Petrel_Move_Izq:
face_left
step_end

RocketHideout_6F_Petrel_2::
msgbox RocketHideout_6F_Petrel_Texto_2 MSGBOX_AUTOCLOSE
release
end

RocketHideout_6F_Petrel_Texto_1:
.string "PETREL: Kid, you should know that\n"
	.string "ROCKET ADMINISTRATORS are not\l"
	.string "interrupted by banalities, our time is\l"
	.string "too valuable.$"

RocketHideout_6F_Petrel_Texto_2:
.string "PETREL: It has been a source of pride\n"
	.string "for me to be your chief administrator\l"
	.string "in your first contact with KANTO. You\l"
	.string "have shown that there are still\l"
	.string "ROCKETS worth their while. I only hope\l"
	.string "that you and ANDRA live up to the\l"
	.string "demands of our great leader GIOVANNI.$"

RocketHideout_6F_Cientifico_Maquina::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 35
goto_if_gt RocketHideout_6F_Cientifico_Maquina_2
msgbox RocketHideout_6F_Cientifico_Maquina_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout_6F_Cientifico_Maquina_2::
msgbox RocketHideout_6F_Cientifico_Maquina_Texto_2 MSGBOX_AUTOCLOSE
release
end

RocketHideout_6F_Cientifico_Maquina_Texto_1:
.string "We are working on a long-distance\n"
	.string "teleportation system that connects\l"
	.string "the bases of CELADON CITY and this\l"
	.string "one. Do you know how much money we\l"
	.string "would save on transportation if we\l"
	.string "manage to achieve it?$"

RocketHideout_6F_Cientifico_Maquina_Texto_2:
.string "We did it!\n"
.string "All by you stealing BILL's patents. Make\l"
	.string "use of the system whenever you want,\l"
	.string "you just need to interact with the\l"
	.string "machine to use teleport mode.$"

