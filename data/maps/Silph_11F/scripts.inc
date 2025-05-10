Silph_11F_MapScripts::
map_script MAP_SCRIPT_ON_LOAD, SilphCo_11F_OnLoad
map_script MAP_SCRIPT_ON_FRAME_TABLE, Silph_11F_OnFrame
	.byte 0

SilphCo_11F_OnLoad::
	call_if_unset FLAG_UNUSED_0x03B, EventScript_Close11FDoor
	end

Silph_11F_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 67, Silph_11F_Reunion_Presidente_Lance
	.2byte 0

Silph11F_1::
end



Silph11F_2::
lock     
faceplayer     
msgbox Silph11F_Text_2, MSGBOX_DEFAULT
release     
end

Silph11F_Text_2:
	.string "SECRETARY: Thank you for keeping our\n"
	.string "PRESIDENT informed of all this\l"
	.string "government has done for the region.\l"
	.string "Even though we can't thank you publicly,\l"
	.string "perhaps the day will come…{PAUSE 25}$"



Silph11F_4::
end



Silph11F_5::
end



Silph11F_6::
end


Silph11F_EventScript_Policia::
	trainerbattle_single TRAINER_KATELYN_5, Silph11F_Text_PoliciaIntro, Silph11F_Text_PoliciaDefeated
	msgbox Silph11F_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



Silph11F_EventScript_Policia2::
	trainerbattle_single TRAINER_NICOLAS_1, Silph11F_Text_Policia2Intro, Silph11F_Text_Policia2Defeated
	msgbox Silph11F_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



Silph11FDocumento_100::
msgbox Silph11FDocumento_Text_100, MSGBOX_SIGN   
end

Silph11FDocumento_Text_100:
.string "SILPH CO. HEAD OFFICE\n"
    .string "11F$"

Silph_11F_Bill_Presidente_Izq::
lockall
msgbox Silph_11F_Bill_Presidente_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Silph_11F_Bill_Presidente_Move_1
waitmovement 0x0
goto Silph_11F_Bill_Presidente

Silph_11F_Bill_Presidente_Der::
lockall
msgbox Silph_11F_Bill_Presidente_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Silph_11F_Bill_Presidente_Move_1.1
waitmovement 0x0
goto Silph_11F_Bill_Presidente

