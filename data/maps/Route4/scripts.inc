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
.string "If it weren't for the impossibility of\n"
	.string "entering POKÉMON GYMS, maybe I would\l"
	.string "even consider becoming a ROCKET GRUNT.\l"
	.string "That life of crime on the wrong side of\l"
	.string "the law has always intrigued me, but I\l"
	.string "prefer challenging BROCK!$"


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
.string "What do you want, ROCKET? ... MEGA PUNCH\n"
	.string "AND MEGA KICK? Of course, we're experts\l"
	.string "in those moves, nothing like a good kick\l"
	.string "to give the opponent a KO, don't you\l"
	.string "think?$"

Route4_Evento_Karatekas_Text_2:
.string "Don't pay attention, MEGA PUNCH is the\n"
	.string "best move that exists. We are forbidden\l"
	.string "from offering our move tutoring\l"
	.string "services to ROCKETS, but we can give\l"
	.string "you a demonstration!$"

Route4_Evento_Karatekas_Text_3:
.string "Wasn't my offense enough?$"

Route4_Evento_Karatekas_Text_4:
.string "No way! Only rocky POKÉMON\n"
	.string "withstand my MEGAPUNCH!$"

Route4_Evento_Karatekas_Text_5:
.string "HA! I told you already that your move\n"
	.string "doesn't have enough power to subdue!$"

Route4_Evento_Karatekas_Text_6:
.string "You're going to learn what a real move\n"
	.string "is, all your POKÉMON will fall in one fell\l"
	.string "swoop!$"

Route4_Evento_Karatekas_Text_7:
.string "Did I fail too?$"

Route4_Evento_Karatekas_Text_8:
.string "I told you! Your MEGA KICK just misses!\n"
	.string "Why do you want so much power if you\l"
	.string "don't hit the target half the time?$"

Route4_Evento_Karatekas_Text_9:
.string "I'd rather fall because I failed than\n"
	.string "sink in the lousy power of MEGAPUNCH,\l"
	.string "with that you won't even knock down a\l"
	.string "METAPOD.$"

Route4_Evento_Karatekas_Text_10:
.string "...\n"
	.string "...$"

Route4_Evento_Karatekas_Text_11:
.string "Thank you for helping us put our new\n"
	.string "moves into practice, we can't teach you\l"
	.string "them by law, but we can give you this.$"

Route4_Evento_Karatekas_Text_12:
.string "It is our little secret to hit even\n"
	.string "harder with our movements, it will\l"
	.string "increase the power of normal type\l"
	.string "movements by 20%. If you ever have a\l"
	.string "TAUROS or a KANGASKHAN, don't hesitate\l"
	.string "to equip them with this, they will\l"
	.string "charge much harder!$"

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
	.string "heck are you?! Come back here right\l"
	.string "now, you need to give me some\l"
	.string "explanations about what just\l"
	.string "happened!!$"

Route4_Frank_move1:
emote_exclamation_mark
walk_in_place_up
step_end
