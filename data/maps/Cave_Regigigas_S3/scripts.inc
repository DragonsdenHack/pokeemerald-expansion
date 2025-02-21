Cave_Regigigas_S3_MapScripts::
	.byte 0


Cave_Regigigas_S3_Andra::
lock
msgbox Cave_Regigigas_S3_Andra_Texto_1 MSGBOX_DEFAULT
playmoncry SPECIES_CROBAT, CRY_MODE_ENCOUNTER
waitmoncry
release
end

Cave_Regigigas_S3_Andra_Texto_1:
	.string "Vamos, CROBAT. Pongamos a prueba todo\n"
	.string "lo que hemos aprendido.$"

Cave_Regigigas_S3_Cientifico_1::
lock
msgbox Cave_Regigigas_S3_Cientifico_1_Texto_1 MSGBOX_DEFAULT
release
end

Cave_Regigigas_S3_Cientifico_1_Texto_1:
	.string "¿¡Cómo un vulgar murciélago\n"
	.string "puede ser tan fuerte!?$"

Cave_Regigigas_S3_Cientifico_2::
lock
msgbox Cave_Regigigas_S3_Cientifico_2_Texto_1 MSGBOX_DEFAULT
release
end

Cave_Regigigas_S3_Cientifico_2_Texto_1:
	.string "¿Esa es la famosa transformación que\n"
	.string "desafía las leyes de la ciencia?$"
