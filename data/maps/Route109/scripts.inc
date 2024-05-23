@ NOTE: Route 109's sail to Dewford script references local IDs from Dewford's map.
@  These are labeled in DewfordTown/scripts.inc

Route109_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Route109_OnFrame
	.byte 0

Route109_OnFrame:
map_script_2 VAR_ROUTE118_STATE, 4, Route109_Nina_Final
	.2byte 0

Route109_EventScript_StartDepartForDewford::
	call EventScript_BackupMrBrineyLocation
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE109, 0
	applymovement LOCALID_BRINEY_R109, Route109_Movement_BrineyEnterBoat
	waitmovement 0
	removeobject LOCALID_BRINEY_R109
	switch VAR_FACING
	case DIR_SOUTH, Route109_EventScript_EnterBoatSouth
	case DIR_WEST, Route109_EventScript_EnterBoatWest
	case DIR_EAST, Route109_EventScript_EnterBoatEast
	end

Route109_EventScript_EnterBoatSouth::
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatSouth
	waitmovement 0
	goto Route109_EventScript_DoSailToDewford
	end

Route109_EventScript_EnterBoatEast::
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatEast
	waitmovement 0
	goto Route109_EventScript_DoSailToDewford
	end

Route109_EventScript_EnterBoatWest::
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatWest
	waitmovement 0
	goto Route109_EventScript_DoSailToDewford
	end

Route109_EventScript_DoSailToDewford::
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
	call Common_EventScript_PlayBrineysBoatMusic
	applymovement LOCALID_BOAT_R109, Route109_Movement_SailToDewford
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_SailToDewford
	waitmovement 0
	delay 50
	call Common_EventScript_StopBrineysBoatMusic
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerExitBoat
	waitmovement 0
	addobject LOCALID_BOAT_DEWFORD
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
	addobject LOCALID_BRINEY_DEWFORD
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
	applymovement LOCALID_BRINEY_DEWFORD, Route109_Movement_BrineyExitBoat
	waitmovement 0
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	hideobjectat LOCALID_BOAT_R109, MAP_ROUTE109
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
	closemessage
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
	release
	end

Route109_Movement_SailToDewford:
	walk_in_place_faster_down
	walk_down
	walk_down
	walk_fast_down
	walk_fast_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_left
	walk_left
	walk_in_place_faster_down
	step_end

Route109_Movement_PlayerEnterBoatSouth:
	walk_down
	walk_down
	step_end

Route109_Movement_PlayerExitBoat:
	walk_down
	walk_down
	walk_left
	walk_in_place_faster_right
	step_end

Route109_Movement_PlayerEnterBoatEast:
	walk_right
	walk_down
	step_end

Route109_Movement_PlayerEnterBoatWest:
	walk_left
	walk_down
	step_end

Route109_Movement_BrineyEnterBoat:
	walk_down
	step_end

Route109_Movement_BrineyExitBoat:
	walk_down
	walk_in_place_faster_left
	step_end

Route109_EventScript_MrBriney::
	lock
	faceplayer
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route109_EventScript_HaveNotDeliveredDevonGood
	goto Route109_EventScript_DeliveredDevonGoods
	end

Route109_EventScript_HaveNotDeliveredDevonGood::
	message Route109_Text_BrineySailToDewfordQuestion
	msgbox Route109_Text_BrineySailToDewfordQuestion, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route109_EventScript_StayHere
	goto Route109_EventScript_SailToDewford
	end

Route109_EventScript_DeliveredDevonGoods::
	message Route109_Text_BrineyWhereAreWeBound
	waitmessage
	multichoicedefault 21, 8, MULTI_BRINEY_OFF_DEWFORD, 1, FALSE
	switch VAR_RESULT
	case 0, Route109_EventScript_SailToDewford
	case 1, Route109_EventScript_ChoseNotToSail
	case MULTI_B_PRESSED, Route109_EventScript_ChoseNotToSail
	end

Route109_EventScript_SailToDewford::
	msgbox Route109_Text_BrineyDewfordItIs, MSGBOX_DEFAULT
	closemessage
	goto Route109_EventScript_StartDepartForDewford
	end

Route109_EventScript_StayHere::
	msgbox Route109_Text_BrineyDeliverDevonGoods, MSGBOX_DEFAULT
	release
	end

