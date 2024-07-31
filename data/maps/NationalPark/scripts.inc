NationalPark_MapScripts::
	.byte 0

NationalPark1::
end



NationalPark2::
end



NationalPark3::
end



NationalPark4::
end



NationalPark5::
end



NationalPark6::
lock     
faceplayer     
msgbox NationalPark_Text_6, MSGBOX_DEFAULT
release     
end

NationalPark_Text_6:
.string "I'm so tired of walking…\n"
.string "They should place some benches\l"
.string "around here to rest…$"



NationalPark7::
end



NationalPark8::
lock     
faceplayer     
msgbox NationalPark_Text_8, MSGBOX_DEFAULT
release     
end

NationalPark_Text_8:
.string "My dear NIDORAN loves\n"
.string "to walk around here.\l"
.string "It is so lovely!$"



NationalPark9::
end



NationalPark10::
lock     
faceplayer     
msgbox NationalPark_Text_10, MSGBOX_DEFAULT
release     
end

NationalPark_Text_10:
	.string "I really enjoy strolling around here.\n"
	.string "This place is such a grand,\l"
	.string "inspirational place for me.$"



NationalPark11::
end



NationalPark12::
lock     
faceplayer     
msgbox NationalPark_Text_12, MSGBOX_DEFAULT
release     
end

NationalPark_Text_12:
	.string "Looking down at the tall grass from\n"
	.string "above, it seems like a POKÉ BALL!$"



NationalPark13::
end



NationalPark_EventScript_Cazabichos::
	trainerbattle_single TRAINER_KIM_AND_IRIS, NationalPark_Text_CazabichosIntro, NationalPark_Text_CazabichosDefeated
	msgbox NationalPark_Text_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end



NationalPark_EventScript_Guarda::
	trainerbattle_single TRAINER_TORI_AND_TIA, NationalPark_Text_GuardaIntro, NationalPark_Text_GuardaDefeated
	msgbox NationalPark_Text_GuardaPostBattle, MSGBOX_AUTOCLOSE
	end



NationalPark_EventScript_Chico::
	trainerbattle_single TRAINER_TYRA_AND_IVY, NationalPark_Text_ChicoIntro, NationalPark_Text_ChicoDefeated
	msgbox NationalPark_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



NationalParkDocumento_100::
msgbox NationalParkDocumento_Text_100, MSGBOX_SIGN   
end

NationalParkDocumento_Text_100:
	.string "RELAXATION SQUARE\n"
	.string "NATIONAL PARK$"



NationalParkDocumento_101::
msgbox NationalParkDocumento_Text_101, MSGBOX_SIGN   
end

NationalParkDocumento_Text_101:
	.string "NATIONAL PARK\n"
	.string "Place where the most beautiful\l"
	.string "and brightest ideas are born!$"



NationalParkDocumento_102::
msgbox NationalParkDocumento_Text_102, MSGBOX_SIGN   
end

NationalParkDocumento_Text_102:
	.string "In honor of all the BUG TYPES\n"
	.string "of KANTO and JOHTO.$"
