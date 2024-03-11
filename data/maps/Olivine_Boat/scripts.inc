Olivine_Boat_MapScripts::
	.byte 0

OlivineBoat1::
lock     
faceplayer     
msgbox OlivineBoat_Text_1, MSGBOX_DEFAULT
release     
end

OlivineBoat_Text_1:
	.string "The first connection point with\n"
	.string "OLIVINE PORT, obviously, will be\l"
	.string "VERMILLION CITY.$"



OlivineBoat2::
lock     
faceplayer     
msgbox OlivineBoat_Text_2, MSGBOX_DEFAULT
release     
end

OlivineBoat_Text_2:
	.string "The food here is unbeatable! In these\n"
	.string "waters, you have the best of\l"
	.string "KANTO-JOHTO together!$"



OlivineBoat3::
lock     
faceplayer     
msgbox OlivineBoat_Text_3, MSGBOX_DEFAULT
release     
end

OlivineBoat_Text_3:
	.string "Those SAILORS are tough guys! I didn't\n"
	.string "know that TENTACRUEL could be so\l"
	.string "annoying!$"



OlivineBoat4::
lock     
faceplayer     
msgbox OlivineBoat_Text_4, MSGBOX_DEFAULT
release     
end

OlivineBoat_Text_4:
	.string "Look at us! With everything that has\n"
	.string "happened in the last five years, who\l"
	.string "would have thought that KANTO and\l"
	.string "JOHTO would start making peace so soon.$"



OlivineBoat5::
end



OlivineBoat6::
lock     
faceplayer     
msgbox OlivineBoat_Text_6, MSGBOX_DEFAULT
release     
end

OlivineBoat_Text_6:
	.string "My brother should stop bragging about\n"
	.string "his POKÉMON acquired with a checkbook.\l"
	.string "I wouldn't feel the slightest pity if\l"
	.string "some sailor around here gave him a good\l"
	.string "lesson to shut him up once and for all.$"



OlivineBoat7::
lock     
faceplayer     
msgbox OlivineBoat_Text_7, MSGBOX_DEFAULT
release     
end

OlivineBoat_Text_7:
	.string "I think I'm getting dizzy, these parties\n"
	.string "are not for me.$"



OlivineBoat8::
lock     
faceplayer     
msgbox OlivineBoat_Text_8, MSGBOX_DEFAULT
release     
end

OlivineBoat_Text_8:
	.string "I bought a WISHIWASHI for 7000 COINS\n"
	.string "in GOLDENROD CITY just to show off in\l"
	.string "front of all these sailors, with a\l"
	.string "WATER-TYPE POKÉMON that they can\l"
	.string "never have but desire. Isn't that\l"
	.string "hierarchical? Hohoho!$"



OlivineBoat9::
end



OlivineBoat_EventScript_Caballero::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_6, OlivineBoat_Text_CaballeroIntro, OlivineBoat_Text_CaballeroDefeated
	msgbox OlivineBoat_Text_CaballeroPostBattle, MSGBOX_AUTOCLOSE
	end



OlivineBoat_EventScript_Marinero::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_7, OlivineBoat_Text_MarineroIntro, OlivineBoat_Text_MarineroDefeated
	msgbox OlivineBoat_Text_MarineroPostBattle, MSGBOX_AUTOCLOSE
	end
