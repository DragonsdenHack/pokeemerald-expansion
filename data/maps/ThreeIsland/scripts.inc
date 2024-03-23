ThreeIsland_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_OnTransition
	.byte 0

ThreeIsland_OnTransition::
setflag FLAG_VISITED_THREE_ISLAND
end

ThreeIsland1::
end


ThreeIsland2::
end


ThreeIsland3::
end


ThreeIsland4::
lock     
faceplayer     
msgbox ThreeIsland_Text_4, MSGBOX_DEFAULT
release     
end

ThreeIsland_Text_4:
.string "I'm going to train my DODUO in the\n"
    .string "BERRY FOREST.\p"
    .string "When it evolves, I'm going to play\n"
    .string "a game on TWO ISLAND.$"


ThreeIsland5::
lock     
faceplayer     
msgbox ThreeIsland_Text_5, MSGBOX_DEFAULT
release     
end

ThreeIsland_Text_5:
.string "THREE ISLAND is actually the most\n"
    .string "populous of the islands here.\p"
    .string "Still, it could be less sleepy.\p"
    .string "But I wouldn't want to see goons\n"
    .string "like those BIKERS here again.$"


ThreeIslandDocumento_101::
msgbox ThreeIslandDocumento_Text_101, MSGBOX_SIGN   
end

ThreeIslandDocumento_Text_101:
.string "THREE ISLAND\n"
    .string "Kin Island of Family Bonding$"

ThreeIsland_Secundaria_Recreativos::
lock
compare VAR_UNUSED_0x404E, 2
goto_if_gt ThreeIsland_Secundaria_Recreativos_3
compare VAR_UNUSED_0x404E, 1
goto_if_gt ThreeIsland_Secundaria_Recreativos_1
applymovement 7, ThreeIsland_Secundaria_Recreativos_Move_1
waitmovement 0x0
msgbox ThreeIsland_Secundaria_Recreativos_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, ThreeIsland_Secundaria_Recreativos_Move_2
applymovement 6, ThreeIsland_Secundaria_Recreativos_Move_3
waitmovement 0x0
playse SE_PIN
applymovement 7, ThreeIsland_Secundaria_Recreativos_Move_4
applymovement 6, ThreeIsland_Secundaria_Recreativos_Move_4
waitmovement 0x0
applymovement 6, ThreeIsland_Secundaria_Recreativos_Move_5
waitmovement 0x0
msgbox ThreeIsland_Secundaria_Recreativos_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, ThreeIsland_Secundaria_Recreativos_Move_6
waitmovement 0x0
msgbox ThreeIsland_Secundaria_Recreativos_Texto_3 MSGBOX_AUTOCLOSE
msgbox ThreeIsland_Secundaria_Recreativos_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox ThreeIsland_Secundaria_Recreativos_Texto_5 MSGBOX_AUTOCLOSE
delay 20
setvar VAR_UNUSED_0x404E, 2
msgbox ThreeIsland_Secundaria_Recreativos_Texto_5.1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq ThreeIsland_Secundaria_Recreativos_No
goto ThreeIsland_Secundaria_Recreativos_2

ThreeIsland_Secundaria_Recreativos_1::
applymovement 7, ThreeIsland_Secundaria_Recreativos_Move_2
applymovement 6, ThreeIsland_Secundaria_Recreativos_Move_2
waitmovement 0x0
msgbox ThreeIsland_Secundaria_Recreativos_Texto_5.2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq ThreeIsland_Secundaria_Recreativos_No
goto ThreeIsland_Secundaria_Recreativos_2

ThreeIsland_Secundaria_Recreativos_Texto_5.2:
	.string "Have you reconsidered? Would you\n"
	.string "assist us in recovering the JOYFUL GAME\l"
	.string "CORNER?$"

ThreeIsland_Secundaria_Recreativos_3::
faceplayer
applymovement 7, ThreeIsland_Secundaria_Recreativos_Move_2
applymovement 6, ThreeIsland_Secundaria_Recreativos_Move_2
waitmovement 0x0
msgbox ThreeIsland_Secundaria_Recreativos_Texto_13 MSGBOX_AUTOCLOSE
release
end


