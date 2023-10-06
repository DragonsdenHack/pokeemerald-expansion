NeoRoute15_Path_MapScripts::
	.byte 0

NeoRoute15_Path_Npc::
lock
faceplayer
msgbox NeoRoute15_Path_Npc_Texto_1 MSGBOX_NPC
release
end

NeoRoute15_Path_Npc_Texto_1:
.string "¿Estás trabajando en una POKÉDEX? Es\n"
	.string "muy importante. ¡No te rindad!$"


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


