CinnabarMansionS2_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CinnabarMansionS2_OnFrame
	.byte 0

CinnabarMansionS2_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 78, CinnabarMansion_S2_Escena_7
	.2byte 0

CinnabarMansionS2_EventScript_Cientifico::
	trainerbattle_single TRAINER_MARY, CinnabarMansionS2_Text_CientificoIntro, CinnabarMansionS2_Text_CientificoDefeated
	msgbox CinnabarMansionS2_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarMansionS2_EventScript_Cientifico2::
	trainerbattle_single TRAINER_JONAS, CinnabarMansionS2_Text_Cientifico2Intro, CinnabarMansionS2_Text_Cientifico2Defeated
	msgbox CinnabarMansionS2_Text_Cientifico2PostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarMansionS2_EventScript_Cientifico3::
	trainerbattle_single TRAINER_KAYLEY, CinnabarMansionS2_Text_Cientifico3Intro, CinnabarMansionS2_Text_Cientifico3Defeated
	msgbox CinnabarMansionS2_Text_Cientifico3PostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarMansionS2Documento_100::
lock     
showmonpic SPECIES_TAUROS_X, 10, 3  
playmoncry SPECIES_TAUROS, CRY_MODE_ENCOUNTER 
msgbox CinnabarMansionS2Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

CinnabarMansionS2Documento_Text_100:
	.string "TAUROS-X: ROCK/NORMAL\p"
	.string "HP: 75\n"
	.string "ATTACK: 155\l"
	.string "DEFENSE: 150\l"
	.string "SPECIAL ATTACK: 30\l"
	.string "SPECIAL DEFENSE: 90\l"
	.string "SPEED: 90\l"
	.string "TOTAL: 590\p"
	.string "We succeeded in enhancing the wild\n"
	.string "charging capacity of TAUROS. We\l"
	.string "discovered that its SPEED and NORMAL\l"
	.string "TYPE were major constraints for\l"
	.string "developing its full strength and\l"
	.string "endurance. Once we were able to reduce\l"
	.string "its SPEED while incorporating the genes\l"
	.string "of RHYDON responsible for its ROCK\l"
	.string "TYPE, its physical ability surged to\l"
	.string "unprecedented levels; anything it\l"
	.string "strikes is obliterated.$"



CinnabarMansionS2Documento_101::
lock     
showmonpic SPECIES_MAGMORTAR_Y, 10, 3  
playmoncry SPECIES_MAGMORTAR, CRY_MODE_ENCOUNTER 
msgbox CinnabarMansionS2Documento_Text_101, MSGBOX_DEFAULT
hidemonpic
release     
end

CinnabarMansionS2Documento_Text_101:
	.string "MAGMORTAR-Y: FIRE\p"
	.string "HP: 75\n"
	.string "ATTACK: 95\l"
	.string "DEFENSE: 97\l"
	.string "SPECIAL ATTACK: 165\l"
	.string "SPECIAL DEFENSE: 105\l"
	.string "SPEED: 103\l"
	.string "TOTAL: 640\p"
	.string "BLAINE's belief about MAGMAR line being\n"
	.string "the FIRE-TYPE POKÉMON with the\l"
	.string "greatest special potential in all of\l"
	.string "KANTO, surpassing even MOLTRES, has\l"
	.string "been thoroughly demonstrated; the\l"
	.string "flames of MAGMORTAR-Y will outshine\l"
	.string "the LEGENDARY ones. Any target in the\l"
	.string "sights of its massive cannons will be\l"
	.string "struck with no fail %.$"



CinnabarMansionS2Documento_102::
lock     
showmonpic SPECIES_DEOXYS_DEFENSE, 10, 3  
playmoncry SPECIES_DEOXYS_DEFENSE, CRY_MODE_ENCOUNTER 
msgbox CinnabarMansionS2Documento_Text_102, MSGBOX_DEFAULT
hidemonpic
release     
end

CinnabarMansionS2Documento_Text_102:
	.string "DEOXYS -DEFENSE-:\p"
	.string "HP: 100\n"
	.string "ATTACK: 20\l"
	.string "DEFENSE: 180\l"
	.string "SPECIAL ATTACK: 70\l"
	.string "SPECIAL DEFENSE: 180\l"
	.string "SPEED: 50\l"
	.string "TOTAL: 600\p"
	.string "We consider its genetic combination,\n"
	.string "resulting from a mutation, as a miracle\l"
	.string "of nature, a miracle that has endowed it\l"
	.string "in its DEFENSE form with the greatest\l"
	.string "bulk known to date, a bulk that even\l"
	.string "exceeds LUGIA's one.$"



CinnabarMansionS2Documento_103::
lock     
showmonpic SPECIES_DEOXYS_ATTACK, 10, 3  
playmoncry SPECIES_DEOXYS_ATTACK, CRY_MODE_ENCOUNTER 
msgbox CinnabarMansionS2Documento_Text_103, MSGBOX_DEFAULT
hidemonpic
release     
end

