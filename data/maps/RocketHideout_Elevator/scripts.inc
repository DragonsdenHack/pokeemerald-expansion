RocketHideout_Elevator_MapScripts::
	.byte 0
	
RocketHideout_Elevator_EventScript_FloorSelect::
	lockall
	setvar VAR_0x8004, 0
	call_if_unset FLAG_TEMP_2, RocketHideout_Elevator_EventScript_SetFloor
	copyvar VAR_0x8005, VAR_DEPT_STORE_FLOOR
	special ShowDeptStoreElevatorFloorSelect
	message gText_WhichFloorWouldYouLike2
	waitmessage
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, GetDeptStoreDefaultFloorChoice
	switch VAR_RESULT
	case 0, RocketHideout_Elevator_EventScript_ChooseFloorFrom4th
	case 2, RocketHideout_Elevator_EventScript_ChooseFloorFrom2nd
	case 3, RocketHideout_Elevator_EventScript_ChooseFloorFrom1st
	end

@ Below scripts ensure the cursor for floor select always starts on the current floor

RocketHideout_Elevator_EventScript_ChooseFloorFrom4th::
	multichoicedefault 0, 0, MULTI_ASCENSOR, 0, FALSE
	goto RocketHideout_Elevator_EventScript_ChooseFloor
	end

RocketHideout_Elevator_EventScript_ChooseFloorFrom3rd::
	multichoicedefault 0, 0, MULTI_ASCENSOR, 1, FALSE
	goto RocketHideout_Elevator_EventScript_ChooseFloor
	end

RocketHideout_Elevator_EventScript_ChooseFloorFrom2nd::
	multichoicedefault 0, 0, MULTI_ASCENSOR, 2, FALSE
	goto RocketHideout_Elevator_EventScript_ChooseFloor
	end

RocketHideout_Elevator_EventScript_ChooseFloorFrom1st::
	multichoicedefault 0, 0, MULTI_ASCENSOR, 3, FALSE
	goto RocketHideout_Elevator_EventScript_ChooseFloor
	end

RocketHideout_Elevator_EventScript_ChooseFloor::
	switch VAR_RESULT
	case 0, RocketHideout_Elevator_EventScript_4thFloor
	case 1, RocketHideout_Elevator_EventScript_2ndFloor
	case 2, RocketHideout_Elevator_EventScript_1stFloor
	case 3, RocketHideout_Elevator_EventScript_ExitFloorSelect
	case MULTI_B_PRESSED, RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

RocketHideout_Elevator_EventScript_1stFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_1F
	setdynamicwarp MAP_ROCKET_HIDEOUT_1F, 24, 26
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F, RocketHideout_Elevator_EventScript_ExitFloorSelect
	call RocketHideout_Elevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

RocketHideout_Elevator_EventScript_2ndFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_2F
	setdynamicwarp MAP_ROCKET_HIDEOUT_2F, 28, 17
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_2F, RocketHideout_Elevator_EventScript_ExitFloorSelect
	call RocketHideout_Elevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_2F
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

RocketHideout_Elevator_EventScript_3rdFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_3F
	setdynamicwarp MAP_ROCKET_HIDEOUT_3F, 8, 2
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_3F, RocketHideout_Elevator_EventScript_ExitFloorSelect
	call RocketHideout_Elevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_3F
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

RocketHideout_Elevator_EventScript_4thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_4F
	setdynamicwarp MAP_ROCKET_HIDEOUT_4F, 20, 24
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_4F, RocketHideout_Elevator_EventScript_ExitFloorSelect
	call RocketHideout_Elevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_4F
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

RocketHideout_Elevator_EventScript_ExitFloorSelect::
	special CloseDeptStoreElevatorWindow
	releaseall
	end

RocketHideout_Elevator_EventScript_MoveElevator::
	special CloseDeptStoreElevatorWindow
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	waitse
	special MoveElevator
	waitstate
	setflag FLAG_TEMP_2
	return

RocketHideout_Elevator_EventScript_SetFloor::
	special SetDeptStoreFloor
	return
	
	
gText_WhichFloorWouldYouLike2:
	.string "¿A qué planta te gustaría ir?$"	






