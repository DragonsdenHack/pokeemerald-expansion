CultoS3_MapScripts::
	.byte 0


CultoS3_EventScript_Medium::
	trainerbattle_single TRAINER_AURON, CultoS3_Text_MediumIntro, CultoS3_Text_MediumDefeated
	msgbox CultoS3_Text_MediumPostBattle, MSGBOX_AUTOCLOSE
	end



CultoS3_EventScript_Medium2::
	trainerbattle_single TRAINER_KELVIN, CultoS3_Text_Medium2Intro, CultoS3_Text_Medium2Defeated
	msgbox CultoS3_Text_Medium2PostBattle, MSGBOX_AUTOCLOSE
	end



CultoS3_EventScript_Exorcista::
	trainerbattle_single TRAINER_HECTOR, CultoS3_Text_ExorcistaIntro, CultoS3_Text_ExorcistaDefeated
	msgbox CultoS3_Text_ExorcistaPostBattle, MSGBOX_AUTOCLOSE
	end



CultoS3_EventScript_Exorcista2::
	trainerbattle_single TRAINER_EDWIN_1, CultoS3_Text_Exorcista2Intro, CultoS3_Text_Exorcista2Defeated
	msgbox CultoS3_Text_Exorcista2PostBattle, MSGBOX_AUTOCLOSE
	end



CultoS3_EventScript_Medium3::
	trainerbattle_single TRAINER_REYNA, CultoS3_Text_Medium3Intro, CultoS3_Text_Medium3Defeated
	msgbox CultoS3_Text_Medium3PostBattle, MSGBOX_AUTOCLOSE
	end



CultoS3_EventScript_Medium4::
	trainerbattle_single TRAINER_CONOR, CultoS3_Text_Medium4Intro, CultoS3_Text_Medium4Defeated
	msgbox CultoS3_Text_Medium4PostBattle, MSGBOX_AUTOCLOSE
	end



CultoS3_EventScript_Medium5::
	trainerbattle_single TRAINER_HUDSON, CultoS3_Text_Medium5Intro, CultoS3_Text_Medium5Defeated
	msgbox CultoS3_Text_Medium5PostBattle, MSGBOX_AUTOCLOSE
	end



CultoS3_1::
lock     
faceplayer     
msgbox CultoS3_Text_1, MSGBOX_DEFAULT
release     
end

CultoS3_Text_1:
	.string "Dude, if you don't believe in one system,\n"
	.string "you're gonna be totally owned by\l"
	.string "another.$"



CultoS3_3::
lock     
faceplayer     
msgbox CultoS3_Text_3, MSGBOX_DEFAULT
release     
end

CultoS3_Text_3:
	.string "The majority of individuals are neither\n"
	.string "prepared nor deserving of access to\l"
	.string "such a place.$"



CultoS3_4::
lock     
faceplayer     
msgbox CultoS3_Text_4, MSGBOX_DEFAULT
release     
end

CultoS3_Text_4:
	.string "It's sad for those who mix up what they\n"
	.string "want with what they crave, thinking\l"
	.string "they're free when they're just puppets\l"
	.string "controlled by their own impulses, with\l"
	.string "no willpower.$"



CultoS3_7::
lock     
faceplayer     
msgbox CultoS3_Text_7, MSGBOX_DEFAULT
release     
end

CultoS3_Text_7:
	.string "The essence contained within this\n"
	.string "place transcends our own existence;\l"
	.string "you won't find such a place in KANTO.$"



CultoS3_8::
lock     
faceplayer     
msgbox CultoS3_Text_8, MSGBOX_DEFAULT
release     
end

CultoS3_Text_8:
	.string "Why would we change this place when it\n"
	.string "gives us everything we need?$"



CultoS3_9::
lock     
faceplayer     
msgbox CultoS3_Text_9, MSGBOX_DEFAULT
release     
end

CultoS3_Text_9:
	.string "I can't even remember the last time we\n"
	.string "had someone from the outside visit, but\l"
	.string "let me tell you, it didn't go down too\l"
	.string "well.$"



CultoS3_10::
lock     
faceplayer     
msgbox CultoS3_Text_10, MSGBOX_DEFAULT
release     
end

