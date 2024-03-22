MtMoon_3F_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, MtMoon_3F_OnResume
	.byte 0

MtMoon_3F_OnResume:
	call MtMoon_3F_SetupEscapeWarp
	end

MtMoon_3F_SetupEscapeWarp::
	setescapewarp MAP_ROUTE4, 19, 6
	return

MtMoon3F_2::
end



MtMoon3F_3::
end



MtMoon3F_4::
end



MtMoon3F_5::
lock     
faceplayer     
msgbox MtMoon3F_Text_5, MSGBOX_DEFAULT
release     
end

MtMoon3F_Text_5:
.string "Nothing here, comrade!$"



MtMoon3F_6::
lock     
faceplayer     
msgbox MtMoon3F_Text_6, MSGBOX_DEFAULT
release     
end

MtMoon3F_Text_6:
.string "ANDRA: Looks like there's nothing\n"
	.string "important over here. Maybe in those\l"
	.string "stairs that lead to the other entrance…$"



MtMoon3F_7::
end



MtMoon3F_9::
lock     
faceplayer    
compare VAR_UNUSED_0x40F7, 12
goto_if_gt MtMoon3F_9_2
msgbox MtMoon3F_Text_9, MSGBOX_AUTOCLOSE
end

MtMoon3F_9_2::
lock
faceplayer
msgbox MtMoon3F_Text_9_2, MSGBOX_AUTOCLOSE
release
end

MtMoon3F_Text_9:
.string "There he is, the one that has been\n"
	.string "causing so much trouble. I've tried to\l"
	.string "stop him but y team has been crushed.\l"
	.string "Now I can only stay right here and\l"
	.string "watch…$"


MtMoon3F_Text_9_2:
.string "Wow! I don't know what you just told him\n"
	.string "but he left without the FOSSIL! Now\l"
	.string "PETREL will reward us even more!$"

MtMoon3F_10::
end



MtMoon3F_11::
lock     
faceplayer  
compare VAR_UNUSED_0x40F7, 14
goto_if_gt MtMoon3F_11_3  
compare VAR_UNUSED_0x40F7, 13
goto_if_gt MtMoon3F_11_2
msgbox MtMoon3F_Text_11, MSGBOX_AUTOCLOSE
end

MtMoon3F_11_2::
lock
faceplayer
delay 15
playse SE_PIN
applymovement 11, MtMoon3F_9_2_move1
playse MUS_OBTAIN_ITEM
msgbox MtMoon3F_Text_11_1, MSGBOX_NPC
waitfanfare
msgbox MtMoon3F_Text_11_2, MSGBOX_NPC
playse SE_POKENAV_ON
delay 20
msgbox MtMoon3F_Text_11_3, MSGBOX_NPC
playse SE_POKENAV_OFF
delay 20
msgbox MtMoon3F_Text_11_4, MSGBOX_NPC
setvar VAR_UNUSED_0x40F7, 15
release
end

MtMoon3F_11_3::
lock
faceplayer
msgbox MtMoon3F_Text_11_5, MSGBOX_NPC
release
end


MtMoon3F_Text_11:
.string "Stop wasting time and keep searching.\n"
	.string "Can't you see I'm already looking around\l"
	.string "here?$"

MtMoon3F_Text_11_1:
.string "{PLAYER} showed the FOSSIL to HIGH\n"
	.string "RANK FRANK!$"

MtMoon3F_Text_11_2:
.string "Mmm… Maybe you're not as useless as I\n"
	.string "thought, adding this one we have 3\l"
	.string "FOSSILS, enough to wrap up the mission\l"
	.string "successfully.$"

MtMoon3F_Text_11_3:
.string "Calling up all MT. MOON mission GRUNTS!\n"
	.string "The mission is over. Come back to the\l"
	.string "gathering point!$"

MtMoon3F_Text_11_4:
.string "Perfect, I'm rushing the arrival time of\n"
	.string "the others so I may find another\l"
	.string "FOSSIL, get moving GRUNT, and be\l"
	.string "careful of what you carry.$"

MtMoon3F_Text_11_5:
.string "Come back now the the gathering point,\n"
	.string "GRUNT! You better don't make me repeat\l"
	.string "it!$"