Silph_11F_Bill_Presidente::
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Silph_11F_Bill_Presidente_Move_2
waitmovement 0x0
special RemoveCameraObject
msgbox Silph_11F_Bill_Presidente_Texto_2 MSGBOX_AUTOCLOSE
delay 40
msgbox Silph_11F_Bill_Presidente_Texto_2.1 MSGBOX_AUTOCLOSE
delay 20
msgbox Silph_11F_Bill_Presidente_Texto_2.2 MSGBOX_AUTOCLOSE
delay 20
msgbox Silph_11F_Bill_Presidente_Texto_2.3 MSGBOX_AUTOCLOSE
applymovement 1, Silph_11F_Bill_Presidente_Move_16
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_2.4 MSGBOX_AUTOCLOSE
applymovement 1, Silph_11F_Bill_Presidente_Move_17
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_2.5 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, Silph_11F_Reunión_Presidente_Lance_Move_2
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_2.6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_PRESIDENTE_SILPH, Silph_11F_Bill_Presidente_Texto_2.7
msgbox Silph_11F_Bill_Presidente_Texto_2.8 MSGBOX_AUTOCLOSE
delay 20
msgbox Silph_11F_Bill_Presidente_Texto_2.2 MSGBOX_AUTOCLOSE
delay 20
msgbox Silph_11F_Bill_Presidente_Texto_3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Silph_11F_Bill_Presidente_Move_3
applymovement 2, Silph_11F_Bill_Presidente_Move_3
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_4 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
addobject 3
addobject 8
applymovement 3, Silph_11F_Bill_Presidente_Move_4
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Silph_11F_Bill_Presidente_Move_5
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_5 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_5.1 MSGBOX_AUTOCLOSE
fadescreen 1
playse SE_USE_ITEM
special HealPlayerParty
delay 20
fadescreen 0
applymovement OBJ_EVENT_ID_PLAYER, Silph_11F_Bill_Presidente_Move_6
waitmovement 0x0
applymovement 3, Silph_11F_Bill_Presidente_Move_7
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_6 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Silph_11F_Bill_Presidente_Move_8
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, Silph_11F_Bill_Presidente_Move_9
waitmovement 0x0
playse SE_PIN
applymovement 8, Silph_11F_Bill_Presidente_Move_10
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Silph_11F_Bill_Presidente_Move_10.1
waitmovement 0x0
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_8 MSGBOX_AUTOCLOSE
applymovement 8, Silph_11F_Bill_Presidente_Move_11
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_9 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_9.2 MSGBOX_AUTOCLOSE
delay 30
playse SE_WARP_OUT
delay 30
playse SE_WARP_OUT
waitse
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Silph_11F_Bill_Presidente_Move_3
applymovement 8, Silph_11F_Bill_Presidente_Move_3
waitmovement 0x0
waitse
clearflag FLAG_HIDE_ROUTE_119_SCOTT
addobject 7
addobject 9
applymovement 7, Silph_11F_Bill_Presidente_Move_12
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Silph_11F_Bill_Presidente_Move_5
applymovement 8, Silph_11F_Bill_Presidente_Move_5
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_10 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_11 MSGBOX_AUTOCLOSE
applymovement 9, Silph_11F_Bill_Presidente_Move_12
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_12 MSGBOX_AUTOCLOSE
applymovement 9, Silph_11F_Bill_Presidente_Move_13
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_13 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 8, Silph_11F_Bill_Presidente_Move_14
waitmovement 0x0
waitse
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_14 MSGBOX_AUTOCLOSE
applymovement 9, Silph_11F_Bill_Presidente_Move_15
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_15 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 9, Silph_11F_Bill_Presidente_Move_15.1
waitmovement 0x0
waitse
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_15.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Silph_11F_Bill_Presidente_Move_3
applymovement 8, Silph_11F_Bill_Presidente_Move_3
waitmovement 0x0
waitse
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_16 MSGBOX_AUTOCLOSE
applymovement 9, Silph_11F_Bill_Presidente_Move_16
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_17 MSGBOX_AUTOCLOSE
applymovement 9, Silph_11F_Bill_Presidente_Move_15
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_18 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 9, Silph_11F_Bill_Presidente_Move_15.1
waitmovement 0x0
waitse
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_18.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Silph_11F_Bill_Presidente_Move_14
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_19 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 8, Silph_11F_Bill_Presidente_Move_14
waitmovement 0x0
waitse
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_19.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_20 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 8, Silph_11F_Bill_Presidente_Move_3
waitmovement 0x0
waitse
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_20.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, Silph_11F_Bill_Presidente_Move_16
applymovement 7, Silph_11F_Bill_Presidente_Move_17
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_21 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_22 MSGBOX_AUTOCLOSE
applymovement 7, Silph_11F_Bill_Presidente_Move_18
waitmovement 0x0
applymovement 9, Silph_11F_Bill_Presidente_Move_15
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_23 MSGBOX_AUTOCLOSE
applymovement 9, Silph_11F_Bill_Presidente_Move_18
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_119_SCOTT
setflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
msgbox Silph_11F_Bill_Presidente_Texto_24 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_24.1 MSGBOX_AUTOCLOSE
delay 10
trainerbattle_no_intro TRAINER_BILL_2, Silph_11F_Bill_Presidente_Texto_25
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_25.1 MSGBOX_AUTOCLOSE
delay 10
playmoncry SPECIES_URSARING, CRY_MODE_ENCOUNTER
waitmoncry
delay 30
playse SE_M_CUT
waitse
playse SE_SUPER_EFFECTIVE
applymovement 7, Silph_11F_Bill_Presidente_Move_18.1
waitmovement 0x0
waitse
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_26 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_27 MSGBOX_AUTOCLOSE
applymovement 9, Silph_11F_Bill_Presidente_Move_16
applymovement 7, Silph_11F_Bill_Presidente_Move_17.1
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_28 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, Silph_11F_Bill_Presidente_Move_15
waitmovement 0x0
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_29 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_29.1 MSGBOX_AUTOCLOSE
delay 10
fadescreen 1
delay 20
removeobject 7
removeobject 9
fadescreen 0
applymovement 3, Silph_11F_Bill_Presidente_Move_19
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Silph_11F_Bill_Presidente_Move_20
applymovement 8, Silph_11F_Bill_Presidente_Move_20
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_30 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_30.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_30.2 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_32 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_32.1 MSGBOX_AUTOCLOSE
delay 10
showmoneybox 0, 0
msgbox Silph_11F_Bill_Presidente_Texto_33 MSGBOX_AUTOCLOSE
applymovement 3, Silph_11F_Bill_Presidente_Move_21
waitmovement 0x0
playse SE_SHOP
addmoney 400000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox Silph_11F_Bill_Presidente_Texto_34 MSGBOX_DEFAULT
waitfanfare
delay 20
hidemoneybox
msgbox Silph_11F_Bill_Presidente_Texto_35 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
msgbox Silph_11F_Bill_Presidente_Texto_36 MSGBOX_DEFAULT
givemon SPECIES_PORYGON, 40, ITEM_UPGRADE
waitfanfare
delay 20
msgbox Silph_11F_Bill_Presidente_Texto_37 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, Silph_11F_Bill_Presidente_Move_21.1
waitmovement 0x0
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_37.2 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_37.1 MSGBOX_AUTOCLOSE
delay 20
applymovement 3, Silph_11F_Bill_Presidente_Move_24
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_38 MSGBOX_AUTOCLOSE
applymovement 3, Silph_11F_Bill_Presidente_Move_25
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Silph_11F_Bill_Presidente_Move_16
applymovement 8, Silph_11F_Bill_Presidente_Move_17
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_39 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 8, Silph_11F_Bill_Presidente_Move_3
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_40 MSGBOX_AUTOCLOSE
applymovement 8, Silph_11F_Bill_Presidente_Move_26
waitmovement 0x0
clearflag FLAG_NUEVA_839
msgbox Silph_11F_Bill_Presidente_Texto_41 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
setflag FLAG_HIDE_FANCLUB_BOY
setflag FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE
setvar VAR_UNUSED_0x40F7, 75
warpsilent MAP_ROCKET_HIDEOUT_5F, 2, 2
release
end

