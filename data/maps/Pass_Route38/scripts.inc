Pass_Route38_MapScripts::
	.byte 0

PassRoute38-1::
lock     
faceplayer     
msgbox Text_1, MSGBOX_DEFAULT
release     
end

Text_1:
.string "Más al oeste podrás encontrar la\n"
.string "GRANJA MU-MU.\l"
.string "¡Su leche es la mejor bebida en\l"
.string "relación calidad-precio que\l"
.string "existe!$"



PassRoute38-2::
end



PassRoute38-3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "Ten cuidado en la siguiente ruta,\n"
.string "los TAUROS campan a sus anchas, ¡y\l"
.string "embisten a todo el que consideren\l"
.string "una amenaza!$"