MtMoon3F_9_2_move1:
emote_exclamation_mark
step_end



MtMoon_3F_Azul::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Azul_move1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 8, MtMoon_3F_Azul_move2
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_2, MSGBOX_AUTOCLOSE
applymovement 8, MtMoon_3F_Azul_move3
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_3, MSGBOX_AUTOCLOSE
applymovement 8, MtMoon_3F_Azul_move4
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 8, MtMoon_3F_Azul_move5
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Azul_move6
waitmovement 0x0
playse 527
msgbox MtMoon_3F_Azul_Text_4, MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Azul_Text_5, MSGBOX_AUTOCLOSE
delay 20
playse 528
applymovement 8, MtMoon_3F_Azul_move7
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
removeobject 8
fadeoutbgm 0
playse 500
setvar VAR_UNUSED_0x40F7, 13
release
end

MtMoon_3F_Azul_2::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Azul_move1.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 8, MtMoon_3F_Azul_move2.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_2, MSGBOX_AUTOCLOSE
applymovement 8, MtMoon_3F_Azul_move3.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_3, MSGBOX_AUTOCLOSE
applymovement 8, MtMoon_3F_Azul_move4.1
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 8, MtMoon_3F_Azul_move5
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Azul_move6
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_4, MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Azul_Text_5, MSGBOX_AUTOCLOSE
delay 20
applymovement 8, MtMoon_3F_Azul_move7
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
removeobject 8
fadeoutbgm 0
playse 500
setvar VAR_UNUSED_0x40F7, 13
release
end

MtMoon_3F_Azul_3::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Azul_move1.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 8, MtMoon_3F_Azul_move2.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_2, MSGBOX_AUTOCLOSE
applymovement 8, MtMoon_3F_Azul_move3.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_3, MSGBOX_AUTOCLOSE
applymovement 8, MtMoon_3F_Azul_move4
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 8, MtMoon_3F_Azul_move5
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Azul_move6
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_4, MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Azul_Text_5, MSGBOX_AUTOCLOSE
delay 20
applymovement 8, MtMoon_3F_Azul_move7
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
removeobject 8
fadeoutbgm 0
playse 500
setvar VAR_UNUSED_0x40F7, 13
release
end

MtMoon_3F_Azul_4::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Azul_move1.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 8, MtMoon_3F_Azul_move2.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_2, MSGBOX_AUTOCLOSE
applymovement 8, MtMoon_3F_Azul_move3.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_3, MSGBOX_AUTOCLOSE
applymovement 8, MtMoon_3F_Azul_move4.1
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 8, MtMoon_3F_Azul_move5
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Azul_move6
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_4, MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Azul_Text_5, MSGBOX_AUTOCLOSE
delay 20
applymovement 8, MtMoon_3F_Azul_move7
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
removeobject 8
fadeoutbgm 0
playse 500
setvar VAR_UNUSED_0x40F7, 13
release
end

MtMoon_3F_Azul_Text_1:
.string "????: Well, once again, not an OLD\n"
	.string "AMBER. I will need to be satisfied with\l"
	.string "both HELIX and DOME FOSSILS. What a\l"
	.string "pity, AERODACTYL would be a fine\l"
	.string "addition to my team.$"

MtMoon_3F_Azul_Text_2:
.string "Another ROCKET? You appear from\n"
	.string "everywhere, but I don't want to waste\l"
	.string "any more time defeating you too. With\l"
	.string "your level I can't even warm up properly.$"

MtMoon_3F_Azul_Text_3:
.string "Lucky you, I already have a DOME FOSSIL\n"
	.string "and I won't carry it. Take it if you want,\l"
	.string "also, who wants an OMASTAR or a\l"
	.string "KABUTOPS when you can get a\l"
	.string "BLASTOISE?$"

MtMoon_3F_Azul_Text_4:
.string "What? Are you telling me that I am\n"
	.string "arrogant and I am guilty of excessive\l"
	.string "confidence because I'm letting the\l"
	.string "competition stay unharmed?$"

