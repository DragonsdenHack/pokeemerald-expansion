SilphS3_MapScripts::
	.byte 0

SilphS3_EventScript_Policia::
	trainerbattle_single TRAINER_CHARLIE, SilphS3_Text_PoliciaIntro, SilphS3_Text_PoliciaDefeated
	msgbox SilphS3_Text_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



SilphS3_3::
lock         
msgbox SilphS3_Text_3, MSGBOX_SIGN
release     
end

SilphS3_Text_3:
	.string "... ... He is deep working, completely in\n"
	.string "the zone.$"

SilphS3_4::
lock     
faceplayer     
msgbox SilphS3_Text_4, MSGBOX_DEFAULT
release     
end


SilphS3_Text_4:
	.string "From great athletes they became Greek\n"
	.string "gods and, finally, ended up as pitiful\l"
	.string "failed experiments. To what extent is it\l"
	.string "viable to boost performance at all\l"
	.string "costs, sacrificing everything else?\l"
	.string "Perhaps something so extraordinarily\l"
	.string "superhuman ceases to be inspiring\l"
	.string "precisely because of that, being so\l"
	.string "bursting with everything that it\l"
	.string "cannot serve as inspiration and\l"
	.string "example to anyone. Likewise, how would\l"
	.string "we view a POKÉMON with 150 in every\l"
	.string "stat? Perhaps, far from being\l"
	.string "admirable, it's so beyond our\l"
	.string "parameters and possibilities that we\l"
	.string "lose interest in it knowing that we can\l"
	.string "never replicate it.$"



SilphS3Documento_100::
lock     
showmonpic SPECIES_GENESECT, 10, 3  
playmoncry SPECIES_GENESECT, CRY_MODE_ENCOUNTER 
msgbox SilphS3Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS3Documento_Text_100:
.string "GENESECT:\p"
	.string "HP: 71\n"
	.string "ATTACK: 120\l"
	.string "DEFENSE: 95\l"
	.string "SPECIAL ATTACK: 120\l"
	.string "SPECIAL DEFENSE: 95\l"
	.string "SPEED: 99\l"
	.string "TOTAL: 600\p"
	.string "POKÉMON derived from the deadliest\n"
	.string "BUG-type predator of UNOVA 300 million\l"
	.string "years ago, of which we are unaware of\l"
	.string "its BASE STATS, but we estimate them to\l"
	.string "be around 520-540, with a significantly\l"
	.string "low SPECIAL ATTACK ranging between 40\l"
	.string "and 60 points. Its main enhancement\l"
	.string "between the original GENESECT and the\l"
	.string "modified version lies in that 60-80\l"
	.string "increase in SPECIAL ATTACK, giving\l"
	.string "GENESECT a total of 600 BASE STATS.\l"
	.string "Further research is needed to explore a\l"
	.string "possible relationship with KABUTOPS.$"





SilphS3Documento_101::
lock     
msgbox SilphS3Documento_Text_101, MSGBOX_DEFAULT
release     
end

SilphS3Documento_Text_101:
	.string "According to our latest research,\n"
	.string "current resurrection techniques do not\l"
	.string "faithfully reproduce the wild state of\l"
	.string "FOSSILS, especially in AERODACTYL case,\l"
	.string "which is estimated to have been even\l"
	.string "faster and deadlier.$"



SilphS3Documento_102::
lock     
showmonpic SPECIES_DARMANITAN_ZEN_MODE, 10, 3  
playmoncry SPECIES_DARMANITAN_ZEN_MODE, CRY_MODE_ENCOUNTER 
msgbox SilphS3Documento_Text_102, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS3Documento_Text_102:
	.string "DARMANITAN-ZEN:\p"
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
	.string "physical vigor into its mind. Such was\l"
	.string "the wisdom accumulated in the process\l"
	.string "that its PHYSICAL ATTACK became\l"
	.string "completely unusable, gaining in the\l"
	.string "process an even higher special attack\l"
	.string "than its former physical form as a\l"
	.string "normal DARMANITAN, around 160 BASE,\l"
	.string "surpassing even MEWTWO.$"



