NeoLavandaCementerio_MapScripts::
	.byte 0

NeoLavandaCementerio_1::
lock     
faceplayer     
msgbox NeoLavandaCementerio_Text_1, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerio_Text_1:
.string "Creo que aquí hay otras tumbas de\n"
.string "POKÉMON. Hay muchas cámaras en las que\l"
.string "solo el SR.FUJI y antiguos miembros de\l"
.string "PUEBLO LAVANDA pueden entrar.$"




NeoLavandaCementerio_2::
lock     
faceplayer     
msgbox NeoLavandaCementerio_Text_2, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerio_Text_2:
.string "He venido a rendir homenaje a las\n"
.string "tumbas de los POKÉMON.$"




NeoLavandaCementerio_3::
lock     
faceplayer     
msgbox NeoLavandaCementerio_Text_3, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerio_Text_3:
.string "A los POKÉMON que vivían conmigo… los\n"
.string "quería como a mis nietos.$"


NeoLavandaCementerio_Dialogo_Fuji::
lock
msgbox NeoLavandaCementerio_Dialogo_Fuji_Texto_1 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Texto_2 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Texto_3 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Texto_4 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Texto_5 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Texto_6 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Texto_7 MSGBOX_AUTOCLOSE
release
end

NeoLavandaCementerio_Dialogo_Fuji_Texto_1:
.string "FUJI: Si algo bueno tiene PUEBLO\n"
	.string "LAVANDA, es que es tan pequeño que\l"
	.string "todo está al lado, ¿no crees?$"

NeoLavandaCementerio_Dialogo_Fuji_Texto_2:
.string "Debo decirte que estoy muy contento\n"
	.string "con el resultado final del CEMENTERIO,\l"
	.string "todas las almas han sido trasladadas\l"
	.string "con éxito, el problema es que…$"

NeoLavandaCementerio_Dialogo_Fuji_Texto_3:
.string "Parece que no todas han visto con\n"
	.string "buenos ojos el cambio de aires. Siguen\l"
	.string "apegadas a la antigua TORRE POKÉMON.$"

NeoLavandaCementerio_Dialogo_Fuji_Texto_4:
.string "Tal vez tú puedas calmarla, ya viviste\n"
	.string "algo parecido en RUINAS ALFA, ¿no? La\l"
	.string "energía que aquí se ha manifestado es\l"
	.string "muy poderosa.$"

NeoLavandaCementerio_Dialogo_Fuji_Texto_5:
.string "…$"

NeoLavandaCementerio_Dialogo_Fuji_Texto_6:
.string "Observa, si interactúas con el\n"
	.string "ordenador podrás acceder a los pisos\l"
	.string "inferiores del CEMENTERIO. ¿Dónde iban\l"
	.string "a estar el resto de tumbas si no?$"

NeoLavandaCementerio_Dialogo_Fuji_Texto_7:
.string "Te espero abajo, {PLAYER}. Búscame en\n"
	.string "el S2, estaré con la secretaria de esa\l"
	.string "planta, allí es donde está el foco de\l"
	.string "energía.$"