MtMoon_3F_Azul_Text_5:
.string "I don't care about how much you can\n"
	.string "make with those FOSSILS, ROCKET, the\l"
	.string "only thing I care about is building a\l"
	.string "strong, balanced and powerful team,\l"
	.string "which is priceless.$"

MtMoon_3F_Azul_move1:
walk_in_place_right
step_end

MtMoon_3F_Azul_move1.1:
walk_in_place_up
step_end

MtMoon_3F_Azul_move2:
face_left
emote_exclamation_mark
step_end

MtMoon_3F_Azul_move2.1:
face_down
emote_exclamation_mark
step_end

MtMoon_3F_Azul_move3:
walk_in_place_right
walk_in_place_left
step_end

MtMoon_3F_Azul_move3.1:
walk_in_place_right
walk_in_place_down
step_end

MtMoon_3F_Azul_move4:
walk_left
walk_down
walk_down
walk_down
step_end

MtMoon_3F_Azul_move4.1:
walk_down
walk_down
walk_down
step_end

MtMoon_3F_Azul_move5:
emote_exclamation_mark
walk_in_place_down
face_up
step_end

MtMoon_3F_Azul_move6:
face_down
step_end

MtMoon_3F_Azul_move7:
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

MtMoon_3F_Fosil::
removeobject 10
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
playfanfare MUS_OBTAIN_ITEM
msgbox MtMoon_3F_Fosil_text_1 MSGBOX_DEFAULT
waitfanfare
msgbox MtMoon_3F_Fosil_text_2 MSGBOX_DEFAULT
setvar VAR_UNUSED_0x40F7, 14
release
end

MtMoon_3F_Fosil_text_1:
.string "YOU GOT A DOME FOSSIL!!$"

MtMoon_3F_Fosil_text_2:
.string "(The DOME FOSSIL is mine, i should\n"
	.string "inform my superior).$"



MtMoon_3F_Miguel_Rojo::
lockall
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move1
waitmovement 0
addobject 13
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_2
applymovement 13, MtMoon_3F_Miguel_Rojo_move2
waitmovement 0
delay 10
msgbox MtMoon_3F_Miguel_Rojo_text_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 13, MtMoon_3F_Miguel_Rojo_move3
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, MtMoon_3F_Miguel_Rojo_move4
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, MtMoon_3F_Miguel_Rojo_move5
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_4 MSGBOX_AUTOCLOSE
applymovement 13, MtMoon_3F_Miguel_Rojo_move6
waitmovement 0
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
addobject 12
delay 10
applymovement 13, MtMoon_3F_Miguel_Rojo_move7
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_5 MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Miguel_Rojo_text_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq MtMoon_3F_Miguel_Rojo_2
goto MtMoon_3F_Miguel_Rojo_3

MtMoon_3F_Miguel_Rojo_3::
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
msgbox MtMoon_3F_Miguel_Rojo_text_7 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move8
waitmovement 0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move8.9
waitmovement 0
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
addobject 1
delay 10
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move9
applymovement 13, MtMoon_3F_Miguel_Rojo_move10
waitmovement 0
playse 495
msgbox MtMoon_3F_Miguel_Rojo_text_8 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
setflag FLAG_HIDE_UNION_ROOM_PLAYER_2
trainerbattle_no_intro TRAINER_KEVIN, MtMoon_3F_Miguel_Rojo_text_9
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move11
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_10 MSGBOX_AUTOCLOSE
playse SE_POKENAV_ON
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move7
waitmovement 0
playse SE_PIN
applymovement 13, MtMoon_3F_Miguel_Rojo_move3
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_11 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move12
waitmovement 0
delay 40
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_3
addobject 20
applymovement 20, MtMoon_3F_Miguel_Rojo_move13
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 16
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
trainerbattle_no_intro TRAINER_ROJO_1, MtMoon_3F_Miguel_Rojo_text_13
goto MtMoon_3F_Miguel_Rojo_3
end

MtMoon_3F_Miguel_Rojo_move8.9:
walk_in_place_up
step_end

