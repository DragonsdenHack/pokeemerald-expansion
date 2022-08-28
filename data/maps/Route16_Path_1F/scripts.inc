Route16_Path_1F_MapScripts::
	.byte 0

Route16Path1F_1::
lock     
faceplayer     
msgbox Route16_Path1F_Text_1, MSGBOX_DEFAULT
release     
end

Route16_Path1F_Text_1:
.string "¿Pero que diablos?\n"
.string "Es raro ver a gente común pasar\l"
.string "por aquí, ¿pero un ROCKET?\l"
.string "¡Nunca lo había visto!$"



Route16Path1F_2::
lock     
faceplayer     
msgbox Route16_Path1F_Text_2, MSGBOX_DEFAULT
release     
end

Route16_Path1F_Text_2:
.string "Poco me importa que uses o no una\n"
.string "BICI para entrar en el CAMINO\l"
.string "BICIS ROCKET, ya estás en la lista\l"
.string "negra, no tenéis remedio y no voy\l"
.string "a gastar ni un segundo de mi\l"
.string "tiempo en tratar de reinsertarte\l"
.string "en la sociedad.$"
