LavenderRadioP3_MapScripts::
	.byte 0

LavenderRadioP3_3::
lock     
faceplayer     
msgbox LavenderRadioP3_Text_3, MSGBOX_DEFAULT
release     
end

LavenderRadioP3_Text_3:
.string "El verdadero caos no hace ruido.$"




LavenderRadioP3_4::
lock     
faceplayer     
msgbox LavenderRadioP3_Text_4, MSGBOX_DEFAULT
release     
end

LavenderRadioP3_Text_4:
.string "Nunca me fío de alguien que no tiene\n"
.string "enemigos.$"





LavenderRadioP3_5::
lock     
faceplayer     
msgbox LavenderRadioP3_Text_5, MSGBOX_DEFAULT
release     
end

LavenderRadioP3_Text_5:
.string "Los GASTLY y HAUNTER ahora están en el\n"
.string "cementerio del sur… ¿Crees que una\l"
.string "parte ha emigrado a otro lugar? ¿La\l"
.string "parcela de CIUDAD CARMÍN? Tal vez\l"
.string "tengas razón.$"




LavenderRadioP3_8::
lock     
faceplayer     
msgbox LavenderRadioP3_Text_8, MSGBOX_DEFAULT
release     
end

LavenderRadioP3_Text_8:
.string "Cuanto mayor es la incertidumbre, más\n"
.string "valiosa es la opción.$"





LavenderRadioP3_9::
lock     
faceplayer     
msgbox LavenderRadioP3_Text_9, MSGBOX_DEFAULT
release     
end

LavenderRadioP3_Text_9:
.string "Cada vez más alto, cada vez más\n"
.string "difíciles los retos. ¿Hasta cuándo?$"





LavenderRadioP3_10::
lock     
faceplayer     
msgbox LavenderRadioP3_Text_10, MSGBOX_DEFAULT
release     
end

LavenderRadioP3_Text_10:
.string "La tolerancia llegará a tal nivel que las\n"
.string "personas inteligentes tendrán\l"
.string "prohibido hablar para no ofender a los\l"
.string "imbéciles.$"



LavenderRadioP3_EventScript_Cientifico::
	trainerbattle_single TRAINER_CRISTIN_3, LavenderRadioP3_Text_CientificoIntro, LavenderRadioP3_Text_CientificoDefeated
	msgbox LavenderRadioP3_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end