MtMoon_3F_Miguel_Rojo_2::
msgbox MtMoon_3F_Miguel_Rojo_text_14 MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Miguel_Rojo_text_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq MtMoon_3F_Miguel_Rojo_2
goto MtMoon_3F_Miguel_Rojo_3
release
end

MtMoon_3F_Miguel_Rojo_4::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move1.1
waitmovement 0
goto MtMoon_3F_Miguel_Rojo
release
end

MtMoon_3F_Miguel_Rojo_text_1:
.string "Lost something here, ROCKET?\n"
	.string "...\l"
	.string "...$"

MtMoon_3F_Miguel_Rojo_text_2:
.string "Really? Are you collecting FOSSILS and\n"
	.string "you have one right here?$"

MtMoon_3F_Miguel_Rojo_text_3:
.string "(These ROCKET are known for their\n"
	.string "weakness and foolishness. If I manage\l"
	.string "it well I may get away with two\l"
	.string "FOSSILS).$"

MtMoon_3F_Miguel_Rojo_text_4:
.string "Hey, ROCKET, I'm offering you a deal.$"

MtMoon_3F_Miguel_Rojo_text_5:
.string "What you can see over there is an HELIX\n"
	.string "FOSSIL, which contains an OMANYTE, an\l"
	.string "ancestral POKÉMON that lived 300\l"
	.string "million years ago. I bet my FOSSIL in a\l"
	.string "battle against you and yours. Whoever\l"
	.string "wins will get both FOSSILS.l"
	.string "...\l"
	.string "...$"

MtMoon_3F_Miguel_Rojo_text_6:
.string "What do you say? Do we have a deal?$"

MtMoon_3F_Miguel_Rojo_text_7:
.string "I wouldn't expect less of a ROCKET. Alea\n"
	.string "jacta est. Whoever wins, will get both\l"
	.string "FOSSILS, now leave your in front of mine\l"
	.string "to seal the deal.$"

MtMoon_3F_Miguel_Rojo_text_8:
.string "You have committed a big mistake, my\n"
	.string "POKÉMON will never fail against a\l"
	.string "mediocre GRUNT like you. Prepare to lose\l"
	.string "the DOME FOSSIL, how great, thanks to\l"
	.string "you I'll have both DOME and HELIX\l"
	.string "FOSSiLS!$"

MtMoon_3F_Miguel_Rojo_text_9:
	.string "This was supposed to be under control!$"

MtMoon_3F_Miguel_Rojo_text_10:
.string "Grr… You ain't a normal ROCKET, I hate\n"
	.string "when someone outstand stadistics.\l"
	.string "About the FOSSILS…$"

MtMoon_3F_Miguel_Rojo_text_11:
.string "Calling up {PLAYER}!! An even more\n"
	.string "powerful trainer has showed up. He has\l"
	.string "defeated us with no effort and he's\l"
	.string "moving towards you. Protect the FOSSIL\l"
	.string "with your live. Again. Protect the\l"
	.string "FOSSIL with your live. It's an order!$"

MtMoon_3F_Miguel_Rojo_text_12:
.string "????: ...$"

MtMoon_3F_Miguel_Rojo_text_13:
.string "...$"

MtMoon_3F_Miguel_Rojo_text_14:
.string "I thought you ROCKET wouldn't beware\n"
	.string "risk and bets, are you betraying your\l"
	.string "criminal nature? C'mon, think it over\l"
	.string "again.$"

MtMoon_3F_Miguel_Rojo_move1:
walk_in_place_up
step_end

MtMoon_3F_Miguel_Rojo_move1.1:
walk_left
face_up
step_end

MtMoon_3F_Miguel_Rojo_move2:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_in_place_down
delay_4
step_end

MtMoon_3F_Miguel_Rojo_move3:
emote_exclamation_mark
step_end

MtMoon_3F_Miguel_Rojo_move4:
face_up
step_end

MtMoon_3F_Miguel_Rojo_move5:
face_down
walk_in_place_down
step_end

MtMoon_3F_Miguel_Rojo_move6:
walk_right
walk_up
walk_in_place_up
step_end

MtMoon_3F_Miguel_Rojo_move7:
walk_down
step_end

