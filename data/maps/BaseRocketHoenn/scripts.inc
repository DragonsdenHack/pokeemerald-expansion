BaseRocketHoenn_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, BaseRocketHoenn_OnFrame
	.byte 0

BaseRocketHoenn_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 184, BaseRocketHoenn_Escena_Lavanda
	.2byte 0


BaseRocketHoenn_Escena_Lavanda::
setvar VAR_UNUSED_0x40F7, 185
warpsilent MAP_LAVENDER_TOWN, 18, 0
release
end



BaseRocketHoenn_1::
end

BaseRocketHoenn_2::
end

BaseRocketHoenn_3::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_3, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_3:
	.string "Allowing others to win the minor battles\n"
	.string "is a very powerful manipulation tactic.$"



BaseRocketHoenn_4::
end

BaseRocketHoenn_5::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_5, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_5:
	.string "Some POKÉMON from HOENN are really cool.\n"
	.string "MIGHTYENA and SSHARPEDO are my\l"
	.string "favorites!$"




BaseRocketHoenn_6::
end

BaseRocketHoenn_7::
end

BaseRocketHoenn_8::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_8, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_8:
	.string "Our CHIEF ADMIN. prefers exploring over\n"
	.string "sitting in her office. The POKÉMON she\l"
	.string "has reflect her countless journeys.$"




BaseRocketHoenn_9::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_9, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_9:
	.string "You know when you've made real progress\n"
	.string "in a theory when you can't explain why\l"
	.string "it took you so long to see the obvious.$"




BaseRocketHoenn_10::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_10, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_10:
	.string "This region is full of rare and exotic\n"
	.string "POKÉMON. When I went out into the\l"
	.string "desert, I was attacked by a POKÉMON\l"
	.string "that looked like a dragonfly, but the\l"
	.string "SCIENTISTS here told me it's not a BUG\l"
	.string "TYPE.$"

BaseRocketHoenn_11::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_11, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_11:
	.string "Have you heard about z-moves? A\n"
	.string "colleague at the KANTO branch leaked\l"
	.string "to me that in the new RADIO TOWER, you\l"
	.string "can buy an item that activates this\l"
	.string "power.$"




BaseRocketHoenn_12::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_12, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_12:
	.string "Creating prototypes superior to\n"
	.string "PORYGON3 will be a blow to BILL's ego.\l"
	.string "Although it's not easy to surpass the\l"
	.string "offensive capabilities of that monster.$"



BaseRocketHoenn_13::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_13, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_13:
	.string "Many think that GIOVANNI should have\n"
	.string "been tougher on LANCE after all the\l"
	.string "damage he caused. I think that we have\l"
	.string "yet to see LANCE's true punishment…$"


BaseRocketHoenn_14::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_14, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_14:
	.string "Often, doing nothing is the greatest\n"
	.string "risk.$"




BaseRocketHoenn_15::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_15, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_15:
	.string "We have invested millions in exploring\n"
	.string "every corner of the known regions, and\l"
	.string "now our information network is the most\l"
	.string "comprehensive in the world.$"





BaseRocketHoenn_16::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_16, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_16:
	.string "Indeed, UNOVA is where the ORIGINAL\n"
	.string "DRAGON was born. It fragmented into\l"
	.string "three POKÉMON, each possessing power\l"
	.string "comparable to MEWTWO's. How did you\l"
	.string "overcome such a formidable creature?$"





BaseRocketHoenn_17::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_17, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_17:
	.string "VOLCARONA is incredible; the gods of\n"
	.string "the POKÉMON WORLD must have granted it\l"
	.string "the status of a PSEUDOLEGENDARY. Or do\l"
	.string "you think that's not decided by the\l"
	.string "gods but rather by mortal will?$"




BaseRocketHoenn_18::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_18, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_18:
	.string "Many confuse MEGA AERODACTYL with\n"
	.string "PRIMAL AERODACTYL. The former was\l"
	.string "created by S. MIGUEL, thanks to\l"
	.string "crafting the specific MEGA STONE. The\l"
	.string "latter was the work of OAK and BLAINE;\l"
	.string "its STAT distribution varies slightly,\l"
	.string "but PRIMAL AERODACTYL is superior as it\l"
	.string "can use an equipable item.$"




BaseRocketHoenn_19::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_19, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_19:
	.string "Have you seen the seas of HOENN? They\n"
	.string "encompass 50% of the region,\l"
	.string "maintaining a perfect balance between\l"
	.string "water and land here; no one should try\l"
	.string "to disrupt it.$"




BaseRocketHoenn_20::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_20, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_20:
	.string "There is no greater suffering than\n"
	.string "waking up in the morning aware that you\l"
	.string "are merely a digit, a liability, a pawn, a\l"
	.string "slave, an inert and cloned being\l"
	.string "subjected to ceaseless servitude.$"

BaseRocketHoenn_21::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_21, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_21:
	.string "That SEVIPER resembles our ARBOK a lot,\n"
	.string "I think it's even better. A SCIENTIST\l"
	.string "told me it can learn FLAMETHROWER to\l"
	.string "defend against STEEL TYPE!$"




BaseRocketHoenn_22::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_22, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_22:
	.string "SINNOH is the region with the highest\n"
	.string "amount of LEGENDARIES. Being the\l"
	.string "epicenter of the so-called 'POKÉMON\l"
	.string "GOD' has a lot to do with it.$"




BaseRocketHoenn_23::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_23, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_23:
	.string "I know CAMERUPT isn't a POISON TYPE,\n"
	.string "yet it has that something that makes it\l"
	.string "the perfect companion for a TEAM\l"
	.string "ROCKET member. Just like SHARPEDO!$"




BaseRocketHoenn_24::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_24, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_24:
	.string "I like ZANGOOSE, it is slower than\n"
	.string "PERSIAN, but its SLASH is mortal!$"




BaseRocketHoenn_25::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_25, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_25:
	.string "There is not anything as MUK! That\n"
	.string "SWALOT of HOENN isn't more than just a\l"
	.string "cheap copy!$"




BaseRocketHoenn_26::
end

BaseRocketHoenn_27::
end

BaseRocketHoenn_28::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_28, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_28:
	.string "The potential of that ARCHEOPS is\n"
	.string "impressive, isn't it? It's such a pity\l"
	.string "about its ABILITY being wasted!$"




BaseRocketHoenn_29::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_29, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_29:
	.string "The security in this BASE is very\n"
	.string "strict; to reach B2F, you need a card\l"
	.string "personalized for each member.$"




BaseRocketHoenn_30::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_30, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_30:
	.string "Further south lies MAUVILLE CITY, they\n"
	.string "say it has a GAME CORNER like ours.$"




BaseRocketHoenn_31::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_31, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_31:
	.string "KALOS is the region with the fewest\n"
	.string "singular POKÉMON, although MEGA STONE\l"
	.string "technology was first developed there.$"




BaseRocketHoenn_32::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_32, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_32:
	.string "ELM is obsessed with RADIO WAVES and\n"
	.string "POKÉMON EVOLUTION. I think he wouldn't\l"
	.string "mind leaving aberrations behind if it\l"
	.string "helps him achieve his goals.$"




BaseRocketHoenn_33::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_33, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_33:
	.string "I would love to be transferred to the\n"
	.string "new RADIO TOWER in LAVENDER, and work\l"
	.string "on the 6F or 7F. The views from there up\l"
	.string "must be amazing!$"




BaseRocketHoenn_34::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_34, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_34:
	.string "The other day I went down to the\n"
	.string "DESERT and a huge cactus attacked me.\l"
	.string "Since then, it has become my favorite\l"
	.string "POKÉMON.$"




BaseRocketHoenn_35::
lock     
faceplayer     
msgbox BaseRocketHoenn_Text_35, MSGBOX_DEFAULT
release     
end

BaseRocketHoenn_Text_35:
	.string "What most prevents us from moving\n"
	.string "forward is how quickly we feel satisfied\l"
	.string "with ourselves.$"



BaseRocketHoennDocumento_100::
lock        
showmonpic SPECIES_UXIE, 10, 3 
playmoncry SPECIES_UXIE, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_100:
.string "NUMBER 14: UXIE\p"
	.string "HP: 75\n"
	.string "ATTACK: 75\l"
	.string "DEFENSE: 130\l"
	.string "SPECIAL ATTACK: 75\l"
	.string "SPECIAL DEFENSE: 130\l"
	.string "SPEED: 95\l"
	.string "TOTAL: 580\p"
	.string "One of the 3 LEGENDARY ELVES of\l"
	.string "SINOHH. It represents wisdom. It\l"
	.string "boasts extraordinary defensive\l"
	.string "attributes, surpassing even the\l"
	.string "POKÉMON GOD itself in both DEFENSE and\l"
	.string "SPECIAL DEFENSE, with 130 BASE STATS\l"
	.string "in each. Despite having good SPEED, its\l"
	.string "offensive capability is mediocre for a\l"
	.string "LEGENDARY.$"



