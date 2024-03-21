DesertRuins_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, DesertRuins_OnFrame
	.byte 0

DesertRuins_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 188, DesertRuins_Evento_Andra
	.2byte 0

DesertRuins_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, DesertRuins_EventScript_TryRemoveRegirock
	end

DesertRuins_EventScript_TryRemoveRegirock::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

DesertRuins_OnLoad:
	call_if_unset FLAG_SYS_REGIROCK_PUZZLE_COMPLETED, DesertRuins_EventScript_HideRegiEntrance
	end

DesertRuins_EventScript_HideRegiEntrance::
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	return

DesertRuins_OnTransition:
	setflag FLAG_LANDMARK_DESERT_RUINS
	call_if_unset FLAG_DEFEATED_REGIROCK, DesertRuins_EventScript_ShowRegirock
	end

DesertRuins_EventScript_ShowRegirock::
	clearflag FLAG_HIDE_REGIROCK
	return

DesertRuins_EventScript_CaveEntranceMiddle::
	lockall
	goto_if_set FLAG_SYS_REGIROCK_PUZZLE_COMPLETED, DesertRuins_EventScript_BigHoleInWall
	braillemsgbox DesertRuins_Braille_UseRockSmash
	releaseall
	end

DesertRuins_EventScript_BigHoleInWall::
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
	releaseall
	end

DesertRuins_EventScript_CaveEntranceSide::
	lockall
	braillemsgbox DesertRuins_Braille_UseRockSmash
	releaseall
	end

DesertRuins_EventScript_Regirock::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_REGIROCK, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_REGIROCK, 40, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartRegiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, DesertRuins_EventScript_DefeatedRegirock
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, DesertRuins_EventScript_RanFromRegirock
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, DesertRuins_EventScript_RanFromRegirock
	setflag FLAG_DEFEATED_REGIROCK
	release
	end

DesertRuins_EventScript_DefeatedRegirock::
	setflag FLAG_DEFEATED_REGIROCK
	goto Common_EventScript_RemoveStaticPokemon
	end

DesertRuins_EventScript_RanFromRegirock::
	setvar VAR_0x8004, SPECIES_REGIROCK
	goto Common_EventScript_LegendaryFlewAway
	end