MtMoon_3F_Miguel_Rojo_move8:
walk_up
walk_up
walk_up
walk_up
walk_in_place_up
step_end

MtMoon_3F_Miguel_Rojo_move9:
walk_down
walk_in_place_right
step_end

MtMoon_3F_Miguel_Rojo_move10:
face_left
step_end

MtMoon_3F_Miguel_Rojo_move11:
face_right
step_end

MtMoon_3F_Miguel_Rojo_move12:
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_left
walk_left
walk_in_place_down
step_end

MtMoon_3F_Miguel_Rojo_move13:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_in_place_up
step_end

MtMoon_3F_Pelea_Frank::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Pelea_Frank_move1
waitmovement 0
delay 10
playse SE_PIN
applymovement 14, MtMoon_3F_Pelea_Frank_move2
waitmovement 0
playse MUS_RG_ROCKET_HIDEOUT
waitfanfare
goto MtMoon_3F_Pelea_Frank_5

MtMoon_3F_Pelea_Frank_2::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Pelea_Frank_move1.1
waitmovement 0
delay 10
playse SE_PIN
applymovement 14, MtMoon_3F_Pelea_Frank_move2
waitmovement 0
playse MUS_RG_ROCKET_HIDEOUT
waitfanfare
goto MtMoon_3F_Pelea_Frank_5

MtMoon_3F_Pelea_Frank_3::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Pelea_Frank_move1.2
waitmovement 0
delay 10
playse SE_PIN
applymovement 14, MtMoon_3F_Pelea_Frank_move2.1
waitmovement 0
playse MUS_RG_ROCKET_HIDEOUT
waitfanfare
goto MtMoon_3F_Pelea_Frank_5

MtMoon_3F_Pelea_Frank_4::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Pelea_Frank_move1.3
waitmovement 0
delay 10
playse SE_PIN
applymovement 14, MtMoon_3F_Pelea_Frank_move2.1
waitmovement 0
playse MUS_RG_ROCKET_HIDEOUT
waitfanfare
goto MtMoon_3F_Pelea_Frank_5



MtMoon_3F_Pelea_Frank_5::
msgbox MtMoon_3F_Pelea_Frank_texto1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Pelea_Frank_move3
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 14, MtMoon_3F_Pelea_Frank_move4
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto3 MSGBOX_AUTOCLOSE
applymovement 17, MtMoon_3F_Pelea_Frank_move5
playse SE_PIN
applymovement 14, MtMoon_3F_Pelea_Frank_move6
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto4 MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Pelea_Frank_texto5 MSGBOX_AUTOCLOSE
delay 15
applymovement 14, MtMoon_3F_Pelea_Frank_move7
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto6 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Pelea_Frank_move3
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 14, MtMoon_3F_Pelea_Frank_move4
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto7 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 14, MtMoon_3F_Pelea_Frank_move8
waitmovement 0
playse 495
msgbox MtMoon_3F_Pelea_Frank_texto8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ALTORANGO, MtMoon_3F_Pelea_Frank_texto9
msgbox MtMoon_3F_Pelea_Frank_texto10 MSGBOX_AUTOCLOSE
applymovement 14, MtMoon_3F_Pelea_Frank_move9
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto11 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
fadescreen 1
delay 20
removeobject 16
removeobject 15
removeobject 14
removeobject 19
removeobject 18
fadescreen 0
delay 20
applymovement 17, MtMoon_3F_Pelea_Frank_move10
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto12 MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Pelea_Frank_texto13 MSGBOX_AUTOCLOSE
playse SE_POKENAV_ON
applymovement 17, MtMoon_3F_Pelea_Frank_move11
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto14 MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Pelea_Frank_texto15 MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Pelea_Frank_texto16 MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Pelea_Frank_texto17 MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Pelea_Frank_texto18 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
delay 20
applymovement 17, MtMoon_3F_Pelea_Frank_move12
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto19 MSGBOX_AUTOCLOSE
applymovement 17, MtMoon_3F_Pelea_Frank_move13
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto20 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
removeobject 17
fadescreen 0
setvar VAR_UNUSED_0x40F7, 18
setvar VAR_UNUSED_0x40FC, 1
release
end

