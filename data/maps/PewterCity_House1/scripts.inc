PewterCity_House1_MapScripts::
	.byte 0

PewterCityHouse1_1::
lock
faceplayer
msgbox PewterCityHouse1_1_Texto_1 MSGBOX_NPC
release
end

PewterCityHouse1_1_Texto_1:
.string "No se lo digas a mi padre, pero cuando mi\n"
	.string "NIDORAN se convierta en NIDOKING me\l"
	.string "uniré a vosotros. ¡GIOVANNI seguro que\l"
	.string "me felicita por tener un NIDOKING\l"
	.string "siendo tan joven! ¿Verdad?$"



PewterCityHouse1_2::
end



PewterCityHouse1_3::
lock     
faceplayer     
msgbox PewterCity_House1_Text_3, MSGBOX_DEFAULT
release     
end

PewterCity_House1_Text_3:
.string "Hay niños en esta casa ROCKET,\n"
.string "debería darte vergüenza irrumpir\l"
.string "así en una propiedad privada, al\l"
.string "más mínimo indicio de intentar\l"
.string "algo llamo a las autoridades.$"
