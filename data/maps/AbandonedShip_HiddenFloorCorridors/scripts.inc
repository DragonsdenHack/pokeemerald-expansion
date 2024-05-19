AbandonedShip_HiddenFloorCorridors_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, AbandonedShip_HiddenFloorCorridors_OnResume
	map_script MAP_SCRIPT_ON_LOAD, AbandonedShip_HiddenFloorCorridors_OnLoad
	.byte 0

AbandonedShip_HiddenFloorCorridors_OnResume:
	setdivewarp MAP_ABANDONED_SHIP_UNDERWATER1, 5, 4
	end

AbandonedShip_HiddenFloorCorridors_OnLoad:
	call_if_unset FLAG_USED_ROOM_1_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom1
	call_if_unset FLAG_USED_ROOM_2_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom2
	call_if_unset FLAG_USED_ROOM_4_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom4
	call_if_unset FLAG_USED_ROOM_6_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom6
	call_if_set FLAG_USED_ROOM_1_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom1
	call_if_set FLAG_USED_ROOM_2_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom2
	call_if_set FLAG_USED_ROOM_4_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom4
	call_if_set FLAG_USED_ROOM_6_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom6
	end

AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom1::
	setmetatile 3, 8, METATILE_InsideShip_IntactDoor_Bottom_Unlocked, TRUE
	return

AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom2::
	setmetatile 6, 8, METATILE_InsideShip_IntactDoor_Bottom_Unlocked, TRUE
	return

AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom4::
	setmetatile 3, 3, METATILE_InsideShip_DoorIndent_Unlocked, FALSE
	return

AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom6::
	setmetatile 9, 3, METATILE_InsideShip_DoorIndent_Unlocked, FALSE
	return

AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom1::
	setmetatile 3, 8, METATILE_InsideShip_IntactDoor_Bottom_Locked, TRUE
	return

AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom2::
	setmetatile 6, 8, METATILE_InsideShip_IntactDoor_Bottom_Locked, TRUE
	return

AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom4::
	setmetatile 3, 3, METATILE_InsideShip_DoorIndent_Locked, FALSE
	return

AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom6::
	setmetatile 9, 3, METATILE_InsideShip_DoorIndent_Locked, FALSE
	return

AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door::
	lockall
	goto_if_set FLAG_USED_ROOM_1_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen
	checkitem ITEM_KEY_TO_ROOM_1
	goto_if_eq VAR_RESULT, FALSE, AbandonedShip_HiddenFloorCorridors_EventScript_Rm1IsLocked
	msgbox AbandonedShip_HiddenFloorCorridors_Text_InsertedKey, MSGBOX_DEFAULT
	playse SE_PIN
	removeitem ITEM_KEY_TO_ROOM_1
	setflag FLAG_USED_ROOM_1_KEY
	call AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom1
	special DrawWholeMapView
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door::
	lockall
	goto_if_set FLAG_USED_ROOM_2_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen
	checkitem ITEM_KEY_TO_ROOM_2
	goto_if_eq VAR_RESULT, FALSE, AbandonedShip_HiddenFloorCorridors_EventScript_Rm2IsLocked
	msgbox AbandonedShip_HiddenFloorCorridors_Text_InsertedKey, MSGBOX_DEFAULT
	playse SE_PIN
	removeitem ITEM_KEY_TO_ROOM_2
	setflag FLAG_USED_ROOM_2_KEY
	call AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom2
	special DrawWholeMapView
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door::
	lockall
	goto_if_set FLAG_USED_ROOM_4_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen
	checkitem ITEM_KEY_TO_ROOM_4
	goto_if_eq VAR_RESULT, FALSE, AbandonedShip_HiddenFloorCorridors_EventScript_Rm4IsLocked
	msgbox AbandonedShip_HiddenFloorCorridors_Text_InsertedKey, MSGBOX_DEFAULT
	playse SE_PIN
	removeitem ITEM_KEY_TO_ROOM_4
	setflag FLAG_USED_ROOM_4_KEY
	call AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom4
	special DrawWholeMapView
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door::
	lockall
	goto_if_set FLAG_USED_ROOM_6_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen
	checkitem ITEM_KEY_TO_ROOM_6
	goto_if_eq VAR_RESULT, FALSE, AbandonedShip_HiddenFloorCorridors_EventScript_Rm6IsLocked
	msgbox AbandonedShip_HiddenFloorCorridors_Text_InsertedKey, MSGBOX_DEFAULT
	playse SE_PIN
	removeitem ITEM_KEY_TO_ROOM_6
	setflag FLAG_USED_ROOM_6_KEY
	call AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom6
	special DrawWholeMapView
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_EventScript_Rm1IsLocked::
	msgbox AbandonedShip_HiddenFloorCorridors_Text_Rm1DoorIsLocked, MSGBOX_DEFAULT
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_EventScript_Rm2IsLocked::
	msgbox AbandonedShip_HiddenFloorCorridors_Text_Rm2DoorIsLocked, MSGBOX_DEFAULT
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_EventScript_Rm4IsLocked::
	msgbox AbandonedShip_HiddenFloorCorridors_Text_Rm4DoorIsLocked, MSGBOX_DEFAULT
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_EventScript_Rm6IsLocked::
	msgbox AbandonedShip_HiddenFloorCorridors_Text_Rm6DoorIsLocked, MSGBOX_DEFAULT
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen::
	msgbox AbandonedShip_Text_TheDoorIsOpen, MSGBOX_DEFAULT
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_Text_Rm1DoorIsLocked:
	.string "The door is locked.\p"
	.string "“RM. 1” is painted on the door.$"

