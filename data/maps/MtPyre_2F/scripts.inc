MtPyre_2F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
	map_script MAP_SCRIPT_ON_RESUME, MtPyre_2F_SetHoleWarp
	.byte 0

MtPyre_2F_SetHoleWarp:
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_MT_PYRE_1F
	end

MtPyre_2F_EventScript_Woman::
	msgbox MtPyre_2F_Text_MemoriesOfSkitty, MSGBOX_NPC
	end

MtPyre_2F_EventScript_PokefanM::
	msgbox MtPyre_2F_Text_TumbledFromFloorAbove, MSGBOX_NPC
	end

MtPyre_2F_EventScript_Mark::
	trainerbattle_single TRAINER_TRAINER_535, MtPyre_2F_Text_MarkIntro, MtPyre_2F_Text_MarkDefeat
	msgbox MtPyre_2F_Text_MarkPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_2F_EventScript_Luke::
	trainerbattle_double TRAINER_DEZ_AND_LUKE, MtPyre_2F_Text_LukeIntro, MtPyre_2F_Text_LukeDefeat, MtPyre_2F_Text_LukeNotEnoughMons
	msgbox MtPyre_2F_Text_LukePostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_2F_EventScript_Dez::
	trainerbattle_double TRAINER_DEZ_AND_LUKE, MtPyre_2F_Text_DezIntro, MtPyre_2F_Text_DezDefeat, MtPyre_2F_Text_DezNotEnoughMons
	msgbox MtPyre_2F_Text_DezPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_2F_EventScript_Leah::
	trainerbattle_single TRAINER_TRAINER_536, MtPyre_2F_Text_LeahIntro, MtPyre_2F_Text_LeahDefeat
	msgbox MtPyre_2F_Text_LeahPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_2F_EventScript_Zander::
	trainerbattle_single TRAINER_TRAINER_537, MtPyre_2F_Text_ZanderIntro, MtPyre_2F_Text_ZanderDefeat
	msgbox MtPyre_2F_Text_ZanderPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_2F_Text_MemoriesOfSkitty:
	.string "Memories of my darling SKITTY…\n"
	.string "My eyes overflow thinking about it.$"

MtPyre_2F_Text_TumbledFromFloorAbove:
	.string "Ooch, ouch… There are holes in the\n"
	.string "ground here and there.\p"
	.string "I didn't notice and took a tumble from\n"
	.string "the floor above.$"

MtPyre_2F_Text_MarkIntro:
	.string "¡Eh! ¿Buscas Pokémon? ¡Me has estado\n"
	.string "siguiendo! ¡Eso no se hace!$"

MtPyre_2F_Text_MarkDefeat:
	.string "¡Vale, vale, lo he entendido! ¡No me\n"
	.string "estabas siguiendo, perdón!$"

MtPyre_2F_Text_MarkPostBattle:
	.string "Aquí no hay ni un alma, así que pensé\n"
	.string "que encontraría Pokémon raros…$"

MtPyre_2F_Text_LukeIntro:
	.string "LUKE: We're here on a dare.\p"
	.string "Heheh, if I show her how cool I am,\n"
	.string "she'll fall for me. I know it!\p"
	.string "I know! I'll cream you and show her\n"
	.string "how cool I am!$"

MtPyre_2F_Text_LukeDefeat:
	.string "LUKE: Whoopsie!$"

MtPyre_2F_Text_LukePostBattle:
	.string "LUKE: Well, we lost but that's okay!\n"
	.string "I'm right here by your side.\l"
	.string "We'll make it through this dare!$"

MtPyre_2F_Text_LukeNotEnoughMons:
	.string "LUKE: If you want to take me on,\n"
	.string "bring some more POKÉMON.\p"
	.string "If you don't, I won't be able to show\n"
	.string "off to my girl how cool I am!$"

MtPyre_2F_Text_DezIntro:
	.string "DEZ: I came here on a dare with my\n"
	.string "boyfriend.\p"
	.string "It's really scary, but I'm with my\n"
	.string "boyfriend. It's okay.\p"
	.string "I know! I'll get my boyfriend to look\n"
	.string "cool by beating you!$"

MtPyre_2F_Text_DezDefeat:
	.string "DEZ: Waaaah! I'm scared!$"

MtPyre_2F_Text_DezPostBattle:
	.string "DEZ: We're lovey-dovey, so we don't\n"
	.string "care if we lose!$"

MtPyre_2F_Text_DezNotEnoughMons:
	.string "DEZ: If you want to challenge us, you\n"
	.string "should bring at least two POKÉMON.\p"
	.string "My boyfriend's strong.\n"
	.string "Just one POKÉMON won't do at all.$"

MtPyre_2F_Text_LeahIntro:
	.string "Tienes una extraña mirada…\n"
	.string "¡Vete antes de que suceda algo!$"

MtPyre_2F_Text_LeahDefeat:
	.string "Hmm…\n"
	.string "Eres atrevido.$"

MtPyre_2F_Text_LeahPostBattle:
	.string "Mi entrenamiento en las montañas me\n"
	.string "ayuda a combatir las malas presencias…$"

MtPyre_2F_Text_ZanderIntro:
	.string "¡Kiyaaaaah!\n"
	.string "¡Estoy aterrorizado!$"

MtPyre_2F_Text_ZanderDefeat:
	.string "¡Nooooooo!\n"
	.string "¡Perdí mí honor!$"

MtPyre_2F_Text_ZanderPostBattle:
	.string "Cada vez que algo se mueve no puedo\n"
	.string "evitar girarme inmediatamente. No\l"
	.string "debería haber venido aquí a entrenar.$"