Silph_11F_Bill_Presidente_Move_21.1:
delay_8
face_up
delay_16
delay_8
face_down
delay_8
step_end

Silph_11F_Bill_Presidente_Move_18.1:
lock_facing_direction
walk_fast_left
walk_fast_left
unlock_facing_direction
step_end

Silph_11F_Bill_Presidente_Move_15.1:
walk_in_place_right
step_end

Silph_11F_Bill_Presidente_Move_10.1:
face_left
delay_16
delay_8
face_up
delay_16
delay_8
face_right
delay_16
face_player
delay_8
step_end

Silph_11F_Bill_Presidente_Texto_1:
.string "????: Who's there?$"

Silph_11F_Bill_Presidente_Texto_2:
	.string "PRESIDENT: How is this possible? All my\n"
	.string "security guards defeated by a member\l"
	.string "of the TEAM ROCKET, what's your name?$"

Silph_11F_Bill_Presidente_Texto_2.1:
	.string "{PLAYER}? You must be from outside, a\n"
	.string "KANTO citizen would never enter the\l"
	.string "capital's HEADQUARTERS like this.$"

Silph_11F_Bill_Presidente_Texto_2.2:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

Silph_11F_Bill_Presidente_Texto_2.3:
	.string "So the SEVII ISLANDS…{PAUSE 20} I get it, let me\n"
	.string "tell you something: you haven't seen\l"
	.string "anything of this region yet. The\l"
	.string "POKÉMON from KANTO, the real ones, have\l"
	.string "nothing to do with those weak SENTRET\l"
	.string "or SPINARAK as you were raised with.$"

Silph_11F_Bill_Presidente_Texto_2.4:
	.string "It's an insult that someone like you,\n"
	.string "with such poor culture and roots when\l"
	.string "it comes to POKÉMON BATTLES, has made\l"
	.string "it this far. This is another proof of the\l"
	.string "decay plaguing this region. The values\l"
	.string "and discipline that led us to greatness\l"
	.string "have been lost forever.$"

Silph_11F_Bill_Presidente_Texto_2.5:
	.string "Unfortunately for you, there are still\n"
	.string "TRAINERS that haven't been infected\l"
	.string "with the virus of mediocrity and\l"
	.string "conformity.$"

Silph_11F_Bill_Presidente_Texto_2.6:
	.string "For the first time, you are going to\n"
	.string "experience what it is like to face a\l"
	.string "team from the old school of KANTO!$"

Silph_11F_Bill_Presidente_Texto_2.7:
	.string "The power of those POKÉMON…{PAUSE 35} where does\n"
	.string "it come from?$"

Silph_11F_Bill_Presidente_Texto_2.8:
	.string "Decades ago when I saw a TRAINER with\n"
	.string "your resources but such a high level.\l"
	.string "You've made me remember those old times,\l"
	.string "when everything was possible. Your\l"
	.string "abilities and dreams are from another\l"
	.string "age.$"

Silph_11F_Bill_Presidente_Texto_3:
	.string "So, {PLAYER}. Listen, {PLAYER}, I\n"
	.string "can forget all of this and make you work\l"
	.string "for SILPH, a TRAINER of your level has\l"
	.string "nothing to do with the TEAM ROCKET, if\l"
	.string "only…$"

Silph_11F_Bill_Presidente_Texto_4:
	.string "????: Spare your persuasive techniques\n"
	.string "with {PLAYER}, it's with me that you\l"
	.string "must talk to.$"

Silph_11F_Bill_Presidente_Texto_5:
	.string "GIOVANNI: Great work, {PLAYER}!\n"
	.string "Everything is going according to plan,\l"
	.string "the only thing I need now is time to\l"
	.string "talk with the PRESIDENT, ANDRA is close\l"
	.string "by here, she has personally escorted\l"
	.string "me here. Both of you will stand guard\l"
	.string "until this little business meeting is\l"
	.string "over.$"

Silph_11F_Bill_Presidente_Texto_5.1:
	.string "I need you fully recovered, let me heal\n"
	.string "your team.$"

Silph_11F_Bill_Presidente_Texto_6:
	.string "And now, Mr. PRESIDENT, tell me, what do\n"
	.string "you think about the way the region has\l"
	.string "been ruled in recent years? And what if\l"
	.string "I told you that there's an alternative, a\l"
	.string "change that can benefit us all, from\l"
	.string "your company to us and the entire\l"
	.string "population? You see…$"