MtMoon_3F_Pelea_Frank_texto1:
.string "H.R. FRANK; So you got guts to come\n"
	.string "back. You were given a mission,\l"
	.string "{PLAYER}: to protect the FOSSIL with\l"
	.string "your live, and you have failed\l"
	.string "thunderously, got anything to say\l"
	.string "about it?$"

MtMoon_3F_Pelea_Frank_texto2:
.string "...\n"
	.string "...\l"
	.string "...\l"
	.string "...$"

MtMoon_3F_Pelea_Frank_texto3:
.string "YOU HAD 2 FOSSILS IN YOUR POSSESSION!!\n"
	.string "And you got tricked by a newbie\l"
	.string "scientist to fall right after under a\l"
	.string "mysterious trainer!! Your incompetence\l"
	.string "is frustrating, I'm recommending PETREL\l"
	.string "your immediate termination, someone as\l"
	.string "incompetent as you doesn't deserve a\l"
	.string "place in this organization!$"

MtMoon_3F_Pelea_Frank_texto4:
.string "ANDRA: Sorry for interrupting, HR\n"
	.string "FRANK, but I have seen {PLAYER}\l"
	.string "fighting, and he isn't as weak as you\l"
	.string "think. While everyone that have fought\l"
	.string "against the mysterious trainer have\l"
	.string "lost almost immediately, it wouldn't be\l"
	.string "fair to punish just one of them, would\l"
	.string "it? Also, we have 2 FOSSILS, in the end\l"
	.string "it hasn't gone so bad.$"

MtMoon_3F_Pelea_Frank_texto5:
.string "H.R. FRANK: We ain't judging his level as\n"
	.string "a TRAINER, ANDRA, but his lack of\l"
	.string "cunning and intelligence in the moment\l"
	.string "to overcome the situation.$"

MtMoon_3F_Pelea_Frank_texto6:
.string "You should have taken the FOSSILS\n"
	.string "quickly and fled with an ESCAPE ROPE as\l"
	.string "soon as you received my message,\l"
	.string "instead of staying as a stupid to fight\l"
	.string "against a TRAINER that you were worn\l"
	.string "of his outstanding level. Furthermore\l"
	.string "you also disregarded that scientist\l"
	.string "that ended up tricking you. That rogue\l"
	.string "must have fled with one of the FOSSILS.\l"
	.string "You have ended up as the classroom\l"
	.string "foolest, {PLAYER}. Your negligence\l"
	.string "will cost us hundreds of thousands of\l"
	.string "POKÉ, got any idea of how many years\l"
	.string "of your wage is that?$"

MtMoon_3F_Pelea_Frank_texto7:
.string "H.R. FRANK: What? Are you telling me\n"
	.string "that ROCKET's honor code says that we\l"
	.string "shouldn't flinch never in front of the\l"
	.string "enemy, nor flee? And that will be seen\l"
	.string "as weakness and lack of values, and\l"
	.string "that we should have beaten that\l"
	.string "trainer all together?$"

MtMoon_3F_Pelea_Frank_texto8:
.string "H.R. FRANK: This is outrageous, I don't\n"
	.string "need that newbie that came out of\l"
	.string "nowhere to talk to me about the ROCKET\l"
	.string "honor code. You'll regret mentioning it,\l"
	.string "people like you need to be taught in the\l"
	.string "bad way! I'm not responsible of your\l"
	.string "TEAM after this!$"

MtMoon_3F_Pelea_Frank_texto9:
.string "Me? A HIGH RANK defeated by a mere\n"
	.string "GRUNT?$"

MtMoon_3F_Pelea_Frank_texto10:
.string "This is inadmissible…$"

MtMoon_3F_Pelea_Frank_texto11:
.string "Enough. The mission is over. The balance\n"
	.string "is of 2 FOSSILS, present yourselves in\l"
	.string "ROUTE 5 BASE to be held accountable\l"
	.string "with PETREL. Also you will be given your\l"
	.string "next mission. Smoke Bomb!!$"