Route109_EventScript_ChoseNotToSail::
	msgbox Route109_Text_BrineyTellMeWhenYouNeedToSail, MSGBOX_DEFAULT
	release
	end

Route109_EventScript_SeashoreHouseGirl::
	msgbox Route109_Text_ChillAtMyPapasSpot, MSGBOX_NPC
	end

Route109_EventScript_SandCastleBoy::
	lock
	faceplayer
	msgbox Route109_Text_SandCastleTakingLongTime, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route109_EventScript_SoftSandGirl::
	lock
	faceplayer
	special GetPlayerBigGuyGirlString
	goto_if_set FLAG_RECEIVED_SOFT_SAND, Route109_EventScript_AlreadyReceivedSoftSand
	msgbox Route109_Text_YouCanHaveThis, MSGBOX_DEFAULT
	giveitem ITEM_SOFT_SAND
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	setflag FLAG_RECEIVED_SOFT_SAND
	release
	end

Route109_EventScript_AlreadyReceivedSoftSand::
	msgbox Route109_Text_WereGoingToMakeBigCastle, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route109_EventScript_Woman::
	msgbox Route109_Text_LittleKidsDartAround, MSGBOX_NPC
	end

Route109_EventScript_OldMan::
	msgbox Route109_Text_ZigzagoonPicksUpLitter, MSGBOX_NPC
	end

Route109_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox Route109_Text_ZigzagoonCry, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route109_EventScript_SeashoreHouseSign::
	msgbox Route109_Text_SeashoreHouseSign, MSGBOX_SIGN
	end

Route109_EventScript_TrainerTipsSign::
	msgbox Route109_Text_TrainerTipsSign, MSGBOX_SIGN
	end

Route109_EventScript_David::
	trainerbattle_single TRAINER_TRAINER_443, Route109_Text_DavidIntro, Route109_Text_DavidDefeated
	msgbox Route109_Text_DavidPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Alice::
	trainerbattle_single TRAINER_TRAINER_442, Route109_Text_AliceIntro, Route109_Text_AliceDefeated
	msgbox Route109_Text_AlicePostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Huey::
	trainerbattle_single TRAINER_TRAINER_431, Route109_Text_HueyIntro, Route109_Text_HueyDefeated
	msgbox Route109_Text_HueyPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Edmond::
	trainerbattle_single TRAINER_TRAINER_434, Route109_Text_EdmondIntro, Route109_Text_EdmondDefeated
	msgbox Route109_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Ricky::
	trainerbattle_single TRAINER_TRAINER_433, Route109_Text_RickyIntro, Route109_Text_RickyDefeated,
	msgbox Route109_Text_RickyPostBattle, MSGBOX_DEFAULT
	release
	end

Route109_EventScript_RickyRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route109_Text_RickyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_RICKY_1
	release
	end

Route109_EventScript_RickyRematch::
	trainerbattle_rematch TRAINER_RICKY_1, Route109_Text_RickyRematchIntro, Route109_Text_RickyRematchDefeated
	msgbox Route109_Text_RickyRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Lola::
	trainerbattle_single TRAINER_TRAINER_436, Route109_Text_LolaIntro, Route109_Text_LolaDefeated,
	msgbox Route109_Text_LolaPostBattle, MSGBOX_DEFAULT
	release
	end

Route109_EventScript_LolaRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route109_Text_LolaRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_PANUELO
	release
	end