ThreeIsland_Secundaria_Recreativos_2::
playse SE_PIN
applymovement 7, ThreeIsland_Secundaria_Recreativos_Move_4
applymovement 6, ThreeIsland_Secundaria_Recreativos_Move_4
waitmovement 0x0
msgbox ThreeIsland_Secundaria_Recreativos_Texto_7 MSGBOX_AUTOCLOSE
applymovement 6, ThreeIsland_Secundaria_Recreativos_Move_5
waitmovement 0x0
msgbox ThreeIsland_Secundaria_Recreativos_Texto_8 MSGBOX_AUTOCLOSE
applymovement 6, ThreeIsland_Secundaria_Recreativos_Move_9
waitmovement 0x0
msgbox ThreeIsland_Secundaria_Recreativos_Texto_9 MSGBOX_AUTOCLOSE
msgbox ThreeIsland_Secundaria_Recreativos_Texto_10 MSGBOX_AUTOCLOSE
msgbox ThreeIsland_Secundaria_Recreativos_Texto_11 MSGBOX_AUTOCLOSE
msgbox ThreeIsland_Secundaria_Recreativos_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x404E, 3
release
end

ThreeIsland_Secundaria_Recreativos_No::
msgbox ThreeIsland_Secundaria_Recreativos_Texto_6 MSGBOX_AUTOCLOSE
applymovement 6, ThreeIsland_Secundaria_Recreativos_Move_7
applymovement 7, ThreeIsland_Secundaria_Recreativos_Move_8
waitmovement 0x0
release
end

ThreeIsland_Secundaria_Recreativos_Move_9:
delay_8
face_up
delay_8
face_right
step_end

ThreeIsland_Secundaria_Recreativos_Move_8:
face_down
step_end

ThreeIsland_Secundaria_Recreativos_Move_7:
face_up
step_end

ThreeIsland_Secundaria_Recreativos_Move_6:
walk_in_place_left
step_end

ThreeIsland_Secundaria_Recreativos_Move_5:
walk_in_place_right
step_end

ThreeIsland_Secundaria_Recreativos_Move_4:
emote_exclamation_mark
step_end

ThreeIsland_Secundaria_Recreativos_Move_3:
delay_8
delay_8
face_right
step_end

ThreeIsland_Secundaria_Recreativos_Move_2:
face_right
step_end

ThreeIsland_Secundaria_Recreativos_Move_1:
walk_in_place_down
step_end


ThreeIsland_Secundaria_Recreativos_Texto_1:
	.string "We can't do anything; the JOYFUL GAME\n"
	.string "CORNER now belong to them.$"

ThreeIsland_Secundaria_Recreativos_Texto_2:
	.string "Wait! You are one of them!$"

ThreeIsland_Secundaria_Recreativos_Texto_3:
	.string "Uh{PAUSE 15}…{PAUSE 15} no?$"

ThreeIsland_Secundaria_Recreativos_Texto_4:
	.string "I thought you were one of those KANTO\n"
	.string "guys; because of them, we'll have to\l"
	.string "leave the business on TWO ISLAND.$"

ThreeIsland_Secundaria_Recreativos_Texto_5:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

ThreeIsland_Secundaria_Recreativos_Texto_5.1:
	.string "Would you support us in retrieving it?$"

ThreeIsland_Secundaria_Recreativos_Texto_6:
	.string "It's understandable, a single TRAINER\n"
	.string "can't do much.$"

ThreeIsland_Secundaria_Recreativos_Texto_7:
	.string "You've got courage; you must be a\n"
	.string "fantastic TRAINER, but even with that,\l"
	.string "success isn't assured. Listen.$"

ThreeIsland_Secundaria_Recreativos_Texto_8:
	.string "Some guys from KANTO came a while ago.\n"
	.string "They were very interested in the\l"
	.string "JOYFUL GAME CORNER area and how this\l"
	.string "business could thrive here, far from\l"
	.string "the city.$"

ThreeIsland_Secundaria_Recreativos_Texto_9:
	.string "They didn't take long to propose selling\n"
	.string "it to them. But{PAUSE 20}…{PAUSE 20} when we refused, they\l"
	.string "forced us, and started building their\l"
	.string "own business.$"

ThreeIsland_Secundaria_Recreativos_Texto_10:
	.string "Now they haven't even paid us, and the\n"
	.string "JOYFUL GAME CORNER are filled with\l"
	.string "undesirables. We can't even get close\l"
	.string "to TWO ISLAND without them sending\l"
	.string "their POKÉMON against us.$"

ThreeIsland_Secundaria_Recreativos_Texto_11:
	.string "If things keep going this way, they'll\n"
	.string "open soon, and we won't be able to do\l"
	.string "anything to stop everyone from\l"
	.string "forgetting our old business.$"

ThreeIsland_Secundaria_Recreativos_Texto_12:
	.string "The only remaining choice is to go in\n"
	.string "there and expel them by force, just like\l"
	.string "they did to us. Could you do it?$"

ThreeIsland_Secundaria_Recreativos_Texto_13:
	.string "Did you manage to find them? Our\n"
	.string "RECREATIONAL areas are on TWO\l"
	.string "ISLAND; it's a small place, you can't\l"
	.string "miss it.$"

