TwoIsland_House1_MapScripts::
	.byte 0

TwoIslandHouse1_1::
end

TwoIslandHouse1_Calvo::
lock
faceplayer
msgbox TwoIslandHouse1_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x404E, 2
goto_if_gt TwoIslandHouse1_Calvo_2
release
end

TwoIslandHouse1_Calvo_2::
delay 15
msgbox TwoIslandHouse1_Texto_2 MSGBOX_AUTOCLOSE
delay 15
playse MUS_RG_ENCOUNTER_BOY
msgbox TwoIslandHouse1_Texto_3 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_156, TwoIslandHouse1_Texto_4
applymovement 4, TwoIslandHouse1_Calvo_2_Move_1
waitmovement 0x0
msgbox TwoIslandHouse1_Texto_5 MSGBOX_AUTOCLOSE
applymovement 4, TwoIslandHouse1_Calvo_2_Move_2
waitmovement 0x0
playse SE_EXIT
removeobject 4
setflag FLAG_NUEVA_824
release
end

TwoIslandHouse1_Calvo_2_Move_2:
face_up
step_end

TwoIslandHouse1_Calvo_2_Move_1:
lock_facing_direction
walk_up
unlock_facing_direction
step_end

TwoIslandHouse1_Texto_1:
	.string "What is wrong with you? Don't you see we\n"
	.string "are building? Come back when we\l"
	.string "officially open!$"

TwoIslandHouse1_Texto_2:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

TwoIslandHouse1_Texto_3:
	.string "Do you enter here by force? I will show\n"
	.string "you how to get kicked out of here!$"

TwoIslandHouse1_Texto_4:
.string "Wait, what?$"

TwoIslandHouse1_Texto_5:
	.string "Who are you? I must warn the BOSS, you\n"
	.string "don't know who you are dealing with. If\l"
	.string "I were you, I would take the first\l"
	.string "SEAGALLOP to VERMILION as soon as\l"
	.string "possible.$"

TwoIslandHouse_Primer_Motero::
lock
faceplayer
msgbox TwoIslandHouse_Primer_Motero_Texto_1 MSGBOX_AUTOCLOSE
release
end

TwoIslandHouse_Primer_Motero_Texto_1:
.string "Hah!\n"
	.string "Look how I scratch the ground with my\l"
	.string "motorcycle! What does it matter, we will\l"
	.string "take it down anyways!$"

TwoIslandHouse_Segundo_Motero::
lock
faceplayer
msgbox TwoIslandHouse_Segundo_Motero_Texto_1 MSGBOX_AUTOCLOSE
release
end

TwoIslandHouse_Segundo_Motero_Texto_1:
	.string "This will be so cool, we will finally have\n"
	.string "a decent place to waste the time on\l"
	.string "these boring islands.$"

TwoIslandHouse_Tercer_Motero::
lock
faceplayer
msgbox TwoIslandHouse_Tercer_Motero_Texto_1 MSGBOX_AUTOCLOSE
release
end

TwoIslandHouse_Tercer_Motero_Texto_1:
.string "What are you looking for?\n"
	.string "Get away from here, kid!$"

TwoIslandHouse_Cuarto_Motero::
lock
faceplayer
msgbox TwoIslandHouse_Cuarto_Motero_Texto_1 MSGBOX_AUTOCLOSE
release
end

TwoIslandHouse_Cuarto_Motero_Texto_1:
	.string "Leave me alone, I am just moving the\n"
	.string "merchandise.$"

TwoIslandHouse1_Domador::
lock
faceplayer
msgbox TwoIslandHouse1_Domador_Texto_1 MSGBOX_AUTOCLOSE
release
end

TwoIslandHouse1_Domador_Texto_1:
	.string "I can't believe it! You beat everyone,\n"
	.string "you are incredible!$"

TwoIslandHouse1_PadrePedrita::
lock
faceplayer
compare VAR_UNUSED_0x404E, 4
goto_if_gt TwoIslandHouse1_PadrePedrita_2
msgbox TwoIslandHouse1_PadrePedrita_Texto_1 MSGBOX_AUTOCLOSE
msgbox TwoIslandHouse1_PadrePedrita_Texto_2 MSGBOX_AUTOCLOSE
msgbox TwoIslandHouse1_PadrePedrita_Texto_3 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox TwoIslandHouse1_PadrePedrita_Texto_4 MSGBOX_DEFAULT
givemon SPECIES_CRANIDOS, 25, ITEM_NONE
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox TwoIslandHouse1_PadrePedrita_Texto_5 MSGBOX_DEFAULT
givemon SPECIES_SKORUPI, 35, ITEM_NONE
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox TwoIslandHouse1_PadrePedrita_Texto_6 MSGBOX_DEFAULT
givemon SPECIES_PIPLUP, 15, ITEM_NONE
waitfanfare
setvar VAR_UNUSED_0x404E, 5
release
end

TwoIslandHouse1_PadrePedrita_2::
msgbox TwoIslandHouse1_PadrePedrita_Texto_7 MSGBOX_AUTOCLOSE
release
end


TwoIslandHouse1_PadrePedrita_Texto_1:
	.string "You saved our business, not just ours,\n"
	.string "but this island too from losing the\l"
	.string "peace and tranquility that\l"
	.string "characterizes it.$"

TwoIslandHouse1_PadrePedrita_Texto_2:
	.string "Those men wanted to transform this\n"
	.string "place into a tourist place to fill their\l"
	.string "pockets. They left so quickly that they\l"
	.string "forgot many POKÉMON they intended to\l"
	.string "sell as prizes.$"

TwoIslandHouse1_PadrePedrita_Texto_3:
	.string "I think they will be better off with you,\n"
	.string "take them.$"

TwoIslandHouse1_PadrePedrita_Texto_4:
.string "YOU RECEIVED A LV:25 CRANIDOS!!$"

TwoIslandHouse1_PadrePedrita_Texto_5:
.string "YOU RECEIVED A LV:35 SKORUPI!!$"

TwoIslandHouse1_PadrePedrita_Texto_6:
.string "YOU RECEIVED A LV:15 PIPLUP!!$"

TwoIslandHouse1_PadrePedrita_Texto_7:
	.string "I promise to work so hard to make this\n"
	.string "place what it always should have been.\l"
	.string "The perfect theme park for 10 year old\l"
	.string "children!$"
	
