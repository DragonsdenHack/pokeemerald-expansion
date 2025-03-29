Route23_MapScripts::
	.byte 0

Route23_1::
end

Route23_2::
end

Route23_3::
end

Route23_4::
end


Route23_5::
end

Route23_6::
end

Route23_7::
end



Route23_EventScript_Policia::
	trainerbattle_single TRAINER_ELLIOT_5, Route23_Text_PoliciaIntro, Route23_Text_PoliciaDefeated
	msgbox Route23_Text_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



Route23_EventScript_Policia2::
	trainerbattle_single TRAINER_RONALD, Route23_Text_Policia2Intro, Route23_Text_Policia2Defeated
	msgbox Route23_Text_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



Route23_EventScript_Policia3::
	trainerbattle_single TRAINER_MARIA_1, Route23_Text_Policia3Intro, Route23_Text_Policia3Defeated
	msgbox Route23_Text_Policia3PostBattle, MSGBOX_AUTOCLOSE
	end



Route23_EventScript_Policia4::
	trainerbattle_single TRAINER_MARIA_2, Route23_Text_Policia4Intro, Route23_Text_Policia4Defeated
	msgbox Route23_Text_Policia4PostBattle, MSGBOX_AUTOCLOSE
	end



Route23_EventScript_Policia5::
	trainerbattle_single TRAINER_MARIA_3, Route23_Text_Policia5Intro, Route23_Text_Policia5Defeated
	msgbox Route23_Text_Policia5PostBattle, MSGBOX_AUTOCLOSE
	end



Route23_EventScript_Policia6::
	trainerbattle_single TRAINER_MARIA_4, Route23_Text_Policia6Intro, Route23_Text_Policia6Defeated
	msgbox Route23_Text_Policia6PostBattle, MSGBOX_AUTOCLOSE
	end



Route23_EventScript_Policia7::
	trainerbattle_single TRAINER_MARIA_5, Route23_Text_Policia7Intro, Route23_Text_Policia7Defeated
	msgbox Route23_Text_Policia7PostBattle, MSGBOX_AUTOCLOSE
	end



Route23Documento_100::
msgbox Route23Documento_Text_100, MSGBOX_SIGN   
end

Route23Documento_Text_100:
.string "VICTORY ROAD GATE -\n"
    .string "POKÉMON LEAGUE$"

Ruta23_No_Puedes_Pasar::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_1
waitmovement 0x0
msgbox Ruta23_No_Puedes_Pasar_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_2
waitmovement 0x0
release
end

Ruta23_No_Puedes_Pasar_Texto_1:
	.string "-I should see what GIOVANNI wants\n"
	.string "from me before facing such important\l"
	.string "challenge.-$"

Route23_Llamada_Giovanni::
playse SE_POKENAV_CALL
applymovement OBJ_EVENT_ID_PLAYER, Route23_Llamada_Giovanni_Move_1
waitmovement 0x0
waitse
delay 10
playse SE_POKENAV_HANG_UP
waitse
delay 10
msgbox Route23_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route23_Llamada_Giovanni_Texto_2 MSGBOX_AUTOCLOSE
delay 10
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
playse SE_PC_OFF
waitse
delay 10
setvar VAR_UNUSED_0x40F7, 92
release
end

Route23_Llamada_Giovanni_Texto_1:
	.string "GIOVANNI: {PLAYER}? So you have\n"
	.string "already the 8 GYM BADGES, ARCHER has\l"
	.string "informed me about your fight on the\l"
	.string "at VIRIDIAN CITY BASE. You're ready to\l"
	.string "challenge the POKÉMON LEAGUE.$"

Route23_Llamada_Giovanni_Texto_2:
	.string "However, there is something else that\n"
	.string "you should see before entering that\l"
	.string "place. I will be waiting for you at the\l"
	.string "special training room, that one which\l"
	.string "is beside my private office, so don't be\l"
	.string "late.$"