CultoS3_Text_10:
	.string "The essence is here! Can't you see it?\n"
	.string "It's yours! Seize it before it slips away\l"
	.string "from your grasp!$"



CultoS3_11::
lock     
faceplayer     
msgbox CultoS3_Text_11, MSGBOX_DEFAULT
release     
end

CultoS3_Text_11:
	.string "This place is older than POKÉMON TOWER,\n"
	.string "which was just made as an add-on for\l"
	.string "the gentler rituals open to the public.\l"
	.string "It's been so long since we lost touch\l"
	.string "with the outside world that even the\l"
	.string "oldest folks in LAVENDER TOWN don't\l"
	.string "remember this massive underground\l"
	.string "chamber.$"



CultoS3_12::
lock     
faceplayer     
msgbox CultoS3_Text_12, MSGBOX_DEFAULT
release     
end

CultoS3_Text_12:
	.string "Infinite potential, that's what I feel\n"
	.string "when I close my eyes and soak in the\l"
	.string "energy of this place.$"



CultoS3_13::
lock     
faceplayer     
msgbox CultoS3_Text_13, MSGBOX_DEFAULT
release     
end

CultoS3_Text_13:
	.string "We are mere observers of everything\n"
	.string "happening in KANTO. It's been a while\l"
	.string "since we've constructed an alternate\l"
	.string "reality here, apart from the power\l"
	.string "games ruling the region.$"



CultoS3_14::
lock     
faceplayer     
msgbox CultoS3_Text_14, MSGBOX_DEFAULT
release     
end

CultoS3_Text_14:
           .string "Everything flows and ebbs, everything\n"
	.string "has its periods of advancement and\l"
	.string "regression, everything ascends and\l"
	.string "descends, everything moves like a\l"
	.string "pendulum; the measure of its movement\l"
	.string "to the right is equal to that of its\l"
	.string "movement to the left, rhythm is the\l"
	.string "compensation.$"



CultoS3_15::
lock     
faceplayer     
msgbox CultoS3_Text_15, MSGBOX_DEFAULT
release     
end

CultoS3_Text_15:
	.string "Having inner freedom can actually lift\n"
	.string "you up above a tough fate.$"



CultoS3_16::
lock     
faceplayer     
msgbox CultoS3_Text_16, MSGBOX_DEFAULT
release     
end

CultoS3_Text_16:
.string "…\n"
.string "…\l"
.string "A less pleasurable place, but where the\l"
.string "most important things happen.\l"
.string "…\l"
.string "…$"



CultoS3_17::
lock     
faceplayer     
msgbox CultoS3_Text_17, MSGBOX_DEFAULT
release     
end

CultoS3_Text_17:
	.string "Those who embrace their destiny live\n"
	.string "long lives, while those who rebel\l"
	.string "receive their punishment.$"



CultoS3_18::
lock     
faceplayer     
msgbox CultoS3_Text_18, MSGBOX_DEFAULT
release     
end

CultoS3_Text_18:
	.string "Flowers that bloom in adversity are the\n"
	.string "most beautiful ones.$"



CultoS3_19::
lock     
faceplayer     
msgbox CultoS3_Text_19, MSGBOX_DEFAULT
release     
end

CultoS3_Text_19:
	.string "Why do we honor and lift some souls\n"
	.string "above others, like this funeral\l"
	.string "monument? We believe our actions in\l"
	.string "life echo in eternity. It's not about\l"
	.string "devaluing other souls, but recognizing\l"
	.string "those who excelled.$"



CultoS3_20::
lock     
faceplayer     
msgbox CultoS3_Text_20, MSGBOX_DEFAULT
release     
end

CultoS3_Text_20:
	.string "GASTLY, HAUNTER and GENGAR are not the\n"
	.string "only ghosts that LAVENDER TOWN\l"
	.string "harbors in its most hidden corners.$"



CultoS3_21::
lock     
faceplayer     
msgbox CultoS3_Text_21, MSGBOX_DEFAULT
release     
end

CultoS3_Text_21:
	.string "The perfect flower is very rare; you can\n"
	.string "spend your entire life searching for\l"
	.string "just one, and you won't have wasted it.$"