SilphS3Documento_103::
lock     
showmonpic SPECIES_WISHIWASHI_SCHOOL, 10, 3  
playmoncry SPECIES_WISHIWASHI_SCHOOL, CRY_MODE_ENCOUNTER 
msgbox SilphS3Documento_Text_103, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS3Documento_Text_103:
	.string "WISHIWASHI BANCO:\p"
	.string "HP: 45\n"
	.string "ATTACK: 140\l"
	.string "DEFENSE: 130\l"
	.string "SPECIAL ATTACK: 140\l"
	.string "SPECIAL DEFENSE: 135\l"
	.string "SPEED: 30\l"
	.string "TOTAL: 620\p"
	.string "Known as 'The Beast of the Sea' and\n"
	.string "feared even by Gyarados. One Wishiwashi\l"
	.string "by itself is even weaker than a common\l"
	.string "Magikarp, but it is capable of uniting\l"
	.string "many of its kind to form a new form\l"
	.string "-school form-, which acts as a single\l"
	.string "individual POKÉMON, surpassing the\l"
	.string "power of any PSEUDOLEGENDARY.$"



SilphS3Documento_104::
lock     
showmonpic SPECIES_PORYGON3, 10, 3  
playmoncry SPECIES_PORYGON, CRY_MODE_ENCOUNTER 
msgbox SilphS3Documento_Text_104, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS3Documento_Text_104:
	.string "PORYGON3: NORMAL/GHOST\p"
	.string "HP: 85\n"
	.string "ATTACK: 75\l"
	.string "DEFENSE: 70\l"
	.string "SPECIAL ATTACK: 155\l"
	.string "SPECIAL DEFENSE: 95\l"
	.string "SPEED: 135\l"
	.string "TOTAL: 615\p"
	.string "After countless attempts, we have been\n"
	.string "able to optimize up to 99% the maximum\l"
	.string "potential achievable by the original\l"
	.string "PORYGON base. PORYGON3 has achieved\l"
	.string "the impossible of breaking through the\l"
	.string "154 BASE SPECIAL ATTACK barrier\l"
	.string "imposed by MEWTWO by just one point,\l"
	.string "surpassing it in SPEED as well to have\l"
	.string "an unprecedented offensive capability.\l"
	.string "Such destructive power was impossible\l"
	.string "to sustain without sacrificing its\l"
	.string "PHYSICAL DEFENSE, which inevitably fell\l"
	.string "to 70 BASE.$"

SilphS3_Miguel_Batalla_Derecha::
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Miguel_Batalla_Move_1
waitmovement 0x0
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Miguel_Batalla_Move_2
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Miguel_Batalla_Move_3
waitmovement 0x0
goto SilphS3_Miguel_Batalla

SilphS3_Miguel_Batalla_Izquierda::
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Miguel_Batalla_Move_1
waitmovement 0x0
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Miguel_Batalla_Move_2
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Miguel_Batalla_Move_3.1
waitmovement 0x0
goto SilphS3_Miguel_Batalla

SilphS3_Miguel_Batalla::
delay 20
applymovement 2, SilphS3_Miguel_Batalla_Move_4
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS3_Miguel_Batalla_Texto_3 MSGBOX_AUTOCLOSE
applymovement 2, SilphS3_Miguel_Batalla_Move_5
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, SilphS3_Miguel_Batalla_Move_6
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, SilphS3_Miguel_Batalla_Move_6
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CMIGUEL_3, SilphS3_Miguel_Batalla_Texto_7
msgbox SilphS3_Miguel_Batalla_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS3_Miguel_Batalla_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, SilphS3_Miguel_Batalla_Move_5
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_10 MSGBOX_AUTOCLOSE
applymovement 2, SilphS3_Miguel_Batalla_Move_6
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_11 MSGBOX_AUTOCLOSE
applymovement 2, SilphS3_Miguel_Batalla_Move_7
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 104
release
end

SilphS3_Miguel_Batalla_Texto_1:
	.string "????: You again, {PLAYER}?$"

SilphS3_Miguel_Batalla_Texto_2:
	.string "C.MIGUEL: The PRESIDENT already\n"
	.string "informed us that soon a ROCKET could\l"
	.string "pay us a little visit to this privileged\l"
	.string "place; I don't know why I'm not about\l"
	.string "who's in charge.$"

