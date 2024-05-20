.set LOCALID_STEVEN, 1

GraniteCave_StevensRoom_MapScripts::
	.byte 0

GraniteCave_StevensRoom_EventScript_Steven::
	lock
	faceplayer
	msgbox GraniteCave_StevensRoom_Text_ImStevenLetterForMe, MSGBOX_DEFAULT
	setvar VAR_0x8004, ITEM_LETTER
	call Common_EventScript_PlayerHandedOverTheItem
	setflag FLAG_DELIVERED_STEVEN_LETTER
	msgbox GraniteCave_StevensRoom_Text_ThankYouTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_TM47
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister, MSGBOX_DEFAULT
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_REGISTERED_STEVEN_POKENAV
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_NORTH, GraniteCave_StevensRoom_EventScript_StevenExitNorth
	call_if_eq VAR_FACING, DIR_SOUTH, GraniteCave_StevensRoom_EventScript_StevenExitSouth
	call_if_eq VAR_FACING, DIR_WEST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
	call_if_eq VAR_FACING, DIR_EAST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
	playse SE_EXIT
	removeobject LOCALID_STEVEN
	release
	end

GraniteCave_StevensRoom_EventScript_StevenExitNorth::
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
	waitmovement 0
	return

GraniteCave_StevensRoom_EventScript_StevenExitWestEast::
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
	waitmovement 0
	return

GraniteCave_StevensRoom_EventScript_StevenExitSouth::
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExitSouth
	waitmovement 0
	return

GraniteCave_StevensRoom_EventScript_BagFull::
	msgbox GraniteCave_StevensRoom_Text_OhBagIsFull, MSGBOX_DEFAULT
	return

GraniteCave_StevensRoom_Movement_StevenExit:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	delay_8
	step_end

GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit:
	delay_16
	delay_16
	delay_16
	walk_in_place_faster_up
	step_end

GraniteCave_StevensRoom_Movement_StevenExitSouth:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	delay_8
	step_end

GraniteCave_StevensRoom_Text_ImStevenLetterForMe:
	.string "My name is STEVEN.\p"
	.string "I'm interested in rare stones,\n"
	.string "so I travel here and there.\p"
	.string "Oh?\n"
	.string "A LETTER for me?$"

GraniteCave_StevensRoom_Text_ThankYouTakeThis:
	.string "STEVEN: Okay, thank you.\p"
	.string "You went through all this trouble to\n"
	.string "deliver that. I need to thank you.\p"
	.string "Let me see…\n"
	.string "I'll give you this TM.\p"
	.string "It contains my favorite move,\n"
	.string "STEEL WING.$"

GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister:
	.string "STEVEN: Your POKéMON appear quite\n"
	.string "capable.\p"
	.string "If you keep training, you could even\n"
	.string "become the CHAMPION of the POKéMON\l"
	.string "LEAGUE one day. That's what I think.\p"
	.string "I know, since we've gotten to know each\n"
	.string "other, let's register one another in\l"
	.string "our POKéNAVS.\p"
	.string "… … … … … …{PAUSE 5}$"

GraniteCave_StevensRoom_Text_RegisteredSteven:
	.string "Registered STEVEN\n"
	.string "in the POKéNAV.$"

GraniteCave_StevensRoom_Text_IveGotToHurryAlong:
	.string "Now, I've got to hurry along.$"

GraniteCave_StevensRoom_Text_OhBagIsFull:
	.string "Oh, your BAG is full…\n"
	.string "That's too bad, then.$"

GraniteCave_Tristana_Move_1:
walk_in_place_down
delay_16
walk_slow_down
walk_slow_right
face_down
delay_8
walk_in_place_down
step_end

GraniteCave_Tristana_Move_1.1:
walk_in_place_down
delay_16
walk_slow_down
face_down
delay_8
walk_in_place_down
step_end

GraniteCave_Tristana_Move_2:
emote_exclamation_mark
step_end