CinnabarMansionS2Documento_Text_103:
	.string "DEOXYS -ATTACK-:\p"
	.string "HP: 100\n"
	.string "ATTACK: 20\l"
	.string "DEFENSE: 75\l"
	.string "SPECIAL ATTACK: 180\l"
	.string "SPECIAL DEFENSE: 75\l"
	.string "SPEED: 150\l"
	.string "TOTAL: 600\p"
	.string "We regard its genetic combination\n"
	.string "resulting from a mutation as a miracle\l"
	.string "of nature, a miracle that has endowed it\l"
	.string "in its ATTACK form with the greatest\l"
	.string "SPECIAL ATTACK we know of to date,\l"
	.string "psychic powers that exceed even\l"
	.string "MEWTWO's ones.$"



CinnabarMansionS2Documento_104::
lock     
showmonpic SPECIES_AERODACTYL_PRIMAL, 10, 3  
playmoncry SPECIES_AERODACTYL, CRY_MODE_ENCOUNTER 
msgbox CinnabarMansionS2Documento_Text_104, MSGBOX_DEFAULT
hidemonpic
release     
end

CinnabarMansionS2Documento_Text_104:
	.string "AERODACTYL -PRIMAL-:\p"
	.string "HP: 80\n"
	.string "ATTACK: 145\l"
	.string "DEFENSE: 105\l"
	.string "SPECIAL ATTACK: 60\l"
	.string "SPECIAL DEFENSE: 85\l"
	.string "SPEED: 140\l"
	.string "TOTAL: 615\p"
	.string "AERODACTYL's real wild form. 300 million\n"
	.string "years ago, was the most terrifying\l"
	.string "predator of its era, with a 150 BASE\l"
	.string "SPEED that no prey could outrun.$"



CinnabarMansionS2Documento_105::
lock     
showmonpic SPECIES_MEWTWO, 10, 3  
playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER 
msgbox CinnabarMansionS2Documento_Text_105, MSGBOX_DEFAULT
hidemonpic
release     
end

CinnabarMansionS2Documento_Text_105:
	.string "NUMBER 1: MEWTWO\p"
	.string "HP: 106\n"
	.string "ATTACK: 110\l"
	.string "DEFENSE: 90\l"
	.string "SPECIAL ATTACK: 154\l"
	.string "SPECIAL DEFENSE: 90\l"
	.string "SPEED: 130\l"
	.string "TOTAL: 680\p"
	.string "A POKÉMON designed to rule regions with\n"
	.string "an iron fist, its offensive-defensive\l"
	.string "ratio is unmatched, although its\l"
	.string "PSYCHIC powers are inferior to DEOXYS.\l"
	.string "It still hold untapped potential that\l"
	.string "could push its BASE special attack\l"
	.string "close to 200.$"



CinnabarMansionS2Documento_106::
lock     
msgbox CinnabarMansionS2Documento_Text_106, MSGBOX_DEFAULT
release     
end

CinnabarMansionS2Documento_Text_106:
	.string "HO-OH, LUGIA, RAYQUAZA… All of them are\n"
	.string "formidable POKÉMON, but unfeasible for\l"
	.string "experimentation and implementing\l"
	.string "modifications that could increase their\l"
	.string "already vast power. On the other hand,\l"
	.string "MEW is a different story, it possesses\l"
	.string "the best genetic base, both in terms of\l"
	.string "malleability and possible combinations.\l"
	.string "This leads us to believe that with\l"
	.string "MEWTWO we only achieved a favorable\l"
	.string "genetic combination compared to MEW,\l"
	.string "but it wasn't the most favorable\l"
	.string "possible, nor the most optimal.$"



CinnabarMansionS2Documento_107::
lock     
showmonpic SPECIES_METAGROSS, 10, 3  
playmoncry SPECIES_METAGROSS, CRY_MODE_ENCOUNTER 
msgbox CinnabarMansionS2Documento_Text_107, MSGBOX_DEFAULT
msgbox CinnabarMansionS2Documento_Text_107YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CinnabarMansionS2Documento_107No
msgbox CinnabarMansionS2Documento_Text_107Yes, MSGBOX_DEFAULT
msgbox CinnabarMansionS2Documento_Text_107YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CinnabarMansionS2Documento_107No
msgbox CinnabarMansionS2Documento_Text_107Yes2, MSGBOX_DEFAULT
msgbox CinnabarMansionS2Documento_Text_107YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CinnabarMansionS2Documento_107No
msgbox CinnabarMansionS2Documento_Text_107Yes3, MSGBOX_DEFAULT
msgbox CinnabarMansionS2Documento_Text_107YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CinnabarMansionS2Documento_107No
msgbox CinnabarMansionS2Documento_Text_107Yes4, MSGBOX_DEFAULT
msgbox CinnabarMansionS2Documento_Text_107YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CinnabarMansionS2Documento_107No
msgbox CinnabarMansionS2Documento_Text_107Yes5, MSGBOX_DEFAULT
hidemonpic
release     
end

