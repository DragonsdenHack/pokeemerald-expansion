Route49_Pagoda_P7_MapScripts::
	.byte 0

Route49_Pagoda_P7_Primer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P7_Primer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P7_Primer_Pensador_Texto_1:
	.string "We interpret commitment as a lack of\n"
	.string "freedom when it's quite the opposite:\l"
	.string "it's a unique opportunity to test and\l"
	.string "exercise our will.$"

Route49_Pagoda_P7_Segundo_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P7_Segundo_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P7_Segundo_Pensador_Texto_1:
	.string "Mastery requires practice. However, the\n"
	.string "more you practice something, the more\l"
	.string "boring and routine it becomes. Once the\l"
	.string "beginner gains have been achieved and\l"
	.string "we've learned what to expect, our\l"
	.string "interest begins to fade.$"

Route49_Pagoda_P7_Tercer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P7_Tercer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P7_Tercer_Pensador_Texto_1:
	.string "Trying to impose obedience on those\n"
	.string "who have no desire to lead is\l"
	.string "exceedingly challenging.$"

Route49_Pagoda_P7_Cuarto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P7_Cuarto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P7_Cuarto_Pensador_Texto_1:
	.string "Destiny never nullifies its dealings\n"
	.string "with humans.$"

Route49_Pagoda_P7_Quinto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P7_Quinto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P7_Quinto_Pensador_Texto_1:
	.string "Thanks to the GOLDEN STONE of the\n"
	.string "SACRED DRAGON, the ancient POKÉMON of\l"
	.string "JOHTO have not been lost forever.\l"
	.string "Additionally, it reacts to certain\l"
	.string "POKÉMON, transforming them into exotic\l"
	.string "forms.$"

Route49_Pagoda_P7_Sexto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P7_Sexto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P7_Sexto_Pensador_Texto_1:
	.string "The GOLDEN STONE reacts with\n"
	.string "DUNSPARCE, but the resulting POKÉMON\l"
	.string "can evolve once more, although very few\l"
	.string "know how.$"

Route49_Pagoda_P7_EventScript_Pensador_1::
	trainerbattle_single TRAINER_TRAINER_229, Route49_Pagoda_P7_Text_Pensador1Intro, Route49_Pagoda_P7_Text_Pensador1Defeated
	msgbox Route49_Pagoda_P7_Text_Pensador1PostBattle, MSGBOX_AUTOCLOSE
	end

Route49_Pagoda_P7_Encuentro_Maestro::
lock
playse SE_PIN
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, Route49_Pagoda_P7_Encuentro_Maestro_Move_13
applymovement OBJ_EVENT_ID_CAMERA, Route49_Pagoda_P7_Encuentro_Maestro_Move_2
waitmovement 0x0
special RemoveCameraObject
fadenewbgm 386
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_3
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_2 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_4
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_4 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_5
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_6
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_6 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_1
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_7 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_7
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_3
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_9 MSGBOX_AUTOCLOSE
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_10 MSGBOX_AUTOCLOSE
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_11 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_8
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_12 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_1
waitmovement 0x0
delay 10
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_13 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_9
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_10
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_15 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_8
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_16 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_1
waitmovement 0x0
delay 10
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_12
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_11
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_17 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_13
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_7
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_14
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_19 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_3
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_20 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_15
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_21 MSGBOX_AUTOCLOSE
delay 10
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_7
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_23 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_1
waitmovement 0x0
delay 10
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_24 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_16
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_25 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_16
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_26 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_17
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_27 MSGBOX_AUTOCLOSE
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_28 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_8
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_29 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_16
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_30 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_18
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_31 MSGBOX_AUTOCLOSE
fadedefaultbgm
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, Route49_Pagoda_P7_Encuentro_Maestro_Move_19
applymovement OBJ_EVENT_ID_CAMERA, Route49_Pagoda_P7_Encuentro_Maestro_Move_20
waitmovement 0x0
special RemoveCameraObject
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_10
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_10
waitmovement 0x0
delay 5
playse SE_PIN
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_1
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_1
waitmovement 0x0
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_9
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_32 MSGBOX_AUTOCLOSE
delay 10
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_33 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_17
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_34 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_7
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_35 MSGBOX_AUTOCLOSE
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_21
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_36 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_1
applymovement 2, Route49_Pagoda_P7_Encuentro_Maestro_Move_2
waitmovement 0x0
setflag FLAG_UNUSED_0x26A
removeobject 2
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_22
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_37 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_10
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_38 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_23
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_39 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_17
waitmovement 0x0
msgbox Route49_Pagoda_P7_Encuentro_Maestro_Texto_40 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P7_Encuentro_Maestro_Move_2
waitmovement 0x0
removeobject 1
setvar VAR_VERDANTURF_TOWN_STATE, 11
release
end