BaseRocketHoennDocumento_101::
lock        
showmonpic SPECIES_AZELF, 10, 3 
playmoncry SPECIES_AZELF, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_101, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_101:
.string "NUMBER 13: AZELF\p"
	.string "HP: 75\n"
	.string "ATTACK: 125\l"
	.string "DEFENSE: 70\l"
	.string "SPECIAL ATTACK: 125\l"
	.string "SPECIAL DEFENSE: 70\l"
	.string "SPEED: 115\l"
	.string "TOTAL: 580\p"
	.string "One of the 3 LEGENDARY ELVES of\l"
	.string "SINOHH. Symbolizing willpower, it stands\l"
	.string "out as the most offensive among the\l"
	.string "trio, albeit being the most fragile. Its\l"
	.string "extensive movepool, encompassing both\l"
	.string "physical and special attacks, renders\l"
	.string "it dangerous, capable of executing\l"
	.string "combos like TAUNT+STEALTH\l"
	.string "ROCK+EXPLOSION, supported by a base\l"
	.string "speed stat of 115.$"



BaseRocketHoennDocumento_102::
lock        
showmonpic SPECIES_MESPRIT, 10, 3 
playmoncry SPECIES_MESPRIT, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_102, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_102:
.string "NUMBER 12: MESPRIT\p"
	.string "HP: 80\n"
	.string "ATTACK: 105\l"
	.string "DEFENSE: 105\l"
	.string "SPECIAL ATTACK: 105\l"
	.string "SPECIAL DEFENSE: 105\l"
	.string "SPEED: 80\l"
	.string "TOTAL: 580\p"
	.string "One of the 3 LEGENDARY ELVES of\l"
	.string "SINOHH. It represents emotions. It is\l"
	.string "the most balanced of the 3, surpassing\l"
	.string "100 BASE STATS in 4 different\l"
	.string "attributes, which is almost unheard of\l"
	.string "in a MINOR LEGENDARY. For many, this\l"
	.string "distribution is a burden, as it fails to\l"
	.string "fully specialize in a single facet like\l"
	.string "its two siblings, remaining in a sort of\l"
	.string "no man's land.$"



BaseRocketHoennDocumento_103::
lock        
showmonpic SPECIES_GARCHOMP, 10, 3 
playmoncry SPECIES_GARCHOMP, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_103, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_103:
.string "NUMBER 11: GARCHOMP\p"
	.string "HP: 108\n"
	.string "ATTACK: 130\l"
	.string "DEFENSE: 95\l"
	.string "SPECIAL ATTACK: 80\l"
	.string "SPECIAL DEFENSE: 85\l"
	.string "SPEED: 102\l"
	.string "TOTAL: 580\p"
	.string "For many trainers, it's the best\n"
	.string "PSEUDO-LEGENDARY. It possesses all\l"
	.string "the attributes necessary to be a\l"
	.string "dominant POKÉMON: SPEED surpassing\l"
	.string "100, formidable PHYSICAL ATTACK, a\l"
	.string "versatile type combination, dealing\l"
	.string "significant damage with STAB moves in\l"
	.string "both cases, and a SPECIAL ATTACK stat\l"
	.string "of only 80 points to efficiently\l"
	.string "allocate its total of 600 BASE STATS…\l"
	.string "Some even argue it's capable of\l"
	.string "challenging MAJOR LEGENDARIES.$"



BaseRocketHoennDocumento_104::
lock        
showmonpic SPECIES_SHAYMIN, 10, 3 
playmoncry SPECIES_SHAYMIN, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_104, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_104:
.string "NUMBER 10: SHAYMIN\p"
	.string "HP: 100\n"
	.string "ATTACK: 100\l"
	.string "DEFENSE: 100\l"
	.string "SPECIAL ATTACK: 100\l"
	.string "SPECIAL DEFENSE: 100\l"
	.string "SPEED: 100\l"
	.string "TOTAL: 600\p"
	.string "It's believed to be in total symbiosis\n"
	.string "with the fauna and flora of SINNOH,\l"
	.string "hence its characteristic SEED FLARE.\l"
	.string "Its SKY FORM is the most interesting\l"
	.string "competitively speaking. Thanks to its\l"
	.string "ABILITY, SERENE GRACE, it can useAIR\l"
	.string "SLASH with a 60% chance of flinch, while\l"
	.string "also using a SEED FLARE with 120\l"
	.string "potence, lowering the opponent's\l"
	.string "SPECIAL DEFENSE by 2 levels in 80% of\l"
	.string "cases. For a POKÉMON with 127 SPEED\l"
	.string "points and 120 SPECIAL ATTACK, this\l"
	.string "gives it a tremendous advantage\l"
	.string "against all slower POKÉMON, which is the\l"
	.string "vast majority.$"



BaseRocketHoennDocumento_105::
lock        
showmonpic SPECIES_MANAPHY, 10, 3 
playmoncry SPECIES_MANAPHY, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_105, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_105:
.string "NUMBER 9: MANAPHY\p"
	.string "HP: 100\n"
	.string "ATTACK: 100\l"
	.string "DEFENSE: 100\l"
	.string "SPECIAL ATTACK: 100\l"
	.string "SPECIAL DEFENSE: 100\l"
	.string "SPEED: 100\l"
	.string "TOTAL: 600\p"
	.string "Born in the depths of the sea, it was\n"
	.string "compelled to generate light from the\l"
	.string "darkest abyss. Thanks to this, its\l"
	.string "signature move, TAIL GLOW, triggers the\l"
	.string "most radical increase in SPECIAL\l"
	.string "ATTACK known, making it a formidable\l"
	.string "sweeper despite not having a high base\l"
	.string "offensive capability.$"



BaseRocketHoennDocumento_106::
lock        
showmonpic SPECIES_HEATRAN, 10, 3 
playmoncry SPECIES_HEATRAN, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_106, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_106:
.string "NUMBER 8: HEATRAN\p"
	.string "HP: 91\n"
	.string "ATTACK: 90\l"
	.string "DEFENSE: 106\l"
	.string "SPECIAL ATTACK: 130\l"
	.string "SPECIAL DEFENSE: 106\l"
	.string "SPEED: 77\l"
	.string "TOTAL: 600\p"
	.string "Studies indicate that it can withstand\n"
	.string "temperatures of several million\l"
	.string "degrees. It combines a powerful\l"
	.string "SPECIAL ATTACK of 130 points with an\l"
	.string "interesting defensive capability, more\l"
	.string "due to its extraordinary FIRE/STEEL\l"
	.string "typing than its notable defensive\l"
	.string "stats.$"



BaseRocketHoennDocumento_107::
lock        
showmonpic SPECIES_CRESSELIA, 10, 3 
playmoncry SPECIES_CRESSELIA, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_107, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_107:
.string "NUMBER 7: CRESSELIA\p"
	.string "HP: 120\n"
	.string "ATTACK: 70\l"
	.string "DEFENSE: 120\l"
	.string "SPECIAL ATTACK: 75\l"
	.string "SPECIAL DEFENSE: 130\l"
	.string "SPEED: 85\l"
	.string "TOTAL: 600\p"
	.string "The LUNAR POKÉMON. One of the best\n"
	.string "tanks in terms of sheer numbers that\l"
	.string "exist. It rivals even LUGIA in this\l"
	.string "regard, although, as a consequence, its\l"
	.string "ability to deal direct damage is greatly\l"
	.string "diminished. The price to pay for\l"
	.string "maintaining remarkable stats for a\l"
	.string "major LEGENDARY in HP, DEFENSE, and\l"
	.string "SPECIAL DEFENSE.$"



BaseRocketHoennDocumento_108::
lock        
showmonpic SPECIES_DARKRAI, 10, 3 
playmoncry SPECIES_DARKRAI, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_108, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_108:
.string "NUMBER 6: DARKRAI\p"
	.string "HP: 90\n"
	.string "ATTACK: 70\l"
	.string "DEFENSE: 90\l"
	.string "SPECIAL ATTACK: 135\l"
	.string "SPECIAL DEFENSE: 90\l"
	.string "SPEED: 125\l"
	.string "TOTAL: 600\p"
	.string "The Guardian of Shadows, its enigmatic\n"
	.string "nature strikes fear into the hearts of\l"
	.string "its enemies. With a SPEED stat of 125\l"
	.string "points, coupled with a SPECIAL ATTACK\l"
	.string "of 135, a diverse array of special\l"
	.string "moves, and its characteristic move,\l"
	.string "DARK VOID, it justifies the dread it\l"
	.string "evokes. Moreover, triple 90s in HP,\l"
	.string "DEFENSE, and SPECIAL DEFENSE are\l"
	.string "exceedingly noteworthy for a\l"
	.string "LEGENDARY with 600 BASE STATS.$"



BaseRocketHoennDocumento_109::
lock        
showmonpic SPECIES_REGIGIGAS, 10, 3 
playmoncry SPECIES_REGIGIGAS, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_109, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_109:
.string "NUMBER 5: REGIGIGAS\p"
	.string "HP: 110\n"
	.string "ATTACK: 160\l"
	.string "DEFENSE: 110\l"
	.string "SPECIAL ATTACK: 80\l"
	.string "SPECIAL DEFENSE: 110\l"
	.string "SPEED: 100\l"
	.string "TOTAL: 670\p"
	.string "Some claim that its true form, the one\n"
	.string "that dragged continents with ropes,\l"
	.string "still slumbers. Estimates suggest that\l"
	.string "in all its splendor, its PHYSICAL ATTACK\l"
	.string "would exceed 200 BASE STATS. In its\l"
	.string "current form, its ABILITY leads it\l"
	.string "toward mediocrity,, squandering its\l"
	.string "unique natural potential.$"



