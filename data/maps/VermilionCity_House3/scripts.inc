VermilionCity_House3_MapScripts::
	.byte 0

VermilionCityHouse3_1::
lock     
faceplayer     
msgbox VermilionCity_House3_Text_1, MSGBOX_DEFAULT
release     
end

VermilionCity_House3_Text_1:
.string "Me gustaría intercambiar cartas\n"
.string "con gente de todo el mundo.\l"
.string "Envié a mi PIDGEY a la SALA UNIÓN\l"
.string "para hacerlo por mí.$"



VermilionCityHouse3_2::
end



VermilionCityHouse3_3::
lock     
faceplayer     
msgbox VermilionCity_House3_Text_3, MSGBOX_DEFAULT
release     
end

VermilionCity_House3_Text_3:
.string "¡Mi PIDGEY volará al norte,\n"
.string "a CIUDAD AZAFRÁN, para llevar\l"
.string "una carta!$"



VermilionCityHouse3_4::
end



VermilionCityHouse3Documento_100::
msgbox VermilionCityHouse3Documento_Text_100, MSGBOX_SIGN   
end

VermilionCityHouse3Documento_Text_100:
.string "Querido PIPPI, espero que estés\n"
	.string "bien.\l"
	.string "He oído que AZAFRÁN está teniendo\l"
	.string "problemas con el TEAM ROCKET.\l"
	.string "CARMÍN parece estar a salvo.$"