CinnabarMansionS2Documento_Text_107:
.string "METAGROSS AND DEVON'S\n"
	.string "MASQUERADE AT HOENN:\l"
	.string "...\l"
	.string "...\l"
	.string "Most people know that the\l"
	.string "characteristic PSEUDO.LEGENDARY of\l"
	.string "HOENN is SALAMENCE, a dragon that\l"
	.string "reflects the power inside a place as\l"
	.string "the METEOR FALLS, with a power similar\l"
	.string "to DRAGONITE's. However, we can find\l"
	.string "another POKÉMON in HOENN with\l"
	.string "attributes of a PSEUDO-LEGENDARY, and\l"
	.string "it is none other than METAGROSS.$"

CinnabarMansionS2Documento_Text_107YesNo:
.string "Keep reading?$"

CinnabarMansionS2Documento_107No::
hidemonpic
release
end

CinnabarMansionS2Documento_Text_107Yes:
	.string "HOENN is the only region where this\n"
	.string "happens, 2 pseudo-legendaries sharing\l"
	.string "territory. Some say this coincidence\l"
	.string "occurs because of the enormous variety\l"
	.string "of fauna and flora present in HOENN.\l"
	.string "However, the biology of the\l"
	.string "evolutionary line of METAGROSS has\l"
	.string "almost nothing to do with this fauna\l"
	.string "and flora, and our latest research\l"
	.string "suggests that the reason for the\l"
	.string "existence of 2 pseudo-legendaries in\l"
	.string "the same region are different.$"



CinnabarMansionS2Documento_Text_107Yes2:
	.string "DEVON CO. is the SILPH CO. of HOENN,\n"
	.string "however, it has never publicly released\l"
	.string "achievements of greater significance\l"
	.string "than POKÉ BALLS like the NET BALL, DIVE\l"
	.string "BALL, REPEAT BALL or TIMER BALL, in\l"
	.string "addition to the POKÉNAV, even though\l"
	.string "we know it has resources and capability\l"
	.string "to, like SILPH, create an artificial\l"
	.string "POKÉMON, like PORYGON.$"



CinnabarMansionS2Documento_Text_107Yes3:
	.string "This is the point where the son of\n"
	.string "DEVON's PRESIDENT, STEVEN, comes into\l"
	.string "play: he aims to be recognized as the\l"
	.string "top TRAINER in HOENN while also being\l"
	.string "an expert in FOSSILS. However, having\l"
	.string "ARMALDO and CRADILY isn't sufficient\l"
	.string "to win the CHAMPIONSHIP. Thus, DEVON\l"
	.string "creates a custom POKÉMON to ensure\l"
	.string "STEVEN has the necessary prowess to\l"
	.string "claim the CHAMPION title.$"




CinnabarMansionS2Documento_Text_107Yes4:
	.string "There ain't a single BELDUM anywhere in\n"
	.string "HOENN except for STEVEN's ones, and\l"
	.string "he's got plenty of them. But he never\l"
	.string "spilled where they came from or how\l"
	.string "they evolved. It starts with a BELDUM\l"
	.string "that only knows one move (TAKE DOWN,\l"
	.string "which would've probably gotten it wiped\l"
	.string "out in the wild for not having enough\l"
	.string "ways to defend itself), and ends up with\l"
	.string "a METAGROSS that's all cold, robotic,\l"
	.string "and calculating, with a type combo\l"
	.string "that's way too convenient, like it was\l"
	.string "custom-made or something.$"




CinnabarMansionS2Documento_Text_107Yes5:
	.string "If all of this were confirmed, we would\n"
	.string "be facing the true first POKÉMON\l"
	.string "altered by humans, with such a high\l"
	.string "level of success that it managed to\l"
	.string "replicate the power of a\l"
	.string "PSEUDO-LEGENDARY, pretending to be\l"
	.string "one and being universally regarded as\l"
	.string "such.$"

