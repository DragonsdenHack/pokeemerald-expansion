SilphS2_2_MapScripts::
	.byte 0

SilphS2_2_Cientifico_1::
lock
msgbox SilphS2_2_Cientifico_1_Texto_1 MSGBOX_AUTOCLOSE
release
end

SilphS2_2_Cientifico_1_Texto_1:
	.string "La dedicación del tiempo a algo no\n"
	.string "productivo puede ser fuente de\l"
	.string "creatividad.$"

SilphS2_2_Cientifico_2::
lock
msgbox SilphS2_2_Cientifico_2_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox SilphS2_2_Cientifico_2_Texto_2 MSGBOX_AUTOCLOSE
release
end

SilphS2_2_Cientifico_2_Texto_1:
	.string "Me pregunto qué ocurrirá ahora con OAK\n"
	.string "y su familia. Vuestro LÍDER y OAK\l"
	.string "libraron intensos combates en el\l"
	.string "pasado, que deleitaron a toda la región.$"

SilphS2_2_Cientifico_2_Texto_2:
	.string "Yo creo que GIOVANNI lo perdonará por\n"
	.string "respeto a esa antigua rivalidad, pero\l"
	.string "tal vez el orgullo de OAK le impida\l"
	.string "aceptar ese perdón.$"

