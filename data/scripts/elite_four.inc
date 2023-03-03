PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
	waitmovement 0
	playse SE_DOOR
	setmetatile 6, 1, METATILE_EliteFour_OpenDoor_Frame, FALSE
	setmetatile 6, 2, METATILE_EliteFour_OpenDoor_Opening, FALSE
	setmetatile 0, 2, METATILE_EliteFour_RightSpotlightOff, TRUE
	setmetatile 1, 2, METATILE_EliteFour_LeftSpotlightOff, TRUE
	setmetatile 2, 2, METATILE_EliteFour_RightSpotlightOff, TRUE
	setmetatile 3, 2, METATILE_EliteFour_LeftSpotlightOff, TRUE
	setmetatile 4, 2, METATILE_EliteFour_RightSpotlightOff, TRUE
	setmetatile 8, 2, METATILE_EliteFour_LeftSpotlightOff, TRUE
	setmetatile 9, 2, METATILE_EliteFour_RightSpotlightOff, TRUE
	setmetatile 10, 2, METATILE_EliteFour_LeftSpotlightOff, TRUE
	setmetatile 11, 2, METATILE_EliteFour_RightSpotlightOff, TRUE
	setmetatile 12, 2, METATILE_EliteFour_LeftSpotlightOff, TRUE
	special DrawWholeMapView
	return

PokemonLeague_EliteFour_EventScript_WalkInCloseDoor::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp6
	waitmovement 0
	playse SE_TRUCK_DOOR
	setmetatile 5, 12, METATILE_EliteFour_EntryDoor_ClosedTop, TRUE
	setmetatile 6, 12, METATILE_EliteFour_EntryDoor_ClosedTop, TRUE
	setmetatile 7, 12, METATILE_EliteFour_EntryDoor_ClosedTop, TRUE
	setmetatile 5, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, TRUE
	setmetatile 6, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, TRUE
	setmetatile 7, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, TRUE
	special DrawWholeMapView
	return

@ Essentially unused, only necessary when re-entering an Elite Four room after defeating the member, which isnt normally possible
PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom::
	setmetatile 6, 1, METATILE_EliteFour_OpenDoor_Frame, FALSE
	setmetatile 6, 2, METATILE_EliteFour_OpenDoor_Opening, FALSE
	setmetatile 5, 12, METATILE_EliteFour_EntryDoor_ClosedTop, TRUE
	setmetatile 6, 12, METATILE_EliteFour_EntryDoor_ClosedTop, TRUE
	setmetatile 7, 12, METATILE_EliteFour_EntryDoor_ClosedTop, TRUE
	setmetatile 5, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, TRUE
	setmetatile 6, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, TRUE
	setmetatile 7, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, TRUE
	setmetatile 0, 2, METATILE_EliteFour_RightSpotlightOff, TRUE
	setmetatile 1, 2, METATILE_EliteFour_LeftSpotlightOff, TRUE
	setmetatile 2, 2, METATILE_EliteFour_RightSpotlightOff, TRUE
	setmetatile 3, 2, METATILE_EliteFour_LeftSpotlightOff, TRUE
	setmetatile 4, 2, METATILE_EliteFour_RightSpotlightOff, TRUE
	setmetatile 8, 2, METATILE_EliteFour_LeftSpotlightOff, TRUE
	setmetatile 9, 2, METATILE_EliteFour_RightSpotlightOff, TRUE
	setmetatile 10, 2, METATILE_EliteFour_LeftSpotlightOff, TRUE
	setmetatile 11, 2, METATILE_EliteFour_RightSpotlightOff, TRUE
	setmetatile 12, 2, METATILE_EliteFour_LeftSpotlightOff, TRUE
	return

PokemonLeague_EliteFour_EventScript_CloseDoor::
	setmetatile 5, 12, METATILE_EliteFour_EntryDoor_ClosedTop, TRUE
	setmetatile 6, 12, METATILE_EliteFour_EntryDoor_ClosedTop, TRUE
	setmetatile 7, 12, METATILE_EliteFour_EntryDoor_ClosedTop, TRUE
	setmetatile 5, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, TRUE
	setmetatile 6, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, TRUE
	setmetatile 7, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, TRUE
	return

@@LIGA KANTO

PokemonLeague_EventScript_OpenDoor::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
	waitmovement 0
	playse SE_DOOR
	call PokemonLeague_EventScript_SetDoorOpen
	special DrawWholeMapView
	return

PokemonLeague_EventScript_EnterRoom::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp5
	waitmovement 0
	playse SE_UNLOCK
	call PokemonLeague_EventScript_CloseEntry
	special DrawWholeMapView
	return

PokemonLeague_EventScript_SetDoorOpen::
	setmetatile 6, 1, 0x28E, 1
	setmetatile 6, 2, 0x296, 0
	return

PokemonLeague_EventScript_SetDoorOpenLance::
	setmetatile 6, 4, 0x28E, 1
	setmetatile 6, 5, 0x296, 0
	return

PokemonLeague_EventScript_PreventExit::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_Movement_ForcePlayerIn
	waitmovement 0
	releaseall
	end

PokemonLeague_EventScript_OpenDoorLance::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay32
	waitmovement 0
	playse SE_DOOR
	setmetatile 6, 4, 0x28E, 1
	setmetatile 6, 5, 0x296, 0
	special DrawWholeMapView
	setflag FLAG_TEMP_4
	return

PokemonLeague_EventScript_CloseEntry::
	setmetatile 5, 11, 0x29D, 1
	setmetatile 6, 11, 0x29E, 1
	setmetatile 7, 11, 0x29F, 1
	setmetatile 5, 12, 0x289, 1
	setmetatile 6, 12, 0x2A6, 1
	setmetatile 7, 12, 0x288, 1
	return

PokemonLeague_Movement_ForcePlayerIn::
	walk_up
	step_end

Common_Movement_WalkUp5::
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PokemonLeague_LancesRoom_Movement_WalkThroughCorridor::
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