DesertRuins_Evento_CamaraRegirock::
applymovement OBJ_EVENT_ID_PLAYER, DesertRuins_Evento_CamaraRegirock_move_1.1
msgbox DesertRuins_Evento_CamaraRegirock_Texto_1 MSGBOX_AUTOCLOSE
delay 20
applymovement 4, DesertRuins_Evento_CamaraRegirock_Move_1
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox DesertRuins_Evento_CamaraRegirock_Texto_3 MSGBOX_AUTOCLOSE
applymovement 4, DesertRuins_Evento_CamaraRegirock_Move_2
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_4 MSGBOX_AUTOCLOSE
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_3
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_5 MSGBOX_AUTOCLOSE
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_4
applymovement 4, DesertRuins_Evento_CamaraRegirock_Move_4
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox DesertRuins_Evento_CamaraRegirock_Texto_7 MSGBOX_AUTOCLOSE
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_3
applymovement 4, DesertRuins_Evento_CamaraRegirock_Move_2
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_8 MSGBOX_AUTOCLOSE
applymovement 5, DesertRuins_Evento_CamaraRegirock_Move_5
delay 10
applymovement OBJ_EVENT_ID_PLAYER, DesertRuins_Evento_CamaraRegirock_Move_5
waitmovement 0x0
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_6
applymovement 4, DesertRuins_Evento_CamaraRegirock_Move_6
waitmovement 0x0
playse SE_PIN
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_7
applymovement 4, DesertRuins_Evento_CamaraRegirock_Move_7
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_9 MSGBOX_AUTOCLOSE
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_3
applymovement 4, DesertRuins_Evento_CamaraRegirock_Move_2
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_10 MSGBOX_AUTOCLOSE
delay 20
msgbox DesertRuins_Evento_CamaraRegirock_Texto_11 MSGBOX_AUTOCLOSE
delay 20
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_6
applymovement 4, DesertRuins_Evento_CamaraRegirock_Move_8
waitmovement 0x0
removeobject 4
playse SE_EXIT
delay 15
msgbox DesertRuins_Evento_CamaraRegirock_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox DesertRuins_Evento_CamaraRegirock_Texto_13 MSGBOX_AUTOCLOSE
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_4
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_14 MSGBOX_AUTOCLOSE
delay 20
msgbox DesertRuins_Evento_CamaraRegirock_Texto_15 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_9
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_16 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, DesertRuins_Evento_CamaraRegirock_Move_7
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_17 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_18 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, DesertRuins_Evento_CamaraRegirock_Move_16
waitmovement 0x0
special RemoveCameraObject
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, DesertRuins_Evento_CamaraRegirock_Move_10
applymovement 5, DesertRuins_Evento_CamaraRegirock_Move_11
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_12
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_19 MSGBOX_AUTOCLOSE
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_4
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_20 MSGBOX_AUTOCLOSE
delay 15
msgbox DesertRuins_Evento_CamaraRegirock_Texto_21 MSGBOX_AUTOCLOSE
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_5.1
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_22 MSGBOX_AUTOCLOSE
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, DesertRuins_Evento_CamaraRegirock_Move_5
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, DesertRuins_Evento_CamaraRegirock_Move_13
waitmovement 0x0
delay 15
msgbox DesertRuins_Evento_CamaraRegirock_Texto_23 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, DesertRuins_Evento_CamaraRegirock_Move_9
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_24 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_EJECUTIVO_DEVON_2, DesertRuins_Evento_CamaraRegirock_Texto_25
msgbox DesertRuins_Evento_CamaraRegirock_Texto_26 MSGBOX_AUTOCLOSE
applymovement 5, DesertRuins_Evento_CamaraRegirock_Move_14
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_27 MSGBOX_AUTOCLOSE
delay 15
msgbox DesertRuins_Evento_CamaraRegirock_Texto_28 MSGBOX_AUTOCLOSE
applymovement 5, DesertRuins_Evento_CamaraRegirock_Move_9
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_29 MSGBOX_AUTOCLOSE
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_6
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_30 MSGBOX_AUTOCLOSE
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_4
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_31 MSGBOX_AUTOCLOSE
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_6.1
waitmovement 0x0
setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE
removeobject 3
playse SE_EXIT
delay 10
applymovement 5, DesertRuins_Evento_CamaraRegirock_Move_1
applymovement OBJ_EVENT_ID_PLAYER, DesertRuins_Evento_CamaraRegirock_Move_3
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_31.1 MSGBOX_AUTOCLOSE
delay 15
msgbox DesertRuins_Evento_CamaraRegirock_Texto_32 MSGBOX_AUTOCLOSE
delay 30
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
applymovement 5, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_36 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
delay 15
applymovement 5, DesertRuins_Evento_CamaraRegirock_Move_1
applymovement OBJ_EVENT_ID_PLAYER, DesertRuins_Evento_CamaraRegirock_Move_3
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_34 MSGBOX_AUTOCLOSE
delay 10
msgbox DesertRuins_Evento_CamaraRegirock_Texto_35 MSGBOX_AUTOCLOSE
applymovement 5, DesertRuins_Evento_CamaraRegirock_Move_15
waitmovement 0x0
playse SE_EXIT
removeobject 5
setvar VAR_UNUSED_0x40F7, 190
release
end

DesertRuins_Evento_CamaraRegirock_move_1.1:
walk_in_place_up
step_end

DesertRuins_Evento_CamaraRegirock_Move_16:
walk_down
walk_down
step_end

DesertRuins_Evento_CamaraRegirock_Move_15:
walk_down
walk_left
walk_down
step_end

DesertRuins_Evento_CamaraRegirock_Move_14:
walk_slow_down
step_end

DesertRuins_Evento_CamaraRegirock_Move_13:
walk_right
walk_down
step_end

DesertRuins_Evento_CamaraRegirock_Move_12:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

DesertRuins_Evento_CamaraRegirock_Move_11:
emote_exclamation_mark
walk_in_place_down
step_end

DesertRuins_Evento_CamaraRegirock_Move_10:
walk_left
walk_in_place_right
walk_in_place_down
step_end

DesertRuins_Evento_CamaraRegirock_Move_9:
walk_in_place_down
step_end

DesertRuins_Evento_CamaraRegirock_Move_8:
walk_right
walk_down
walk_down
walk_down
walk_left
walk_left
walk_down
step_end

DesertRuins_Evento_CamaraRegirock_Move_7:
emote_exclamation_mark
step_end