BaseRocketHoennDocumento_110::
lock        
showmonpic SPECIES_PALKIA, 10, 3 
playmoncry SPECIES_PALKIA, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_110, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_110:
.string "NUMBER 4: PALKIA\p"
	.string "HP: 90\n"
	.string "ATTACK: 120\l"
	.string "DEFENSE: 100\l"
	.string "SPECIAL ATTACK: 150\l"
	.string "SPECIAL DEFENSE: 120\l"
	.string "SPEED: 100\l"
	.string "TOTAL: 680\p"
	.string "One of the 3 deities of SINNOH. The lord\n"
	.string "of space, it can control it at will and\l"
	.string "even destroy it thanks to its SPACIAL\l"
	.string "REND. Like its great rival, DIALGA, it\l"
	.string "boasts a golden number of 150 points in\l"
	.string "its SPECIAL ATTACK. Its WATER TYPE and\l"
	.string "SPEED of 100 points allow it to attack\l"
	.string "quickly, forcefully, and with\l"
	.string "versatility.$"



BaseRocketHoennDocumento_111::
lock        
showmonpic SPECIES_DIALGA, 10, 3 
playmoncry SPECIES_DIALGA, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_111, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_111:
.string "NUMBER 3: DIALGA\p"
	.string "HP: 100\n"
	.string "ATTACK: 120\l"
	.string "DEFENSE: 120\l"
	.string "SPECIAL ATTACK: 150\l"
	.string "SPECIAL DEFENSE: 100\l"
	.string "SPEED: 90\l"
	.string "TOTAL: 680\p"
	.string "One of the 3 deities of SINNOH. The lord\n"
	.string "of time, it can alter it as it pleases\l"
	.string "thanks to its ROAR OF TIME, the most\l"
	.string "powerful DRAGON TYPE move known. Like\l"
	.string "its great rival, PALKIA, the golden\l"
	.string "number of 150 points is found in its\l"
	.string "SPECIAL ATTACK. Its STEEL TYPE and\l"
	.string "good defensive attributes make it a\l"
	.string "solid opponent capable of hitting hard.$"



BaseRocketHoennDocumento_112::
lock        
showmonpic SPECIES_GIRATINA, 10, 3 
playmoncry SPECIES_GIRATINA, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_112, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_112:
.string "NUMBER 2: GIRATINA\p"
	.string "HP: 150\n"
	.string "ATTACK: 100\l"
	.string "DEFENSE: 120\l"
	.string "SPECIAL ATTACK: 100\l"
	.string "SPECIAL DEFENSE: 120\l"
	.string "SPEED: 90\l"
	.string "TOTAL: 680\p"
	.string "One of the 3 deities of SINNOH. The lord\n"
	.string "of DISTORTION WORLD, it changes its\l"
	.string "appearance to a more offensive one\l"
	.string "upon entering our world. The golden\l"
	.string "number of 150 points goes to its HEALTH\l"
	.string "POINTS, which, combined with 120 BASE\l"
	.string "STATS in both defenses, makes this\l"
	.string "POKÉMON one of the top 3 walls in terms\l"
	.string "of BASE STATS. Its SHADOW FORCE is the\l"
	.string "most unavoidable move there is.$"



BaseRocketHoennDocumento_113::
lock        
showmonpic SPECIES_ARCEUS, 10, 3 
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_113, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_113:
.string "NUMBER 1: ARCEUS\p"
	.string "HP: 120\n"
	.string "ATTACK: 120\l"
	.string "DEFENSE: 120\l"
	.string "SPECIAL ATTACK: 120\l"
	.string "SPECIAL DEFENSE: 120\l"
	.string "SPEED: 120\l"
	.string "TOTAL: 720\p"
	.string "The GOD POKÉMON, theoretically, of our\n"
	.string "universe. In its actual form, it\l"
	.string "maintains a consistent 120 points in all\l"
	.string "6 STATS. Recent revelations from the\l"
	.string "CHIEF ADMIN. {PLAYER} unveil that in\l"
	.string "its PRIMAL FORM, it attains the golden\l"
	.string "number of 150 BASE in each of its 6\l"
	.string "STATS, establishing this figure as the\l"
	.string "constant of the gods.$"



BaseRocketHoennDocumento_114::
lock        
showmonpic SPECIES_VOLCARONA, 10, 3 
playmoncry SPECIES_VOLCARONA, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_114, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_114:
.string "NUMBER 17: VOLCARONA\p"
	.string "HP: 85\n"
	.string "ATTACK: 60\l"
	.string "DEFENSE: 65\l"
	.string "SPECIAL ATTACK: 135\l"
	.string "SPECIAL DEFENSE: 105\l"
	.string "SPEED: 100\l"
	.string "TOTAL: 550\p"
	.string "The majestic moth of UNOVA. It\n"
	.string "unleashes its FIRE TYPE moves with\l"
	.string "such strength and vigor that they seem\l"
	.string "to originate from the sun itself. It was\l"
	.string "worshipped in ancient cultures, with\l"
	.string "many legends surrounding its history.\l"
	.string "Some believe it was nothing more than a\l"
	.string "mortal POKÉMON who managed to enter\l"
	.string "divine territory through sheer\l"
	.string "willpower.$"



BaseRocketHoennDocumento_115::
lock        
showmonpic SPECIES_DARMANITAN_ZEN_MODE, 10, 3 
playmoncry SPECIES_DARMANITAN_ZEN_MODE, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_115, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_115:
.string "NUMBER 16: ZEN MODE DARMANITAN\p"
	.string "HP: 105\n"
	.string "ATTACK: 30\l"
	.string "DEFENSE: 105\l"
	.string "SPECIAL ATTACK: 160\l"
	.string "SPECIAL DEFENSE: 105\l"
	.string "SPEED: 55\l"
	.string "TOTAL: 560\p"
	.string "Only dozens of specimens are known\n"
	.string "worldwide, believed to originate from a\l"
	.string "DARMANITAN that achieved a state of\l"
	.string "enlightenment, channeling all its\l"
	.string "physical vigor towards its mind. Such\l"
	.string "was the wisdom accumulated in the\l"
	.string "process that its PHYSICAL ATTACK\l"
	.string "became completely unusable, gaining in\l"
	.string "return an even greater SPECIAL ATTACK\l"
	.string "than its former PHYSICAL as a regular\l"
	.string "DARMANITAN, a staggering 160 BASE that\l"
	.string "not even MEWTWO could match.$"



BaseRocketHoennDocumento_116::
lock        
showmonpic SPECIES_ARCHEOPS, 10, 3 
playmoncry SPECIES_ARCHEOPS, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_116, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_116:
.string "NUMBER 15: ARCHEOPS:\p"
	.string "HP: 75\n"
	.string "ATTACK: 140\l"
	.string "DEFENSE: 65\l"
	.string "SPECIAL ATTACK: 112\l"
	.string "SPECIAL DEFENSE: 65\l"
	.string "SPEED: 110\l"
	.string "TOTAL: 567\p"
	.string "Despite its extraordinary offensive\n"
	.string "capabilities, which impressed KANTO\l"
	.string "scientists - who considered it an\l"
	.string "enhanced AERODACTYL - its lethal\l"
	.string "140/110 in ATTACK/SPEED is undermined\l"
	.string "by its ABILITY, DEFEATIST. However,\l"
	.string "recent research suggests that its\l"
	.string "PRIMAL FORM, in the wild, lacked a\l"
	.string "limiting ABILITY.$"



BaseRocketHoennDocumento_117::
lock        
showmonpic SPECIES_VIRIZION, 10, 3 
playmoncry SPECIES_VIRIZION, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_117, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_117:
.string "NUMBER 14: VIRIZION:\p"
	.string "HP: 91\n"
	.string "ATTACK: 90\l"
	.string "DEFENSE: 72\l"
	.string "SPECIAL ATTACK: 90\l"
	.string "SPECIAL DEFENSE: 129\l"
	.string "SPEED: 108\l"
	.string "TOTAL: 580\p"
	.string "Great special wall, the most vulnerable\n"
	.string "of the SWORDS OF JUSTICE regarding\l"
	.string "resistances and weaknesses.\l"
	.string "Nevertheless, it utilizes FIGHTINIUM Z\l"
	.string "very effectively to deliver a\l"
	.string "devastating CLOSE COMBAT with 190\l"
	.string "power in its signature set. It has the\l"
	.string "option to boost itself with SWORD\l"
	.string "DANCE, strike with STAB using LEAF\l"
	.string "BLADE, and provide excellent coverage\l"
	.string "with STONE EDGE.$"



