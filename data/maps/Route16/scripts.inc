Route16_MapScripts::
	.byte 0

Route16_1::
end


Route16_2::
end


Route16_3::
end


Route16_4::
end


Route16_5::
end


Route16_6::
end


Route16_7::
end


Route16_8::
end


Route16_9::
end


Route16_10::
end


Route16_11::
lock     
faceplayer     
msgbox Route16_Text_11, MSGBOX_DEFAULT
release     
end

Route16_Text_11:
.string "Ese HITMONLEE pegaba durísimo…$"


Route16_12::
lock     
faceplayer     
msgbox Route16_Text_12, MSGBOX_DEFAULT
release     
end

Route16_Text_12:
.string "Ha acabado con nosotros 4 usando\n"
.string "solo a 2 POKÉMON…$"



Route16_13::
lock     
faceplayer     
msgbox Route16_Text_13, MSGBOX_DEFAULT
release     
end

Route16_Text_13:
.string "Ilusos…\n"
.string "Nadie que desafíe a un miembro de\l"
.string "la ÉLITE 4 puede salir bien\l"
.string "parado…$"


Route16_14::
lock     
faceplayer     
msgbox Route16_Text_14, MSGBOX_DEFAULT
release     
end

Route16_Text_14:
.string "Así que este es el poder de la\n"
.string "ÉLITE 4…$"

Route16_15::
lock     
faceplayer     
msgbox Route16_Text_15, MSGBOX_DEFAULT
release     
end

Route16_Text_15:
.string "Solo os queda hablar…o ir a\n"
.string "prisión.$"


Route16_16::
lock     
faceplayer     
msgbox Route16_Text_16, MSGBOX_DEFAULT
release     
end

Route16_Text_16:
.string "Ya los tenemos donde queríamos…$"



Route16_EventScript_Motorista::
	trainerbattle_single TRAINER_JACKI_4, Route16_Text_MotoristaIntro, Route16_Text_MotoristaDefeated
	msgbox Route16_MotoristaPostBattle, MSGBOX_AUTOCLOSE
	end



Route16_EventScript_Motorista2::
	trainerbattle_single TRAINER_AXLE, Route16_Text_Motorista2Intro, Route16_Text_Motorista2Defeated
	msgbox Route16_Motorista2PostBattle, MSGBOX_AUTOCLOSE
	end



Route16_EventScript_Motorista3::
	trainerbattle_single TRAINER_JEFF, Route16_Text_Motorista3Intro, Route16_Text_Motorista3Defeated
	msgbox Route16_Motorista3PostBattle, MSGBOX_AUTOCLOSE
	end



Route16_EventScript_Motorista4::
	trainerbattle_single TRAINER_JACKI_3, Route16_Text_Motorista4Intro, Route16_Text_Motorista4Defeated
	msgbox Route16_Motorista4PostBattle, MSGBOX_AUTOCLOSE
	end



Route16_EventScript_Motorista5::
	trainerbattle_single TRAINER_JACKI_2, Route16_Text_Motorista5Intro, Route16_Text_Motorista5Defeated
	msgbox Route16_Motorista5PostBattle, MSGBOX_AUTOCLOSE
	end



Route16_EventScript_Motorista6::
	trainerbattle_single TRAINER_DALTON_5, Route16_Text_Motorista6Intro, Route16_Text_Motorista6Defeated
	msgbox Route16_Motorista6PostBattle, MSGBOX_AUTOCLOSE
	end



Route16Documento_100::
msgbox Route16Documento_Text_100, MSGBOX_SIGN   
end

Route16Documento_Text_100:
	.string "RUTA 16\n"
	.string "CIUDAD AZULONA - CIUDAD FUCSIA$"



Route16Documento_101::
msgbox Route16Documento_Text_101, MSGBOX_SIGN   
end

Route16Documento_Text_101:
	.string "¡Disfruta de la pendiente!\n"
	.string "CAMINO BICIS$"
