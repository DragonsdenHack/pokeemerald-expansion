CinnabarIsland_Laboratory1_MapScripts::
	.byte 0

CinnabarIslandLaboratory1_1::
lock     
faceplayer     
msgbox CinnabarIsland_Laboratory1_Text_1, MSGBOX_DEFAULT
release     
end

CinnabarIsland_Laboratory1_Text_1:
	.string "We study POKÉMON extensively\n"
	.string "every day.\p"
	.string "People often bring us rare POKÉMON\n"
	.string "for examination.$"



CinnabarIslandLaboratory1_2::
end



CinnabarIslandLaboratory1Documento_100::
msgbox CinnabarIslandLaboratory1Documento_Text_100, MSGBOX_SIGN   
end

CinnabarIslandLaboratory1Documento_Text_100:
.string "A photo of the LAB's founder…\n"
    .string "DR. FUJI?!$"




CinnabarIslandLaboratory1Documento_101::
msgbox CinnabarIslandLaboratory1Documento_Text_101, MSGBOX_SIGN   
end

CinnabarIslandLaboratory1Documento_Text_101:
.string "POKéMON LAB\n"
    .string "Meeting Room$"



CinnabarIslandLaboratory1Documento_102::
msgbox CinnabarIslandLaboratory1Documento_Text_102, MSGBOX_SIGN   
end

CinnabarIslandLaboratory1Documento_Text_102:
.string "POKéMON LAB\n"
    .string "R & D Room$"



CinnabarIslandLaboratory1Documento_103::
msgbox CinnabarIslandLaboratory1Documento_Text_103, MSGBOX_SIGN   
end

CinnabarIslandLaboratory1Documento_Text_103:
.string "POKéMON LAB\n"
    .string "Testing Room$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee::
compare VAR_ROUTE127_STATE, 2
goto_if_eq CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_3
compare VAR_ROUTE127_STATE, 1
goto_if_eq CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_2
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_2 MSGBOX_NPC
delay 20
playse SE_PIN
applymovement 2, CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Move_1
waitmovement 0x0
applymovement 2, CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Move_3
waitmovement 0x0
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_3 MSGBOX_NPC
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_10 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_No
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_11 MSGBOX_NPC
applymovement 2, CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Move_2
waitmovement 0x0
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_12 MSGBOX_NPC
applymovement 2, CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Move_3
waitmovement 0x0
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_13 MSGBOX_NPC
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_4
setvar VAR_ROUTE127_STATE, 1
release
end

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_3::
lock
faceplayer
delay 20
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_2 MSGBOX_NPC
delay 20
playse SE_PIN
applymovement 2, CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Move_1
waitmovement 0x0
playse MUS_RG_OBTAIN_KEY_ITEM
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_4 MSGBOX_DEFAULT
waitse
playse SE_PIN
applymovement 2, CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Move_1
waitmovement 0x0
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_5 MSGBOX_NPC
delay 20
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_6 MSGBOX_NPC
delay 10
playfanfare MUS_OBTAIN_TMHM
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_7 MSGBOX_DEFAULT
givemon SPECIES_EEVEE, 25, ITEM_MOON_STONE
givemon SPECIES_EEVEE, 25, ITEM_THUNDER_STONE
givemon SPECIES_EEVEE, 25, ITEM_FIRE_STONE
givemon SPECIES_EEVEE, 25, ITEM_WATER_STONE
givemon SPECIES_EEVEE, 25, ITEM_SUN_STONE
waitfanfare
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_8 MSGBOX_NPC
setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
fadescreen 1
delay 20
removeobject 2
fadescreen 0
release
end


CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_2::
lock
faceplayer
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_9 MSGBOX_NPC
release
end


CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_No::
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_14 MSGBOX_NPC
release
end

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Move_1:
emote_exclamation_mark
step_end

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Move_2:
walk_in_place_up
step_end

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Move_3:
face_player
step_end

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_1:
	.string "I can't believe this… How he dared to\n"
	.string "betray me like this…$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_2:
