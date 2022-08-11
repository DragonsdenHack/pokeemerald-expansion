CeladonCity_Shop_2F_MapScripts::
	.byte 0

CeladonShop2F-1::
end



CeladonShop2F-2::
end



CeladonShop2F-3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "Tenemos un cliente habitual, LANCE,\n"
.string "que suele comprar capas.\p"
.string "La verdad es que debe de tener\n"
.string "un montón iguales en su casa...$"



CeladonShop2F-4::
lock     
faceplayer     
msgbox Text_4, MSGBOX_DEFAULT
release     
end

Text_4:
.string "Para viajes largos deberías\n"
.string "comprar REVIVIR.$"