Route23_Llamada_Giovanni_Move_1:
emote_exclamation_mark
walk_in_place_down
step_end

Route23_Combate_Andra_Centro::
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, Route23_Combate_Andra_Move_1
waitmovement 0x0
delay 15
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
addobject 8
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route23_Combate_Andra_Move_2
applymovement 8, Route23_Combate_Andra_Move_2
waitmovement 0x0 
waitse
delay 15
applymovement 8, Route23_Combate_Andra_Move_5
waitmovement 0x0 
goto Route23_Combate_Andra

Route23_Combate_Andra_Izq::
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, Route23_Combate_Andra_Move_1
waitmovement 0x0
delay 15
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
addobject 8
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route23_Combate_Andra_Move_2
applymovement 8, Route23_Combate_Andra_Move_2
waitmovement 0x0 
delay 15
waitse
applymovement 8, Route23_Combate_Andra_Move_5.2
waitmovement 0x0 
goto Route23_Combate_Andra

Route23_Combate_Andra_Der::
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, Route23_Combate_Andra_Move_1
waitmovement 0x0
delay 15
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
addobject 8
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route23_Combate_Andra_Move_2
applymovement 8, Route23_Combate_Andra_Move_2
waitmovement 0x0 
delay 15
applymovement 8, Route23_Combate_Andra_Move_5.1
waitmovement 0x0 
goto Route23_Combate_Andra

Route23_Combate_Andra::
msgbox Route23_Combate_Andra_Texto_1 MSGBOX_AUTOCLOSE
applymovement 8, Route23_Combate_Andra_Move_3
waitmovement 0x0 
msgbox Route23_Combate_Andra_Texto_2 MSGBOX_AUTOCLOSE
msgbox Route23_Combate_Andra_Texto_3 MSGBOX_AUTOCLOSE
applymovement 8, Route23_Combate_Andra_Move_4
waitmovement 0x0 
msgbox Route23_Combate_Andra_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox Route23_Combate_Andra_Texto_4.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Route23_Combate_Andra_Move_4
waitmovement 0x0
playse 559
msgbox Route23_Combate_Andra_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox Route23_Combate_Andra_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
trainerbattle_no_intro TRAINER_ANDRA_6, Route23_Combate_Andra_Texto_6
msgbox Route23_Combate_Andra_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Route23_Combate_Andra_Move_4.1
waitmovement 0x0
delay 10
msgbox Route23_Combate_Andra_Texto_7.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Route23_Combate_Andra_Move_4.2
waitmovement 0x0
delay 10
msgbox Route23_Combate_Andra_Texto_7.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Route23_Combate_Andra_Move_4.3
waitmovement 0x0
delay 10
msgbox Route23_Combate_Andra_Texto_7.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Route23_Combate_Andra_Move_4
waitmovement 0x0
delay 10
msgbox Route23_Combate_Andra_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Route23_Combate_Andra_Move_7
waitmovement 0x0
delay 20
msgbox Route23_Combate_Andra_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Route23_Combate_Andra_Move_7.1
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
removeobject 8
waitse
delay 10
setvar VAR_UNUSED_0x40F7, 91
release
end

Route23_Combate_Andra_Move_7.1:
walk_up
step_end

Route23_Combate_Andra_Move_4.3:
delay_8
face_up
delay_16
delay_8
face_down
delay_8
step_end

Route23_Combate_Andra_Move_4.1:
face_left
step_end

Route23_Combate_Andra_Move_4.2:
face_down
step_end

Route23_Combate_Andra_Texto_1:
	.string "You have arrived too, {PLAYER}.\n"
	.string "It wasn't easy, huh? I'll tell you a\l"
	.string "secret; I needed several attempts to\l"
	.string "defeat ARCHER and obtain the last\l"
	.string "BADGE, he was stronger than I\l"
	.string "thought.$"

