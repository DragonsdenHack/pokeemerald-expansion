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
.string "{PLAYER} obtained TM99 DRAGON PULSE\n"
	.string "from the DRAGON.M!!$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_11.1:
	.string "I was about to give you this, before\n"
	.string "that lunatic interrupted us.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_1:
.string "DRAGON.M: {PLAYER}!\n"
	.string "You've come!$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_2:
	.string "This is the real DRAGON'S DEN, a\n"
	.string "sanctuary where we pay devotion to\l"
	.string "this sacred type.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_3:
	.string "DRAGONITE was considered by many to be\n"
	.string "the most powerful POKÉMON in KANTO, a\l"
	.string "NON-LEGENDARY with more power than\l"
	.string "the rest. However, as you understand,\l"
	.string "the world is vast and holds many\l"
	.string "secrets, and the truth is that there\l"
	.string "are dragons that would make DRAGONITE\l"
	.string "look like a child's play.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_4:
.string "…$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_5:
	.string "If I'm not wrong, you've managed to\n"
	.string "defeat 7 JOHTO GYM LEADERS, despite\l"
	.string "the chaotic situation of the GYMS. I\l"
	.string "see good intentions in you, {PLAYER},\l"
	.string "even with the tough decisions GIOVANNI\l"
	.string "exposed in GOLDENROD, I know you want a\l"
	.string "good future for KANTO and JOHTO.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_6:
	.string "The passing of the torch is upon us,\n"
	.string "unfortunately, technology is degrading\l"
	.string "the true art of POKÉMON training. You\l"
	.string "are an exception, you have not let\l"
	.string "yourself be influenced by the times\l"
	.string "despite your position. That's why{PAUSE 25}…{PAUSE 25} I\l"
	.string "must ascertain your readiness!$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_7:
	.string "Magnificent, it was like a return to the\n"
	.string "old days of JOHTO.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_8:
	.string "A TRAINER like you only appears once\n"
	.string "every few decades, that's how long it's\l"
	.string "been ages since my singular DRAGONITE\l"
	.string "faced a challenge like this. The way\l"
	.string "you've been improving and building your\l"
	.string "team is admirable.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_9:
	.string "It is an honor for me to bestow our\n"
	.string "badge upon the the new generation\l"
	.string "champion.$"

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
	.string "against that?$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_13:
	.string "ZEUS: While I understand it's the\n"
	.string "utmost mortals like you can aspire to.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_14:
	.string "DRAGON.M: It was you who coldly\n"
	.string "captured HO-OH, you should be ashamed\l"
	.string "to cage something so pure, taking\l"
	.string "advantage of the great battle that\l"
	.string "ECRUTEAK M. and {PLAYER} had.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_15:
	.string "ZEUS: The important thing is that HO-OH\n"
	.string "now belongs to me, as well as LUGIA,\l"
	.string "what matters is the result. And now{PAUSE 15}…{PAUSE 15} At\l"
	.string "last{PAUSE 15}…{PAUSE 15} KYUREM too…$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_16:
	.string "(ZEUS seized KYUREM from M.DRAGON).$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_17:
	.string "DRAGON.M: What? What are you going to\n"
	.string "do with that POKÉMON?$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_18:
	.string "ZEUS: Don't play dumb, old man. You know\n"
	.string "all about the DRAGON TYPE, I'm sure\l"
	.string "you're also familiar with the legend of\l"
	.string "the ORIGINAL DRAGON.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_19:
	.string "DRAGON.M: It's not a legend, that\n"
	.string "POKÉMON existed, it was real.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_20:
	.string "ZEUS: That's right, PRIMAL RAYQUAZA is\n"
	.string "considered the most powerful DRAGON,\l"
	.string "but{PAUSE 15}…{PAUSE 15} Nothing to do with that POKÉMON,\l"
	.string "that POKÉMON{PAUSE 15}…{PAUSE 15} is the true creator of\l"
	.string "everything, so powerful that it's not\l"
	.string "even worth comparing to the rest. It\l"
	.string "doesn't enter the debate of the best\l"
	.string "POKÉMON because the ORIGINAL DRAGON\l"
	.string "is everything, its scope is\l"
	.string "immeasurable.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_21:
	.string "DRAGON.M: The ORIGINAL DRAGON\n"
	.string "represents the point of balance,\l"
	.string "perfection. You will never be able to\l"
	.string "summon it; you need the other two\l"
	.string "dragons. KYUREM is just the empty shell\l"
	.string "I was once assigned to protect in case\l"
	.string "someone like you got this far.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_22:
.string "ZEUS: {PAUSE 20}…{PAUSE 20}\n"
	.string "{PAUSE 20}…{PAUSE 20}\l"
	.string "RESHIRAM and ZEKROM\l"
	.string "also belong to me.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_23:
.string "DRAGON.M: It can't be!$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_24:
	.string "ZEUS: HO-OH and LUGIA allow entry…\n"
	.string "Afterward, I only need the right pieces,\l"
	.string "and everything in the last room will\l"
	.string "regain its original form.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_25:
	.string "ZEUS: I'm sorry, {PLAYER}, there will\n"
	.string "be no battle this time. As you'll\l"
	.string "understand, I have more important\l"
	.string "things to attend to. I'm afraid our\l"
	.string "rivalry ends here. After uniting the\l"
	.string "three dragons, the word 'competition'\l"
	.string "will lose all its meaning against my\l"
	.string "POKÉMON team.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_26:
	.string "DRAGON.M: This{PAUSE 20}…{PAUSE 20} This{PAUSE 20}…{PAUSE 20} is impossible,\n"
	.string "that fool doesn't know what he's about\l"
	.string "to awaken.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_27:
	.string "{PLAYER}! RUINS OF ALPH! He\n"
	.string "mentioned LUGIA and HO-OH; he knew\l"
	.string "everything from the beginning. He knows\l"
	.string "he needed those two LEGENDARIES to\l"
	.string "enter deep into the RUINS OF ALPH. It's\l"
	.string "the only place where he can unite the 3\l"
	.string "dragons.$"

BlakthornCity_DragonsdenS4_Combate_MaestroDragon_Texto_28:
	.string "There's no time, {PLAYER}. We must\n"
	.string "heal our POKÉMON team and get there as\l"
	.string "soon as possible. If your entire\l"
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
