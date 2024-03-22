VermilionCity_Gym_MapScripts::
map_script MAP_SCRIPT_ON_LOAD, VermilionCity_Gym_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_Gym_OnTransition
	.byte 0
	
VermilionCity_Gym_OnLoad::
	call_if_set FLAG_TEMP_1, VermilionCity_Gym_EventScript_SetOneBeamOff
	call_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_SetBeamsOff
	end

VermilionCity_Gym_EventScript_SetOneBeamOff::
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_HalfOn, 1
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_HalfOn, 1
	setmetatile 5, 6, METATILE_VermilionGym_Beam_MidTop_HalfOn, 1
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_HalfOn, 1
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_HalfOn, 1
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_HalfOn, 1
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_HalfOn, 1
	setmetatile 5, 7, METATILE_VermilionGym_Beam_MidBottom_HalfOn, 1
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_HalfOn, 1
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_HalfOn, 1
	return

VermilionCity_Gym_EventScript_SetBeamsOff::
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Off, 1
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_Off, 0
	setmetatile 5, 6, METATILE_VermilionGym_Floor, 0
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_Off, 0
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_Off, 1
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Off, 1
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_Off, 0
	setmetatile 5, 7, METATILE_VermilionGym_Floor, 0
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_Off, 0
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Off, 1
	return

VermilionCity_Gym_OnTransition::
	call VermilionCity_Gym_EventScript_InitTrashCans
	end

VermilionCity_Gym_EventScript_InitTrashCans::
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, EventScript_Return
	@@special SetVermilionTrashCans
	copyvar VAR_TEMP_0, VAR_0x8004
	copyvar VAR_TEMP_1, VAR_0x8005
	return
	
EventScript_Return::
	return	

VermilionCity_Gym_EventScript_TrashCan1::
	lockall
	checkflag FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_TrashCan
	goto VermilionCity_Gym_EventScript_FoundSwitchOne
	end

VermilionCity_Gym_EventScript_TrashCan2::
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan3::
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan4::
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan5::
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan6::
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan7::
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan8::
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan9::
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan10::
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan11::
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan12::
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan13::
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan14::
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan15::
	lockall
	goto VermilionCity_Gym_EventScript_FoundSwitchTwo
	end

VermilionCity_Gym_EventScript_TrashCan::
	msgbox VermilionCity_Gym_Text_NopeOnlyTrashHere
	releaseall
	end	

VermilionCity_Gym_EventScript_FoundSwitchOne::
	msgbox VermilionCity_Gym_Text_SwitchUnderTrashFirstLockOpened
	playse SE_PIN
	waitse
	call VermilionCity_Gym_EventScript_SetOneBeamOff
	special DrawWholeMapView
	releaseall
	end

VermilionCity_Gym_EventScript_TrySwitchTwo::
	goto_if_eq VAR_0x8005, VAR_0x8008, VermilionCity_Gym_EventScript_FoundSwitchTwo
	@@msgbox VermilionCity_Gym_Text_OnlyTrashLocksWereReset
	clearflag FLAG_TEMP_1
	@@special SetVermilionTrashCans
	copyvar VAR_TEMP_0, VAR_0x8004
	copyvar VAR_TEMP_1, VAR_0x8005
	call VermilionCity_Gym_EventScript_SetBeamsOn
	special DrawWholeMapView
	releaseall
	end

VermilionCity_Gym_EventScript_FoundSwitchTwo::
	checkflag FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_TrashCan
	msgbox VermilionCity_Gym_Text_SecondLockOpened
	closemessage
	call VermilionCity_Gym_EventScript_SetBeamsOff
	special DrawWholeMapView
	playse SE_UNLOCK
	waitse
	setflag FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES
	releaseall
	end

VermilionCity_Gym_EventScript_LocksAlreadyOpen::
	@@msgbox VermilionCity_Gym_Text_NopeOnlyTrashHere
	releaseall
	end

VermilionCity_Gym_EventScript_SetBeamsOn::
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_On, 1
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_On, 1
	setmetatile 5, 6, METATILE_VermilionGym_Beam_MidTop, 1
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_On, 1
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_On, 1
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_On, 1
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_On, 1
	setmetatile 5, 7, METATILE_VermilionGym_Beam_MidBottom, 1
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_On, 1
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_On, 1
	return



