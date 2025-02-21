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
playse MUS_RG_ENCOUNTER_GYM_LEADER
delay 10
msgbox PokemonLeague_4F_Combate_Lance_Texto_2.1
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
	.string "ante el poder de un PSEUDOLEGENDARIO{PAUSE 15}…{PAUSE 15}\l"
	.string "No diré que lo tuyo no tiene mérito,\l"
	.string "pero ya está todo dicho: después de\l"
	.string "lo visto ya tenemos CAMPEÓN.\l"
	.string "Tú, esa otra chiquilla y el díscolo\l"
	.string "nieto de OAK podéis mirar si queréis,\l"
	.string "os lo habéis ganado, pero ante el nuevo\l"
	.string "talento surgido de PUEBLO PALETA, no\l"
	.string "podéis hacer nada.{PAUSE 35}\p"
	.string "Para estas alturas, ROJO ya debe haber\n"
	.string "confirmado su posición, derrotando con\l"
	.string "facilidad a AZUL, que llegó antes.{PAUSE 35}\p"
	.string "Tal vez si llegas a tiempo para ver\n"
	.string "esa masacre se te quiten las ganas\l"
	.string "de retar a nuestro nuevo CAMPEÓN.$"

PokemonLeague_4F_Combate_Lance_Texto_2:
	.string "¿{PLAYER}?{PAUSE 35}\n"
	.string "Jamás había oído hablar de ti,\l"
	.string "como sabes, dirijo al ALTO MANDO, a\l"
	.string "la vez que el GOBIERNO de KANTO y\l"
	.string "JOHTO. Te diría que soy también el\l"
	.string "actual CAMPEÓN, pero ese honor me\l"
	.string "lo acaban de quitar dos mocosos y\l"
	.string "una chiquilla descarada que, al\l"
	.string "igual que tú, tiene el valor de\l"
	.string "presentarse ante mí con esta\l"
	.string "indumentaria.{PAUSE 35}\p"
	.string "Sin embargo, el título de CAMPEÓN\n"
	.string "ya tiene dueño, y un desconocido\l"
	.string "como tú, a estas alturas no pinta\l"
	.string "nada aquí.$"
	
PokemonLeague_4F_Combate_Lance_Texto_2.1:
	.string "¡Solo me tomará hacer algún que otro\n"
	.string "cambio en mi ejército de dragones\l"
	.string "respecto a los combates anteriores,\l"
	.string "para asegurarme de que tu pequeña\l"
	.string "aventura acaba aquí conmigo!$"

PokemonLeague_4F_Combate_Lance_Texto_4:
	.string "It seems I've made a mistake adjusting\n"
	.string "my strength…$"
