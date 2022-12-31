CeladonCity_Shop_2F_MapScripts::
	.byte 0

CeladonShop2F_1::
end



CeladonShop2F_2::
end



CeladonShop2F_3::
lock     
faceplayer     
msgbox CeladonCity_Shop2F_Text_3, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop2F_Text_3:
.string "Tenemos un cliente habitual, LANCE,\n"
.string "que suele comprar capas.\p"
.string "La verdad es que debe de tener\n"
.string "un montón iguales en su casa…$"



CeladonShop2F_4::
lock     
faceplayer     
msgbox CeladonCity_Shop2F_Text_4, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop2F_Text_4:
.string "Para viajes largos deberías\n"
.string "comprar REVIVIR.$"



CeladonShop2FDocumento_100::
msgbox CeladonShop2FDocumento_Text_100, MSGBOX_SIGN   
end

CeladonShop2FDocumento_Text_100:
.string "Objetos de máxima calidad para los\n"
	.string "ENTRENADORES.\p"
	.string "P1: TIENDA DE LOS ENTRENADORES$"