CinnabarMansionS2_Blaine::
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS2_Blaine_Move_1
waitmovement 0x0
delay 15
msgbox CinnabarMansionS2_Blaine_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS2_Blaine_Move_2
applymovement 4, CinnabarMansionS2_Blaine_Move_3
waitmovement 0x0
msgbox CinnabarMansionS2_Blaine_Texto_2 MSGBOX_AUTOCLOSE
applymovement 4, CinnabarMansionS2_Blaine_Move_4
waitmovement 0x0
msgbox CinnabarMansionS2_Blaine_Texto_3 MSGBOX_AUTOCLOSE
applymovement 4, CinnabarMansionS2_Blaine_Move_5
waitmovement 0x0
delay 20
msgbox CinnabarMansionS2_Blaine_Texto_4 MSGBOX_AUTOCLOSE
msgbox CinnabarMansionS2_Blaine_Texto_5 MSGBOX_AUTOCLOSE
applymovement 4, CinnabarMansionS2_Blaine_Move_3
waitmovement 0x0
msgbox CinnabarMansionS2_Blaine_Texto_6 MSGBOX_AUTOCLOSE
applymovement 4, CinnabarMansionS2_Blaine_Move_6
waitmovement 0x0
msgbox CinnabarMansionS2_Blaine_Texto_7 MSGBOX_AUTOCLOSE
applymovement 4, CinnabarMansionS2_Blaine_Move_4
waitmovement 0x0
msgbox CinnabarMansionS2_Blaine_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BLAINE_2, CinnabarMansionS2_Blaine_Texto_9
msgbox CinnabarMansionS2_Blaine_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS2_Blaine_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS2_Blaine_Texto_12 MSGBOX_AUTOCLOSE
applymovement 4, CinnabarMansionS2_Blaine_Move_8
waitmovement 0x0
msgbox CinnabarMansionS2_Blaine_Texto_13 MSGBOX_AUTOCLOSE
applymovement 4, CinnabarMansionS2_Blaine_Move_3
waitmovement 0x0
msgbox CinnabarMansionS2_Blaine_Texto_14 MSGBOX_AUTOCLOSE
applymovement 4, CinnabarMansionS2_Blaine_Move_4
waitmovement 0x0
msgbox CinnabarMansionS2_Blaine_Texto_15 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, CinnabarMansionS2_Blaine_Move_5
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 115
release
end

CinnabarMansionS2_Blaine_Texto_1:
	.string "BLAINE: So you came.$"

CinnabarMansionS2_Blaine_Texto_2:
	.string "Who would've thought a ROCKET would\n"
	.string "stir up so much trouble? You're one of a\l"
	.string "kind, the exception that proves the\l"
	.string "rule, but even you follow patterns we've\l"
	.string "taken care of in this warehouse...$"

CinnabarMansionS2_Blaine_Texto_3:
	.string "Look at this place; its only reason for\n"
	.string "existing is to explore the boundaries\l"
	.string "that the laws of this world impose on\l"
	.string "us, just like TEAM ROCKET; our end goal\l"
	.string "is similar.$"

CinnabarMansionS2_Blaine_Texto_4:
	.string "MAGMAR, CHARIZARD, ARCANINE... All are\n"
	.string "just numbers; what distinguishes them\l"
	.string "is a greater or lesser degree in each of\l"
	.string "the 6 parameters that constitute their\l"
	.string "genetics. The only thing that makes\l"
	.string "LEGENDARIES special is a higher total\l"
	.string "in the sum of those 6 parameters; they\l"
	.string "haven't done anything to achieve that\l"
	.string "higher total; they're just -legendary-\l"
	.string "because of -the creator's favor-. A\l"
	.string "MAGIKARP, no matter how much it tries,\l"
	.string "will never even come close to the worst\l"
	.string "DRAGONITE that could exist, regardless\l"
	.string "of their efforts.$"

CinnabarMansionS2_Blaine_Texto_5:
	.string "In this way, whoever is capable of\n"
	.string "controlling and manipulating these 6\l"
	.string "parameters, along with the type\l"
	.string "combinations, abilities, and moves...\l"
	.string "holds the power to control this world.\l"
	.string "Some, like LANCE, surrender to divine\l"
	.string "POKÉMON, hoping nature will do\l"
	.string "everything for them; we go beyond that.$"

CinnabarMansionS2_Blaine_Texto_6:
	.string "A LEGENDARY is only a LEGENDARY\n"
	.string "because it won nature's lottery, the\l"
	.string "luckiest, as I've said, just by the\l"
	.string "creator's grace, but not here, in this\l"
	.string "place...$"

CinnabarMansionS2_Blaine_Texto_7:
	.string "By understanding the rules of the game,\n"
	.string "we can manipulate them in our favor, so\l"
	.string "that the lottery smiles on us not just\l"
	.string "once, but multiple times for the same\l"
	.string "POKÉMON. The days of imperfections,\l"
	.string "arbitrariness, and random chance\l"
	.string "imposed by nature are over.$"

CinnabarMansionS2_Blaine_Texto_8:
	.string "We are the ones who establish the rules\n"
	.string "of the game now!$"

CinnabarMansionS2_Blaine_Texto_9:
	.string "Impossible! Where the heck is that\n"
	.string "power coming from!?$"

CinnabarMansionS2_Blaine_Texto_10:
	.string "It doesn't make sense, it's absurd; my\n"
	.string "buffed MAGMORTAR-Y is superior to each\l"
	.string "of your POKÉMON; with a FLAMETHROWER,\l"
	.string "it destroys everything it hits\l"
	.string "neutrally; with a THUNDERBOLT, it brings\l"
	.string "MOLTRES to its knees; you definitely\l"
	.string "have something the others lack.$"

CinnabarMansionS2_Blaine_Texto_11:
.string "... ...$"

CinnabarMansionS2_Blaine_Texto_12:
	.string "But this time it won't be enough; OAK\n"
	.string "has reached another level, with just\l"
	.string "one of his POKÉMON, he could defeat my\l"
	.string "entire team. You can't win, {PLAYER},\l"
	.string "simply because his POKÉMON will knock\l"
	.string "you out with a single hit before you can\l"
	.string "even make a move.$"

