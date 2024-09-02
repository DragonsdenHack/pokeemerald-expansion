CultoS4_MapScripts::
	.byte 0

CultoS4_2::
lock     
faceplayer     
msgbox CultoS4_Text_2, MSGBOX_DEFAULT
release     
end

CultoS4_Text_2:
	.string "Shapes come and go, but you understand\n"
	.string "the eternal essence behind those\l"
	.string "shapes. Nothing genuine can be\l"
	.string "threatened.$"

CultoS4_3::
lock     
faceplayer     
msgbox CultoS4_Text_3, MSGBOX_DEFAULT
release     
end

CultoS4_Text_3:
	.string "We are confined to a plot that\n"
	.string "delineates an already unfathomable\l"
	.string "vastness.$"


CultoS4_5::
lock     
faceplayer     
msgbox CultoS4_Text_5, MSGBOX_DEFAULT
release     
end

CultoS4_Text_5:
	.string "Your primary task is not to seek\n"
	.string "salvation through the creation of a\l"
	.string "better world. Your primary task is to\l"
	.string "awaken from identification with form.$"



CultoS4_6::
lock     
faceplayer     
msgbox CultoS4_Text_6, MSGBOX_DEFAULT
release     
end

CultoS4_Text_6:
	.string "The ESSENCE POKÉMON… Will it have a\n"
	.string "defined TYPE? Some say that by\l"
	.string "definition it must be GHOST. Perhaps\l"
	.string "it's a combination of this and another…$"



CultoS4_7::
lock     
faceplayer     
msgbox CultoS4_Text_7, MSGBOX_DEFAULT
release     
end

CultoS4_Text_7:
	.string "Change is on the horizon; the\n"
	.string "landscapes of JOHTO and KANTO are\l"
	.string "destined for transformation. Are you\l"
	.string "ready?$"



CultoS4_8::
lock     
faceplayer     
msgbox CultoS4_Text_8, MSGBOX_DEFAULT
release     
end

CultoS4_Text_8:
	.string "The decline begins with the replacement\n"
	.string "of dreams with memories and finishes\l"
	.string "with the replacement of memories with\l"
	.string "other memories.$"



CultoS4_EventScript_Cultista::
	trainerbattle_single TRAINER_PABLO_5, CultoS4_Text_CultistaIntro, CultoS4_Text_CultistaDefeated
	msgbox CultoS4_Text_CultistaPostBattle, MSGBOX_AUTOCLOSE
	end



CultoS4_EventScript_Cultista2::
	trainerbattle_single TRAINER_KOJI_2, CultoS4_Text_Cultista2Intro, CultoS4_Text_Cultista2Defeated
	msgbox CultoS4_Text_Cultista2PostBattle, MSGBOX_AUTOCLOSE
	end



CultoS4_EventScript_Cultista3::
	trainerbattle_single TRAINER_KOJI_3, CultoS4_Text_Cultista3Intro, CultoS4_Text_Cultista3Defeated
	msgbox CultoS4_Text_Cultista3PostBattle, MSGBOX_AUTOCLOSE
	end

CultoS4_Rezando_Esencia::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CultoS4_Rezando_Esencia_Move_1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, CultoS4_Rezando_Esencia_Move_2
waitmovement 0x0
special RemoveCameraObject
applymovement 2, CultoS4_Rezando_Esencia_Move_4
waitmovement 0x0
delay 10
msgbox CultoS4_Rezando_Esencia_Texto_1 MSGBOX_AUTOCLOSE
applymovement 2, CultoS4_Rezando_Esencia_Move_4
waitmovement 0x0
delay 10
msgbox CultoS4_Rezando_Esencia_Texto_2 MSGBOX_AUTOCLOSE
applymovement 2, CultoS4_Rezando_Esencia_Move_4
waitmovement 0x0
delay 10
msgbox CultoS4_Rezando_Esencia_Texto_3 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, CultoS4_Rezando_Esencia_Move_3
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40F7, 169
release
end

CultoS4_Rezando_Esencia_Move_4:
walk_in_place_up
step_end

CultoS4_Rezando_Esencia_Move_3:
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

CultoS4_Rezando_Esencia_Move_2:
walk_slow_left
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

CultoS4_Rezando_Esencia_Move_1:
emote_exclamation_mark
face_up
step_end

CultoS4_Rezando_Esencia_Texto_1:
	.string "Our essence is to lack essence and, at\n"
	.string "the same time, potentially to be able to\l"
	.string "build it. We are pure possibility-that is,\l"
	.string "a nothingness that is potentially\l"
	.string "everything.$"

CultoS4_Rezando_Esencia_Texto_2:
	.string "While others merely seek to extend\n"
	.string "their gaze or subdue their senses, here,\l"
	.string "we rely on a higher, truer, and more\l"
	.string "concrete thought, the cornerstone of\l"
	.string "this world. The ESSENCE POKÉMON.$"

CultoS4_Rezando_Esencia_Texto_3:
	.string "The word POKÉMON is limiting when\n"
	.string "referring to IT, not only because of\l"
	.string "millennia of misconception and misuse\l"
	.string "of the term but also because it implies\l"
	.string "that IT is a separate entity from us.\l"
	.string "The ESSENCE POKÉMON is not a being; IT\l"
	.string "itself is TO BE.$"

CultoS4_Huevo::
lock
faceplayer
goto_if_set FLAG_NUEVA_862, CultoS4_Huevo_2
msgbox CultoS4_Huevo_Texto_1 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
msgbox RocketWarehouse_Text_Vuelta_MisionAtlas12 MSGBOX_DEFAULT
giveegg SPECIES_SPECTRIER
setflag FLAG_NUEVA_862
waitfanfare
release
end

CultoS4_Huevo_2::
msgbox CultoS4_Huevo_Texto_2 MSGBOX_NPC
release
end

CultoS4_Huevo_Texto_1:
	.string "Recently, I sensed a strong presence in\n"
	.string "this area. Before I could react, the\l"
	.string "spectral aura disappeared, and I found\l"
	.string "this.$"

CultoS4_Huevo_Texto_2:
	.string "This place is the oldest in KANTO, so\n"
	.string "it's no surprise that such a spectral\l"
	.string "presence came to pay homage to some\l"
	.string "long-forgotten soul. The energy I felt\l"
	.string "was imposing, yet also terrifying; it\l"
	.string "wouldn't be surprising if it belonged to\l"
	.string "a LEGENDARY POKÉMON.$"

