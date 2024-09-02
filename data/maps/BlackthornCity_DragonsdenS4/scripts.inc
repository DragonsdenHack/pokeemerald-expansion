BlackthornCity_DragonsdenS4_MapScripts::
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BlackthornCity_DragonsdenS4_OnWarp
	.byte 0

BlackthornCity_DragonsdenS4_OnWarp:
map_script_2 VAR_UNUSED_0x40F7, 174, DragonsdenS4_1
	.2byte 0

DragonsdenS4_1::
setobjectsubpriority 2, MAP_BLACKTHORN_CITY_DRAGONSDEN_S4, 4 
end



DragonsdenS4_3::
end



DragonsdenS4_5::
end



DragonsdenS4_8::
end



DragonsdenS4_EventScript_Sabio::
	trainerbattle_single TRAINER_TRAVIS, DragonsdenS4_Text_SabioIntro, DragonsdenS4_Text_SabioDefeated
	msgbox DragonsdenS4_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon::
lock
faceplayer
applymovement OBJ_EVENT_ID_PLAYER, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_1
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_2
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_4 MSGBOX_AUTOCLOSE
playse 414
delay 40
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_2
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_SALAZAR, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_7
applymovement OBJ_EVENT_ID_PLAYER, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_1
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_8 MSGBOX_AUTOCLOSE
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_9 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_OBTAIN_BADGE
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_9.1 MSGBOX_DEFAULT
waitfanfare
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_9.2 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_DREEPY, 25, ITEM_NONE
waitfanfare
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_11 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_3
applymovement 1, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_4
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_12 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN
addobject 2
applymovement 2, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_5
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_13 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_6
applymovement 1, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_7
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_15 MSGBOX_AUTOCLOSE
playse SE_BALL_THROW
applymovement 2, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_8
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_16 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_3
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_17 MSGBOX_AUTOCLOSE
applymovement 2, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_4
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_18 MSGBOX_AUTOCLOSE
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_19 MSGBOX_AUTOCLOSE
applymovement 2, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_1
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_9
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_21 MSGBOX_AUTOCLOSE
delay 20
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_22 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_3
waitmovement 0x0
applymovement 1, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_10
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_23 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_10
applymovement 2, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_11
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_24 MSGBOX_AUTOCLOSE
applymovement 2, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_12
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_25 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN
fadescreen 1
delay 20
removeobject 2
fadescreen 0
delay 15
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_26 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_13
applymovement 1, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_14
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_27 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_1.1
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_11.1 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM99
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_11.2 MSGBOX_DEFAULT
waitfanfare
delay 10
applymovement 1, BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_1.1
waitmovement 0x0
msgbox BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_28 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
setflag FLAG_SYS_CAVE_SHIP
fadescreen 1
delay 20
removeobject 1
fadescreen 0
setvar VAR_UNUSED_0x40F7, 174
release
end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_11.2:
.string "{PLAYER} obtained the TM99\n"
	.string "DRAGON PULSE from the DRAGON M.!!$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_11.1:
	.string "I was about to give you this before\n"
	.string "that lunatic interrupted us.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_1:
.string "DRAGON.M.: {PLAYER}!\n"
	.string "You've come!$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_2:
	.string "This is the real DRAGON'S DEN, a\n"
	.string "sanctuary where we pay devotion to\l"
	.string "this sacred TYPE.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_3:
	.string "DRAGONITE was considered by many to be\n"
	.string "the most powerful POKÉMON in KANTO, a\l"
	.string "NON-LEGENDARY with more power than\l"
	.string "the rest. However, as you understand,\l"
	.string "the world is vast and holds many\l"
	.string "secrets, and the truth is that there\l"
	.string "are DRAGONs that would make DRAGONITE\l"
	.string "look like child's play.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_4:
.string "…$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_5:
	.string "If I'm not wrong, you've managed to\n"
	.string "defeat seven JOHTO GYM LEADERS,\l"
	.string "despite the chaotic situation of the\l"
	.string "GYMS. I see good intentions in you,\l"
	.string "{PLAYER}. Even with the tough\l"
	.string "decisions GIOVANNI espoused in\l"
	.string "GOLDENROD, I know you want a good\l"
	.string "future for KANTO and JOHTO.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_6:
	.string "The passing of the torch is upon us.\n"
	.string "Unfortunately, technology is degrading\l"
	.string "the true art of POKÉMON training. You\l"
	.string "are an exception. You have not let\l"
	.string "yourself be influenced by the times\l"
	.string "despite your position. That's why… I\l"
	.string "must ascertain your readiness!$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_7:
	.string "Magnificent! It was like a return\n"
	.string "to the old days of JOHTO.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_8:
	.string "A TRAINER like you only appears once\n"
	.string "every few decades. That's how long it's\l"
	.string "been-ages since my singular DRAGONITE\l"
	.string "faced a challenge like this. The way\l"
	.string "you've been improving and building your\l"
	.string "team is admirable.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_9:
	.string "Take this POKÉMON. It is one of our most\n"
	.string "jealously guarded DRAGONs.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_9.1:
	.string "Here is the\n"
	.string "RISINGBADGE.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_9.2:
	.string "Take this POKÉMON, it is one of our most\n"
	.string "jealously guarded dragons.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_10:
