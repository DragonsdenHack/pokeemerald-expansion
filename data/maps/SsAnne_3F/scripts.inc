SsAnne_3F_MapScripts::
	.byte 0

SsAnne3F_1::
end



SsAnne3F_2::
lock     
faceplayer     
msgbox SsAnne3F_Text_2, MSGBOX_DEFAULT
release     
end

SsAnne3F_Text_2:
.string "¡Vamos, relájate, estás aquí para\n"
.string "pasarlo bien!\l"
.string "¡Ni que estuvieras de infiltrado\l"
.string "en una misión de alto secreto!$"



SsAnne3F_3::
lock          
msgbox SsAnne3F_Text_3, MSGBOX_SIGN
release     
end

SsAnne3F_Text_3:
.string "¡Así!\n"
	.string "¡Enséñale a ese joven imberbe de\l"
	.string "KANTO cómo nos las gastamos aquí!$"



SsAnne3F_4::
lock          
msgbox SsAnne3F_Text_4, MSGBOX_SIGN
release     
end

SsAnne3F_Text_4:
.string "¡Vamos, POLIWHIRL!\n"
	.string "¡Mantén alto el nombre de\l"
	.string "nuestra flota!$"



SsAnne3F_5::
lock          
msgbox SsAnne3F_Text_5, MSGBOX_SIGN
playmoncry SPECIES_POLIWHIRL, CRY_MODE_ENCOUNTER
msgbox SsAnne3F_Text_5_2, MSGBOX_SIGN
release     
end

SsAnne3F_Text_5:
.string "¡POLIWHIRL!\n"
	.string "¡RAYO BURBUJA!$"

SsAnne3F_Text_5_2:
.string "¡Whirl!$"



SsAnne3F_7::
lock          
msgbox SsAnne3F_Text_7, MSGBOX_SIGN
release     
end

SsAnne3F_Text_7:
.string "¡Aficionados!\n"
	.string "¡Si saco a mi PINSIR este combate\l"
	.string "se acaba ahora mismo!$"