AbandonedShip_HiddenFloorCorridors_Text_Rm2DoorIsLocked:
	.string "The door is locked.\p"
	.string "“RM. 2” is painted on the door.$"

AbandonedShip_HiddenFloorCorridors_Text_Rm4DoorIsLocked:
	.string "The door is locked.\p"
	.string "“RM. 4” is painted on the door.$"

AbandonedShip_HiddenFloorCorridors_Text_Rm6DoorIsLocked:
	.string "The door is locked.\p"
	.string "“RM. 6” is painted on the door.$"

AbandonedShip_HiddenFloorCorridors_Text_InsertedKey:
	.string "{PLAYER} inserted and turned the\n"
	.string "KEY.\p"
	.string "The inserted KEY stuck fast,\n"
	.string "but the door opened.$"

AbandonedShip_Miguel_Move_1:
emote_exclamation_mark
step_end

AbandonedShip_Miguel_Move_2:
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

AbandonedShip_Miguel_Move_2.1:
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

AbandonedShip_Miguel_Move_3:
face_right
step_end

AbandonedShip_Miguel_Move_4:
walk_in_place_up
step_end

AbandonedShip_Miguel_Move_5:
delay_8
face_down
delay_16
step_end

AbandonedShip_Miguel_Move_6:
walk_slow_right
step_end

AbandonedShip_Miguel_Move_7:
walk_fast_right
step_end

AbandonedShip_Miguel_Move_8:
face_down
step_end


AbandonedShip_Miguel::
lock
clearflag FLAG_HOENN_1
addobject 1
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, AbandonedShip_Miguel_Move_1
waitmovement 0x0
msgbox AbandonedShip_Miguel_Texto_1 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, AbandonedShip_Miguel_Move_2
waitmovement 0x0
special RemoveCameraObject
addobject 2
playse SE_EXIT
msgbox AbandonedShip_Miguel_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox AbandonedShip_Miguel_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, AbandonedShip_Miguel_Move_3
waitmovement 0x0
msgbox AbandonedShip_Miguel_Texto_4 MSGBOX_AUTOCLOSE
applymovement 2, AbandonedShip_Miguel_Move_4
waitmovement 0x0
msgbox AbandonedShip_Miguel_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox AbandonedShip_Miguel_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, AbandonedShip_Miguel_Move_5
waitmovement 0x0
msgbox AbandonedShip_Miguel_Texto_7 MSGBOX_AUTOCLOSE
applymovement 2, AbandonedShip_Miguel_Move_3
waitmovement 0x0
msgbox AbandonedShip_Miguel_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, AbandonedShip_Miguel_Move_6
waitmovement 0x0
msgbox AbandonedShip_Miguel_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, AbandonedShip_Miguel_Move_6
waitmovement 0x0
msgbox AbandonedShip_Miguel_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, AbandonedShip_Miguel_Move_5
waitmovement 0x0
msgbox AbandonedShip_Miguel_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, AbandonedShip_Miguel_Move_8
applymovement 2, AbandonedShip_Miguel_Move_7
waitmovement 0x0
msgbox AbandonedShip_Miguel_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, AbandonedShip_Miguel_Move_3
waitmovement 0x0
msgbox AbandonedShip_Miguel_Texto_13 MSGBOX_AUTOCLOSE
applymovement 1, AbandonedShip_Miguel_Move_9
waitmovement 0x0
playse SE_EXIT
removeobject 1
delay 10
applymovement 2, AbandonedShip_Miguel_Move_10
waitmovement 0x0
playse SE_EXIT
removeobject 2
delay 10
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, AbandonedShip_Miguel_Move_2.1
waitmovement 0x0
special RemoveCameraObject
setflag FLAG_HOENN_1
setvar VAR_UNUSED_0x40F7, 237
release
end

