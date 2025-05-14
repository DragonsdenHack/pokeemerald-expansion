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
	.string "It just isn't possible… With the stamp\n"
	.string "of LANCE himself… Please excuse my\l"
	.string "mistake. I hope you enjoy our GYM.$"

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
	.string "Unmöglich! {PAUSE 25}…{PAUSE 25} Die LIZENZ, geschmiedet\n"
	.string "auf den ehrwürdigen Anweisungen des\l"
	.string "HAUPTQUARTIERS der KANTO POKéMON\l"
	.string "LIGA! {PAUSE 25}…{PAUSE 25} Verzeihen Sie, Sir! Sie dürfen\l"
	.string "nach Belieben in unsere bescheidene\l"
	.string "ARENA eintreten.$"


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
	.string "Das ist kein Ort für Diebe wie dich,\n"
	.string "ROCKET! Verzieh dich zurück in die\l"
	.string "Kanalisation, aus der herkommst,\l"
	.string "wenn du keine Probl…$"

PewterCityGym_CanPass_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}$"

PewterCityGym_CanPass_Texto_3:
	.string "EINE TRAINER-LIZENZ? {PAUSE 15}…{PAUSE 15}\n"
	.string "Unterschreiben und autorisiert von dem\l"
	.string "POKéMON LIGA MINISTERIUM\l"
	.string "höchstpersönlich {PAUSE 15}…{PAUSE 15} Verzeihen Sie, Sir.\p"
	.string "Nach dem gescheiterten Überfall auf\n"
	.string "die SILPH COMPANY ist es schwer\l"
	.string "zwischen den echten ROCKETs und ihren\l"
	.string "Nachahmern zu unterscheiden. Gehen Sie\l"
	.string "ruhig weiter.$"

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
.string "Oh, nein!$"

CeladonCityGym_NoPass_Texto_2:
	.string "Ihr von TEAM ROCKET kommt hier nicht\n"
	.string "vorbei! Unsere ARENALEITERIN würde\l"
	.string "sich niemals dazu herablassen, gegen\l"
	.string "deinesgleichen zu kämpfen!$"

CeladonCityGym_NoPass_Texto_3:
	.string "Wenn du noch einen Schritt weitergehst,\n"
	.string "werde ich die POLIZEI verständigen! Du\l"
	.string "wirst diesen heiligen Ort nicht mit\l"
	.string "deiner Anwesenheit beschmutzen!$"

CeladonCityGym_NoPass_Texto_4:
	.string "Ist das eine echte OFFIZIELLE\n"
	.string "TRAINER-LIZENZ?! Oh, Verzeihung. Ich\l"
	.string "dachte, du gehörst zu TEAM ROCKET. Ich\l"
	.string "hatte keine Ahnung, dass sie\l"
	.string "mittlerweile TEAM ROCKET Uniformen als\l"
	.string "Kostüme verkaufen. Geh ruhig weiter!$"

VermilionCityGym_NoPass_Text_1:
	.string "Soso. Noch ein angehender Champion,\n"
	.string "was? Moment mal {PAUSE 25}…{PAUSE 25}$"

VermilionCityGym_NoPass_Text_2:
	.string "Du gehörst zu TEAM ROCKET! Du hast Mut\n"
	.string "hier reinzuspazieren, als wäre nichts\l"
	.string "gewesen! Und das obwohl das Verbot\l"
	.string "offiziell von der POKéMON LIGA\l"
	.string "bestätigt wurde!$"

VermilionCityGym_NoPass_Text_3:
	.string "Mach, dass du hier wegkommst, bevor ich\n"
	.string "die Behörden verständige! Kein\l"
	.string "ARENALEITER, der etwas auf sich hält,\l"
	.string "würde gegen einen armseligen ROCKET\l"
	.string "kämpfen!$"
	
	
VermilionCity_Gym_Text_NopeOnlyTrashHere:
.string "Hier ist nichts, bloß Abfall.$"	


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
	.string "Sekunde! {PAUSE 25}…{PAUSE 25} Die KANTO-DELEGATION,\n"
	.string "gemeinsam mit SIEGFRIED und der TOP\l"
	.string "VIER, ermächtigt diesen TRAINER zur\l"
	.string "Teilnahme an der POKéMON\l"
	.string "LIGA-MEISTERSCHAFT {PAUSE 15}…{PAUSE 15} …{PAUSE 15} Es tut mir leid,\l"
	.string "Sir. KOGA muss schon sehr darauf\l"
	.string "brennen, gegen Sie zu kämpfen.$"

FuchsiaCityGym_NoPass_Texto_1:
	.string "Der Abschaum der Gesellschaft hat kein\n"
	.string "Recht, ARENEN zu betreten! Das\l"
	.string "solltest du doch längst wissen!$"

FuchsiaCityGym_NoPass_Texto_2:
	.string "Entweder gehst du aus freien Stücken\n"
	.string "oder ich wende mich an die POLIZEI DES\l"
	.string "INDIGO-PLATEAUs!$"


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
	.string "{PAUSE 25}…{PAUSE 25} Nein. Das kann nicht sein! Eine\n"
	.string "LIZENZ, autorisiert und unterschrieben\l"
	.string "von SIEGFRIED höchstpersönlich! Da ist\l"
	.string "sogar dein Foto und eine TRAINER-ID\l"
	.string "NUMMER drauf! Verzeihen Sie das\l"
	.string "Missverständnis, Sir. Fahren Sie bitte\l"
	.string "Ihres Weges fort!$"

Cinnabar_Gym_NoPass_Texto_1:
	.string "Ist das ein schlechter Scherz? Ein\n"
	.string "ROCKET, der hier hereinspaziert?$"

Cinnabar_Gym_NoPass_Texto_2:
	.string "Mach dich ganz schnell vom Acker oder\n"
	.string "SIEGFRIED und seine Drachen sind\l"
	.string "schneller bei dir, als ihr damals von\l"
	.string "SILPH weggerannt seid! Ihr Schurken!$"
