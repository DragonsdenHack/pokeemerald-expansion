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
	.string "important over there. Maybe in those\l"
	.string "stairs leading to the other entrance…$"



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
	.string "That's him. That's the kid causing us so\n"
	.string "much trouble. Tried stopping him, but he\l"
	.string "utterly crushed me. All I can do is just\l"
	.string "stand and watch…$"


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
	.string "Mmm… Maybe you're not as useless as I'd\n"
	.string "thought. With this one, that's three\l"
	.string "FOSSILs-enough to wrap up the mission.$"

MtMoon3F_Text_11_3:
.string "Calling up all MT. MOON mission GRUNTS!\n"
	.string "The mission is over. Come back to the\l"
	.string "gathering point!$"

MtMoon3F_Text_11_4:
	.string "Perfect! I'm rushing the others'\n"
	.string "arrivals so I can find another FOSSIL.\l"
	.string "Get moving, GRUNT. And watch what you\l"
	.string "carry!$"

MtMoon3F_Text_11_5:
	.string "Get back to the gathering point, GRUNT!\n"
	.string "I'd better not have to repeat myself!$"


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
	.string "????: Well. Yet again, not an OLD AMBER.\n"
	.string "I'll have to be satisfied with these\l"
	.string "HELIX and DOME FOSSILs. What a pity.\l"
	.string "AERODACTYL would've made a fine\l"
	.string "addition to the team.$"

MtMoon_3F_Azul_Text_2:
	.string "Another ROCKET? You guys are\n"
	.string "everywhere, but I don't wanna burn more\l"
	.string "time beating you too. At your level, I\l"
	.string "can't even get a good warm-up.$"

MtMoon_3F_Azul_Text_3:
	.string "Fortunately, I've already got a DOME\n"
	.string "FOSSIL-don't need this one too, see. Take\l"
	.string "it if you want. But who wants an\l"
	.string "OMASTAR or KABUTOPS anyway when\l"
	.string "you've got a BLASTOISE?$"

MtMoon_3F_Azul_Text_4:
	.string "What? You telling me I'm getting big\n"
	.string "headed just ‘cuz I'm letting my\l"
	.string "competition go scot-free?$"

MtMoon_3F_Azul_Text_5:
	.string "I don't care how much you're making off\n"
	.string "of those FOSSILs, ROCKET. All I care\l"
	.string "about is just the priceless advantage\l"
	.string "of building a strong and well-rounded\l"
	.string "team.$"

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
	.string "(The DOME FOSSIL is mine. I should\n"
	.string "inform my superior.)$"



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
	.string "{PAUSE 10}…{PAUSE 10}\l"
	.string "{PAUSE 10}…{PAUSE 10}$"

MtMoon_3F_Miguel_Rojo_text_2:
	.string "Really now? You're gathering FOSSILs,\n"
	.string "and you've got one right here?$"

MtMoon_3F_Miguel_Rojo_text_3:
	.string "(Aha, these ROCKETs are some easy\n"
	.string "suckers, aren't they? If I handle\l"
	.string "things right, I'll score a second\l"
	.string "FOSSIL.)$"

MtMoon_3F_Miguel_Rojo_text_4:
.string "Hey, ROCKET, I'm offering you a deal.$"

MtMoon_3F_Miguel_Rojo_text_5:
	.string "That over there's a HELIX FOSSIL, the\n"
	.string "remains of an OMANYTE, an ancestral\l"
	.string "POKÉMON that once lived\l"
	.string "three-hundred-million years ago. You\l"
	.string "wanna make some quick dosh? Let's bet\l"
	.string "our FOSSILs for the other-winner takes\l"
	.string "all. … …$"

MtMoon_3F_Miguel_Rojo_text_6:
.string "What do you say? Do we have a deal?$"

MtMoon_3F_Miguel_Rojo_text_7:
	.string "I'd expect no less of a ROCKET. Alea\n"
	.string "jacta est. The winner takes home both\l"
	.string "FOSSILs. Now leave yours next to mine\l"
	.string "to seal the deal.$"

