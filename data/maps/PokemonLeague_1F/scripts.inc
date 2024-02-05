PokemonLeague_1F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_LoreleisRoom_OnResume
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_LoreleisRoom_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonLeague_LoreleisRoom_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_LoreleisRoom_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_LoreleisRoom_OnFrame
	.byte 0

PokemonLeague_LoreleisRoom_OnResume::
	@setvar VAR_0x8004, 0
	@call PokemonLeague_EventScript_DoLightingEffect
	end

PokemonLeague_LoreleisRoom_OnLoad::
	call_if_set FLAG_TEMP_5, PokemonLeague_LoreleisRoom_EventScript_SetDoorOpen
	call_if_eq VAR_TEMP_0, 1, PokemonLeague_LoreleisRoom_EventScript_CloseEntry
	end

PokemonLeague_LoreleisRoom_EventScript_CloseEntry::
	call PokemonLeague_EventScript_CloseEntry
	return

PokemonLeague_LoreleisRoom_EventScript_SetDoorOpen::
	call PokemonLeague_EventScript_SetDoorOpen
	return

PokemonLeague_LoreleisRoom_OnTransition::
	@setworldmapflag FLAG_WORLD_MAP_POKEMON_LEAGUE_LORELEIS_ROOM
	end

PokemonLeague_LoreleisRoom_OnWarp::
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_LoreleisRoom_EventScript_TurnPlayerNorth
	.2byte 0

PokemonLeague_LoreleisRoom_EventScript_TurnPlayerNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

PokemonLeague_LoreleisRoom_OnFrame::
	map_script_2 VAR_TEMP_0, 0, PokemonLeague_LoreleisRoom_EventScript_EnterRoom
	.2byte 0

PokemonLeague_LoreleisRoom_EventScript_EnterRoom::
	lockall
	call PokemonLeague_EventScript_EnterRoom
	setvar VAR_TEMP_0, 1
	releaseall
	end

PokemonLeague_LoreleisRoom_EventScript_Lorelei::
	lock
	faceplayer
	goto_if_set FLAG_TEMP_5, PokemonLeague_LoreleisRoom_EventScript_PostBattle
	call PokemonLeague_1F_Combate_Lorelei
	call PokemonLeague_LoreleisRoom_EventScript_Battle
	goto PokemonLeague_LoreleisRoom_EventScript_DefeatedLorelei
	end

PokemonLeague_1F_Combate_Lorelei::
msgbox PokemonLeague_1F_Combate_Lorelei_Texto_2
return

PokemonLeague_LoreleisRoom_EventScript_Battle::
	trainerbattle_no_intro TRAINER_LORELEI, PokemonLeague_1F_Combate_Lorelei_Texto_4
	return

PokemonLeague_LoreleisRoom_EventScript_PostBattle::
	msgbox PokemonLeague_1F_Combate_Lorelei_Texto_1
	release
	end

PokemonLeague_LoreleisRoom_EventScript_DefeatedLorelei::
	setflag FLAG_TEMP_5
	call PokemonLeague_EventScript_OpenDoor
	msgbox PokemonLeague_1F_Combate_Lorelei_Texto_1
	release
	end


PokemonLeague_1F_Combate_Lorelei_Texto_1:
	.string "Oh crap, defeated once again, I think I\n"
	.string "need a vacation time at FLOE ISLAND…\l"
	.string "Go ahead kid, the POKÉMON LEAGUE\l"
	.string "awaits you with some surprises.$"

PokemonLeague_1F_Combate_Lorelei_Texto_2:
	.string "Welcome to the POKÉMON LEAGUE. I am\n"
	.string "LORELEI, of the ELITE FOUR. I have the\l"
	.string "feeling I've seen you somewhere before,\l"
	.string "or not? Anyway, today has been a tough\l"
	.string "day, I've never seen so many talents\l"
	.string "aiming to the CHAMPION title at once,\l"
	.string "you better be good enough like them\l"
	.string "because no one surpasses me in training\l"
	.string "ICE-TYPE POKÉMON. Freezing moves are\l"
	.string "my specialty, and your POKÉMON will be\l"
	.string "helpless when that happens. Hahaha!\l"
	.string "Let's start?$"

PokemonLeague_1F_Combate_Lorelei_Texto_4:
.string "This should not be like this!…$"

