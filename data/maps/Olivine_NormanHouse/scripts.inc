Olivine_NormanHouse_MapScripts::
	.byte 0

OlivineNormanHouse1::
end



OlivineNormanHouse2::
lock     
faceplayer     
msgbox OlivineCity_NormanHouse_Text_2, MSGBOX_DEFAULT
release     
end

OlivineCity_NormanHouse_Text_2:
.string "¡Dentro de pocos años yo también\n"
.string "seré ENTRENADOR!$"



OlivineNormanHouse3::
lock     
faceplayer     
msgbox OlivineCity_NormanHouse_Text_3, MSGBOX_DEFAULT
release     
end

OlivineCity_NormanHouse_Text_3:
.string "Mi marido cree que, tal y como\n"
.string "están las cosas, ni JOHTO ni KANTO\l"
.string "son las regiones ideales para que\l"
.string "nuestro hijo inicie su aventura.\l"
.string "Es por eso que pronto nos\l"
.string "mudaremos a la lejana HOENN.$"



OlivineNormanHouse_EventScript_ReceiveSlakoth::
    lock
    faceplayer
	checkmoncatch SPECIES_SLAKOTH
	goto_if_eq VAR_RESULT, FALSE, OlivineNormanHouse_EventScript_TakeSlakoth 
	msgbox OlivineNormanHouse_Text_6b, MSGBOX_DEFAULT
	release
	end



OlivineNormanHouse_EventScript_TakeSlakoth::
    msgbox OlivineNormanHouse_Text_TakeSlakoth MSGBOX_DEFAULT
	msgbox OlivineNormanHouse_Text_TakeSlakoth2 MSGBOX_DEFAULT
	msgbox OlivineNormanHouse_Text_6, MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox OlivineNormanHouse_Text_MensajeSlakoth, MSGBOX_DEFAULT
	givemon SPECIES_SLAKOTH, 15, ITEM_NORMAL_GEM
	waitfanfare  
	release
	end 



OlivineNormanHouse_Text_TakeSlakoth:
    .string "Guardo muchos y muy buenos\n"
	.string "recuerdos de mi estancia en JOHTO,\l"
	.string "pero llegó el momento de volver a\l"
	.string "HOENN. Es lo mejor para nuestra\l"
	.string "familia.$"

OlivineNormanHouse_Text_TakeSlakoth2:
	.string "Tú también deberías visitar esa\n"
	.string "región algún día, tiene POKÉMON\l"
	.string "excepcionales que no encontrarás\l"
	.string "en ningua otra región, como este.$"

OlivineNormanHouse_Text_MensajeSlakoth:
.string "¡OBTUVISTE UN SLAKOTH AL NV.5!$"

OlivineNormanHouse_Text_6:
    .string "SLAKOTH guarda dentro de sí un\n"
	.string "potencial insuperable, incluso los\l"
	.string "LEGENDARIOS temen a su forma\l"
	.string "evolucionada. Pero ese enorme\l"
	.string "vigor con el que ataca le sume en\l"
	.string "un letargo al siguiente turno, el\l"
	.string "costo por hacer uso de tal fuerza\l"
	.string "bruta{PAUSE 5}…{PAUSE 5}$"

OlivineNormanHouse_Text_6b:
	.string "Mi hijo quiere ser ENTRENADOR, es\n"
	.string "mi deber encargarme de que se\l"
	.string "convierta en uno de verdad. Ese es\l"
	.string "el principal motivo de nuestra\l"
	.string "partida a HOENN, no veo a la JOHTO\l"
	.string "actual como el entorno más\l"
	.string "adecuado para que un niño de 10\l"
	.string "años comience su aventura.$"
