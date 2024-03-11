Olivine_Boat4_MapScripts::
	.byte 0

OlivineBoat4_1::
lock     
faceplayer     
msgbox OlivineBoat4_Text_1, MSGBOX_DEFAULT
release     
end

OlivineBoat4_Text_1:
	.string "Remember, {PLAYER}, we've only just\n"
	.string "scratched the surface when it comes to\l"
	.string "mysteries of the POKÉMON WORLD.\l"
	.string "Perhaps your journey through JOHTO will\l"
	.string "allow us to see a bit more of that\l"
	.string "iceberg.$"

Olivine_Boat4_Combate_Capitan::
lock
applymovement OBJ_EVENT_ID_PLAYER, Olivine_Boat4_Combate_Capitan_Move_1
waitmovement 0x0
msgbox Olivine_Boat4_Combate_Capitan_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, Olivine_Boat4_Combate_Capitan_Move_2
waitmovement 0x0
msgbox Olivine_Boat4_Combate_Capitan_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, Olivine_Boat4_Combate_Capitan_Move_3
waitmovement 0x0
msgbox Olivine_Boat4_Combate_Capitan_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, Olivine_Boat4_Combate_Capitan_Move_4
waitmovement 0x0
msgbox Olivine_Boat4_Combate_Capitan_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, Olivine_Boat4_Combate_Capitan_Move_3
waitmovement 0x0
msgbox Olivine_Boat4_Combate_Capitan_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox Olivine_Boat4_Combate_Capitan_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox Olivine_Boat4_Combate_Capitan_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, Olivine_Boat4_Combate_Capitan_Move_3
waitmovement 0x0
msgbox Olivine_Boat4_Combate_Capitan_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CAPITAN_2, Olivine_Boat4_Combate_Capitan_Texto_9
msgbox Olivine_Boat4_Combate_Capitan_Texto_10 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_SCANNER
msgbox Olivine_Boat4_Combate_Capitan_Texto_11.1 MSGBOX_DEFAULT
waitfanfare
msgbox Olivine_Boat4_Combate_Capitan_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, Olivine_Boat4_Combate_Capitan_Move_3
waitmovement 0x0
msgbox Olivine_Boat4_Combate_Capitan_Texto_12 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
setvar VAR_UNUSED_0x40F7, 147
release
end

Olivine_Boat4_Combate_Capitan_Texto_11.1:
.string "You obtained a WHIRLWIND PASSER\n"
	.string "from the CAPTAIN!!$"

Olivine_Boat4_Combate_Capitan_Texto_1:
	.string "CAPTAIN: I must admit, {PLAYER},\n"
	.string "maybe I was wrong about you and your\l"
	.string "organization.$"

Olivine_Boat4_Combate_Capitan_Texto_2:
	.string "LT. SURGE told me about you all, and he\n"
	.string "didn't have very kind words for TEAM\l"
	.string "ROCKET. He warned me about some of the\l"
	.string "worst thieves, the shame of KANTO,\l"
	.string "according to him.$"

Olivine_Boat4_Combate_Capitan_Texto_3:
	.string "That's what I thought too, until\n"
	.string "GIOVANNI himself, your LEADER,\l"
	.string "contacted me shortly after all the\l"
	.string "commotion of the POKÉMON LEAGUE,\l"
	.string "letting me know, just as your colleague\l"
	.string "said, the purpose of that mysterious\l"
	.string "stone: it was nothing more than a part\l"
	.string "of that POKÉMON called DEOXYS. With a\l"
	.string "DNA impossible to replicate and\l"
	.string "unmatched PSYCHIC powers. I was\l"
	.string "stunned when he sent me its complete\l"
	.string "data.$"

Olivine_Boat4_Combate_Capitan_Texto_4:
	.string "But that's not all, he also told me about\n"
	.string "the MEGA STONES, and some\l"
	.string "PSEUDO-LEGENDARIES that could\l"
	.string "benefit from them, reaching the, until\l"
	.string "recently, impossible 700 BASE.$"

Olivine_Boat4_Combate_Capitan_Texto_5:
	.string "After everything that's happened, it's\n"
	.string "clear to me that TEAM ROCKET knows how\l"
	.string "to repay a favor and by a far way\l"
	.string "better. Know that you have a friend and\l"
	.string "ally here for whatever you may need.$"

Olivine_Boat4_Combate_Capitan_Texto_6:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

Olivine_Boat4_Combate_Capitan_Texto_7:
.string "And a last thing.$"

Olivine_Boat4_Combate_Capitan_Texto_8:
	.string "I still remember our battle; you only\n"
	.string "got away because I didn't bring my best\l"
	.string "POKÉMON to KANTO. Want to see some real\l"
	.string "PSEUDO-LEGENDARIES? Watch this!$"

Olivine_Boat4_Combate_Capitan_Texto_9:
.string "Did I lose again?$"

Olivine_Boat4_Combate_Capitan_Texto_10:
.string "Hah!\n"
	.string "Just as I thought, your team is nothing\l"
	.string "like the one on the S.S. ANNE; you\l"
	.string "showed potential there, but it's\l"
	.string "evident you've really toughened up\l"
	.string "since then. Here, this is for you.$"

Olivine_Boat4_Combate_Capitan_Texto_11:
	.string "With this device, your POKÉMON will be\n"
	.string "able to navigate certain currents, like\l"
	.string "the ones in WHIRL ISLANDS, without any\l"
	.string "issues. It works just like WHIRLPOOL,\l"
	.string "but without the need to teach the move.$"

Olivine_Boat4_Combate_Capitan_Texto_12:
	.string "It is a pleasure to see you again,\n"
	.string "{PLAYER}, and keep this in your mind:\l"
	.string "we're still just scratching the surface\l"
	.string "when it comes to all the mysteries\l"
	.string "surrounding the POKÉMON world. Perhaps\l"
	.string "your journey through JOHTO will\l"
	.string "contribute to further uncovering it.$"

Olivine_Boat4_Combate_Capitan_Move_1:
walk_up
walk_right
walk_in_place_up
step_end

Olivine_Boat4_Combate_Capitan_Move_2:
face_right
step_end

Olivine_Boat4_Combate_Capitan_Move_3:
walk_in_place_down
step_end

Olivine_Boat4_Combate_Capitan_Move_4:
face_up
step_end
