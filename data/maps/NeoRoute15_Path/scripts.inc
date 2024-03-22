NeoRoute15_Path_MapScripts::
	.byte 0

NeoRoute15_Path_Npc::
lock
faceplayer
msgbox NeoRoute15_Path_Npc_Texto_1 MSGBOX_NPC
release
end

NeoRoute15_Path_Npc_Texto_1:
	.string "Are you working on a POKÉDEX? It's very\n"
	.string "important. Don't give up!$"

NeoRoute19_Path_Npc::
lock
faceplayer
msgbox NeoRoute19_Path_Npc_Texto_1 MSGBOX_NPC
release
end

NeoRoute19_Path_Npc_Texto_1:
	.string "Fortunately, no one from CINNABAR\n"
	.string "ISLAND was injured during the eruption.$"


NeoRoute15_EventScript_Colegial::
	trainerbattle_single TRAINER_TRAINER_232, NeoRoute15_Text_ColegialIntro, NeoRoute15_Text_ColegialDefeated
	msgbox NeoRoute15_ColegialPostBattle, MSGBOX_AUTOCLOSE
	end

NeoRoute15_EventScript_Colegial2::
	trainerbattle_single TRAINER_TRAINER_233, NeoRoute15_Text_Colegial2Intro, NeoRoute15_Text_Colegial2Defeated
	msgbox NeoRoute15_Colegial2PostBattle, MSGBOX_AUTOCLOSE
	end

NeoRoute15_EventScript_Colegial3::
	trainerbattle_single TRAINER_TRAINER_234, NeoRoute15_Text_Colegial3Intro, NeoRoute15_Text_Colegial3Defeated
	msgbox NeoRoute15_Colegial3PostBattle, MSGBOX_AUTOCLOSE
	end

NeoRoute15_EventScript_Colegial4::
	trainerbattle_single TRAINER_TRAINER_235, NeoRoute15_Text_Colegial4Intro, NeoRoute15_Text_Colegial4Defeated
	msgbox NeoRoute15_Colegial4PostBattle, MSGBOX_AUTOCLOSE
	end

NeoRoute15_EventScript_Profesora::
	trainerbattle_single TRAINER_TRAINER_236, NeoRoute15_Text_ProfesoraIntro, NeoRoute15_Text_ProfesoraDefeated
	msgbox NeoRoute15_ProfesoraPostBattle, MSGBOX_AUTOCLOSE
	end

NeoRoute15_EventScript_Profesora2::
	trainerbattle_single TRAINER_TRAINER_237, NeoRoute15_Text_Profesora2Intro, NeoRoute15_Text_Profesora2Defeated
	msgbox NeoRoute15_Profesora2PostBattle, MSGBOX_AUTOCLOSE
	end

Subterraneo_Bloqueo::
compare VAR_UNUSED_0x40F7, 202
goto_if_lt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, NeoRoute19_Obras_Move_1
waitmovement 0x0
msgbox Subterraneo_Bloqueo_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NeoRoute19_Obras_Move_4
waitmovement 0x0
release
end

Subterraneo_Bloqueo_Texto_1:
.string "The underground was closed.$"

NeoRoute19_Obras::
compare VAR_UNUSED_0x40F7, 202
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
compare VAR_UNUSED_0x40F7, 187
goto_if_lt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, NeoRoute19_Obras_Move_1
waitmovement 0x0
msgbox NeoRoute19_Obras_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NeoRoute19_Obras_Move_2
waitmovement 0x0
release
end

NeoRoute19_Obras_Move_4:
walk_down
step_end

NeoRoute19_Obras_Move_3:
walk_in_place_up
step_end

NeoRoute19_Obras_Move_2:
walk_up
step_end

NeoRoute19_Obras_Move_1:
walk_in_place_down
step_end

NeoRoute19_Obras_Texto_1:
	.string "They are doing construction work down\n"
	.string "below, it's best not to disturb.$"

NeoRoute19_Obras_Texto_2:
	.string "They are doing construction work down\n"
	.string "below, it's best not to disturb.$"

NeoRoute19_Obras2::
compare VAR_UNUSED_0x40F7, 202
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
compare VAR_UNUSED_0x40F7, 187
goto_if_lt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, NeoRoute19_Obras_Move_3
waitmovement 0x0
msgbox NeoRoute19_Obras_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NeoRoute19_Obras_Move_4
waitmovement 0x0
release
end

NeoFucsia_Gym_Cerrado::
compare VAR_UNUSED_0x40F7, 300
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, NeoRoute19_Obras_Move_3
waitmovement 0x0
msgbox NeoFucsia_Gym_Cerrado_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, NeoRoute19_Obras_Move_4
waitmovement 0x0
release
end

NeoFucsia_Gym_Cerrado_Texto_1:
.string "The door is closed.$"



