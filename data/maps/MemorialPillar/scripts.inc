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
.string "Even if you should live 3000 years, and\n"
    .string "even 10 times as many, always remember\l"
    .string "that no more life is lost than the one\l"
    .string "that is lived and that only the one\l"
    .string "that is lost is lived. Thus, the longest\l"
    .string "life and the shortest one come to be\l"
    .string "reduced to the same thing, the present\l"
    .string "moment that is lived is the same for\l"
    .string "everyone, the one that is lost too, and\l"
    .string "this one that is lost comes to seem\l"
    .string "indivisible to us. And the thing is that\l"
    .string "it is not neither the past nor the\l"
    .string "future is lost, since what we do not\l"
    .string "possess how could it be taken away\l"
    .string "from us. It is advisable to always keep\l"
    .string "these two things in mind, the one that\l"
    .string "everything for eternity is presented\l"
    .string "with the same appearance and revolves\l"
    .string "in the same orbit, so it makes little\l"
    .string "difference to present the same\l"
    .string "spectacle 100 or 200 years from now,\l"
    .string "that the old man and the one who dies\l"
    .string "prematurely experience the same loss,\l"
    .string "since we are only deprived of the Keep\l"
    .string "in mind that it is the only thing we\l"
    .string "possess, since you cannot lose what\l"
    .string "you do not possess.$"



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
    .string "This is where I buried my ONIX…\n"
    .string "It was named TECTONIX…$"
