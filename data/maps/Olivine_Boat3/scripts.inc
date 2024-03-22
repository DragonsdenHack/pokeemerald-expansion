Olivine_Boat3_MapScripts::
	.byte 0

OlivineBoat3_1::
lock
msgbox OlivineBoat3_1_Texto_1 MSGBOX_AUTOCLOSE
release
end

OlivineBoat3_1_Texto_1:
	.string "Some people say that the CAPTAIN is\n"
	.string "the same that the S.S.ANNE, since that\l"
	.string "incident in VERMILLION I don't trust him\l"
	.string "at all.$"



OlivineBoat3_2::
lock
faceplayer
msgbox OlivineBoat3_2_Texto_1 MSGBOX_AUTOCLOSE
release
end

OlivineBoat3_2_Texto_1:
	.string "In 3 years, no one will remember what\n"
	.string "happened 5 years ago. For the future!$"



OlivineBoat3_3::
lock
msgbox OlivineBoat3_3_Texto_1 MSGBOX_AUTOCLOSE
release
end

OlivineBoat3_3_Texto_1:
	.string "It's said that, in a distant region,\n"
	.string "there's a bull even stronger and bulker\l"
	.string "that TAUROS, but slower.$"


OlivineBoat3_5::
lock     
faceplayer     
msgbox OlivineBoat3_Text_5, MSGBOX_DEFAULT
release     
end

OlivineBoat3_Text_5:
.string "Easy!\n"
.string "There's enough for everyone,\l"
.string "everything is under control!$"



OlivineBoat3_6::
lock         
msgbox OlivineBoat3_Text_6, MSGBOX_DEFAULT
release     
end

OlivineBoat3_Text_6:
	.string "Come on, nobody knows aquatic POKÉMON\n"
	.string "and PSEUDOLEGENDARY like the CAPTAIN\l"
	.string "does. Although I couldn't identify one\l"
	.string "of his POKÉMON, it looked like a huge\l"
	.string "dragonfly with dragon features.$"

OlivineBoat3_7::
lock
msgbox OlivineBoat3_7_Texto_1 MSGBOX_AUTOCLOSE
release
end

OlivineBoat3_7_Texto_1:
	.string "Does the PORYGON at the KANTO GAME\n"
	.string "CORNER cost 9999 COINS? We'll get 10 of\l"
	.string "them, and maybe a couple of those bikes\l"
	.string "in CERULEAN CITY, I heard they're quite\l"
	.string "exclusive.$"



OlivineBoat3_8::
lock     
faceplayer     
msgbox OlivineBoat3_Text_8, MSGBOX_DEFAULT
release     
end

OlivineBoat3_Text_8:
	.string "I prefer to come alone; my AZUMARILL is\n"
	.string "already great company for me. After the\l"
	.string "party, we'll enjoy a nice swim at the\l"
	.string "beach.$"



OlivineBoat3_9::
lock
msgbox OlivineBoat3_9_Texto_1 MSGBOX_AUTOCLOSE
release
end

OlivineBoat3_9_Texto_1:
	.string "I told you to try the GYARADOS steak;\n"
	.string "you can have TAUROS tail anywhere else.$"



OlivineBoat3_10::
lock
msgbox OlivineBoat3_10_Texto_1 MSGBOX_AUTOCLOSE
release
end

OlivineBoat3_10_Texto_1:
	.string "Why do you want 10 PORYGON if you're\n"
	.string "not going to train any of them\l"
	.string "afterward, and you don't even know how\l"
	.string "to ride a bike.$"



OlivineBoat3_12::
lock     
faceplayer     
msgbox OlivineBoat3_Text_12, MSGBOX_DEFAULT
release     
end

OlivineBoat3_Text_12:
	.string "The LIGHTHOUSE will be busier than ever\n"
	.string "now; will our AMPHAROS be able to endure\l"
	.string "so many hours of shining?$"



OlivineBoat3_13::
end



OlivineBoat3_14::
lock     
faceplayer     
msgbox OlivineBoat3_Text_14, MSGBOX_DEFAULT
release     
end