Silph_11F_Bill_Presidente_Texto_7:
	.string "ANDRA: Hey, {PLAYER}! This time you're\n"
	.string "here before me, the policemen of SILPH\l"
	.string "have a similar level to our HIGH RANKS\l"
	.string "after all! It wasn't easy to find an\l"
	.string "employee with a CARD KEY. But it seems\l"
	.string "we have 3 counting yours, it's more than\l"
	.string "enough to our plan of evading RED…$"

Silph_11F_Bill_Presidente_Texto_8:
	.string "Look at us, we went from collecting\n"
	.string "FOSSILS in the MT.MOON to ROCKET\l"
	.string "EXECUTIVES, with total trust from\l"
	.string "GIOVANNI, to the point that we are\l"
	.string "here, protecting the most important\l"
	.string "meeting for the future of all the TEAM\l"
	.string "ROCKET.$"

Silph_11F_Bill_Presidente_Texto_9:
	.string "You know what? After this mission ends,\n"
	.string "I think I'll head to CINNABAR ISLAND, it's\l"
	.string "the only place that I haven't explored\l"
	.string "yet, along with the POKÉMON LEAGUE.$"

Silph_11F_Bill_Presidente_Texto_9.1:
	.string "That's where MEWTWO was created, the\n"
	.string "socalled 'strongest POKÉMON ever'.$"

Silph_11F_Bill_Presidente_Texto_9.2:
	.string "Do you think GIOVANNI has any idea\n"
	.string "of where it could be today?$"

Silph_11F_Bill_Presidente_Texto_10:
	.string "MIGUEL: Well, well, so ROCKET EXECUTIVE,\n"
	.string "huh, {PLAYER}? Things have gone\l"
	.string "pretty well for you; as you\l"
	.string "can see, for me too.$"

Silph_11F_Bill_Presidente_Texto_11:
	.string "????: Good job, you'll have an OLD\n"
	.string "AMBER, just as I promised you.$"

Silph_11F_Bill_Presidente_Texto_12:
	.string "BILL: It's you again, {PLAYER}, I\n"
	.string "confess I misjudged you the first time\l"
	.string "you disrupted my home on ROUTE 25. I\l"
	.string "thought you were just another lowly\l"
	.string "GRUNT…$"

Silph_11F_Bill_Presidente_Texto_13:
	.string "However, your mistake is believing that\n"
	.string "a ROCKET, no matter who, has chances\l"
	.string "against BILL; the POKÉ MANIAC number\l"
	.string "one in the world.$"

Silph_11F_Bill_Presidente_Texto_14:
	.string "ANDRA: You're just a spoiled kid who\n"
	.string "always obtained things so easily!\p"
	.string "You can buy the tools, but you can't\n"
	.string "buy the mind and heart of a true\l"
	.string "TRAINER, without that, you'll never\l"
	.string "defeat someone like {PLAYER}!$"

Silph_11F_Bill_Presidente_Texto_15:
	.string "BILL: Insolent girl, I didn't come here\n"
	.string "to talk to just another ordinary ROCKET\l"
	.string "with mediocre POKÉMON.$"

Silph_11F_Bill_Presidente_Texto_15.1:
	.string "No, I'll demand the PRESIDENT the\n"
	.string "MASTER BALL, even before it gets\l"
	.string "released in the market.$"

Silph_11F_Bill_Presidente_Texto_16:
	.string "As one of the main investors of SILPH, I\n"
	.string "demand you to move away. If you don't\l"
	.string "cause trouble, I maybe let you escape\l"
	.string "from here, so you can extend your\l"
	.string "wretched existence a bit further.$"

Silph_11F_Bill_Presidente_Texto_17:
	.string "With that BALL I will have everything I\n"
	.string "want. Imagine it! The LEGENDARY BIRDS,\l"
	.string "even that myth of MEW, could be catched\l"
	.string "and admired within my vast collection,\l"
	.string "the only POKÉMON I'm missing to\l"
	.string "complete it.$"

Silph_11F_Bill_Presidente_Texto_18:
	.string "Your presence here won't take\n"
	.string "me away the glory!$"

Silph_11F_Bill_Presidente_Texto_18.1:
	.string "Stand aside!\p"
	.string "That's the last warning!$"

Silph_11F_Bill_Presidente_Texto_19:
	.string "ANDRA: Neither you nor your bought\n"
	.string "POKEMONs intimidate us! TEAM ROCKET\l"
	.string "has far more important issues here than\l"
	.string "that stupid collection of spoiled brat!$"

Silph_11F_Bill_Presidente_Texto_19.1:
	.string "You won't get past us, whether\n"
	.string "you like it or not!$"

Silph_11F_Bill_Presidente_Texto_20:
	.string "BILL: Great. I had no problem defeating\n"
	.string "the other ROCKET EXECUTIVE, and I'll do\l"
	.string "the same with you two.$"

Silph_11F_Bill_Presidente_Texto_20.1:
    .string "ANDRA: {PAUSE 15}…{PAUSE 15} PETREL{PAUSE 15}…{PAUSE 15}$"