Route49_Pagoda_P7_Encuentro_Maestro_Move_23:
walk_slow_down
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_22:
face_up
delay_4
walk_fast_up
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_21:
walk_up
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_20:
walk_down
walk_down
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_19:
walk_up
walk_up
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_18:
walk_slow_left
delay_8
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_17:
delay_8
face_up
delay_8
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_16:
walk_in_place_left
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_15:
walk_down
walk_left
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_14:
walk_slow_right
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_13:
walk_in_place_up
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_12:
delay_8
face_right
delay_8
face_up
step_end


Route49_Pagoda_P7_Encuentro_Maestro_Move_11:
walk_up
walk_up
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_10:
face_down
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_9:
walk_down
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_8:
face_left
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_7:
face_right
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_6:
walk_down
face_left
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_5:
walk_in_place_down
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_4:
delay_8
walk_slow_up
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_3:
walk_in_place_right
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_2:
walk_up
walk_up
walk_up
walk_up
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Move_1:
emote_exclamation_mark
step_end

Route49_Pagoda_P7_Encuentro_Maestro_Texto_1:
	.string "EUSINE: Wow{PAUSE 25}…{PAUSE 25} So, when {PLAYER}\n"
	.string "defeated LANCE, you freed ENTEI,\l"
	.string "RAIKOU, and SUICUNE.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_2:
	.string "ANDRA: That's what happens when you\n"
	.string "stay secluded for decades; LANCE took\l"
	.string "over KANTO and used your beloved\l"
	.string "SACRED BEASTS, all without you\l"
	.string "noticing.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_3:
	.string "EUSINE: That's the path of the ancient\n"
	.string "JOHTO TRAINER; one is never prepared\l"
	.string "enough to present oneself to the world,\l"
	.string "there's always room for improvement.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_4:
.string "But…$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_5:
	.string "I would give anything to preserve the\n"
	.string "SACRED BEASTS; LANCE committed that\l"
	.string "atrocity in the shadows. Meanwhile, I\l"
	.string "thought it was SUICUNE who had\l"
	.string "abandoned us.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_6:
	.string "You have shown me that in these\n"
	.string "turbulent times, we must be more\l"
	.string "vigilant than ever about our\l"
	.string "surroundings. Everything we cherish\l"
	.string "could be at risk, even this sacred\l"
	.string "place. How can we be sure that your\l"
	.string "intentions are genuine?$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_7:
	.string "ANDRA: Really? We've passed your test,\n"
	.string "we each have a DEEP BOND, what else do\l"
	.string "you need?$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_8:
	.string "EUSINE: The GRANDMASTER will verify\n"
	.string "that, girl.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_9:
.string "ANDRA: I have some questions.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_10:
	.string "EUSINE: Perhaps you're not ready to\n"
	.string "hear the answers.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_11:
	.string "ANDRA: What was that LEGENDARY\n"
	.string "POKÉMON?$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_12:
	.string "EUSINE: It's not a LEGENDARY, it's a\n"
	.string "mortal POKÉMON, flesh and bone.\l"
	.string "Essentially the same as all the ones\l"
	.string "you have.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_13:
.string "ANDRA: That{PAUSE 25}…{PAUSE 25} is just not possible!$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_14:
	.string "EUSINE: I thought you were one of\n"
	.string "those people who didn't use those kinds\l"
	.string "of words. Simply defining something\l"
	.string "already limits it. If that POKÉMON\l"
	.string "reached that point, it wasn't by\l"
	.string "stopping to think if it was possible or\l"
	.string "not, it just did it.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_15:
