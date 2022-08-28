Pass_VioletCity_MapScripts::
	.byte 0

PassVioletCity1::
lock     
faceplayer     
msgbox PassVioletCity_Text_1, MSGBOX_DEFAULT
release     
end

PassVioletCity_Text_1:
.string "¡Hola, chico!\n"
.string "¿Has visitado la TORRE BELSPROUT?$"