Silph_Elevator_EventScript_FloorSelect::
	lockall
	setvar VAR_0x8004, 0
	call_if_unset FLAG_TEMP_2, RocketHideout_Elevator_EventScript_SetFloor
	copyvar VAR_0x8005, VAR_DEPT_STORE_FLOOR
	special ShowDeptStoreElevatorFloorSelect
	message gText_WhichFloorWouldYouLike2
	waitmessage
	setvar VAR_0x8004, MULTI_SILPH_ASCENSOR
	specialvar VAR_RESULT, GetDeptStoreDefaultFloorChoice
	switch VAR_RESULT
	case 0, Silph_Elevator_EventScript_ChooseFloorFrom4th
	case 1, Silph_Elevator_EventScript_ChooseFloorFrom3th
	case 2, Silph_Elevator_EventScript_ChooseFloorFrom2th
	case 3, Silph_Elevator_EventScript_ChooseFloorFrom1th
	end

Silph_Elevator_EventScript_ChooseFloorMas::
	multichoicedefault 0, 0, MULTI_SILPH_ASCENSOR2, 3, FALSE
	switch VAR_RESULT
	case 0, Silph_Elevator_EventScript_8thFloor
	case 1, Silph_Elevator_EventScript_7thFloor
	case 2, Silph_Elevator_EventScript_6thFloor
	case 3, Silph_Elevator_EventScript_5thFloor
	case 4, Silph_Elevator_EventScript_ChooseFloorMas2
	case 5, RocketHideout_Elevator_EventScript_ExitFloorSelect
	case MULTI_B_PRESSED, RocketHideout_Elevator_EventScript_ExitFloorSelect
	end
	
Silph_Elevator_EventScript_ChooseFloorMas2::
	multichoicedefault 0, 0, MULTI_SILPH_ASCENSOR3, 3, FALSE
	switch VAR_RESULT
	case 0, Silph_Elevator_EventScript_11thFloor
	case 1, Silph_Elevator_EventScript_10thFloor
	case 2, Silph_Elevator_EventScript_9thFloor
	case 3, Silph_Elevator_EventScript_ChooseFloorMas3
	case 4, RocketHideout_Elevator_EventScript_ExitFloorSelect
	case MULTI_B_PRESSED, RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

Silph_Elevator_EventScript_ChooseFloorMas3::
	goto Silph_Elevator_EventScript_FloorSelect
	end
	
Silph_Elevator_EventScript_ChooseFloorFrom11th::
    multichoicedefault 0, 0, MULTI_SILPH_ASCENSOR3, 0, FALSE
	goto Silph_Elevator_EventScript_ChooseFloor
	end

Silph_Elevator_EventScript_ChooseFloorFrom10th::
    multichoicedefault 0, 0, MULTI_SILPH_ASCENSOR3, 1, FALSE
	goto Silph_Elevator_EventScript_ChooseFloor
	end

Silph_Elevator_EventScript_ChooseFloorFrom9th::
    multichoicedefault 0, 0, MULTI_SILPH_ASCENSOR3, 2, FALSE
	goto Silph_Elevator_EventScript_ChooseFloor
	end

Silph_Elevator_EventScript_ChooseFloorFrom8th::
    multichoicedefault 0, 0, MULTI_SILPH_ASCENSOR2, 0, FALSE
	goto Silph_Elevator_EventScript_ChooseFloor2
	end

Silph_Elevator_EventScript_ChooseFloorFrom7th::
    multichoicedefault 0, 0, MULTI_SILPH_ASCENSOR2, 1, FALSE
	goto Silph_Elevator_EventScript_ChooseFloor2
	end

Silph_Elevator_EventScript_ChooseFloorFrom6th::
    multichoicedefault 0, 0, MULTI_SILPH_ASCENSOR2, 2, FALSE
	goto Silph_Elevator_EventScript_ChooseFloor2
	end

Silph_Elevator_EventScript_ChooseFloorFrom5th::
    multichoicedefault 0, 0, MULTI_SILPH_ASCENSOR2, 3, FALSE
	goto Silph_Elevator_EventScript_5thFloor
	end

Silph_Elevator_EventScript_ChooseFloorFrom4th::
    multichoicedefault 0, 0, MULTI_SILPH_ASCENSOR, 0, FALSE
	goto Silph_Elevator_EventScript_ChooseFloor
	end

Silph_Elevator_EventScript_ChooseFloorFrom3th::
    multichoicedefault 0, 0, MULTI_SILPH_ASCENSOR, 1, FALSE
	goto Silph_Elevator_EventScript_ChooseFloor
	end