MtMoon_3F_Pelea_Frank_texto12:
.string "ANDRA: Wow, have you seen that!? Every\n"
	.string "one is astonished, HIGH RANK FRANK is\l"
	.string "famous for being bloodthirsty and\l"
	.string "impatience with newbies, but you faced\l"
	.string "him with no regrets and maintained\l"
	.string "steady your position!$"

MtMoon_3F_Pelea_Frank_texto13:
.string "I didn't cross paths with that\n"
	.string "mysterious TRAINER, did he have a\l"
	.string "CHARMELEON? It seems that there are\l"
	.string "some really strong people around here,\l"
	.string "we must train so that that kid doesn't\l"
	.string "defeat us as easy as today. What will\l"
	.string "PETREL say? I don't think that FRANK\l"
	.string "will speak good things of you in his\l"
	.string "report, you should go quickly to the\l"
	.string "quarters and tell him your version.$"

MtMoon_3F_Pelea_Frank_texto14:
	.string "PETREL: Calling up GRUNT ANDRA.$"

MtMoon_3F_Pelea_Frank_texto15:
	.string "ANDRA: Right here, sir. What is it?$"

MtMoon_3F_Pelea_Frank_texto16:
.string "PETREL: You were given a mission\n"
	.string "alongside with 6 GRUNTS, I want you to\l"
	.string "depart to VERMILION CITY immediately,\l"
	.string "details will be given on your way. Is\l"
	.string "{PLAYER} there?$"

MtMoon_3F_Pelea_Frank_texto17:
.string "ANDRA: Roger that. Yes, {PLAYER} is\n"
	.string "here, sir.$"

MtMoon_3F_Pelea_Frank_texto18:
.string "PETREL: Tell him I want him in my office\n"
	.string "right now. You're dismissed.$"

MtMoon_3F_Pelea_Frank_texto19:
.string "ANDRA: Well, you've heard it, looks like\n"
	.string "this time we won't have the same mission.$"

MtMoon_3F_Pelea_Frank_texto20:
.string "Next time we see each other, I hope\n"
	.string "your team will become unrecognizable.\l"
	.string "Furthermore, mine will be much stronger.\l"
	.string "See ya, CHRONO ISLAND comrade.$"

MtMoon_3F_Pelea_Frank_move1:
walk_down
walk_down
walk_right
walk_down
walk_down
walk_in_place_left
step_end

MtMoon_3F_Pelea_Frank_move1.1:
walk_down
walk_down
walk_down
walk_down
walk_in_place_left
step_end

MtMoon_3F_Pelea_Frank_move1.2:
walk_up
walk_right
walk_up
walk_up
walk_in_place_left
step_end

MtMoon_3F_Pelea_Frank_move1.3:
walk_up
walk_up
walk_up
walk_in_place_left
step_end

MtMoon_3F_Pelea_Frank_move2:
walk_in_place_up
emote_exclamation_mark
walk_in_place_right
step_end

MtMoon_3F_Pelea_Frank_move2.1:
walk_in_place_down
emote_exclamation_mark
walk_in_place_right
step_end

MtMoon_3F_Pelea_Frank_move3:
walk_in_place_left
step_end

MtMoon_3F_Pelea_Frank_move4:
emote_exclamation_mark
step_end

MtMoon_3F_Pelea_Frank_move5:
walk_right
step_end

MtMoon_3F_Pelea_Frank_move6:
emote_exclamation_mark
walk_in_place_left
step_end

MtMoon_3F_Pelea_Frank_move7:
walk_in_place_right
step_end

MtMoon_3F_Pelea_Frank_move8:
emote_exclamation_mark
walk_in_place_right
step_end

MtMoon_3F_Pelea_Frank_move9:
walk_in_place_up
walk_in_place_down
walk_in_place_left
walk_in_place_right
step_end

MtMoon_3F_Pelea_Frank_move10:
walk_right
walk_right
step_end

MtMoon_3F_Pelea_Frank_move11:
emote_exclamation_mark
walk_fast_down
step_end

MtMoon_3F_Pelea_Frank_move12:
walk_slow_up
walk_in_place_right
step_end

MtMoon_3F_Pelea_Frank_move13:
walk_in_place_left
walk_in_place_right
step_end
