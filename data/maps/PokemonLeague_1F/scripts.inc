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
playse MUS_RG_ENCOUNTER_GYM_LEADER
delay 10
msgbox PokemonLeague_1F_Combate_Lorelei_Texto_2.1
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
	.string "Verdammt! Schon wieder verloren! … Ich\n"
	.string "sollte mir wohl endlich mal eine Pause\l"
	.string "auf EILAND VIER gönnen. Na los, Kleiner.\l"
	.string "Geh ruhig weiter. Die POKéMON LIGA hält\l"
	.string "noch einige Überraschungen für dich\l"
	.string "bereit. So viel kann ich dir sagen.$"

PokemonLeague_1F_Combate_Lorelei_Texto_2:
	.string "Willkommen in der POKéMON LIGA! Ich bin\n"
	.string "LORELEI und gehöre zu den TOP VIER!\p"
	.string "Irgendwie kommt mir dein Gesicht\n"
	.string "bekannt vor… oder vielleicht auch\l"
	.string "nicht? Wie auch immer. Heute ist ein\l"
	.string "harter Tag. Ich habe noch nie so viele\l"
	.string "talentierte Herausforderer auf einmal\l"
	.string "gesehen, die den TITEL wollen.\p"
	.string "Du solltest mindestens genauso gut wie\n"
	.string "sie sein, denn niemand kann sich mit mir\l"
	.string "messen, wenn es um EIS-POKéMON geht!$"

PokemonLeague_1F_Combate_Lorelei_Texto_2.1:
	.string "Die Kraft von EIS-Attacken ist\n"
	.string "unglaublich. Du wirst um Gnade winseln,\l"
	.string "wenn ich deine POKéMON eingefroren\l"
	.string "habe! Hahaha! Bist du bereit!$"

PokemonLeague_1F_Combate_Lorelei_Texto_4:
.string "… es sollte nicht so laufen!$"