Silph_Elevator_EventScript_ChooseFloorFrom2th::
    multichoicedefault 0, 0, MULTI_SILPH_ASCENSOR, 2, FALSE
	goto Silph_Elevator_EventScript_ChooseFloor
	end

Silph_Elevator_EventScript_ChooseFloorFrom1th::
    multichoicedefault 0, 0, MULTI_SILPH_ASCENSOR, 3, FALSE
	goto Silph_Elevator_EventScript_ChooseFloor
	end

Silph_Elevator_EventScript_ChooseFloor::
	switch VAR_RESULT
	case 0, Silph_Elevator_EventScript_4thFloor
	case 1, Silph_Elevator_EventScript_3thFloor
	case 2, Silph_Elevator_EventScript_2thFloor
	case 3, Silph_Elevator_EventScript_1thFloor
	case 4, Silph_Elevator_EventScript_ChooseFloorMas
	case 5, RocketHideout_Elevator_EventScript_ExitFloorSelect
	case MULTI_B_PRESSED, RocketHideout_Elevator_EventScript_ExitFloorSelect
	end
	
Silph_Elevator_EventScript_ChooseFloor2::
	switch VAR_RESULT
	case 0, Silph_Elevator_EventScript_8thFloor
	case 1, Silph_Elevator_EventScript_7thFloor
	case 2, Silph_Elevator_EventScript_6thFloor
	case 3, Silph_Elevator_EventScript_5thFloor
	case 4, Silph_Elevator_EventScript_ChooseFloorMas
	case 5, RocketHideout_Elevator_EventScript_ExitFloorSelect
	case MULTI_B_PRESSED, RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

Silph_Elevator_EventScript_ChooseFloor3::
	switch VAR_RESULT
	case 0, Silph_Elevator_EventScript_11thFloor
	case 1, Silph_Elevator_EventScript_10thFloor
	case 2, Silph_Elevator_EventScript_9thFloor
	case 3, Silph_Elevator_EventScript_ChooseFloorMas
	case 4, RocketHideout_Elevator_EventScript_ExitFloorSelect
	case MULTI_B_PRESSED, RocketHideout_Elevator_EventScript_ExitFloorSelect
	end		

Silph_Elevator_EventScript_11thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_11F
	setdynamicwarp MAP_SILPH_11F, 13, 4
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_11F, RocketHideout_Elevator_EventScript_ExitFloorSelect
	call RocketHideout_Elevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_11F
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

Silph_Elevator_EventScript_10thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_10F
	setdynamicwarp MAP_SILPH_10F, 13, 4
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_10F, RocketHideout_Elevator_EventScript_ExitFloorSelect
	call RocketHideout_Elevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_10F
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

Silph_Elevator_EventScript_9thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_9F
	setdynamicwarp MAP_SILPH_9F, 24, 4
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_9F, RocketHideout_Elevator_EventScript_ExitFloorSelect
	call RocketHideout_Elevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_9F
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

Silph_Elevator_EventScript_8thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_8F
	setdynamicwarp MAP_SILPH_8F, 22, 4
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_8F, RocketHideout_Elevator_EventScript_ExitFloorSelect
	call RocketHideout_Elevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_8F
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

Silph_Elevator_EventScript_7thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_7F
	setdynamicwarp MAP_SILPH_7F, 23, 4
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_7F, RocketHideout_Elevator_EventScript_ExitFloorSelect
	call RocketHideout_Elevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_7F
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

Silph_Elevator_EventScript_6thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_6F
	setdynamicwarp MAP_SILPH_6F, 20, 4
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_6F, RocketHideout_Elevator_EventScript_ExitFloorSelect
	call RocketHideout_Elevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_6F
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

Silph_Elevator_EventScript_5thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_5F
	setdynamicwarp MAP_SILPH_5F, 22, 4
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_5F, RocketHideout_Elevator_EventScript_ExitFloorSelect
	call RocketHideout_Elevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_5F
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

Silph_Elevator_EventScript_4thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_4F
	setdynamicwarp MAP_SILPH_4F, 22, 4
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_4F, RocketHideout_Elevator_EventScript_ExitFloorSelect
	call RocketHideout_Elevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_4F
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

Silph_Elevator_EventScript_3thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_3F
	setdynamicwarp MAP_SILPH_3F, 22, 4
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_3F, RocketHideout_Elevator_EventScript_ExitFloorSelect
	call RocketHideout_Elevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_3F
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