DesertRuins_Evento_CamaraRegirock_Move_6.1:
face_down
delay_4
walk_down
delay_4
step_end

DesertRuins_Evento_CamaraRegirock_Move_6:
face_down
step_end

DesertRuins_Evento_CamaraRegirock_Move_5.1:
walk_up
step_end

DesertRuins_Evento_CamaraRegirock_Move_5:
walk_up
walk_up
step_end

DesertRuins_Evento_CamaraRegirock_Move_4:
face_up
step_end

DesertRuins_Evento_CamaraRegirock_Move_3:
face_right
step_end

DesertRuins_Evento_CamaraRegirock_Move_2:
walk_in_place_left
step_end

DesertRuins_Evento_CamaraRegirock_Move_1:
face_left
step_end

DesertRuins_Evento_CamaraRegirock_Texto_1:
	.string "DEVON.ADMIN: Here's REGIROCK for you.\n"
	.string "One of the 3 REGIS that sleep in HOENN,\l"
	.string "its solidity is incomparable.$"

DesertRuins_Evento_CamaraRegirock_Texto_2:
	.string "????: Despite being created from clay,\n"
	.string "how is it possible for such a POKÉMON to\l"
	.string "arise from inert matter?$"

DesertRuins_Evento_CamaraRegirock_Texto_3:
	.string "DEVON.ADMIN: Higher forces intervened\n"
	.string "in its birth, preceding even our\l"
	.string "FOSSILS. And though we are unaware of\l"
	.string "the extent of its power, we cannot\l"
	.string "ignore it.$"

DesertRuins_Evento_CamaraRegirock_Texto_4:
	.string "????: That is what you are working on,\n"
	.string "right? In deciphering it.$"

DesertRuins_Evento_CamaraRegirock_Texto_5:
	.string "DEVON.ADMIN: We work on many things,\n"
	.string "one of them is to train you as a\l"
	.string "TRAINER, so you can develop properly.$"

DesertRuins_Evento_CamaraRegirock_Texto_6:
	.string "Teaching you about these kinds of\n"
	.string "places is important so you can\l"
	.string "understand the history of your region,\l"
	.string "see the natural boundaries it has\l"
	.string "reached, and thus be able to surpass\l"
	.string "them in due time.$"

DesertRuins_Evento_CamaraRegirock_Texto_7:
	.string "It's the only way to make progress\n"
	.string "without causing a distortion in your\l"
	.string "perception of reality. Seeing certain\l"
	.string "things at your age would be…\l"
	.string "counterproductive.$"

DesertRuins_Evento_CamaraRegirock_Texto_8:
	.string "Thats why, you must focus on nurturing\n"
	.string "the flawless BELDUM your father\l"
	.string "bestowed upon you. With the iconic\l"
	.string "HOENN fossils in hand, you possess the\l"
	.string "essential instruments to one day\l"
	.string "become a CHAM…$"

DesertRuins_Evento_CamaraRegirock_Texto_9:
.string "????: Who?$"

DesertRuins_Evento_CamaraRegirock_Texto_10:
	.string "DEVON.ADMIN: Return to DEVON, I will\n"
	.string "take care of this.$"

DesertRuins_Evento_CamaraRegirock_Texto_11:
.string "????: …$"

DesertRuins_Evento_CamaraRegirock_Texto_12:
	.string "ANDRA: Hiding the truth from a poor kid\n"
	.string "for your own benefit? This isn't the\l"
	.string "first time I've seen this!$"

DesertRuins_Evento_CamaraRegirock_Texto_13:
	.string "DEVON.ADMIN: You're totally wrong;\n"
	.string "you're probably TEAM ROCKET members,\l"
	.string "aren't you?$"

DesertRuins_Evento_CamaraRegirock_Texto_14:
	.string "We're only showing him the current\n"
	.string "reality; what could be more real than\l"
	.string "this LEGENDARY resting in a sacred\l"
	.string "place?$"

DesertRuins_Evento_CamaraRegirock_Texto_15:
	.string "That way, he'll be prepared for the\n"
	.string "higher level of reality that awaits him;\l"
	.string "he's adapting. Unlike your colleague,\l"
	.string "that 'PROFESSOR.' All he did was subject\l"
	.string "his creation to a lower reality to serve\l"
	.string "his own goals.$"

DesertRuins_Evento_CamaraRegirock_Texto_16:
	.string "Don't you dare compare that villainy to\n"
	.string "the way we handle the education of our\l"
	.string "PRESIDENT's son.$"