CultoS3_22::
lock     
faceplayer     
msgbox CultoS3_Text_22, MSGBOX_DEFAULT
release     
end

CultoS3_Text_22:
	.string "Dude, if anyone saw the crazy setup\n"
	.string "we've got here, their head would\l"
	.string "explode.$"



CultoS3_23::
lock     
faceplayer     
msgbox CultoS3_Text_23, MSGBOX_DEFAULT
release     
end

CultoS3_Text_23:
	.string "No matter how, serve your ideals.$"



CultoS3_24::
lock     
faceplayer     
msgbox CultoS3_Text_24, MSGBOX_DEFAULT
release     
end

CultoS3_Text_24:
	.string "Your greatest fear lies in your light,\n"
	.string "not your darkness. It's the fear of\l"
	.string "realizing the extent of your brilliance\l"
	.string "and uncovering the endless potential\l"
	.string "within yourself.$"



CultoS3_25::
lock     
faceplayer     
msgbox CultoS3_Text_25, MSGBOX_DEFAULT
release     
end

CultoS3_Text_25:
	.string "Self-exploitation is more effective\n"
	.string "than being exploited by others because\l"
	.string "it comes with a feeling of freedom.$"



CultoS3_26::
lock     
faceplayer     
msgbox CultoS3_Text_26, MSGBOX_DEFAULT
release     
end

CultoS3_Text_26:
	.string "Try putting man in the most prosperous,\n"
	.string "idyllic, and fantastic utopia,\l"
	.string "sheltering him in immense bubbles of\l"
	.string "hedonistic pleasure, avoiding all\l"
	.string "contact with the harshness of the\l"
	.string "cosmos, granting him everything he's\l"
	.string "ever dreamed of without facing\l"
	.string "frustrations, disappointments, or\l"
	.string "difficulties. I guarantee you, sooner or\l"
	.string "later, this enigmatic creature will find\l"
	.string "some way to feel miserable.$"



CultoS3_27::
lock     
faceplayer     
msgbox CultoS3_Text_27, MSGBOX_DEFAULT
release     
end

CultoS3_Text_27:
	.string "The frog in its pond can't conceive the\n"
	.string "ocean.$"



CultoS3_28::
lock     
faceplayer     
msgbox CultoS3_Text_28, MSGBOX_DEFAULT
release     
end

CultoS3_Text_28:
	.string "It is impossible to bathe twice in the\n"
	.string "same river, both for you and the river,\l"
	.string "as both are in constant and permanent\l"
	.string "change; you will never be as you are\l"
	.string "today, and we will never again be here in\l"
	.string "the same way.$"



CultoS3_30::
lock     
faceplayer     
msgbox CultoS3_Text_30, MSGBOX_DEFAULT
release     
end

CultoS3_Text_30:
	.string "Every cause has its effect, every\n"
	.string "effect has its cause; everything\l"
	.string "happens according to law. Chance or\l"
	.string "randomness is nothing but the name\l"
	.string "given to unrecognized law. There are\l"
	.string "many levels of causality, but nothing\l"
	.string "escapes the law. However, this does not\l"
	.string "negate our freedom and free will.$"



CultoS3_31::
lock     
faceplayer     
msgbox CultoS3_Text_31, MSGBOX_DEFAULT
release     
end

CultoS3_Text_31:
	.string "Similarities and opposites share the\n"
	.string "same essence; opposites have identical\l"
	.string "characteristics but vary in intensity;\l"
	.string "extremes converge; all truths contain\l"
	.string "partial truths; all paradoxes have\l"
	.string "potential resolutions.$"


CultoS3_34::
lock     
faceplayer     
msgbox CultoS3_Text_34, MSGBOX_DEFAULT
release     
end

CultoS3_Text_34:
	.string "Whether you believe you are capable or\n"
	.string "not, in both cases, you are correct.$"



CultoS3_35::
lock     
faceplayer     
msgbox CultoS3_Text_35, MSGBOX_DEFAULT
release     
end

CultoS3_Text_35:
	.string "Considering the vastness of the\n"
	.string "universe, how do a 3-day-old baby and a\l"
	.string "95-year-old elder differ?$"



