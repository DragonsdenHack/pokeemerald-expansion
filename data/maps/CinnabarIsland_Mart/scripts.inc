CinnabarIsland_Mart_MapScripts::
	.byte 0

CinnabarIslandMart1::
end



CinnabarIslandMart2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "¿No tienes ATAQUE X?\p"
.string "¡Es estupendo para luchar!$"



CinnabarIslandMart3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "¡Está bien tener más objetos!$"
