Pass_IlexForest_MapScripts::
	.byte 0

PassIlexForest1::
lock     
faceplayer     
msgbox PassIlexForest_Text_1, MSGBOX_DEFAULT
release     
end

PassIlexForest_Text_1:
.string "Nos encargamos de cuidar este gran\n"
.string "bosque y que todo esté en orden.\l"
.string "Por tu aspecto, pareces alguien\l"
.string "influyente y poderoso, pero al que\l"
.string "el éxito no se le ha subido a la\l"
.string "cabeza. No deberías de causar\l"
.string "problemas.\l"
.string "¡Disfruta del ENCINAR!$"



PassIlexForest2::
lock     
faceplayer     
msgbox PassIlexForest_Text_2, MSGBOX_DEFAULT
release     
end

PassIlexForest_Text_2:
.string "Si llevas algún mechero contigo,\n"
.string "más te vale guardarlo bien.\l"
.string "¡O enfadarás al guardián del\l"
.string "ENCINAR!$"



PassIlexForest3::
lock     
faceplayer     
msgbox PassIlexForest_Text_3, MSGBOX_DEFAULT
release     
end

PassIlexForest_Text_3:
.string "El ENCINAR es muy grande.\n"
.string "¡Cuidado!\l"
.string "¡No te pierdas!$"