DesertRuins_Evento_CamaraRegirock_Texto_17:
.string "ANDRA: How do you know all that?$"

DesertRuins_Evento_CamaraRegirock_Texto_18:
	.string "DEVON.ADMIN: DEVON knows everything,\n"
	.string "our technology is five years ahead than\l"
	.string "yours, have a nice day.$"

DesertRuins_Evento_CamaraRegirock_Texto_19:
	.string "ANDRA: Won't you even try to stop us?$"

DesertRuins_Evento_CamaraRegirock_Texto_20:
	.string "DEVON.ADMIN: You're not seen as a\n"
	.string "threat, and you won't disrupt\l"
	.string "REGIROCK's rest. It's not worth\l"
	.string "bothering to defeat you.$"

DesertRuins_Evento_CamaraRegirock_Texto_21:
	.string "ANDRA: Hah! Thinking you know\n"
	.string "everything marks the beginning of the\l"
	.string "end. Faced with two TRAINERS who would\l"
	.string "crush him in battle, he leaves believing\l"
	.string "he's the know-it-all who has everything\l"
	.string "under control. Flee and remain in your\l"
	.string "ignorance! We've seen more than you'll\l"
	.string "ever see in your life.$"

DesertRuins_Evento_CamaraRegirock_Texto_22:
	.string "DEVON.ADMIN: Do you really consider\n"
	.string "yourself capable?$"

DesertRuins_Evento_CamaraRegirock_Texto_23:
.string "Who is this?$"

DesertRuins_Evento_CamaraRegirock_Texto_24:
	.string "{PLAYER}? No one in DEVON knows your\n"
	.string "name; if you were truly strong, they\l"
	.string "would know who you are. Even after\l"
	.string "wiping out your team, DEVON will still\l"
	.string "not know who you are!$"

DesertRuins_Evento_CamaraRegirock_Texto_25:
.string "I won't forget your name.$"

DesertRuins_Evento_CamaraRegirock_Texto_26:
	.string "DEVON.ADMIN: What does this mean? The\n"
	.string "strength of those POKÉMON, where does\l"
	.string "it come from?$"

DesertRuins_Evento_CamaraRegirock_Texto_27:
	.string "ANDRA: From the BOND with our POKÉMON,\n"
	.string "something that you lack.$"

DesertRuins_Evento_CamaraRegirock_Texto_28:
	.string "DEVON.ADMIN: Bond? That can't be\n"
	.string "measured!$"

DesertRuins_Evento_CamaraRegirock_Texto_29:
.string "ANDRA: Indeed, and it must be like that.$"

DesertRuins_Evento_CamaraRegirock_Texto_30:
	.string "DEVON.ADMIN: So… the ADMIN. who visited\n"
	.string "the LAKE OF RAGE was right. Except\l"
	.string "you're not just a random trainer; you\l"
	.string "work for TEAM ROCKET.$"

DesertRuins_Evento_CamaraRegirock_Texto_31:
	.string "It would have been better for you if we\n"
	.string "had remained unaware of your name,\l"
	.string "believe me.$"

DesertRuins_Evento_CamaraRegirock_Texto_31.1:
	.string "ANDRA: It's clear as day that that\n"
	.string "GROUDON and that REGIROCK are clones,\l"
	.string "much like what we've accomplished in\l"
	.string "DEEP BASE.$"

DesertRuins_Evento_CamaraRegirock_Texto_32:
	.string "ANDRA: Bah, if that's the best DEVON\n"
	.string "has, they'll never be able to stop us.\l"
	.string "LEGENDARIES and MEGAS are no longer a\l"
	.string "mystery to TEAM ROCKET.$"

DesertRuins_Evento_CamaraRegirock_Texto_34:
	.string "Go {PLAYER}, I'll head back to my\n"
	.string "OFFICE. GIOVANNI said that the II\l"
	.string "GRAND MEETING in GOLDENROD would take\l"
	.string "place after demolishing the POKÉMON\l"
	.string "TOWER, so I assume it must be soon.$"

DesertRuins_Evento_CamaraRegirock_Texto_35:
	.string "Meanwhile, I'll gather all the\n"
	.string "information I can about DEVON. Even\l"
	.string "though we've won, their POKÉMON,\l"
	.string "strategies, and items are new to us. We\l"
	.string "need to be prepared.$"

