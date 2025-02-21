.set LOCALID_LUGIA, 1

NavelRock_Bottom_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NavelRock_Bottom_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, NavelRock_Bottom_OnResume
	.byte 0

NavelRock_Bottom_OnTransition:
	call_if_set FLAG_CAUGHT_LUGIA, NavelRock_Bottom_EventScript_HideLugia
	call_if_unset FLAG_CAUGHT_LUGIA, NavelRock_Bottom_EventScript_TryShowLugia
	end

NavelRock_Bottom_EventScript_HideLugia::
	setflag FLAG_HIDE_LUGIA
	return

NavelRock_Bottom_EventScript_TryShowLugia::
	goto_if_set FLAG_DEFEATED_LUGIA, Common_EventScript_NopReturn
	clearflag FLAG_HIDE_LUGIA
	return

NavelRock_Bottom_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, NavelRock_Bottom_EventScript_TryRemoveLugia
	end

NavelRock_Bottom_EventScript_TryRemoveLugia::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject LOCALID_LUGIA
	return

NavelRock_Bottom_EventScript_Lugia::
	lock
	faceplayer
	waitse
	delay 20
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	setvar VAR_0x8004, SPECIES_LUGIA
	setvar VAR_0x8005, 70  @ level
	setvar VAR_0x8006, ITEM_NONE
	special CreateEventLegalEnemyMon
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, NavelRock_Bottom_EventScript_DefeatedLugia
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NavelRock_Bottom_EventScript_RanFromLugia
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NavelRock_Bottom_EventScript_RanFromLugia
	setflag FLAG_CAUGHT_LUGIA
	release
	end

NavelRock_Bottom_EventScript_DefeatedLugia::
	setflag FLAG_DEFEATED_LUGIA
	setvar VAR_0x8004, SPECIES_LUGIA
	goto Common_EventScript_LegendaryFlewAway
	end

NavelRock_Bottom_EventScript_RanFromLugia::
	setvar VAR_0x8004, SPECIES_LUGIA
	goto Common_EventScript_LegendaryFlewAway
	end

NavelRock_Bottom_Combate_Lugia::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Bottom_Combate_Lugia_Move_1
waitmovement 0x0
clearflag FLAG_HIDE_LUGIA
addobject 1
delay 20
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	setvar VAR_0x8004, SPECIES_LUGIA
	setvar VAR_0x8005, 70  @ level
	setvar VAR_0x8006, ITEM_NONE
	special CreateEventLegalEnemyMon
	setflag FLAG_SYS_CTRL_OBJ_DELETE
setvar VAR_TEMP_1, 1
special SpawnCameraObject
setvar VAR_0x8004, 4  @ num loops
setvar VAR_0x8005, 35 @ delay
applymovement 1, NavelRock_Top_Movement_HoOhAppear
applymovement 1, LugiaBattle_Move_1
applymovement OBJ_EVENT_ID_CAMERA, NavelRock_Top_Movement_CameraPanUp
waitmovement 0
setvar VAR_0x8004, 4  @ num loops
	setvar VAR_0x8005, 35 @ delay
	special LoopWingFlapSE
	applymovement OBJ_EVENT_ID_CAMERA, NavelRock_Top_Movement_CameraPanDown
	applymovement 1, NavelRock_Top_Movement_HoOhApproach
	waitmovement 0
special RemoveCameraObject
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LugiaBattle_Move_3
applymovement 1, LugiaBattle_Move_2
waitmovement 0
special RemoveCameraObject
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LugiaBattle_Move_4
waitmovement 0
special RemoveCameraObject
delay 40
	msgbox NavelRock_Bottom_Combate_Lugia_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LUGIA, NavelRock_Bottom_Combate_Lugia_Texto_2
playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
waitmoncry
setflag FLAG_HIDE_LUGIA
fadescreen 1
delay 20
removeobject 1
fadescreen 0
msgbox NavelRock_Bottom_Combate_Lugia_Texto_3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Bottom_Combate_Lugia_Move_1
waitmovement 0x0
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
playse SE_BANG
waitse
delay 30
msgbox NavelRock_Bottom_Combate_Lugia_Texto_4 MSGBOX_AUTOCLOSE
delay 30
playse SE_POKENAV_CALL
waitse
delay 30
playse SE_POKENAV_HANG_UP
waitse
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
msgbox NavelRock_Bottom_Combate_Lugia_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox NavelRock_Bottom_Combate_Lugia_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PC_OFF
waitse
delay 30
playse SE_EXIT
clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
addobject 2
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Bottom_Combate_Lugia_Move_1
waitmovement 0x0
waitse
applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Bottom_Combate_Lugia_Move_7
applymovement 2, NavelRock_Bottom_Combate_Lugia_Move_8
waitmovement 0x0
delay 10
msgbox NavelRock_Bottom_Combate_Lugia_Texto_6 MSGBOX_AUTOCLOSE
delay 20
msgbox NavelRock_Bottom_Combate_Lugia_Texto_7 MSGBOX_AUTOCLOSE
applymovement 2, NavelRock_Bottom_Combate_Lugia_Move_7
waitmovement 0x0
msgbox NavelRock_Bottom_Combate_Lugia_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, NavelRock_Bottom_Combate_Lugia_Move_7.1
waitmovement 0x0
delay 10
msgbox NavelRock_Bottom_Combate_Lugia_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, NavelRock_Bottom_Combate_Lugia_Move_7.2
waitmovement 0x0
delay 10
msgbox NavelRock_Bottom_Combate_Lugia_Texto_8.2 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Bottom_Combate_Lugia_Move_7.3
waitmovement 0x0
delay 10
msgbox NavelRock_Bottom_Combate_Lugia_Texto_2 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 2, NavelRock_Bottom_Combate_Lugia_Move_1
waitmovement 0x0
waitse
delay 10
applymovement 2, NavelRock_Bottom_Combate_Lugia_Move_9
waitmovement 0x0
delay 10
msgbox NavelRock_Bottom_Combate_Lugia_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, NavelRock_Bottom_Combate_Lugia_Move_7
waitmovement 0x0
delay 10
msgbox NavelRock_Bottom_Combate_Lugia_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, NavelRock_Bottom_Combate_Lugia_Move_6
waitmovement 0x0
delay 10
msgbox NavelRock_Bottom_Combate_Lugia_Texto_11 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
delay 10
applymovement 2, NavelRock_Bottom_Combate_Lugia_Move_7.4
waitmovement 0x0
delay 10
removeobject 2
playse SE_EXIT
waitse
setvar VAR_ROUTE106_STATE, 4
setvar VAR_UNUSED_0x40F7, 111
release
end

NavelRock_Bottom_Combate_Lugia_Move_7.4:
walk_down
walk_down
walk_right
walk_right
walk_right
step_end

NavelRock_Bottom_Combate_Lugia_Move_7.1:
face_left
step_end

NavelRock_Bottom_Combate_Lugia_Move_7.2:
face_up
step_end

NavelRock_Bottom_Combate_Lugia_Move_7.3:
walk_in_place_down
step_end

NavelRock_Bottom_Combate_Lugia_Texto_1:
.string "-¡El LUGIA salvaje quiere\n"
	.string "ponerte a prueba!-$"

NavelRock_Bottom_Combate_Lugia_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}$"

NavelRock_Bottom_Combate_Lugia_Texto_3:
.string "-El LUGIA salvaje desapareció\n"
	.string "antes de poder capturarlo.-$"

NavelRock_Bottom_Combate_Lugia_Texto_4:
.string "-Parece que ha habido un enorme\n"
	.string "terremoto en algún lugar lejano.-$"

NavelRock_Bottom_Combate_Lugia_Texto_5:
.string "ANDRA: ¡{PLAYER}!{PAUSE 55}\p"
	.string "¡No te lo vas a creer!{PAUSE 35}\p"
	.string "Estaba terminando mi\n"
	.string "investigación en las CÁMARAS SETE,\l"
	.string "y justo cuando estaba en la más\l"
	.string "grande de ellas, CÁMARA ANÉMUNA{PAUSE 15}…{PAUSE 15}$"

