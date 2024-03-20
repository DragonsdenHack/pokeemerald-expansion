NeoLavandaCementerio_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, NeoLavandaCementerio_OnResume
	.byte 0

NeoLavandaCementerio_OnResume:
	call NeoLavandaCementerio_SetupEscapeWarp
	end

NeoLavandaCementerio_SetupEscapeWarp::
	setescapewarp MAP_NEO_LAVANDA_PUEBLO, 18, 17
	return

NeoLavandaCementerio_1::
lock     
faceplayer     
msgbox NeoLavandaCementerio_Text_1, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerio_Text_1:
	.string "I think there are other POKÉMON graves\n"
	.string "here. There are many chambers that only\l"
	.string "MR.FUJI and former LAVENDER TOWN\l"
	.string "residents can enter.$"




NeoLavandaCementerio_2::
lock     
faceplayer     
msgbox NeoLavandaCementerio_Text_2, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerio_Text_2:
	.string "I've come to pay homage to the POKÉMON\n"
	.string "graves.$"




NeoLavandaCementerio_3::
lock     
faceplayer     
msgbox NeoLavandaCementerio_Text_3, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerio_Text_3:
	.string "To the POKÉMON that lived with me… I\n"
	.string "loved them like my grandchildren.$"


NeoLavandaCementerio_Dialogo_Fuji::
lock
faceplayer
msgbox NeoLavandaCementerio_Dialogo_Fuji_Texto_1 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Texto_2 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Texto_3 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox NeoLavandaCementerio_Dialogo_Fuji_Texto_5 MSGBOX_AUTOCLOSE
delay 20
applymovement 4, NeoLavandaCementerio_Dialogo_Fuji_Move_1
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaCementerio_Dialogo_Fuji_Move_1
waitmovement 0x0
msgbox NeoLavandaCementerio_Dialogo_Fuji_Texto_6 MSGBOX_AUTOCLOSE
applymovement 4, NeoLavandaCementerio_Dialogo_Fuji_Move_2
waitmovement 0x0
msgbox NeoLavandaCementerio_Dialogo_Fuji_Texto_7 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
fadescreen 1
delay 20
removeobject 4
fadescreen 0
release
end

NeoLavandaCementerio_Dialogo_Fuji_Move_1:
face_left
step_end

NeoLavandaCementerio_Dialogo_Fuji_Move_2:
face_player
step_end



NeoLavandaCementerio_Dialogo_Fuji_Texto_1:
	.string "FUJI: If there's one good thing about\n"
	.string "LAVENDER TOWN, it's that it's so small\l"
	.string "that everything is nearby, don't you\l"
	.string "think?$"

NeoLavandaCementerio_Dialogo_Fuji_Texto_2:
	.string "I must say I'm very pleased with the\n"
	.string "final outcome of the CEMETERY, all the\l"
	.string "souls have been successfully moved.\l"
	.string "The problem is…$"

NeoLavandaCementerio_Dialogo_Fuji_Texto_3:
	.string "It seems that not all of them have\n"
	.string "taken kindly to the change of scenery.\l"
	.string "They're still attached to the old\l"
	.string "POKÉMON TOWER.$"

NeoLavandaCementerio_Dialogo_Fuji_Texto_4:
	.string "Perhaps you can calm it, you\n"
	.string "experienced something similar in the\l"
	.string "RUINS OF ALPH, didn't you? The energy\l"
	.string "manifested here is very powerful.$"

NeoLavandaCementerio_Dialogo_Fuji_Texto_5:
.string "…$"

NeoLavandaCementerio_Dialogo_Fuji_Texto_6:
	.string "Look, if you interact with the computer\n"
	.string "you'll be able to access the lower floors\l"
	.string "of the CEMETERY. Where else would the\l"
	.string "rest of the graves be?$"

NeoLavandaCementerio_Dialogo_Fuji_Texto_7:
	.string "I'll wait for you downstairs, {PLAYER}.\n"
	.string "Look for me on B2F, I'll be with the\l"
	.string "secretary of that floor; that's where\l"
	.string "the energy focus is.$"

Cementerio_PC::
compare VAR_UNUSED_0x40F7, 207
goto_if_gt Cementerio_Warp
msgbox RocketHideout_4F_PC_Texto_1 MSGBOX_AUTOCLOSE
release
end

Cementerio_Warp::
msgbox RocketHideout_4F_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 14, 12, 0x282, FALSE
setmetatile 14, 11, 0x2C0, FALSE
setmetatile 14, 10, 0x2B8, FALSE
setmetatile 14, 9, 0x2B0, FALSE
setmetatile 15, 11, 0x2C1, TRUE
setmetatile 15, 10, 0x2B9, TRUE
setmetatile 15, 9, 0x2B1, TRUE
setmetatile 16, 11, 0x2C2, TRUE
setmetatile 16, 10, 0x2BA, TRUE
setmetatile 16, 9, 0x2B2, TRUE
special DrawWholeMapView
delay 60
release
end

NeoLavandaCementerio_Fuji::
lock
faceplayer
msgbox NeoLavandaCementerio_Fuji_Texto_1 MSGBOX_AUTOCLOSE
release
end

NeoLavandaCementerio_Fuji_Texto_1:
	.string "You can come back to the CEMETERY\n"
	.string "whenever you want, {PLAYER}.\l"
	.string "Although it won't be the same anymore,\l"
	.string "the new face is RADIO TOWER; for those\l"
	.string "who come from outside, this place and\l"
	.string "its underground floors don't exist.$"
