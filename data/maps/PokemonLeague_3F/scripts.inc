PokemonLeague_3F_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_AgathasRoom_OnResume
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_AgathasRoom_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonLeague_AgathasRoom_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_AgathasRoom_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_AgathasRoom_OnFrame
	.byte 0

PokemonLeague_AgathasRoom_OnResume::
	@setvar VAR_0x8004, 0
	@call PokemonLeague_EventScript_DoLightingEffect
	end

PokemonLeague_AgathasRoom_OnLoad::
	call_if_set FLAG_TEMP_5, PokemonLeague_AgathasRoom_EventScript_SetDoorOpen
	call_if_eq VAR_TEMP_0, 1, PokemonLeague_AgathasRoom_EventScript_CloseEntry
	end

PokemonLeague_AgathasRoom_EventScript_CloseEntry::
	call PokemonLeague_EventScript_CloseEntry
	return

PokemonLeague_AgathasRoom_EventScript_SetDoorOpen::
	call PokemonLeague_EventScript_SetDoorOpen
	return

PokemonLeague_AgathasRoom_OnTransition::
	@setworldmapflag FLAG_WORLD_MAP_POKEMON_LEAGUE_LORELEIS_ROOM
	end

PokemonLeague_AgathasRoom_OnWarp::
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_AgathasRoom_EventScript_TurnPlayerNorth
	.2byte 0

PokemonLeague_AgathasRoom_EventScript_TurnPlayerNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

PokemonLeague_AgathasRoom_OnFrame::
	map_script_2 VAR_TEMP_0, 0, PokemonLeague_AgathasRoom_EventScript_EnterRoom
	.2byte 0

PokemonLeague_AgathasRoom_EventScript_EnterRoom::
	lockall
	call PokemonLeague_EventScript_EnterRoom
	setvar VAR_TEMP_0, 1
	releaseall
	end

PokemonLeague_AgathasRoom_EventScript_Agatha::
	lock
	faceplayer
	goto_if_set FLAG_TEMP_5, PokemonLeague_AgathasRoom_EventScript_PostBattle
	call PokemonLeague_3F_Combate_Agatha
	call PokemonLeague_AgathasRoom_EventScript_Battle
	goto PokemonLeague_AgathasRoom_EventScript_DefeatedAgatha
	end

PokemonLeague_3F_Combate_Agatha::
msgbox PokemonLeague_3F_Combate_Agatha_Texto_2
return

PokemonLeague_AgathasRoom_EventScript_Battle::
	trainerbattle_no_intro TRAINER_AGATHA, PokemonLeague_3F_Combate_Agatha_Texto_4
	return

PokemonLeague_AgathasRoom_EventScript_PostBattle::
	msgbox PokemonLeague_3F_Combate_Agatha_Texto_1
	release
	end

PokemonLeague_AgathasRoom_EventScript_DefeatedAgatha::
	setflag FLAG_TEMP_5
	call PokemonLeague_EventScript_OpenDoor
	msgbox PokemonLeague_3F_Combate_Agatha_Texto_1
	release
	end

PokemonLeague_3F_Combate_Agatha_Texto_1:
	.string "I haven't seen so much talent together\n"
	.string "since that glorious era where the\l"
	.string "championship was contested between\l"
	.string "OAK and GIOV… It is a pity that all of\l"
	.string "you will fall down miserably, I shouldn't\l"
	.string "tell you this, {PLAYER}, but the\l"
	.string "political interests had crossed these\l"
	.string "walls, LANCE is the CHAMP and KANTO's\l"
	.string "DICTATOR at the same time, will never\l"
	.string "renounce his CHAMP title against\l"
	.string "someone that could risk his reign, once\l"
	.string "you know this, go to the next room, you\l"
	.string "still have the chance to let your\l"
	.string "POKÉMON team speak on the battlefield.$"


PokemonLeague_3F_Combate_Agatha_Texto_2:
	.string "What do we have here? I don't like that\n"
	.string "style of wearing as a ROCKET, you don't\l"
	.string "mind if I said that, right? I'm AGATHA of\l"
	.string "the ELITE FOUR, the GHOST type\l"
	.string "specialist, a type with lot of mysteries\l"
	.string "yet to be solved, and whose potential\l"
	.string "we still don't know., despite that,\l"
	.string "thanks to my decades of experience and\l"
	.string "hard training, I've managed to\l"
	.string "understand this type much better.\l"
	.string "{PLAYER}? I'll show you how a real\l"
	.string "TRAINER battles!$"

PokemonLeague_3F_Combate_Agatha_Texto_4:
	.string "Oh, another kid that has something\n"
	.string "special.$"