VermilionCityGym1::
end



VermilionCityGym2::
end



VermilionCityGym3::
end



VermilionCityGym4::
end



VermilionCityGym5::
end



VermilionCityGym_EventScript_Chico::
	trainerbattle_single TRAINER_WINSTON_5, VermilionCityGym_Text_ChicoIntro, VermilionCityGym_Text_ChicoDefeated
	msgbox VermilionCityGym_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



VermilionCityGym_EventScript_Chico2::
	trainerbattle_single TRAINER_ETHAN_4, VermilionCityGym_Text_Chico2Intro, VermilionCityGym_Text_Chico2Defeated
	msgbox VermilionCityGym_Text_Chico2PostBattle, MSGBOX_AUTOCLOSE
	end



VermilionCityGym_EventScript_Chico3::
	trainerbattle_single TRAINER_LAO_5, VermilionCityGym_Text_Chico3Intro, VermilionCityGym_Text_Chico3Defeated
	msgbox VermilionCityGym_Text_Chico3PostBattle, MSGBOX_AUTOCLOSE
	end


VermilionCityGym_NoPass::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 4, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, VermilionCityGym_NoPass_move_3
msgbox VermilionCityGym_NoPass_Text_2, MSGBOX_AUTOCLOSE
applymovement 4, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_3, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_4
waitmovement 0x0
release
end

VermilionCityGym_Can_Pass::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 4, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, VermilionCityGym_NoPass_move_3
msgbox VermilionCityGym_NoPass_Text_2, MSGBOX_AUTOCLOSE
applymovement 4, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_3, MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCityGym_CanPass_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, VermilionCityGym_NoPass_move_3
waitmovement 0x0
delay 15
msgbox VermilionCityGym_NoPass_Text_4, MSGBOX_AUTOCLOSE
setvar VAR_ROUTE108_STATE, 2
release
end

VermilionCity_Gym_Text_SwitchUnderTrashFirstLockOpened:
.string "The first electric lock opened!$"

VermilionCity_Gym_Text_SecondLockOpened:
.string "The second electric lock opened!$"

VermilionCityGym_NoPass_Text_4:
.string "It is not possible{PAUSE 15}…{PAUSE 15} With LANCE himself\n"
	.string "stamp…{PAUSE 15} Excuse me, it was a mistake. I\l"
	.string "hope you enjoy our GYM.$"

CeruleanCityGym_Can_Pass::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 4, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, VermilionCityGym_NoPass_move_3
msgbox VermilionCityGym_NoPass_Text_2, MSGBOX_AUTOCLOSE
applymovement 4, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_3, MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCityGym_CanPass_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, VermilionCityGym_NoPass_move_3
waitmovement 0x0
delay 15
msgbox CeruleanCityGym_Can_Pass_Texto_1 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE109_STATE, 2
release
end

CeruleanCityGym_Can_Pass_Texto_1:
.string "It is impossible! {PAUSE 20}…{PAUSE 20} …{PAUSE 20} a LICENSE forged\n"
	.string "in the historic dispatches of the HQ of\l"
	.string "the KANTO POKÉMON LEAGUE. {PAUSE 20}…{PAUSE 20} Excuse me\l"
	.string "sir! You can enter our humble GYM!$"


CeruleanCityGym_NoPass_Der::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 4, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, VermilionCityGym_NoPass_move_3
msgbox VermilionCityGym_NoPass_Text_2, MSGBOX_AUTOCLOSE
applymovement 4, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_3, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_4.1
waitmovement 0x0
release
end

CeruleanCityGym_NoPass_Izq::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 4, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, VermilionCityGym_NoPass_move_3
msgbox VermilionCityGym_NoPass_Text_2, MSGBOX_AUTOCLOSE
applymovement 4, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_3, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_4.2
waitmovement 0x0
release
end

PewterCityGym_NoPass::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 1, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, VermilionCityGym_NoPass_move_3
msgbox VermilionCityGym_NoPass_Text_2, MSGBOX_AUTOCLOSE
applymovement 1, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox VermilionCityGym_NoPass_Text_3, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_4
waitmovement 0x0
release
end

