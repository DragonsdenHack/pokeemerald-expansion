MemorialPillar_MapScripts::
	.byte 0

MemorialPillar1::
end


MemorialPillar2::
end


MemorialPillar3::
end


MemorialPillar4::
end


MemorialPillar5::
end

MemorialPillar_EventScript_Marc::
	trainerbattle_single TRAINER_MARC, MemorialPillar_Text_MarcIntro, MemorialPillar_Text_MarcDefeated
	msgbox MemorialPillar_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
	end

MemorialPillar_EventScript_Brenden::
	trainerbattle_single TRAINER_BRENDEN, MemorialPillar_Text_BrendenIntro, MemorialPillar_Text_BrendenDefeated
	msgbox MemorialPillar_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
	end



MemorialPillar_EventScript_Lilith::
	trainerbattle_single TRAINER_LILITH, MemorialPillar_Text_LilithIntro, MemorialPillar_Text_LilithDefeated
	msgbox MemorialPillar_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
	end

MemorialPillar_EventScript_Onyx::
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, MemorialPillar_Move_1
applymovement OBJ_EVENT_ID_CAMERA, MemorialPillar_Move_2
waitmovement 0x0
special RemoveCameraObject
applymovement 1, MemorialPillar_Move_1
msgbox MemorialPillar_Text_Onyx, MSGBOX_AUTOCLOSE
delay 15
msgbox MemorialPillar_Text_Onyx_Texto_2, MSGBOX_AUTOCLOSE
delay 15
msgbox MemorialPillar_Text_Onyx_Texto_3, MSGBOX_AUTOCLOSE
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MemorialPillar_Move_3
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40F8, 1
release
end

MemorialPillar_Text_Onyx:
.string "Aunque debieras vivir 3000 años, y\n"
	.string "aún 10 veces otros tantos,\l"
	.string "acuérdate siempre que no se pierde\l"
	.string "otra vida que la que se vive y que\l"
	.string "solo se vive la que se pierde.$"

MemorialPillar_Text_Onyx_Texto_2:
	.string "Así, la más larga vida y la más\n"
	.string "corta vienen a reducirse a lo\l"
	.string "mismo, el momento presente que se\l"
	.string "vive es igual para todos, el que\l"
	.string "se pierde también, y este que se\l"
	.string "pierde llega a parecernos\l"
	.string "indivisible.$"

MemorialPillar_Text_Onyx_Texto_3:
	.string "Y es que no se pierde ni el pasado\n"
	.string "ni el futuro, puesto que lo que no\l"
	.string "poseemos cómo podría\l"
	.string "arrebatársenos.$"


MemorialPillar_Move_1:
walk_in_place_up
step_end


MemorialPillar_Move_2:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

MemorialPillar_Move_3:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

MemorialPillar_ChicoOnix::
lock
faceplayer
msgbox MemorialPillar_ChicoOnix_Texto_1 MSGBOX_NPC
release
end

MemorialPillar_ChicoOnix_Texto_1:
.string "Aquí yace mi ONIX, llamado TECTONIX.\n"
	.string "Levanté este lugar en su honor, para\l"
	.string "que todos recuerden su nombre.$"