MtMoon_3F_Miguel_Rojo_text_8:
	.string "Ha! And there's your fatal mistake. My\n"
	.string "POKÉMON will never fall to some middling\l"
	.string "GRUNT like you. Thanks for dropping the\l"
	.string "DOME FOSSIL right in my lap. How great!\l"
	.string "'Cause of you, I'll go home today with\l"
	.string "both the DOME and HELIX FOSSILs!$"

MtMoon_3F_Miguel_Rojo_text_9:
	.string "This was supposed to be under control!$"

MtMoon_3F_Miguel_Rojo_text_10:
	.string "Grr… You're no ordinary ROCKET. I hate\n"
	.string "it when some scrub goes around defying\l"
	.string "stats. About the FOSSILs…$"

MtMoon_3F_Miguel_Rojo_text_11:
	.string "Calling up {PLAYER}!! A dangerous\n"
	.string "TRAINER just turned up. He beat us\l"
	.string "effortlessly, and he's headed toward\l"
	.string "you. Protect the FOSSIL with your life.\l"
	.string "Repeat: protect the FOSSIL with your\l"
	.string "life. That's an order!$"

MtMoon_3F_Miguel_Rojo_text_12:
.string "????: {PAUSE 45}…{PAUSE 45}$"

MtMoon_3F_Miguel_Rojo_text_13:
.string "{PAUSE 45}…{PAUSE 45}$"

MtMoon_3F_Miguel_Rojo_text_14:
	.string "And here, I thought you ROCKETs were\n"
	.string "slower than that. Are you seriously\l"
	.string "betraying your criminal nature? C'mon,\l"
	.string "give it another thought.$"

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
	.string "FRANK: You've got some guts turning up\n"
	.string "again. You were given a mission,\l"
	.string "{PLAYER}: protect the FOSSIL with\l"
	.string "your life, and you failed spectacularly!\l"
	.string "Got anything to say for yourself?$"

MtMoon_3F_Pelea_Frank_texto2:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}\l"
	.string "{PAUSE 15}…{PAUSE 15}\l"
	.string "{PAUSE 15}…{PAUSE 15}$"

MtMoon_3F_Pelea_Frank_texto3:
	.string "YOU HAD TWO FOSSILS IN YOUR\n"
	.string "POSSESSION!! And you got played by\l"
	.string "some science geek just to fall to some\l"
	.string "mysterious TRAINER right after!! Your\l"
	.string "incompetence is astounding! I'm\l"
	.string "recommending PETREL your immediate\l"
	.string "termination. An incompetent fool like\l"
	.string "you doesn't deserve a place in this\l"
	.string "organization!$"

MtMoon_3F_Pelea_Frank_texto4:
	.string "ANDRA: Sorry for interrupting,\n"
	.string "sir-FRANK. But I've seen {PLAYER}\l"
	.string "fighting, and he's not as weak as you\l"
	.string "think. Everyone who took that\l"
	.string "mysterious TRAINER on fell almost\l"
	.string "immediately, bar none, so it'd be totally\l"
	.string "unfair to punish just one guy over it.\l"
	.string "And we still have two FOSSILs, so in the\l"
	.string "end, it's not all bad.$"

MtMoon_3F_Pelea_Frank_texto5:
	.string "FRANK: We ain't judging his level as a\n"
	.string "TRAINER, ANDRA, but his lack of cunning\l"
	.string "and intelligence in the moment to\l"
	.string "overcome the situation.$"

MtMoon_3F_Pelea_Frank_texto6:
	.string "You should've snagged the FOSSILs and\n"
	.string "fled with an ESCAPE ROPE immediately\l"
	.string "after receiving my message, instead of\l"
	.string "sticking around to get slapped around\l"
	.string "like a fool-especially after being\l"
	.string "warned of his outstanding skill. Not to\l"
	.string "mention how you ignored that scientist\l"
	.string "who ultimately tricked you. That shady\l"
	.string "prick must've gotten away with one of\l"
	.string "the FOSSILs. You've become the class\l"
	.string "clown, {PLAYER}. Your negligence has\l"
	.string "cost us hundreds of thousands of POKÉ.\l"
	.string "Do you have any idea how many years of\l"
	.string "your wages that is?$"