.string "...\n"
	.string "...$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_3:
	.string "Wait! You are {PLAYER}, one of the\n"
	.string "highest charges on TEAM ROCKET, that\l"
	.string "made possible the assault on SILPH! Am\l"
	.string "I wrong?.$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_4:
	.string "({PLAYER} returned the 60 EEVEES to\n"
	.string "the SCIENTIST!)$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_5:
	.string "Unbelievable! So you were able to catch\n"
	.string "him in the act and take the EEVEES\l"
	.string "before he sold them! Did you end up with\l"
	.string "60 in the end? Not bad, it could have\l"
	.string "been a lot worse, if you hadn't stepped\l"
	.string "in, who knows what would have happened.$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_6:
	.string "Take this, EXECUTIVE {PLAYER}, you\n"
	.string "deserve that I give you 5 of these 60\l"
	.string "EEVEE, you will take a better advantage\l"
	.string "than those dirty that bought the other\l"
	.string "10 EEVEE,I am pretty sure.$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_7:
	.string "YOU RECEIVED 5 EEVEE AT LV.25!!$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_8:
	.string "Anyway with 55 EEVEE I can obtain\n"
	.string "almost the same results as if I had 70,\l"
	.string "also, now I don't have that incompetent\l"
	.string "working with me, I'll be able to progress\l"
	.string "much faster and take all the credit\l"
	.string "when I present my results to SILPH. I\l"
	.string "won't forget what you've done for me\l"
	.string "{PLAYER}, you've saved my career as a\l"
	.string "SCIENTIST.$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_9:
	.string "Keep this in mind, {PLAYER}; he must\n"
	.string "be in one of the UNDERGROUND PATHS,\l"
	.string "could be CELADON with LAVENDER, or\l"
	.string "CERULEAN with VERMILION, it must be\l"
	.string "one of those two… hurry up.$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_10:
	.string "My own colleague has stolen from me on\n"
	.string "a large scale, only someone of your\l"
	.string "status could assist me in this big\l"
	.string "trouble. If you agree to help, I assure\l"
	.string "you it will be worthwhile.$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_11:
	.string "Always able for everything! That is the\n"
	.string "aptitude! I count on you EXECUTIVE\l"
	.string "{PLAYER}! Both my colleague and I\l"
	.string "were given a large number of EEVEE\l"
	.string "specimens by SILPH, which is one of the\l"
	.string "rarest POKÉMON in the region. This was\l"
	.string "primarily for the purpose of studying\l"
	.string "its intricate evolution process,\l"
	.string "understanding why it changes into\l"
	.string "different types depending on its\l"
	.string "surroundings, and also to explore\l"
	.string "potential new evolution pathways that\l"
	.string "are currently unknown, however…$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_12:
	.string "When I least expected it, overnight, my\n"
	.string "colleague disappeared with all the\l"
	.string "EEVEES, it's highly probably that he'll\l"
	.string "try to sell them on the black market,\l"
	.string "where the EEVEE have an enormous\l"
	.string "value, with the 70 EEVEES that SILPH\l"
	.string "provided us, he could easily earn 70\l"
	.string "million POKÉ, at a million per EEVEE, that\l"
	.string "is enough money to leave KANTO and\l"
	.string "disappear forever without leave a hint.$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_13:
	.string "Not only has he left me stranded in the\n"
	.string "worst possible way, also now I'm the one\l"
	.string "ultimately responsible and the first\l"
	.string "one who must answer to SILPH, if this\l"
	.string "isn't resolved and the EEVEES don't\l"
	.string "show up, my entire career as a scientist\l"
	.string "could finish within days. That's why,\l"
	.string "{PLAYER}, I ask you to find that vile\l"
	.string "scoundrel and retrieve the EEVEES\l"
	.string "before it's too late and he sells them\l"
	.string "all. You should be able to locate him in\l"
	.string "the underground paths connecting\l"
	.string "VERMILION to CERULEAN or CELADON to\l"
	.string "LAVENDER, hurry up please, {PLAYER},\l"
	.string "the longer you delay, the more EEVEE\l"
	.string "we'll lose.$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_14:
	.string "Oh, you must have many other missions\n"
	.string "of great importance by now, I\l"
	.string "understand, if I were GIOVANNI, I would\l"
	.string "put someone like you in charge of all my\l"
	.string "projects, if you have a chance, please\l"
	.string "remember me, the longer time passes,\l"
	.string "the more likely it is to be too late.$"
