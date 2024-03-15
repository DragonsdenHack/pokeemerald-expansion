ViasTren3_MapScripts::
	.byte 0

ViasTren3_4::
lock     
faceplayer     
msgbox ViasTren3_Text_4, MSGBOX_DEFAULT
release     
end

ViasTren3_Text_4:
	.string "I think there's something up there. Or\n"
	.string "maybe it's just my imagination?$"



ViasTren3_6::
lock     
faceplayer     
msgbox ViasTren3_Text_6, MSGBOX_DEFAULT
release     
end

ViasTren3_Text_6:
	.string "We have MOUNT SILVER right above us; in\n"
	.string "fact, we've already passed it. We're\l"
	.string "officially in KANTO!$"



ViasTren3_8::
lock     
faceplayer     
msgbox ViasTren3_Text_8, MSGBOX_DEFAULT
release     
end

ViasTren3_Text_8:
	.string "From here, you can see a large mountain\n"
	.string "to the southwest. I wonder if there's\l"
	.string "anything there?$"



ViasTren3_EventScript_Obrero::
	trainerbattle_single TRAINER_GABRIELLE_3, ViasTren3_Text_ObreroIntro, ViasTren3_Text_ObreroDefeated
	msgbox ViasTren3_Text_ObreroPostBattle, MSGBOX_AUTOCLOSE
	end



ViasTren3_EventScript_Obrero2::
	trainerbattle_single TRAINER_GABRIELLE_4, ViasTren3_Text_Obrero2Intro, ViasTren3_Text_Obrero2Defeated
	msgbox ViasTren3_Text_Obrero2PostBattle, MSGBOX_AUTOCLOSE
	end

ViasTren3_Dialogo_Guia::
lock
faceplayer
msgbox ViasTren3_Rastro_Zapdos_Texto_3 MSGBOX_AUTOCLOSE
release
end

ViasTren3_Rastro_Zapdos_Up::
applymovement OBJ_EVENT_ID_PLAYER, ViasTren3_Rastro_Zapdos_Move_1
applymovement 10, ViasTren3_Rastro_Zapdos_Move_2
waitmovement 0x0
goto ViasTren3_Rastro_Zapdos

ViasTren3_Rastro_Zapdos_Down::
applymovement OBJ_EVENT_ID_PLAYER, ViasTren3_Rastro_Zapdos_Move_1
applymovement 10, ViasTren3_Rastro_Zapdos_Move_2.1
waitmovement 0x0
goto ViasTren3_Rastro_Zapdos

ViasTren3_Rastro_Zapdos::
msgbox ViasTren3_Rastro_Zapdos_Texto_1 MSGBOX_AUTOCLOSE
msgbox ViasTren3_Rastro_Zapdos_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, ViasTren3_Rastro_Zapdos_Move_3
applymovement 10, ViasTren3_Rastro_Zapdos_Move_3
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, ViasTren3_Rastro_Zapdos_Move_4
waitmovement 0x0
special RemoveCameraObject
msgbox ViasTren3_Rastro_Zapdos_Texto_3 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, ViasTren3_Rastro_Zapdos_Move_5
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, ViasTren3_Rastro_Zapdos_Move_7
applymovement 10, ViasTren3_Rastro_Zapdos_Move_6
waitmovement 0x0
msgbox ViasTren3_Rastro_Zapdos_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_PACIFIDLOG_TOWN_STATE, 2
release
end

ViasTren3_Rastro_Zapdos_Move_7:
face_right
step_end

ViasTren3_Rastro_Zapdos_Move_6:
face_left
step_end

ViasTren3_Rastro_Zapdos_Move_5:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
step_end

ViasTren3_Rastro_Zapdos_Move_4:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
step_end

ViasTren3_Rastro_Zapdos_Move_3:
face_down
step_end

ViasTren3_Rastro_Zapdos_Move_1:
walk_in_place_right
step_end

ViasTren3_Rastro_Zapdos_Move_2.1:
walk_left
walk_down
walk_left
step_end

ViasTren3_Rastro_Zapdos_Move_2:
walk_left
walk_left
step_end

ViasTren3_Rastro_Zapdos_Texto_1:
	.string "You are a top executive of TEAM ROCKET,\n"
	.string "aren't you?$"

ViasTren3_Rastro_Zapdos_Texto_2:
	.string "Be aware, that POKÉMON is exceptionally\n"
	.string "swift and mighty. It appears to have a\l"
	.string "fondness for the magnetic force of the\l"
	.string "railways. It has damaged them numerous\l"
	.string "times, impeding our construction\l"
	.string "progress.$"

ViasTren3_Rastro_Zapdos_Texto_3:
	.string "Usually, it emerges from the south, but\n"
	.string "this is the most northeastern it's been\l"
	.string "spotted from this spot. Its nest or lair\l"
	.string "must be somewhere nearby.$"

ViasTren3_Rastro_Zapdos_Texto_4:
.string "Good luck.$"

ViasTren3_Barrera::
lock
faceplayer
msgbox ViasTren3_Barrera_Texto_1 MSGBOX_AUTOCLOSE
release
end

ViasTren3_Barrera_Texto_1:
	.string "This area has been severely damaged by\n"
	.string "the mysterious POKÉMON. Until we\l"
	.string "restore it, no one will be able to pass\l"
	.string "through.$"
