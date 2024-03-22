Cianwood_House3_MapScripts::
	.byte 0

CianwoodHouse3_1::
lock     
faceplayer     
msgbox CianwoodCity_House3_Text_1, MSGBOX_DEFAULT
release     
end

CianwoodCity_House3_Text_1:
	.string "I've heard they plan to establish\n"
	.string "another SAFARI ZONE nearby; will that\l"
	.string "affect our city?$"



CianwoodHouse3_2::
lock     
faceplayer     
msgbox CianwoodCity_House3_Text_2, MSGBOX_DEFAULT
release     
end

CianwoodCity_House3_Text_2:
	.string "Nothing compares to CIANWOOD, trust\n"
	.string "me! This city is blessed with the bounty\l"
	.string "of the sea!$"



CianwoodHouse3_3::
end

CianwoodCity_EventScript_ReceiveAron::
    lock
    faceplayer
	checkmoncatch SPECIES_ARON
	goto_if_eq VAR_RESULT, FALSE, CianwoodCity_Aron_EventScript_TakeNosepass 
	msgbox CianwoodCity_Aron_Text_1, MSGBOX_DEFAULT
	release
	end

CianwoodCity_Aron_EventScript_TakeNosepass::
lock
faceplayer
    msgbox CianwoodCity_Aron_Text_TakeNosepass MSGBOX_DEFAULT
	msgbox CianwoodCity_Aron_Text_TakeNosepass2 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox CianwoodCity_Aron_Text_MensajeNosepass, MSGBOX_DEFAULT
	givemon SPECIES_ARON, 25, ITEM_NONE
	waitfanfare  
	release
	end 



CianwoodCity_Aron_Text_TakeNosepass:
	.string "Those HIKERS around here only talk\n"
	.string "about GEODUDE, ONIX or DONPHAN. What\l"
	.string "they don't know is that there are also\l"
	.string "amazing ROCK-TYPE POKÉMON in other\l"
	.string "regions.$"

CianwoodCity_Aron_Text_TakeNosepass2:
	.string "Look, check this POKÉMON for example.$"

CianwoodCity_Aron_Text_MensajeNosepass:
	.string "YOU OBTAINED A LV.25 ARON!$"

CianwoodCity_Aron_Text_1:
	.string "ARON has the potential to evolve into a\n"
	.string "POKÉMON with physical defense on par\l"
	.string "with STEELIX. I got to know about it\l"
	.string "thanks to CROM.$"

