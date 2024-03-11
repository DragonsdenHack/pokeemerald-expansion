Olivine_NormanHouse_MapScripts::
	.byte 0

OlivineNormanHouse1::
end



OlivineNormanHouse2::
lock     
faceplayer     
msgbox OlivineCity_NormanHouse_Text_2, MSGBOX_DEFAULT
release     
end

OlivineCity_NormanHouse_Text_2:
.string "In a few years I will be a TRAINER!$"



OlivineNormanHouse3::
lock     
faceplayer     
msgbox OlivineCity_NormanHouse_Text_3, MSGBOX_DEFAULT
release     
end

OlivineCity_NormanHouse_Text_3:
	.string "My husband believes, given the current\n"
	.string "situation, neither JOHTO nor KANTO are\l"
	.string "the optimal regions for our son to begin\l"
	.string "his journey. Hence, we're planning to\l"
	.string "relocate to the far-off HOENN.$"



OlivineNormanHouse_EventScript_ReceiveSlakoth::
    lock
    faceplayer
	checkmoncatch SPECIES_SLAKOTH
	goto_if_eq VAR_RESULT, FALSE, OlivineNormanHouse_EventScript_TakeSlakoth 
	msgbox OlivineNormanHouse_Text_6b, MSGBOX_DEFAULT
	release
	end



OlivineNormanHouse_EventScript_TakeSlakoth::
    msgbox OlivineNormanHouse_Text_TakeSlakoth MSGBOX_DEFAULT
	msgbox OlivineNormanHouse_Text_TakeSlakoth2 MSGBOX_DEFAULT
	msgbox OlivineNormanHouse_Text_6, MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox OlivineNormanHouse_Text_MensajeSlakoth, MSGBOX_DEFAULT
	givemon SPECIES_SLAKOTH, 15, ITEM_NORMAL_GEM
	waitfanfare  
	release
	end 



OlivineNormanHouse_Text_TakeSlakoth:
	.string "I have many fond memories of my time in\n"
	.string "JOHTO, but it's time to return to HOENN.\l"
	.string "It's the best for our family.$"

OlivineNormanHouse_Text_TakeSlakoth2:
	.string "You too should visit that region\n"
	.string "someday, it has some exceptional\l"
	.string "POKÉMON that you won't find in any\l"
	.string "other region, like this one.$"

OlivineNormanHouse_Text_MensajeSlakoth:
.string "YOU OBTAINED A LV.5 SLAKOTH!$"

OlivineNormanHouse_Text_6:
	.string "SLAKOTH harbors an unparalleled\n"
	.string "potential within, even the LEGENDARIES\l"
	.string "fear its evolved form. But the immense\l"
	.string "vigor with which it attacks plunges it\l"
	.string "into a lethargy the next turn, the cost\l"
	.string "for wielding such brute force…$"

OlivineNormanHouse_Text_6b:
	.string "My son wants to become a TRAINER, and\n"
	.string "it's my duty to ensure he becomes a real\l"
	.string "one. That's the main reason for our\l"
	.string "departure to HOENN. I don't see the\l"
	.string "current JOHTO as the most suitable\l"
	.string "environment for a 10-year-old to start\l"
	.string "his adventure.$"