SilphS3_Miguel_Batalla_Texto_3:
	.string "As you can see, ROCKET ADMIN., you're\n"
	.string "not the only one who has managed to\l"
	.string "climb and ascend; my extensive\l"
	.string "knowledge and obsession with FOSSILS\l"
	.string "attracted the attention of SILPH, who,\l"
	.string "along with BILL's recommendation,\l"
	.string "placed me in the best position to\l"
	.string "investigate them thoroughly: this one.$"

SilphS3_Miguel_Batalla_Texto_4:
	.string "Now that I've achieved my goal, I care\n"
	.string "little about what you may or may not be\l"
	.string "seeking around here; I've assembled the\l"
	.string "team I always wanted to, and it can only\l"
	.string "get better as I advance my research.\l"
	.string "Nonetheless...$"

SilphS3_Miguel_Batalla_Texto_5:
	.string "You don't get the chance to battle with\n"
	.string "someone like you every day, the one who\l"
	.string "finally took down LANCE. Turns out, I\l"
	.string "didn't lose to just anyone, even though\l"
	.string "that's how it might seem to the eyes of\l"
	.string "KANTO...$"

SilphS3_Miguel_Batalla_Texto_6:
	.string "All in all... challenging the real KANTO\n"
	.string "CHAMPION is the perfect way to test\l"
	.string "the primal power of my FOSSILS!$"

SilphS3_Miguel_Batalla_Texto_7:
	.string "Yep, as I thought, still not enough.$"

SilphS3_Miguel_Batalla_Texto_8:
	.string "Hah! It seems things haven't changed\n"
	.string "despite our encounter. I suppose I\l"
	.string "should acknowledge the role you've\l"
	.string "played. Facing someone of your skill\l"
	.string "level has pushed me further than I\l"
	.string "expected. Nonetheless, my research is\l"
	.string "still ongoing.$"

SilphS3_Miguel_Batalla_Texto_9:
	.string "With AERODACTYL and all the known\n"
	.string "FOSSILS from KANTO and HOENN in my\l"
	.string "possession, it's time to delve deeper\l"
	.string "into our understanding of them, and\l"
	.string "that's why SILPH brought me on board.$"

SilphS3_Miguel_Batalla_Texto_10:
	.string "According to my theories, the genuine\n"
	.string "potential of fossils is significantly\l"
	.string "different from what they originally\l"
	.string "possessed in the wild. A considerable\l"
	.string "portion of their essence is lost during\l"
	.string "the resurrection process.$"

SilphS3_Miguel_Batalla_Texto_11:
	.string "So, I'm gonna try to show this from now\n"
	.string "on. As long as you don't mess with my\l"
	.string "search, you can do whatever you want,\l"
	.string "right?$"

SilphS3_Miguel_Batalla_Move_1:
walk_in_place_up
step_end

SilphS3_Miguel_Batalla_Move_2:
emote_exclamation_mark
step_end

SilphS3_Miguel_Batalla_Move_3:
walk_slow_up
walk_slow_left
walk_slow_up
step_end

SilphS3_Miguel_Batalla_Move_3.1:
walk_slow_up
walk_slow_up
step_end

SilphS3_Miguel_Batalla_Move_4:
walk_slow_right
walk_slow_down
walk_in_place_down
step_end

SilphS3_Miguel_Batalla_Move_5:
face_up
step_end

SilphS3_Miguel_Batalla_Move_6:
walk_in_place_down
step_end

SilphS3_Miguel_Batalla_Move_7:
walk_slow_up
walk_slow_left
walk_in_place_left
step_end