CinnabarMansionS2_Blaine_Texto_13:
	.string "We've spent years here, quietly working\n"
	.string "behind the scenes to reach this point,\l"
	.string "and now we've succeeded; OAK has a\l"
	.string "flawless team.$"


CinnabarMansionS2_Blaine_Texto_14:
	.string "All you've managed by getting here is to\n"
	.string "have the privilege of experiencing what\l"
	.string "it's like to face such a team, to try\l"
	.string "chasing something unattainable, and to\l"
	.string "witness how every possibility\l"
	.string "inevitably leads you to be obliterated\l"
	.string "by the best team ever led by a PKMN\l"
	.string "TRAINER.$"

CinnabarMansionS2_Blaine_Texto_15:
	.string "Good luck, {PLAYER}, though honestly,\n"
	.string "it doesn't really matter; it's all gonna\l"
	.string "end up the same way.$"

CinnabarMansionS2_Blaine_Move_1:
walk_in_place_down
step_end

CinnabarMansionS2_Blaine_Move_2:
walk_down
walk_down
walk_down
walk_left
step_end

CinnabarMansionS2_Blaine_Move_3:
face_right
step_end

CinnabarMansionS2_Blaine_Move_4:
walk_in_place_right
step_end

CinnabarMansionS2_Blaine_Move_5:
face_up
step_end

CinnabarMansionS2_Blaine_Move_6:
walk_right
step_end

CinnabarMansionS2_Blaine_Move_7:
face_left
step_end

CinnabarMansionS2_Blaine_Move_8:
walk_left
face_up
step_end

CinnabarMansionS2_Oak::
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS2_Oak_Move_1
waitmovement 0x0
delay 20
msgbox CinnabarMansionS2_Oak_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS2_Oak_Move_2
waitmovement 0x0
applymovement 5, CinnabarMansionS2_Oak_Move_3
waitmovement 0x0
delay 15
playse 564
msgbox CinnabarMansionS2_Oak_Texto_2 MSGBOX_AUTOCLOSE
msgbox CinnabarMansionS2_Oak_Texto_3 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_4
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_4 MSGBOX_AUTOCLOSE
msgbox CinnabarMansionS2_Oak_Texto_5 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_5
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_6 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_6
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_7 MSGBOX_AUTOCLOSE
msgbox CinnabarMansionS2_Oak_Texto_8 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_7
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_9 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_3
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_10 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_6
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_11 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_8
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_12 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_6
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_OAK_1, CinnabarMansionS2_Oak_Texto_14
msgbox CinnabarMansionS2_Oak_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS2_Oak_Texto_16 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS2_Oak_Move_9
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_17 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_1
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_18 MSGBOX_AUTOCLOSE
msgbox CinnabarMansionS2_Oak_Texto_19 MSGBOX_AUTOCLOSE
msgbox CinnabarMansionS2_Oak_Texto_20 MSGBOX_AUTOCLOSE
msgbox CinnabarMansionS2_Oak_Texto_21 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_10
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_22 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_11
delay 15
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS2_Oak_Move_12
waitmovement 0x0
delay 20
msgbox CinnabarMansionS2_Oak_Texto_23 MSGBOX_AUTOCLOSE
msgbox CinnabarMansionS2_Oak_Texto_24 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_13
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_25 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_14
waitmovement 0x0
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
delay 28
setvar VAR_UNUSED_0x40F7, 116
setvar VAR_TEMP_1, 1
call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
goto EverGrandeCity_HallOfFame_EventScript_GameClearMale
release
end

CinnabarMansionS2_Oak_Texto_1:
	.string "As I expected, you have not failed to\n"
	.string "keep your word; we will put an end to all\l"
	.string "of this once and for all, and right here,\l"
	.string "what better place than this.$"

CinnabarMansionS2_Oak_Texto_2:
	.string "I believed I had achieved perfection\n"
	.string "with RED, an unbeatable TRAINER, and I\l"
	.string "continue to assert, the only mistake\l"
	.string "was not exposing him to the proper\l"
	.string "stimulus; if LANCE had been intelligent,\l"
	.string "he would've recognized his potential,\l"
	.string "and if he had allowed him to\l"
	.string "overcompensate by battling trainers of\l"
	.string "your caliber, the snowball effect of his\l"
	.string "intelligence would have made him\l"
	.string "unbeatable handling the right POKÉMON.$"

CinnabarMansionS2_Oak_Texto_3:
	.string "Only better tools gave you the victory\n"
	.string "against RED, but now it's impossible;\l"
	.string "from this remote place, we have ensured\l"
	.string "to assemble a team that will set a new\l"
	.string "era, we have gathered the best of both\l"
	.string "worlds.$"

CinnabarMansionS2_Oak_Texto_4:
	.string "DEOXYS's unique genetic mix, impossible\n"
	.string "to recreate with our current\l"
	.string "technology, is the ultimate example of\l"
	.string "what it means to be a LEGENDARY,\l"
	.string "something that LANCE and a lot of folks\l"
	.string "are crazy about.$"

