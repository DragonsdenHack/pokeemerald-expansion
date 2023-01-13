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
	.string "solo se vive la que se pierde.\l"
	.string "Así, la más larga vida y la más\l"
	.string "corta vienen a reducirse a lo\l"
	.string "mismo, el momento presente que se\l"
	.string "vive es igual para todos, el que\l"
	.string "se pierde también, y este que se\l"
	.string "pierde llega a parecernos\l"
	.string "indivisible.\l"
	.string "Y es que no se pierde ni el pasado\l"
	.string "ni el futuro, puesto que lo que no\l"
	.string "poseemos cómo podría\l"
	.string "arrebatársenos.\l"
	.string "Conviene tener siempre en la mente\l"
	.string "estas dos cosas, la una que todo\l"
	.string "desde una eternidad se\l"
	.string "presenta con un mismo semblante y\l"
	.string "gira en la misma órbita, de modo\l"
	.string "que poco importa presentar un\l"
	.string "mismo espectáculo 100 o 200 años,\l"
	.string "la otra, que el anciano y el que\l"
	.string "muere prematuramente experimentan\l"
	.string "la misma pérdida, puesto que sólo\l"
	.string "se nos priva del presente que es\l"
	.string "lo único que poseemos, visto que\l"
	.string "no se puede perder lo que no se\l"
	.string "posee.$"


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
