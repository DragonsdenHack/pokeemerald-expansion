PalletTown_MapScripts::
	.byte 0

PalletTown2::     
lock     
faceplayer     
msgbox PalletTown_Text_2, MSGBOX_DEFAULT
release     
end

PalletTown_Text_2: 
.string "El acceso a la tecnología debería\n"
.string "de estar prohibido para gente como\l"
.string "vosotros.$" 


PalletTown3::
lock     
faceplayer     
msgbox PalletTown_Text_3, MSGBOX_DEFAULT
release     
end

PalletTown_Text_3:
.string "¿Un ROCKET por aquí?\n"
.string "¿Qué estás tramando?$"


PalletTownDocumento_100::
lock     
msgbox PalletTownDocumento_Text_100, MSGBOX_SIGN
release     
end

PalletTownDocumento_Text_100:
.string "Casa de ROJO$"



PalletTownDocumento_101::
lock     
msgbox PalletTownDocumento_Text_101, MSGBOX_SIGN
release     
end

PalletTownDocumento_Text_101:
.string "Casa de AZUL$"



PalletTownDocumento_102::
msgbox PalletTownDocumento_Text_102, MSGBOX_SIGN   
end

PalletTownDocumento_Text_102:
    .string "LABORATORIO DE INVESTIGACIÓN DE\n"
	.string "OAK$"



PalletTownDocumento_103::
lock     
msgbox PalletTownDocumento_Text_103, MSGBOX_AUTOCLOSE
release     
end

PalletTownDocumento_Text_103:
    .string "PISTAS ENTRENADOR\p"
	.string "¡Pulsa START para abrir el MENÚ!$"



PalletTownDocumento_104::
lock     
msgbox PalletTownDocumento_Text_104, MSGBOX_DEFAULT
release     
end

PalletTownDocumento_Text_104:
	.string "PUEBLO PALETA\n"
	.string "¡Donde comienzan las grandes\l"
	.string "aventuras!$"