CinnabarMansionS2_Oak_Texto_5:
	.string "Although these legendaries themselves\n"
	.string "may not even know where their powers\l"
	.string "come from, it's an insult to those of us\l"
	.string "who truly understand how to observe\l"
	.string "and detect the mechanisms that allow a\l"
	.string "POKÉMON to be better or worse than\l"
	.string "another, while also feeling frustrated\l"
	.string "by the enormous difficulty of being\l"
	.string "able to activate them for personal use.$"

CinnabarMansionS2_Oak_Texto_6:
	.string "On the flip side, we have the future:\n"
	.string "Pokémon created to order, which will\l"
	.string "highlight the imperfections of the\l"
	.string "rest, even showing that the LEGENDARIES\l"
	.string "themselves are simply POKÉMON with\l"
	.string "fewer imperfections than others.\l"
	.string "However, this fact shouldn't be\l"
	.string "underestimated, as they start from a\l"
	.string "better base point; genetics can save\l"
	.string "years of effort, and sometimes a whole\l"
	.string "lifetime.$"

CinnabarMansionS2_Oak_Texto_7:
	.string "Out of all LEGENDARIES, who has shown to\n"
	.string "have the best genetic base has been, of\l"
	.string "course, MEW, the ancestor of all\l"
	.string "POKÉMON. Thanks to whom we managed to\l"
	.string "create here in KANTO a POKÉMON like\l"
	.string "MEWTWO, on par with a LUGIA or HO-OH, a\l"
	.string "680 STAT BASE club non-existent in this\l"
	.string "region.$"

CinnabarMansionS2_Oak_Texto_8:
	.string "Those foolish trainers who talk about\n"
	.string "'bonding with your POKÉMON', loving your\l"
	.string "team, and other nonsense, fail to\l"
	.string "realize that what they do is irrelevant;\l"
	.string "their POKÉMON won't increase their\l"
	.string "ATTACK base stat by loving them more,\l"
	.string "not even their particular IVs genetics.\l"
	.string "They're limited from birth by a law as\l"
	.string "unfair as it is arbitrary, which decides\l"
	.string "arbitrarily who's better than another.\l"
	.string "Training or loving your POKÉMON will\l"
	.string "only take you as far as this law allows.$"

CinnabarMansionS2_Oak_Texto_9:
	.string "But from here, we'll end that. Whoever's\n"
	.string "playing dice up with mere mortals like\l"
	.string "us, will fail now. We'll put an end to the\l"
	.string "genetic lottery. All POKÉMON will be\l"
	.string "equal, equally raised and perfect, so\l"
	.string "the best among them will be because\l"
	.string "they've truly, through their will or\l"
	.string "their trainer's, gone beyond the rest,\l"
	.string "not because they have some divine gift\l"
	.string "the rest don't. Do you really think this\l"
	.string "is so bad, {PLAYER}? We'll end the\l"
	.string "biggest injustice in this world.$"

CinnabarMansionS2_Oak_Texto_10:
	.string "After what I've said, you'll understand\n"
	.string "that I appreciate what someone like\l"
	.string "you did in the POKÉMON LEAGUE. It shows\l"
	.string "how far someone can go when they push\l"
	.string "to the extreme what they can control.\l"
	.string "But you're still limited by your POKÉMON,\l"
	.string "whether you like it or not. Your CROBAT\l"
	.string "will never surpass 374 points in HEALTH\l"
	.string "or 394 in SPEED, a noteworthy number, I\l"
	.string "must add. No matter how much you may\l"
	.string "try to argue, or how much you love your\l"
	.string "CROBAT, it won't go beyond that. That's\l"
	.string "why I've brought you here, {PLAYER}.$"

CinnabarMansionS2_Oak_Texto_11:
	.string "I want you to be the first to see the\n"
	.string "new breed of Pokémon, ones that can\l"
	.string "push that limiting factor to\l"
	.string "unimaginable levels.$"

CinnabarMansionS2_Oak_Texto_12:
	.string "I'm gonna love seeing the look of\n"
	.string "despair on your face, watching as those\l"
	.string "ideals and principles become worthless\l"
	.string "against something you'll never even\l"
	.string "come close to.$"

CinnabarMansionS2_Oak_Texto_13:
	.string "Proceed, ROCKET! Face the best team\n"
	.string "KANTO, and the world, have ever seen!$"

CinnabarMansionS2_Oak_Texto_14:
	.string "What just happened here?$"

CinnabarMansionS2_Oak_Texto_15:
	.string "No… it makes no sense; my team is\n"
	.string "unbeatable. Nobody, not even LANCE, not\l"
	.string "GIOVANNI… not even GOD could defeat\l"
	.string "me!$"

CinnabarMansionS2_Oak_Texto_16:
.string "... ...$"

CinnabarMansionS2_Oak_Texto_17:
	.string "Is there another force? Another law\n"
	.string "that I missed?$"

