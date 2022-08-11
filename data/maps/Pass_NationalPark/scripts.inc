Pass_NationalPark_MapScripts::
	.byte 0

PassNationalPark1::
lock     
faceplayer     
msgbox Text_1, MSGBOX_DEFAULT
release     
end

Text_1:
.string "Si necesitas despejarte de tu\n"
.string "ajetreada vida, el PARQUE NACIONAL\l"
.string "es el lugar adecuado.$"



PassNationalPark2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "Una vez oí hablar a CÉSAR de un\n"
.string "TIPO BICHO aún más potente que los\l"
.string "HERACROSS, PINSIR o SCIZOR. Era de\l"
.string "una región lejana, muy lento, pero\l"
.string "sobresaliente en todo lo demás.$"



PassNationalPark3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "¿No es este el sitio ideal para\n"
.string "hacer un picnic con los amigos?$"
