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
.string "No puede ser, de nuevo derrotada,\n"
	.string "creo que un periodo de descanso en\l"
	.string "ISLA CUARTA no me vendría mal…\l"
	.string "Sigue adelante chico, la LIGA\l"
	.string "POKÉMON te reserva muchas\l"
	.string "sorpresas.$"

PokemonLeague_1F_Combate_Lorelei_Texto_2:
.string "Bienvenido a la LIGA POKÉMON.\n"
	.string "Me llamo LORELEI, de la ÉLITE 4.\l"
	.string "Tengo la impresión de haberte\l"
	.string "visto antes en algún lugar, ¿o no?\l"
	.string "En fin, hoy está siendo un día\l"
	.string "duro, nunca había visto a tantos\l"
	.string "talentos juntos aspirar al título\l"
	.string "de CAMPEÓN, más te vale ser como\l"
	.string "ellos, porque nadie me\l"
	.string "supera entrenando POKÉMON TIPO\l"
	.string "HIELO.\l"
	.string "Los movimientos que congelan son\l"
	.string "mi especialidad, tus POKÉMON\l"
	.string "estarán a mi merced cuando eso\l"
	.string "ocurra.\l"
	.string "¡Hahaha!\l"
	.string "¿Comenzamos?$"

PokemonLeague_1F_Combate_Lorelei_Texto_4:
.string "¡Esto no debería ser así!…$"

