MtPyre_Exterior_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Exterior_OnTransition
	.byte 0

MtPyre_Exterior_OnTransition:
	call MtPyre_Exterior_EventScript_CheckEnterFromSummit
	end

MtPyre_Exterior_EventScript_CheckEnterFromSummit::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	goto_if_lt VAR_TEMP_1, 12, MtPyre_Exterior_EventScript_EnterFromSummit
	return

MtPyre_Exterior_EventScript_EnterFromSummit::
	setweather WEATHER_FOG_HORIZONTAL
	return

MtPyre_Exterior_EventScript_FogTrigger::
	setweather WEATHER_FOG_HORIZONTAL
	doweather
	end

MtPyre_Exterior_EventScript_SunTrigger::
	setweather WEATHER_SUNNY
	doweather
	end

MtPyre_Exterior_Warp_Move_1:
walk_in_place_up
step_end

MtPyre_Exterior_Warp_Move_2:
walk_in_place_down
step_end

MtPyre_Exterior_Warp_Izq::
lock
applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Exterior_Warp_Move_1
warp MAP_MT_PYRE_SUMMIT, 22, 30
delay 100
release
end

MtPyre_Exterior_Warp_Der::
lock
applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Exterior_Warp_Move_1
warp MAP_MT_PYRE_SUMMIT, 24, 30
delay 100
release
end

MtPyre_Summit_Warp_Izq::
lock
applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Exterior_Warp_Move_2
warp MAP_MT_PYRE_EXTERIOR, 19, 10
delay 100
release
end

MtPyre_Summit_Warp_Der::
lock
applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Exterior_Warp_Move_2
warp MAP_MT_PYRE_EXTERIOR, 20, 10
delay 100
release
end