BaseRocketHoennDocumento_118::
lock        
showmonpic SPECIES_COBALION, 10, 3 
playmoncry SPECIES_COBALION, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_118, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_118:
.string "NUMBER 13: COBALION:\p"
	.string "HP: 91\n"
	.string "ATTACK: 90\l"
	.string "DEFENSE: 129\l"
	.string "SPECIAL ATTACK: 72\l"
	.string "SPECIAL DEFENSE: 90\l"
	.string "SPEED: 108\l"
	.string "TOTAL: 580\p"
	.string "A formidable physical wall, its\n"
	.string "STEEL/FIGHTING combination grants it\l"
	.string "8 resistances and 1 immunity to POISON.\l"
	.string "Despite its modest ATTACK of 90 points,\l"
	.string "it can inflict significant damage\l"
	.string "thanks to its ability to boost with\l"
	.string "SWORD DANCE easily. With 108 SPEED\l"
	.string "points, it can take down many\l"
	.string "opponents in one shot with CLOSE\l"
	.string "COMBAT and IRON HEAD for STAB.$"



BaseRocketHoennDocumento_119::
lock        
showmonpic SPECIES_TERRAKION, 10, 3 
playmoncry SPECIES_TERRAKION, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_119, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_119:
.string "NUMBER 12: TERRAKION:\p"
	.string "HP: 91\n"
	.string "ATTACK: 129\l"
	.string "DEFENSE: 90\l"
	.string "SPECIAL ATTACK: 72\l"
	.string "SPECIAL DEFENSE: 90\l"
	.string "SPEED: 108\l"
	.string "TOTAL: 580\p"
	.string "Something underrated considering its\n"
	.string "excellent STAT distribution, with only\l"
	.string "72 points in SPECIAL ATTACK out of a\l"
	.string "total of 580, making it one of the most\l"
	.string "efficient lesser LEGENDARIES in terms\l"
	.string "of STAT allocation. Consequently, it\l"
	.string "boasts an extraordinary combination of\l"
	.string "129/108 in ATTACK/SPEED, with moves\l"
	.string "like EARTHQUAKE, STONE EDGE, or CLOSE\l"
	.string "COMBAT for STAB, along with notable\l"
	.string "defenses. GIOVANNI lamented that it\l"
	.string "wasn't a GROUND TYPE instead of ROCK,\l"
	.string "as an EARTHQUAKE for STAB on this\l"
	.string "POKÉMON would have been overwhelming.$"



BaseRocketHoennDocumento_120::
lock        
showmonpic SPECIES_KELDEO, 10, 3 
playmoncry SPECIES_KELDEO, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_120, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_120:
.string "NUMBER 11: KELDEO:\p"
	.string "HP: 91\n"
	.string "ATTACK: 72\l"
	.string "DEFENSE: 90\l"
	.string "SPECIAL ATTACK: 129\l"
	.string "SPECIAL DEFENSE: 90\l"
	.string "SPEED: 108\l"
	.string "TOTAL: 580\p"
	.string "As the fourth member of the SWORDS OF\n"
	.string "JUSTICE, alongside TERRAKION, it\l"
	.string "possesses the most balanced STAT\l"
	.string "distribution, making it arguably the\l"
	.string "strongest competitor. Its\l"
	.string "WATER/FIGHTING typing grants it\l"
	.string "excellent coverage with STAB moves,\l"
	.string "coupled with an impressive 129/108 in\l"
	.string "SPECIAL ATTACK/SPEED. Items like LIFE\l"
	.string "ORB or CHOICE SPECS can easily\l"
	.string "overpower opposing teams. CALM MIND\l"
	.string "can catch opponents off guard, given\l"
	.string "the imminent offensive capabilities of\l"
	.string "this POKÉMON.$"



BaseRocketHoennDocumento_121::
lock        
showmonpic SPECIES_TORNADUS, 10, 3 
playmoncry SPECIES_TORNADUS, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_121, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_121:
.string "NUMBER 10: TORNADUS:\p"
	.string "HP: 79\n"
	.string "ATTACK: 115\l"
	.string "DEFENSE: 70\l"
	.string "SPECIAL ATTACK: 125\l"
	.string "SPECIAL DEFENSE: 80\l"
	.string "SPEED: 111\l"
	.string "TOTAL: 580\p"
	.string "It is part of the FORCES OF NATURE TRIO\n"
	.string "of UNOVA. It shares a SPECIAL\l"
	.string "ATTACK/SPEED ratio (125/111) with\l"
	.string "THUNDURUS, allowing it to hit very hard\l"
	.string "with its HURRICANE for STAB. Its\l"
	.string "THERIAN form is even faster (121) and\l"
	.string "more defensive, albeit at the cost of\l"
	.string "losing firepower (100-110 in\l"
	.string "ATTACK/SPECIAL ATTACK compared to\l"
	.string "115-125).$"



BaseRocketHoennDocumento_122::
lock        
showmonpic SPECIES_THUNDURUS, 10, 3 
playmoncry SPECIES_THUNDURUS, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_122, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_122:
.string "NUMBER 9: THUNDURUS:\p"
	.string "HP: 79\n"
	.string "ATTACK: 115\l"
	.string "DEFENSE: 70\l"
	.string "SPECIAL ATTACK: 125\l"
	.string "SPECIAL DEFENSE: 80\l"
	.string "SPEED: 111\l"
	.string "TOTAL: 580\p"
	.string "It is part of the FORCES OF NATURE TRIO\n"
	.string "of UNOVA. Its PRANKSTER ABILITY,\l"
	.string "combined with an excellent SPECIAL\l"
	.string "ATTACK/SPEED ratio (125/111), makes it\l"
	.string "a very dangerous and unpredictable\l"
	.string "POKÉMON. Its THERIAN form gains even\l"
	.string "more power in SPECIAL ATTACK (145), at\l"
	.string "the cost of SPEED (101), while also\l"
	.string "becoming immune to ELECTRIC TYPE\l"
	.string "attacks.$"



BaseRocketHoennDocumento_123::
lock        
showmonpic SPECIES_HYDREIGON, 10, 3 
playmoncry SPECIES_HYDREIGON, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_123, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_123:
.string "NUMBER 8: HYDREIGON:\p"
	.string "HP: 92\n"
	.string "ATTACK: 105\l"
	.string "DEFENSE: 90\l"
	.string "SPECIAL ATTACK: 125\l"
	.string "SPECIAL DEFENSE: 90\l"
	.string "SPEED: 98\l"
	.string "TOTAL: 600\p"
	.string "The only PSEUDOLEGENDARY that relies\n"
	.string "on SPECIAL ATTACK for its offense,\l"
	.string "boasting a formidable arsenal of such\l"
	.string "moves. It is characterized by\l"
	.string "relentlessly pressuring its opponents,\l"
	.string "utilizing its wide variety and notable\l"
	.string "power on both PHYSICAL and SPECIAL\l"
	.string "sides, with LIFE ORB being its best ally.\l"
	.string "Many think it lost the duel to GARCHOMP\l"
	.string "for the title of best PSEUDOLEGENDARY\l"
	.string "when it failed to surpass a base SPEED\l"
	.string "of 100.$"



BaseRocketHoennDocumento_124::
lock        
showmonpic SPECIES_MELOETTA, 10, 3 
playmoncry SPECIES_MELOETTA, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_124, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_124:
.string "NUMBER 7: MELOETTA:\p"
	.string "HP: 100\n"
	.string "ATTACK: 77\l"
	.string "DEFENSE: 77\l"
	.string "SPECIAL ATTACK: 128\l"
	.string "SPECIAL DEFENSE: 128\l"
	.string "SPEED: 90\l"
	.string "TOTAL: 600\p"
	.string "A peculiar POKÉMON with the status of a\n"
	.string "LEGENDARY, capable of swapping its\l"
	.string "SPECIAL ATTACK/SPECIAL DEFENSE\l"
	.string "values (128) with those of\l"
	.string "ATTACK/SPEED, in addition to its\l"
	.string "PSYCHIC type with FIGHTING, all during\l"
	.string "battle thanks to its characteristic\l"
	.string "RELIC SONG. Its STAT distribution is\l"
	.string "one of the most efficient among\l"
	.string "unaltered POKÉMON, with only 77 in\l"
	.string "PHYSICAL ATTACK for a total of 600.$"



BaseRocketHoennDocumento_125::
lock        
showmonpic SPECIES_VICTINI, 10, 3 
playmoncry SPECIES_VICTINI, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_125, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_125:
.string "NUMBER 6: VICTINI:\p"
	.string "HP: 100\n"
	.string "ATTACK: 125\l"
	.string "DEFENSE: 100\l"
	.string "SPECIAL ATTACK: 50\l"
	.string "SPECIAL DEFENSE: 100\l"
	.string "SPEED: 125\l"
	.string "TOTAL: 600\p"
	.string "The POKÉMON VICTORY, possessing one of\n"
	.string "the most privileged MOVEPOOLS, as it\l"
	.string "has access to both BLUE FLAME and BOLT\l"
	.string "STRIKE of the UNOVA legends.\l"
	.string "Furthermore, its characteristic\l"
	.string "V-CREATE, with an astounding 180 power,\l"
	.string "makes such an attack a rarity among\l"
	.string "POKÉMON of this caliber, especially\l"
	.string "considering the minimal penalty of only\l"
	.string "reducing SPEED and DEFENSES. Thanks to\l"
	.string "its ability, VICTORY STAR, V-CREATE will\l"
	.string "always hit, while BOLT STRIKE and BLUE\l"
	.string "FLAME will have a 93.5% accuracy.$"