CultoS3_36::
lock     
faceplayer     
msgbox CultoS3_Text_36, MSGBOX_DEFAULT
release     
end

CultoS3_Text_36:
	.string "Those who only want to feel free,\n"
	.string "without any obstacles, will end up\l"
	.string "feeling empty because living means\l"
	.string "having to do something specific,\l"
	.string "fulfilling a task; if we avoid putting\l"
	.string "our existence into something, we waste\l"
	.string "our lives.$"



CultoS3_37::
lock     
faceplayer     
msgbox CultoS3_Text_37, MSGBOX_DEFAULT
release     
end

CultoS3_Text_37:
	.string "Occasionally, individuals avoid hearing\n"
	.string "the truth because they fear it will\l"
	.string "destroy their cherished illusions.$"



CultoS3_38::
lock     
faceplayer     
msgbox CultoS3_Text_38, MSGBOX_DEFAULT
release     
end

CultoS3_Text_38:
	.string "Be serene to accept what's out of our\n"
	.string "control. Be brave to change what we\l"
	.string "can. Have wisdom to notice the\l"
	.string "difference.$"



CultoS3_41::
lock     
faceplayer     
msgbox CultoS3_Text_41, MSGBOX_DEFAULT
release     
end

CultoS3_Text_41:
	.string "Humans can unconsciously shirk\n"
	.string "responsibility, turning a blind eye to\l"
	.string "avoid acknowledging danger, pretending\l"
	.string "it's not there just to stay sane.$"



CultoS3_42::
lock     
faceplayer     
msgbox CultoS3_Text_42, MSGBOX_DEFAULT
release     
end

CultoS3_Text_42:
	.string "There are moments when you find\n"
	.string "yourself in a situation where the only\l"
	.string "way to rectify your current state is to\l"
	.string "continue down the wrong path until you\l"
	.string "reach its conclusion.$"

