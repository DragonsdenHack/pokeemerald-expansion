PokemonLeague_4F_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_LancesRoom_OnResume
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_LancesRoom_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonLeague_LancesRoom_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_LancesRoom_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_LancesRoom_OnFrame
	.byte 0

PokemonLeague_LancesRoom_OnResume::
	@setvar VAR_0x8004, 0
	@call PokemonLeague_EventScript_DoLightingEffect
	end

PokemonLeague_LancesRoom_OnLoad::
	call_if_set FLAG_TEMP_5, PokemonLeague_LancesRoom_EventScript_SetDoorOpen 
	call_if_eq VAR_TEMP_0, 1, PokemonLeague_LancesRoom_EventScript_CloseEntry
	end

PokemonLeague_LancesRoom_EventScript_CloseEntry::
	call PokemonLeague_LancesRoom_EventScript_SetEntryClosed
	return

PokemonLeague_LancesRoom_EventScript_SetDoorOpen::
	call PokemonLeague_EventScript_SetDoorOpenLance
	return

PokemonLeague_LancesRoom_OnTransition::
	@setworldmapflag FLAG_WORLD_MAP_POKEMON_LEAGUE_LORELEIS_ROOM
	end

PokemonLeague_LancesRoom_OnWarp::
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_LancesRoom_EventScript_TurnPlayerNorth
	.2byte 0

PokemonLeague_LancesRoom_EventScript_TurnPlayerNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

PokemonLeague_LancesRoom_OnFrame::
	map_script_2 VAR_TEMP_0, 0, PokemonLeague_LancesRoom_EventScript_EnterRoom
	.2byte 0

PokemonLeague_LancesRoom_EventScript_EnterRoom::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_LancesRoom_Movement_WalkThroughCorridor
	waitmovement 0
	setflag FLAG_TEMP_2
	call PokemonLeague_LancesRoom_EventScript_SetEntryClosed
	playse SE_UNLOCK
	special DrawWholeMapView
	waitse
	setvar VAR_TEMP_0, 1
	releaseall
	end

PokemonLeague_LancesRoom_EventScript_Lance::
	lock
	faceplayer
	goto_if_set FLAG_TEMP_5, PokemonLeague_LancesRoom_EventScript_PostBattle
	call PokemonLeague_4F_Combate_Lance
	call PokemonLeague_LancesRoom_EventScript_Battle
	goto PokemonLeague_LancesRoom_EventScript_DefeatedLance
	end

PokemonLeague_LancesRoom_EventScript_SetEntryClosed::
	setmetatile 5, 14, 0x29D, 1
	setmetatile 6, 14, 0x29E, 1
	setmetatile 7, 14, 0x29F, 1
	setmetatile 5, 15, 0x289, 1
	setmetatile 6, 15, 0x2A6, 1
	setmetatile 7, 15, 0x288, 1
	setmetatile 6, 16, 0x311, 0
	setmetatile 7, 16, 0x311, 0
	return

PokemonLeague_4F_Combate_Lance::
msgbox PokemonLeague_4F_Combate_Lance_Texto_2
return

PokemonLeague_LancesRoom_EventScript_Battle::
	trainerbattle_no_intro TRAINER_LANCE_1, PokemonLeague_4F_Combate_Lance_Texto_4
	return

PokemonLeague_LancesRoom_EventScript_PostBattle::
	msgbox PokemonLeague_4F_Combate_Lance_Texto_1
	release
	end

PokemonLeague_LancesRoom_EventScript_DefeatedLance::
	setflag FLAG_TEMP_5
	call PokemonLeague_EventScript_OpenDoorLance
	msgbox PokemonLeague_4F_Combate_Lance_Texto_1
	release
	end

PokemonLeague_4F_Combate_Lance_Texto_1:
.string "Entonces en KANTO sigue habiendo\n"
	.string "entrenadores capaces de revelarse\l"
	.string "ante el poder de un\l"
	.string "PSEUDOLEGENDARIO, no diré que lo\l"
	.string "tuyo no tiene mérito, pero ya está\l"
	.string "todo dicho, después de lo visto ya\l"
	.string "tenemos CAMPEÓN, tú, esa otra\l"
	.string "chiquilla y el díscolo nieto de\l"
	.string "OAK podéis mirar si queréis, os lo\l"
	.string "habéis ganado, pero ante el nuevo\l"
	.string "talento surgido de PUEBLO PALETA,\l"
	.string "ROJO, no podéis hacer nada, para\l"
	.string "estas alturas ya debe de haber\l"
	.string "confirmado su posición derrotando\l"
	.string "fácilmente a AZUL, que llegó\l"
	.string "antes, pasa, tal vez si llegas a\l"
	.string "tiempo de ver esa masacre se te\l"
	.string "quiten las ganas de retar a\l"
	.string "nuestro nuevo CAMPEÓN.$"

PokemonLeague_4F_Combate_Lance_Texto_2:
	.string "¿{PLAYER}?\n"
	.string "Jamás había oído hablar de ti,\l"
	.string "como sabes, dirijo al ALTO MANDO a\l"
	.string "la vez que el GOBIERNO de KANTO y\l"
	.string "JOHTO, te diría que soy también el\l"
	.string "actual CAMPEÓN, pero ese honor me\l"
	.string "lo acaban de quitar dos mocosos y\l"
	.string "una chiquilla descarada que al\l"
	.string "igual que tú tiene el valor de\l"
	.string "presentarse ante mi con esta\l"
	.string "indumentaria.\l"
	.string "Sin embargo, el título de CAMPEÓN\l"
	.string "ya tiene dueño chaval, un\l"
	.string "desconocido como tú no pinta nada\l"
	.string "aquí a estas alturas, solo me\l"
	.string "tomará hacer algún que otro cambio\l"
	.string "en mi ejército de dragones\l"
	.string "respecto a los combates anteriores\l"
	.string "para asegurarme de que tu pequeña\l"
	.string "aventura en la LIGA acaba aquí\l"
	.string "conmigo.$"

PokemonLeague_4F_Combate_Lance_Texto_4:
.string "Parece que me he equivocado\n"
	.string "regulando mi poder.$"