BaseRocketHoennDocumento_126::
lock        
showmonpic SPECIES_GENESECT, 10, 3 
playmoncry SPECIES_GENESECT, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_126, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_126:
.string "NUMBER 5: GENESECT:\p"
    .string "HP: 71\n"
	.string "ATTACK: 120\l"
	.string "DEFENSE: 95\l"
	.string "SPECIAL ATTACK: 120\l"
	.string "SPECIAL DEFENSE: 95\l"
	.string "SPEED: 99\l"
	.string "TOTAL: 600\p"
	.string "A POKÉMON product of a modification of\n"
	.string "the deadliest BUG TYPE predator from\l"
	.string "UNOVA 300 million years ago, of which we\l"
	.string "are unaware of its BASE STATS, but we\l"
	.string "estimate them to be between 520-540,\l"
	.string "with a significantly low SPECIAL ATTACK\l"
	.string "ranging from 40 to 60 points. Its main\l"
	.string "enhancement between the original\l"
	.string "GENESECT and the modified version lies\l"
	.string "in that increase of 60-80 in SPECIAL\l"
	.string "ATTACK, which would place it at a BASE\l"
	.string "of 600. Further research is needed to\l"
	.string "explore a possible relationship with\l"
	.string "KABUTOPS.$"



BaseRocketHoennDocumento_127::
lock        
showmonpic SPECIES_LANDORUS, 10, 3 
playmoncry SPECIES_LANDORUS, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_127, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_127:
.string "NUMBER 4: LANDORUS:\p"
    .string "HP: 89\n"
	.string "ATTACK: 125\l"
	.string "DEFENSE: 90\l"
	.string "SPECIAL ATTACK: 115\l"
	.string "SPECIAL DEFENSE: 80\l"
	.string "SPEED: 101\l"
	.string "TOTAL: 600\p"
	.string "The genius and god of harvests in\n"
	.string "UNOVA, both its INCARNATE and THERIAN\l"
	.string "forms exhibit great competitive\l"
	.string "potential.$"



BaseRocketHoennDocumento_128::
lock        
showmonpic SPECIES_KYUREM, 10, 3 
playmoncry SPECIES_KYUREM, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_128, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_128:
.string "NUMBER 3: KYUREM:\p"
    .string "HP: 125\n"
	.string "ATTACK: 130\l"
	.string "DEFENSE: 90\l"
	.string "SPECIAL ATTACK: 130\l"
	.string "SPECIAL DEFENSE: 90\l"
	.string "SPEED: 95\l"
	.string "TOTAL: 660\p"
	.string "The POKÉMON ZERO, the empty husk left\n"
	.string "behind after the split of the ORIGINAL\l"
	.string "DRAGON into RESHIRAM and ZEKROM.\l"
	.string "Exceeding 120 points, the limit set by\l"
	.string "ARCEUS, in 3 of the 6 stats,\l"
	.string "particularly in health and both\l"
	.string "attacks, is evidence that we are\l"
	.string "dealing with a highly unconventional\l"
	.string "POKÉMON. Its lacking SPEED and an ICE\l"
	.string "TYPE with significant weaknesses\l"
	.string "deprive it, despite having MAJOR\l"
	.string "LEGENDARY stats, of being much more\l"
	.string "formidable.$"



BaseRocketHoennDocumento_129::
lock        
showmonpic SPECIES_ZEKROM, 10, 3 
playmoncry SPECIES_ZEKROM, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_129, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_129:
.string "NUMBER 2: ZEKROM:\p"
    .string "HP: 100\n"
	.string "ATTACK: 150\l"
	.string "DEFENSE: 120\l"
	.string "SPECIAL ATTACK: 120\l"
	.string "SPECIAL DEFENSE: 100\l"
	.string "SPEED: 90\l"
	.string "TOTAL: 680\p"
	.string "The POKÉMON YING, the pure part that\n"
	.string "separated from the ORIGINAL DRAGON.\l"
	.string "The intensity with which it unleashes\l"
	.string "electrical discharges is unparalleled.\l"
	.string "BOLT STRIKE was unanimously chosen as\l"
	.string "the best ELECTRIC TYPE move, boasting\l"
	.string "10 points more power than VOLT TACKLE,\l"
	.string "85% accuracy, and not only does it not\l"
	.string "incur recoil damage, but it also has a\l"
	.string "30% chance of paralyzing the opponent.$"



BaseRocketHoennDocumento_130::
lock        
showmonpic SPECIES_RESHIRAM, 10, 3
playmoncry SPECIES_RESHIRAM, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_130, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_130:
.string "NUMBER 1: RESHIRAM:\p"
    .string "HP: 100\n"
	.string "ATTACK: 120\l"
	.string "DEFENSE: 100\l"
	.string "SPECIAL ATTACK: 150\l"
	.string "SPECIAL DEFENSE: 120\l"
	.string "SPEED: 90\l"
	.string "TOTAL: 680\p"
	.string "The POKÉMON YANG, The truthful part\n"
	.string "that separated from the ORIGINAL\l"
	.string "DRAGON. The intensity of its flames\l"
	.string "knows no equal. BLUE FLAME is\l"
	.string "considered by our scientists as one of\l"
	.string "the top 3 FIRE-TYPE moves, being 17%\l"
	.string "more potent than FIRE BLAST, with\l"
	.string "similar accuracy, and inflicting burns\l"
	.string "in 30% of cases. Coupled with its 150\l"
	.string "points in SPECIAL ATTACK, along with\l"
	.string "DRACO METEOR, it deals devastating\l"
	.string "damage to any POKÉMON.$"



BaseRocketHoennDocumento_131::
lock        
showmonpic SPECIES_FLORGES, 10, 3
playmoncry SPECIES_FLORGES, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_131, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_131:
.string "NUMBER 8: FLORGES:\p"
    .string "HP: 78\n"
	.string "ATTACK: 65\l"
	.string "DEFENSE: 68\l"
	.string "SPECIAL ATTACK: 112\l"
	.string "SPECIAL DEFENSE: 154\l"
	.string "SPEED: 75\l"
	.string "TOTAL: 552\p"
	.string "One of the NON LEGENDARY or\n"
	.string "PSEUDOLEGENDARY POKÉMON with the best\l"
	.string "stats, boasting a total of 552 BASE\l"
	.string "STATS, manages to match the 154 points\l"
	.string "in SPECIAL DEFENSE of LUGIA and HO-OH,\l"
	.string "in addition to 112 in SPECIAL ATTACK.\l"
	.string "This reinforces its role as the\l"
	.string "quintessential FAIRY TYPE POKÉMON, as\l"
	.string "they are known for their high SPECIAL\l"
	.string "DEFENSE. A suitable ability to\l"
	.string "complement its power would have given\l"
	.string "it a significant boost in quality.$"



BaseRocketHoennDocumento_132::
lock        
showmonpic SPECIES_GOODRA, 10, 3
playmoncry SPECIES_GOODRA, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_132, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_132:
.string "NUMBER 7: GOODRA:\p"
    .string "HP: 90\n"
	.string "ATTACK: 100\l"
	.string "DEFENSE: 70\l"
	.string "SPECIAL ATTACK: 110\l"
	.string "SPECIAL DEFENSE: 150\l"
	.string "SPEED: 80\l"
	.string "TOTAL: 600\p"
	.string "Perhaps the PSEUDOLEGENDARY with the\n"
	.string "least competitive utility, despite\l"
	.string "having interesting qualities. Its 150 in\l"
	.string "SPECIAL DEFENSE is the highest stat\l"
	.string "achieved by a PSEUDO, combined with 110\l"
	.string "in SPECIAL ATTACK and a wide range of\l"
	.string "moves, making it a top-tier POKÉMON in\l"
	.string "close combat on the special side.\l"
	.string "However, its fragility on the physical\l"
	.string "side and its improvable SPEED make it\l"
	.string "too vulnerable.$"



BaseRocketHoennDocumento_133::
lock        
showmonpic SPECIES_DIANCIE, 10, 3
playmoncry SPECIES_DIANCIE, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_133, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_133:
.string "NUMBER 6: DIANCIE:\p"
    .string "HP: 50\n"
	.string "ATTACK: 100\l"
	.string "DEFENSE: 150\l"
	.string "SPECIAL ATTACKL: 100\l"
	.string "SPECIAL DEFENSE: 150\l"
	.string "SPEED: 50\l"
	.string "TOTAL: 600\p"
	.string "Like REGISTEEL, it was blessed with the\n"
	.string "golden number, 150, in both defenses,\l"
	.string "albeit with fewer HP and more\l"
	.string "weaknesses than the STEEL-TYPE REGI.\l"
	.string "Nevertheless, it retains an intriguing\l"
	.string "offensive capacity with its signature\l"
	.string "move, DIAMOND STORM, and access to\l"
	.string "PLAY ROUGH/MOONBLAST, also for STAB.\l"
	.string "Its low SPEED (50) makes it a good user\l"
	.string "of TRICK ROOM, a move to which it has\l"
	.string "access.$"