CinnabarMansionS2_Oak_Texto_18:
	.string "I just saw how, due to the imperfection\n"
	.string "of your POKÉMON, something perfect\l"
	.string "came out as the final product, maybe\l"
	.string "not absolutely and eternally, but\l"
	.string "certainly for this battle, this specific\l"
	.string "moment.$"

CinnabarMansionS2_Oak_Texto_19:
	.string "I thought this battle would shatter\n"
	.string "your beliefs and prove that RED and\l"
	.string "LANCE weren't enough in the POKÉMON\l"
	.string "LEAGUE, but it's been the complete\l"
	.string "opposite.$"

CinnabarMansionS2_Oak_Texto_20:
	.string "Does this mean that training alone can\n"
	.string "elevate a POKÉMON to incalculable\l"
	.string "levels?$"


CinnabarMansionS2_Oak_Texto_21:
	.string "So I've been a fool talking about limits.\n"
	.string "There must be some at some point, of\l"
	.string "course, but after what I've seen here,\l"
	.string "they're much further than one can\l"
	.string "imagine, maybe even beyond what one\l"
	.string "can calculate...$"

CinnabarMansionS2_Oak_Texto_22:
	.string "I have had enough already. RED … The\n"
	.string "creation of MEWTWO… Keeping this\l"
	.string "laboratory alive in the shadows… All to\l"
	.string "barely scratch the surface of how a\l"
	.string "POKÉMON truly works.$"

CinnabarMansionS2_Oak_Texto_23:
	.string "Do whatever you want with this lab,\n"
	.string "ROCKET. Maybe you'll find something we\l"
	.string "missed.$"

CinnabarMansionS2_Oak_Texto_24:
	.string "I'm aware about the entire TEAM ROCKET\n"
	.string "waiting for me outside. Don't worry, I\l"
	.string "don't intend to do anything else.\l"
	.string "MEWTWO will be given to GIOVANNI. Who\l"
	.string "better than my old rival to carry on\l"
	.string "with this project?$"

CinnabarMansionS2_Oak_Texto_25:
	.string "I'm going back to PALLET TOWN; I need\n"
	.string "some time to think.$"

CinnabarMansionS2_Oak_Move_1:
walk_in_place_left
step_end

CinnabarMansionS2_Oak_Move_2:
walk_left
walk_left
walk_left
walk_left
face_up
step_end

CinnabarMansionS2_Oak_Move_3:
face_down
step_end

CinnabarMansionS2_Oak_Move_4:
walk_left
step_end

CinnabarMansionS2_Oak_Move_5:
walk_right
face_down
step_end

CinnabarMansionS2_Oak_Move_6:
walk_in_place_down
step_end

CinnabarMansionS2_Oak_Move_7:
face_up
step_end

CinnabarMansionS2_Oak_Move_8:
walk_down
step_end

CinnabarMansionS2_Oak_Move_9:
walk_fast_up
walk_fast_left
step_end

CinnabarMansionS2_Oak_Move_10:
walk_right
face_up
step_end

CinnabarMansionS2_Oak_Move_11:
walk_slow_right
walk_slow_down
walk_slow_right
walk_in_place_right
step_end

CinnabarMansionS2_Oak_Move_12:
face_right
step_end

CinnabarMansionS2_Oak_Move_13:
walk_slow_down
walk_slow_right
walk_in_place_right
step_end

CinnabarMansionS2_Oak_Move_14:
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
step_end

CinnabarMansion_S2_Escena_7::
clearflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
addobject 6
addobject 7
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, CinnabarMansion_S2_Escena_7_Move_1
waitmovement 0x0
special RemoveCameraObject
setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
msgbox CinnabarMansion_S2_Escena_7_Texto_1 MSGBOX_AUTOCLOSE
msgbox CinnabarMansion_S2_Escena_7_Texto_2 MSGBOX_AUTOCLOSE
applymovement 7, CinnabarMansion_S2_Escena_7_Move_2
waitmovement 0x0
msgbox CinnabarMansion_S2_Escena_7_Texto_3 MSGBOX_AUTOCLOSE
applymovement 6, CinnabarMansion_S2_Escena_7_Move_3
waitmovement 0x0
msgbox CinnabarMansion_S2_Escena_7_Texto_4 MSGBOX_AUTOCLOSE
applymovement 7, CinnabarMansion_S2_Escena_7_Move_4
waitmovement 0x0
msgbox CinnabarMansion_S2_Escena_7_Texto_5 MSGBOX_AUTOCLOSE
applymovement 6, CinnabarMansion_S2_Escena_7_Move_3
waitmovement 0x0
msgbox CinnabarMansion_S2_Escena_7_Texto_6 MSGBOX_AUTOCLOSE
msgbox CinnabarMansion_S2_Escena_7_Texto_7 MSGBOX_AUTOCLOSE
applymovement 7, CinnabarMansion_S2_Escena_7_Move_5
waitmovement 0x0
delay 20
msgbox CinnabarMansion_S2_Escena_7_Texto_8 MSGBOX_AUTOCLOSE
delay 20
applymovement 7, CinnabarMansion_S2_Escena_7_Move_6
waitmovement 0x0
msgbox CinnabarMansion_S2_Escena_7_Texto_9 MSGBOX_AUTOCLOSE
applymovement 7, CinnabarMansion_S2_Escena_7_Move_2
waitmovement 0x0
msgbox CinnabarMansion_S2_Escena_7_Texto_10 MSGBOX_AUTOCLOSE
applymovement 7, CinnabarMansion_S2_Escena_7_Move_7
waitmovement 0x0
msgbox CinnabarMansion_S2_Escena_7_Texto_11 MSGBOX_AUTOCLOSE
applymovement 6, CinnabarMansion_S2_Escena_7_Move_3
waitmovement 0x0
msgbox CinnabarMansion_S2_Escena_7_Texto_12 MSGBOX_AUTOCLOSE
delay 20
msgbox CinnabarMansion_S2_Escena_7_Texto_13 MSGBOX_AUTOCLOSE
delay 50
warpsilent MAP_ROCKET_HIDEOUT_5F, 0, 13
release
end

