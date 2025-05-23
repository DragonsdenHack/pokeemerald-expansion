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
	.string "Also gibt es in KANTO doch noch Trainer,\n"
	.string "die fähig sind, sich der Macht der\l"
	.string "PSEUDO-LEGENDÄREN zu stellen.\p"
	.string "Ich werde nicht leugnen, dass deine\n"
	.string "Leistung beeindruckend war, aber du\l"
	.string "kommst zu spät. Wir müssten bereits\l"
	.string "einen neuen CHAMPION haben. Du, die\l"
	.string "andere Göre und EICHs rebellischer\l"
	.string "Enkel könnt euch gerne selber davon\l"
	.string "überzeugen. Ihr habt es euch verdient.\p"
	.string "Aber gegen das Wunderkind aus\n"
	.string "ALABASTIA, ROT, hat keiner von euch\l"
	.string "eine Chance. Er müsste seinen Titel\l"
	.string "längst gesichert haben, indem er BLAU,\l"
	.string "der vor euch hier ankam, mühelos\l"
	.string "besiegt hat. Gehe nur weiter. Vielleicht\l"
	.string "schaffst du es noch rechtzeitig, um das\l"
	.string "Massaker mit eigenen Augen zu sehen.\p"
	.string "Vielleicht überlegst du es dir dann\n"
	.string "zweimal, unseren neuen CHAMPION\l"
	.string "herauszufordern.$"

PokemonLeague_4F_Combate_Lance_Texto_2:
	.string "{PLAYER}?\p"
	.string "Noch nie gehört. Aber wie du weißt, wer\n"
	.string "ich bin. Ich leite die TOP VIER und die\l"
	.string "REGIERUNGEN von KANTO und JOHTO.\p"
	.string "Ich würde dir gerne sagen, dass ich\n"
	.string "auch noch der aktuelle CHAMP wäre, aber\l"
	.string "dieser Titel wurde mir gerade von zwei\l"
	.string "Kindern und einer Göre entrissen.\p"
	.string "Letztere besaß sogar die Dreistigkeit,\n"
	.string "mir in dieser grässlichen Uniform\l"
	.string "gegenüberzutreten - so wie du es\l"
	.string "gerade tust!$"
	
PokemonLeague_4F_Combate_Lance_Texto_2.1:
	.string "Wie dem auch sei. Der CHAMPION-Titel\n"
	.string "gehört nun einem anderen. Ein Niemand\l"
	.string "wie du, hat hier nichts zu suchen!\p"
	.string "Es braucht nur ein paar Anpassungen\n"
	.string "in meiner Drachenarmee, um\l"
	.string "sicherzustellen, dass dein kleiner\l"
	.string "Ausflug in die LIGA genau hier endet!$"

PokemonLeague_4F_Combate_Lance_Texto_4:
	.string "Es scheint, als hätte ich einen Fehler\n"
	.string "bei der Anpassung meines Teams gemacht\l"
	.string "…$"