Culto_S3_Batalla::
lockall
clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
clearflag FLAG_HIDE_HO_OH
clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
addobject 53
addobject 55
applymovement OBJ_EVENT_ID_PLAYER, Culto_S3_Batalla_Move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Culto_S3_Batalla_Move_2
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Culto_S3_Batalla_Move_3
waitmovement 0x0
special RemoveCameraObject
msgbox Culto_S3_Batalla_Texto_1 MSGBOX_AUTOCLOSE
applymovement 54, Culto_S3_Batalla_Move_4
waitmovement 0x0
msgbox Culto_S3_Batalla_Texto_2 MSGBOX_AUTOCLOSE
applymovement 54, Culto_S3_Batalla_Move_5
waitmovement 0x0
msgbox Culto_S3_Batalla_Texto_3 MSGBOX_AUTOCLOSE
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Culto_S3_Batalla_Move_6
waitmovement 0x0
special RemoveCameraObject
delay 15
playmoncry SPECIES_YVELTAL, CRY_MODE_ENCOUNTER
msgbox Culto_S3_Batalla_Texto_4 MSGBOX_DEFAULT
waitmoncry
delay 20
setflag FLAG_HIDE_HO_OH
fadescreen 3
delay 20
playse SE_M_GUST
delay 40
playse SE_M_RAZOR_WIND
delay 40
removeobject 53
playse SE_M_CHARGE
delay 40
playse SE_M_SOLAR_BEAM
delay 40
playse SE_BREAKABLE_DOOR
delay 40
fadescreen 2
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Culto_S3_Batalla_Move_7
waitmovement 0x0
special RemoveCameraObject
msgbox Culto_S3_Batalla_Texto_5 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Culto_S3_Batalla_Move_8
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, Culto_S3_Batalla_Move_3
waitmovement 0x0
playse SE_PIN
applymovement 43, Culto_S3_Batalla_Move_2
applymovement 44, Culto_S3_Batalla_Move_2
applymovement 45, Culto_S3_Batalla_Move_2
applymovement 46, Culto_S3_Batalla_Move_2
applymovement 47, Culto_S3_Batalla_Move_2
applymovement 48, Culto_S3_Batalla_Move_2
applymovement 49, Culto_S3_Batalla_Move_2
applymovement 50, Culto_S3_Batalla_Move_2
applymovement 51, Culto_S3_Batalla_Move_2
applymovement 52, Culto_S3_Batalla_Move_2
applymovement 54, Culto_S3_Batalla_Move_2
waitmovement 0x0
delay 15
msgbox Culto_S3_Batalla_Texto_6 MSGBOX_AUTOCLOSE
applymovement 54, Culto_S3_Batalla_Move_9
waitmovement 0x0
msgbox Culto_S3_Batalla_Texto_7 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 54, Culto_S3_Batalla_Move_2
waitmovement 0x0
msgbox Culto_S3_Batalla_Texto_8 MSGBOX_AUTOCLOSE
applymovement 54, Culto_S3_Batalla_Move_4
waitmovement 0x0
msgbox Culto_S3_Batalla_Texto_9 MSGBOX_AUTOCLOSE
applymovement 54, Culto_S3_Batalla_Move_5
waitmovement 0x0
msgbox Culto_S3_Batalla_Texto_10 MSGBOX_AUTOCLOSE
msgbox Culto_S3_Batalla_Texto_11 MSGBOX_AUTOCLOSE
applymovement 54, Culto_S3_Batalla_Move_10
waitmovement 0x0
msgbox Culto_S3_Batalla_Texto_12 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Culto_S3_Batalla_Move_6
waitmovement 0x0
special RemoveCameraObject
msgbox Culto_S3_Batalla_Texto_13 MSGBOX_AUTOCLOSE
delay 20
playse SE_BALL_OPEN
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
clearflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
removeobject 55
addobject 58
waitse
delay 15
playse SE_BALL_TRADE
delay 15
setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
removeobject 58
delay 20
msgbox Culto_S3_Batalla_Texto_14 MSGBOX_AUTOCLOSE
delay 20
applymovement 54, Culto_S3_Batalla_Move_11
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Culto_S3_Batalla_Move_7
waitmovement 0x0
special RemoveCameraObject
msgbox Culto_S3_Batalla_Texto_15 MSGBOX_AUTOCLOSE
msgbox Culto_S3_Batalla_Texto_16 MSGBOX_AUTOCLOSE
applymovement 54, Culto_S3_Batalla_Move_9
waitmovement 0x0
msgbox Culto_S3_Batalla_Texto_17 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CULTO_1, Culto_S3_Batalla_Texto_18
msgbox Culto_S3_Batalla_Texto_19 MSGBOX_AUTOCLOSE
applymovement 54, Culto_S3_Batalla_Move_4
waitmovement 0x0
msgbox Culto_S3_Batalla_Texto_20 MSGBOX_AUTOCLOSE
applymovement 54, Culto_S3_Batalla_Move_5
waitmovement 0x0
msgbox Culto_S3_Batalla_Texto_21 MSGBOX_AUTOCLOSE
msgbox Culto_S3_Batalla_Texto_22 MSGBOX_AUTOCLOSE
applymovement 54, Culto_S3_Batalla_Move_4
waitmovement 0x0
msgbox Culto_S3_Batalla_Texto_23 MSGBOX_AUTOCLOSE
msgbox Culto_S3_Batalla_Texto_24 MSGBOX_AUTOCLOSE
applymovement 54, Culto_S3_Batalla_Move_5
waitmovement 0x0
msgbox Culto_S3_Batalla_Texto_25 MSGBOX_AUTOCLOSE
msgbox Culto_S3_Batalla_Texto_26 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
removeobject 55
fadescreen 1
delay 20
removeobject 43
removeobject 44
removeobject 45
removeobject 46
removeobject 47
removeobject 48
removeobject 49
removeobject 50
removeobject 51
removeobject 52
removeobject 54
fadescreen 0
setvar VAR_UNUSED_0x40F7, 108
release
end

Culto_S3_Batalla_Texto_1:
	.string "Accept, creator of all, our humble\n"
	.string "sacrifice as a sign of respect and\l"
	.string "gratitude.$"

Culto_S3_Batalla_Texto_2:
	.string "There's no need for regret or fear;\n"
	.string "instead, there's a serene feeling of\l"
	.string "certainty: your soul will reunite with\l"
	.string "the whole.$"