OlivineBoat3_Text_14:
	.string "This event will be chronicled in JOHTO's\n"
	.string "history books!$"



OlivineBoat3_15::
lock     
faceplayer     
msgbox OlivineBoat3_Text_15, MSGBOX_DEFAULT
release     
end

OlivineBoat3_Text_15:
	.string "Don't get fooled; the only aquatic\n"
	.string "POKÉMON deserving of a COOL TRAINER\l"
	.string "like me are GYARADOS, KINGDRA,\l"
	.string "FERALIGATR, and BLASTOISE. The rest\l"
	.string "are just chump change for lower-class\l"
	.string "TRAINERS. … … WISHIWASHI, KYOGRE and\l"
	.string "SUICUNE? What are you talking about!?$"



OlivineBoat3_16::
lock     
faceplayer     
msgbox OlivineBoat3_Text_16, MSGBOX_DEFAULT
release     
end

OlivineBoat3_Text_16:
	.string "They served delicious bivalves on the\n"
	.string "SS. ANNE, what were they called?\l"
	.string "CLOYSTER! Are there none here in\l"
	.string "JOHTO?$"

Olivine_Boat_3_Ceremonia::
lock
applymovement OBJ_EVENT_ID_PLAYER, Olivine_Boat_3_Ceremonia_Move_1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Olivine_Boat_3_Ceremonia_Move_2
waitmovement 0x0
special RemoveCameraObject
applymovement 2, Olivine_Boat_3_Ceremonia_Move_3
waitmovement 0x0
applymovement 1, Olivine_Boat_3_Ceremonia_Move_4
applymovement 3, Olivine_Boat_3_Ceremonia_Move_4
applymovement 6, Olivine_Boat_3_Ceremonia_Move_4
applymovement 7, Olivine_Boat_3_Ceremonia_Move_4
applymovement 8, Olivine_Boat_3_Ceremonia_Move_4
applymovement 9, Olivine_Boat_3_Ceremonia_Move_4
applymovement 10, Olivine_Boat_3_Ceremonia_Move_4
applymovement 11, Olivine_Boat_3_Ceremonia_Move_4
applymovement 12, Olivine_Boat_3_Ceremonia_Move_4
applymovement 14, Olivine_Boat_3_Ceremonia_Move_4
applymovement 15, Olivine_Boat_3_Ceremonia_Move_4
waitmovement 0x0
msgbox Olivine_Boat_3_Ceremonia_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Olivine_Boat_3_Ceremonia_Move_1
applymovement 3, Olivine_Boat_3_Ceremonia_Move_1
applymovement 6, Olivine_Boat_3_Ceremonia_Move_1
applymovement 7, Olivine_Boat_3_Ceremonia_Move_1
applymovement 8, Olivine_Boat_3_Ceremonia_Move_1
applymovement 9, Olivine_Boat_3_Ceremonia_Move_1
applymovement 10, Olivine_Boat_3_Ceremonia_Move_1
applymovement 11, Olivine_Boat_3_Ceremonia_Move_1
applymovement 12, Olivine_Boat_3_Ceremonia_Move_1
applymovement 14, Olivine_Boat_3_Ceremonia_Move_1
applymovement 15, Olivine_Boat_3_Ceremonia_Move_1
waitmovement 0x0
msgbox Olivine_Boat_3_Ceremonia_Texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Olivine_Boat_3_Ceremonia_Move_5
applymovement 3, Olivine_Boat_3_Ceremonia_Move_6
applymovement 6, Olivine_Boat_3_Ceremonia_Move_6
applymovement 7, Olivine_Boat_3_Ceremonia_Move_5
applymovement 8, Olivine_Boat_3_Ceremonia_Move_5
applymovement 9, Olivine_Boat_3_Ceremonia_Move_5
applymovement 10, Olivine_Boat_3_Ceremonia_Move_6
applymovement 11, Olivine_Boat_3_Ceremonia_Move_5
applymovement 12, Olivine_Boat_3_Ceremonia_Move_6
applymovement 14, Olivine_Boat_3_Ceremonia_Move_6
applymovement 15, Olivine_Boat_3_Ceremonia_Move_5
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Olivine_Boat_3_Ceremonia_Move_7
waitmovement 0x0
special RemoveCameraObject
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 146
release
end