Route109_EventScript_LolaRematch::
	trainerbattle_rematch TRAINER_PANUELO, Route109_Text_LolaRematchIntro, Route109_Text_LolaRematchDefeated
	msgbox Route109_Text_LolaRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Austina::
	trainerbattle_single TRAINER_TRAINER_441, Route109_Text_AustinaIntro, Route109_Text_AustinaDefeated
	msgbox Route109_Text_AustinaPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Gwen::
	trainerbattle_single TRAINER_TRAINER_440, Route109_Text_GwenIntro, Route109_Text_GwenDefeated
	msgbox Route109_Text_GwenPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Carter::
	trainerbattle_single TRAINER_TRAINER_444, Route109_Text_CarterIntro, Route109_Text_CarterDefeated
	msgbox Route109_Text_CarterPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Paul::
	trainerbattle_double TRAINER_TRAINER_639, Route109_Text_PaulIntro, Route109_Text_PaulDefeated, Route109_Text_PaulNotEnoughPokemon
	msgbox Route109_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Mel::
	trainerbattle_double TRAINER_TRAINER_639, Route109_Text_MelIntro, Route109_Text_MelDefeated, Route109_Text_MelNotEnoughPokemon
	msgbox Route109_Text_MelPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Chandler::
	trainerbattle_single TRAINER_TRAINER_435, Route109_Text_ChandlerIntro, Route109_Text_ChandlerDefeated
	msgbox Route109_Text_ChandlerPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Hailey::
	trainerbattle_single TRAINER_TRAINER_432, Route109_Text_HaileyIntro, Route109_Text_HaileyDefeated
	msgbox Route109_Text_HaileyPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Elijah::
	trainerbattle_single TRAINER_TRAINER_445, Route109_Text_ElijahIntro, Route109_Text_ElijahDefeated
	msgbox Route109_Text_ElijahPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Text_BrineyLandedInSlateportDeliverGoods:
	.string "MR. BRINEY: Ahoy!\n"
	.string "We've made land in SLATEPORT!\p"
	.string "I suppose you're going to visit CAPT.\n"
	.string "STERN and deliver the DEVON GOODS?$"

Route109_Text_BrineySailToDewfordQuestion:
	.string "MR. BRINEY: I thought you're supposed\n"
	.string "to deliver the DEVON GOODS.\p"
	.string "Would you like to sail back to\n"
	.string "DEWFORD, then?$"

Route109_Text_BrineyDewfordItIs:
	.string "MR. BRINEY: DEWFORD it is, then!\p"
	.string "Anchors aweigh!\n"
	.string "PEEKO, we're setting sail, my darling!$"

Route109_Text_BrineyDeliverDevonGoods:
	.string "MR. BRINEY: Then you go on and deliver\n"
	.string "the DEVON GOODS. I'll be waiting.$"

DewfordTown_Text_BrineyLandedInSlateport:
	.string "MR. BRINEY: Ahoy! We've made land in\n"
	.string "SLATEPORT!\p"
	.string "You just go on and tell me whenever\n"
	.string "you want to set sail again!$"

Route109_Text_BrineyWhereAreWeBound:
	.string "MR. BRINEY: Ahoy!\n"
	.string "For you, I'll go out to sea anytime!\p"
	.string "Now, my friend, where are we bound?$"

Route109_Text_BrineyTellMeWhenYouNeedToSail:
	.string "MR. BRINEY: You just tell me whenever\n"
	.string "you need to set sail again!$"

Route109_Text_ChillAtMyPapasSpot:
	.string	"¡ENTRENADORES, oíd!\n"
	.string	"Ya seáis grandes o pequeños,\l"
	.string	"fuertes o debiluchos…,\l"
	.string	"¡mi padre os da mil vueltas a todos!$"

Route109_Text_LittleKidsDartAround:
	.string	"Los niños pueden perderse de vista\n"
	.string	"en un segundo…\p"
	.string	"Tienes que estar siempre pendiente\n"
	.string	"de ellos. Es agotador.\p"
	.string	"El mío está con mi POKéMON, así\n"
	.string	"que debe de estar bien…$"

Route109_Text_SandCastleTakingLongTime:
	.string	"Estamos tardando un montón en\n"
	.string	"terminar nuestro castillo de arena.$"

Route109_Text_YouCanHaveThis:
	.string	"¡Toma esto para ti!$"

Route109_Text_WereGoingToMakeBigCastle:
	.string	"¡Vamos a coger toda la arena de la\n"
	.string	"playa y a hacer un castillo tremendo!\p"
	.string	"Y nosotros seremos el rey\n"
	.string	"y la reina.\p"
	.string	"Te dejaremos ser sirviente…$"

Route109_Text_ZigzagoonPicksUpLitter:
	.string	"El agua de esta zona está limpia.\p"
	.string	"Pero, a veces, mi ZIGZAGOON recoge\n"
	.string	"basura en la orilla…\p"
	.string	"Cuando el agua sucia se evapora, cae en\n"
	.string	"forma de lluvia y va a parar a los ríos,\l"
	.string	"de los que se saca el agua potable.\p"
	.string	"Si contaminamos el mar, acabamos\n"
	.string	"pagando el pato nosotros.$"

Route109_Text_ZigzagoonCry:
	.string	"ZIGZAGOON: ¿Zigzaaa?$"