Silph_11F_Bill_Presidente_Texto_21:
	.string "Finish off the girl, {PLAYER} is mine.\p"
	.string "He deserves to be punished by the\n"
	.string "trouble he caused at my house.$"

Silph_11F_Bill_Presidente_Texto_22:
.string "S.MIGUEL: At your service, SIR BILL.$"

Silph_11F_Bill_Presidente_Texto_23:
	.string "BILL: You know what, {PLAYER}? There\n"
	.string "are a lot of uncommon POKÉMON;\l"
	.string "SLOWPOKE, CUBONE, are those simple\l"
	.string "POKÉMON that the POKÉMANIACS are\l"
	.string "happy with and they try to be like me,\l"
	.string "they believe that they can\l"
	.string "self-proclaim collectionist and share\l"
	.string "profession with me.$"

Silph_11F_Bill_Presidente_Texto_24:
	.string "Poor naive people, I will tell you the\n"
	.string "truth about top rare POKÉMON. the\p"
	.string "The fact is{PAUSE 15}…{PAUSE 25} rarest POKÉMON are also\n"
	.string "the strongest ones.$"
	
Silph_11F_Bill_Presidente_Texto_24.1:
	.string "Don't you think so?\p"
	.string "I'll show you the top-notch POKÉMON\n"
	.string "of my collection!$"

Silph_11F_Bill_Presidente_Texto_25:
.string "W-what?!\n"
	.string "But I have the best ones with me!$"

Silph_11F_Bill_Presidente_Texto_25.1:
.string "ANDRA: URSARING! SLASH!$"

Silph_11F_Bill_Presidente_Texto_26:
	.string "ANDRA: Hah! Those FOSSILS are not\n"
	.string "enough to defeat my TEAM, scientist,\l"
	.string "even those were given to you by BILL!$"

Silph_11F_Bill_Presidente_Texto_27:
	.string "BILL: This can't be…{PAUSE 35} I have PORYGON2,\n"
	.string "the newest technology mon, developed by\l"
	.string "SILPH itself, alongside a team with the\l"
	.string "region's most powerful and rare POKÉMON.$"

Silph_11F_Bill_Presidente_Texto_28:
	.string "S.MIGUEL: SIR BILL! We better get out\n"
	.string "before the rest of ROCKETS notices our\l"
	.string "failure, it could be risky, you know how\l"
	.string "much some ROCKETS hate you, and they\l"
	.string "will take advantage of this situation!$"

Silph_11F_Bill_Presidente_Texto_29:
	.string "BILL: So you win, huh? No one ever has\n"
	.string "denied me something, {PLAYER}, if I\l"
	.string "want that MASTER BALL, I'll get it,\l"
	.string "one way or another. The only thing\l"
	.string "you achieved today is digging your\l"
	.string "own grave.$"

Silph_11F_Bill_Presidente_Texto_29.1:
	.string "No one messes with BILL, the world's\n"
	.string "greatest collector.\l"
	.string "Next time, I'll crush you with a\l"
	.string "power you can't even dream of.$"

Silph_11F_Bill_Presidente_Texto_30:
	.string "GIOVANNI: ANDRA! {PLAYER}!\n"
	.string "everything is done, the negotiation has\l"
	.string "been a complete success. Not only have\l"
	.string "I managed to get SILPH to provide us\l"
	.string "with the MASTER BALL, but I have also\l"
	.string "halted its selling in the market to\l"
	.string "prevent anyone else from acquiring it.$"

Silph_11F_Bill_Presidente_Texto_30.1:
	.string "Starting today, we have a powerful\n"
	.string "partner. Who will be seen by the\l"
	.string "media as a victim of our greed.$"

Silph_11F_Bill_Presidente_Texto_30.2:
	.string "The easy part remains: Acting in front of\n"
	.string "RED to make him believe that he is the\l"
	.string "only one who knows what's going on and\l"
	.string "the only one who knows how to train\l"
	.string "his POKÉMON.$"

Silph_11F_Bill_Presidente_Texto_32:
	.string "Now, both of you withdrawn from\n"
	.string "this mission. You've more than exceeded\l"
	.string "expectations, and I don't want that RED\l"
	.string "to accidentally encounter two ROCKET\l"
	.string "EXECUTIVES of your level.$"

Silph_11F_Bill_Presidente_Texto_32.1:
	.string "You have well-deserved vacations to do\n"
	.string "whatever you want and visit whatever\l"
	.string "remains to be seen in this beautiful\l"
	.string "region.$"

Silph_11F_Bill_Presidente_Texto_33:
	.string "Here is your reward, even though the\n"
	.string "loyalty of a company like SILPH cannot\l"
	.string "be bought, accept this.$"

Silph_11F_Bill_Presidente_Texto_34:
	.string "You just earned ¥400,000!!$"