SilphS3_Bill_Batalla::
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Bill_Batalla_Move_1
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_1 MSGBOX_AUTOCLOSE
applymovement 3, SilphS3_Bill_Batalla_Move_2
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Bill_Batalla_Move_3
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_2 MSGBOX_AUTOCLOSE
applymovement 3, SilphS3_Bill_Batalla_Move_4
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_3 MSGBOX_AUTOCLOSE
msgbox SilphS3_Bill_Batalla_Texto_4 MSGBOX_AUTOCLOSE
applymovement 3, SilphS3_Bill_Batalla_Move_2
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_5 MSGBOX_AUTOCLOSE
msgbox SilphS3_Bill_Batalla_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS3_Bill_Batalla_Texto_7 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 3, SilphS3_Bill_Batalla_Move_5
waitmovement 0x0
applymovement 3, SilphS3_Bill_Batalla_Move_4
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_8 MSGBOX_AUTOCLOSE
applymovement 3, SilphS3_Bill_Batalla_Move_4
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS3_Bill_Batalla_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS3_Bill_Batalla_Texto_10 MSGBOX_AUTOCLOSE
applymovement 3, SilphS3_Bill_Batalla_Move_6
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_11 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Bill_Batalla_Move_7
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_12 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Bill_Batalla_Move_8
applymovement 3, SilphS3_Bill_Batalla_Move_2
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_13 MSGBOX_AUTOCLOSE
applymovement 3, SilphS3_Bill_Batalla_Move_2
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_14 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox SilphS3_Bill_Batalla_Texto_15 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BILL_3, SilphS3_Bill_Batalla_Texto_16
msgbox SilphS3_Bill_Batalla_Texto_17 MSGBOX_AUTOCLOSE
msgbox SilphS3_Bill_Batalla_Texto_18 MSGBOX_AUTOCLOSE
applymovement 3, SilphS3_Bill_Batalla_Move_2
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_19 MSGBOX_AUTOCLOSE
applymovement 3, SilphS3_Bill_Batalla_Move_9
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 105
release
end

SilphS3_Bill_Batalla_Texto_1:
	.string "BILL: So, you're after that ESSENCE\n"
	.string "POKÉMON, huh, {PLAYER}?$"

SilphS3_Bill_Batalla_Texto_2:
	.string "When you took me down at Silph to push\n"
	.string "forward your plot against Lance's\l"
	.string "government, you really showed me the\l"
	.string "ropes, I gotta say.$"

SilphS3_Bill_Batalla_Texto_3:
	.string "You showed that even a ROCKET can have\n"
	.string "a great team. I underestimated what\l"
	.string "regular POKÉMON could do with good\l"
	.string "training, and you took it to the next\l"
	.string "level by beating RED and then LANCE,\l"
	.string "who ruled KANTO for the last ten years.$"

SilphS3_Bill_Batalla_Texto_4:
	.string "Thanks to your performance in the\n"
	.string "POKÉMON LEAGUE, you freed KANTO from\l"
	.string "the invisible yoke under which LANCE\l"
	.string "subjected its inhabitants. However, you\l"
	.string "also put an end to the series of\l"
	.string "privileges that government provided me.$"

SilphS3_Bill_Batalla_Texto_5:
	.string "Nonetheless, I have a knack for\n"
	.string "maintaining my contacts, and my\l"
	.string "relationship with SILPH has always been\l"
	.string "positive. As a result, they've assigned\l"
	.string "me to lead one of their major projects,\l"
	.string "something I was planning to undertake\l"
	.string "on my own: unlocking PORYGON's maximum\l"
	.string "potential.$"

SilphS3_Bill_Batalla_Texto_6:
	.string "Look, I'm not done collecting or\n"
	.string "anything, but KANTO's old news. I've got\l"
	.string "all I need from there: bagged the\l"
	.string "LEGENDARY BIRDS, nabbed all the\l"
	.string "FOSSILS, and even got a DRAGONITE. My\l"
	.string "POKEDEX is almost full with 149 KANTO\l"
	.string "POKÉMON... It's just MEW, gone for ages,\l"
	.string "that's playing hard to get. But who\l"
	.string "knows where it is anyway? Not even\l"
	.string "worth worrying about.$"

SilphS3_Bill_Batalla_Texto_7:
.string "BILL: ...$"

SilphS3_Bill_Batalla_Texto_8:
	.string "Oh, you're here for that mystery\n"
	.string "POKÉMON, huh? Yeah, I remember!$"

SilphS3_Bill_Batalla_Texto_9:
	.string "Do you really think, Rocket, that if I\n"
	.string "thought there was a chance of such a\l"
	.string "Pokémon existing, I wouldn't be out\l"
	.string "there looking for it? I've read the\l"
	.string "documents about that invention, and\l"
	.string "I've checked with my own hands that\l"
	.string "nothing they claim exists; those\l"
	.string "documents must have been written by\l"
	.string "religious fanatics rather than based on\l"
	.string "real empirical knowledge.$"