Olivine_Boat_3_Ceremonia_Texto_1:
	.string "It's official: JOHTO will welcome ships\n"
	.string "from KANTO in its PORT, and vice versa.\l"
	.string "Is there a greater reason for\l"
	.string "celebration than the union between two\l"
	.string "sister regions like KANTO and JOHTO,\l"
	.string "which, due to an unfortunate series of\l"
	.string "misunderstandings and individual\l"
	.string "initiatives that didn't represent the\l"
	.string "global interest, ended up in conflict\l"
	.string "and now rediscovers peace? Let's\l"
	.string "celebrate, for this is just the first\l"
	.string "step; in 3 years, no one will remember\l"
	.string "what happened 5 years ago! Hooray\l"
	.string "OLIVINE CITY! Hooray the KANTO-JOHTO\l"
	.string "union!$"

Olivine_Boat_3_Ceremonia_Texto_2:
.string "Hooray!$"

Olivine_Boat_3_Ceremonia_Move_1:
walk_in_place_up
step_end

Olivine_Boat_3_Ceremonia_Move_2:
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
step_end

Olivine_Boat_3_Ceremonia_Move_3:
walk_in_place_down
step_end

Olivine_Boat_3_Ceremonia_Move_4:
face_up
step_end

Olivine_Boat_3_Ceremonia_Move_5:
face_right
step_end

Olivine_Boat_3_Ceremonia_Move_6:
face_left
step_end

Olivine_Boat_3_Ceremonia_Move_7:
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
step_end

Olivine_Boat3_Capitan::
lock
delay 15
msgbox Olivine_Boat3_Capitan_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 13, Olivine_Boat3_Capitan_Move_1
waitmovement 0x0
applymovement 13, Olivine_Boat3_Capitan_Move_2
waitmovement 0x0
msgbox Olivine_Boat3_Capitan_Texto_2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 13, Olivine_Boat3_Capitan_Move_1
waitmovement 0x0
msgbox Olivine_Boat3_Capitan_Texto_3 MSGBOX_AUTOCLOSE
msgbox Olivine_Boat3_Capitan_Texto_4 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
setflag FLAG_RECEIVED_SHOAL_SALT_1                              
setflag FLAG_RECEIVED_SHOAL_SALT_2
setflag FLAG_RECEIVED_SHOAL_SALT_3
setflag FLAG_RECEIVED_SHOAL_SALT_4
setflag FLAG_RECEIVED_SHOAL_SHELL_1
setflag FLAG_RECEIVED_SHOAL_SHELL_2
setflag FLAG_RECEIVED_SHOAL_SHELL_3
setflag FLAG_RECEIVED_SHOAL_SHELL_4
fadescreen 1
delay 20
removeobject 13
fadescreen 0
release
end

Olivine_Boat3_Capitan_Texto_1:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

Olivine_Boat3_Capitan_Texto_2:
	.string "Can't a person even sleep peacefully on\n"
	.string "their own shi…!?$"

Olivine_Boat3_Capitan_Texto_3:
.string "Huh…\n"
	.string "What do I see!?\l"
	.string "{PLAYER}!\l"
	.string "It is you, brave daring!\l"
	.string "Do you remember me?\l"
	.string "I'm the S.S. ANNE's CAPTAIN, I got\l"
	.string "assigned to manage this ship now.$"

Olivine_Boat3_Capitan_Texto_4:
	.string "Why don't you come by my cabin? I trust\n"
	.string "we can have a more pleasant\l"
	.string "conversation than last time.$"

Olivine_Boat3_Capitan_Move_1:
emote_exclamation_mark
step_end

Olivine_Boat3_Capitan_Move_2:
walk_in_place_fast_down
walk_in_place_fast_right
walk_in_place_fast_up
walk_in_place_fast_left
face_player
step_end


Olivine_Boat3_EventScript_Cazabichos::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_11, Olivine_Boat3_Text_CazabichosIntro, Olivine_Boat3_Text_CazabichosDefeated
	msgbox Olivine_Boat3_Text_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end
