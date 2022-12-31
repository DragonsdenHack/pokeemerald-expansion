Route18_Path_2F_MapScripts::
	.byte 0

Route18Path2F_1::
lock     
faceplayer     
msgbox Route18_Path2F_Text_1, MSGBOX_DEFAULT
release     
end

Route18_Path2F_Text_1:
.string "Aléjate de mis POKÉMON ROCKET,\n"
.string "aunque tuvieses un MOLTRES en tu\l"
.string "poder no te lo cambiaría ni por un\l"
.string "vulgar MAGIKARP.$"



Route18Path2FDocumento_100::
msgbox Route18Path2FDocumento_Text_100, MSGBOX_SIGN   
end

Route18Path2FDocumento_Text_100:
.string "Has usado los prismáticos...\p"
	.string "¡PUEBLO PALETA está al oeste!$"



Route18Path2FDocumento_101::
msgbox Route18Path2FDocumento_Text_101, MSGBOX_SIGN   
end

Route18Path2FDocumento_Text_101:
.string "Has usado los prismáticos...\p"
	.string "¡Hay gente nadando!$"
