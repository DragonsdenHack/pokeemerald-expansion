VermilionCity_Mart_MapScripts::
	.byte 0

VermilionCityMart1::
end



VermilionCityMart2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "Creo que los POKéMON pueden ser\n"
.string "buenos o malos. Todo depende del\l"
.string "ENTRENADOR.$"



VermilionCityMart3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "Hay gente mala que utiliza a los\n"
.string "POKéMON para cometer sus actos\l"
.string "delictivos.\p"
.string "El TEAM ROCKET trafica con\n"
.string "POKéMON raros.\p"
.string "Y prescinde de aquellos POKéMON\n"
.string "que no son muy populares o útiles.$"
