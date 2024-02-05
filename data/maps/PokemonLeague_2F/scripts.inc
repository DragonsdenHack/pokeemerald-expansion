PokemonLeague_2F_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_BrunosRoom_OnResume
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_BrunosRoom_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonLeague_BrunosRoom_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_BrunosRoom_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_BrunosRoom_OnFrame
	.byte 0

PokemonLeague_BrunosRoom_OnResume::
	@setvar VAR_0x8004, 0
	@call PokemonLeague_EventScript_DoLightingEffect
	end

PokemonLeague_BrunosRoom_OnLoad::
	call_if_set FLAG_TEMP_5, PokemonLeague_BrunosRoom_EventScript_SetDoorOpen
	call_if_eq VAR_TEMP_0, 1, PokemonLeague_BrunosRoom_EventScript_CloseEntry
	end

PokemonLeague_BrunosRoom_EventScript_CloseEntry::
	call PokemonLeague_EventScript_CloseEntry
	return

PokemonLeague_BrunosRoom_EventScript_SetDoorOpen::
	call PokemonLeague_EventScript_SetDoorOpen
	return

PokemonLeague_BrunosRoom_OnTransition::
	@setworldmapflag FLAG_WORLD_MAP_POKEMON_LEAGUE_LORELEIS_ROOM
	end

PokemonLeague_BrunosRoom_OnWarp::
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_BrunosRoom_EventScript_TurnPlayerNorth
	.2byte 0

PokemonLeague_BrunosRoom_EventScript_TurnPlayerNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

PokemonLeague_BrunosRoom_OnFrame::
	map_script_2 VAR_TEMP_0, 0, PokemonLeague_BrunosRoom_EventScript_EnterRoom
	.2byte 0

PokemonLeague_BrunosRoom_EventScript_EnterRoom::
	lockall
	call PokemonLeague_EventScript_EnterRoom
	setvar VAR_TEMP_0, 1
	releaseall
	end

PokemonLeague_BrunosRoom_EventScript_Bruno::
	lock
	faceplayer
	goto_if_set FLAG_TEMP_5, PokemonLeague_BrunosRoom_EventScript_PostBattle
	call PokemonLeague_2F_Combate_Bruno
	call PokemonLeague_BrunosRoom_EventScript_Battle
	goto PokemonLeague_BrunosRoom_EventScript_DefeatedBruno
	end

PokemonLeague_2F_Combate_Bruno::
msgbox PokemonLeague_2F_Combate_Bruno_Texto_2
return

PokemonLeague_BrunosRoom_EventScript_Battle::
	trainerbattle_no_intro TRAINER_BRUNO_2, PokemonLeague_2F_Combate_Bruno_Texto_4
	return

PokemonLeague_BrunosRoom_EventScript_PostBattle::
	msgbox PokemonLeague_2F_Combate_Bruno_Texto_1
	release
	end

PokemonLeague_BrunosRoom_EventScript_DefeatedBruno::
	setflag FLAG_TEMP_5
	call PokemonLeague_EventScript_OpenDoor
	msgbox PokemonLeague_2F_Combate_Bruno_Texto_1
	release
	end

PokemonLeague_2F_Combate_Bruno_Texto_1:
	.string "You've made the worst decision\n"
	.string "possible, you could have surrendered\l"
	.string "right here and spared yourself the\l"
	.string "torture that LANCE is going to subject\l"
	.string "you to if you dare to get anywhere near\l"
	.string "the CHAMPION title, someone like you\l"
	.string "will never be a CHAMP, all you've done\l"
	.string "with this battle is delaying the\l"
	.string "inevitable, keep going ahead, every\l"
	.string "step you take gets you closer to your\l"
	.string "end, ROCKET.$"

PokemonLeague_2F_Combate_Bruno_Texto_2:
.string "YOU!\n"
	.string "Don't think that I forgot who you are,\l"
	.string "you are so lucky that mocking TEAM\l"
	.string "ROCKET is trendy! The best disguise is\l"
	.string "the one that reveals your true self,\l"
	.string "huh? I could disrupt the LEAGUE by\l"
	.string "exposing your identity, but I won't\l"
	.string "because this time, you won't escape, I'll\l"
	.string "unleash all my power and crush you right\l"
	.string "here before taking you under arrest!$"

PokemonLeague_2F_Combate_Bruno_Texto_4:
.string "What?\n"
	.string "How could I lost?$"
