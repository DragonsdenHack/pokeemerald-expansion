Route4_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, Route4_OnTransition
	.byte 0

Route4_OnTransition::
setflag FLAG_VISITED_ROUTE_4_FLY
end


Route4_1::
lock     
faceplayer     
msgbox Route4_Text_1, MSGBOX_DEFAULT
release     
end

Route4_Text_1:
.string "Ouch!\n"
.string "I stumbled upon a rocky Pokémon,\l"
.string "GEODUDE!$"


Route4_2::
lock     
faceplayer     
msgbox Route4_Text_2, MSGBOX_DEFAULT
release     
end

Route4_Text_2:
	.string "If it weren't for the ban on challenging\n"
	.string "POKÉMON GYMs, I might've considered\l"
	.string "becoming a ROCKET GRUNT myself. A life\l"
	.string "of crime on the wrong side of the law\l"
	.string "has always intrigued me, but I prefer\l"
	.string "facing BROCK!$"


Route4_3::
end


Route4_4::
end


Route4_5::
lock     
faceplayer     
msgbox Route4_Text_5, MSGBOX_DEFAULT
release     
end

Route4_Text_5:
.string "Better to have sustained, constant and\n"
	.string "controlled power that causes\l"
	.string "permanent wear and tear on the\l"
	.string "opponent than power without control!$"


Route4_6::
lock     
faceplayer     
msgbox Route4_Text_6, MSGBOX_DEFAULT
release     
end

Route4_Text_6:
.string "Half-measures won't get you anywhere.\n"
	.string "If you want to bring down the opponent,\l"
	.string "you must do it with raw and unbridled\l"
	.string "power. It's the only way to surprise and\l"
	.string "shatter their defense, not giving them\l"
	.string "time to recover.$"



Route4_EventScript_Chica::
	trainerbattle_single TRAINER_CINDY_3, Route4_Text_ChicaIntro, Route4_Text_ChicaDefeated
	msgbox Route4_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end


Route4Documento_100::
msgbox Route4Documento_Text_100, MSGBOX_SIGN   
end

Route4Documento_Text_100:
.string "MT. MOON\n"
    .string "Tunnel Entrance$"



Route4Documento_101::
msgbox Route4Documento_Text_101, MSGBOX_SIGN   
end

Route4Documento_Text_101:
    .string "ROUTE 4\n"
    .string "MT. MOON - CERULEAN CITY$"

Route4_Evento_Karatekas::
applymovement OBJ_EVENT_ID_PLAYER, Route4_Evento_Karatekas_move1
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 5, Route4_Evento_Karatekas_move2
applymovement 6, Route4_Evento_Karatekas_move2
waitmovement 0x0
applymovement 6, Route4_Evento_Karatekas_move3
waitmovement 0x0
msgbox Route4_Evento_Karatekas_Text_1, MSGBOX_AUTOCLOSE
delay 10
applymovement 5, Route4_Evento_Karatekas_move4
waitmovement 0x0
msgbox Route4_Evento_Karatekas_Text_2, MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_MEGAPUNO, Route4_Evento_Karatekas_Text_3
msgbox Route4_Evento_Karatekas_Text_4, MSGBOX_AUTOCLOSE
delay 10
applymovement 6, Route4_Evento_Karatekas_move5
applymovement 5, Route4_Evento_Karatekas_move6
waitmovement 0x0
msgbox Route4_Evento_Karatekas_Text_5, MSGBOX_AUTOCLOSE
applymovement 6, Route4_Evento_Karatekas_move7
waitmovement 0x0
msgbox Route4_Evento_Karatekas_Text_6, MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_MEGAPATADA, Route4_Evento_Karatekas_Text_7
applymovement 5, Route4_Evento_Karatekas_move6
waitmovement 0x0
msgbox Route4_Evento_Karatekas_Text_8, MSGBOX_AUTOCLOSE
applymovement 6, Route4_Evento_Karatekas_move8
waitmovement 0x0
msgbox Route4_Evento_Karatekas_Text_9, MSGBOX_AUTOCLOSE
msgbox Route4_Evento_Karatekas_Text_10, MSGBOX_AUTOCLOSE
applymovement 5, Route4_Evento_Karatekas_move3
applymovement 6, Route4_Evento_Karatekas_move3
waitmovement 0x0
msgbox Route4_Evento_Karatekas_Text_11, MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_SILK_SCARF
waitfanfare
delay 10
msgbox Route4_Evento_Karatekas_Text_12, MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40FB, 1
release
end

