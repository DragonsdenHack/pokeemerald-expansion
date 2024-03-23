Silph_1F_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, Silph_1F_OnResume
	.byte 0

Silph_1F_OnResume:
	call Silph_1F_SetupEscapeWarp
	end

Silph_1F_SetupEscapeWarp::
	setescapewarp MAP_SILPH_1F, 8, 20
	return

Silph1F_1::
end



Silph1F_2::
lock     
faceplayer     
msgbox Silph1F_Text_2, MSGBOX_DEFAULT
release     
end

Silph1F_Text_2:
	.string "I trust you, {PLAYER}, I'll stay here\n"
	.string "to ensure nothing compromises the\l"
	.string "mission. Hurry up!$"



Silph1F_3::
lock     
faceplayer     
msgbox Silph1F_Text_3, MSGBOX_DEFAULT
release     
end

Silph1F_Text_3:
.string "At your orders, EXECUTIVE {PLAYER}!$"



Silph1F_4::
lock     
faceplayer     
msgbox Silph1F_Text_4, MSGBOX_DEFAULT
release     
end

Silph1F_Text_4:
	.string "This day will be in the history books as\n"
	.string "the day the TEAM ROCKET took control\l"
	.string "of everything!$"



Silph1F_5::
lock     
faceplayer     
msgbox Silph1F_Text_5, MSGBOX_DEFAULT
release     
end

Silph1F_Text_5:
.string "Come to me, SILPH's security!$"



Silph1F_6::
lock     
faceplayer     
msgbox Silph1F_Text_6, MSGBOX_DEFAULT
release     
end

Silph1F_Text_6:
	.string "That feeling of uncertainty before the\n"
	.string "action begins is why I joined TEAM\l"
	.string "ROCKET. You will never feel as alive as\l"
	.string "now!$"



Silph1F_7::
lock     
faceplayer     
msgbox Silph1F_Text_7, MSGBOX_DEFAULT
release     
end

Silph1F_Text_7:
	.string "This fountain is horrible compared to\n"
	.string "ours!$"



Silph1F_8::
lock     
faceplayer     
msgbox Silph1F_Text_8, MSGBOX_DEFAULT
release     
end

Silph1F_Text_8:
	.string "Let's show SILPH who's in charge here!$"



Silph1F_9::
lock     
faceplayer     
msgbox Silph1F_Text_9, MSGBOX_DEFAULT
release     
end

Silph1F_Text_9:
	.string "To be honest, from outside SILPH is\n"
	.string "impressive. There's no other place as\l"
	.string "tall as this in this region.$"



Silph1F_10::
lock     
faceplayer     
msgbox Silph1F_Text_10, MSGBOX_DEFAULT
release     
end

Silph1F_Text_10:
	.string "The TEAM ROCKET ELITE has nothing to\n"
	.string "do with a common GRUNT, right now, all\l"
	.string "of our POKÉMON are between levels\l"
	.string "35-40, of course, we have GIOVANNI's\l"
	.string "orders to disappear as soon as he\l"
	.string "finishes telling the PRESIDENT what he\l"
	.string "need to tell him. Furthermore, we are\l"
	.string "forbidden from battling against that\l"
	.string "RED. He doesn't want him to know what\l"
	.string "we're capable of.$"



Silph1F_11::
lock     
faceplayer     
msgbox Silph1F_Text_11, MSGBOX_DEFAULT
release     
end

Silph1F_Text_11:
	.string "I like the atmosphere of this place. It's\n"
	.string "kinda similar to our DEEP ROCKET BASE.$"



Silph1F_12::
lock     
faceplayer     
msgbox Silph1F_Text_12, MSGBOX_DEFAULT
release     
end

Silph1F_Text_12:
	.string "The ideas and objectives of SILPH and\n"
	.string "TEAM ROCKET are similar. More than you\l"
	.string "imagine, and we'll use that to convince\l"
	.string "the PRESIDENT.$"



Silph1F_13::
lock     
faceplayer     
msgbox Silph1F_Text_13, MSGBOX_DEFAULT
release     
end

Silph1F_Text_13:
	.string "It's sure that SILPH and TEAM ROCKET\n"
	.string "can reach a good deal!$"



Silph1F_14::
lock     
faceplayer     
msgbox Silph1F_Text_14, MSGBOX_DEFAULT
release     
end