CinnabarMansion_S2_Escena_7_Move_2:
face_down
step_end

CinnabarMansion_S2_Escena_7_Move_3:
walk_in_place_left
step_end

CinnabarMansion_S2_Escena_7_Move_4:
face_right
step_end

CinnabarMansion_S2_Escena_7_Move_5:
face_up
step_end

CinnabarMansion_S2_Escena_7_Move_6:
walk_slow_up
step_end

CinnabarMansion_S2_Escena_7_Move_7:
walk_slow_down
walk_in_place_right
step_end

CinnabarMansion_S2_Escena_7_Move_1:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

CinnabarMansion_S2_Escena_7_Texto_1:
	.string "OAK: You know what, often, I prefer to\n"
    	.string "let people act under their free will, but\l"
    	.string "I will ask you this, do you think you\l"
    	.string "made the right choice by denouncing\l"
    	.string "FUJI so easily?$"

CinnabarMansion_S2_Escena_7_Texto_2:
	.string "BLAINE: I thought he could tell crucial\n"
    	.string "information to GIOVANNI.$"

CinnabarMansion_S2_Escena_7_Texto_3:
	.string "FUJI said the truth, he doesn't know\n"
    	.string "anything. After the war, his role as a\l"
    	.string "researcher died.$"

CinnabarMansion_S2_Escena_7_Texto_4:
	.string "BLAINE: So… just us knowing its\n"
    	.string "location?$"

CinnabarMansion_S2_Escena_7_Texto_5:
	.string "OAK: Yes, just us, and it must be kept\n"
    	.string "like this.$"

CinnabarMansion_S2_Escena_7_Texto_6:
	.string "BLAINE: I don't understand, why don't\n"
    	.string "we do something and take back KANTO?\l"
    	.string "Maybe GIOVANNI will even forgive you if\l"
    	.string "you manage to overthrow LANCE… in your\l"
    	.string "own way.$"

CinnabarMansion_S2_Escena_7_Texto_7:
    .string "OAK: Our position is stable, BLAINE.\n"
    .string "Right now, we can focus on reducing the\l"
    .string "level of uncertainty even further in\l"
    .string "case of action. Here, we can\l"
    .string "concentrate on gaining even more\l"
    .string "power.$"

CinnabarMansion_S2_Escena_7_Texto_8:
.string "Also…$"

CinnabarMansion_S2_Escena_7_Texto_9:
    .string "Now it won't be necessary to use\n"
    .string "MEWTWO, we can win even without it…\l"
    .string "especially without it.$"

CinnabarMansion_S2_Escena_7_Texto_10:
	.string "We'll quietly and cleverly take control\n"
    	.string "of KANTO, avoiding obligations without\l"
    	.string "causing another stupid war.$"

CinnabarMansion_S2_Escena_7_Texto_11:
    .string "Everything is ready, after years in the\n"
    .string "shadows, with no greater expectation\l"
    .string "than to see another day just to\l"
    .string "prevent the chances from dropping to\l"
    .string "absolute zero… finally, we can rise\l"
    .string "from our ashes, restoring the former\l"
    .string "magnificence of this region, and\l"
    .string "surpassing it!$"

CinnabarMansion_S2_Escena_7_Texto_12:
	.string "BLAINE: Do you really trust that much\n"
    	.string "in that TRAINER?$"

CinnabarMansion_S2_Escena_7_Texto_13:
    .string "OAK: I don't trust in him, BLAINE, I am\n"
    .string "sure. The numbers never lie.$"


CinnabarMansionS2_Blaine_Derrotado::
lock
faceplayer
msgbox CinnabarMansionS2_Blaine_Derrotado_Texto_1, MSGBOX_NPC
release     
end

CinnabarMansionS2_Blaine_Derrotado_Texto_1:
	.string "Good luck, {PLAYER}, though it doesn't\n"
	.string "really make sense to talk about it, all\l"
	.string "options lead to the same result.$"

