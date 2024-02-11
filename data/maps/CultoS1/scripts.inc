CultoS1_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, CultoS1_OnResume
	.byte 0

CultoS1_OnResume:
	call CultoS1_SetupEscapeWarp
	end

CultoS1_SetupEscapeWarp::
	setescapewarp MAP_ROUTE12, 12, 2
	return

CultoS1_EventScript_Medium::
	trainerbattle_single TRAINER_RICKY_5, CultoS1_Text_MediumIntro, CultoS1_Text_MediumDefeated
	msgbox CultoS1_Text_MediumPostBattle, MSGBOX_AUTOCLOSE
	end



CultoS1_EventScript_Medium2::
	trainerbattle_single TRAINER_RANDALL, CultoS1_Text_Medium2Intro, CultoS1_Text_Medium2Defeated
	msgbox CultoS1_Text_Medium2PostBattle, MSGBOX_AUTOCLOSE
	end

CultoS1_NPC_3::
lock
faceplayer
msgbox CultoS1_NPC_3_Texto_1 MSGBOX_AUTOCLOSE
release
end

CultoS1_NPC_3_Texto_1:
	.string "The folks in KANTO forgot about us ages\n"
	.string "ago, but KANTO is bigger than just its\l"
	.string "people; the ESSENCE POKÉMON doesn't\l"
	.string "miss anything.$"

CultoS1_NPC_4::
lock
faceplayer
msgbox CultoS1_NPC_4_Texto_1 MSGBOX_AUTOCLOSE
release
end

CultoS1_NPC_4_Texto_1:
	.string "You are not going to see the ESSENCE\n"
	.string "POKÉMON if that is what you intend; no\l"
	.string "one has seen it in centuries.$"

CultoS1_NPC_5::
lock
faceplayer
msgbox CultoS1_NPC_5_Texto_1 MSGBOX_AUTOCLOSE
release
end

CultoS1_NPC_5_Texto_1:
	.string "Not even FUJI is aware of the existence\n"
	.string "of this place. How were you able to find\l"
	.string "us?$"


CultoS1_NPC_6::
lock
faceplayer
msgbox CultoS1_NPC_6_Texto_1 MSGBOX_AUTOCLOSE
release
end

CultoS1_NPC_6_Texto_1:
	.string "So, the legend keeps circulating\n"
	.string "throughout the region, ready to serve\l"
	.string "those who pay attention, well...$"