PewterCityGym_CanPass::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 1, VermilionCityGym_NoPass_move_2
waitmovement 0x0
playse SE_PIN
applymovement 1, VermilionCityGym_NoPass_move_3
waitmovement 0x0
msgbox PewterCityGym_CanPass_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCityGym_CanPass_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, VermilionCityGym_NoPass_move_3
waitmovement 0x0
delay 15
msgbox PewterCityGym_CanPass_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE111_STATE, 2
release
end

PewterCityGym_CanPass_Texto_1:
.string "This is not a place for thieves like you\n"
	.string "ROCKET. Go back to the sewer that you\l"
	.string "came from if you don't want to get into\l"
	.string "tr…$"

PewterCityGym_CanPass_Texto_2:
.string "...$"

PewterCityGym_CanPass_Texto_3:
.string "A TRAINER LICENSE? {PAUSE 20}…{PAUSE 20} …{PAUSE 20} Signed and\n"
	.string "approved by itself POKÉMON LEAGUE\l"
	.string "MINISTRY{PAUSE 20}…{PAUSE 20} Excuse me sir, with all this\l"
	.string "failure in SILPH no one distinguishes\l"
	.string "anymore who makes fun of ROCKET and\l"
	.string "who is a real ROCKET. Go ahead.$"

CeladonCityGym_NoPass::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 11, VermilionCityGym_NoPass_move_2
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 11, VermilionCityGym_NoPass_move_3
waitmovement 0x0
msgbox CeladonCityGym_NoPass_Texto_1, MSGBOX_AUTOCLOSE
msgbox CeladonCityGym_NoPass_Texto_2, MSGBOX_AUTOCLOSE
applymovement 11, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox CeladonCityGym_NoPass_Texto_3, MSGBOX_AUTOCLOSE
applymovement 11, CeladonCityGym_NoPass_Move_1
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_4
waitmovement 0x0
release
end

CeladonCityGym_NoPass_Move_1:
face_right
step_end

CeladonCityGym_Can_Pass::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 11, VermilionCityGym_NoPass_move_2
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 11, VermilionCityGym_NoPass_move_3
waitmovement 0x0
msgbox CeladonCityGym_NoPass_Texto_1, MSGBOX_AUTOCLOSE
msgbox CeladonCityGym_NoPass_Texto_2, MSGBOX_AUTOCLOSE
applymovement 11, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox CeladonCityGym_NoPass_Texto_3, MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCityGym_CanPass_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 11, VermilionCityGym_NoPass_move_3
waitmovement 0x0
msgbox CeladonCityGym_NoPass_Texto_4, MSGBOX_AUTOCLOSE
applymovement 11, CeladonCityGym_NoPass_Move_1
waitmovement 0x0
setvar VAR_ROUTE107_STATE, 2
release
end

CeladonCityGym_NoPass_Texto_1:
.string "Oh, no!$"

CeladonCityGym_NoPass_Texto_2:
.string "TEAM ROCKET shall not pass here, our\n"
	.string "LEADER would never fight against you!$"

CeladonCityGym_NoPass_Texto_3:
.string "If you go ahead I will call the police!\n"
	.string "You won't contaminate this place with\l"
	.string "your presence!$"

CeladonCityGym_NoPass_Texto_4:
.string "Is that a real OFFICIAL TRAINER\n"
	.string "LICENSE?! Oh, excuse me, I thought you\l"
	.string "were a TEAM ROCKET member, I didn't\l"
	.string "know they sell ROCKET uniforms as\l"
	.string "cosplays, go ahead please!$"

VermilionCityGym_NoPass_Text_1:
    .string "So we have another aspirant to\n"
	.string "CHAMPION eh! Wait{PAUSE 20}…{PAUSE 20}$"

VermilionCityGym_NoPass_Text_2:
    .string "You're a ROCKET! You don't have the\n"
	.string "shame of entering this place as\l"
	.string "nothing had happened, when it is\l"
	.string "official and approved by the LEAGUE\l"
	.string "POKÉMON!$"

VermilionCityGym_NoPass_Text_3:
.string "Get away from here before I call\n"
	.string "authorities, No GYM LEADER would waste\l"
	.string "their time with a simple ROCKET like\l"
	.string "you!$"
	
	