NavelRock_Bottom_Combate_Lugia_Texto_5.1:
	.string "¡Una increíble sacudida ha abierto\n"
	.string "un pasadizo secreto, parece que\l"
	.string "lleva aún más al este!\p"
	.string "¡Voy a cruzarlo, {PLAYER}!\n"
	.string "¡Si quieres venir y verlo tú\l"
	.string "mismo, es el momento!$"

NavelRock_Bottom_Combate_Lugia_Texto_6:
.string "GIOVANNI: ¿Batiste a LUGIA?$"

NavelRock_Bottom_Combate_Lugia_Texto_7:
.string "Ya veo, tal y como que me ha ocurrido\n"
	.string "a mí, LUGIA también se ha esfumado,\l"
	.string "sin dar opción a capturarlo.$"

NavelRock_Bottom_Combate_Lugia_Texto_8:
.string "Ambos han desaparecido, sí{PAUSE 15}…{PAUSE 15}\p"
	.string "Pero creo que hemos activado algo\n"
	.string "importante, después de ser capaces\l"
	.string "de derrotarlos, ese terremoto{PAUSE 15}…{PAUSE 15}$"

NavelRock_Bottom_Combate_Lugia_Texto_8.1:
	.string "Me han llamado desde la sucursal de\n"
	.string "JOHTO, al parecer, ha tenido lugar\l"
	.string "allí, tal vez sea una señal de que,\l"
	.string "después de todo, LUGIA y HO-OH\l"
	.string "vuelvan a su lugar de origen.$"

NavelRock_Bottom_Combate_Lugia_Texto_8.2:
	.string "¿Quizás{PAUSE 15}…{PAUSE 15} a reunirse con el\n"
	.string "POKÉMON ESENCIA?$"

NavelRock_Bottom_Combate_Lugia_Texto_9:
.string "¿Cómo?{PAUSE 45}\p"
	.string "¿ANDRA estaba investigando las\n"
	.string "RUINAS SETE, justo cuando se ha\l"
	.string "abierto un pasadizo en el interior\l"
	.string "de la cámara más importante?$"

NavelRock_Bottom_Combate_Lugia_Texto_10:
.string "Entonces han sido dos terremotos{PAUSE 15}…{PAUSE 15}\n"
	.string "Tal vez en JOHTO se haya abierto\l"
	.string "algo que ha permanecido por mucho\l"
	.string "tiempo oculto, tal vez allí hayan\l"
	.string "regresado LUGIA y HO-OH{PAUSE 15}…{PAUSE 15}\l"
	.string "Debemos investigarlo.$"

NavelRock_Bottom_Combate_Lugia_Texto_11:
.string "Ve con ANDRA, {PLAYER}.\n"
	.string "Yo investigaré lo ocurrido en JOHTO,\l"
	.string "vamos a llegar al fondo de esto.$"

NavelRock_Bottom_Combate_Lugia_Move_1:
emote_exclamation_mark
step_end

NavelRock_Bottom_Combate_Lugia_Move_2:
delay_4
delay_4
walk_in_place_down
walk_in_place_down
walk_in_place_down
walk_in_place_down
step_end

NavelRock_Bottom_Combate_Lugia_Move_3:
walk_up
walk_up
walk_up
step_end

NavelRock_Bottom_Combate_Lugia_Move_4:
delay_4
delay_4
walk_down
walk_down
walk_down
step_end

NavelRock_Bottom_Combate_Lugia_Move_5:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_in_place_down
delay_4
delay_4
step_end

NavelRock_Bottom_Combate_Lugia_Move_6:
face_up
step_end

NavelRock_Bottom_Combate_Lugia_Move_7:
face_down
step_end

NavelRock_Bottom_Combate_Lugia_Move_8:
walk_left
walk_left
walk_left
walk_up
step_end

NavelRock_Bottom_Combate_Lugia_Move_9:
walk_fast_up
step_end

LugiaBattle_Move_1:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

LugiaBattle_Move_2:
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

LugiaBattle_Move_3:
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

LugiaBattle_Move_4:
walk_slow_down
walk_slow_down
walk_slow_down
step_end