Culto_S3_Batalla_Texto_3:
	.string "While we await your return, we will\n"
	.string "remain concealed and faithful to your\l"
	.string "will, creator of KANTO. Let it commence!$"

Culto_S3_Batalla_Texto_4:
.string "VTAAAAAALL!$"

Culto_S3_Batalla_Texto_5:
	.string "We will keep your essence alive in our\n"
	.string "minds, lord of KANTO.$"

Culto_S3_Batalla_Texto_6:
	.string "You are not part of this cult. Only a few\n"
	.string "individuals have discovered this place,\l"
	.string "and none of them has ever returned to\l"
	.string "the outside. Do you know what that\l"
	.string "means?$"

Culto_S3_Batalla_Texto_7:
	.string "We can't let you go. The world can't know\n"
	.string "this place exists, so{PAUSE 15}…{PAUSE 15}$"

Culto_S3_Batalla_Texto_8:
	.string "{PAUSE 20}…{PAUSE 20} Are you the current KANTO\n"
	.string "CHAMPION? And are you looking for the\l"
	.string "ESSENCE POKÉMON?$"

Culto_S3_Batalla_Texto_9:
	.string "I am aware of what happens on the\n"
	.string "outside, CHAMPION. From here, we see\l"
	.string "everything. We are cognizant of the\l"
	.string "situation through which KANTO has\l"
	.string "passed and of LANCE's downfall. What\l"
	.string "you cannot see is your limited mindset.$"

Culto_S3_Batalla_Texto_10:
	.string "Any question you ask about the ESSENCE\n"
	.string "POKÉMON doesn't make sense in your\l"
	.string "framework. Do you think it's a POKÉMON\l"
	.string "that can be found? That can be caught\l"
	.string "and added in a full 6 POKÉMON team? Do\l"
	.string "you and your group really think you can\l"
	.string "measure its power in base of the other\l"
	.string "POKÉMON?$"

Culto_S3_Batalla_Texto_11:
	.string "You might have beaten LANCE, but you're\n"
	.string "still a beginner when it comes to\l"
	.string "knowing the laws that run this world…$"

Culto_S3_Batalla_Texto_12:
	.string "In the end, all of you are after power,\n"
	.string "but what you don't know is that true\l"
	.string "power comes to those who are willing to\l"
	.string "kneel down against that power, and\l"
	.string "humbly obtain it. It must be a result of\l"
	.string "other virtues, not the ultimate goal.\l"
	.string "Look{PAUSE 15}…{PAUSE 15}$"

Culto_S3_Batalla_Texto_13:
	.string "Right now, I could make you vanish\n"
	.string "quickly, but it wouldn't be fair to dump\l"
	.string "all the power and wisdom of countless\l"
	.string "generations on someone like you who\l"
	.string "never had access to it.$"

Culto_S3_Batalla_Texto_14:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

Culto_S3_Batalla_Texto_15:
	.string "I sense that you're different from the\n"
	.string "others. You might come to understand\l"
	.string "what truly matters. I'll not only offer\l"
	.string "you the chance to return to the\l"
	.string "outside if you can surpass your\l"
	.string "previous self in your battle with LANCE,\l"
	.string "but I'll also reveal to you how to\l"
	.string "summon the so-called 'ESSENCE\l"
	.string "POKÉMON', something that has never left\l"
	.string "this place.$"

Culto_S3_Batalla_Texto_16:
	.string "I will not employ my most advanced arts,\n"
	.string "nor my Pokémon that have come closest\l"
	.string "to supreme knowledge: It won't take me\l"
	.string "more than 50% of my power to determine\l"
	.string "if you have what it takes.$"

Culto_S3_Batalla_Texto_17:
	.string "Show me, CHAMPION, if you are capable of\n"
	.string "seeing beyond all that surrounds you!$"

Culto_S3_Batalla_Texto_18:
	.string "Interesting.$"