DesertRuins_Evento_CamaraRegirock_Texto_36:
	.string "GIOVANNI: {PLAYER}? I require your\n"
	.string "immediate presence at the DEEP ROCKET\l"
	.string "BASE. It's crucial that you come as soon\l"
	.string "as possible.$"


DesertRuins_Evento_Andra::
lock
delay 40
applymovement 2, DesertRuins_Evento_Andra_Move_1
waitmovement 0x0
msgbox DesertRuins_Evento_Andra_Texto_1 MSGBOX_AUTOCLOSE
applymovement 2, DesertRuins_Evento_Andra_Move_2
waitmovement 0x0
msgbox DesertRuins_Evento_Andra_Texto_2 MSGBOX_AUTOCLOSE
applymovement 2, DesertRuins_Evento_Andra_Move_3
waitmovement 0x0
delay 40
playse SE_PIN
applymovement 2, DesertRuins_Evento_Andra_Move_4
waitmovement 0x0
delay 30
msgbox DesertRuins_Evento_Andra_Texto_3 MSGBOX_AUTOCLOSE
applymovement 2, DesertRuins_Evento_Andra_Move_5
applymovement OBJ_EVENT_ID_PLAYER, DesertRuins_Evento_Andra_Move_6
waitmovement 0x0
msgbox DesertRuins_Evento_Andra_Texto_4 MSGBOX_AUTOCLOSE
applymovement 2, DesertRuins_Evento_Andra_Move_7
applymovement OBJ_EVENT_ID_PLAYER, DesertRuins_Evento_Andra_Move_2
waitmovement 0x0
msgbox DesertRuins_Evento_Andra_Texto_5 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, DesertRuins_Evento_Andra_Move_3
applymovement 2, DesertRuins_Evento_Andra_Move_8
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_2
removeobject 2
setvar VAR_UNUSED_0x40F7, 189
release
end

DesertRuins_Evento_Andra_Move_8:
walk_up
walk_up
step_end

DesertRuins_Evento_Andra_Move_7:
face_left
step_end

DesertRuins_Evento_Andra_Move_6:
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

DesertRuins_Evento_Andra_Move_5:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

DesertRuins_Evento_Andra_Move_4:
emote_exclamation_mark
step_end

DesertRuins_Evento_Andra_Move_3:
face_up
step_end

DesertRuins_Evento_Andra_Move_2:
face_right
step_end

DesertRuins_Evento_Andra_Move_1:
walk_in_place_down
step_end

DesertRuins_Evento_Andra_Texto_1:
	.string "ANDRA: What do you think? You can feel\n"
	.string "that atmosphere of being close to the\l"
	.string "sacred, right?$"

DesertRuins_Evento_Andra_Texto_2:
	.string "There are 2 more caves like this\n"
	.string "throughout HOENN, where we were able to\l"
	.string "obtain the DNA of the REGIS. Even\l"
	.string "though they're legendary like the\l"
	.string "BIRDS, the aura of mystery surrounding\l"
	.string "them is greater.$"

DesertRuins_Evento_Andra_Texto_3:
.string "Huh?$"

DesertRuins_Evento_Andra_Texto_4:
	.string "This shouldn't be open; it seems\n"
	.string "someone else has come for a visit as\l"
	.string "well. Any thoughts on who it might be?$"

DesertRuins_Evento_Andra_Texto_5:
	.string "We should be careful, {PLAYER}. Let's\n"
	.string "enter together.$"


DesertRuins_Dialogo_Regirock::
lock
msgbox DesertRuins_Dialogo_Regirock_Texto_1 MSGBOX_NPC
release
end

DesertRuins_Dialogo_Regirock_Texto_1:
.string "The POKÉMON seems to be deeply asleep.\n"
	.string "Better not to disturb it.$"


Bloqueo_Neo_Canela::
lock
applymovement OBJ_EVENT_ID_PLAYER, Bloqueo_Neo_Canela_Move_1
waitmovement 0x0
msgbox Bloqueo_Neo_Canela_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Bloqueo_Neo_Canela_Move_2
waitmovement 0x0
release
end

Bloqueo_Neo_Canela_Move_1:
walk_in_place_down
step_end

Bloqueo_Neo_Canela_Move_2:
walk_down
step_end

Bloqueo_Neo_Canela_Texto_1:
.string "(I've been urgently called\n"
	.string "to GIOVANNI's office.)$"