.string "ANDRA: But{PAUSE 25}…{PAUSE 25} what was it?$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_16:
.string "EUSINE: It was a DUNSPARCE.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_17:
	.string "Indeed, one whose determination to\n"
	.string "transcend its limited form endowed it,\l"
	.string "after much time and indescribable\l"
	.string "effort, with unparalleled virtuosity.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_18:
	.string "Our scriptures reference its\n"
	.string "transformation thus: -…as if some sort\l"
	.string "of cosmic engineering acted upon it,\l"
	.string "and its actions were beyond any\l"
	.string "LEGENDARY. For once, the laws of\l"
	.string "balance and homeostasis that govern\l"
	.string "this world made an exception…-.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_19:
	.string "According to the legend, it first\n"
	.string "managed to evolve once, and then\l"
	.string "evolved again, reaching in this last\l"
	.string "evolution a status similar to that of a\l"
	.string "PSEUDO-LEGENDARY.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_20:
	.string "Several ancient documents assert that\n"
	.string "it was, in fact, the first\l"
	.string "PSEUDO-LEGENDARY, introducing the\l"
	.string "possibility for NON-LEGENDARY POKÉMON\l"
	.string "to attain power comparable to those\l"
	.string "that were legendary.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_21:
	.string "In DUN TOWER, that form of DUNSPARCE\n"
	.string "has been attained by our most skilled\l"
	.string "trainers.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_22:
.string "ANDRA: How?$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_23:
.string "EUSINE: Thanks to the GOLDEN STONE.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_24:
	.string "ANDRA: The same one that turned my\n"
	.string "URSARING into URSALUNA?$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_25:
	.string "EUSINE: That's right, that object is\n"
	.string "part of the SACRED DRAGON, and many of\l"
	.string "the current POKÉMON of JOHTO react to\l"
	.string "it, whose potential in the past was\l"
	.string "greater, allowing them to reach their\l"
	.string "ancient forms.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_26:
	.string "In the case of DUNSPARCE, the golden\n"
	.string "stone grants us access to the first\l"
	.string "mentioned evolution. We named this\l"
	.string "POKÉMON as BLESSPARCE, as it has been\l"
	.string "blessed by the GOLDEN STONE.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_27:
	.string "This sets it apart from the rest of\n"
	.string "DUNSPARCE, condemned like DUDUNSPARCE\l"
	.string "to remain in their limited forms, with no\l"
	.string "greater ceiling than being anchored to\l"
	.string "the ground.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_28:
.string "ANDRA: Oh…$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_29:
	.string "As for the PSEUDOLEGENDARY form{PAUSE 25}…{PAUSE 25} I'm\n"
	.string "afraid its acquisition is beyond my\l"
	.string "knowledge; you'll have to ask our grand\l"
	.string "master, as very few monks have been\l"
	.string "able to evolve a BLESSPARCE.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_30:
	.string "But{PAUSE 15}…{PAUSE 15} one thing is certain: the SACRED\n"
	.string "DRAGON you faced is unique and\l"
	.string "unrepeatable. The scriptures speak of\l"
	.string "a phenomenon similar to the DEEP BOND,\l"
	.string "which acted upon this first DUNSPARCE\l"
	.string "when it was already in its\l"
	.string "PSEUDOLEGENDARY phase.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_31:
.string "ANDRA: I'm{PAUSE 25}…{PAUSE 25} really impressed.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_32:
	.string "ANDRA: {PLAYER}! Did you hear our\n"
	.string "conversation?$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_33:
	.string "EUSINE: I doubt {PLAYER} is that\n"
	.string "sluggish or inept TRAINER, right?$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_34:
	.string "Anyway, you're only on the 7F, you still\n"
	.string "have a long way to go to reach the top.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_35:
	.string "ANDRA: Hah! It has been a slice of cake!$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_36:
	.string "EUSINE: I don't think it'll continue like\n"
	.string "this, our ELITE FOUR won't make things\l"
	.string "so easy for you.$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_37:
.string "ANDRA: Wait what!?$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_38:
	.string "Did he say ELITE FOUR? In this PAGODA,\n"
	.string "it seems there are many things that are\l"
	.string "familiar to us, right {PLAYER}?$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_39:
	.string "After these events, my decision not to\n"
	.string "use LEGENDARIES is only reinforced. Do\l"
	.string "you think that SACRED DRAGON saw a\l"
	.string "reflection of itself in us and our\l"
	.string "CROBAT?$"

Route49_Pagoda_P7_Encuentro_Maestro_Texto_40:
	.string "I'm inclined to think so, and maybe\n"
	.string "that's why it decided to show itself.$"

