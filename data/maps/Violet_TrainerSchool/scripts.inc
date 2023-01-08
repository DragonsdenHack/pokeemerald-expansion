Violet_TrainerSchool_MapScripts::
	.byte 0

VioletTrainerSchool1::
end



VioletTrainerSchool2::
end



VioletTrainerSchool3::
end



VioletTrainerSchool4::
end



VioletTrainerSchool5::
end



VioletTrainerSchool6::
end



VioletTrainerSchool7::
end



VioletTrainerSchool8::
end



VioletTrainerSchool9::
end



VioletTrainerSchool10::
end



VioletTrainerSchool11::
end



VioletTrainerSchool12::
end



VioletTrainerSchool_EventScript_ReceiveStarly::
    lock
    faceplayer
	checkmoncatch SPECIES_STARLY
	goto_if_eq VAR_RESULT, FALSE, VioletTrainerSchool_EventScript_TakeStarly 
	msgbox VioletTrainerSchool_Text_9, MSGBOX_DEFAULT
	release
	end



VioletTrainerSchool_EventScript_TakeStarly::
    msgbox VioletTrainerSchool_Text_TakeStarly MSGBOX_DEFAULT
	msgbox VioletTrainerSchool_Text_TakeStarly2 MSGBOX_DEFAULT
	msgbox VioletTrainerSchool_Text_TakeStarly3 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox VioletTrainerSchool_Text_MensajeStarly, MSGBOX_DEFAULT
	givemon SPECIES_STARLY, 10, ITEM_FLYING_GEM
	waitfanfare  
	release
	end 



VioletTrainerSchool_Text_TakeStarly:
    .string "¿Tú estuviste también en la clase\n"
	.string "de PEGASO, verdad?$"




VioletTrainerSchool_Text_TakeStarly2:
	.string "Es increíble lo que sabe acerca\n"
	.string "del TIPO VOLADOR. Además, trata\l"
	.string "siempre de resolver dudas de\l"
	.string "la forma más práctica.$"



VioletTrainerSchool_Text_TakeStarly3:
	.string "Me llegó incluso a dar un ave de\n"
	.string "no sé qué región lejana, al ver mi\l"
	.string "interés por ellas.\l"
	.string "¿Sabes qué?\l"
	.string "Estuve emparejándola con mi\l"
	.string "PIDGEOT y puso varios huevos que\l"
	.string "dieron a luz.\l"
	.string "¡Te daré uno de los que salieron!$"



VioletTrainerSchool_Text_MensajeStarly:
.string "¡OBTUVISTE UN STARLY AL NV.10!$"


VioletTrainerSchool_Text_9:
    .string "Ten cuidado con STARLY cuando\n"
	.string "crezca.\l"
	.string "¡Su evolución final es más\l"
	.string "agresiva y brava que PIDGEOT!$"