.string "YOU OBTAINED A LV.25 DREEPY!!$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_11:
	.string "DRAGAPULT is a full-fledged\n"
	.string "PSEUDO-LEGENDARY, boasting the\l"
	.string "highest SPEED. Only the most expert\l"
	.string "monks and sages of JOHTO possess one.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_12:
	.string "????: DRAGAPULT? Do you think\n"
	.string "{PLAYER} would stand any chance\l"
	.string "using that?$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_13:
	.string "ZEUS: Though I understand it's the\n"
	.string "utmost mortals like you can aspire to.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_14:
	.string "DRAGON M.: It was you who coldly\n"
	.string "captured HO-OH. You should be ashamed\l"
	.string "to cage something so pure, taking\l"
	.string "advantage of the great battle that the\l"
	.string "ECRUTEAK MASTER and {PLAYER} had.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_15:
	.string "ZEUS: The foremost matter is that\n"
	.string "HO-OH and LUGIA are both in my\l"
	.string "possession. What's essential is the\l"
	.string "result. And now… At long last… KYUREM\l"
	.string "too…$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_16:
	.string "(ZEUS seized KYUREM from\n"
	.string "the DRAGON MASTER.)$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_17:
	.string "DRAGON M.: What? What are you\n"
	.string "going to do with that POKÉMON?$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_18:
	.string "ZEUS: Don't be so coy, crone. You know\n"
	.string "of every matter regarding DRAGON\l"
	.string "TYPEs. I'm certain you're aware of the\l"
	.string "legend of the ORIGINAL DRAGON.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_19:
	.string "DRAGON M.: It's not a legend-that\n"
	.string "POKÉMON existed. It was real.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_20:
	.string "ZEUS: Of course. PRIMAL RAYQUAZA may\n"
	.string "be regarded as the mightiest DRAGON,\l"
	.string "but… It's unrelated to that POKÉMON.\l"
	.string "That POKÉMON is the true creator of all.\l"
	.string "Any comparison is moot. Any debate\l"
	.string "regarding its scale is meaningless.\l"
	.string "After all, the ORIGINAL DRAGON is one\l"
	.string "and all. Its scope is without measure.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_21:
	.string "DRAGON M.: The ORIGINAL DRAGON\n"
	.string "represents the point of\l"
	.string "balance-perfection. You will never be\l"
	.string "able to summon it; you need the other\l"
	.string "two DRAGONs. KYUREM is just the empty\l"
	.string "shell I was once assigned to protect in\l"
	.string "case someone like you got this far.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_22:
.string "ZEUS: {PAUSE 20}…{PAUSE 20}\n"
	.string "{PAUSE 20}…{PAUSE 20}\l"
	.string "RESHIRAM and ZEKROM\l"
	.string "also belong to me.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_23:
.string "DRAGON M.: It can't be!$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_24:
	.string "ZEUS: HO-OH and LUGIA open the gate…\n"
	.string "Then I merely need the keys, and all\l"
	.string "within that final chamber shall revert\l"
	.string "to their origin.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_25:
	.string "ZEUS: I apologize, {PLAYER}. There\n"
	.string "will be no battle this time. A prior\l"
	.string "engagement requires my utmost now. Our\l"
	.string "rivalry can no longer be. After all, the\l"
	.string "union of the three DRAGONs shall draw\l"
	.string "an infinite boundary between my team\l"
	.string "and all others. “Competition” shall no\l"
	.string "longer apply to it.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_26:
	.string "DRAGON M.: This… This… is\n"
	.string "impossible-that fool doesn't know what\l"
	.string "he's about to awaken.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_27:
	.string "{PLAYER}! The RUINS OF ALPH! He\n"
	.string "mentioned LUGIA and HO-OH; he knew\l"
	.string "everything from the beginning. He knows\l"
	.string "he needed those two LEGENDARIES to\l"
	.string "enter deep into the RUINS OF ALPH. It's\l"
	.string "the only place where he can unite the\l"
	.string "three DRAGONs.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_28:
	.string "There's no time, {PLAYER}. We must\n"
	.string "heal our POKÉMON and get there as soon\l"
	.string "as possible. If your entire\l"
	.string "organization shows up, all the better;\l"
	.string "we must stop him at all costs.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_1.1:
walk_in_place_left
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_1:
face_up
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_2:
walk_in_place_down
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_3:
emote_exclamation_mark
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_4:
face_down
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_5:
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_6:
walk_right
walk_in_place_left
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_7:
walk_slow_down
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_8:
walk_in_place_up
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_9:
walk_slow_up
walk_slow_up
walk_in_place_up
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_10:
walk_fast_down
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_11:
walk_down
walk_left
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_12:
face_right
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_13:
face_left
step_end

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Move_14:
walk_fast_down
walk_in_place_right
step_end