Silph1F_Text_14:
	.string "If our LEADER GIOVANNI decided to\n"
	.string "fight using all his power, I don't think\l"
	.string "there's a trainer in the whole region\l"
	.string "today capable of keeping up with him. He\l"
	.string "has become extraordinarily strong; all\l"
	.string "these years of media harassment have\l"
	.string "only served to toughen him even more\l"
	.string "than he was when he got the title of\l"
	.string "CHAMPION OF KANTO.$"



Silph1F_15::
lock     
faceplayer     
msgbox Silph1F_Text_15, MSGBOX_DEFAULT
release     
end

Silph1F_Text_15:
	.string "If everything goes according to the\n"
	.string "plan, we'll be in the shadows for a\l"
	.string "season. But we'll keep becoming\l"
	.string "stronger.$"



Silph1F_16::
lock     
faceplayer     
msgbox Silph1F_Text_16, MSGBOX_DEFAULT
release     
end

Silph1F_Text_16:
	.string "Very important things are going to\n"
	.string "happen here today.$"



Silph1F_17::
lock     
faceplayer     
msgbox Silph1F_Text_17, MSGBOX_DEFAULT
release     
end

Silph1F_Text_17:
	.string "SILPH's power extends to the SEVII\n"
	.string "ISLANDS. The TEAM ROCKET's power will be\l"
	.string "global!$"




Silph1F_18::
lock     
faceplayer     
msgbox Silph1F_Text_18, MSGBOX_DEFAULT
release     
end

Silph1F_Text_18:
	.string "In the TEAM ROCKET we act as a single\n"
	.string "body, which makes us strong.$"



Silph1F_19::
lock     
faceplayer     
msgbox Silph1F_Text_19, MSGBOX_DEFAULT
release     
end

Silph1F_Text_19:
	.string "The workers from here aren't used to\n"
	.string "seeing us; they live in a city detached\l"
	.string "from reality. It won't be surprising if a\l"
	.string "lot of them were really scared. Even\l"
	.string "though we won't hurt them, of course.$"



Silph1FDocumento_100::
msgbox Silph1FDocumento_Text_100, MSGBOX_SIGN   
end

Silph1FDocumento_Text_100:
.string "SILPH CO. HEAD OFFICE\n"
    .string "1F$"



Silph_1F_Recepcionista_Pisos_Inferiores::
compare VAR_UNUSED_0x40F7, 102
goto_if_gt Silph_1F_Recepcionista_Pisos_Inferiores_3
compare VAR_UNUSED_0x40F7, 101
goto_if_gt Silph_1F_Recepcionista_Pisos_Inferiores_2
msgbox Silph_1F_Recepcionista_Pisos_Inferiores_Texto_1 MSGBOX_AUTOCLOSE
release
end

Silph_1F_Recepcionista_Pisos_Inferiores_3::
lock
faceplayer
msgbox Silph_1F_Recepcionista_Pisos_Inferiores_Texto_6 MSGBOX_AUTOCLOSE
release
end

Silph_1F_Recepcionista_Pisos_Inferiores_2::
delay 20
msgbox Silph_1F_Recepcionista_Pisos_Inferiores_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, Silph_1F_Recepcionista_Pisos_Inferiores_Move_1
waitmovement 0x0
msgbox Silph_1F_Recepcionista_Pisos_Inferiores_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, Silph_1F_Recepcionista_Pisos_Inferiores_Move_2
waitmovement 0x0
msgbox Silph_1F_Recepcionista_Pisos_Inferiores_Texto_4 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Silph_1F_Recepcionista_Pisos_Inferiores_Move_3
waitmovement 0x0
special RemoveCameraObject
playse SE_PC_ON
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 10, 3, 0x346, TRUE
setmetatile 10, 2, 0x33E, TRUE
setmetatile 10, 1, 0x290, TRUE
setmetatile 10, 0, 0x288, TRUE
setmetatile 11, 3, 0x276, FALSE
setmetatile 11, 2, 0x26F, FALSE
setmetatile 11, 1, 0x271, TRUE
setmetatile 11, 0, 0x269, TRUE
setmetatile 12, 3, 0x266, TRUE
setmetatile 12, 2, 0x25E, TRUE
setmetatile 12, 1, 0x274, TRUE
setmetatile 12, 0, 0x330, TRUE
setmetatile 13, 3, 0x267, TRUE
setmetatile 13, 2, 0x25F, TRUE
setmetatile 13, 1, 0x275, TRUE
setmetatile 13, 0, 0x330, TRUE
setmetatile 14, 3, 0x347, TRUE
setmetatile 14, 2, 0x33F, TRUE
setmetatile 14, 1, 0x294, TRUE
setmetatile 14, 0, 0x28C, TRUE
special DrawWholeMapView
delay 60
playse SE_PIN
applymovement OBJ_EVENT_ID_CAMERA, Silph_1F_Recepcionista_Pisos_Inferiores_Move_1
waitmovement 0x0
delay 10
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Silph_1F_Recepcionista_Pisos_Inferiores_Move_4
waitmovement 0x0
special RemoveCameraObject
applymovement 1, Silph_1F_Recepcionista_Pisos_Inferiores_Move_5
waitmovement 0x0
msgbox Silph_1F_Recepcionista_Pisos_Inferiores_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Silph_1F_Recepcionista_Pisos_Inferiores_Move_6
waitmovement 0x0
msgbox Silph_1F_Recepcionista_Pisos_Inferiores_Texto_6 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 103
release
end

