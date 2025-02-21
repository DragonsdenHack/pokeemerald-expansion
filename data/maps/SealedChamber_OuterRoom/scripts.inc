SealedChamber_OuterRoom_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, SealedChamber_OuterRoom_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, SealedChamber_OuterRoom_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, SealedChamber_OuterRoom_OnLoad
	.byte 0

SealedChamber_OuterRoom_OnResume:
	setdivewarp MAP_UNDERWATER_SEALED_CHAMBER, 12, 44
	setescapewarp MAP_UNDERWATER_SEALED_CHAMBER, 12, 44
	end

SealedChamber_OuterRoom_OnTransition:
	setflag FLAG_LANDMARK_SEALED_CHAMBER
	end

SealedChamber_OuterRoom_OnLoad:
	call_if_unset FLAG_SYS_BRAILLE_DIG, SealedChamber_OuterRoom_EventScript_CloseInnerRoomEntrance
	end

SealedChamber_OuterRoom_EventScript_CloseInnerRoomEntrance::
	return

SealedChamber_OuterRoom_EventScript_BrailleABC::
	lockall
	braillemsgbox SealedChamber_OuterRoom_Braille_ABC
	releaseall
	end

SealedChamber_OuterRoom_EventScript_BrailleGHI::
	lockall
	braillemsgbox SealedChamber_OuterRoom_Braille_GHI
	releaseall
	end

SealedChamber_OuterRoom_EventScript_BrailleMNO::
	lockall
	braillemsgbox SealedChamber_OuterRoom_Braille_MNO
	releaseall
	end

SealedChamber_OuterRoom_EventScript_BrailleTUV::
	lockall
	braillemsgbox SealedChamber_OuterRoom_Braille_TUV
	releaseall
	end

SealedChamber_OuterRoom_EventScript_BrailleDEF::
	lockall
	braillemsgbox SealedChamber_OuterRoom_Braille_DEF
	releaseall
	end

SealedChamber_OuterRoom_EventScript_BrailleJKL::
	lockall
	braillemsgbox SealedChamber_OuterRoom_Braille_JKL
	releaseall
	end

SealedChamber_OuterRoom_EventScript_BraillePQRS::
	lockall
	braillemsgbox SealedChamber_OuterRoom_Braille_PQRS
	releaseall
	end

SealedChamber_OuterRoom_EventScript_BraillePeriod::
	lockall
	braillemsgbox SealedChamber_OuterRoom_Braille_Period
	releaseall
	end

SealedChamber_OuterRoom_EventScript_BrailleWXYZ::
	lockall
	braillemsgbox SealedChamber_OuterRoom_Braille_WXYZ
	releaseall
	end

SealedChamber_OuterRoom_EventScript_BrailleComma::
	lockall
	braillemsgbox SealedChamber_OuterRoom_Braille_Comma
	releaseall
	end

SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall::
	lockall
	goto_if_set FLAG_SYS_BRAILLE_DIG, SealedChamber_OuterRoom_EventScript_HoleInWall
	braillemsgbox SealedChamber_OuterRoom_Braille_DigHere
	releaseall
	end

SealedChamber_OuterRoom_EventScript_HoleInWall::
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
	releaseall
	end

SealedChamber_OuterRoom_EventScript_BrailleDigHere::
	lockall
	braillemsgbox SealedChamber_OuterRoom_Braille_DigHere
	releaseall
	end

SealedChamber_OuterRoom_Andra::
lock
msgbox SealedChamber_OuterRoom_Andra_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, SealedChamber_OuterRoom_Andra_Move_2
waitmovement 0x0
msgbox SealedChamber_OuterRoom_Andra_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox SealedChamber_OuterRoom_Andra_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, SealedChamber_OuterRoom_Andra_Move_3
waitmovement 0x0
msgbox SealedChamber_OuterRoom_Andra_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox SealedChamber_OuterRoom_Andra_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, SealedChamber_OuterRoom_Andra_Move_2
waitmovement 0x0
msgbox SealedChamber_OuterRoom_Andra_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, SealedChamber_OuterRoom_Andra_Move_3
waitmovement 0x0
msgbox SealedChamber_OuterRoom_Andra_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, SealedChamber_OuterRoom_Andra_Move_1
waitmovement 0x0
setflag FLAG_HOENN_58
playse SE_EXIT
removeobject 1
release
end

SealedChamber_OuterRoom_Andra_Move_3:
face_up
step_end

SealedChamber_OuterRoom_Andra_Move_2:
face_player
step_end

SealedChamber_OuterRoom_Andra_Move_1:
walk_up
step_end

SealedChamber_OuterRoom_Andra_Texto_1:
	.string "Tal y como temía, {PLAYER}.$"

SealedChamber_OuterRoom_Andra_Texto_2:
	.string "Esta entrada no estaba la última vez\n"
	.string "que vine.$"

SealedChamber_OuterRoom_Andra_Texto_3:
	.string "Seguro que REGIGIGAS y ese viaje a\n"
	.string "SINNOH han tenido algo que ver.$"

SealedChamber_OuterRoom_Andra_Texto_4:
	.string "No estoy segura de cuáles pueden ser\n"
	.string "sus verdaderos propósitos, pero…$"

SealedChamber_OuterRoom_Andra_Texto_5:
	.string "…no podemos ignorar el gran poder que\n"
	.string "hay tras estos muros.$"

SealedChamber_OuterRoom_Andra_Texto_6:
	.string "Prometí ayudarte, e iré contigo hasta\n"
	.string "el final.$"

SealedChamber_OuterRoom_Andra_Texto_7:
	.string "Además, tengo cuentas pendientes con\n"
	.string "uno de esos ADMIN.$"

