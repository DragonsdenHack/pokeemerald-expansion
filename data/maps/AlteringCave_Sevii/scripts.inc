AlteringCave_Sevii_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, AlteringCave_Sevii_OnResume
	.byte 0

AlteringCave_Sevii_OnResume:
	call AlteringCave_Sevii_SetupEscapeWarp
	end

AlteringCave_Sevii_SetupEscapeWarp::
	setescapewarp MAP_OUTCAST_ISLAND, 7, 22
	return

AlteringCaveSevii1::
end

AlteringCave_Sevii_Commbate_Zeus::
lock
faceplayer
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_2 MSGBOX_AUTOCLOSE
delay 20
compare VAR_ROUTE105_STATE, 4
goto_if_lt AlteringCave_Sevii_Commbate_Zeus_2
compare VAR_UNUSED_0x40F7, 97
goto_if_lt AlteringCave_Sevii_Commbate_Zeus_2
playse SE_PIN
applymovement 1, AlteringCave_Sevii_Commbate_Zeus_Move_1
waitmovement 0x0
waitse
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_4 MSGBOX_AUTOCLOSE
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, AlteringCave_Sevii_Commbate_Zeus_Move_1
waitmovement 0x0
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_6 MSGBOX_AUTOCLOSE
fadeoutbgm 0
playse 586
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, AlteringCave_Sevii_Commbate_Zeus_Move_1.1
waitmovement 0x0
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_8.2 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_8.3 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_8.4 MSGBOX_AUTOCLOSE
delay 20
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, AlteringCave_Sevii_Commbate_Zeus_Move_1.1
waitmovement 0x0
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_9 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_9.2 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_9.3 MSGBOX_AUTOCLOSE
delay 10
trainerbattle_no_intro TRAINER_ZEUS_1, AlteringCave_Sevii_Commbate_Zeus_Texto_10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_11 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_11.1 MSGBOX_AUTOCLOSE
delay 10
fadeoutbgm 0
playse 586
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_12 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_12.1 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_12.2 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_12.3 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_12.4 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_13 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_13.1 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_13.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, AlteringCave_Sevii_Commbate_Zeus_Move_1.1
waitmovement 0x0
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_13.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, AlteringCave_Sevii_Commbate_Zeus_Move_1.1
waitmovement 0x0
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_14 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_14.1 MSGBOX_AUTOCLOSE
delay 20
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, AlteringCave_Sevii_Commbate_Zeus_Move_2
waitmovement 0x0
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_16 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
fadescreen 1
delay 20
removeobject 1
fadescreen 0
fadeoutbgm 0
playse 500
release
end



AlteringCave_Sevii_Commbate_Zeus_Move_1.1:
delay_8
face_up
delay_16
delay_8
face_player
delay_8
step_end

AlteringCave_Sevii_Commbate_Zeus_2::
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_3 MSGBOX_AUTOCLOSE
release
end

AlteringCave_Sevii_Commbate_Zeus_Texto_1:
	.string "????: Did you find something?$"

AlteringCave_Sevii_Commbate_Zeus_Texto_2:
.string "{PAUSE 20}…{PAUSE 20}$"

AlteringCave_Sevii_Commbate_Zeus_Texto_3:
	.string "Don't waste my time, kid; this is no joke.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_4:
	.string "South of SIX ISLAND and north of ONE\n"
	.string "ISLAND?! Were they talking about\l"
	.string "releasing two ancestral POKÉMON right\l"
	.string "there? It must be them!$"

AlteringCave_Sevii_Commbate_Zeus_Texto_5:
	.string "Alright, thanks for your help; now I\n"
	.string "need to put a stop to them before they\l"
	.string "succeed.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_6:
	.string "How? Do you want to come along as well?\n"
	.string "Do you want to see those ancestral\l"
	.string "POKÉMON in person and witness the\l"
	.string "extent of their powers?$"

AlteringCave_Sevii_Commbate_Zeus_Texto_7:
	.string "Don't be stupid, TRAINER; this mission\n"
	.string "isn't for everyone. Only those chosen\l"
	.string "and prepared throughout their entire\l"
	.string "lives, like me, can approach such a\l"
	.string "task with guarantees.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_8:
	.string "KANTO CHAMPION?\p"
	.string "Did you defeat LANCE?$"