SilphS3_Bill_Batalla_Texto_10:
	.string "Don't you believe me?$"

SilphS3_Bill_Batalla_Texto_11:
	.string "The documents are right there, at the\n"
	.string "end of my desk; you can verify it\l"
	.string "yourself.$"

SilphS3_Bill_Batalla_Texto_12:
	.string "Hang on, {PLAYER}, not too fast!$"

SilphS3_Bill_Batalla_Texto_13:
	.string "Hey, I just told you I'm working on new\n"
	.string "PORYGON prototypes, and you don't even\l"
	.string "care to ask about it. Do you really hate\l"
	.string "me that much? I mean, yeah, we've had\l"
	.string "our differences, but I thought you'd be\l"
	.string "interested in hearing about the cool\l"
	.string "stuff PORYGON can do, instead of\l"
	.string "reading those boring docs written by\l"
	.string "some dude who just made up\l"
	.string "non-existing POKÉMON to avoid dealing\l"
	.string "with their own problems.$"

SilphS3_Bill_Batalla_Texto_14:
	.string "FYI, we've just cranked up DRAGONITE's\n"
	.string "base power with our latest update,\l"
	.string "following PORYGON2's evolution line\l"
	.string "instead of that messed-up PORYGON-Z\l"
	.string "one. Now, this POKÉMON offensive is\l"
	.string "top-notch in KANTO. Isn't that what\l"
	.string "it's all about, {PLAYER}? Forget about\l"
	.string "superstitions, we're talking about some\l"
	.string "serious numbers here.$"


SilphS3_Bill_Batalla_Texto_15:
	.string "Oh, and by the way, our latest\n"
	.string "calculations show that my current team\l"
	.string "of 6 POKÉMON has outmatched the power\l"
	.string "level of the team LANCE used to conquer\l"
	.string "KANTO, you know, the one you battled at\l"
	.string "the HALL OF FAME. So, do you think this\l"
	.string "badass team could also take down the\l"
	.string "toughest trainer around?$"

SilphS3_Bill_Batalla_Texto_16:
	.string "Dang, I gotta say, your team is on\n"
	.string "another level.$"

SilphS3_Bill_Batalla_Texto_17:
	.string "Dude, I never thought I'd lay eyes on a\n"
	.string "Pokémon like PORYGON3, not even in my\l"
	.string "craziest dreams. It's... almost perfect,\l"
	.string "with its type combination giving it\l"
	.string "three immunities, insane offense, and\l"
	.string "wicked SPEED. If only its physical\l"
	.string "DEFENSE didn't suck...$"

SilphS3_Bill_Batalla_Texto_18:
	.string "Despite your victory over me, I\n"
	.string "comprehend how someone as formidable\l"
	.string "as LANCE could also suffer defeat.\l"
	.string "However, do not assume that I have\l"
	.string "concluded my endeavors, ROCKET. I hold\l"
	.string "respect for my adversaries and extract\l"
	.string "lessons from our encounters. There\l"
	.string "remains significant ground to cover in\l"
	.string "unlocking PORYGON's utmost potential.\l"
	.string "Though I suspect we are nearing a\l"
	.string "plateau where enhancements will yield\l"
	.string "marginal returns, we will persist in\l"
	.string "elevating that trajectory before\l"
	.string "reaching a point where further\l"
	.string "improvements become practically\l"
	.string "negligible, that law of diminishing\l"
	.string "returns is no joke, dude.$"

SilphS3_Bill_Batalla_Texto_19:
	.string "So, back to the grind. Since I can't find\n"
	.string "any new POKÉMON to add to my\l"
	.string "collection, I'm pretty stoked about\l"
	.string "this project. If you can't get more rare\l"
	.string "and powerful POKÉMON, why not just\l"
	.string "make your own, right?$"

SilphS3_Bill_Batalla_Move_1:
walk_in_place_up
step_end

SilphS3_Bill_Batalla_Move_2:
walk_in_place_down
step_end

SilphS3_Bill_Batalla_Move_3:
walk_up
walk_up
face_left
step_end

SilphS3_Bill_Batalla_Move_4:
walk_in_place_right
step_end

SilphS3_Bill_Batalla_Move_5:
emote_exclamation_mark
step_end

