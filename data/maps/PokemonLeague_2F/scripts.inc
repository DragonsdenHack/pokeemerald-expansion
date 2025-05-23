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
playse MUS_RG_ENCOUNTER_GYM_LEADER
delay 10
msgbox PokemonLeague_2F_Combate_Bruno_Texto_2.1
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
	.string "Das war die dümmste Entscheidung, die\n"
	.string "du treffen konntest. Du hättest dich\l"
	.string "einfach ergeben können und dir das\l"
	.string "erspart, was SIEGFRIED mit dir\l"
	.string "anstellen wird, wenn du es wagst, auch\l"
	.string "nur in die Nähe des CHAMPION-Titels zu\l"
	.string "kommen. Jemand wie du wird niemals\l"
	.string "CHAMPION werden! Alles, was du mit\l"
	.string "diesem Sieg erreichst hast, war das\l"
	.string "Unvermeidliche hinauszuzögern! Geh nur\l"
	.string "weiter! Jeder Schritt führt dich nur\l"
	.string "tiefer in dein Verderben, ROCKET!$"

PokemonLeague_2F_Combate_Bruno_Texto_2:
.string "DU!\p"
	.string "Glaub bloß nicht, ich hätte vergessen,\n"
	.string "wer du bist! Ich kann mich noch gut an\l"
	.string "unsere letzte Begegnung erinnern!\p"
	.string "Du hast Glück, dass es gerade Mode ist,\n"
	.string "sich über TEAM ROCKET lustig zu machen!\p"
	.string "Stimmt wohl, dass die Wahrheit die beste\n"
	.string "Tarnung ist, was? Ich könnte jetzt die\l"
	.string "gesamte LIGA über deine wahre\l"
	.string "Identität informieren, aber das werde\l"
	.string "ich nicht tun! Ich habe noch eine\l"
	.string "Rechnung mit dir offen und dieses\l"
	.string "Mal entkommst du mir nicht!$"

PokemonLeague_2F_Combate_Bruno_Texto_2.1:
	.string "Dieses Mal werde ich meine gesamte\n"
	.string "Kraft einsetzen und dich hier und\l"
	.string "jetzt vernichten!\p"
	.string "Und danach lasse ich dich verhaften!$"

PokemonLeague_2F_Combate_Bruno_Texto_4:
	.string "Wie konnte ich verlieren?$"
