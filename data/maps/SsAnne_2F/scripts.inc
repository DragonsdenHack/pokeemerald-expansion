SsAnne_2F_MapScripts::
	.byte 0

SsAnne2F_1::
lock     
faceplayer     
msgbox SsAnne2F_Text_1, MSGBOX_DEFAULT
release     
end

SsAnne2F_Text_1:
.string "No es muy común ver a gente de por\n"
.string "aquí con esa vestimenta.\l"
.string "¿Es alguna costumbre de algún\l"
.string "pueblo de esta región?$"



SsAnne2F_2::
lock     
faceplayer     
msgbox SsAnne2F_Text_2, MSGBOX_DEFAULT
release     
end

SsAnne2F_Text_2:
.string "La fiesta de lujo del SS.ANNE es\n"
.string "incomparable.$"