Silph_11F_Bill_Presidente_Texto_35:
	.string "And this is from the PRESIDENT, as a\n"
	.string "token of gratitude for both ensuring\l"
	.string "the privacy of our conversation.$"

Silph_11F_Bill_Presidente_Texto_36:
.string "YOU HAVE RECEIVED A LV.40 PORYGON!$"

Silph_11F_Bill_Presidente_Texto_37:
	.string "It's a PORYGON, the first POKÉMON\n"
	.string "created by humans, which is sold at\l"
	.string "the price of gold in our GAME CORNER.\p"
	.string "SILPH PRESIDENT has kindly held yours\n"
	.string "with the UPGRADE, an enhancement\l"
	.string "they've been developing for years to\l"
	.string "improve it. You just need to use this\l"
	.string "item on the PORYGON as if it was a\l"
	.string "stone, and it will evolve into PORYGON2.$"

Silph_11F_Bill_Presidente_Texto_37.2:
	.string "According to the PRESIDENT, only one\n"
	.string "person has had the honor of having\l"
	.string "that POKÉMON before you.$"

Silph_11F_Bill_Presidente_Texto_37.1:
.string "ANDRA: {PAUSE 15}…{PAUSE 15}$"

Silph_11F_Bill_Presidente_Texto_38:
	.string "Alright, you can leave, I'll tell you when\n"
	.string "we start our next big hit. Enjoy your\l"
	.string "little vacations…{PAUSE 25} and keep improving.$"

Silph_11F_Bill_Presidente_Texto_39:
	.string "So PORYGON2, if it weren't for the fact\n"
	.string "that I've seen BILL using it against\l"
	.string "you, I would include it in my team. But\l"
	.string "I'll never share the same POKÉMON as\l"
	.string "that arrogant, elitist BILL. I'll think\l"
	.string "carefully about which POKÉMON will be\l"
	.string "the last one I include in my team…$"

Silph_11F_Bill_Presidente_Texto_40:
	.string "ANDRA: Ah, yes! The CARD KEY! We have to\n"
	.string "leave it in an accessible place to RED!\l"
	.string "Don't worry, {PLAYER}, I'll take care of\l"
	.string "it, I think I know a perfect place to\l"
	.string "-hide- it so he can find it, leave it to\l"
	.string "me!$"

Silph_11F_Bill_Presidente_Texto_41:
	.string "I'll tell BLUE to stay on guard and alert\n"
	.string "GIOVANNI as soon as RED arrives in his\l"
	.string "area, there's nothing to worry about,\l"
	.string "{PLAYER}, everything is under control…{PAUSE 25}$"

Silph_11F_Bill_Presidente_Move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
walk_in_place_up
step_end

Silph_11F_Bill_Presidente_Move_1.1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_in_place_up
step_end

Silph_11F_Bill_Presidente_Move_2:
walk_right
step_end

Silph_11F_Bill_Presidente_Move_3:
emote_exclamation_mark
step_end

Silph_11F_Bill_Presidente_Move_4:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_in_place_right
step_end

Silph_11F_Bill_Presidente_Move_5:
face_left
step_end

Silph_11F_Bill_Presidente_Move_6:
walk_left
walk_left
walk_left
walk_down
walk_in_place_up
step_end

Silph_11F_Bill_Presidente_Move_7:
walk_right
walk_right
walk_right
walk_right
walk_in_place_up
step_end

Silph_11F_Bill_Presidente_Move_8:
walk_left
step_end

Silph_11F_Bill_Presidente_Move_9:
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
face_up
step_end

Silph_11F_Bill_Presidente_Move_10:
emote_exclamation_mark
walk_in_place_down
step_end

Silph_11F_Bill_Presidente_Move_11:
face_left
walk_in_place_down
step_end

Silph_11F_Bill_Presidente_Move_12:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
step_end

Silph_11F_Bill_Presidente_Move_13:
face_left
step_end

Silph_11F_Bill_Presidente_Move_14:
walk_in_place_left
step_end

Silph_11F_Bill_Presidente_Move_15:
face_right
step_end

Silph_11F_Bill_Presidente_Move_16:
delay_16
face_up
step_end

Silph_11F_Bill_Presidente_Move_17:
face_down
step_end

Silph_11F_Bill_Presidente_Move_17.1:
walk_right
walk_right
face_down
step_end

Silph_11F_Bill_Presidente_Move_18:
walk_right
step_end

Silph_11F_Bill_Presidente_Move_19:
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
step_end

Silph_11F_Bill_Presidente_Move_20:
emote_exclamation_mark
walk_in_place_right
step_end

Silph_11F_Bill_Presidente_Move_21:
walk_down
delay_16
walk_in_place_left
step_end

Silph_11F_Bill_Presidente_Move_22:
walk_up
delay_16
walk_in_place_left
step_end

Silph_11F_Bill_Presidente_Move_23:
walk_up
delay_16
walk_in_place_down
step_end

Silph_11F_Bill_Presidente_Move_24:
walk_in_place_down
step_end

