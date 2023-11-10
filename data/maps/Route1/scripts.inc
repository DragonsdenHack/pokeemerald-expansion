Route1_MapScripts::
	.byte 0

Route1_1::
lock
faceplayer
msgbox Route1_1_Texto_1 MSGBOX_NPC
release
end

Route1_1_Texto_1:
.string "¿Darte una POCIÓN promocional yo?\n"
	.string "¡Para qué si ni siquiera podéis entrar a\l"
	.string "las tiendas!$"


Route1_2::
lock     
faceplayer     
msgbox Route1_Text_2, MSGBOX_DEFAULT
release     
end

Route1_Text_2:
.string "Cuando LANCE acabe de hacer\n"
.string "limpieza, a vosotros ROCKETS no os\l"
.string "quedará otra que huir de KANTO\l"
.string "como las ratas que sois.$"



Route1Documento_100::
msgbox Route1Documento_Text_100, MSGBOX_SIGN   
end

Route1Documento_Text_100:
.string "ROUTE 1\n"
    .string "PALLET TOWN - VIRIDIAN CITY$"