AlteringCave_Sevii_Commbate_Zeus_Texto_8.1:
	.string "I heard that now the CHAMPION is\n"
	.string "someone named BLUE, from PALLET TOWN.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_8.2:
	.string "Nevertheless, it's irrelevant.\p"
	.string "LANCE thought he had power and didn't\n"
	.string "even scratch the surface of the true\l"
	.string "potential a POKÉMON can reach.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_8.3:
	.string "Remember that: we all are the same\n"
	.string "in the eyes of the creator.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_8.4:
	.string "Regardless of whether or not you're the\n"
	.string "CHAMPION of KANTO, JOHTO or HOENN.\p"
	.string "Your POKÉMON would fall just like if\n"
	.string "you were any random TRAINER.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_9:
	.string "So you still persist{PAUSE 20}…{PAUSE 20}$"

AlteringCave_Sevii_Commbate_Zeus_Texto_9.1:
	.string "Just for your help{PAUSE 20}…{PAUSE 20} you'll have the\n"
	.string "privilege of witnessing something\l"
	.string "you've never seen before.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_9.2:
	.string "I won't need to use more than 50% of\n"
	.string "my power to make you see that certain\l"
	.string "laws of this world are unquestionable.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_9.3:
	.string "Proceed, CHAMPION!\p"
	.string "Show me how great your mortal\n"
	.string "and vulnerable POKÉMON are\l"
	.string "against the gods!$"

AlteringCave_Sevii_Commbate_Zeus_Texto_10:
	.string "My royal and ancient POKÉMON{PAUSE 20}…{PAUSE 20} I surely\n"
	.string "underestimated you.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_11:
	.string "You're the first person in generations\n"
	.string "able to defeat the RAYQUAZA passed\l"
	.string "down through my lineage. It appears I\l"
	.string "underestimated the ultimate limits\l"
	.string "that a TRAINER in tune with their team\l"
    .string "can achieve.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_11.1:
	.string "But, even like this, it remains\n"
	.string "small compared to certain powers.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_12:
	.string "Regardless, you've earned the right to\n"
	.string "be part of this mission at your own risk.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_12.1:
	.string "I'll introduce myself; I'm ZEUS,\n"
	.string "descendant of the oldest and holiest\l"
	.string "lineage in HOENN, tasked with ensuring\l"
	.string "the balance of the entire region and\l"
	.string "paying homage to the main pillar\l"
	.string "of the WEATHER TRIO: RAYQUAZA.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_12.2:
	.string "RAYQUAZA. My ancestors, witnessing the\n"
	.string "disasters caused by the clash between\l"
	.string "KYOGRE and GROUDON, the other two\l"
	.string "SUPER-ANCIENT POKÉMON, decided to use\l"
	.string "RAYQUAZA as an intermediary.$" 

AlteringCave_Sevii_Commbate_Zeus_Texto_12.3:
	.string "They managed to calm them and, to\n"
	.string "prevent another catastrophe, they\l"
	.string "decided to confine these ANCIENT\l"
	.string "POKÉMON… far from HOENN.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_12.4:
	.string "A place where no one could ever find\n"
	.string "them, keeping their powers dormant\l"
	.string "until the end of time{PAUSE 15}…{PAUSE 15}$"

AlteringCave_Sevii_Commbate_Zeus_Texto_13:
	.string "Until the arrival of ARCHIE and MAXIE.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_13.1:
	.string "They fervently believe the world will\n"
	.string "be a better place thanks to raise the\l"
	.string "sea levels or increase habitable land.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_13.2:
	.string "They have become accomplished\n"
	.string "specialists in sea/earth POKÉMON.\p"
	.string "Their eagerness to go beyond led them\n"
	.string "to learn everything about the legend of\l"
	.string "the SUPER-ANCIENT POKÉMON.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_13.3:
	.string "Even managed to recover the ORBS,\n"
	.string "lost for millennia, and necessary\l"
	.string "to awaken both MAJOR LEGENDARIES.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_14:
	.string "These ORBS also function as a compass,\n"
	.string "as they shine brighter the closer they\l"
	.string "are to their origin: KYOGRE/GROUDON.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_14.1:
	.string "Thanks to this, they have been able\n"
	.string "find the place where my ancestors\l"
	.string "confined them. Yes, right here, in the\l"
	.string "SEVII ISLANDS, and I'm the only one, as\l"
	.string "RAYQUAZA's master, who can stop them.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_15:
	.string "However, you've just defeated me, and\n"
	.string "we've already lost precious time\l"
	.string "battling and talking.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_16:
	.string "Perhaps it's too late; I need to heal my\n"
	.string "team. In the meantime, you can go ahead,\l"
	.string "return to those places, and stop them\l"
	.string "before there's no turning back.$"

AlteringCave_Sevii_Commbate_Zeus_Move_1:
emote_exclamation_mark
step_end

AlteringCave_Sevii_Commbate_Zeus_Move_2:
face_right
step_end