Route23_Combate_Andra_Texto_2:
	.string "But we are lucky to have someone in\n"
	.string "charge as him, BLUE and RED had no\l"
	.string "chance to fight against someone like\l"
	.string "him before to challenge ELITE 4.\p"
	.string "Remember when he defeated LORELEI at\n"
	.string "the POWER PLANT?$"

Route23_Combate_Andra_Texto_3:
	.string "I don't even want to imagine the\n"
	.string "current level of the BOSS, GIOVANNI.\p"
	.string "Not only has been the champion a few\n"
	.string "times, but everything that has\l"
	.string "happened since then, has made him\l"
	.string "even stronger. That's admirable.$"

Route23_Combate_Andra_Texto_4:
	.string "If you're expecting great things from\n"
	.string "VICTORY ROAD, I am sorry to disappoint\l"
	.string "you, {PLAYER}, but they are just at\l"
	.string "the worst level to serve as training.\p"
	.string "I'm starting to believe that many of\n"
	.string "them are only there because they\l"
	.string "bought their BADGES in some sort\l"
	.string "of black market.$"

Route23_Combate_Andra_Texto_4.1:
	.string "It's funny, isn't it? The ones who are\n"
	.string "going to go in there legally are\l"
	.string "precisely us.$"

Route23_Combate_Andra_Texto_5:
	.string "However, I can still train a little bit\n"
	.string "before challenging the ELITE FOUR. It\l"
	.string "has been tough, but my team is finally\l"
	.string "complete, I just need to level up a\l"
	.string "bit more, and the ELITE 4 will not be\l"
	.string "able to defeat me.$"

Route23_Combate_Andra_Texto_5.1:
	.string "Tell me, {PLAYER}.\p"
	.string "Would you be able to defeat them yet!?$"

Route23_Combate_Andra_Texto_6:
.string "So I'm not ready yet.$"

Route23_Combate_Andra_Texto_7:
	.string "Wow, I thought after drawing with BLUE,\n"
	.string "I would have a chance against you.$"
	
Route23_Combate_Andra_Texto_7.1:
	.string "Yeah! Technically, I won, but if I\n"
	.string "face him for the championship, next\l"
	.string "time my CROBAT will have enough health\l"
	.string "left to survive against the BRAVE BIRD\l"
	.string "recoil, after taking down his BLASTOISE!$"

Route23_Combate_Andra_Texto_7.2:
	.string "As for you{PAUSE 20}…{PAUSE 20} I hope to have you nearby\l"
	.string "if we make it to the final rounds.\p"
	.string "You heard GIOVANNI{PAUSE 15}…{PAUSE 15}\l"

Route23_Combate_Andra_Texto_7.3:
	.string "It's a fact that LANCE has immense\n"
	.string "power, and that RED is a mystery.\p"
	.string "True… long time since we encountered\n"
	.string "him at MT. MOON, but he is still the\l"
	.string "only one I've seen defeat you…$"

Route23_Combate_Andra_Texto_8:
	.string "Anyway {PLAYER}, I wish you luck, it is\n"
	.string "time to test our POKÉMON against the\l"
	.string "best TRAINERS, I trust completely that\l"
	.string "they will live up to the challenge.$"

Route23_Combate_Andra_Texto_9:
	.string "Make the most of your latest training\n"
	.string "on VICTORY ROAD: next time we meet\l"
	.string "will be on the battlefield.$"

Route23_Combate_Andra_Move_1:
walk_in_place_up
step_end

Route23_Combate_Andra_Move_2:
emote_exclamation_mark
step_end

Route23_Combate_Andra_Move_3:
walk_in_place_left
step_end

Route23_Combate_Andra_Move_4:
walk_in_place_down
step_end

Route23_Combate_Andra_Move_5:
walk_down
step_end

Route23_Combate_Andra_Move_5.1:
walk_left
walk_down
step_end

Route23_Combate_Andra_Move_5.2:
walk_right
walk_down
step_end

Route23_Combate_Andra_Move_6:
face_up
step_end

Route23_Combate_Andra_Move_7:
walk_up
step_end
