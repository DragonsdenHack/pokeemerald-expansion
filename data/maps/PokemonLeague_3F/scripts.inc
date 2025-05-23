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
playse MUS_RG_ENCOUNTER_GYM_LEADER
delay 10
msgbox PokemonLeague_3F_Combate_Agatha_Texto_2.1
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
	.string "Ich habe schon lange nicht mehr so viel\n"
	.string "Talent an einem Ort versammelt gesehen.\p"
	.string "Nicht seid seit jener glorreichen Ära, in\n"
	.string "welcher der TITEL ständig zwischen\l"
	.string "EICH und GIO{PAUSE 15}…{PAUSE 15} Verzeihe mir. Ich\l"
	.string "schweife ab. Es ist eine Schande, dass\l"
	.string "ihr alle jämmerlich scheitern werdet.\p"
	.string "Ich sollte dir das eigentlich nicht\n"
	.string "sagen, {PLAYER}, aber politische\l"
	.string "Interessen haben hier schon längst\l"
	.string "ihre Heimat gefunden. Denn SIEGFRIED\l"
	.string "ist nicht nur der CHAMPION, sondern\l"
	.string "zugleich auch KANTOs DIKTATOR. Und\l"
	.string "glaub mir, er wird seinen Titel niemals\l"
	.string "an jemanden abtreten, der ihm seine\l"
	.string "Herrschaft streitig machen könnte.\p"
	.string "Jetzt, wo du das weißt, gehe ruhig\n"
	.string "weiter zum nächsten Raum. Du hast noch\l"
	.string "immer die Chance, deine POKéMON auf dem\l"
	.string "Schlachtfeld für dich sprechen zu\l"
	.string "lassen.$"

PokemonLeague_3F_Combate_Agatha_Texto_2:
	.string "Na, wen haben wir denn da? Ich muss\n"
	.string "sagen, dieser ROCKET-Aufzug gefällt\l"
	.string "mir gar nicht. Aber ich nehme an, du hast\l"
	.string "nichts dagegen, wenn ich das offen\l"
	.string "sage, oder? Ich bin AGATHE aus dem Team\l"
	.string "der TOP VIER und Spezialistin für\l"
	.string "GEIST-Typen. Ein Typ, der noch so viele\l"
	.string "Geheimnisse birgt und dessen Potenzial\l"
	.string "uns noch immer ein Rätsel ist.\p"
	.string "Doch trotz all dem, habe ich es dank\n"
	.string "jahrzehntelanger Erfahrung und\l"
	.string "intensivem Training geschafft, ein\l"
	.string "besseres Verständnis für diese\l"
	.string "rätselhaften POKéMON zu entwickeln.$"

PokemonLeague_3F_Combate_Agatha_Texto_2.1:
	.string "{PLAYER} war dein Name?\p"
	.string "Ich zeige dir, wie ein richtiger\n"
	.string "TRAINER kämpft!$"

PokemonLeague_3F_Combate_Agatha_Texto_4:
	.string "Oh! Ein weiteres ganz besonderes Kind!$"
