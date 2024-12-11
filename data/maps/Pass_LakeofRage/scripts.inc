Pass_LakeofRage_MapScripts::
	.byte 0

Pass_LakeofRage_Primer_Policia::
lock
msgbox Pass_LakeofRage_Primer_Policia_Texto_1 MSGBOX_AUTOCLOSE
release
end

Pass_LakeofRage_Primer_Policia_Texto_1:
	.string "Nadie podría invadir este puesto de\n"
	.string "vigilancia sin nuestro consentimiento.$"

Pass_LakeofRage_Segundo_Policia::
lock
msgbox Pass_LakeofRage_Segundo_Policia_Texto_1 MSGBOX_AUTOCLOSE
release
end

Pass_LakeofRage_Segundo_Policia_Texto_1:
	.string "Este lugar es un regalo de la\n"
	.string "naturaleza, que cualquiera puede\l"
	.string "admirar sin pagar un solo ¥.$"
