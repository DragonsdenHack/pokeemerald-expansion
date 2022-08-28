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