AbandonedShip_Miguel_Move_10:
walk_right
walk_up
delay_16
walk_in_place_up
step_end

AbandonedShip_Miguel_Move_9:
walk_in_place_up
step_end

AbandonedShip_Miguel_Texto_1:
	.string "????: Ya hemos acabado, toda\n"
	.string "prueba de nuestra presencia aquí ha\l"
	.string "sido borrada.$"

AbandonedShip_Miguel_Texto_2:
	.string "Has hecho un buen trabajo MIGUEL, esa\n"
	.string "copia del ESCÁNER es muy convincente.\l"
	.string "Todos esos científicos de tres al\l"
	.string "cuarto de los astilleros de PORTUAL\l"
	.string "creerán que es el verdadero.$"

AbandonedShip_Miguel_Texto_3:
	.string "C.MIGUEL: ¿Y qué hay del verdadero?$"

AbandonedShip_Miguel_Texto_4:
	.string "DR.RASMUS: EL ADMIN.ZAFIRO se\n"
	.string "encargará de ello. Tras el naufragio,\l"
	.string "quedó en la zona del laboratorio.$"

AbandonedShip_Miguel_Texto_5:
	.string "C.MIGUEL: Qué pudo haber pasado para\n"
	.string "que un barco así quedara en este\l"
	.string "estado{PAUSE 5}…{PAUSE 5}$"

AbandonedShip_Miguel_Texto_6:
	.string "DR.RASMUS: Las fuerzas de la\n"
	.string "naturaleza son poderosas, y muy\l"
	.string "caprichosas también. Tú deberías\l"
	.string "saberlo.$"

AbandonedShip_Miguel_Texto_7:
	.string "¿Has pensado en lo que te dije?$"

AbandonedShip_Miguel_Texto_8:
	.string "C.MIGUEL: Estoy convencido de que\n"
	.string "podré lograrlo solo doctor.$"

AbandonedShip_Miguel_Texto_9:
	.string "DR.RASMUS: Tus vivencias hasta ahora\n"
	.string "han sido las correctas para llegar a\l"
	.string "este punto, no hay duda de ello.$"

AbandonedShip_Miguel_Texto_10:
	.string "Pero me pregunto si, llegado el momento,\n"
	.string "no necesitará un empujón extra. Eres\l"
	.string "científico, ¿no?$"

AbandonedShip_Miguel_Texto_11:
	.string "¿Dejarás ese asunto tan vital en manos\n"
	.string "de una naturaleza que siempre te ha\l"
	.string "traicionado, que sabes que es\l"
	.string "arbitraria, impredecible e injusta?$"

AbandonedShip_Miguel_Texto_12:
	.string "C.MIGUEL: Precisamente por eso, este\n"
	.string "POKÉMON y yo lo lograremos. Si ANDRA y\l"
	.string "{PLAYER} lo lograron, ¡yo también!$"

AbandonedShip_Miguel_Texto_13:
	.string "DR.RASMUS: Que así sea pues.$"


AbandonedShip_Warp::
lock
delay 15
msgbox CuevaTesoro_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CuevaTesoro_Activador_Entrada_Pasa_Move_1
waitmovement 0x0
msgbox AbandonedShip_Warp_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
warp MAP_NAO_ABANDONADA_2, 1, 11
release
end

AbandonedShip_Warp_Pasa_Text_YesNo:
.string "Hay una entrada secreta aquí.\n"
	.string "¿Quieres pasar?$"


