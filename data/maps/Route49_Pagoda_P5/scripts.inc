Route49_Pagoda_P5_MapScripts::
	.byte 0

Route49_Pagoda_P5_Primer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P5_Primer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P5_Primer_Pensador_Texto_1:
	.string "Today, people know the price of\n"
	.string "everything and the value of nothing.$"

Route49_Pagoda_P5_Segundo_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P5_Segundo_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P5_Segundo_Pensador_Texto_1:
	.string "The DUN TOWER consists of 14 floors, it\n"
	.string "is taller and older than the BELL TOWER.$"

Route49_Pagoda_P5_Tercer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P5_Tercer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P5_Tercer_Pensador_Texto_1:
	.string "We don't rise to the level of our\n"
	.string "expectations, we fall to the level of\l"
	.string "our training.$"

Route49_Pagoda_P5_EventScript_Pensador_1::
	trainerbattle_single TRAINER_TRAINER_226, Route49_Pagoda_P5_Text_Pensador1Intro, Route49_Pagoda_P5_Text_Pensador1Defeated
	msgbox Route49_Pagoda_P5_Text_Pensador1PostBattle, MSGBOX_AUTOCLOSE
	end

Route49_Pagoda_P5_Encuentro::
lock
release
msgbox Route49_Pagoda_P5_Encuentro_Texto_1 MSGBOX_NPC
applymovement 1, Route49_Pagoda_P5_Encuentro_Move_1
waitmovement 0x0
msgbox Route49_Pagoda_P5_Encuentro_Texto_2 MSGBOX_NPC
applymovement 1, Route49_Pagoda_P5_Encuentro_Move_2
waitmovement 0x0
msgbox Route49_Pagoda_P5_Encuentro_Texto_3 MSGBOX_NPC
delay 15
msgbox Route49_Pagoda_P5_Encuentro_Texto_4 MSGBOX_NPC
delay 15
applymovement 1, Route49_Pagoda_P5_Encuentro_Move_3
waitmovement 0x0
msgbox Route49_Pagoda_P5_Encuentro_Texto_5 MSGBOX_NPC
delay 15
msgbox Route49_Pagoda_P5_Encuentro_Texto_6 MSGBOX_NPC
applymovement 1, Route49_Pagoda_P5_Encuentro_Move_4
waitmovement 0x0
msgbox Route49_Pagoda_P5_Encuentro_Texto_7 MSGBOX_NPC
applymovement 1, Route49_Pagoda_P5_Encuentro_Move_5
waitmovement 0x0
msgbox Route49_Pagoda_P5_Encuentro_Texto_8 MSGBOX_NPC
applymovement 1, Route49_Pagoda_P5_Encuentro_Move_4
waitmovement 0x0
msgbox Route49_Pagoda_P5_Encuentro_Texto_9 MSGBOX_NPC
applymovement 1, Route49_Pagoda_P5_Encuentro_Move_6
waitmovement 0x0
msgbox Route49_Pagoda_P5_Encuentro_Texto_10 MSGBOX_NPC
applymovement 1, Route49_Pagoda_P5_Encuentro_Move_7
waitmovement 0x0
msgbox Route49_Pagoda_P5_Encuentro_Texto_11 MSGBOX_NPC
applymovement 1, Route49_Pagoda_P5_Encuentro_Move_8
waitmovement 0x0
msgbox Route49_Pagoda_P5_Encuentro_Texto_12 MSGBOX_NPC
applymovement 1, Route49_Pagoda_P5_Encuentro_Move_5
waitmovement 0x0
msgbox Route49_Pagoda_P5_Encuentro_Texto_13 MSGBOX_NPC
setflag FLAG_UNUSED_0x267
fadescreen 1
delay 20
removeobject 1
fadescreen 0
clearflag FLAG_UNUSED_0x26A
setvar VAR_VERDANTURF_TOWN_STATE, 10
release
end

Route49_Pagoda_P5_Encuentro_Move_8:
walk_in_place_right
step_end

Route49_Pagoda_P5_Encuentro_Move_7:
walk_slow_right
step_end

Route49_Pagoda_P5_Encuentro_Move_6:
walk_slow_left
step_end

