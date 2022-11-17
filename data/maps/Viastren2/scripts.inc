ViasTren2_MapScripts::
	.byte 0

ViasTren2_1::
lock     
faceplayer     
msgbox ViasTren2_Text_1, MSGBOX_DEFAULT
release     
end

ViasTren2_Text_1:
.string "Estamos en el ecuador del trayecto\n"
.string "TRIGAL-AZAFRÁN, si se te hace\l"
.string "demasiado largo, ¡puedes usar la BICI!$"




ViasTren2_4::
lock     
faceplayer     
msgbox ViasTren2_Text_4, MSGBOX_DEFAULT
release     
end

ViasTren2_Text_4:
.string "Hemos pasado CIUDAD CEREZO, desde\n"
.string "aquí la tenemos al suroeste.$"



ViasTren2_10::
lock     
faceplayer     
msgbox ViasTren2_Text_10, MSGBOX_DEFAULT
release     
end

ViasTren2_Text_10:
.string "El construir estas vías ha llevado a\n"
.string "darnos cuenta del mucho terreno por\l"
.string "explorar que aún nos queda.$"