SilphS3_Bill_Batalla_Move_6:
walk_in_place_left
walk_in_place_right
step_end

SilphS3_Bill_Batalla_Move_7:
walk_slow_left
walk_slow_left
walk_in_place_left
step_end

SilphS3_Bill_Batalla_Move_8:
face_up
step_end

SilphS3_Bill_Batalla_Move_9:
face_left
step_end

SilphS3_Documento_Pokemon_Esencia::
compare VAR_UNUSED_0x40F7, 105
goto_if_gt SilphS3_Documento_Pokemon_Esencia_2
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_1 MSGBOX_AUTOCLOSE
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 106
release
end

SilphS3_Documento_Pokemon_Esencia_2::
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_1 MSGBOX_AUTOCLOSE
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_3 MSGBOX_AUTOCLOSE
release
end

SilphS3_Documento_Pokemon_Esencia_Texto_1:
	.string "The legend of the Essence Pokémon, the\n"
	.string "one that gives meaning to KANTO:\l"
	.string "... ...\l"
	.string "... ...\l"
	.string "The establishment of LAVENDER TOWN\l"
	.string "and its POKÉMON TOWER to the south of\l"
	.string "ROCK TUNNEL is not mere chance; it was\l"
	.string "there where its first inhabitants\l"
	.string "managed to establish contact with what\l"
	.string "they called the 'ESSENCE POKÉMON.'\l"
	.string "Unlike other POKÉMON, this entity did\l"
	.string "not have a defined form; it could\l"
	.string "manifest itself in any place or form. It\l"
	.string "is a POKÉMON of such power and\l"
	.string "presence that it is part of every pixel\l"
	.string "that makes up KANTO. In every good or\l"
	.string "bad action, moment of calm or\l"
	.string "enlightenment, the ESSENCE POKÉMON\l"
	.string "will be there, simply observing the\l"
	.string "unfolding events of the KANTO region,\l"
	.string "attentive to that moment of\l"
	.string "uncertainty before action...$"


SilphS3_Documento_Pokemon_Esencia_Texto_2:
	.string "Keep reading?$"

SilphS3_Documento_Pokemon_Esencia_Texto_3:
	.string "A being of such nature, omnipresent,\n"
	.string "and for some, also omnipotent, could\l"
	.string "not be categorized within the\l"
	.string "parameters that govern the rest of\l"
	.string "Pokémon. The mere act of\l"
	.string "categorization would automatically\l"
	.string "result in a reduction of the authentic\l"
	.string "complexity of such a being. However,\l"
	.string "those early inhabitants of LAVENDER\l"
	.string "TOWN reached such a level of\l"
	.string "spirituality that they managed to make\l"
	.string "contact with the 'ESSENCE POKÉMON,'\l"
	.string "forming a cult around this being.\l"
	.string "Enlightened by the wisdom of the\l"
	.string "ESSENCE POKÉMON, they lost all\l"
	.string "attachment to the material world, and\l"
	.string "with it, contact with the rest of the\l"
	.string "population of KANTO, to the extent\l"
	.string "that, over generations, no one now lives\l"
	.string "to remember the existence of this cult,\l"
	.string "much less that of the 'ESSENCE\l"
	.string "POKÉMON.' If the legend is true, such a\l"
	.string "cult still exists, hidden in some corner\l"
	.string "of LAVENDER TOWN...$"

SilphS3_Sotano::
lock
msgbox SilphS3_Sotano_Texto_1 MSGBOX_SIGN
release
end

SilphS3_Sotano_Texto_1:
	.string "SILPH CO.'s Private Files: S3$"

SilphS2_Sotano::
lock
msgbox SilphS2_Sotano_Texto_1 MSGBOX_SIGN
release
end

SilphS2_Sotano_Texto_1:
	.string "SILPH CO.'s Private Files: S2$"


SilphS1_Sotano::
lock
msgbox SilphS1_Sotano_Texto_1 MSGBOX_SIGN
release
end

SilphS1_Sotano_Texto_1:
	.string "SILPH CO.'s Private Files: S1$"


SilphS1_Sotano_2::
lock
msgbox SilphS1_Sotano_2_Texto_1 MSGBOX_SIGN
release
end

SilphS1_Sotano_2_Texto_1:
	.string "SILPH CO.'s Private Files$"