Silph_Elevator_EventScript_2thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_2F
	setdynamicwarp MAP_SILPH_2F, 22, 4
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_2F, RocketHideout_Elevator_EventScript_ExitFloorSelect
	call RocketHideout_Elevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_2F
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

Silph_Elevator_EventScript_1thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_1F
	setdynamicwarp MAP_SILPH_1F, 22, 4
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F, RocketHideout_Elevator_EventScript_ExitFloorSelect
	call RocketHideout_Elevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

Celadon_Elevator_EventScript_FloorSelect::
	lockall
	setvar VAR_0x8004, 0
	call_if_unset FLAG_TEMP_3, RocketHideout_Elevator_EventScript_SetFloor
	copyvar VAR_0x8005, VAR_DEPT_STORE_FLOOR
	special ShowDeptStoreElevatorFloorSelect
	message gText_WhichFloorWouldYouLike2
	waitmessage
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, GetDeptStoreDefaultFloorChoice
	switch VAR_RESULT
	case 0, Celadon_Elevator_EventScript_ChooseFloorFrom5th
	case 1, Celadon_Elevator_EventScript_ChooseFloorFrom4th
	case 2, Celadon_Elevator_EventScript_ChooseFloorFrom3th
	case 3, Celadon_Elevator_EventScript_ChooseFloorFrom2th
	case 4, Celadon_Elevator_EventScript_ChooseFloorFrom1th
	end

Celadon_Elevator_EventScript_ChooseFloorFrom5th::
    multichoicedefault 0, 0, MULTI_CELADON_ASCENSOR, 0, FALSE
	goto Celadon_Elevator_EventScript_ChooseFloor
	end

Celadon_Elevator_EventScript_ChooseFloorFrom4th::
    multichoicedefault 0, 0, MULTI_CELADON_ASCENSOR, 1, FALSE
	goto Celadon_Elevator_EventScript_ChooseFloor
	end

Celadon_Elevator_EventScript_ChooseFloorFrom3th::
    multichoicedefault 0, 0, MULTI_CELADON_ASCENSOR, 2, FALSE
	goto Celadon_Elevator_EventScript_ChooseFloor
	end

Celadon_Elevator_EventScript_ChooseFloorFrom2th::
    multichoicedefault 0, 0, MULTI_CELADON_ASCENSOR, 3, FALSE
	goto Celadon_Elevator_EventScript_ChooseFloor
	end

Celadon_Elevator_EventScript_ChooseFloorFrom1th::
    multichoicedefault 0, 0, MULTI_CELADON_ASCENSOR, 4, FALSE
	goto Celadon_Elevator_EventScript_ChooseFloor
	end

Celadon_Elevator_EventScript_ChooseFloor::
	switch VAR_RESULT
	case 0, Celadon_Elevator_EventScript_5thFloor
	case 1, Celadon_Elevator_EventScript_4thFloor
	case 2, Celadon_Elevator_EventScript_3thFloor
	case 3, Celadon_Elevator_EventScript_2thFloor
	case 4, Celadon_Elevator_EventScript_1thFloor
	case MULTI_B_PRESSED, RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

Celadon_Elevator_EventScript_5thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_1F
	setdynamicwarp MAP_CELADON_CITY_SHOP_5F, 6, 2
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F, RocketHideout_Elevator_EventScript_ExitFloorSelect
	call RocketHideout_Elevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

Celadon_Elevator_EventScript_4thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_1F
	setdynamicwarp MAP_CELADON_CITY_SHOP_4F, 6, 2
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F, RocketHideout_Elevator_EventScript_ExitFloorSelect
	call RocketHideout_Elevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

Celadon_Elevator_EventScript_3thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_1F
	setdynamicwarp MAP_CELADON_CITY_SHOP_3F, 6, 2
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F, RocketHideout_Elevator_EventScript_ExitFloorSelect
	call RocketHideout_Elevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

Celadon_Elevator_EventScript_2thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_1F
	setdynamicwarp MAP_CELADON_CITY_SHOP_2F, 6, 2
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F, RocketHideout_Elevator_EventScript_ExitFloorSelect
	call RocketHideout_Elevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

Celadon_Elevator_EventScript_1thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_1F
	setdynamicwarp MAP_CELADON_CITY_SHOP_1F, 6, 2
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F, RocketHideout_Elevator_EventScript_ExitFloorSelect
	call RocketHideout_Elevator_EventScript_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