Silph_1F_Recepcionista_Pisos_Inferiores_Move_1:
emote_exclamation_mark
step_end

Silph_1F_Recepcionista_Pisos_Inferiores_Move_2:
walk_right
walk_up
walk_right
step_end

Silph_1F_Recepcionista_Pisos_Inferiores_Move_3:
walk_up
walk_up
walk_up
walk_right
walk_right
walk_up
walk_up
walk_right
walk_right
walk_right
step_end

Silph_1F_Recepcionista_Pisos_Inferiores_Move_4:
walk_down
walk_down
walk_down
walk_left
walk_left
walk_down
walk_down
walk_left
walk_left
walk_left
step_end

Silph_1F_Recepcionista_Pisos_Inferiores_Move_5:
walk_left
walk_down
walk_left
walk_in_place_down
step_end

Silph_1F_Recepcionista_Pisos_Inferiores_Move_6:
walk_in_place_down
step_end

Silph_1F_Recepcionista_Pisos_Inferiores_Texto_1:
	.string "I will never forget what you have done\n"
	.string "here, ROCKET!$"

Silph_1F_Recepcionista_Pisos_Inferiores_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

Silph_1F_Recepcionista_Pisos_Inferiores_Texto_3:
	.string "Oh, yes! So you are the guy who was\n"
	.string "going to come in name of TEAM ROCKET to\l"
	.string "see our library. You are so lucky, you\l"
	.string "know it?$"

Silph_1F_Recepcionista_Pisos_Inferiores_Texto_4:
	.string "Nobody outside of this company has\n"
	.string "ever entered here, and only our most\l"
	.string "prominent employees can enter there,\l"
	.string "except for our PRESIDENT…$"

Silph_1F_Recepcionista_Pisos_Inferiores_Texto_5:
	.string "He has expressly make it know that you\n"
	.string "are welcome to enter whenever you want.$"

Silph_1F_Recepcionista_Pisos_Inferiores_Texto_6:
	.string "From now on, you will be able to access\n"
	.string "our lower floors only by interacting\l"
	.string "with my computer. Good luck with your\l"
	.string "search!$"

Silph_1F_Activador_Entrada::
compare VAR_UNUSED_0x40F7, 102
goto_if_gt Silph_1F_Activador_Entrada_2
msgbox Silph_1F_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
release
end

Silph_1F_Activador_Entrada_2:
msgbox RocketHideout_4F_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
playse SE_PC_ON
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 10, 3, 0x346, TRUE
setmetatile 10, 2, 0x33E, TRUE
setmetatile 10, 1, 0x290, TRUE
setmetatile 10, 0, 0x288, TRUE
setmetatile 11, 3, 0x276, FALSE
setmetatile 11, 2, 0x26F, FALSE
setmetatile 11, 1, 0x271, TRUE
setmetatile 11, 0, 0x269, TRUE
setmetatile 12, 3, 0x266, TRUE
setmetatile 12, 2, 0x25E, TRUE
setmetatile 12, 1, 0x274, TRUE
setmetatile 12, 0, 0x330, TRUE
setmetatile 13, 3, 0x267, TRUE
setmetatile 13, 2, 0x25F, TRUE
setmetatile 13, 1, 0x275, TRUE
setmetatile 13, 0, 0x330, TRUE
setmetatile 14, 3, 0x347, TRUE
setmetatile 14, 2, 0x33F, TRUE
setmetatile 14, 1, 0x294, TRUE
setmetatile 14, 0, 0x28C, TRUE
special DrawWholeMapView
delay 60
release
end

Silph_1F_Activador_Entrada_Texto_1:
	.string "It seems like this computer is\n"
	.string "performing a very important function.$"