Silph_11F_Bill_Presidente_Move_25:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Silph_11F_Bill_Presidente_Move_26:
walk_in_place_left
delay_16
walk_in_place_down
step_end

Silph_11F_Reunion_Presidente_Lance::
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_7
addobject 10
addobject 11
addobject 12
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Silph_11F_Reunión_Presidente_Lance_Move_1
waitmovement 0x0
special RemoveCameraObject
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Silph_11F_Reunión_Presidente_Lance_Move_2
waitmovement 0x0
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_2 MSGBOX_AUTOCLOSE
applymovement 10, Silph_11F_Reunión_Presidente_Lance_Move_3
waitmovement 0x0
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 10, Silph_11F_Reunión_Presidente_Lance_Move_4
waitmovement 0x0
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_5 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_DRAGONITE, CRY_MODE_ENCOUNTER
waitmoncry
delay 20
playse SE_PIN
applymovement 1, IndigoPlateau_Lance_Discurso_move_6
applymovement 2, IndigoPlateau_Lance_Discurso_move_6
waitmovement 0x0
waitse
delay 10
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, Silph_11F_Reunión_Presidente_Lance_Move_5
waitmovement 0x0
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_7 MSGBOX_AUTOCLOSE
applymovement 10, Silph_11F_Reunión_Presidente_Lance_Move_6
waitmovement 0x0
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_9 MSGBOX_AUTOCLOSE
delay 20
applymovement 10, Silph_11F_Reunión_Presidente_Lance_Move_7
waitmovement 0x0
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_10 MSGBOX_AUTOCLOSE
applymovement 10, Silph_11F_Reunión_Presidente_Lance_Move_8
waitmovement 0x0
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_11 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
addobject 13
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Silph_11F_Reunión_Presidente_Lance_Move_9
waitmovement 0x0
special RemoveCameraObject
delay 20
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_12 MSGBOX_AUTOCLOSE
delay 20
applymovement 13, Silph_11F_Reunión_Presidente_Lance_Move_10
waitmovement 0x0
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_13 MSGBOX_AUTOCLOSE
applymovement 13, Silph_11F_Reunión_Presidente_Lance_Move_11
waitmovement 0x0
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_14 MSGBOX_AUTOCLOSE
applymovement 13, Silph_11F_Reunión_Presidente_Lance_Move_12
waitmovement 0x0
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_15 MSGBOX_AUTOCLOSE
delay 20
setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
setflag FLAG_HIDE_UNION_ROOM_PLAYER_7
delay 20
removeobject 10
removeobject 11
removeobject 12
delay 30
setvar VAR_UNUSED_0x40F7, 68
fadescreen 1
playse SE_WARP_IN
delay 60
removeobject 13
fadescreen 0
delay 60
warpsilent MAP_SEAFOAM_ISLANDS_1F, 6, 19
release
end

Silph_11F_Reunión_Presidente_Lance_Texto_1:
	.string "LANCE: What is concerning you,\n"
	.string "PRESIDENT? It should be an honor for\l"
	.string "LANCE and the GOVERNMENT to trust\l"
	.string "completely and only in your company.$"

Silph_11F_Reunión_Presidente_Lance_Texto_2:
	.string "PRESIDENT: Oh, don't get me wrong,\n"
	.string "CHAMPION LANCE. We feel honored to\l"
	.string "support our beloved region, it's just\l"
	.string "that…{PAUSE 25}$"

Silph_11F_Reunión_Presidente_Lance_Texto_3:
	.string "LANCE: I understand, you are a true\n"
	.string "defender of the original 150. An\l"
	.string "specialist in KANTO POKÉMON. And you\l"
	.string "don't completely like the idea of\l"
	.string "someone from outside taking the lead.\l"
	.string "Right, PRESIDENT?$"

Silph_11F_Reunión_Presidente_Lance_Texto_4:
.string "PRESIDENT: I didn't mean to say…{PAUSE 25} $"

Silph_11F_Reunión_Presidente_Lance_Texto_5:
	.string "Let me remind you who is in possession\n"
	.string "of the region's flagship POKÉMON.$"

Silph_11F_Reunión_Presidente_Lance_Texto_6:
.string "Do you trust me now, PRESIDENT?$"

Silph_11F_Reunión_Presidente_Lance_Texto_7:
	.string "PRESIDENT: There has been a\n"
	.string "misunderstanding. I was actually\l"
	.string "referring to…{PAUSE 35} the rest of the\l"
	.string "population. My company has no\l"
	.string "complaints but…{PAUSE 25} If you and I take the\l"
	.string "entire pie…{PAUSE 35} what will be left for the\l"
	.string "rest?$"

Silph_11F_Reunión_Presidente_Lance_Texto_8:
	.string "LANCE: I'm afraid to say that's not your\n"
	.string "concern, PRESIDENT. Let's be clear, you\l"
	.string "and I are not in the same boat, except\l"
	.string "for this particular matter. KANTO's\l"
	.string "destiny is my concern. Is that clear?$"

