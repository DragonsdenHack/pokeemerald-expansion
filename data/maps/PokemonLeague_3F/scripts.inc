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
.string "No he visto tanto talento junto\n"
	.string "desde esa época gloriosa donde se\l"
	.string "debatieron el título OAK y GIOV{PAUSE 15}…{PAUSE 15}\l"
	.string "Una lástima que todos vayáis a\l"
	.string "caer miserablemente, no debería de\l"
	.string "decirte esto {PLAYER}, pero los\l"
	.string "intereses políticos han atravesado\l"
	.string "también estos muros, LANCE es\l"
	.string "CAMPEÓN y DICTADOR de KANTO al\l"
	.string "mismo tiempo, jamás cederá su\l"
	.string "título de CAMPEÓN ante alguien que\l"
	.string "pueda comprometer su reinado,\l"
	.string "sabido esto pasa a la siguiente\l"
	.string "sala, aún tienes la oportunidad de\l"
	.string "hacer que tu equipo POKÉMON hable\l"
	.string "en el campo.$"


PokemonLeague_3F_Combate_Agatha_Texto_2:
.string "¿Pero qué tenemos aquí?\n"
	.string "No me gusta esta moda de vestir\l"
	.string "así chaval, ¿no te importa que te\l"
	.string "lo diga verdad?\l"
	.string "Soy AGATHA del ALTO MANDO,\l"
	.string "especialista en el tipo FANTASMA,\l"
	.string "un tipo con muchos misterios aún\l"
	.string "por resolver, y cuyo potencial aún\l"
	.string "desconocemos, a pesar de ello,\l"
	.string "gracias a mis décadas de\l"
	.string "experiencia y duro entrenamiento\l"
	.string "he logrado entender mucho mejor a\l"
	.string "este tipo.\l"
	.string "¿{PLAYER}?\l"
	.string "¡Te mostraré cómo lucha un\l"
	.string "ENTRENADOR de verdad!$"

PokemonLeague_3F_Combate_Agatha_Texto_4:
.string "Vaya, otro chiquillo más que tiene\n"
	.string "algo especial.$"
