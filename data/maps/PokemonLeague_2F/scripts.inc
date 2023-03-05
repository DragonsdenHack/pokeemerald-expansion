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
	.string "Has tomado la peor de las\n"
	.string "decisiones, podrías haberte\l"
	.string "rendido aquí, y ahorrárte la\l"
	.string "tortura a la que LANCE va a\l"
	.string "someterte si se te ocurre\l"
	.string "acercarte lo más mínimo al título\l"
	.string "de CAMPEÓN, alguien como tú nunca\l"
	.string "lo será, lo único que has hecho\l"
	.string "con este combate es aplazar lo\l"
	.string "inevitable, sigue adelante, cada\l"
	.string "paso que des estarás más cerca de\l"
	.string "tu final, ROCKET.$"

PokemonLeague_2F_Combate_Bruno_Texto_2:
.string "¡TÚ!\n"
	.string "¡No creas que me he olvidado de tu\l"
	.string "cara, tienes suerte de que esté de\l"
	.string "moda ridiculizar al TEAM ROCKET!\l"
	.string "La mejor máscara es la que muestra\l"
	.string "tu verdadera cara, ¿eh?\l"
	.string "Podría poner la LIGA patas arriba\l"
	.string "si doy la alarma de quién eres,\l"
	.string "pero no lo haré, esta vez no vas a\l"
	.string "escapar, ¡usare todo mi poder y te\l"
	.string "aplastaré aquí mismo antes de\l"
	.string "llevarte preso!$"

PokemonLeague_2F_Combate_Bruno_Texto_4:
.string "¿Qué?\n"
	.string "¿Cómo he podido perder?$"