Route4_Evento_Karatekas_Text_1:
	.string "What do you want, ROCKET? … MEGA PUNCH\n"
	.string "and MEGA KICK? Of course, we're experts\l"
	.string "on those those moves. Nothing like a\l"
	.string "good kick to KO the opponent, don't you\l"
	.string "think?$"

Route4_Evento_Karatekas_Text_2:
	.string "Don't you pay him any attention. MEGA\n"
	.string "PUNCH is the best move out there. We're\l"
	.string "forbidden from offering our move\l"
	.string "tutoring services to ROCKETs, but we\l"
	.string "can give you a demonstration!$"

Route4_Evento_Karatekas_Text_3:
.string "Wasn't my offense enough?$"

Route4_Evento_Karatekas_Text_4:
	.string "What a gut punch! Only rocky POKÉMON\n"
	.string "can withstand my MEGA PUNCH!$"

Route4_Evento_Karatekas_Text_5:
.string "HA! I told you already that your move\n"
	.string "doesn't have enough power to subdue!$"

Route4_Evento_Karatekas_Text_6:
	.string "Now I'll show you a real kicker! All your\n"
	.string "POKÉMON will fall in one fell swoop!$"

Route4_Evento_Karatekas_Text_7:
.string "Did I fail too?$"

Route4_Evento_Karatekas_Text_8:
.string "I told you! Your MEGA KICK just misses!\n"
	.string "Why do you want so much power if you\l"
	.string "don't hit the target half the time?$"

Route4_Evento_Karatekas_Text_9:
	.string "I'd rather trip up with a miss instead of\n"
	.string "handing my opponent a love tap with\l"
	.string "MEGA PUNCH. You couldn't even tip over a\l"
	.string "METAPOD with that!$"

Route4_Evento_Karatekas_Text_10:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

Route4_Evento_Karatekas_Text_11:
	.string "Thanks for helping us out our new moves\n"
	.string "into practice. We can't legally teach\l"
	.string "you them, but we can hand you this.$"

Route4_Evento_Karatekas_Text_12:
	.string "It's our little secret to make our moves\n"
	.string "pack a good punch. NORMAL moves'll hit\l"
	.string "harder by 20% with it. You'll get a real\l"
	.string "kick out of it if you toss it on a TAUROS\l"
	.string "or KANGASKHAN!$"

Route4_Evento_Karatekas_move1:
walk_in_place_up
step_end

Route4_Evento_Karatekas_move2:
delay_1
face_down
emote_exclamation_mark
step_end

Route4_Evento_Karatekas_move3:
walk_in_place_down
step_end

Route4_Evento_Karatekas_move4:
walk_right
walk_down
step_end

Route4_Evento_Karatekas_move5:
walk_down
walk_left
step_end

Route4_Evento_Karatekas_move6:
face_right
step_end

Route4_Evento_Karatekas_move7:
face_down
step_end

Route4_Evento_Karatekas_move8:
face_left
step_end

Route4_Frank::
applymovement OBJ_EVENT_ID_PLAYER, Route4_Frank_move1
waitmovement 0x0
playse SE_POKENAV_ON
msgbox Route4_Frank_Text1 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
clearflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
setvar VAR_UNUSED_0x40F7, 17
release
end

Route4_Frank_Text1:
	.string "FRANK: GRUNT {PLAYER}? Where the\n"
	.string "heck are you?! Get back here right now!\l"
	.string "You me a good explanation for what just\l"
	.string "happened!$"

Route4_Frank_move1:
emote_exclamation_mark
walk_in_place_up
step_end
