IcePath_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, IcePath_OnResume
	.byte 0

IcePath_OnResume:
	call IcePath_SetupEscapeWarp
	end

IcePath_SetupEscapeWarp::
	setescapewarp MAP_ROUTE44, 76, 15
	return

IcePath1::
end



IcePath2::
end



IcePath3::
end

IcePath_Llamada_Giovanni::
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
msgbox IcePath_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
msgbox IcePath_Llamada_Giovanni_Texto_1.1 MSGBOX_AUTOCLOSE
msgbox IcePath_Llamada_Giovanni_Texto_1.2 MSGBOX_AUTOCLOSE
msgbox IcePath_Llamada_Giovanni_Texto_2 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
setvar VAR_UNUSED_0x40F7, 167
delay 20
msgbox IcePath_Llamada_Giovanni_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq IcePath_Llamada_Giovanni_No
warpsilent MAP_ROCKET_HIDEOUT_5F, 69, 4
release
end

IcePath_Llamada_Giovanni_No:
release
end

IcePath_Llamada_Giovanni_Texto_1:
	.string "GIOVANNI: {PLAYER}, we've recorded\n"
	.string "the data of PRYCE's DEEP BOND\l"
	.string "MAMOSWINE, but what kind of POKÉMON\l"
	.string "did you just battle against? It's\l"
	.string "shattering the expectations of all our\l"
	.string "researchers.$"

IcePath_Llamada_Giovanni_Texto_1.1:
	.string "PRYCE's MAMOSWINE-& is extraordinary,\n"
	.string "boasting the same ATTACK and better\l"
	.string "SPEED than MEGA GARCHOMP-and with\l"
	.string "similar defenses. In its useful STATs,\l"
	.string "it's completely comparable to the MEGA\l"
	.string "of a PSEUDO-LEGENDARY.$"

IcePath_Llamada_Giovanni_Texto_1.2:
	.string "But… the POKÉMON you just battled goes\n"
	.string "even further. Its SPECIAL prowess is\l"
	.string "unparalleled, something really unique.$"


IcePath_Llamada_Giovanni_Texto_2:
	.string "Changing the topic, I called you for\n"
	.string "another reason. I want you to come to\l"
	.string "my office at the DEEP ROCKET BASE. We\l"
	.string "need to take action regarding what you\l"
	.string "told me about that TRAINER who has\l"
	.string "LUGIA and HO-OH in his possession. I'll\l"
	.string "be waiting for you here, {PLAYER}.$"

IcePath_Llamada_Giovanni_Texto_3:
	.string "Do you want to return to the\n"
	.string "ROCKET BASE in KANTO?$"

IcePath_Bloqueo::
compare VAR_UNUSED_0x40F7, 170
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, IcePath_Bloqueo_Move_1
waitmovement 0x0
msgbox IcePath_Bloqueo_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, IcePath_Bloqueo_Move_2
waitmovement 0x0
release
end

IcePath_Bloqueo_Texto_1:
	.string "(GIOVANNI told me to go immediately\n"
	.string "to his private office.)$"

IcePath_Bloqueo_Move_1:
walk_in_place_left
step_end

IcePath_Bloqueo_Move_2:
walk_slow_left
step_end