BaseRocketHoennDocumento_134::
lock        
showmonpic SPECIES_HOOPA, 10, 3
playmoncry SPECIES_HOOPA, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_134, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_134:
.string "NUMBER 5: HOOPA:\p"
    .string "HP: 80\n"
	.string "ATTACK: 110\l"
	.string "DEFENSE: 60\l"
	.string "SPECIAL ATTACK: 150\l"
	.string "SPECIAL DEFENSE: 130\l"
	.string "SPEED: 70\l"
	.string "TOTAL: 600\p"
	.string "It creates dimensional portals,\n"
	.string "allowing it to travel through them. It\l"
	.string "stands out for its abnormally high\l"
	.string "SPECIAL ATTACK (150) considering its\l"
	.string "appearance, as well as its SPECIAL\l"
	.string "DEFENSE (130). However, its low SPEED\l"
	.string "and a x4 weakness to GHOST and DARK\l"
	.string "types significantly hinder it.$"



BaseRocketHoennDocumento_135::
lock        
showmonpic SPECIES_VOLCANION, 10, 3
playmoncry SPECIES_VOLCANION, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_135, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_135:
.string "NUMBER 4: VOLCANION:\p"
    .string "HP: 80\n"
	.string "ATTACK: 110\l"
	.string "DEFENSE: 120\l"
	.string "SPECIAL ATTACK: 130\l"
	.string "SPECIAL DEFENSE: 90\l"
	.string "SPEED: 70\l"
	.string "TOTAL: 600\p"
	.string "With a fascinating FIRE/WATER\n"
	.string "combination, it boasts immunity to the\l"
	.string "latter thanks to WATER ABSORB and a x4\l"
	.string "resistance to fire. Despite its\l"
	.string "impressive stats, its greatest\l"
	.string "drawback lies in its lackluster ATTACK\l"
	.string "of 110 and a highly improvable SPEED of\l"
	.string "70. Nonetheless, its STEAM ERUPTION is\l"
	.string "one of the best WATER-TYPE moves,\l"
	.string "packing a punch with 110 power and 95%\l"
	.string "accuracy, and has a 30% chance to burn\l"
	.string "the opponent, making it ideal for\l"
	.string "disrupting the opposing team supported\l"
	.string "by its 130 SPECIAL ATTACK.$"



BaseRocketHoennDocumento_136::
lock        
showmonpic SPECIES_XERNEAS, 10, 3
playmoncry SPECIES_XERNEAS, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_136, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_136:
.string "NUMBER 3: XERNEAS:\p"
    .string "HP: 126\n"
	.string "ATTACK: 131\l"
	.string "DEFENSE: 95\l"
	.string "SPECIAL ATTACK: 131\l"
	.string "SPECIAL DEFENSE: 98\l"
	.string "SPEED: 99\l"
	.string "TOTAL: 680\p"
	.string "The X POKÉMON, possessing one of the\n"
	.string "best boosting moves available:\l"
	.string "GEOMANCY. With the ability to activate\l"
	.string "it in a single turn using POWER HERB, it\l"
	.string "raises its SPECIAL ATTACK, SPECIAL\l"
	.string "DEFENSE, and SPEED by 2 levels. With a\l"
	.string "boosted MOONBLAST power by 33%, and\l"
	.string "coverage moves like THUNDERBOLT, FOCUS\l"
	.string "BLAST, PSYCHIC, and GRASS KNOT, it's\l"
	.string "capable of taking down anything that it\l"
	.string "hits neutrally in a single strike.$"



BaseRocketHoennDocumento_137::
lock        
showmonpic SPECIES_YVELTAL, 10, 3
playmoncry SPECIES_YVELTAL, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_137, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_137:
.string "NUMBER 2: YVELTAL:\p"
    .string "HP: 126\n"
	.string "ATTACK: 131\l"
	.string "DEFENSE: 95\l"
	.string "SPECIAL ATTACK: 131\l"
	.string "SPECIAL DEFENSE: 98\l"
	.string "SPEED: 99\l"
	.string "TOTAL: 680\p"
	.string "The Y POKÉMON, with its DARK PULSE\n"
	.string "boosted by 33% (by DARK AURA), is a\l"
	.string "nightmare. But its OBLIVION WING is\l"
	.string "even more intriguing, recovering 75% of\l"
	.string "the damage dealt. With a STAB move, 80\l"
	.string "power, and backed by a SPECIAL ATTACK\l"
	.string "of 131, it's seen by many as the perfect\l"
	.string "balance between ATTACK/DEFENSE.\l"
	.string "Coupled with LIFE ORB or CHOICE SPECS,\l"
	.string "it can subtract and recover vast\l"
	.string "amounts of health, giving the\l"
	.string "impression of invincibility against\l"
	.string "anything hit neutrally. The ASSAULT\l"
	.string "VEST also greatly enhances this move.$"



BaseRocketHoennDocumento_138::
lock        
showmonpic SPECIES_ZYGARDE_COMPLETE, 10, 3
playmoncry SPECIES_ZYGARDE, CRY_MODE_ENCOUNTER
msgbox BaseRocketHoennDocumento_Text_138, MSGBOX_DEFAULT
hidemonpic
release     
end

BaseRocketHoennDocumento_Text_138:
.string "NUMBER 1: ZYGARDE COMPLETE FORM:\p"
    .string "HP: 216\n"
	.string "ATTACK: 100\l"
	.string "DEFENSE: 121\l"
	.string "SPECIAL ATTACK: 91\l"
	.string "SPECIAL DEFENSE: 98\l"
	.string "SPEED: 95\l"
	.string "TOTAL: 708\p"
	.string "This POKÉMON might just be the ultimate\n"
	.string "physical fortress, offering infinite\l"
	.string "competitive potential. THOUSAND ARROWS\l"
	.string "stands as the most relentless move in\l"
	.string "existence, striking everything and\l"
	.string "providing coverage against most types.\l"
	.string "With the freedom to allocate its other\l"
	.string "moves towards boosting, stalling, and\l"
	.string "recovery, it remains a formidable\l"
	.string "opponent without compromising on\l"
	.string "offensive capability.$"



BaseRocketHoenn_EventScript_ReceiveTynamo::
    lock
    faceplayer
	checkmoncatch SPECIES_TYNAMO
	goto_if_eq VAR_RESULT, FALSE, BaseRocketHoenn_EventScript_TakeTynamo 
	msgbox BaseRocketHoenn_Text_27, MSGBOX_DEFAULT
	release
	end



BaseRocketHoenn_EventScript_TakeTynamo::
    msgbox BaseRocketHoenn_Text_TakeTynamo MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox BaseRocketHoenn_Text_MensajeTynamo, MSGBOX_DEFAULT
	givemon SPECIES_TYNAMO, 25, ITEM_CELL_BATTERY
	waitfanfare  
	release
	end 



BaseRocketHoenn_Text_TakeTynamo:
	.string "Would you believe me if I told you\n"
	.string "there's a POKÉMON with no weaknesses?\l"
	.string "No? Take it!$"



BaseRocketHoenn_Text_MensajeTynamo:
.string "YOU OBTAINED A LV.25 TYNAMO!$"


BaseRocketHoenn_Text_27:
	.string "The evolutionary line of TYNAMO is pure\n"
	.string "ELECTRIC TYPE, overlapping its sole\l"
	.string "weakness to GROUND thanks to\l"
	.string "LEVITATE. Isn't that incredible?$"

BaseRocketHoenn_Encuentro_Oak_Der::
lock
applymovement 37, BaseRocketHoenn_Encuentro_Oak_Move_2
applymovement OBJ_EVENT_ID_PLAYER, BaseRocketHoenn_Encuentro_Oak_Move_1
waitmovement 0x0
goto BaseRocketHoenn_Encuentro_Oak

BaseRocketHoenn_Encuentro_Oak_Izq::
lock
applymovement 37, BaseRocketHoenn_Encuentro_Oak_Move_2
applymovement OBJ_EVENT_ID_PLAYER, BaseRocketHoenn_Encuentro_Oak_Move_1.1
waitmovement 0x0
goto BaseRocketHoenn_Encuentro_Oak