Culto_S3_Batalla_Texto_19:
	.string "Despite the mediocrity prevailing in\n"
	.string "KANTO, your will has not been swayed by\l"
	.string "the surrounding circumstances. Without\l"
	.string "a doubt, you are a special case. I don't\l"
	.string "believe more than 2 or 3 individuals\l"
	.string "from outside Kanto, including you, could\l"
	.string "emerge successfully against the team\l"
	.string "I've just displayed. You have earned\l"
	.string "the right to return to the outside, with\l"
	.string "the condition of not disclosing\l"
	.string "anything seen here, except, of course,\l"
	.string "to the other person who would have\l"
	.string "been able to defeat this team. You'll be\l"
	.string "able to identify them, of course…$"

Culto_S3_Batalla_Texto_20:
	.string "Concerning the ESSENCE POKÉMON, we\n"
	.string "venerate it here. Yes, the sacrifice you\l"
	.string "just witnessed was in its honor.\l"
	.string "However, we don't intend nor are we able\l"
	.string "to 'see' or 'own' such a POKÉMON as if it\l"
	.string "were ordinary; that's not feasible.$"

Culto_S3_Batalla_Texto_21:
	.string "Nevertheless, I will provide you with\n"
	.string "the information that theoretically\l"
	.string "makes it possible to summon such a\l"
	.string "POKÉMON and materialize its form…$"

Culto_S3_Batalla_Texto_22:
	.string "Two specific POKÉMON must be brought\n"
	.string "together. These two POKÉMON cannot be\l"
	.string "found in KANTO, but their origins,\l"
	.string "history, and tradition are closely\l"
	.string "connected to Kanto and the ESSENCE\l"
	.string "POKÉMON.$"

Culto_S3_Batalla_Texto_23:
	.string "We're talking about LUGIA and HO-OH,\n"
	.string "which are currently missing. According\l"
	.string "to legend, if someone were able to\l"
	.string "gather these two LEGENDARY POKÉMON,\l"
	.string "the reaction resulting from their\l"
	.string "meeting, as creatures involved in the\l"
	.string "creation of KANTO and JOHTO, would\l"
	.string "compel the ultimate creator of\l"
	.string "everything known in these regions to\l"
	.string "appear: the ESSENCE POKÉMON.$"

Culto_S3_Batalla_Texto_24:
	.string "However, the legend doesn't specify any\n"
	.string "prior ritual or particular location\l"
	.string "where LUGIA or HO-OH must assemble; it\l"
	.string "merely discusses their unification.$"

Culto_S3_Batalla_Texto_25:
	.string "And that's it; I hope you understand\n"
	.string "how important this information is, use\l"
	.string "it wisely.$"

Culto_S3_Batalla_Texto_26:
	.string "I don't have anything else to say. When\n"
	.string "you feel ready to come back here, you'll\l"
	.string "know it. In the meantime, you still have\l"
	.string "a long journey ahead of you. I hope you\l"
	.string "enjoy that process because, in the end,\l"
	.string "it's the most important thing.$"

Culto_S3_Batalla_Move_1:
walk_in_place_up
step_end

Culto_S3_Batalla_Move_2:
emote_exclamation_mark
step_end

Culto_S3_Batalla_Move_3:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_in_place_up
step_end

Culto_S3_Batalla_Move_4:
face_up
step_end

Culto_S3_Batalla_Move_5:
walk_in_place_down
step_end

Culto_S3_Batalla_Move_6:
walk_slow_up
walk_slow_up
walk_slow_up
step_end

Culto_S3_Batalla_Move_7:
walk_down
walk_down
walk_down
step_end

Culto_S3_Batalla_Move_8:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

Culto_S3_Batalla_Move_9:
walk_slow_down
walk_in_place_down
step_end

Culto_S3_Batalla_Move_10:
walk_slow_up
walk_in_place_up
step_end

Culto_S3_Batalla_Move_11:
face_down
step_end

Culto_Bloqueo::
compare VAR_UNUSED_0x40F7, 167
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, Culto_Bloqueo_Move_1
waitmovement 0x0
msgbox Culto_Bloqueo_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Culto_Bloqueo_Move_2
waitmovement 0x0
release
end

Culto_Bloqueo_Texto_1:
	.string "(An awful aura blocks the way ahead).$"

Culto_Bloqueo_Move_1:
walk_in_place_down
step_end

Culto_Bloqueo_Move_2:
walk_slow_down
step_end