Route109_Text_SeashoreHouseSign:
	.string	"CASA de la PLAYA\p"
	.string	"“¡Combates al rojo vivo!\n"
	.string	"¡Sólo para ENTRENADORES apasionados!”$"

Route109_Text_TrainerTipsSign:
	.string	"PISTAS para ENTRENADORES\p"
	.string	"POKéMON que tienen el mismo nivel\n"
	.string	"pueden tener distintas habilidades.\p"
	.string	"Dicen que los POKéMON entrenados por\n"
	.string	"ENTRENADORES se vuelven más fuertes\l"
	.string	"que los POKéMON salvajes.$"

Route109_Nina::
lock
faceplayer
compare VAR_ROUTE118_STATE, 1
goto_if_gt Route109_Nina_Despues
msgbox Route109_Text_ChillAtMyPapasSpot, MSGBOX_NPC
release
end

Route109_Nina_Despues::
msgbox Route109_Text_ChillAtMyPapasSpot, MSGBOX_NPC
delay 15
msgbox Route109_Nina_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 7, Route109_Nina_Despues_Move_1
waitmovement 0x0
msgbox Route109_Nina_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox Route109_Nina_Texto_3 MSGBOX_AUTOCLOSE
applymovement 7, Route109_Nina_Despues_Move_2
waitmovement 0x0
msgbox Route109_Nina_Texto_4 MSGBOX_AUTOCLOSE
applymovement 7, Route109_Nina_Despues_Move_3
waitmovement 0x0
opendoor 11, 5
waitdooranim
delay 10
msgbox Route109_Nina_Texto_5 MSGBOX_AUTOCLOSE
applymovement 7, Route109_Nina_Despues_Move_4
waitmovement 0x0
setflag FLAG_HOENN_33
removeobject 7
closedoor 11, 5
waitdooranim
setvar VAR_ROUTE118_STATE, 3
release
end

Route109_Nina_Despues_Move_4:
walk_up
step_end

Route109_Nina_Despues_Move_3:
face_up
delay_16
walk_in_place_up
step_end

Route109_Nina_Despues_Move_2:
walk_in_place_down
step_end

Route109_Nina_Despues_Move_1:
emote_exclamation_mark
step_end

Route109_Nina_Texto_1:
	.string "… …$"

Route109_Nina_Texto_2:
	.string "¿Tú ganarle a mi padre?$"

Route109_Nina_Texto_3:
	.string "¡Jajajaja! Escuchame.$"

Route109_Nina_Texto_4:
	.string "Ya seas pobre o rico, vistas de traje o\n"
	.string "en bañador… ¡Mi padre te da mil vueltas!$"

Route109_Nina_Texto_5:
	.string "¡ENTRENADORES, oíd! ¡Tenemos a otro\n"
	.string "iluso que va a ser derrotado!$"

Route109_Nina_Final_Move_1:
walk_down
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

Route109_Nina_Final_Move_2:
walk_left
face_right
step_end

Route109_Nina_Final_Move_3:
walk_left
walk_left
walk_up
step_end

Route109_Nina_Final_Move_4:
walk_up
step_end