BaseRocketHoenn_Encuentro_Oak::
msgbox BaseRocketHoenn_Encuentro_Oak_Texto_1 MSGBOX_AUTOCLOSE
clearflag FLAG_RECEIVED_SHOAL_SALT_3
addobject 36
applymovement 37, BaseRocketHoenn_Encuentro_Oak_Move_1
applymovement OBJ_EVENT_ID_PLAYER, BaseRocketHoenn_Encuentro_Oak_Move_1
applymovement 36, BaseRocketHoenn_Encuentro_Oak_Move_4
waitmovement 0x0
playse SE_PIN
applymovement 37, BaseRocketHoenn_Encuentro_Oak_Move_3
applymovement OBJ_EVENT_ID_PLAYER, BaseRocketHoenn_Encuentro_Oak_Move_3
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, BaseRocketHoenn_Encuentro_Oak_10
waitmovement 0x0
special RemoveCameraObject
msgbox BaseRocketHoenn_Encuentro_Oak_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox BaseRocketHoenn_Encuentro_Oak_Texto_3 MSGBOX_AUTOCLOSE
msgbox BaseRocketHoenn_Encuentro_Oak_Texto_4 MSGBOX_AUTOCLOSE
applymovement 37, BaseRocketHoenn_Encuentro_Oak_Move_5
waitmovement 0x0
msgbox BaseRocketHoenn_Encuentro_Oak_Texto_5 MSGBOX_AUTOCLOSE
applymovement 36, BaseRocketHoenn_Encuentro_Oak_Move_6
waitmovement 0x0
msgbox BaseRocketHoenn_Encuentro_Oak_Texto_6 MSGBOX_AUTOCLOSE
msgbox BaseRocketHoenn_Encuentro_Oak_Texto_7 MSGBOX_AUTOCLOSE
applymovement 36, BaseRocketHoenn_Encuentro_Oak_Move_7
waitmovement 0x0
msgbox BaseRocketHoenn_Encuentro_Oak_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox BaseRocketHoenn_Encuentro_Oak_Texto_9 MSGBOX_AUTOCLOSE
delay 15
applymovement 36, BaseRocketHoenn_Encuentro_Oak_Move_8
waitmovement 0x0
msgbox BaseRocketHoenn_Encuentro_Oak_Texto_10 MSGBOX_AUTOCLOSE
delay 10
msgbox BaseRocketHoenn_Encuentro_Oak_Texto_11 MSGBOX_AUTOCLOSE
delay 10
msgbox BaseRocketHoenn_Encuentro_Oak_Texto_12 MSGBOX_AUTOCLOSE
msgbox BaseRocketHoenn_Encuentro_Oak_Texto_13 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement 37, BaseRocketHoenn_Encuentro_Oak_Move_7
applymovement OBJ_EVENT_ID_PLAYER, BaseRocketHoenn_Encuentro_Oak_Move_7
applymovement 36, BaseRocketHoenn_Encuentro_Oak_Move_9
applymovement OBJ_EVENT_ID_CAMERA, BaseRocketHoenn_Encuentro_Oak_11
waitmovement 0x0
special RemoveCameraObject
msgbox BaseRocketHoenn_Encuentro_Oak_Texto_14 MSGBOX_AUTOCLOSE
applymovement 36, BaseRocketHoenn_Encuentro_Oak_Move_2
waitmovement 0x0
msgbox BaseRocketHoenn_Encuentro_Oak_Texto_15 MSGBOX_AUTOCLOSE
applymovement 36, BaseRocketHoenn_Encuentro_Oak_Move_12
waitmovement 0x0
msgbox BaseRocketHoenn_Encuentro_Oak_Texto_16 MSGBOX_AUTOCLOSE
msgbox BaseRocketHoenn_Encuentro_Oak_Texto_17 MSGBOX_AUTOCLOSE
applymovement 36, BaseRocketHoenn_Encuentro_Oak_Move_2
waitmovement 0x0
msgbox BaseRocketHoenn_Encuentro_Oak_Texto_18 MSGBOX_AUTOCLOSE
delay 15
msgbox BaseRocketHoenn_Encuentro_Oak_Texto_19 MSGBOX_AUTOCLOSE
applymovement 36, BaseRocketHoenn_Encuentro_Oak_Move_12
waitmovement 0x0
msgbox BaseRocketHoenn_Encuentro_Oak_Texto_20 MSGBOX_AUTOCLOSE
applymovement 36, BaseRocketHoenn_Encuentro_Oak_Move_2
waitmovement 0x0
msgbox BaseRocketHoenn_Encuentro_Oak_Texto_21 MSGBOX_AUTOCLOSE
applymovement 36, BaseRocketHoenn_Encuentro_Oak_Move_13
waitmovement 0x0
setflag FLAG_RECEIVED_SHOAL_SALT_3
removeobject 36
applymovement 37, BaseRocketHoenn_Encuentro_Oak_Move_2
applymovement OBJ_EVENT_ID_PLAYER, BaseRocketHoenn_Encuentro_Oak_Move_14
waitmovement 0x0
msgbox BaseRocketHoenn_Encuentro_Oak_Texto_22 MSGBOX_AUTOCLOSE
applymovement 37, BaseRocketHoenn_Encuentro_Oak_Move_15
waitmovement 0x0
msgbox BaseRocketHoenn_Encuentro_Oak_Texto_23 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
waitfanfare
setflag FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA
fadescreen 1
delay 20
removeobject 37
fadescreen 0
setvar VAR_UNUSED_0x40F7, 187
release
end

BaseRocketHoenn_Encuentro_Oak_Move_15:
walk_in_place_up
step_end

BaseRocketHoenn_Encuentro_Oak_Move_14:
face_down
step_end

BaseRocketHoenn_Encuentro_Oak_Move_13:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

BaseRocketHoenn_Encuentro_Oak_Move_12:
face_right
step_end

BaseRocketHoenn_Encuentro_Oak_11:
walk_up
walk_up
walk_up
step_end

BaseRocketHoenn_Encuentro_Oak_10:
walk_down
walk_down
walk_down
step_end

BaseRocketHoenn_Encuentro_Oak_Move_9:
walk_slow_up
face_right
step_end

BaseRocketHoenn_Encuentro_Oak_Move_8:
walk_slow_left
step_end

BaseRocketHoenn_Encuentro_Oak_Move_7:
face_left
step_end

BaseRocketHoenn_Encuentro_Oak_Move_6:
walk_up
step_end

BaseRocketHoenn_Encuentro_Oak_Move_5:
walk_in_place_down
step_end

BaseRocketHoenn_Encuentro_Oak_Move_4:
walk_left
walk_up
walk_up
step_end

BaseRocketHoenn_Encuentro_Oak_Move_3:
emote_exclamation_mark
step_end

BaseRocketHoenn_Encuentro_Oak_Move_2:
face_up
step_end

BaseRocketHoenn_Encuentro_Oak_Move_1.1:
walk_down
walk_right
walk_down
step_end

BaseRocketHoenn_Encuentro_Oak_Move_1:
walk_down
walk_down
step_end

BaseRocketHoenn_Encuentro_Oak_Texto_1:
.string "ANDRA: Are you ready? Follow me!$"

BaseRocketHoenn_Encuentro_Oak_Texto_2:
	.string "OAK: Well, well. Here I am again, facing\n"
	.string "the new generation, with two promising\l"
	.string "young competitors leading the charge.$"

BaseRocketHoenn_Encuentro_Oak_Texto_3:
.string "ANDRA: You… What are you doing here?$"

BaseRocketHoenn_Encuentro_Oak_Texto_4:
	.string "OAK: You shouldn't speak to me with\n"
	.string "such disdain, young ADMIN. We're now\l"
	.string "working together, and my commitment to\l"
	.string "the future is unwavering. Is yours?$"

BaseRocketHoenn_Encuentro_Oak_Texto_5:
.string "ANDRA: Sure!$"

BaseRocketHoenn_Encuentro_Oak_Texto_6:
	.string "OAK: I thought you despised\n"
	.string "LEGENDARIES simply because of their\l"
	.string "birthright. Don't you think the ultimate\l"
	.string "purpose of all these meetings and\l"
	.string "foundations is precisely the\l"
	.string "construction of something much more\l"
	.string "despicable?$"

BaseRocketHoenn_Encuentro_Oak_Texto_7:
	.string "ANDRA: Absolutely not! They will be the\n"
	.string "product of our hard work and willpower!$"

BaseRocketHoenn_Encuentro_Oak_Texto_8:
	.string "OAK: Your's. The POKÉMON that emerge\n"
	.string "will have nothing to do with it, just like\l"
	.string "a LEGENDARY. No, not just like, their\l"
	.string "birthright will be much greater.$"

BaseRocketHoenn_Encuentro_Oak_Texto_9:
.string "ANDRA: …$"

BaseRocketHoenn_Encuentro_Oak_Texto_10:
	.string "OAK: Ah… The willpower… How easily it\n"
	.string "can bend under the right stimuli and\l"
	.string "setbacks!$"

BaseRocketHoenn_Encuentro_Oak_Texto_11:
	.string "ANDRA: You haven't answered us, what\n"
	.string "are you doing in my BASE, OAK? I haven't\l"
	.string "been informed of your presence here.$"

BaseRocketHoenn_Encuentro_Oak_Texto_12:
	.string "OAK: I got a call from GIOVANNI, and he\n"
	.string "let me know about the possible clash\l"
	.string "you've had with DEVON, something you\l"
	.string "seem to have just confirmed to him. I\l"
	.string "came to warn you.$"

BaseRocketHoenn_Encuentro_Oak_Texto_13:
.string "ANDRA: Warn us?$"