Silph_11F_Reunión_Presidente_Lance_Texto_9:
.string "PRESIDENT: {PAUSE 25}…{PAUSE 25} …{PAUSE 25}$"

Silph_11F_Reunión_Presidente_Lance_Texto_10:
	.string "LANCE: Now, if you'll excuse me, I have a\n"
	.string "meeting with the members of the ELITE\l"
	.string "4. If you meet my expectations, perhaps\l"
	.string "I'll give you a position there. I've heard\l"
	.string "you're an excellent TRAINER, and AGATHA\l"
	.string "will retire soon.$"

Silph_11F_Reunión_Presidente_Lance_Texto_11:
	.string "Until next time, Mr. PRESIDENT, and don't\n"
	.string "forget my words.$"

Silph_11F_Reunión_Presidente_Lance_Texto_12:
.string "ARCHER: {PAUSE 25}…{PAUSE 25} …{PAUSE 25}$"

Silph_11F_Reunión_Presidente_Lance_Texto_13:
	.string "DRAGONITE isn't the flagship POKÉMON of\n"
	.string "KANTO.$"

Silph_11F_Reunión_Presidente_Lance_Texto_14:
	.string "The KANTO's flagship POKÉMON has always\n"
	.string "been and still being RHYDON.\l"
	.string "That's why its figure appears on all the\l"
	.string "statues in the region.$"

Silph_11F_Reunión_Presidente_Lance_Texto_15:
.string "That's why GIOVANNI has it in his team.$"

Silph_11F_Reunión_Presidente_Lance_Move_1:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Silph_11F_Reunión_Presidente_Lance_Move_2:
walk_in_place_down
step_end

Silph_11F_Reunión_Presidente_Lance_Move_3:
walk_left
step_end

Silph_11F_Reunión_Presidente_Lance_Move_4:
face_up
step_end

Silph_11F_Reunión_Presidente_Lance_Move_5:
walk_down
step_end

Silph_11F_Reunión_Presidente_Lance_Move_6:
walk_slow_right
walk_slow_right
step_end

Silph_11F_Reunión_Presidente_Lance_Move_7:
walk_slow_left
walk_in_place_up
step_end

Silph_11F_Reunión_Presidente_Lance_Move_8:
walk_slow_left
walk_slow_down
step_end

Silph_11F_Reunión_Presidente_Lance_Move_9:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

Silph_11F_Reunión_Presidente_Lance_Move_10:
face_right
step_end

Silph_11F_Reunión_Presidente_Lance_Move_11:
walk_slow_right
step_end

Silph_11F_Reunión_Presidente_Lance_Move_12:
walk_slow_up
walk_slow_right
step_end

Silph_11F_Presidente_Charlas::
lock
faceplayer
compare VAR_ROUTE129_STATE, 0
goto_if_gt Silph_11F_Presidente_Charlas_2
msgbox Silph_11F_Presidente_Charlas_Texto_1 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Presidente_Charlas_Texto_2 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_MASTER_BALL, 5
waitfanfare
delay 10
msgbox Silph_11F_Presidente_Charlas_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE129_STATE, 1
release
end

Silph_11F_Presidente_Charlas_2::
msgbox Silph_11F_Presidente_Charlas_Texto_4 MSGBOX_AUTOCLOSE
release
end

Silph_11F_Presidente_Charlas_Texto_1:
	.string "PRESIDENT: Well well! You should not\n"
	.string "walk around here so happy, young boy!$"

Silph_11F_Presidente_Charlas_Texto_2:
	.string "GIOVANNI was right, kid, people don't\n"
	.string "notice, but the LANCE's government,\l"
	.string "he's only interested in securing his\l"
	.string "power, regardless of the consequences,\l"
	.string "let me explain it: they compel us to sell\l"
	.string "items like PROTEIN, IRON, or CARBOS at\l"
	.string "so expensive prices, keeping the lion's\l"
	.string "share of the profit for themselves,\l"
	.string "their objective is to deprive TRAINERS\l"
	.string "in this region of resources to enhance\l"
	.string "their POKÉMON's capabilities, thank to\l"
	.string "your intervention, GIOVANNI helped me\l"
	.string "realize the potential outcome if my\l"
	.string "company didn't take action, here, take\l"
	.string "this, you'll undoubtedly put our\l"
	.string "flagship product to good use.$"

Silph_11F_Presidente_Charlas_Texto_3:
	.string "PRESIDENT: Yes, 5 MASTER BALL, use\n"
	.string "them only with those POKÉMON that are\l"
	.string "really hard to catch with the rest of\l"
	.string "the BALLS. We gave one MASTER BALL to\l"
	.string "RED after believing he had won for the\l"
	.string "sake of justice, just to convince him\l"
	.string "that his intervention had truly saved\l"
	.string "my company and me.$"

Silph_11F_Presidente_Charlas_Texto_4:
	.string "PRESIDENT: Are you still here, boy?\n"
	.string "Remember that a ROCKET shouldn't be\l"
	.string "seen around here! Because the people\l"
	.string "would start to ask some questions!$"
