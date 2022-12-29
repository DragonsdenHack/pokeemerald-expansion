Goldenrod_ShopCenterP5_MapScripts::
	.byte 0

GoldenrodShopCenterP5_1::
lock     
faceplayer     
msgbox Goldenrod_ShopP5_Text_1, MSGBOX_DEFAULT
release     
end

Goldenrod_ShopP5_Text_1:
.string "En esta ciudad hay algunos\n"
.string "entrenadores demasiado\l"
.string "competitivos, creo que deberían de\l"
.string "relajarse y disfrutar de todas las\l"
.string "posibilidades que TRIGAL ofrece,\l"
.string "sin más.\l"
.string "Después tenemos el polo opuesto\l"
.string "con las pijas que han arruinado el\l"
.string "GIMNASIO, por supuesto…$"



GoldenrodShopCenterP5_2::
lock     
faceplayer     
msgbox Goldenrod_ShopP5_Text_2, MSGBOX_DEFAULT
release     
end

Goldenrod_ShopP5_Text_2:
.string "Voy a hacer una acampada increíble\n"
.string "en el ENCINAR.\l"
.string "¡Llevo media hora nada más que\l"
.string "sacando refrescos y limonadas de\l"
.string "uno en uno para ahorrar dinero!$"



GoldenrodShopCenterP5Documento_100::
msgbox GoldenrodShopCenterP5Documento_Text_100, MSGBOX_SIGN   
end

GoldenrodShopCenterP5Documento_Text_100:
.string "¡Repón tus fuerzas!\n"
	.string "P5 DESCANSO$"