BaseRocketHoenn_Encuentro_Oak_Texto_14:
	.string "OAK: When here in KANTO we had barely\n"
	.string "managed to create the first version of\l"
	.string "PORYGON, DEVON had already simulated\l"
	.string "the power of a PSEUDOLEGENDARY,\l"
	.string "creating METAGROSS.$"

BaseRocketHoenn_Encuentro_Oak_Texto_15:
	.string "That was several years ago; who knows\n"
	.string "what resources they have access to\l"
	.string "now.$"

BaseRocketHoenn_Encuentro_Oak_Texto_16:
	.string "Fortunately, they don't know anything\n"
	.string "about MEWTWO, but BLAINE and I\l"
	.string "collaborated with them in the past, and\l"
	.string "they are aware of all our progress\l"
	.string "regarding DEOXYS.$"

BaseRocketHoenn_Encuentro_Oak_Texto_17:
	.string "ANDRA: {PLAYER} has already defeated\n"
	.string "them, overcoming the greatest forces\l"
	.string "in the POKÉMON WORLD; nothing they can\l"
	.string "create will surpass that.$"

BaseRocketHoenn_Encuentro_Oak_Texto_18:
	.string "OAK: Perhaps, but it's not necessary to\n"
	.string "create something with greater raw\l"
	.string "power; something more efficient and\l"
	.string "optimized for the laws governing our\l"
	.string "battles could be enough to bring you\l"
	.string "down.$"

BaseRocketHoenn_Encuentro_Oak_Texto_19:
.string "ANDRA: What do you mean?$"

BaseRocketHoenn_Encuentro_Oak_Texto_20:
	.string "OAK: Proceed with caution; we're\n"
	.string "unaware of their objectives, their\l"
	.string "power, or their intentions.$"

BaseRocketHoenn_Encuentro_Oak_Texto_21:
	.string "Like you, I want to see the KANTO-JOHTO\n"
	.string "of the original 251 triumph. I hope you\l"
	.string "take this into account, and we come to\l"
	.string "the II GRAND TRIGAL MEETING as true\l"
	.string "allies.$"

BaseRocketHoenn_Encuentro_Oak_Texto_22:
	.string "ANDRA: That OAK… treats us as if we\n"
	.string "were still grunts collecting FOSSILS in\l"
	.string "MT. MOON. We should shut him up again in\l"
	.string "a battle.$"

BaseRocketHoenn_Encuentro_Oak_Texto_23:
	.string "Anyway, I'll see you at B2F; take the\n"
	.string "CARD KEY that grants access to it.$"

BaseRocketHoenn_Salida_Base::
compare VAR_UNUSED_0x40F7, 187
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, BaseRocketHoenn_Salida_Base_Move_1
waitmovement 0x0
msgbox BaseRocketHoenn_Salida_Base_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, BaseRocketHoenn_Salida_Base_Move_2
waitmovement 0x0
release
end

BaseRocketHoenn_Salida_Base_Texto_1:
	.string "(This is the exit, I should see the BASE\n"
	.string "with ANDRA first, as we agreed).$"

BaseRocketHoenn_Salida_Base_Move_1:
walk_in_place_down
step_end

BaseRocketHoenn_Salida_Base_Move_2:
walk_slow_left
step_end

Llave_Despacho_Hoenn_2_Warp::
msgbox Llave_Despacho_Hoenn_2_Warp_YesNo, MSGBOX_AUTOCLOSE
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 18, 21, 0x335, FALSE
setmetatile 18, 22, 0x335, FALSE
setmetatile 19, 22, 0x334, FALSE
setmetatile 19, 21, 0x334, FALSE
special DrawWholeMapView
delay 60
release
end

Llave_Despacho_Hoenn_2_Warp_YesNo:
.string "You used the MAGNETIC KEY.$"


BaseRocketHoenn_Tienda_Pokemon::
lock
faceplayer
msgbox Text_CompraPokemon MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_VENTA_BASE_HOENN, 0
switch VAR_RESULT
case 0, EventScript_Rockruff
case 1, EventScript_Drilbur
case 2, EventScript_Timburr
case 3, EventScript_Frosmoth
case 4, EventScript_Bouffalant
case 5, EventScript_Oshawott
case 6, EventScript_Chimchar
case 7, EventScript_Jangmo 
release
end

EventScript_Jangmo::
lock
showmoneybox 0, 0
msgbox EventScript_Jangmo_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 168000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 168000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_JANGMO_O, 32, ITEM_NONE
release
end

EventScript_Chimchar::
lock
showmoneybox 0, 0
msgbox EventScript_Chimchar_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 82000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 82000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_CHIMCHAR, 12, ITEM_NONE
release
end

EventScript_Oshawott::
lock
showmoneybox 0, 0
msgbox EventScript_Oshawott_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 68000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 68000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_OSHAWOTT, 16, ITEM_NONE
release
end

EventScript_Bouffalant::
lock
showmoneybox 0, 0
msgbox EventScript_Bouffalant_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 60000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 60000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_BOUFFALANT, 60, ITEM_NONE
release
end


EventScript_Frosmoth::
lock
showmoneybox 0, 0
msgbox EventScript_Frosmoth_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 48000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 48000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_FROSMOTH, 55, ITEM_NONE
release
end

EventScript_Timburr::
lock
showmoneybox 0, 0
msgbox EventScript_Timburr_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 30000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 30000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_TIMBURR, 24, ITEM_NONE
release
end

EventScript_Drilbur::
lock
showmoneybox 0, 0
msgbox EventScript_Drilbur_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 22500
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 22500 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_DRILBUR, 25, ITEM_NONE
release
end

EventScript_Rockruff::
lock
showmoneybox 0, 0
msgbox EventScript_Rockruff_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 15000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 15000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_ROCKRUFF, 15, ITEM_NONE
release
end

EventScript_Jangmo_Texto_1:
.string "Are you sure you want JANGMO-O?\n"
	.string "It will cost 168000 POKÉ.$"

EventScript_Poplio_Texto_1:
.string "Are you sure you want POPLIO?\n"
	.string "It will cost 76000 POKÉ.$"

EventScript_Chimchar_Texto_1:
.string "Are you sure you want CHIMCHAR?\n"
	.string "It will cost 82000 POKÉ.$"

EventScript_Oshawott_Texto_1:
.string "Are you sure you want OSHAWOTT?\n"
	.string "It will cost 68000 POKÉ.$"

EventScript_Bouffalant_Texto_1:
.string "Are you sure you want BOUFFALANT?\n"
	.string "It will cost 60000 POKÉ.$"

EventScript_Frosmoth_Texto_1:
.string "Are you sure you want FROSMOTH?\n"
	.string "It will cost 48000 POKÉ.$"

EventScript_Timburr_Texto_1:
.string "Are you sure you want TIMBURR?\n"
	.string "It will cost 30000 POKÉ.$"

EventScript_Drilbur_Texto_1:
.string "Are you sure you want DRILBUR?\n"
	.string "It will cost 22500 POKÉ.$"

EventScript_Rockruff_Texto_1:
.string "Are you sure you want ROCKRUFF?\n"
	.string "It will cost 15000 POKÉ.$"

BaseRocketHoenn_Potencial_Sinohh::
lock
msgbox BaseRocketHoenn_Potencial_Sinohh_Texto, MSGBOX_SIGN   
end

BaseRocketHoenn_Potencial_Sinohh_Texto:
	.string "RESEARCH AREA FOR THE MOST POWERFUL\n"
	.string "POKÉMON IN EACH REGION:\p"
	.string "SINNOH$"

BaseRocketHoenn_Potencial_Teselia::
lock
msgbox BaseRocketHoenn_Potencial_Teselia_Texto, MSGBOX_SIGN   
end

BaseRocketHoenn_Potencial_Teselia_Texto:
	.string "RESEARCH AREA FOR THE MOST POWERFUL\n"
	.string "POKÉMON IN EACH REGION:\p"
	.string "TESELIA$"

BaseRocketHoenn_Potencial_Kalos::
lock
msgbox BaseRocketHoenn_Potencial_Kalos_Texto, MSGBOX_SIGN   
end

BaseRocketHoenn_Potencial_Kalos_Texto:
	.string "RESEARCH AREA FOR THE MOST POWERFUL\n"
	.string "POKÉMON IN EACH REGION:\p"
	.string "KALOS$"

BaseRocketHoenn_Potencial_Alola::
lock
msgbox BaseRocketHoenn_Potencial_Alola_Texto, MSGBOX_SIGN   
end

BaseRocketHoenn_Potencial_Alola_Texto:
	.string "RESEARCH AREA FOR THE MOST POWERFUL\n"
	.string "POKÉMON IN EACH REGION:\p"
	.string "ALOLA$"

BaseRocketHoenn_Potencial_Galar::
lock
msgbox BaseRocketHoenn_Potencial_Galar_Texto, MSGBOX_SIGN   
end

BaseRocketHoenn_Potencial_Galar_Texto:
	.string "RESEARCH AREA FOR THE MOST POWERFUL\n"
	.string "POKÉMON IN EACH REGION:\p"
	.string "GALAR$"

