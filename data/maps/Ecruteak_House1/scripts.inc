Ecruteak_House1_MapScripts::
	.byte 0

EcruteakHouse1::
lock     
faceplayer     
msgbox Ecruteak_House1_Text_1, MSGBOX_DEFAULT
release     
end

Ecruteak_House1_Text_1:
.string "El mundo ha cambiado. El\n"
.string "pragmatismo ha reemplazado al\l"
.string "valor, pero aún confío en que en\l"
.string "los despachos de SILPH y TORRE\l"
.string "RADIO queden personas con honor.$"



EcruteakHouse2Documento_100::
lock     
msgbox EcruteakHouse2Documento_Text_100, MSGBOX_DEFAULT
msgbox EcruteakHouse2Documento_Text_100YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EcruteakHouse2Documento_100No
msgbox EcruteakHouse2Documento_Text_100Yes, MSGBOX_DEFAULT
msgbox EcruteakHouse2Documento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EcruteakHouse2Documento_100No
msgbox EcruteakHouse2Documento_Text_100Yes2, MSGBOX_DEFAULT
release
end



EcruteakHouse2Documento_Text_100:
    .string "HISTORIA DE CIUDAD IRIS$"

EcruteakHouse2Documento_Text_100YesNo:
.string "¿Quieres leerla?$"

EcruteakHouse2Documento_Text_100YesNo2:
.string "¿Seguir leyendo?$"

EcruteakHouse2Documento_100No::
release
end

EcruteakHouse2Documento_Text_100Yes:
    .string "En CIUDAD IRIS había dos torres.\n"
	.string "Cada una acogía a un fuerte\l"
	.string "POKÉMON VOLADOR. Pero una de\l"
	.string "ellas se quemó. Y desde entonces\l"
	.string "no se ha visto a ninguno de los\l"
	.string "dos POKÉMON.$"



EcruteakHouse2Documento_Text_100Yes2:
    .string "En CIUDAD IRIS también vivían\n"
	.string "tres POKÉMON que corrían por toda\l"
	.string "la ciudad. Dicen que habían\l"
	.string "nacido del agua, del fuego y del\l"
	.string "rayo. Pero como no podían\l"
	.string "contener su enorme fuerza...\l"
	.string "huyeron hacia los pastos.$"
	