Route109_Nina_Final::
delay 15
msgbox Route109_Nina_Final_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_LEDGE
applymovement 29, BerryForest_Evento_Hypno_Move_4
waitmovement 0x0
waitse
playse SE_LEDGE
applymovement 29, BerryForest_Evento_Hypno_Move_4
waitmovement 0x0
delay 15
msgbox Route109_Nina_Final_Texto_2 MSGBOX_AUTOCLOSE
applymovement 29, Route109_Nina_Final_Move_1
waitmovement 0x0
removeobject 29
applymovement OBJ_EVENT_ID_PLAYER, Route109_Nina_Final_Move_2
applymovement 28, Route109_Nina_Final_Move_3
waitmovement 0x0
opendoor 11, 5
waitdooranim
applymovement 28, Route109_Nina_Final_Move_4
waitmovement 0x0
removeobject 28
closedoor 11, 5
waitdooranim
delay 15
msgbox Route109_Nina_Final_Texto_3 MSGBOX_AUTOCLOSE
applymovement 27, Route109_Nina_Final_Move_5
waitmovement 0x0
msgbox Route109_Nina_Final_Texto_4 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route109_Nina_Final_Move_6
waitmovement 0x0
playse SE_PIN
applymovement 26, Route109_Nina_Despues_Move_1
waitmovement 0x0
delay 15
msgbox Route109_Nina_Final_Texto_5 MSGBOX_AUTOCLOSE
applymovement 27, Route109_Nina_Despues_Move_7
applymovement 26, Route109_Nina_Despues_Move_7
waitmovement 0x0
delay 10
applymovement 26, Route109_Nina_Despues_Move_8
waitmovement 0x0
msgbox Route109_Nina_Final_Texto_6 MSGBOX_AUTOCLOSE
applymovement 27, Route109_Nina_Despues_Move_8
waitmovement 0x0
msgbox Route109_Nina_Final_Texto_7 MSGBOX_AUTOCLOSE
applymovement 27, Route109_Nina_Despues_Move_8
waitmovement 0x0
msgbox Route109_Nina_Final_Texto_8 MSGBOX_AUTOCLOSE
applymovement 26, Route109_Nina_Despues_Move_8
waitmovement 0x0
msgbox Route109_Nina_Final_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox Route109_Nina_Final_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_ANORITH, 60, ITEM_NONE
waitfanfare
delay 15
playse SE_LEDGE
applymovement 26, BerryForest_Evento_Hypno_Move_4
waitmovement 0x0
waitse
playse SE_LEDGE
applymovement 26, BerryForest_Evento_Hypno_Move_4
waitmovement 0x0
delay 15
msgbox Route109_Nina_Final_Texto_11 MSGBOX_AUTOCLOSE
applymovement 26, Route109_Nina_Despues_Move_9
applymovement 27, Route109_Nina_Final_Move_5
waitmovement 0x0
msgbox Route109_Nina_Final_Texto_12 MSGBOX_AUTOCLOSE
applymovement 26, Route109_Nina_Final_Move_10
applymovement 27, Route109_Nina_Final_Move_11
waitmovement 0x0
delay 10
removeobject 26
removeobject 27
setflag FLAG_HOENN_689
clearflag FLAG_HOENN_35
setvar VAR_ROUTE118_STATE, 5
release
end

Route109_Nina_Final_Move_11:
walk_right
walk_up
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end


Route109_Nina_Final_Move_10:
delay_16
face_down
delay_16
walk_down
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

Route109_Nina_Despues_Move_9:
face_down
step_end

Route109_Nina_Despues_Move_8:
walk_in_place_left
step_end

Route109_Nina_Despues_Move_7:
walk_up
walk_up
walk_left
walk_left
step_end

Route109_Nina_Final_Move_6:
walk_right
walk_down
walk_right
walk_right
step_end

Route109_Nina_Final_Move_5:
face_up
step_end

Route109_Nina_Final_Texto_1:
	.string "¡Y se acabaron también los helados\n"
	.string "después del cole!$"

Route109_Nina_Final_Texto_2:
	.string "¡Bua, bua!$"

Route109_Nina_Final_Texto_3:
	.string "Vaya, sí que le ha regañado bien.$"

Route109_Nina_Final_Texto_4:
	.string "¡Y te has perdido lo mejor! ¡Los\n"
	.string "combates han sido increíbles!$"

Route109_Nina_Final_Texto_5:
	.string "¡Aún no me lo creo, lo has conseguido!$"

Route109_Nina_Final_Texto_6:
	.string "Cuando entraste a la CASA de la PLAYA,\n"
	.string "mi amigo estuvo todo el rato pendiente\l"
	.string "tras las ventanillas. No daba crédito a\l"
	.string "lo que estaba viendo, me insistió tanto\l"
	.string "que al final me hizo venir con el barco\l"
	.string "de mi padre.$"

Route109_Nina_Final_Texto_7:
	.string "¡Señor, es usted increíble!$"

Route109_Nina_Final_Texto_8:
	.string "Después de esto, dejará de ser tan\n"
	.string "presumida en el colegio.$"

Route109_Nina_Final_Texto_9:
	.string "Sin ti hubiera sido imposible. Este\n"
	.string "POKÉMON es para ti.$"

Route109_Nina_Final_Texto_10:
	.string "¡{PLAYER} obtuvo un ANORITH al nv.60!$"

Route109_Nina_Final_Texto_11:
	.string "Ahora sí, ¡vuelvo a AZULIZA!$"

Route109_Nina_Final_Texto_12:
	.string "¡Nos vemos en el cole!$"