MtMoon_3F_Pelea_Frank_texto7:
.string "H.R. FRANK: What? Are you telling me\n"
	.string "that ROCKET's honor code says that we\l"
	.string "shouldn't flinch never in front of the\l"
	.string "enemy, nor flee? And that will be seen\l"
	.string "as weakness and lack of values, and\l"
	.string "that we should have beaten that\l"
	.string "trainer all together?$"

MtMoon_3F_Pelea_Frank_texto8:
	.string "FRANK: This is outrageous. I don't need\n"
	.string "some backwoods newb to talk to me\l"
	.string "about the ROCKET honor code. You'll\l"
	.string "regret running your trap-people like you\l"
	.string "need to be taught some hard lessons.\l"
	.string "I'm not responsible for what becomes of\l"
	.string "your TEAM next!$"

MtMoon_3F_Pelea_Frank_texto9:
.string "Me? A HIGH RANK defeated by a mere\n"
	.string "GRUNT?$"

MtMoon_3F_Pelea_Frank_texto10:
.string "This is inadmissible…$"

MtMoon_3F_Pelea_Frank_texto11:
	.string "Enough. The mission's over. Your balance\n"
	.string "is down two FOSSILs. You'll be held\l"
	.string "accountable by PETREL, so present\l"
	.string "yourselves to him in the ROUTE 5 BASE.\l"
	.string "And there, you'll be given your next\l"
	.string "mission. Smoke bomb, go!!$"

MtMoon_3F_Pelea_Frank_texto12:
	.string "ANDRA: Wow, you see that? Everyone's\n"
	.string "just stunned. HIGH RANK FRANK's\l"
	.string "downright notorious for hazing the\l"
	.string "newbies, but you held your ground and\l"
	.string "faced him head on!$"

MtMoon_3F_Pelea_Frank_texto13:
	.string "Couldn't get a hold of that mysterious\n"
	.string "TRAINER. Did he have a CHARMELEON?\l"
	.string "Looks like we've got ourselves a tough\l"
	.string "crowd here. We'd better train up so that\l"
	.string "kid won't take us down like today. But\l"
	.string "what'll PETREL say? FRANK's probably\l"
	.string "smeared you in the report, so you'd\l"
	.string "better share your side of things in the\l"
	.string "quarters quick.$"

MtMoon_3F_Pelea_Frank_texto14:
	.string "PETREL: Calling up GRUNT ANDRA.$"

MtMoon_3F_Pelea_Frank_texto15:
	.string "ANDRA: Right here, sir. What is it?$"

MtMoon_3F_Pelea_Frank_texto16:
	.string "PETREL: You were given a mission\n"
	.string "alongside six GRUNTs. Depart for\l"
	.string "VERMILION CITY immediately. Details\l"
	.string "will be provided on the way. Is\l"
	.string "{PLAYER} there?$"

MtMoon_3F_Pelea_Frank_texto17:
.string "ANDRA: Roger that. Yes, {PLAYER} is\n"
	.string "here, sir.$"

MtMoon_3F_Pelea_Frank_texto18:
.string "PETREL: Tell him I want him in my office\n"
	.string "right now. You're dismissed.$"

MtMoon_3F_Pelea_Frank_texto19:
	.string "ANDRA: Well, you heard him. Looks like\n"
	.string "our missions are different this time.$"

MtMoon_3F_Pelea_Frank_texto20:
	.string "Next we meet, I hope your team's\n"
	.string "unrecognizable. But y' know, mine'll be\l"
	.string "way tougher too. See ya, CHRONO ISLAND\l"
	.string "comrade.$"

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