Route49_Pagoda_P5_Encuentro_Move_5:
face_up
step_end

Route49_Pagoda_P5_Encuentro_Move_4:
walk_in_place_down
step_end

Route49_Pagoda_P5_Encuentro_Move_3:
walk_in_place_left
step_end

Route49_Pagoda_P5_Encuentro_Move_2:
walk_slow_down
step_end

Route49_Pagoda_P5_Encuentro_Move_1:
delay_8
face_down
step_end

Route49_Pagoda_P5_Encuentro_Texto_1:
	.string "Well, well, well, young man. You really\n"
	.string "took your adventure seriously and made\l"
	.string "the most of it.$"

Route49_Pagoda_P5_Encuentro_Texto_2:
	.string "Don't you remember me? I am the elder of\n"
	.string "SPROUT TOWER.$"

Route49_Pagoda_P5_Encuentro_Texto_3:
	.string "Long ago, the masters of each tower in\n"
	.string "JOHTO used to visit this place, as I did\l"
	.string "in my youth. That tradition, I fear, will\l"
	.string "be lost. Most sages are barely aware\l"
	.string "that it exists, let alone the rest of\l"
	.string "the citizens. The gap between this\l"
	.string "JOHTO and the current one is too wide,\l"
	.string "and it's not just because of the\l"
	.string "mountain that separates them.$"

Route49_Pagoda_P5_Encuentro_Texto_4:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

Route49_Pagoda_P5_Encuentro_Texto_5:
	.string "It was here that I was able to enjoy a\n"
	.string "long rest, and as a result, my\l"
	.string "BELLSPROUT surpassed the limits that\l"
	.string "training was supposed to allow.$"

Route49_Pagoda_P5_Encuentro_Texto_6:
	.string "But that's not a quality I discovered;\n"
	.string "that quality first manifested itself\l"
	.string "here.$"

Route49_Pagoda_P5_Encuentro_Texto_7:
	.string "The reason why they worship DUNSPARCE\n"
	.string "in DUN TOWER isn't its extreme rarity or\l"
	.string "its mediocrity in battle. These\l"
	.string "qualities have made it go unnoticed by\l"
	.string "practically the entire JOHTO region.$"

Route49_Pagoda_P5_Encuentro_Texto_8:
	.string "The own physiology of the POKÉMON is\n"
	.string "doomed to mediocrity. But there was\l"
	.string "one… who managed to turn all that to\l"
	.string "the opposite extreme. What was\l"
	.string "supposed to be only served as fuel for\l"
	.string "it to rebel against its own destiny.$"

Route49_Pagoda_P5_Encuentro_Texto_9:
	.string "And here comes the most impressive\n"
	.string "part: not only could it push its\l"
	.string "training to the limit, as few have\l"
	.string "managed. Its overwhelming desire to\l"
	.string "break free from its form also led it to\l"
	.string "modify its BASE STATS, becoming\l"
	.string "something that no one, not even the\l"
	.string "gods of the POKÉMON WORLD, could\l"
	.string "foresee or control.$"

Route49_Pagoda_P5_Encuentro_Texto_10:
	.string "The rest is history, DUN TOWER has\n"
	.string "influenced countless generations until\l"
	.string "now. The phenomenon of the DEEP BOND in\l"
	.string "JOHTO might just be an extension, an\l"
	.string "echo of that initial action through\l"
	.string "which that DUNSPARCE changed\l"
	.string "radically.$"

Route49_Pagoda_P5_Encuentro_Texto_11:
	.string "But the GRAND MASTER surely can\n"
	.string "explain this much better. There are\l"
	.string "many things here that we will never\l"
	.string "fully understand.$"

Route49_Pagoda_P5_Encuentro_Texto_12:
	.string "Farewell, {PLAYER}. I only came here\n"
	.string "to leave my beloved BELLSPROUT and my\l"
	.string "best POKÉMON in this place. A new era\l"
	.string "begins for me, one that is more\l"
	.string "contemplative.$"

Route49_Pagoda_P5_Encuentro_Texto_13:
	.string "Who knows, maybe I can advise another\n"
	.string "trainer as extraordinary as you again.\l"
	.string "But honestly… I doubt it.$"