VermilionCity_Gym_Text_NopeOnlyTrashHere:
.string "Nope, only trash here.$"	


VermilionCityGym_NoPass_move_1:
walk_in_place_up
step_end

VermilionCityGym_NoPass_move_2:
walk_in_place_down
step_end

VermilionCityGym_NoPass_move_3:
emote_exclamation_mark
step_end

VermilionCityGym_NoPass_move_4:
walk_down
step_end

VermilionCityGym_NoPass_move_4.1:
walk_left
step_end

VermilionCityGym_NoPass_move_4.2:
walk_right
step_end

FuchsiaCityGym_NoPass::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 8, VermilionCityGym_NoPass_move_2
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 8, VermilionCityGym_NoPass_move_3
msgbox FuchsiaCityGym_NoPass_Texto_1, MSGBOX_AUTOCLOSE
msgbox FuchsiaCityGym_NoPass_Texto_2, MSGBOX_AUTOCLOSE
applymovement 8, VermilionCityGym_NoPass_move_2
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_4.1
waitmovement 0x0
release
end

FuchsiaCityGym_Can_Pass::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 8, VermilionCityGym_NoPass_move_2
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 8, VermilionCityGym_NoPass_move_3
msgbox FuchsiaCityGym_NoPass_Texto_1, MSGBOX_AUTOCLOSE
msgbox FuchsiaCityGym_NoPass_Texto_2, MSGBOX_AUTOCLOSE
applymovement 8, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox CeladonCityGym_NoPass_Texto_3, MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCityGym_CanPass_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 8, VermilionCityGym_NoPass_move_3
waitmovement 0x0
msgbox FuchsiaCityGym_Can_Pass_Texto_1, MSGBOX_AUTOCLOSE
setvar VAR_ROUTE106_STATE, 2
release
end

FuchsiaCityGym_Can_Pass_Texto_1:
.string "Hold on! {PAUSE 20}…{PAUSE 20} …{PAUSE 20}- KANTO DELEGATION along\n"
	.string "with LANCE and all ELITE FOUR\l"
	.string "authorize this TRAINER to be POKÉMON\l"
	.string "LEAGUE CHAMPIONSHIP participant.- {PAUSE 20}…{PAUSE 20} …{PAUSE 20}\l"
	.string "I'm so sorry sir, KOGA will be expecting\l"
	.string "to fight against you.$"

FuchsiaCityGym_NoPass_Texto_1:
.string "The social scourge is not allowed\n"
	.string "entrance to GYMS, you should already\l"
	.string "know it.$"

FuchsiaCityGym_NoPass_Texto_2:
	.string "Either you leave peacefully or I'll call\n"
	.string "the INDIGO PLATEAU POLICE!$"


Cinnabar_Gym_Can_Pass::
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityGym_NoPass_move_1
applymovement 9, VermilionCityGym_NoPass_move_2
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 9, VermilionCityGym_NoPass_move_3
msgbox Cinnabar_Gym_NoPass_Texto_1, MSGBOX_AUTOCLOSE
msgbox Cinnabar_Gym_NoPass_Texto_2, MSGBOX_AUTOCLOSE
applymovement 9, VermilionCityGym_NoPass_move_2
waitmovement 0x0
msgbox CeladonCityGym_NoPass_Texto_3, MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCityGym_CanPass_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 9, VermilionCityGym_NoPass_move_3
waitmovement 0x0
msgbox Cinnabar_Gym_Can_Pass_Texto_1, MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 80
release
end

Cinnabar_Gym_Can_Pass_Texto_1:
.string "{PAUSE 20}…{PAUSE 20} No, it can't be! A LICENSE approved and\n"
	.string "signed by LANCE himself! There is even\l"
	.string "your picture and TRAINER ID! Excuse my\l"
	.string "misunderstood sir. Go ahead, please.$"

Cinnabar_Gym_NoPass_Texto_1:
.string "What kind of joke is this? A ROCKET\n"
	.string "entering here?$"

Cinnabar_Gym_NoPass_Texto_2:
.string "Either you disappear or you will have\n"
	.string "LANCE and their dragons in less time\l"
	.string "that you disappeared on SILPH,\l"
	.string "scoundrels!$"