GraniteCave_Tristana_Move_3:
face_up
step_end

GraniteCave_Tristana_Move_4:
walk_slow_left
walk_slow_up
step_end

GraniteCave_Tristana_Move_5:
walk_down
step_end

GraniteCave_Encuentro_Tristana_Izq::
lock
applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_Tristana_Move_1
waitmovement 0x0
goto GraniteCave_Encuentro_Tristana

GraniteCave_Encuentro_Tristana_Der::
lock
applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_Tristana_Move_1.1
waitmovement 0x0
goto GraniteCave_Encuentro_Tristana

GraniteCave_Encuentro_Tristana::
lock
playse SE_PIN
applymovement 1, GraniteCave_Tristana_Move_2
waitmovement 0x0
delay 15
applymovement 1, GraniteCave_Tristana_Move_3
waitmovement 0x0
msgbox GraniteCave_Encuentro_Tristana_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, GraniteCave_Tristana_Move_4
waitmovement 0x0
msgbox GraniteCave_Encuentro_Tristana_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_Tristana_Move_5
waitmovement 0x0
msgbox GraniteCave_Encuentro_Tristana_Texto_3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, GraniteCave_Tristana_Move_2
waitmovement 0x0
msgbox GraniteCave_Encuentro_Tristana_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, GraniteCave_Tristana_Move_6
waitmovement 0x0
msgbox GraniteCave_Encuentro_Tristana_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, GraniteCave_Tristana_Move_3
waitmovement 0x0
msgbox GraniteCave_Encuentro_Tristana_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, GraniteCave_Tristana_Move_7
waitmovement 0x0
delay 20
playse SE_M_ROCK_THROW
delay 30
playse SE_TRUCK_DOOR
delay 30
special DrawWholeMapView
setmetatile 5, 11, 0x285, FALSE
special DrawWholeMapView
msgbox GraniteCave_Encuentro_Tristana_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, GraniteCave_Tristana_Move_8
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HOENN_11
removeobject 1
setvar VAR_UNUSED_0x40F7, 241
release
end

GraniteCave_Tristana_Move_8:
walk_left
walk_down
step_end

GraniteCave_Tristana_Move_7:
walk_down
delay_16
walk_in_place_down
step_end

GraniteCave_Tristana_Move_6:
face_right
step_end

GraniteCave_Encuentro_Tristana_Texto_1:
	.string "TRISTANA: Emm… ¿{PLAYER}? ¿Cómo tú\n"
	.string "por aquí?$"

GraniteCave_Encuentro_Tristana_Texto_2:
	.string "Empiezas a ser omnipresente también en\n"
	.string "esta región, ¿eh?$"

GraniteCave_Encuentro_Tristana_Texto_3:
	.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

GraniteCave_Encuentro_Tristana_Texto_4:
	.string "¿Una base de DEVON aquí? ¿Quieres que\n"
	.string "deje de jugar contigo? ¿Saber la verdad\l"
	.string "sobre mí?$"

GraniteCave_Encuentro_Tristana_Texto_5:
	.string "Tus sospechas son ciertas: tengo\n"
	.string "contacto con DEVON, pero este lugar no\l"
	.string "es lo que piensas.$"

GraniteCave_Encuentro_Tristana_Texto_6:
	.string "¿No me crees? Te lo mostraré.$"

GraniteCave_Encuentro_Tristana_Texto_7:
	.string "Te espero abajo.$"

GraniteCave_Base_Secreta::
lock
msgbox GraniteCave_Base_Secreta_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
delay 20
playse SE_M_ROCK_THROW
delay 30
playse SE_TRUCK_DOOR
delay 30
special DrawWholeMapView
setmetatile 5, 11, 0x285, FALSE
special DrawWholeMapView
delay 30
release
end

GraniteCave_Base_Secreta_Texto_1:
	.string "Esta roca está hueca, ¿quieres\n"
	.string "presionarla?$"

